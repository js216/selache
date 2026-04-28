// SPDX-License-Identifier: MIT
// cctest_asinf_fn.c --- cctest case asinf_fn
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
   static const float PI_2 = 1.5707963267948966f;
   float a = asinf(1.0f);
   if (fabsf(a - PI_2) > 1e-4f) return 0;
   if (fabsf(asinf(0.0f)) > 1e-5f) return 0;
   return 1;
}
