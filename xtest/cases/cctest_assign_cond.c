// SPDX-License-Identifier: MIT
// cctest_assign_cond.c --- cctest case assign_cond
// Copyright (c) 2026 Jakob Kastelic

/* @expect 8 */

#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

static int ret7(void)
{
   return 7;
}

int test_main(void)
{
   int x;
   if ((x = ret7()) > 5)
      return x + 1; /* 8 */
   return 0;
}
