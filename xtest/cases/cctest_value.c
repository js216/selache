// SPDX-License-Identifier: MIT
// cctest_value.c --- cctest case value
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x1D */

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
   return helper_add(helper_mul(3, 5), helper_mul(2, 7));
}
