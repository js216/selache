// SPDX-License-Identifier: MIT
// cctest_ldexp_fn.c --- cctest case ldexp_fn
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x14 */

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
   double v = ldexp(5.0, 2); /* 20 */
   if (fabs(v - 20.0) > 1e-9) return 0;
   return (int)v;
}
