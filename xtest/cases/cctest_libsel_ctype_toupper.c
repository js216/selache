// SPDX-License-Identifier: MIT
// cctest_libsel_ctype_toupper.c --- libsel ctype/toupper per-function selcc
// test Copyright (c) 2026 Jakob Kastelic

/* @expect 0x55 */
/* @exp_ticks 0x1d */

#include <stddef.h>
#include <stdint.h>

int toupper(int c)
{
   if (c >= 'a' && c <= 'z')
      return c - ('a' - 'A');
   return c;
}

int test_main(void)
{

   return (toupper('a') == 'A' && toupper('Z') == 'Z') ? 0x55 : 0xAA;
}
