// SPDX-License-Identifier: MIT
// cctest_libsel_complex_cabsf.c --- libsel complex/cabsf per-function selcc
// test Copyright (c) 2026 Jakob Kastelic

/* @expect 0x55 */

#include <complex.h>
#include <math.h>
#include <stddef.h>
#include <stdint.h>

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

float cabsf(float _Complex z)
{
   float re = ((float *)&z)[0];
   float im = ((float *)&z)[1];
   return sqrtf(re * re + im * im);
}

int test_main(void)
{

   do {
      float r = cabsf(3.0f + 4.0f * I);
      if (r < 4.99f || r > 5.01f)
         return 0xAA;
   } while (0);
   1;
   return 0x55;
}
