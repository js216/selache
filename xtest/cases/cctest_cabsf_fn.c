// SPDX-License-Identifier: MIT
// cctest_cabsf_fn.c --- cctest case cabsf_fn
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
#include <complex.h>
#include <math.h>

int test_main(void)
{
   float _Complex z = 3.0f + 4.0f * I;
   float r = cabsf(z); /* 5 */
   if (fabsf(r - 5.0f) > 1e-4f) return 0;
   return (int)(r + 0.5f);
}
