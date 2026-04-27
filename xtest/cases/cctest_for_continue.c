// SPDX-License-Identifier: MIT
// cctest_for_continue.c --- cctest case for_continue
// Copyright (c) 2026 Jakob Kastelic

/* @expect 9 */

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
   int s = 0;
   for (int i = 0; i < 6; i++) {
      if (i == 2 || i == 4)
         continue;
      s += i;
   }
   return s; /* 0+1+3+5 = 9 */
}
