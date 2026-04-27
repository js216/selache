// SPDX-License-Identifier: MIT
// cctest_array.c --- cctest case array
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x32 */

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
   int arr[4];
   arr[0] = 10;
   arr[1] = 20;
   arr[2] = 30;
   arr[3] = 40;
   return arr[0] + arr[3]; /* 50 = 0x32 */
}
