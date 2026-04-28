// SPDX-License-Identifier: MIT
// cctest_libsel_ctype_isprint.c --- libsel ctype/isprint per-function selcc
// test Copyright (c) 2026 Jakob Kastelic

/* @expect 0x55 */

#include <stddef.h>
#include <stdint.h>

int isprint(int c)
{
   return c >= ' ' && c <= '~';
}

int test_main(void)
{

   return (isprint(' ') && isprint('~') && !isprint(0)) ? 0x55 : 0xAA;
}
