// SPDX-License-Identifier: MIT
// cctest_early_return.c --- cctest case early_return
// Copyright (c) 2026 Jakob Kastelic

/* @expect 6 */

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

static int early_return_helper(int x)
{
   if (x > 10)
      return x * 2;
   return helper_add(x, 1);
}

int test_main(void)
{
   return early_return_helper(5);
}
