// SPDX-License-Identifier: MIT
// cctest_libsel_ctype_tolower.c --- libsel ctype/tolower per-function selcc
// test Copyright (c) 2026 Jakob Kastelic

/* @expect 0x55 */

#include <stddef.h>
#include <stdint.h>

int tolower(int c)
{
   if (c >= 'A' && c <= 'Z')
      return c + ('a' - 'A');
   return c;
}

int test_main(void)
{

   return (tolower('A') == 'a' && tolower('z') == 'z') ? 0x55 : 0xAA;
}
