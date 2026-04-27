// SPDX-License-Identifier: MIT
// cctest_stddef_ptrdiff.c --- cctest case stddef_ptrdiff
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
   int arr[5];
   ptrdiff_t d = &arr[4] - &arr[1];
   return (int)d; /* 3 */
}
