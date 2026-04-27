// SPDX-License-Identifier: MIT
// cctest_while_continue.c --- cctest case while_continue
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x19 */

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
   int i   = 0;
   while (i < 10) {
      i++;
      if (i % 2 == 0)
         continue;
      sum += i;
   }
   return sum; /* 1+3+5+7+9 = 25 */
}
