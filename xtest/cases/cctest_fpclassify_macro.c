// SPDX-License-Identifier: MIT
// cctest_fpclassify_macro.c --- cctest case fpclassify_macro
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x21 */

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
   int r = 0;
   if (fpclassify(0.0f) == FP_ZERO) r |= 0x01;
   if (fpclassify(1.0f) == FP_NORMAL) r |= 0x20;
   return r;
}
