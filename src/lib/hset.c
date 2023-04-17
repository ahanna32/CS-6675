/*
 * THIS FILE WAS AUTOMATICALLY GENERATED -- DO NOT EDIT.
 *
 * Generating command:
 *
 *     ../../scripts/generic-pp /dev/null hgeneric.ct set cdata SET
 *
 * Generated on Fri Apr 14 11:55:56 EDT 2023.
 */

/*
 * Copyright (c) 2012-2013 Raphael Manfredi
 *
 *----------------------------------------------------------------------
 * This file is part of gtk-gnutella.
 *
 *  gtk-gnutella is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2 of the License, or
 *  (at your option) any later version.
 *
 *  gtk-gnutella is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with gtk-gnutella; if not, write to the Free Software
 *  Foundation, Inc.:
 *      51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA
 *----------------------------------------------------------------------
 */

/**
 * @ingroup lib
 * @file
 *
 * Hash set implementation.
 *
 * Each hash set object can be made thread-safe, optionally, so that
 * concurrent access to it be possible.
 *
 * @author Raphael Manfredi
 * @date 2012-2013
 */

#include "common.h"

#define HSET_SOURCE

#include "hset.h"
#include "unsigned.h"
#include "walloc.h"
#include "xmalloc.h"

#include "override.h"			/* Must be the last header included */

/* Reverse assignment attempt */
#define HASH_SET(x) \
	(((x) != NULL && \
		HSET_MAGIC == (x)->magic) ? (hset_t *) (x) : NULL)

/**
 * The hash set structure.
 */
struct hset {
	HASH_COMMON_ATTRIBUTES
};

enum hset_iter_magic { HSET_ITER_MAGIC = 0x34419ef9 };

static inline void
hset_check(const hset_t * const hx)
{
	g_assert(hx != NULL);
	g_assert(HSET_MAGIC == hx->magic);
}

/**
 * A hash set iterator.
 */
struct hset_iter {
	enum hset_iter_magic magic;
	const hset_t *hx;
	size_t pos;					/* Current position (next item returned) */
	size_t stamp;				/* Modification stamp */
	unsigned deleted:1;			/* Whether we deleted items */
};

static inline void
hset_iter_check(const hset_iter_t * const hxi)
{
	g_assert(hxi != NULL);
	g_assert(HSET_ITER_MAGIC == hxi->magic);
	hset_check(hxi->hx);
}

static const struct hash_ops hset_ops;

static void
hset_values_set(struct hash *h, const void **values)
{
	(void) h;
	(void) values;

	g_assert_not_reached();		/* Cannot be called */
}

static const void **
hset_values_get(const struct hash *h)
{
	(void) h;

	return NULL;	/* No values */
}

static void
hset_hash_free(struct hash *h)
{
	hset_t *hx = HASH_SET(h);

	hset_free_null(&hx);
}

/**
 * Allocate a new hash set capable of holding 2^bits items.
 */
static hset_t *
hset_allocate(size_t bits, bool raw)
{
	hset_t *hx;

	if (raw)
		XMALLOC0(hx);
	else
		WALLOC0(hx);

	hx->magic = HSET_MAGIC;
	hx->ops = &hset_ops;
	hx->kset.raw_memory = booleanize(raw);
	hash_arena_allocate(HASH(hx), bits);

	return hx;
}

/**
 * Create a new hash set using default sizing approach, for specific
 * key types (i.e. not HASH_KEY_ANY).
 *
 * @param ktype		key type
 * @param keysize	expected for HASH_KEY_FIXED to give key size, otherwise 0
 *
 * @return new hash set.
 */
hset_t *
hset_create(enum hash_key_type ktype, size_t keysize)
{
	hset_t *hx;

	g_assert(ktype != HASH_KEY_ANY);	/* Use hset_create_any() */

	hx = hset_allocate(HASH_MIN_BITS, FALSE);
	hash_keyhash_setup(&hx->kset, ktype, keysize);

	return hx;
}

/**
 * Create a new hash set using default sizing approach, for specific
 * key types (i.e. not HASH_KEY_ANY).
 *
 * The object is allocated via xpmalloc() and avoids walloc() for the arena.
 *
 * @param ktype		key type
 * @param keysize	expected for HASH_KEY_FIXED to give key size, otherwise 0
 *
 * @return new hash set.
 */
