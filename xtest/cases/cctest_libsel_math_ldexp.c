// SPDX-License-Identifier: MIT
// cctest_libsel_math_ldexp.c --- libsel math/ldexp per-function selcc test
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x55 */

#include <math.h>
#include <stddef.h>
#include <stdint.h>

float ldexpf(float x, int exp)
{
   union {
      float f;
      unsigned int u;
   } c;

   int e;
   if (x == 0.0f || isnan(x) || isinf(x))
      return x;
   c.f = x;
   e   = (int)((c.u >> 23) & 0xFF) + exp;
   if (e >= 255)
      return x > 0.0f ? INFINITY : -INFINITY;
   if (e <= 0)
      return x > 0.0f ? 0.0f : -0.0f;
   c.u = (c.u & ~(0xFFu << 23)) | ((unsigned int)e << 23);
   return c.f;
}

double ldexp(double x, int exp)
{
   return (double)ldexpf((float)x, exp);
}

int test_main(void)
{

   return (ldexp(1.0, 3) == 8.0) ? 0x55 : 0xAA;
}
