// SPDX-License-Identifier: MIT
// cctest_libsel_math_sqrt.c --- libsel math/sqrt per-function selcc test
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x55 */

#include <math.h>
#include <stddef.h>
#include <stdint.h>

float sqrtf(float x)
{
   union {
      float f;
      unsigned int u;
   } c;

   float g;
   int i;
   if (x < 0.0f)
      return NAN;
   if (x == 0.0f || isnan(x) || isinf(x))
      return x;
   c.f = x;
   c.u = (c.u >> 1) + 0x1FC00000u;
   g   = c.f;
   for (i = 0; i < 4; i++)
      g = (g + x / g) * 0.5f;
   return g;
}

double sqrt(double x)
{
   return (double)sqrtf((float)x);
}

int test_main(void)
{

   return (sqrt(4.0) > 1.99 && sqrt(4.0) < 2.01) ? 0x55 : 0xAA;
}
