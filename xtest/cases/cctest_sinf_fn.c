// SPDX-License-Identifier: MIT
// cctest_sinf_fn.c --- cctest case sinf_fn
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
   float s0 = sinf(0.0f);
   float spi2 = sinf((float)M_PI_2);
   if (fabsf(s0) > 1e-5f) return 0;
   if (fabsf(spi2 - 1.0f) > 1e-4f) return 0;
   return 1;
}
