/*
 * THIS FILE WAS AUTOMATICALLY GENERATED -- DO NOT EDIT.
 *
 * Generating command:
 *
 *     ../../scripts/generic-pp /dev/null hgeneric.ct table ckeyval TABLE
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
 * Hash table implementation.
 *
 * Each hash table object can be made thread-safe, optionally, so that
 * concurrent access to it be possible.
 *
 * @author Raphael Manfredi
 * @date 2012-2013
 */

#include "common.h"

#define HTABLE_SOURCE

#include "htable.h"
#include "unsigned.h"
#include "walloc.h"
#include "xmalloc.h"

#include "override.h"			/* Must be the last header included */

/* Reverse assignment attempt */
#define HASH_TABLE(x) \
	(((x) != NULL && \
		HTABLE_MAGIC == (x)->magic) ? (htable_t *) (x) : NULL)

/**
 * The hash table structure.
 */
struct htable {
	HASH_COMMON_ATTRIBUTES
	const void **values;		/* Array of values */
};

enum htable_iter_magic { HTABLE_ITER_MAGIC = 0x4b0236cd };

static inline void
htable_check(const htable_t * const hx)
{
	g_assert(hx != NULL);
	g_assert(HTABLE_MAGIC == hx->magic);
}

/**
 * A hash table iterator.
 */
struct htable_iter {
	enum htable_iter_magic magic;
	const htable_t *hx;
	size_t pos;					/* Current position (next item returned) */
	size_t stamp;				/* Modification stamp */
	unsigned deleted:1;			/* Whether we deleted items */
};

static inline void
htable_iter_check(const htable_iter_t * const hxi)
{
	g_assert(hxi != NULL);
	g_assert(HTABLE_ITER_MAGIC == hxi->magic);
	htable_check(hxi->hx);
}

static const struct hash_ops htable_ops;

/**
 * Record the base of the values array.
 */
static void
htable_values_set(struct hash *h, const void **values)
{
	htable_t *ht = HASH_TABLE(h);

	g_assert(values != NULL);
	htable_check(ht);

	ht->values = values;
}

/**
 * Return the values array.
 */
static const void **
htable_values_get(const struct hash *h)
{
	const htable_t *ht = HASH_TABLE(h);

	return ht->values;
}

static void
htable_hash_free(struct hash *h)
{
	htable_t *hx = HASH_TABLE(h);

	htable_free_null(&hx);
}

/**
 * Allocate a new hash table capable of holding 2^bits items.
 */
static htable_t *
htable_allocate(size_t bits, bool raw)
{
	htable_t *hx;

	if (raw)
		XMALLOC0(hx);
	else
		WALLOC0(hx);

	hx->magic = HTABLE_MAGIC;
	hx->ops = &htable_ops;
	hx->kset.has_values = TRUE;
	hx->kset.raw_memory = booleanize(raw);
	hash_arena_allocate(HASH(hx), bits);

	return hx;
}

/**
 * Create a new hash table using default sizing approach, for specific
 * key types (i.e. not HASH_KEY_ANY).
 *
 * @param ktype		key type
 * @param keysize	expected for HASH_KEY_FIXED to give key size, otherwise 0
 *
 * @return new hash table.
 */
htable_t *
htable_create(enum hash_key_type ktype, size_t keysize)
{
	htable_t *hx;

	g_assert(ktype != HASH_KEY_ANY);	/* Use htable_create_any() */

	hx = htable_allocate(HASH_MIN_BITS, FALSE);
	hash_keyhash_setup(&hx->kset, ktype, keysize);

	return hx;
}

/**
 * Create a new hash table using default sizing approach, for specific
 * key types (i.e. not HASH_KEY_ANY).
 *
 * The object is allocated via xpmalloc() and avoids walloc() for the arena.
 *
 * @param ktype		key type
 * @param keysize	expected for HASH_KEY_FIXED to give key size, otherwise 0
 *
 * @return new hash table.
 */
htable_t *
htable_create_real(enum hash_key_type ktype, size_t keysize)
{
	htable_t *hx;

	g_assert(ktype != HASH_KEY_ANY);	/* Use htable_create_any() */

	hx = htable_allocate(HASH_MIN_BITS, TRUE);
	hash_keyhash_setup(&hx->kset, ktype, keysize);

	return hx;
}

/**
 * Create a new hash table using default sizing approach, for any key.
 *
 * @param primary	primary hash function (cannot be NULL)
 * @param secondary	secondary hash function (may be NULL)
 * @param eq		key equality function (NULL means '==' checks)
 *
 * @return new hash table.
 */
htable_t *
htable_create_any(hash_fn_t primary, hash_fn_t secondary, eq_fn_t eq)
{
	htable_t *hx;

	g_assert(primary != NULL);

	hx = htable_allocate(HASH_MIN_BITS, FALSE);
	hash_keyhash_any_setup(&hx->kset, primary, secondary, eq);

	return hx;
}

