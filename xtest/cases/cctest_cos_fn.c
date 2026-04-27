// SPDX-License-Identifier: MIT
// cctest_cos_fn.c --- cctest case cos_fn
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
   double c0 = cos(0.0);
   double cpi = cos(M_PI);
   if (fabs(c0 - 1.0) > 1e-5) return 0;
   if (fabs(cpi + 1.0) > 1e-4) return 0;
   return 1;
}
