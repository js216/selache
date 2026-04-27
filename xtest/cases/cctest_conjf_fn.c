// SPDX-License-Identifier: MIT
// cctest_conjf_fn.c --- cctest case conjf_fn
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x01 */

#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>
#include <complex.h>
#include <math.h>

int test_main(void)
{
   float _Complex z = 3.0f + 4.0f * I;
   float _Complex c = conjf(z);
   if (crealf(c) != 3.0f) return 0;
   if (cimagf(c) != -4.0f) return 0;
   return 1;
}
