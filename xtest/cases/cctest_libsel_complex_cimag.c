// SPDX-License-Identifier: MIT
// cctest_libsel_complex_cimag.c --- libsel complex/cimag per-function selcc
// test Copyright (c) 2026 Jakob Kastelic

/* @expect 0x55 */

#include <complex.h>
#include <math.h>
#include <stddef.h>
#include <stdint.h>

double cimag(double _Complex z)
{
   return ((double *)&z)[1];
}

int test_main(void)
{

   return (cimag(1.0 + 2.0 * I) == 2.0) ? 0x55 : 0xAA;
}
