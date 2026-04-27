// SPDX-License-Identifier: MIT
// cctest_sin_fn.c --- cctest case sin_fn
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x01 */

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
   double s0 = sin(0.0);
   double spi2 = sin(M_PI_2);
   if (fabs(s0) > 1e-5) return 0;
   if (fabs(spi2 - 1.0) > 1e-4) return 0;
   return 1;
}
