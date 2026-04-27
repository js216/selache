// SPDX-License-Identifier: MIT
// cctest_break_continue.c --- cctest case break_continue
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

int test_main(void)
{
   int sum = 0;
   for (int i = 0; i < 5; i++) {
      if (i == 3)
         continue;
      for (int j = 0; j < 10; j++) {
         if (j == 2)
            break;
         sum += 1;
      }
   }
   return sum; /* 4 outer iters * 2 inner = 8 */
}
