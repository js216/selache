// SPDX-License-Identifier: MIT
// cctest_size_t_loop.c --- cctest case size_t_loop
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
   int arr[10] = {0};
   for (size_t i = 0; i < 10; i++)
      arr[i] = 1;
   int sum = 0;
   for (size_t i = 0; i < 10; i++)
      sum += arr[i];
   return sum; /* 10 = 0x0A */
}