/**
 * Create a new hash table using default sizing approach, for any key.
 *
 * The object is allocated via xpmalloc() and avoids walloc() for the arena.
 *
 * @param primary	primary hash function (cannot be NULL)
 * @param secondary	secondary hash function (may be NULL)
 * @param eq		key equality function (NULL means '==' checks)
 *
 * @return new hash table.
 */
htable_t *
htable_create_any_real(hash_fn_t primary, hash_fn_t secondary, eq_fn_t eq)
{
	htable_t *hx;

	g_assert(primary != NULL);

	hx = htable_allocate(HASH_MIN_BITS, TRUE);
	hash_keyhash_any_setup(&hx->kset, primary, secondary, eq);

	return hx;
}

/**
 * Destroy hash table.
 */
static void
htable_free(htable_t *hx)
{
	htable_check(hx);
	g_assert(0 == hx->refcnt);	/* No pending iterators */

	hash_arena_free(HASH(hx));
	hx->magic = 0;
	if (hx->kset.raw_memory)
		xfree(hx);
	else
		WFREE(hx);
}

/**
 * Destroy hash table and nullify its pointer.
 */
void
htable_free_null(htable_t **hx_ptr)
{
	htable_t *hx = *hx_ptr;

	if (hx != NULL) {
		htable_free(hx);
		*hx_ptr = NULL;
	}
}

/**
 * Mark hash table as thread-safe.
 */
void
htable_thread_safe(htable_t *hx)
{
	htable_check(hx);

	hash_thread_safe(HASH(hx));
}

/**
 * Lock the hash table to allow a sequence of operations to be atomically
 * conducted.
 *
 * It is possible to lock the table several times as long as each locking
 * is paired with a corresponding unlocking in the execution flow.
 *
 * The table must have been marked thread-safe already.
 */
void
htable_lock(htable_t *hx)
{
	htable_check(hx);
	g_assert_log(hx->lock != NULL,
		"%s(): hash table %p not marked thread-safe", G_STRFUNC, hx);

	mutex_lock(hx->lock);
}

/*
 * Release lock on hash table.
 *
 * The table must have been marked thread-safe already and locked by the
 * calling thread.
 */
void
htable_unlock(htable_t *hx)
{
	htable_check(hx);
	g_assert_log(hx->lock != NULL,
		"%s(): hash table %p not marked thread-safe", G_STRFUNC, hx);

	mutex_unlock(hx->lock);
}

/**
 * Insert item in hash table.
 *
 * Any previously existing value for the key is replaced by the new one.
 * NULL is a valid value.
 *
 * @param ht		the hash table
 * @param key		the key
 * @param value		the value
 */
void
htable_insert(htable_t *ht, const void *key, void *value)
{
	size_t idx;

	htable_check(ht);

	hash_synchronize(HASH(ht));

	idx = hash_insert_key(HASH(ht), key);
	ht->values[idx] = value;
	ht->stamp++;

	hash_return_void(HASH(ht));
}

/**
 * Check whether key is held in hash table.
 *
 * @param hx		the hash table
 * @param key		the key
 *
 * @return whether table contains the key.
 */
bool
htable_contains(const htable_t *hx, const void *key)
{
	bool found;

	htable_check(hx);

	hash_synchronize(HASH(hx));
	found = (size_t) -1 != hash_lookup_key(HASH(hx), key);
	hash_return(HASH(hx), found);
}

/**
 * Get a random key from the hash table.
 *
 * @param hx		the hash table
 *
 * @return the selected random key, NULL if the table is empty.
 */
const void *
htable_random(const htable_t *hx)
{
	size_t idx;
	const void *key;

	htable_check(hx);

	if ((size_t) -1 == (idx = hash_random(HASH(hx), &key)))
		return NULL;

	return key;
}

/**
 * Fetch value from the hash table.
 *
 * @param ht		the hash table
 * @param key		the key being looked up
 *
 * @return found value, or NULL if not found.
 *
 * @attention
 * Since NULL is a valid value, one cannot use NULL as a valid signal
 * for a missing key unless one knows that no NULL is inserted in the
 * table.
 */
void *
htable_lookup(const htable_t *ht, const void *key)
{
	size_t idx;
	void *value;

	htable_check(ht);

	hash_synchronize(HASH(ht));

	idx = hash_lookup_key(HASH(ht), key);
	value = (size_t) -1 == idx ? NULL : deconstify_pointer(ht->values[idx]);

	hash_return(HASH(ht), value);
}

