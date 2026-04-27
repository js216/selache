// SPDX-License-Identifier: MIT
// cctest_const_arr_param.c --- cctest case const_arr_param
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

static int sum_const_arr(const int a[], int n)
{
   int s = 0;
   for (int i = 0; i < n; i++)
      s += a[i];
   return s;
}

int test_main(void)
{
   const int arr[3] = {5, 10, 15};
   return sum_const_arr(arr, 3); /* 30 = 0x1E */
}
