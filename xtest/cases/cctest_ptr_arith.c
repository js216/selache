// SPDX-License-Identifier: MIT
// cctest_ptr_arith.c --- cctest case ptr_arith
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x30 */

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
   int arr[3];
   arr[0] = 0x10;
   arr[1] = 0x20;
   arr[2] = 0x30;
   int *p = &arr[0];
   p      = p + 2;
   return *p; /* 0x30 */
}
