// SPDX-License-Identifier: MIT
// cctest_ptr_stride.c --- cctest case ptr_stride
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x04 */

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
   int arr[2];
   char *a = (char *)&arr[0];
   char *b = (char *)&arr[1];
   return (int)(b - a); /* sizeof(int) = 4 */
}
