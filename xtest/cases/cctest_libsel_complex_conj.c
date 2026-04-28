// SPDX-License-Identifier: MIT
// cctest_libsel_complex_conj.c --- libsel complex/conj per-function selcc test
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x55 */

#include <complex.h>
#include <math.h>
#include <stddef.h>
#include <stdint.h>

double _Complex conj(double _Complex z)
{
   double _Complex r = z;
   ((double *)&r)[1] = -((double *)&r)[1];
   return r;
}

int test_main(void)
{

   do {
      double _Complex r = conj(1.0 + 2.0 * I);
      if (((double *)&r)[0] != 1.0 || ((double *)&r)[1] != -2.0)
         return 0xAA;
   } while (0);
   1;
   return 0x55;
}
