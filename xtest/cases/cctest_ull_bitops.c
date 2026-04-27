// SPDX-License-Identifier: MIT
// cctest_ull_bitops.c --- cctest case ull_bitops
// Copyright (c) 2026 Jakob Kastelic

/* @expect 7 */

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
   unsigned long long a = 0xFFFF0000FFFF0000ULL;
   unsigned long long b = 0x0000FFFF0000FFFFULL;
   unsigned long long c = a & b; /* 0 */
   unsigned long long d = a | b; /* 0xFFFFFFFFFFFFFFFF */
   unsigned long long e = a ^ b; /* 0xFFFFFFFFFFFFFFFF */
   int r                = 0;
   if (c == 0ULL)
      r += 1;
   if (d == e)
      r += 2;
   if (~0ULL == d)
      r += 4;
   return r; /* 1+2+4 = 7 */
}
