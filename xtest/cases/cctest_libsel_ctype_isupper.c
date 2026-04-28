// SPDX-License-Identifier: MIT
// cctest_libsel_ctype_isupper.c --- libsel ctype/isupper per-function selcc
// test Copyright (c) 2026 Jakob Kastelic

/* @expect 0x55 */

#include <stddef.h>
#include <stdint.h>

int isupper(int c)
{
   return c >= 'A' && c <= 'Z';
}

int test_main(void)
{

   return (isupper('A') && !isupper('a')) ? 0x55 : 0xAA;
}
