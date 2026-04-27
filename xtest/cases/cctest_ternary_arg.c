// SPDX-License-Identifier: MIT
// cctest_ternary_arg.c --- cctest case ternary_arg
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x28 */

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

int test_main(void)
{
   int x = 2;
   return helper_add(x > 1 ? 10 : 5, x > 3 ? 20 : 30);
   /* helper_add(10, 30) = 40 = 0x28 */
}
