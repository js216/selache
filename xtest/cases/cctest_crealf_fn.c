// SPDX-License-Identifier: MIT
// cctest_crealf_fn.c --- cctest case crealf_fn
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x03 */

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
   float r = crealf(z);
   if (r != 3.0f) return 0;
   return (int)r;
}
