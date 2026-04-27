// SPDX-License-Identifier: MIT
// cctest_cmp_value.c --- cctest case cmp_value
// Copyright (c) 2026 Jakob Kastelic

/* @expect 3 */

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
   int a = 5, b = 3;
   return (a > b) + (a == 5) + (b != 5); /* 3 */
}
