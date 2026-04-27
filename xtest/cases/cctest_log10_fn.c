// SPDX-License-Identifier: MIT
// cctest_log10_fn.c --- cctest case log10_fn
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x02 */

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
   double l = log10(100.0);
   int n = (int)(l + 0.5);
   if (n != 2) return 0;
   return n;
}
