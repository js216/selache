// SPDX-License-Identifier: MIT
// cctest_float_cmp_full.c --- cctest case float_cmp_full
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
   float a = 3.0f, b = 3.0f, c = 5.0f;
   int r = 0;
   if (a == b)
      r += 1;
   if (a != c)
      r += 2;
   if (a <= b)
      r += 4;
   if (a >= b)
      r += 8;
   if (a <= c)
      r += 16;
   return r; /* 1+2+4+8+16 = 31 = 0x1F */
}
