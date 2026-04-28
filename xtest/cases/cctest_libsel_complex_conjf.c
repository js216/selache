// SPDX-License-Identifier: MIT
// cctest_libsel_complex_conjf.c --- libsel complex/conjf per-function selcc
// test Copyright (c) 2026 Jakob Kastelic

/* @expect 0x55 */

#include <complex.h>
#include <math.h>
#include <stddef.h>
#include <stdint.h>

float _Complex conjf(float _Complex z)
{
   float _Complex r = z;
   ((float *)&r)[1] = -((float *)&r)[1];
   return r;
}

int test_main(void)
{

   do {
      float _Complex r = conjf(1.0f + 2.0f * I);
      if (((float *)&r)[0] != 1.0f || ((float *)&r)[1] != -2.0f)
         return 0xAA;
   } while (0);
   1;
   return 0x55;
}
