// SPDX-License-Identifier: MIT
// cctest_neg_index.c --- cctest case neg_index
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x14 */

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
   arr[0] = 10;
   arr[1] = 20;
   arr[2] = 30;
   arr[3] = 40;
   arr[4] = 50;
   int *p = &arr[3];
   return p[-2]; /* arr[1] = 20 = 0x14 */
}
