// SPDX-License-Identifier: MIT
// cctest_libsel_complex_crealf.c --- libsel complex/crealf per-function selcc
// test Copyright (c) 2026 Jakob Kastelic

/* @expect 0x55 */

#include <complex.h>
#include <math.h>
#include <stddef.h>
#include <stdint.h>

float crealf(float _Complex z)
{
   return ((float *)&z)[0];
}

int test_main(void)
{

   return (crealf(1.0f + 2.0f * I) == 1.0f) ? 0x55 : 0xAA;
}
