// SPDX-License-Identifier: MIT
// cctest_fmin_fn.c --- cctest case fmin_fn
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
#include <math.h>

int test_main(void)
{
   if (fmin(3.0, 7.0) != 3.0) return 0;
   if (fmin(-2.0, -5.0) != -5.0) return 0;
   return (int)fmin(3.0, 7.0);
}
