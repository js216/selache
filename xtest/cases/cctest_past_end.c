// SPDX-License-Identifier: MIT
// cctest_past_end.c --- cctest case past_end
// Copyright (c) 2026 Jakob Kastelic

/* @expect 4 */

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
   int *end  = &arr[4]; /* valid for comparison */
   int *p    = &arr[0];
   int count = 0;
   while (p != end) {
      count++;
      p++;
   }
   return count; /* 4 */
}
