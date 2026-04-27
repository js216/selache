// SPDX-License-Identifier: MIT
// cctest_const_arr.c --- cctest case const_arr
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

int test_main(void)
{
   const int arr[3] = {0x10, 0x20, 0x30};
   return arr[0] + arr[1] + arr[2]; /* 0x60 */
}
