// SPDX-License-Identifier: MIT
// cctest_libsel_math_frexpf.c --- libsel math/frexpf per-function selcc test
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x55 */

#include <math.h>
#include <stddef.h>
#include <stdint.h>

float frexpf(float x, int *exp)
{
   union {
      float f;
      unsigned int u;
   } c;

   int e;
   *exp = 0;
   if (x == 0.0f || isnan(x) || isinf(x))
      return x;
   c.f = x;
   e   = (int)((c.u >> 23) & 0xFF);
   if (e == 0) {
      c.f = x * 8388608.0f;
      e   = (int)((c.u >> 23) & 0xFF) - 23;
   }
   *exp = e - 126;
   c.u  = (c.u & 0x807FFFFFu) | 0x3F000000u;
   return c.f;
}

int test_main(void)
{

   do {
      int e;
      float m = frexpf(8.0f, &e);
      if (m != 0.5f || e != 4)
         return 0xAA;
   } while (0);
   1;
   return 0x55;
}
