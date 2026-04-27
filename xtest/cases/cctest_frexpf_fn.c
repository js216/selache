// SPDX-License-Identifier: MIT
// cctest_frexpf_fn.c --- cctest case frexpf_fn
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x05 */

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
   int e = 0;
   float m = frexpf(16.0f, &e);
   /* 16 = 0.5 * 2^5 */
   if (fabsf(m - 0.5f) > 1e-6f) return 0;
   return e;
}
