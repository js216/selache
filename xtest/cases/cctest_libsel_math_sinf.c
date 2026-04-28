// SPDX-License-Identifier: MIT
// cctest_libsel_math_sinf.c --- libsel math/sinf per-function selcc test
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x55 */

#include <math.h>
#include <stddef.h>
#include <stdint.h>

static const float _sf_two_over_pi = 0.63661977236758134308f;
static const float _sf_c1          = 1.5707963267341256f;
static const float _sf_c2          = 7.5497894158615964e-08f;

static float _sf_ks(float x)
{
   float x2 = x * x;
   float r;
   r = -1.9515295891e-4f;
   r = r * x2 + 8.3321608736e-3f;
   r = r * x2 + -1.6666654611e-1f;
   r = r * x2 + 1.0f;
   return r * x;
}

static float _sf_kc(float x)
{
   float x2 = x * x;
   float r;
   r = 2.4390448928e-5f;
   r = r * x2 + -1.3888397014e-3f;
   r = r * x2 + 4.1666641831e-2f;
   r = r * x2 + -4.9999999702e-1f;
   r = r * x2 + 1.0f;
   return r;
}

float sinf(float x)
{
   float r, y;
   int q;
   if (isnan(x))
      return x;
   if (isinf(x))
      return NAN;
   if (x == 0.0f)
      return x;
   q = (int)(x * _sf_two_over_pi + (x >= 0.0f ? 0.5f : -0.5f));
   r = x - (float)q * _sf_c1;
   r = r - (float)q * _sf_c2;
   q = q & 3;
   switch (q) {
      case 0: y = _sf_ks(r); break;
      case 1: y = _sf_kc(r); break;
      case 2: y = -_sf_ks(r); break;
      case 3: y = -_sf_kc(r); break;
      default: y = 0.0f; break;
   }
   return y;
}

int test_main(void)
{

   return (sinf(0.0f) == 0.0f && sinf(1.5707963f) > 0.999f) ? 0x55 : 0xAA;
}
