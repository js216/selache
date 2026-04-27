// SPDX-License-Identifier: MIT
// cctest_atan2_fn.c --- cctest case atan2_fn
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
   double a = atan2(1.0, 0.0);
   if (fabs(a - M_PI_2) > 1e-4) return 0;
   return 1;
}
