// SPDX-License-Identifier: MIT
// cctest_libsel_math_ceil.c --- libsel math/ceil per-function selcc test
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x55 */

#include <math.h>
#include <stddef.h>
#include <stdint.h>

float floorf(float x)
{
   union {
      float f;
      unsigned int u;
   } c;

   int e;
   unsigned int m;
   if (isnan(x) || isinf(x) || x == 0.0f)
      return x;
   c.f = x;
   e   = (int)((c.u >> 23) & 0xFF) - 127;
   if (e >= 23)
      return x;
   if (e < 0) {
      if (c.u & 0x80000000u)
         return -1.0f;
      return 0.0f;
   }
   m = 0x007FFFFFu >> e;
   if ((c.u & m) == 0)
      return x;
   if (c.u & 0x80000000u)
      c.u += m;
   c.u &= ~m;
   return c.f;
}

float ceilf(float x)
{
   float f = floorf(x);
   if (isnan(x) || isinf(x) || x == 0.0f)
      return x;
   if (f == x)
      return x;
   return f + 1.0f;
}

double ceil(double x)
{
   return (double)ceilf((float)x);
}

int test_main(void)
{

   return (ceil(2.3) == 3.0) ? 0x55 : 0xAA;
}
