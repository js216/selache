// SPDX-License-Identifier: MIT
// cctest_sizeof_incomplete_arr.c --- cctest case sizeof_incomplete_arr
// Copyright (c) 2026 Jakob Kastelic

/* @expect 4 */

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
   int a[] = {10, 20, 30, 40};
   return (int)(sizeof(a) / sizeof(a[0])); /* 4 */
}
