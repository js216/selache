// SPDX-License-Identifier: MIT
// cctest_libsel_complex_creal.c --- libsel complex/creal per-function selcc
// test Copyright (c) 2026 Jakob Kastelic

/* @expect 0x55 */

#include <complex.h>
#include <math.h>
#include <stddef.h>
#include <stdint.h>

double creal(double _Complex z)
{
   return ((double *)&z)[0];
}

int test_main(void)
{

   return (creal(1.0 + 2.0 * I) == 1.0) ? 0x55 : 0xAA;
}
