// SPDX-License-Identifier: MIT
// cctest_libsel_ctype_ispunct.c --- libsel ctype/ispunct per-function selcc
// test Copyright (c) 2026 Jakob Kastelic

/* @expect 0x55 */

#include <stddef.h>
#include <stdint.h>

int ispunct(int c)
{
   return (c >= '!' && c <= '/') || (c >= ':' && c <= '@') ||
          (c >= '[' && c <= '`') || (c >= '{' && c <= '~');
}

int test_main(void)
{

   return (ispunct('!') && ispunct(':') && !ispunct('a')) ? 0x55 : 0xAA;
}
