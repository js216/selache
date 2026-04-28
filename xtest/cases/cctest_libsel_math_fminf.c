// SPDX-License-Identifier: MIT
// cctest_libsel_math_fminf.c --- libsel math/fminf per-function selcc test
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x55 */

#include <math.h>
#include <stddef.h>
#include <stdint.h>

float fminf(float x, float y)
{
   if (isnan(x))
      return y;
   if (isnan(y))
      return x;
   return x < y ? x : y;
}

int test_main(void)
{

   return (fminf(1.0f, 2.0f) == 1.0f && fminf(5.0f, 3.0f) == 3.0f) ? 0x55
                                                                   : 0xAA;
}
