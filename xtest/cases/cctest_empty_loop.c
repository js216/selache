// SPDX-License-Identifier: MIT
// cctest_empty_loop.c --- cctest case empty_loop
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0 */

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
   int n = 5;
   while (--n > 0)
      ;
   return n; /* 0 */
}
