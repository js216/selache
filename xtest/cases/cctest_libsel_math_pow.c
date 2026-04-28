// SPDX-License-Identifier: MIT
// cctest_libsel_math_pow.c --- libsel math/pow per-function selcc test
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

float fabsf(float x)
{
   union {
      float f;
      unsigned int u;
   } c;

   c.f = x;
   c.u &= 0x7FFFFFFFu;
   return c.f;
}

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

static int _pwf_oi(float y)
{
   float t = truncf(y);
   if (t != y)
      return 0;
   return fmodf(fabsf(t), 2.0f) == 1.0f;
}

static int _pwf_ii(float y)
{
   return truncf(y) == y;
}

float powf(float x, float y)
{
   if (y == 0.0f)
      return 1.0f;
   if (x == 1.0f)
      return 1.0f;
   if (isnan(x) || isnan(y))
      return NAN;
   if (x == 0.0f) {
      if (y > 0.0f)
         return 0.0f;
      return INFINITY;
   }
   if (isinf(y)) {
      float ax = fabsf(x);
      if (ax == 1.0f)
         return 1.0f;
      if (y > 0.0f)
         return ax > 1.0f ? INFINITY : 0.0f;
      return ax > 1.0f ? 0.0f : INFINITY;
   }
   if (isinf(x)) {
      if (x > 0.0f)
         return y > 0.0f ? INFINITY : 0.0f;
      if (y > 0.0f)
         return _pwf_oi(y) ? -INFINITY : INFINITY;
      return _pwf_oi(y) ? -0.0f : 0.0f;
   }
   if (x < 0.0f) {
      if (!_pwf_ii(y))
         return NAN;
      if (_pwf_oi(y))
         return -expf(y * logf(-x));
      return expf(y * logf(-x));
   }
   return expf(y * logf(x));
}

double pow(double x, double y)
{
   return (double)powf((float)x, (float)y);
}

int test_main(void)
{

   return (pow(2.0, 3.0) > 7.99 && pow(2.0, 3.0) < 8.01) ? 0x55 : 0xAA;
}
