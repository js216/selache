// SPDX-License-Identifier: MIT
// cctest_ternary.c --- cctest case ternary
// Copyright (c) 2026 Jakob Kastelic

/* @expect 9 */

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
   int a = 5, b = 9;
   return (a > b) ? a : b;
}
