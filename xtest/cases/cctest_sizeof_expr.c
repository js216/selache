// SPDX-License-Identifier: MIT
// cctest_sizeof_expr.c --- cctest case sizeof_expr
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
   int arr[5];
   return sizeof(arr) / sizeof(arr[0]); /* 5 */
}
