// SPDX-License-Identifier: MIT
// cctest_cabs_fn.c --- cctest case cabs_fn
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x0D */

#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>
#include <complex.h>
#include <math.h>

int test_main(void)
{
   double _Complex z = 5.0 + 12.0 * I;
   double r = cabs(z); /* 13 */
   if (fabs(r - 13.0) > 1e-6) return 0;
   return (int)(r + 0.5);
}
