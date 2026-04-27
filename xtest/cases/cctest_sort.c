// SPDX-License-Identifier: MIT
// cctest_sort.c --- cctest case sort
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x35 */

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
   int a = 5, b = 3;
   if (a > b) {
      int tmp = a;
      a       = b;
      b       = tmp;
   }
   return a * 0x10 + b; /* 3*16 + 5 = 53 = 0x35 */
}
