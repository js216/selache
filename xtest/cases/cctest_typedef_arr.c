// SPDX-License-Identifier: MIT
// cctest_typedef_arr.c --- cctest case typedef_arr
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x0F */

#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

typedef int arr5_t[5];

int test_main(void)
{
   arr5_t a = {1, 2, 3, 4, 5};
   int sum  = 0;
   for (int i = 0; i < 5; i++)
      sum += a[i];
   return sum; /* 15 = 0x0F */
}
