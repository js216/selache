// SPDX-License-Identifier: MIT
// cctest_libsel_math_ldexpf.c --- libsel math/ldexpf per-function selcc test
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

int test_main(void)
{

   return (ldexpf(1.0f, 3) == 8.0f && ldexpf(0.5f, 2) == 2.0f) ? 0x55 : 0xAA;
}
