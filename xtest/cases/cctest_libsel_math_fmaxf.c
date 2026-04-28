// SPDX-License-Identifier: MIT
// cctest_libsel_math_fmaxf.c --- libsel math/fmaxf per-function selcc test
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x55 */

#include <math.h>
#include <stddef.h>
#include <stdint.h>

float fmaxf(float x, float y)
{
   if (isnan(x))
      return y;
   if (isnan(y))
      return x;
   return x > y ? x : y;
}

int test_main(void)
{

   return (fmaxf(1.0f, 2.0f) == 2.0f && fmaxf(5.0f, 3.0f) == 5.0f) ? 0x55
                                                                   : 0xAA;
}