hset_t *
hset_create_real(enum hash_key_type ktype, size_t keysize)
{
	hset_t *hx;

	g_assert(ktype != HASH_KEY_ANY);	/* Use hset_create_any() */

	hx = hset_allocate(HASH_MIN_BITS, TRUE);
	hash_keyhash_setup(&hx->kset, ktype, keysize);

	return hx;
}

/**
 * Create a new hash set using default sizing approach, for any key.
 *
 * @param primary	primary hash function (cannot be NULL)
 * @param secondary	secondary hash function (may be NULL)
 * @param eq		key equality function (NULL means '==' checks)
 *
 * @return new hash set.
 */
hset_t *
hset_create_any(hash_fn_t primary, hash_fn_t secondary, eq_fn_t eq)
{
	hset_t *hx;

	g_assert(primary != NULL);

	hx = hset_allocate(HASH_MIN_BITS, FALSE);
	hash_keyhash_any_setup(&hx->kset, primary, secondary, eq);

	return hx;
}

/**
 * Create a new hash set using default sizing approach, for any key.
 *
 * The object is allocated via xpmalloc() and avoids walloc() for the arena.
 *
 * @param primary	primary hash function (cannot be NULL)
 * @param secondary	secondary hash function (may be NULL)
 * @param eq		key equality function (NULL means '==' checks)
 *
 * @return new hash set.
 */
hset_t *
hset_create_any_real(hash_fn_t primary, hash_fn_t secondary, eq_fn_t eq)
{
	hset_t *hx;

	g_assert(primary != NULL);

	hx = hset_allocate(HASH_MIN_BITS, TRUE);
	hash_keyhash_any_setup(&hx->kset, primary, secondary, eq);

	return hx;
}

/**
 * Destroy hash set.
 */
static void
hset_free(hset_t *hx)
{
	hset_check(hx);
	g_assert(0 == hx->refcnt);	/* No pending iterators */

	hash_arena_free(HASH(hx));
	hx->magic = 0;
	if (hx->kset.raw_memory)
		xfree(hx);
	else
		WFREE(hx);
}

/**
 * Destroy hash set and nullify its pointer.
 */
void
hset_free_null(hset_t **hx_ptr)
{
	hset_t *hx = *hx_ptr;

	if (hx != NULL) {
		hset_free(hx);
		*hx_ptr = NULL;
	}
}

/**
 * Mark hash set as thread-safe.
 */
void
hset_thread_safe(hset_t *hx)
{
	hset_check(hx);

	hash_thread_safe(HASH(hx));
}

/**
 * Lock the hash set to allow a sequence of operations to be atomically
 * conducted.
 *
 * It is possible to lock the set several times as long as each locking
 * is paired with a corresponding unlocking in the execution flow.
 *
 * The set must have been marked thread-safe already.
 */
void
hset_lock(hset_t *hx)
{
	hset_check(hx);
	g_assert_log(hx->lock != NULL,
		"%s(): hash set %p not marked thread-safe", G_STRFUNC, hx);

	mutex_lock(hx->lock);
}

/*
 * Release lock on hash set.
 *
 * The set must have been marked thread-safe already and locked by the
 * calling thread.
 */
void
hset_unlock(hset_t *hx)
{
	hset_check(hx);
	g_assert_log(hx->lock != NULL,
		"%s(): hash set %p not marked thread-safe", G_STRFUNC, hx);

	mutex_unlock(hx->lock);
}

/**
 * Insert item in hash set.
 *
 * Any previously existing key is replaced by the new one.
 *
 * @param hs		the hash set
 * @param key		the key
 */
void
hset_insert(hset_t *hs, const void *key)
{
	hset_check(hs);

	hash_synchronize(HASH(hs));

	hash_insert_key(HASH(hs), key);
	hs->stamp++;

	hash_return_void(HASH(hs));
}

/**
 * Check whether key is held in hash set.
 *
 * @param hx		the hash set
 * @param key		the key
 *
 * @return whether set contains the key.
 */
bool
hset_contains(const hset_t *hx, const void *key)
{
	bool found;

	hset_check(hx);

	hash_synchronize(HASH(hx));
	found = (size_t) -1 != hash_lookup_key(HASH(hx), key);
	hash_return(HASH(hx), found);
}

