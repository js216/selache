// SPDX-License-Identifier: MIT
// cctest_bool_as_index.c --- cctest case bool_as_index
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x20 */

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
   int arr[2] = {0x10, 0x20};
   _Bool b    = 42;
   return arr[b];
}
