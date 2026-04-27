// SPDX-License-Identifier: MIT
// cctest_comma_subscript.c --- cctest case comma_subscript
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x28 */

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
   arr[0]    = 10;
   arr[1]    = 20;
   arr[2]    = 30;
   arr[3]    = 40;
   arr[4]    = 50;
   int dummy = 0;
   return arr[(dummy = 99, 3)]; /* comma evaluates dummy=99, result is 3 →
                                   arr[3] = 40 = 0x28 */
}
