// SPDX-License-Identifier: MIT
// cctest_libsel_math_fabsf.c --- libsel math/fabsf per-function selcc test
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x55 */

#include <math.h>
#include <stddef.h>
#include <stdint.h>

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

int test_main(void)
{

   return (fabsf(-3.0f) == 3.0f && fabsf(3.0f) == 3.0f) ? 0x55 : 0xAA;
}
