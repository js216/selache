// SPDX-License-Identifier: MIT
// cctest_libsel_ctype_islower.c --- libsel ctype/islower per-function selcc
// test Copyright (c) 2026 Jakob Kastelic

/* @expect 0x55 */

#include <stddef.h>
#include <stdint.h>

int islower(int c)
{
   return c >= 'a' && c <= 'z';
}

int test_main(void)
{

   return (islower('a') && !islower('A')) ? 0x55 : 0xAA;
}
