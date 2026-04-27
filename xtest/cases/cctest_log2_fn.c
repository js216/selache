// SPDX-License-Identifier: MIT
// cctest_log2_fn.c --- cctest case log2_fn
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
   double l = log2(128.0);
   int n = (int)(l + 0.5);
   if (n != 7) return 0;
   return n;
}
