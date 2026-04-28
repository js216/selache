// SPDX-License-Identifier: MIT
// cctest_libsel_ctype_isxdigit.c --- libsel ctype/isxdigit per-function selcc
// test Copyright (c) 2026 Jakob Kastelic

/* @expect 0x55 */

#include <stddef.h>
#include <stdint.h>

int isxdigit(int c)
{
   return (c >= '0' && c <= '9') || (c >= 'A' && c <= 'F') ||
          (c >= 'a' && c <= 'f');
}

int test_main(void)
{

   return (isxdigit('0') && isxdigit('a') && isxdigit('F') && !isxdigit('g'))
              ? 0x55
              : 0xAA;
}
