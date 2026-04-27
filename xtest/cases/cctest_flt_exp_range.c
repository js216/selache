// SPDX-License-Identifier: MIT
// cctest_flt_exp_range.c --- cctest case flt_exp_range
// Copyright (c) 2026 Jakob Kastelic

/* @expect 3 */

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
   int r = 0;
   if (FLT_MAX_EXP == 128)
      r += 1;
   if (FLT_MIN_EXP == -125)
      r += 2;
   return r; /* 1+2 = 3 */
}
