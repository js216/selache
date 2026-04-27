// SPDX-License-Identifier: MIT
// cctest_empty_macro.c --- cctest case empty_macro
// Copyright (c) 2026 Jakob Kastelic

/* @expect 5 */

#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

#define EMPTY_MACRO

int test_main(void)
{
   int x = 5 EMPTY_MACRO;
   return x; /* 5 */
}
