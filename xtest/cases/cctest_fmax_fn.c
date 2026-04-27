// SPDX-License-Identifier: MIT
// cctest_fmax_fn.c --- cctest case fmax_fn
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x07 */

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
   if (fmax(3.0, 7.0) != 7.0) return 0;
   if (fmax(-2.0, -5.0) != -2.0) return 0;
   return (int)fmax(3.0, 7.0);
}
