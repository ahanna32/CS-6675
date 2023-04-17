/*
 * THIS FILE WAS AUTOMATICALLY GENERATED -- DO NOT EDIT.
 *
 * Generating command:
 *
 *     ../../scripts/generic-cat /dev/null bit_generic.ct field
 *
 * Generated on Fri Apr 14 11:55:56 EDT 2023.
 */


/**
  * @ingroup lib
  * @file
  *
  * Bit fields.
  *
  * @author Christian Biere
  * @author Raphael Manfredi
  * @date 2006
  */

#include "common.h"

#include "bit_field.h"
#include "halloc.h"

#include "override.h"

/**
 * Re-allocates "base" so that it can hold at least "n" bits
 * and initializes newly allocated bytes if necessary.
 *
 * @param base The base address of the bit field, may be NULL.
 * @param n The number of bits the bit field should hold.
 * @return the re-allocated bit field.
 *
 * @attention DO NOT USE IN MEMORY ALLOCATING ROUTINES!
 */
void
bit_field_resize(bit_field_t **base_ptr, size_t old_n, size_t new_n)
{
	size_t old_size, new_size;
	void *p;

	STATIC_ASSERT(0 == (BIT_FIELD_BITSIZE & BIT_FIELD_BITMASK));

	new_size = BIT_FIELD_BYTE_SIZE(new_n);
	old_size = BIT_FIELD_BYTE_SIZE(old_n);
	p = hrealloc(*base_ptr, new_size);
	if (old_size < new_size) {
		char *bytes = p;
		memset(&bytes[old_size], 0, new_size - old_size);
	}
	*base_ptr = p;
}

/**
 * Clears all bits starting at "from" up to "to" inclusive.
 * @note: For optimum performance, there are no checks at all.
 *
 * @param base The base address of the bit field which must be initialized.
 * @param from The first bit.
 * @param to The last bit, must be equal to or above "from".
 * @return TRUE if the bit is set, FALSE otherwise.
 */
void
bit_field_clear_range(bit_field_t *base, size_t from, size_t to)
{
	size_t i;

	g_assert(from <= to);

	for (i = from; i <= to; /* NOTHING */) {
		if (0 == (i & BIT_FIELD_BITMASK)) {
			size_t n = (to - i) >> BIT_FIELD_BITSHIFT;

			if (n != 0) {
				size_t j = i >> BIT_FIELD_BITSHIFT;

				i += n * BIT_FIELD_BITSIZE;
				do {
					base[j++] = 0;
				} while (--n != 0);
				continue;
			}
		}
		bit_field_clear(base, i++);
	}
}

/**
 * Sets all bits starting at "from" up to "to" inclusive.
 * @note: For optimum performance, there are no checks at all.
 *
 * @param base The base address of the bit field which must be initialized.
 * @param from The first bit.
 * @param to The last bit, must be equal to or above "from".
 * @return TRUE if the bit is set, FALSE otherwise.
 */
void
bit_field_set_range(bit_field_t *base, size_t from, size_t to)
{
	size_t i;

	g_assert(from <= to);

	for (i = from; i <= to; /* NOTHING */) {
		if (0 == (i & BIT_FIELD_BITMASK)) {
			size_t n = (to - i) >> BIT_FIELD_BITSHIFT;

			if (n != 0) {
				size_t j = i >> BIT_FIELD_BITSHIFT;

				i += n * BIT_FIELD_BITSIZE;
				do {
					base[j++] = (bit_field_t) -1;
				} while (--n != 0);
				continue;
			}
		}
		bit_field_set(base, i++);
	}
}

/**
 * Peforms a linear scan for the first unset bit of the given bit field.
 *
 * @param base The base address of the bit field which must be initialized.
 * @param from The first bit.
 * @param to The last bit, must be equal to or above "from".
 * @return (size_t) -1, if no unset bit was found. On success the
 *        index of the first unset bit is returned.
 */
size_t
bit_field_first_clear(const bit_field_t *base, size_t from, size_t to)
{
	size_t i;

	g_assert(from <= to);

	for (i = from; i <= to; /* NOTHING */) {
		if (0 == (i & BIT_FIELD_BITMASK)) {
			size_t n = (to - i) >> BIT_FIELD_BITSHIFT;

			if (n != 0) {
				size_t j = i >> BIT_FIELD_BITSHIFT;

				while (n-- > 0) {
					if (base[j++] != (bit_field_t) -1) {
						bit_field_t value = base[j - 1];
						while (value & 0x1) {
							value >>= 1;
							i++;
						}
						return i;
					}
					i += BIT_FIELD_BITSIZE;
				}
				continue;
			}
		}
		if (!bit_field_get(base, i))
			return i;
		i++;
	}

	return (size_t) -1;
}

