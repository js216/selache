// SPDX-License-Identifier: MIT
// cctest_ptr_ternary.c --- cctest case ptr_ternary
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x28 */

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
   int arr[5] = {10, 20, 30, 40, 50};
   int idx    = 3;
   int *p     = (idx < 5) ? &arr[idx] : &arr[0];
   return *p; /* arr[3] = 40 = 0x28 */
}
