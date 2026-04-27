// SPDX-License-Identifier: MIT
// cctest_many_locals.c --- cctest case many_locals
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x78 */

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
   int a = 1, b = 2, c = 3, d = 4, e = 5;
   int f = 6, g = 7, h = 8, i = 9, j = 10;
   int k = 11, l = 12, m = 13, n = 14, o = 15;
   return a + b + c + d + e + f + g + h + i + j + k + l + m + n + o;
   /* 1+2+...+15 = 120 = 0x78 */
}
