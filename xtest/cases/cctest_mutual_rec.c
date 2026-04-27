// SPDX-License-Identifier: MIT
// cctest_mutual_rec.c --- cctest case mutual_rec
// Copyright (c) 2026 Jakob Kastelic

/* @expect 2 */

#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

static int is_odd(int n);

static int is_even(int n)
{
   if (n == 0)
      return 1;
   return is_odd(n - 1);
}

static int is_odd(int n)
{
   if (n == 0)
      return 0;
   return is_even(n - 1);
}

int test_main(void)
{
   return is_even(4) + is_odd(3); /* 1+1 = 2 */
}
