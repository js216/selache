// SPDX-License-Identifier: MIT
// cctest_sizeof_ptr_arr.c --- cctest case sizeof_ptr_arr
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x0A */

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
   int arr[10];
   int *p = arr;
   int sa = (int)sizeof(arr); /* 40 */
   int sp = (int)sizeof(p);   /* 4 */
   return sa / sp;            /* 10 = 0xA */
}
