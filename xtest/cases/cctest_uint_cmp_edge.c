// SPDX-License-Identifier: MIT
// cctest_uint_cmp_edge.c --- cctest case uint_cmp_edge
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
   unsigned int zero = 0;
   unsigned int max  = 0xFFFFFFFFu;
   int r             = 0;
   if (zero < max)
      r += 1;
   if (max > zero)
      r += 2;
   if (zero <= max)
      r += 4;
   return r; /* 1+2+4 = 7 */
}
