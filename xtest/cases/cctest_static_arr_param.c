// SPDX-License-Identifier: MIT
// cctest_static_arr_param.c --- cctest case static_arr_param
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x1E */

#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

static int sum_static(int a[static 3], int n)
{
   int s = 0;
   for (int i = 0; i < n; i++)
      s += a[i];
   return s;
}

int test_main(void)
{
   int arr[5] = {2, 4, 6, 8, 10};
   return sum_static(arr, 5); /* 30 = 0x1E */
}
