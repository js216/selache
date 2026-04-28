// SPDX-License-Identifier: MIT
// cctest_libsel_math_log2f.c --- libsel math/log2f per-function selcc test
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x55 */

#include <math.h>
#include <stddef.h>
#include <stdint.h>

static const float _lf_ln2 = 0.69314718055994530942f;

float logf(float x)
{
   union {
      float f;
      unsigned int u;
   } c;

   int e;
   float f, s, s2, r;
   if (isnan(x))
      return x;
   if (x < 0.0f)
      return NAN;
   if (x == 0.0f)
      return -INFINITY;
   if (isinf(x))
      return x;
   c.f = x;
   e   = (int)((c.u >> 23) & 0xFF) - 127;
   c.u = (c.u & 0x007FFFFFu) | 0x3F800000u;
   f   = c.f;
   if (f > 1.41421356f) {
      f *= 0.5f;
      e++;
   }
   f -= 1.0f;
   s  = f / (2.0f + f);
   s2 = s * s;
   r  = 0.2392950207f;
   r  = r * s2 + 0.2850074744f;
   r  = r * s2 + 0.4000059962f;
   r  = r * s2 + 0.6666666507f;
   return (float)e * _lf_ln2 + f - s * (f - r * s2);
}

static const float _l2f_inv_ln2 = 1.44269504088896340736f;

float log2f(float x)
{
   return logf(x) * _l2f_inv_ln2;
}

int test_main(void)
{

   return (log2f(1.0f) == 0.0f && log2f(2.0f) > 0.999f && log2f(2.0f) < 1.001f)
              ? 0x55
              : 0xAA;
}
