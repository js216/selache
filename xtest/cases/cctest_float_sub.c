// SPDX-License-Identifier: MIT
// cctest_float_sub.c --- cctest case float_sub
// Copyright (c) 2026 Jakob Kastelic

/* @expect 2 */

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
   float a = 3.0f, b = 5.0f;
   int r = (int)(a - b); /* -2 */
   return -r;            /* 2 */
}
