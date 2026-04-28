// SPDX-License-Identifier: MIT
// cctest_libsel_math_fmod.c --- libsel math/fmod per-function selcc test
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x55 */

#include <math.h>
#include <stddef.h>
#include <stdint.h>

float truncf(float x)
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
   if (e < 0)
      return signbit(x) ? -0.0f : 0.0f;
   m = 0x007FFFFFu >> e;
   c.u &= ~m;
   return c.f;
}

float fmodf(float x, float y)
{
   float q;
   if (isnan(x) || isnan(y) || isinf(x) || y == 0.0f)
      return NAN;
   if (isinf(y))
      return x;
   if (x == 0.0f)
      return x;
   q = truncf(x / y);
   return x - q * y;
}

double fmod(double x, double y)
{
   return (double)fmodf((float)x, (float)y);
}

int test_main(void)
{

   return (fmod(7.0, 3.0) == 1.0) ? 0x55 : 0xAA;
}