/**
 * Get a random key from the hash set.
 *
 * @param hx		the hash set
 *
 * @return the selected random key, NULL if the set is empty.
 */
const void *
hset_random(const hset_t *hx)
{
	size_t idx;
	const void *key;

	hset_check(hx);

	if ((size_t) -1 == (idx = hash_random(HASH(hx), &key)))
		return NULL;

	return key;
}

/**
 * Fetch original key from the hash set.
 *
 * @param hs		the hash set
 * @param key		the key being looked up
 *
 * @return found key, or NULL if not found.
 *
 * @attention
 * Since NULL could be a valid key, one cannot use NULL as a valid signal
 * for a missing key unless one knows that no NULL is inserted in the set.
 */
void *
hset_lookup(const hset_t *hs, const void *key)
{
	size_t idx;
	void *fkey;

	hset_check(hs);

	hash_synchronize(HASH(hs));

	idx = hash_lookup_key(HASH(hs), key);
	fkey = (size_t) -1 == idx ? NULL : deconstify_pointer(hs->kset.keys[idx]);

	hash_return(HASH(hs), fkey);
}

/**
 * Lookup key from the hash set, returning whether the key exists.
 * If it does, the original key pointer is written in keyptr.
 *
 * @param hs		the hash set
 * @param key		the key being looked up
 * @param keyptr	if non-NULL, where the original key pointer is written
 *
 * @return whether key exists in the set.
 */
bool
hset_contains_extended(const hset_t *hs, const void *key, const void **keyptr)
{
	size_t idx;

	hset_check(hs);

	hash_synchronize(HASH(hs));

	idx = hash_lookup_key(HASH(hs), key);

	if ((size_t) -1 == idx)
		hash_return(HASH(hs), FALSE);

	if (keyptr != NULL)
		*keyptr = hs->kset.keys[idx];

	hash_return(HASH(hs), TRUE);
}

/**
 * Choose random key from set.
 *
 * @param hs		the hash set
 * @param keyptr	if non-NULL, where the chosen key pointer is written
 *
 * @return whether a key was selected (always TRUE, unless set was empty).
 */
bool
hset_random_extended(const hset_t *hs, const void **keyptr)
{
	hset_check(hs);

	return (size_t) -1 != hash_random(HASH(hs), keyptr);
}

/**
 * Remove key from the hash set.
 *
 * @return TRUE if the key was present in the set.
 */
bool
hset_remove(hset_t *hx, const void *key)
{
	bool present;

	hset_check(hx);

	hash_synchronize(HASH(hx));

	hx->stamp++;
	present = hash_delete_key(HASH(hx), key);

	hash_return(HASH(hx), present);
}

/**
 * @return amount of items in the set.
 */
size_t
hset_count(const hset_t *hx)
{
	size_t count;

	hset_check(hx);

	hash_synchronize(HASH(hx));
	count = hx->kset.items;
	hash_return(HASH(hx), count);
}

/**
 * Remove all items from hash table.
 */
void hset_clear(hset_t *hx)
{
	hset_check(hx);

	hash_clear(HASH(hx));
}

/**
 * Traverse set, invoking callback for each entry.
 *
 * @param hx	the hash set
 * @param fn	callback to invoke
 * @param data	additional callback parameter
 */
void
hset_foreach(const hset_t *hx, cdata_fn_t fn, void *data)
{
	unsigned *hp, *end;
	size_t i, n;

	hset_check(hx);

	hash_synchronize(HASH(hx));

	end = &hx->kset.hashes[hx->kset.size];
	hash_refcnt_inc(HASH(hx));		/* Prevent any key relocation */

	for (i = n = 0, hp = hx->kset.hashes; hp != end; i++, hp++) {
		if (HASH_IS_REAL(*hp)) {
			(*fn)(hx->kset.keys[i], data);
			n++;
		}
	}

	g_assert(n == hx->kset.items);

	hash_refcnt_dec(HASH(hx));
	hash_return_void(HASH(hx));
}


/**
 * Traverse set, invoking callback for each entry and removing it when
 * the callback function returns TRUE.
 *
 * @param hx	the hash set
 * @param fn	callback to invoke
 * @param data	additional callback parameter
 *
 * @return the number of entries removed from the hash set.
 */
