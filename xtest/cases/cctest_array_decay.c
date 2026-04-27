// SPDX-License-Identifier: MIT
// cctest_array_decay.c --- cctest case array_decay
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x44 */

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
   arr[0] = 0x11;
   arr[1] = 0x22;
   arr[2] = 0x33;
   int *p = arr;       /* decay, no & needed */
   return p[0] + p[2]; /* 0x11 + 0x33 = 0x44 */
}
