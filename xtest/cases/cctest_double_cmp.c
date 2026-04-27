// SPDX-License-Identifier: MIT
// cctest_double_cmp.c --- cctest case double_cmp
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x1F */

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
   double a = 1.0, b = 2.0;
   int r = 0;
   if (a < b)
      r += 1;
   if (a <= b)
      r += 2;
   if (b > a)
      r += 4;
   if (b >= a)
      r += 8;
   if (a != b)
      r += 16;
   return r; /* 1+2+4+8+16 = 31 = 0x1F */
}
