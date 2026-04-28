// SPDX-License-Identifier: MIT
// cctest_libsel_complex_cabs.c --- libsel complex/cabs per-function selcc test
// Copyright (c) 2026 Jakob Kastelic

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

double sqrt(double x)
{
   return (double)sqrtf((float)x);
}

double cabs(double _Complex z)
{
   double re = ((double *)&z)[0];
   double im = ((double *)&z)[1];
   return sqrt(re * re + im * im);
}

int test_main(void)
{

   do {
      double r = cabs(3.0 + 4.0 * I);
      if (r < 4.99 || r > 5.01)
         return 0xAA;
   } while (0);
   1;
   return 0x55;
}
