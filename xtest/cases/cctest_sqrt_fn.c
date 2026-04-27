// SPDX-License-Identifier: MIT
// cctest_sqrt_fn.c --- cctest case sqrt_fn
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x07 */

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
   double x = sqrt(49.0);
   int r = (int)(x + 0.5);
   if (r != 7) return 0;
   return r;
}
