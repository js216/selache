// SPDX-License-Identifier: MIT
// cctest_init_fn_call.c --- cctest case init_fn_call
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x1A */

#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

static int helper_add(int x, int y)
{
   return x + y;
}

static int helper_mul(int a, int b)
{
   return a * b;
}

int test_main(void)
{
   int arr[3] = {helper_add(1, 2), helper_mul(3, 4), helper_add(5, 6)};
   return arr[0] + arr[1] + arr[2]; /* 3+12+11 = 26 = 0x1A */
}
