// SPDX-License-Identifier: MIT
// cctest_creal_fn.c --- cctest case creal_fn
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x05 */

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
   double r = creal(z);
   if (r != 5.0) return 0;
   return (int)r;
}
