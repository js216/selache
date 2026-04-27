// SPDX-License-Identifier: MIT
// cctest_dangling_else.c --- cctest case dangling_else
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

int test_main(void)
{
   int a = 1, b = 0, r = 0;
   if (a)
      if (b)
         r = 1;
      else
         r = 2;
   return r; /* 2 */
}
