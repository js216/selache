// SPDX-License-Identifier: MIT
// cctest_log_fn.c --- cctest case log_fn
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
   double l = log(2.718281828459045);
   if (fabs(l - 1.0) > 1e-4) return 0;
   if (fabs(log(1.0)) > 1e-6) return 0;
   return 1;
}
