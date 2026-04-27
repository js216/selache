// SPDX-License-Identifier: MIT
// cctest_nested_ternary_fn.c --- cctest case nested_ternary_fn
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x0C */

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
   int x = 2;
   return (x == 1)   ? helper_add(1, 2)
          : (x == 2) ? helper_mul(3, 4)
                     : helper_add(5, 6);
   /* x==2 → helper_mul(3,4) = 12 = 0x0C */
}
