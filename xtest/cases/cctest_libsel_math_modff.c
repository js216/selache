// SPDX-License-Identifier: MIT
// cctest_libsel_math_modff.c --- libsel math/modff per-function selcc test
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

int test_main(void)
{

   do {
      float ip;
      float fp = modff(2.5f, &ip);
      if (ip != 2.0f || fp < 0.49f || fp > 0.51f)
         return 0xAA;
   } while (0);
   1;
   return 0x55;
}
