// SPDX-License-Identifier: MIT
// cctest_frexp_fn.c --- cctest case frexp_fn
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x06 */

#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>
#include <math.h>

int test_main(void)
{
   int e = 0;
   double m = frexp(32.0, &e);
   /* 32 = 0.5 * 2^6 */
   if (fabs(m - 0.5) > 1e-9) return 0;
   return e;
}
