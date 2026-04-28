// SPDX-License-Identifier: MIT
// cctest_libsel_ctype_isalpha.c --- libsel ctype/isalpha per-function selcc
// test Copyright (c) 2026 Jakob Kastelic

/* @expect 0x55 */

#include <stddef.h>
#include <stdint.h>

int isalpha(int c)
{
   return (c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z');
}

int test_main(void)
{

   return (isalpha('A') && isalpha('z') && !isalpha('1')) ? 0x55 : 0xAA;
}
