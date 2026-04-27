// SPDX-License-Identifier: MIT
// cctest_modf_fn.c --- cctest case modf_fn
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x09 */

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
   double ip = 0.0;
   double fp = modf(9.5, &ip);
   if (fabs(fp - 0.5) > 1e-9) return 0;
   return (int)ip;
}
