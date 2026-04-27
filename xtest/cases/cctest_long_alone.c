// SPDX-License-Identifier: MIT
// cctest_long_alone.c --- cctest case long_alone
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x1F4 */

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
   long a = 1000L;
   long b = -500L;
   return (int)(a + b); /* 500 = 0x1F4 */
}
