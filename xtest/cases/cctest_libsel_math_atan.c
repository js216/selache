// SPDX-License-Identifier: MIT
// cctest_libsel_math_atan.c --- libsel math/atan per-function selcc test
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x55 */

#include <math.h>
#include <stddef.h>
#include <stdint.h>

static const float _af_pi_2 = 1.5707963267948966f;
static const float _af_pi_4 = 0.7853981633974483f;

static float _af_k(float a)
{
   float a2 = a * a;
   float r;
   r = 0.0028662257f;
   r = r * a2 - 0.0161657367f;
   r = r * a2 + 0.0429096138f;
   r = r * a2 - 0.0752896400f;
   r = r * a2 + 0.1065626393f;
   r = r * a2 - 0.1420889944f;
   r = r * a2 + 0.1999355085f;
   r = r * a2 - 0.3333333135f;
   return a + a * a2 * r;
}

float atanf(float x)
{
   float a, r, base;
   int neg;
   if (isnan(x))
      return x;
   if (x == 0.0f)
      return x;
   if (isinf(x))
      return x > 0 ? _af_pi_2 : -_af_pi_2;
   neg = x < 0.0f;
   a   = neg ? -x : x;
   if (a <= 0.4142135623f) {
      r    = _af_k(a);
      base = 0.0f;
   } else if (a <= 2.4142135623f) {
      r    = _af_k((a - 1.0f) / (a + 1.0f));
      base = _af_pi_4;
   } else {
      r    = _af_k(-1.0f / a);
      base = _af_pi_2;
   }
   r = base + r;
   if (neg)
      r = -r;
   return r;
}

double atan(double x)
{
   return (double)atanf((float)x);
}

int test_main(void)
{

   return (atan(0.0) == 0.0) ? 0x55 : 0xAA;
}
