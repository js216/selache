// SPDX-License-Identifier: MIT
// cctest_log2f_fn.c --- cctest case log2f_fn
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x08 */

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
   float l = log2f(256.0f);
   int n = (int)(l + 0.5f);
   if (n != 8) return 0;
   return n;
}
