// SPDX-License-Identifier: MIT
// cctest_expf_fn.c --- cctest case expf_fn
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
   float e = expf(1.0f);
   if (fabsf(e - 2.718281828459045f) > 1e-4f) return 0;
   if (fabsf(expf(0.0f) - 1.0f) > 1e-6f) return 0;
   return 1;
}
