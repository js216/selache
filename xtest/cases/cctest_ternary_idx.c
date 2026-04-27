// SPDX-License-Identifier: MIT
// cctest_ternary_idx.c --- cctest case ternary_idx
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0xBB */

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
   int arr[3];
   arr[0] = 0xAA;
   arr[1] = 0xBB;
   arr[2] = 0xCC;
   int x  = 1;
   return arr[x > 0 ? x : 0]; /* arr[1] = 0xBB */
}
