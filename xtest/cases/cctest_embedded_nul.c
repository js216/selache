// SPDX-License-Identifier: MIT
// cctest_embedded_nul.c --- cctest case embedded_nul
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0xC3 */

#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

int test_main(void)
{
   char s[] = "ab\0cd";
   /* sizeof includes all chars + trailing NUL: 'a','b','\0','c','d','\0' = 6 */
   int sz = (int)sizeof(s);
   /* But s[3] is 'c', s[4] is 'd' -- data past the embedded NUL is present */
   return sz * 0x10 + s[3]; /* 6*16 + 'c' = 96 + 99 = 195 = 0xC3 */
}
