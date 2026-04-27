// SPDX-License-Identifier: MIT
// cctest_past_end_cmp.c --- cctest case past_end_cmp
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x05 */

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
   int *end  = &arr[5]; /* one past end: valid for comparison */
   int count = 0;
   for (int *p = arr; p != end; p++)
      count++;
   return count;
}
