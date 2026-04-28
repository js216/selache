// SPDX-License-Identifier: MIT
// cctest_libsel_ctype_isspace.c --- libsel ctype/isspace per-function selcc
// test Copyright (c) 2026 Jakob Kastelic

/* @expect 0x55 */

#include <stddef.h>
#include <stdint.h>

int isspace(int c)
{
   return c == ' ' || c == '\t' || c == '\n' || c == '\r' || c == '\f' ||
          c == '\v';
}

int test_main(void)
{

   return (isspace(' ') && isspace('\n') && !isspace('a')) ? 0x55 : 0xAA;
}
