// SPDX-License-Identifier: MIT
// cctest_libsel_ctype_isblank.c --- libsel ctype/isblank per-function selcc
// test Copyright (c) 2026 Jakob Kastelic

/* @expect 0x55 */

#include <stddef.h>
#include <stdint.h>

int isblank(int c)
{
   return c == ' ' || c == '\t';
}

int test_main(void)
{

   return (isblank(' ') && isblank('\t') && !isblank('a')) ? 0x55 : 0xAA;
}
