// SPDX-License-Identifier: MIT
// cctest_ldexpf_fn.c --- cctest case ldexpf_fn
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x18 */

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
   float v = ldexpf(3.0f, 3); /* 24 */
   if (fabsf(v - 24.0f) > 1e-5f) return 0;
   return (int)v;
}
