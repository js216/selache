// SPDX-License-Identifier: MIT
// cctest_mul_direct.c --- cctest case mul_direct
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x9 */

#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

static int helper_mul(int a, int b)
{
   return a * b;
}

int test_main(void)
{
   return helper_mul(3, 3);
}
