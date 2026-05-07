/* SPDX-License-Identifier: MIT */
/* memmove_dd.c --- compiler-builtin memmove bridges */
/* Copyright (c) 2026 Jakob Kastelic */

/*
 * The third-party SHARC toolchain emits implicit calls to
 * __memmoveDD and __memmoveDD_word for struct/array assignment in
 * DM space. With -no-std-lib these symbols are unresolved unless
 * libsel provides them. We bridge to the portable memmove() in
 * memmove.c. Both bridges are weak so a stronger third-party
 * runtime implementation wins when linked.
 *
 * Calling convention (mirrors the third-party runtime sources):
 *   __memmoveDD(dst, src, n)       -- n is in bytes (byte-addressed
 *                                     variant active under
 *                                     -char-size-8)
 *   __memmoveDD_word(dst, src, n)  -- n is in 32-bit words; the
 *                                     compiler emits this when
 *                                     copying word-aligned
 *                                     aggregates. SHARC word = 4
 *                                     bytes in -char-size-8.
 *
 * If a future toolchain release changes _word semantics this file
 * is the single point of repair.
 */

#include "string.h"

__attribute__((weak)) void *__memmoveDD(void *dest, const void *src, size_t n)
{
    return memmove(dest, src, n);
}

__attribute__((weak)) void *__memmoveDD_word(void *dest, const void *src,
                                             size_t n_words)
{
    return memmove(dest, src, n_words * 4u);
}
