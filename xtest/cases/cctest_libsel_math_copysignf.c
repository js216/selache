// SPDX-License-Identifier: MIT
// cctest_libsel_math_copysignf.c --- libsel math/copysignf per-function selcc
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

int test_main(void)
{

   return (copysignf(3.0f, -1.0f) == -3.0f && copysignf(-3.0f, 1.0f) == 3.0f)
              ? 0x55
              : 0xAA;
}
