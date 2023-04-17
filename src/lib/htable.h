/*
 * THIS FILE WAS AUTOMATICALLY GENERATED -- DO NOT EDIT.
 *
 * Generating command:
 *
 *     ../../scripts/generic-pp /dev/null hgeneric.ht table ckeyval TABLE
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
 * Hash tables.
 *
 * @author Raphael Manfredi
 * @date 2012
 */

#ifndef _htable_h_
#define _htable_h_

#include "hash.h"

struct htable;
typedef struct htable htable_t;

struct htable_iter;
typedef struct htable_iter htable_iter_t;

/**
 * Cast table to a polmorphic hash const.
 */
static inline ALWAYS_INLINE const struct hash *
htable_cast_to_const_hash(const struct htable *hx)
{
	return (const struct hash *) hx;
}

/**
 * Cast table to a polmorphic hash.
 */
static inline ALWAYS_INLINE struct hash *
htable_cast_to_hash(const struct htable *hx)
{
	return (struct hash *) hx;
}

/**
 * Cast pointer to table to a pointer to a polmorphic hash.
 */
static inline ALWAYS_INLINE struct hash **
htable_ptr_cast_to_hash(struct htable * const *hx)
{
	return (struct hash **) hx;
}

/*
 * Public interface.
 */

htable_t *htable_create(enum hash_key_type ktype, size_t keysize);
htable_t *htable_create_real(enum hash_key_type ktype, size_t keysize);
htable_t *htable_create_any(hash_fn_t primary,
	hash_fn_t secondary, eq_fn_t eq);
htable_t *htable_create_any_real(hash_fn_t primary,
	hash_fn_t secondary, eq_fn_t eq);
void htable_free_null(htable_t **);
void htable_clear(htable_t *);
void htable_thread_safe(htable_t *);
void htable_lock(htable_t *);
void htable_unlock(htable_t *);

bool htable_contains(const htable_t *, const void *key);
const void *htable_random(const htable_t *);
void htable_insert(htable_t *, const void *key, void *value);
void *htable_lookup(const htable_t *, const void *key);
bool htable_lookup_extended(const htable_t *, const void *key,
	const void **keyptr, void **valptr);
bool htable_random_extended(const htable_t *,
	const void **keyptr, void **valptr);

static inline void
htable_insert_const(htable_t *ht, const void *key, const void *value)
{
	htable_insert(ht, key, deconstify_gpointer(value));
}

bool htable_remove(htable_t *, const void *key);
size_t htable_count(const htable_t *);
void htable_foreach(const htable_t *, ckeyval_fn_t fn, void *data);
size_t htable_foreach_remove(htable_t *, ckeyval_rm_fn_t, void *);
void htable_foreach_key(const htable_t *, data_fn_t fn, void *data);

htable_iter_t *htable_iter_new(const htable_t *);
void htable_iter_release(htable_iter_t **);
bool htable_iter_next(htable_iter_t *, const void **kp, void **vp);
void htable_iter_remove(htable_iter_t *);

void htable_test(void);

#endif /* _htable_h_ */

/* vi: set ts=4 sw=4 syn=c cindent: */
