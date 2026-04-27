// SPDX-License-Identifier: MIT
// cctest_long.c --- cctest case long
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x1E */

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
   long a = 100000;
   long b = 200000;
   return (int)((a + b) / 10000); /* 30 = 0x1E */
}
