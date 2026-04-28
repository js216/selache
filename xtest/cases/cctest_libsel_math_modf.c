// SPDX-License-Identifier: MIT
// cctest_libsel_math_modf.c --- libsel math/modf per-function selcc test
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

float modff(float x, float *iptr)
{
   float t;
   if (isnan(x)) {
      *iptr = x;
      return x;
   }
   if (isinf(x)) {
      *iptr = x;
      return signbit(x) ? -0.0f : 0.0f;
   }
   t     = truncf(x);
   *iptr = t;
   return x - t;
}

double modf(double x, double *iptr)
{
   float fi;
   float r = modff((float)x, &fi);
   *iptr   = (double)fi;
   return (double)r;
}

int test_main(void)
{

   do {
      double ip;
      double fp = modf(2.5, &ip);
      if (ip != 2.0 || fp < 0.49 || fp > 0.51)
         return 0xAA;
   } while (0);
   1;
   return 0x55;
}
