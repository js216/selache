// SPDX-License-Identifier: MIT
// cctest_pow_fn.c --- cctest case pow_fn
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x20 */

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
   double p = pow(2.0, 5.0);
   int n = (int)(p + 0.5);
   if (n != 32) return 0;
   return n;
}
