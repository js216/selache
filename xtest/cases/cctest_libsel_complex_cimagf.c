// SPDX-License-Identifier: MIT
// cctest_libsel_complex_cimagf.c --- libsel complex/cimagf per-function selcc
// test Copyright (c) 2026 Jakob Kastelic

/* @expect 0x55 */

#include <complex.h>
#include <math.h>
#include <stddef.h>
#include <stdint.h>

float cimagf(float _Complex z)
{
   return ((float *)&z)[1];
}

int test_main(void)
{

   return (cimagf(1.0f + 2.0f * I) == 2.0f) ? 0x55 : 0xAA;
}
