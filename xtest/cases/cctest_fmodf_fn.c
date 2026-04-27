// SPDX-License-Identifier: MIT
// cctest_fmodf_fn.c --- cctest case fmodf_fn
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
   float r = fmodf(8.5f, 3.0f); /* 2.5 */
   if (fabsf(r - 2.5f) > 1e-5f) return 0;
   return 2;
}
