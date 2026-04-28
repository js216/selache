// SPDX-License-Identifier: MIT
// cctest_libsel_math_fmin.c --- libsel math/fmin per-function selcc test
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

double fmin(double x, double y)
{
   return (double)fminf((float)x, (float)y);
}

int test_main(void)
{

   return (fmin(1.0, 2.0) == 1.0) ? 0x55 : 0xAA;
}
