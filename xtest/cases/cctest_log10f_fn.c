// SPDX-License-Identifier: MIT
// cctest_log10f_fn.c --- cctest case log10f_fn
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x03 */

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
   float l = log10f(1000.0f);
   int n = (int)(l + 0.5f);
   if (n != 3) return 0;
   return n;
}
