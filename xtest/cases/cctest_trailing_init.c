// SPDX-License-Identifier: MIT
// cctest_trailing_init.c --- cctest case trailing_init
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x37 */

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
   int arr[4] = {
       10,
       20,
       30,
       40,
   };
