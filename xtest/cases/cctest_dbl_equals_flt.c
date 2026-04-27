// SPDX-License-Identifier: MIT
// cctest_dbl_equals_flt.c --- cctest case dbl_equals_flt
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
   if (DBL_MANT_DIG == FLT_MANT_DIG)
      r += 1;
   if (DBL_DIG == FLT_DIG)
      r += 2;
   return r; /* 1+2 = 3 */
}