size_t
hset_foreach_remove(hset_t *hx, cdata_rm_fn_t fn, void *data)
{
	unsigned *hp, *end;
	size_t i, n, nr;

	hset_check(hx);

	hash_synchronize(HASH(hx));

	end = &hx->kset.hashes[hx->kset.size];
	hash_refcnt_inc(HASH(hx));		/* Prevent any key relocation */

	for (i = n = nr = 0, hp = hx->kset.hashes; hp != end; i++, hp++) {
		if (HASH_IS_REAL(*hp)) {
			bool r = (*fn)(hx->kset.keys[i], data);
			n++;
			if (r) {
				nr++;
				hash_erect_tombstone(HASH(hx), i);
				hx->stamp++;
			}
		}
	}

	g_assert(n == hx->kset.items);
	g_assert(nr <= hx->kset.items);

	hash_refcnt_dec(HASH(hx));

	hx->kset.items -= nr;

	if (nr != 0)
		hash_resize_as_needed(HASH(hx));

	hash_return(HASH(hx), nr);
}

/**
 * Create a new hash set iterator.
 */
hset_iter_t *
hset_iter_new(const hset_t *hx)
{
	hset_iter_t *hxi;

	hset_check(hx);

	WALLOC0(hxi);
	hxi->magic = HSET_ITER_MAGIC;
	hxi->hx = hx;

	hash_synchronize(HASH(hx));

	hxi->stamp = hx->stamp;
	hash_refcnt_inc(HASH(hx));

	hash_unsynchronize(HASH(hx));

	return hxi;
}

/**
 * Release hash set iterator.
 */
void
hset_iter_release(hset_iter_t **hxi_ptr)
{
	hset_iter_t *hxi = *hxi_ptr;

	if (hxi != NULL) {
		hset_iter_check(hxi);

		hash_synchronize(HASH(hxi->hx));

		hash_refcnt_dec(HASH(hxi->hx));
		if (hxi->deleted && 0 == hxi->hx->refcnt)
			hash_resize_as_needed(HASH(hxi->hx));

		hash_unsynchronize(HASH(hxi->hx));

		hxi->magic = 0;
		WFREE(hxi);
		*hxi_ptr = NULL;
	}
}

/**
 * Fetch next entry from iterator.
 *
 * @param hxi	the hash set iterator
 * @param kp	where key is written, if non-NULL
 *
 * @return TRUE if a new entry exists, FALSE otherwise.
 */
bool
hset_iter_next(hset_iter_t *hxi, const void **kp)
{
	const hset_t *hx;

	hset_iter_check(hxi);

	hx = hxi->hx;

	hash_synchronize(HASH(hx));

	while (hxi->pos < hx->kset.size && !HASH_IS_REAL(hx->kset.hashes[hxi->pos]))
		hxi->pos++;

	if (hxi->pos >= hx->kset.size)
		hash_return(HASH(hx), FALSE);

	if (kp != NULL)
		*kp = hx->kset.keys[hxi->pos];

	hash_unsynchronize(HASH(hx));

	hxi->pos++;
	return TRUE;
}

/**
 * Remove current iterator item, returned by hset_iter_next().
 */
void
hset_iter_remove(hset_iter_t *hxi)
{
	hset_t *hx;
	size_t idx;

	hset_iter_check(hxi);
	g_assert(size_is_positive(hxi->pos));		/* Called _next() once */
	g_assert(hxi->pos <= hxi->hx->kset.size);

	hx = deconstify_pointer(hxi->hx);
	hash_synchronize(HASH(hx));

	idx = hxi->pos - 1;		/* Current item */
	if (hash_erect_tombstone(HASH(hx), idx))
		hx->kset.items--;

	hash_unsynchronize(HASH(hx));

	hxi->deleted = TRUE;
}

/**
 * Polymorphic operations.
 */
static const struct hash_ops hset_ops = {
	hset_values_set,		/* set_values */
	hset_values_get,		/* get_values */
	hset_hash_free,		/* hash_free */
};

/***
 *** Unit tests.
 ***/

/*
 * The hash set implementation is mostly derived from the same source as the
 * hash table and therefore does not need to be tested: the only variation
 * between the two implementations concerns the value management.
 */


/* vi: set ts=4 sw=4 syn=c cindent: */
