// SPDX-License-Identifier: MIT
// cctest_libsel_math_copysign.c --- libsel math/copysign per-function selcc
// test Copyright (c) 2026 Jakob Kastelic

/* @expect 0x55 */

#include <math.h>
#include <stddef.h>
#include <stdint.h>

float copysignf(float x, float y)
{
   union {
      float f;
      unsigned int u;
   } cx, cy;

   cx.f = x;
   cy.f = y;
   cx.u = (cx.u & 0x7FFFFFFFu) | (cy.u & 0x80000000u);
   return cx.f;
}

double copysign(double x, double y)
{
   return (double)copysignf((float)x, (float)y);
}

int test_main(void)
{

   return (copysign(3.0, -1.0) == -3.0) ? 0x55 : 0xAA;
}
