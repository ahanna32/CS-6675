/*
 * THIS FILE WAS AUTOMATICALLY GENERATED -- DO NOT EDIT.
 *
 * Generating command:
 *
 *     ../../scripts/generic-cat bit_field.ht bit_generic.ht field
 *
 * Generated on Fri Apr 14 11:55:56 EDT 2023.
 */

/**
 * @ingroup lib
 * @file
 *
 * Bit field (linear field of bits with fixed endianness).
 *
 * Macros defined here are derived from those in <lib/bit_array.h> but
 * operate on a linear field of byte, with fixed endianness of bits
 * within each byte.
 *
 * This is intended to be used for portable representations of bit fields.
 * If used internally only, and on aligned long boundaries, then bit_array_t
 * should be preferred as it will be more efficient computation-wise.
 *
 * @author Raphael Manfredi
 * @date 2010
 * @author Christian Biere
 * @date 2006
 */

#ifndef _bit_field_h_
#define _bit_field_h_

#include "common.h"

#include "pow2.h"

/*
 * Functions for handling arrays of bits. On BSD systems, the macros from
 * <bitstring.h> could be used for better efficiency.
 * The following implementation tries to eliminate loop overhead by handling
 * all bits of a "char" at once, where possible.
 */

typedef uint8 bit_field_t;

#define BIT_FIELD_BITSHIFT		3
#define BIT_FIELD_BITSIZE		(8 * sizeof(bit_field_t))
#define BIT_FIELD_BITMASK		(BIT_FIELD_BITSIZE - 1)
#define BIT_FIELD_IDX(i)		((i) >> BIT_FIELD_BITSHIFT)
#define BIT_FIELD_WORD(base, i)	base[BIT_FIELD_IDX(i)]
#define BIT_FIELD_BIT(i)		(1UL << ((i) & BIT_FIELD_BITMASK))
#define BIT_FIELD_SETCOUNT(w)	bits_set(w)

 

/**
 * Use the macro BIT_FIELD_SIZE for allocating a properly sized bit field
 * for "n" bits. Example:
 *
 * static bit_field_t bits[BIT_FIELD_SIZE(100)];
 */
#define BIT_FIELD_SIZE(n) \
	((n) / BIT_FIELD_BITSIZE + ((n) % BIT_FIELD_BITSIZE ? 1 : 0))

/**
 * Use the macro BIT_FIELD_BYTE_SIZE for dynamic allocation.
 * Example:
 *
 *  bit_field_t *bits = malloc(BIT_FIELD_BYTE_SIZE(num_bits));
 *
 **/
 #define BIT_FIELD_BYTE_SIZE(n) (BIT_FIELD_SIZE(n) * sizeof (bit_field_t))

/**
 * Initializes the bit field so that all bits are cleared. This
 * function MUST be used for all non-statically allocated bit arrays
 * before using it with any other bit field function!
 *
 * @param base The base address of the bit field, may be NULL.
 * @param n The number of bits the bit field holds.
 */
static inline void 
bit_field_init(bit_field_t *base, size_t n)
{
	g_assert(!n || NULL != base);
	if (n) {
		memset(base, 0, BIT_FIELD_BYTE_SIZE(n));
	}
}

/**
 * Sets bit number "i" of the bit field "base".
 *
 * @param base The base address of the bit field which must be initialized.
 * @param n The index of the bit to set counting from zero.
 * @note: For optimum performance, there are no checks at all.
 */
static inline ALWAYS_INLINE void
bit_field_set(bit_field_t *base, size_t i)
{
	BIT_FIELD_WORD(base, i) |= BIT_FIELD_BIT(i);
}

/**
 * Sets bit number "i" of the bit field "base".
 * @param base The base address of the bit field which must be initialized.
 * @param n The index of the bit to clear counting from zero.
 * @note: For optimum performance, there are no checks at all.
 */
static inline ALWAYS_INLINE void 
bit_field_clear(bit_field_t *base, size_t i)
{
	BIT_FIELD_WORD(base, i) &= ~BIT_FIELD_BIT(i);
}

/**
 * Flips bit number "i" of the bit field "base".
 * @note: For optimum performance, there are no checks at all.
 *
 * @param base The base address of the bit field which must be initialized.
 * @param n The index of the bit to flip counting from zero.
 * @return The new state of the bit.
 */
static inline ALWAYS_INLINE bool
bit_field_flip(bit_field_t *base, size_t i)
{
	return BIT_FIELD_WORD(base, i) ^= BIT_FIELD_BIT(i);
}

/**
 * Retrieves bit number "i" of the bit field "base".
 * @note: For optimum performance, there are no checks at all.
 * @param base The base address of the bit field which must be initialized.
 * @param n The index of the bit to read counting from zero.
 * @return TRUE if the bit is set, FALSE otherwise.
 */
static inline ALWAYS_INLINE bool
bit_field_get(const bit_field_t *base, size_t i)
{
	return 0 != (BIT_FIELD_WORD(base, i) & BIT_FIELD_BIT(i));
}

void bit_field_resize(bit_field_t **base_ptr, size_t old_n, size_t new_n);
void bit_field_clear_range(bit_field_t *base, size_t from, size_t to);
void bit_field_set_range(bit_field_t *base, size_t from, size_t to);
size_t bit_field_first_clear(const bit_field_t *base, size_t from, size_t to);
size_t bit_field_first_set(const bit_field_t *base, size_t from, size_t to);
size_t bit_field_last_set(const bit_field_t *base, size_t from, size_t to);
size_t bit_field_count_set(const bit_field_t *base, size_t from, size_t to);

#endif /* _bit_field_h_ */

/* vi: set ts=4 sw=4 syn=c cindent: */
