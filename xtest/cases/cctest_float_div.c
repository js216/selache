// SPDX-License-Identifier: MIT
// cctest_float_div.c --- cctest case float_div
// Copyright (c) 2026 Jakob Kastelic

/* @expect 3 */

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
   float a = 7.0f;
   float b = 2.0f;
   return (int)(a / b); /* 3 (truncated from 3.5) */
}
