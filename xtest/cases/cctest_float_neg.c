// SPDX-License-Identifier: MIT
// cctest_float_neg.c --- cctest case float_neg
// Copyright (c) 2026 Jakob Kastelic

/* @expect 7 */

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
   float a = 3.0f;
   float b = -a;
   return (int)(b + 10.0f); /* 7 */
}
