// SPDX-License-Identifier: MIT
// cctest_recursive_acc.c --- cctest case recursive_acc
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x37 */

#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

static int sum_acc(int n, int acc)
{
   if (n <= 0)
      return acc;
   return sum_acc(n - 1, acc + n);
}

int test_main(void)
{
   return sum_acc(10, 0); /* 55 */
}
