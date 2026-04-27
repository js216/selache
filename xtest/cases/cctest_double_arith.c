// SPDX-License-Identifier: MIT
// cctest_double_arith.c --- cctest case double_arith
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
   double a = 3.5;
   double b = 2.0;
   return (int)(a * b); /* 7 */
}
