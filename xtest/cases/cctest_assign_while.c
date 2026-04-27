// SPDX-License-Identifier: MIT
// cctest_assign_while.c --- cctest case assign_while
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

int test_main(void)
{
   int arr[5];
   arr[0]  = 3;
   arr[1]  = 5;
   arr[2]  = 7;
   arr[3]  = 0;
   arr[4]  = 99;
   int *p  = arr;
   int sum = 0, val;
   while ((val = *p++) != 0)
      sum += val;
   return sum; /* 3+5+7 = 15 = 0x0F */
}
