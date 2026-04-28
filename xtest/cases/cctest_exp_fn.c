// SPDX-License-Identifier: MIT
// cctest_exp_fn.c --- cctest case exp_fn
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
   double e = exp(1.0);
   if (fabs(e - 2.718281828459045) > 1e-4) return 0;
   if (fabs(exp(0.0) - 1.0) > 1e-6) return 0;
   return 1;
}
