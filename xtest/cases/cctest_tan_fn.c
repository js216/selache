// SPDX-License-Identifier: MIT
// cctest_tan_fn.c --- cctest case tan_fn
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
   double t0 = tan(0.0);
   double tp4 = tan(M_PI_4);
   if (fabs(t0) > 1e-5) return 0;
   if (fabs(tp4 - 1.0) > 1e-3) return 0;
   return 1;
}
