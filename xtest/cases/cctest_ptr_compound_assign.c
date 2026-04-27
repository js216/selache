// SPDX-License-Identifier: MIT
// cctest_ptr_compound_assign.c --- cctest case ptr_compound_assign
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
   int arr[5] = {10, 20, 30, 40, 50};
   int *p     = arr;
   p += 2;       /* now at arr[2] */
   int a = *p;   /* 30 */
   p -= 1;       /* now at arr[1] */
   int b = *p;   /* 20 */
   return a + b; /* 50 = 0x32 */
}
