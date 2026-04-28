// SPDX-License-Identifier: MIT
// cctest_libsel_math_expf.c --- libsel math/expf per-function selcc test
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x55 */

#include <math.h>
#include <stddef.h>
#include <stdint.h>

static const float _ef_ln2     = 0.69314718055994530942f;
static const float _ef_inv_ln2 = 1.44269504088896340736f;

float expf(float x)
{
   union {
      float f;
      unsigned int u;
   } c;

   float r, y;
   int n;
   if (isnan(x))
      return x;
   if (isinf(x))
      return x > 0.0f ? x : 0.0f;
   if (x == 0.0f)
      return 1.0f;
   if (x > 88.72f)
      return INFINITY;
   if (x < -87.33f)
      return 0.0f;
   n   = (int)(x * _ef_inv_ln2 + (x >= 0.0f ? 0.5f : -0.5f));
   r   = x - (float)n * _ef_ln2;
   y   = 1.9875691e-4f;
   y   = y * r + 1.3981999e-3f;
   y   = y * r + 8.3334519e-3f;
   y   = y * r + 4.1665795e-2f;
   y   = y * r + 1.6666665e-1f;
   y   = y * r + 5.0000001e-1f;
   y   = y * r + 1.0f;
   y   = y * r + 1.0f;
   c.f = 1.0f;
   c.u += (unsigned int)n << 23;
   return y * c.f;
}

int test_main(void)
{

   return (expf(0.0f) == 1.0f && expf(1.0f) > 2.71f && expf(1.0f) < 2.72f)
              ? 0x55
              : 0xAA;
}
