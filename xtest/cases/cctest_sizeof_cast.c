// SPDX-License-Identifier: MIT
// cctest_sizeof_cast.c --- cctest case sizeof_cast
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
   int n = (int)sizeof(arr);
   return n / (int)sizeof(int); /* 10 = 0xA */
}
