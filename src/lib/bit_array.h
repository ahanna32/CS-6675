/*
 * THIS FILE WAS AUTOMATICALLY GENERATED -- DO NOT EDIT.
 *
 * Generating command:
 *
 *     ../../scripts/generic-cat bit_array.ht bit_generic.ht array
 *
 * Generated on Fri Apr 14 11:55:55 EDT 2023.
 */

/**
 * @ingroup lib
 * @file
 *
 * Bit arrays. 
 *
 * @author Christian Biere
 * @author Raphael Manfredi
 * @date 2006
 */

#ifndef _bit_array_h_
#define _bit_array_h_

#include "common.h"

#include "pow2.h"

/*
 * Functions for handling arrays of bits. On BSD systems, the macros from
 * <bitstring.h> could be used for better efficiency.
 * The following implementation tries to eliminate loop overhead by handling
 * all bits of a "long" at once, where possible.
 */

typedef unsigned long bit_array_t;

#if LONG_MAX == 0x7fffffffL
#define BIT_ARRAY_SETCOUNT(w)	bits_set32(w)
#if CHAR_BIT == 8
#define BIT_ARRAY_BITSHIFT	(2 + 3)
#elif CHAR_BIT == 16
#define BIT_ARRAY_BITSHIFT	(2 + 4)
#else
#error "Unsupported size of char"
#endif	/* CHAR_BIT */
#elif (ULONG_MAX >> 31) > 0xffffffffUL
#define BIT_ARRAY_SETCOUNT(w)	bits_set64(w)
#if CHAR_BIT == 8
#define BIT_ARRAY_BITSHIFT	(3 + 3)
#elif CHAR_BIT == 16
#define BIT_ARRAY_BITSHIFT	(3 + 4)
#else
#error "Unsupported size of char"
#endif	/* CHAR_BIT */
#endif	/* LONG_MAX */

#define BIT_ARRAY_BITSIZE		(CHAR_BIT * sizeof(bit_array_t))
#define BIT_ARRAY_BITMASK		(BIT_ARRAY_BITSIZE - 1)
#define BIT_ARRAY_IDX(i)		((i) >> BIT_ARRAY_BITSHIFT)
#define BIT_ARRAY_WORD(base, i)	base[BIT_ARRAY_IDX(i)]
#define BIT_ARRAY_BIT(i)		(1UL << ((i) & BIT_ARRAY_BITMASK))

 

/**
 * Use the macro BIT_ARRAY_SIZE for allocating a properly sized bit array
 * for "n" bits. Example:
 *
 * static bit_array_t bits[BIT_ARRAY_SIZE(100)];
 */
#define BIT_ARRAY_SIZE(n) \
	((n) / BIT_ARRAY_BITSIZE + ((n) % BIT_ARRAY_BITSIZE ? 1 : 0))

/**
 * Use the macro BIT_ARRAY_BYTE_SIZE for dynamic allocation.
 * Example:
 *
 *  bit_array_t *bits = malloc(BIT_ARRAY_BYTE_SIZE(num_bits));
 *
 **/
 #define BIT_ARRAY_BYTE_SIZE(n) (BIT_ARRAY_SIZE(n) * sizeof (bit_array_t))

/**
 * Initializes the bit array so that all bits are cleared. This
 * function MUST be used for all non-statically allocated bit arrays
 * before using it with any other bit array function!
 *
 * @param base The base address of the bit array, may be NULL.
 * @param n The number of bits the bit array holds.
 */
static inline void 
bit_array_init(bit_array_t *base, size_t n)
{
	g_assert(!n || NULL != base);
	if (n) {
		memset(base, 0, BIT_ARRAY_BYTE_SIZE(n));
	}
}

/**
 * Sets bit number "i" of the bit array "base".
 *
 * @param base The base address of the bit array which must be initialized.
 * @param n The index of the bit to set counting from zero.
 * @note: For optimum performance, there are no checks at all.
 */
static inline ALWAYS_INLINE void
bit_array_set(bit_array_t *base, size_t i)
{
	BIT_ARRAY_WORD(base, i) |= BIT_ARRAY_BIT(i);
}

/**
 * Sets bit number "i" of the bit array "base".
 * @param base The base address of the bit array which must be initialized.
 * @param n The index of the bit to clear counting from zero.
 * @note: For optimum performance, there are no checks at all.
 */
static inline ALWAYS_INLINE void 
bit_array_clear(bit_array_t *base, size_t i)
{
	BIT_ARRAY_WORD(base, i) &= ~BIT_ARRAY_BIT(i);
}

/**
 * Flips bit number "i" of the bit array "base".
 * @note: For optimum performance, there are no checks at all.
 *
 * @param base The base address of the bit array which must be initialized.
 * @param n The index of the bit to flip counting from zero.
 * @return The new state of the bit.
 */
static inline ALWAYS_INLINE bool
bit_array_flip(bit_array_t *base, size_t i)
{
	return BIT_ARRAY_WORD(base, i) ^= BIT_ARRAY_BIT(i);
}

/**
 * Retrieves bit number "i" of the bit array "base".
 * @note: For optimum performance, there are no checks at all.
 * @param base The base address of the bit array which must be initialized.
 * @param n The index of the bit to read counting from zero.
 * @return TRUE if the bit is set, FALSE otherwise.
 */
static inline ALWAYS_INLINE bool
bit_array_get(const bit_array_t *base, size_t i)
{
	return 0 != (BIT_ARRAY_WORD(base, i) & BIT_ARRAY_BIT(i));
}

void bit_array_resize(bit_array_t **base_ptr, size_t old_n, size_t new_n);
void bit_array_clear_range(bit_array_t *base, size_t from, size_t to);
void bit_array_set_range(bit_array_t *base, size_t from, size_t to);
size_t bit_array_first_clear(const bit_array_t *base, size_t from, size_t to);
size_t bit_array_first_set(const bit_array_t *base, size_t from, size_t to);
size_t bit_array_last_set(const bit_array_t *base, size_t from, size_t to);
size_t bit_array_count_set(const bit_array_t *base, size_t from, size_t to);

#endif /* _bit_array_h_ */

/* vi: set ts=4 sw=4 syn=c cindent: */
