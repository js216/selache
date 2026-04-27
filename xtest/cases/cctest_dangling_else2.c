// SPDX-License-Identifier: MIT
// cctest_dangling_else2.c --- cctest case dangling_else2
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x02 */

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
   if (1)
      if (0)
         r = 1;
      else
         r = 2; /* binds to inner if */
   return r;
}
