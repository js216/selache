// SPDX-License-Identifier: MIT
// cctest_libsel_math_floorf.c --- libsel math/floorf per-function selcc test
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

int test_main(void)
{

   return (floorf(2.7f) == 2.0f && floorf(-1.5f) == -2.0f) ? 0x55 : 0xAA;
}