/**
 * Fetch key/value from the hash table, returning whether the key exists.
 * If it does, the original key/value pointers are written in keyptr and
 * valptr.
 *
 * @param ht		the hash table
 * @param key		the key being looked up
 * @param keyptr	if non-NULL, where the original key pointer is written
 * @param valptr	if non-NULL, where the original value pointer is written
 *
 * @return whether key exists in the table.
 */
bool
htable_lookup_extended(const htable_t *ht, const void *key,
	const void **keyptr, void **valptr)
{
	size_t idx;

	htable_check(ht);

	hash_synchronize(HASH(ht));

	idx = hash_lookup_key(HASH(ht), key);

	if ((size_t) -1 == idx)
		hash_return(HASH(ht), FALSE);

	if (keyptr != NULL)
		*keyptr = ht->kset.keys[idx];
	if (valptr != NULL)
		*valptr = deconstify_pointer(ht->values[idx]);

	hash_return(HASH(ht), TRUE);
}

/**
 * Fetch random key/value pair from table.
 *
 * @param ht		the hash table
 * @param keyptr	if non-NULL, where the chosen key pointer is written
 * @param valptr	if non-NULL, where the chosen value pointer is written
 *
 * @return whether a key was selected (always TRUE, unless table was empty).
 */
bool
htable_random_extended(const htable_t *ht, const void **keyptr, void **valptr)
{
	size_t idx;
	bool selected;

	htable_check(ht);

	hash_synchronize(HASH(ht));

	idx = hash_random(HASH(ht), keyptr);
	selected = idx != (size_t) -1;

	if (selected && valptr != NULL)
		*valptr = deconstify_pointer(ht->values[idx]);

	hash_return(HASH(ht), selected);
}

/**
 * Remove key from the hash table.
 *
 * @return TRUE if the key was present in the table.
 */
bool
htable_remove(htable_t *hx, const void *key)
{
	bool present;

	htable_check(hx);

	hash_synchronize(HASH(hx));

	hx->stamp++;
	present = hash_delete_key(HASH(hx), key);

	hash_return(HASH(hx), present);
}

/**
 * @return amount of items in the table.
 */
size_t
htable_count(const htable_t *hx)
{
	size_t count;

	htable_check(hx);

	hash_synchronize(HASH(hx));
	count = hx->kset.items;
	hash_return(HASH(hx), count);
}

/**
 * Remove all items from hash table.
 */
void htable_clear(htable_t *hx)
{
	htable_check(hx);

	hash_clear(HASH(hx));
}

/**
 * Traverse table, invoking callback for each entry.
 *
 * @param hx	the hash table
 * @param fn	callback to invoke
 * @param data	additional callback parameter
 */
void
htable_foreach(const htable_t *hx, ckeyval_fn_t fn, void *data)
{
	unsigned *hp, *end;
	size_t i, n;

	htable_check(hx);

	hash_synchronize(HASH(hx));

	end = &hx->kset.hashes[hx->kset.size];
	hash_refcnt_inc(HASH(hx));		/* Prevent any key relocation */

	for (i = n = 0, hp = hx->kset.hashes; hp != end; i++, hp++) {
		if (HASH_IS_REAL(*hp)) {
			(*fn)(hx->kset.keys[i], deconstify_pointer(hx->values[i]), data);
			n++;
		}
	}

	g_assert(n == hx->kset.items);

	hash_refcnt_dec(HASH(hx));
	hash_return_void(HASH(hx));
}

/**
 * Traverse table, invoking callback for each key.
 *
 * @param hx	the hash table
 * @param fn	callback to invoke on the key
 * @param data	additional callback parameter
 */
void
htable_foreach_key(const htable_t *ht, data_fn_t fn, void *data)
{
	hash_foreach(HASH(ht), fn, data);
}

/**
 * Traverse table, invoking callback for each entry and removing it when
 * the callback function returns TRUE.
 *
 * @param hx	the hash table
 * @param fn	callback to invoke
 * @param data	additional callback parameter
 *
 * @return the number of entries removed from the hash table.
 */
