// SPDX-License-Identifier: MIT
// cctest_pow_edge.c --- cctest case pow edge cases
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x0F */

#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>
#include <math.h>

int test_main(void)
{
   int score = 0;

   /* pow(0, 0) -- C99: returns 1.0 */
   double a = pow(0.0, 0.0);
   if (fabs(a - 1.0) < 1e-9) score |= 0x1;

   /* pow(-1, very large even-ish int as double) -- magnitude 1.0 */
   double b = pow(-1.0, 1000000.0);
   if (fabs(fabs(b) - 1.0) < 1e-6) score |= 0x2;

   /* pow(-2.0, 0.5) -- domain error, NaN result */
   double c = pow(-2.0, 0.5);
   if (c != c) score |= 0x4; /* NaN self-compare */

   /* pow(2.0, -3.0) = 0.125 */
   double d = pow(2.0, -3.0);
   if (fabs(d - 0.125) < 1e-9) score |= 0x8;

   return score;
}
