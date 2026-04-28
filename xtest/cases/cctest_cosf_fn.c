// SPDX-License-Identifier: MIT
// cctest_cosf_fn.c --- cctest case cosf_fn
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
   float c0 = cosf(0.0f);
   float cpi = cosf(3.141592653589793f);
   if (fabsf(c0 - 1.0f) > 1e-5f) return 0;
   if (fabsf(cpi + 1.0f) > 1e-4f) return 0;
   return 1;
}
