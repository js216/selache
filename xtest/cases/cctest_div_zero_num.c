// SPDX-License-Identifier: MIT
// cctest_div_zero_num.c --- cctest case div_zero_num
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0 */

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
   int x = 0, y = 42;
   return x / y;
}
