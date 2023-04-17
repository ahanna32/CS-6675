/*
 * THIS FILE WAS AUTOMATICALLY GENERATED -- DO NOT EDIT.
 *
 * Generating command:
 *
 *     ../../scripts/generic-pp /dev/null hgeneric.ht set cdata SET
 *
 * Generated on Fri Apr 14 11:55:56 EDT 2023.
 */

/*
 * Copyright (c) 2012, Raphael Manfredi
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
 * Hash sets.
 *
 * @author Raphael Manfredi
 * @date 2012
 */

#ifndef _hset_h_
#define _hset_h_

#include "hash.h"

struct hset;
typedef struct hset hset_t;

struct hset_iter;
typedef struct hset_iter hset_iter_t;

/**
 * Cast set to a polmorphic hash const.
 */
static inline ALWAYS_INLINE const struct hash *
hset_cast_to_const_hash(const struct hset *hx)
{
	return (const struct hash *) hx;
}

/**
 * Cast set to a polmorphic hash.
 */
static inline ALWAYS_INLINE struct hash *
hset_cast_to_hash(const struct hset *hx)
{
	return (struct hash *) hx;
}

/**
 * Cast pointer to set to a pointer to a polmorphic hash.
 */
static inline ALWAYS_INLINE struct hash **
hset_ptr_cast_to_hash(struct hset * const *hx)
{
	return (struct hash **) hx;
}

/*
 * Public interface.
 */

hset_t *hset_create(enum hash_key_type ktype, size_t keysize);
hset_t *hset_create_real(enum hash_key_type ktype, size_t keysize);
hset_t *hset_create_any(hash_fn_t primary,
	hash_fn_t secondary, eq_fn_t eq);
hset_t *hset_create_any_real(hash_fn_t primary,
	hash_fn_t secondary, eq_fn_t eq);
void hset_free_null(hset_t **);
void hset_clear(hset_t *);
void hset_thread_safe(hset_t *);
void hset_lock(hset_t *);
void hset_unlock(hset_t *);

bool hset_contains(const hset_t *, const void *key);
const void *hset_random(const hset_t *);
void hset_insert(hset_t *, const void *key);
void *hset_lookup(const hset_t *, const void *key);
bool hset_contains_extended(const hset_t *, const void *key,
	const void **keyptr);
bool hset_random_extended(const hset_t *, const void **keyptr);
bool hset_remove(hset_t *, const void *key);
size_t hset_count(const hset_t *);
void hset_foreach(const hset_t *, cdata_fn_t fn, void *data);
size_t hset_foreach_remove(hset_t *, cdata_rm_fn_t, void *);

hset_iter_t *hset_iter_new(const hset_t *);
void hset_iter_release(hset_iter_t **);
bool hset_iter_next(hset_iter_t *, const void **kp);
void hset_iter_remove(hset_iter_t *);


#endif /* _hset_h_ */

/* vi: set ts=4 sw=4 syn=c cindent: */
