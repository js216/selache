// SPDX-License-Identifier: MIT
// cctest_libsel_math_fabs.c --- libsel math/fabs per-function selcc test
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x55 */

#include <math.h>
#include <stddef.h>
#include <stdint.h>

float fabsf(float x)
{
   union {
      float f;
      unsigned int u;
   } c;

   c.f = x;
   c.u &= 0x7FFFFFFFu;
   return c.f;
}

double fabs(double x)
{
   return (double)fabsf((float)x);
}

int test_main(void)
{

   return (fabs(-3.0) == 3.0) ? 0x55 : 0xAA;
}
