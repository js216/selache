// SPDX-License-Identifier: MIT
// cctest_nested_comma.c --- cctest case nested_comma
// Copyright (c) 2026 Jakob Kastelic

/* @expect 5 */

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
   int a = 1, b = 2;
   return (a++, b++, a + b); /* a=2, b=3 → 5 */
}
