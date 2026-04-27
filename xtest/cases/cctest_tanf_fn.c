// SPDX-License-Identifier: MIT
// cctest_tanf_fn.c --- cctest case tanf_fn
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
   float t0 = tanf(0.0f);
   float tp4 = tanf((float)M_PI_4);
   if (fabsf(t0) > 1e-5f) return 0;
   if (fabsf(tp4 - 1.0f) > 1e-3f) return 0;
   return 1;
}