size_t
htable_foreach_remove(htable_t *hx, ckeyval_rm_fn_t fn, void *data)
{
	unsigned *hp, *end;
	size_t i, n, nr;

	htable_check(hx);

	hash_synchronize(HASH(hx));

	end = &hx->kset.hashes[hx->kset.size];
	hash_refcnt_inc(HASH(hx));		/* Prevent any key relocation */

	for (i = n = nr = 0, hp = hx->kset.hashes; hp != end; i++, hp++) {
		if (HASH_IS_REAL(*hp)) {
			bool r = (*fn)(hx->kset.keys[i],
				deconstify_pointer(hx->values[i]), data);
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
 * Create a new hash table iterator.
 */
htable_iter_t *
htable_iter_new(const htable_t *hx)
{
	htable_iter_t *hxi;

	htable_check(hx);

	WALLOC0(hxi);
	hxi->magic = HTABLE_ITER_MAGIC;
	hxi->hx = hx;

	hash_synchronize(HASH(hx));

	hxi->stamp = hx->stamp;
	hash_refcnt_inc(HASH(hx));

	hash_unsynchronize(HASH(hx));

	return hxi;
}

/**
 * Release hash table iterator.
 */
void
htable_iter_release(htable_iter_t **hxi_ptr)
{
	htable_iter_t *hxi = *hxi_ptr;

	if (hxi != NULL) {
		htable_iter_check(hxi);

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
 * @param hxi	the hash table iterator
 * @param kp	where key is written, if non-NULL
 * @param vp	where value is written, if non-NULL
 *
 * @return TRUE if a new entry exists, FALSE otherwise.
 */
bool
htable_iter_next(htable_iter_t *hxi, const void **kp, void **vp)
{
	const htable_t *hx;

	htable_iter_check(hxi);

	hx = hxi->hx;

	hash_synchronize(HASH(hx));

	while (hxi->pos < hx->kset.size && !HASH_IS_REAL(hx->kset.hashes[hxi->pos]))
		hxi->pos++;

	if (hxi->pos >= hx->kset.size)
		hash_return(HASH(hx), FALSE);

	if (kp != NULL)
		*kp = hx->kset.keys[hxi->pos];
	if (vp != NULL)
		*vp = deconstify_pointer(hx->values[hxi->pos]);

	hash_unsynchronize(HASH(hx));

	hxi->pos++;
	return TRUE;
}

/**
 * Remove current iterator item, returned by htable_iter_next().
 */
void
htable_iter_remove(htable_iter_t *hxi)
{
	htable_t *hx;
	size_t idx;

	htable_iter_check(hxi);
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
static const struct hash_ops htable_ops = {
	htable_values_set,		/* set_values */
	htable_values_get,		/* get_values */
	htable_hash_free,		/* hash_free */
};

/***
 *** Unit tests.
 ***/

/*
 * The hash set implementation is mostly derived from the same source as the
 * hash table and therefore does not need to be tested: the only variation
 * between the two implementations concerns the value management.
 */

static void G_COLD
htable_test_fill(htable_t *ht)
{
	size_t i;

	for (i = 0; i < 256; i++) {
		void *p = ulong_to_pointer(i);
		g_assert(!htable_contains(ht, p));
		htable_insert(ht, p, p);
		g_assert(htable_contains(ht, p));
	}
}

/**
 * Perform unit tests for hash tables.
 */
void G_COLD
htable_test(void)
{
	size_t i;
	htable_t *ht;
	htable_iter_t *hti;
	char flags[256];
	const void *key;
	int keys[4] = { 0xc7569bda, 0x65cb1432, 0x18659927, 0xf3362dc7 };

	ht = htable_create(HASH_KEY_SELF, 0);
	htable_test_fill(ht);
	for (i = 0; i < 256; i++) {
		void *p = ulong_to_pointer(i);
		g_assert(htable_contains(ht, p));
		htable_remove(ht, p);
		g_assert(!htable_contains(ht, p));
	}
	htable_test_fill(ht);
	for (i = 256; i < 512; i++) {
		void *p = ulong_to_pointer(i);
		void *o = ulong_to_pointer(i - 256);
		g_assert(htable_contains(ht, o));
		g_assert(!htable_contains(ht, p));
		htable_remove(ht, o);
		htable_insert(ht, p, p);
		g_assert(htable_contains(ht, p));
		g_assert(!htable_contains(ht, o));
	}
	g_assert(256 == htable_count(ht));
	ZERO(&flags);
	hti = htable_iter_new(ht);
	while (htable_iter_next(hti, &key, NULL)) {
		size_t idx = pointer_to_ulong(key) - 256;
		g_assert(htable_contains(ht, key));
		g_assert(size_is_non_negative(idx));
		g_assert(idx < 256);
		g_assert('\0' == flags[idx]);
		flags[idx] = '1';
		htable_iter_remove(hti);
		g_assert(!htable_contains(ht, key));
	}
	htable_iter_release(&hti);
	g_assert(0 == htable_count(ht));
	for (i = 0; i < 256; i++) {
		g_assert(flags[i] != '\0');
	}
	htable_free_null(&ht);

	ht = htable_create(HASH_KEY_FIXED, sizeof(int));
	for (i = 0; i < 16; i++) {
		size_t idx = i % G_N_ELEMENTS(keys);
		htable_insert(ht, &keys[idx], NULL);
		g_assert(htable_contains(ht, &keys[idx]));
	}
	g_assert(G_N_ELEMENTS(keys) == htable_count(ht));
	htable_free_null(&ht);
}

/* vi: set ts=4 sw=4 syn=c cindent: */
