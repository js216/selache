// SPDX-License-Identifier: MIT
// cctest_atanf_fn.c --- cctest case atanf_fn
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
   static const float PI_4 = 0.7853981633974483f;
   float a = atanf(1.0f);
   if (fabsf(a - PI_4) > 1e-4f) return 0;
   return 1;
}
