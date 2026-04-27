// SPDX-License-Identifier: MIT
// cctest_llong_limits.c --- cctest case llong_limits
// Copyright (c) 2026 Jakob Kastelic

/* @expect 3 */

#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

int test_main(void)
{
   int r = 0;
   if (LLONG_MAX > 0)
      r += 1;
   if (ULLONG_MAX == 0xFFFFFFFFFFFFFFFFULL)
      r += 2;
   return r; /* 1+2 = 3 */
}
