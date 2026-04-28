// SPDX-License-Identifier: MIT
// cctest_libsel_ctype_isdigit.c --- libsel ctype/isdigit per-function selcc
// test Copyright (c) 2026 Jakob Kastelic

/* @expect 0x55 */

#include <stddef.h>
#include <stdint.h>

int isdigit(int c)
{
   return c >= '0' && c <= '9';
}

int test_main(void)
{

   return (isdigit('0') && isdigit('9') && !isdigit('a')) ? 0x55 : 0xAA;
}
