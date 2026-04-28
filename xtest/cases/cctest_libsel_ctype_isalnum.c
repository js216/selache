// SPDX-License-Identifier: MIT
// cctest_libsel_ctype_isalnum.c --- libsel ctype/isalnum per-function selcc
// test Copyright (c) 2026 Jakob Kastelic

/* @expect 0x55 */

#include <stddef.h>
#include <stdint.h>

int isalnum(int c)
{
   return (c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z') ||
          (c >= '0' && c <= '9');
}

int test_main(void)
{

   return (isalnum('Z') && isalnum('5') && !isalnum(' ')) ? 0x55 : 0xAA;
}
