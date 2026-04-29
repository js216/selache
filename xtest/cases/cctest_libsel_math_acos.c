// SPDX-License-Identifier: MIT
// cctest_libsel_math_acos.c --- libsel math/acos per-function selcc test
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x55 */

#include <math.h>
#include <stddef.h>
#include <stdint.h>

#define M_PI_4 0.78539816339744830962

float sqrtf(float x)
{
   union {
      float f;
      unsigned int u;
   } c;

   float g;
   int i;
   if (x < 0.0f)
      return NAN;
   if (x == 0.0f || isnan(x) || isinf(x))
      return x;
   c.f = x;
   c.u = (c.u >> 1) + 0x1FC00000u;
   g   = c.f;
   for (i = 0; i < 4; i++)
      g = (g + x / g) * 0.5f;
   return g;
}

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

static const float _a2f_pi   = 3.14159265358979323846f;
static const float _a2f_pi_2 = 1.5707963267948966f;

float atan2f(float y, float x)
{
   if (isnan(x) || isnan(y))
      return NAN;
   if (y == 0.0f) {
      if (x > 0.0f || (x == 0.0f && !signbit(x)))
         return signbit(y) ? -0.0f : 0.0f;
      return signbit(y) ? -_a2f_pi : _a2f_pi;
   }
   if (x == 0.0f)
      return y > 0.0f ? _a2f_pi_2 : -_a2f_pi_2;
   if (isinf(x) && isinf(y)) {
      float px = x > 0.0f ? (float)M_PI_4 : 3.0f * (float)M_PI_4;
      return y > 0.0f ? px : -px;
   }
   if (isinf(x)) {
      if (x > 0.0f)
         return y > 0.0f ? 0.0f : -0.0f;
      return y > 0.0f ? _a2f_pi : -_a2f_pi;
   }
   if (isinf(y))
      return y > 0.0f ? _a2f_pi_2 : -_a2f_pi_2;
   if (x > 0.0f)
      return atanf(y / x);
   if (y >= 0.0f)
      return atanf(y / x) + _a2f_pi;
   return atanf(y / x) - _a2f_pi;
}

float asinf(float x)
{
   if (isnan(x))
      return x;
   if (x < -1.0f || x > 1.0f)
      return NAN;
   if (x == 0.0f)
      return x;
   return atan2f(x, sqrtf(1.0f - x * x));
}

static const float _acf_pi_2 = 1.5707963267948966f;

float acosf(float x)
{
   if (isnan(x))
      return x;
   if (x < -1.0f || x > 1.0f)
      return NAN;
   return _acf_pi_2 - asinf(x);
}

double acos(double x)
{
   return (double)acosf((float)x);
}

int test_main(void)
{

   return (acos(1.0) == 0.0) ? 0x55 : 0xAA;
}