/**
 * Peforms a linear scan for the first set bit of the given bit field.
 *
 * @param base The base address of the bit field which must be initialized.
 * @param from The first bit.
 * @param to The last bit, must be equal to or above "from".
 * @return (size_t) -1, if no unset bit was found. On success the
 *        index of the first set bit is returned.
 */
size_t
bit_field_first_set(const bit_field_t *base, size_t from, size_t to)
{
	size_t i;

	g_assert(from <= to);

	for (i = from; i <= to; /* NOTHING */) {
		if (0 == (i & BIT_FIELD_BITMASK)) {
			size_t n = (to - i) >> BIT_FIELD_BITSHIFT;

			if (n != 0) {
				size_t j = i >> BIT_FIELD_BITSHIFT;

				while (n-- > 0) {
					if (base[j++] != 0) {
						bit_field_t value = base[j - 1];
						while (0 == (value & 0x1)) {
							value >>= 1;
							i++;
						}
						return i;
					}
					i += BIT_FIELD_BITSIZE;
				}
				continue;
			}
		}
		if (bit_field_get(base, i))
			return i;
		i++;
	}

	return (size_t) -1;
}

/**
 * Peforms a linear scan for the last set bit of the given bit field.
 *
 * @param base The base address of the bit field which must be initialized.
 * @param from The first bit.
 * @param to The last bit, must be equal to or above "from".
 * @return (size_t) -1, if no set bit was found. On success the
 *        index of the last set bit is returned.
 */
size_t
bit_field_last_set(const bit_field_t *base, size_t from, size_t to)
{
	size_t i = to;

	g_assert(from <= to);

	for (;;) {
		if (BIT_FIELD_BITMASK == (i & BIT_FIELD_BITMASK)) {
			size_t n = (i - from) >> BIT_FIELD_BITSHIFT;

			if (n != 0) {
				size_t j = i >> BIT_FIELD_BITSHIFT;

				while (n-- > 0) {
					if (base[j--] != 0) {
						bit_field_t value = base[j + 1];
						bit_field_t mask = 1UL << (BIT_FIELD_BITSIZE - 1);
						while (mask != 0) {
							if (value & mask)
								return i;
							mask >>= 1;
							i--;
						}
						g_assert_not_reached();
					}
					if (i == from)
						break;
					i -= BIT_FIELD_BITSIZE;
				}
				continue;
			}
		}
		if (bit_field_get(base, i))
			return i;
		if (i == from)
			break;
		i--;
	}

	return (size_t) -1;
}

/**
 * Peforms a linear scan of the bit field to count set bits within given range.
 *
 * @param base	The base address of the bit field which must be initialized.
 * @param from	The first bit.
 * @param to	The last bit, must be equal to or above "from".
 *
 * @return the amount of set bits between from and to, inclusive.
 */
size_t
bit_field_count_set(const bit_field_t *base, size_t from, size_t to)
{
	size_t i, cnt = 0;

	g_assert(from <= to);

	for (i = from; i <= to; /* NOTHING */) {
		/* Handle the first word if `i' is not 0 modulo the word size */

		if (0 != (i & BIT_FIELD_BITMASK)) {
			bit_field_t word = BIT_FIELD_WORD(base, i);
			bit_field_t mask = BIT_FIELD_BIT(i) - 1;

			word &= ~mask;		/* Clear all bits before `i' in word */

			if (BIT_FIELD_IDX(i) == BIT_FIELD_IDX(to)) {
				mask = BIT_FIELD_BIT(to) + (BIT_FIELD_BIT(to) - 1);
				word &= mask;	/* Clear all bits above `to' in word */
			}

			cnt += BIT_FIELD_SETCOUNT(word);
			i   += BIT_FIELD_BITSIZE - (i & BIT_FIELD_BITMASK);

			g_assert(0 == (i & BIT_FIELD_BITMASK));
		} else {
			size_t n = (to - i) >> BIT_FIELD_BITSHIFT;
			size_t j = BIT_FIELD_IDX(i);

			/* Handle whole words between `i' and `to' */

			while (n--) {
				cnt += BIT_FIELD_SETCOUNT(base[j++]);
				i   += BIT_FIELD_BITSIZE;
			}

			/* Handle trailing word where `to' lies */

			g_assert(0 == (i & BIT_FIELD_BITMASK));
			g_assert(implies(i <= to, to - i < BIT_FIELD_BITSIZE));

			if (i <= to) {
				bit_field_t word = BIT_FIELD_WORD(base, i);
				bit_field_t mask =
					BIT_FIELD_BIT(to) + (BIT_FIELD_BIT(to) - 1);

				g_assert(BIT_FIELD_IDX(i) == BIT_FIELD_IDX(to));

				word &= mask;	/* Clear all bits above `to' in word */
				cnt += BIT_FIELD_SETCOUNT(word);
				i   += BIT_FIELD_BITSIZE;
			}
		}
	}

	return cnt;
}
/* vi: set ts=4 sw=4 syn=c cindent: */
