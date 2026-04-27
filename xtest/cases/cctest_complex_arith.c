// SPDX-License-Identifier: MIT
// cctest_complex_arith.c --- cctest case complex_arith
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x0501 */

#include <complex.h>

int test_main(void)
{
   double _Complex z = (2.0 + 3.0 * I) * (1.0 - I);
   int re = (int)creal(z);
   int im = (int)cimag(z);
   return (re << 8) | im;
}
