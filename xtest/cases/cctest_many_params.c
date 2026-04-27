// SPDX-License-Identifier: MIT
// cctest_many_params.c --- cctest case many_params
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x15 */

#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

static int six_args(int a, int b, int c, int d, int e, int f)
{
   return a + b + c + d + e + f;
}

int test_main(void)
{
   return six_args(1, 2, 3, 4, 5, 6); /* 21 = 0x15 */
}
