// SPDX-License-Identifier: MIT
// cctest_sqrtf_fn.c --- cctest case sqrtf_fn
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x09 */

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
   float x = sqrtf(81.0f);
   int r = (int)(x + 0.5f);
   if (r != 9) return 0;
   if (sqrtf(0.0f) != 0.0f) return 0;
   return r;
}
