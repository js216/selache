// SPDX-License-Identifier: MIT
// cctest_compound_arr.c --- cctest case compound_arr
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x60 */

#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

static int sum3i(const int *a)
{
   return a[0] + a[1] + a[2];
}

int test_main(void)
{
   return sum3i((int[]){0x10, 0x20, 0x30}); /* 0x60 */
}
