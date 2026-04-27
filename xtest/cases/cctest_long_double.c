// SPDX-License-Identifier: MIT
// cctest_long_double.c --- cctest case long_double
// Copyright (c) 2026 Jakob Kastelic

/* @expect 7 */

#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

int test_main(void)
{
   long double a = 3.0L;
   long double b = 4.0L;
   return (int)(a + b); /* 7 */
}
