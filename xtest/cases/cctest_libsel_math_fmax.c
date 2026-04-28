// SPDX-License-Identifier: MIT
// cctest_libsel_math_fmax.c --- libsel math/fmax per-function selcc test
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

double fmax(double x, double y)
{
   return (double)fmaxf((float)x, (float)y);
}

int test_main(void)
{

   return (fmax(1.0, 2.0) == 2.0) ? 0x55 : 0xAA;
}
