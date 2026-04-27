// SPDX-License-Identifier: MIT
// cctest_neg_arr_idx.c --- cctest case neg_arr_idx
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x42 */

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
   int arr[5] = {0x10, 0x20, 0x42, 0x60, 0x80};
   int *p     = &arr[4];
   return p[-2]; /* arr[2] */
}
