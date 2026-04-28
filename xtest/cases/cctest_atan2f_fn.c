// SPDX-License-Identifier: MIT
// cctest_atan2f_fn.c --- cctest case atan2f_fn
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
   float a = atan2f(1.0f, 1.0f);
   if (fabsf(a - 0.7853981633974483f) > 1e-4f) return 0;
   float b = atan2f(0.0f, -1.0f);
   if (fabsf(b - 3.141592653589793f) > 1e-4f) return 0;
   return 1;
}
