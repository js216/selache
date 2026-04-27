// SPDX-License-Identifier: MIT
// cctest_shadow.c --- cctest case shadow
// Copyright (c) 2026 Jakob Kastelic

/* @expect 4 */

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
   int x = 1;
   int r = x;
   {
      int x = 2;
      r += x;
   }
   r += x;
   return r; /* 1+2+1 = 4 */
}
