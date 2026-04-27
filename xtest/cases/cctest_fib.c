// SPDX-License-Identifier: MIT
// cctest_fib.c --- cctest case fib
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x37 */

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
   int a = 0, b = 1;
   for (int i = 0; i < 10; i++) {
      int t = a + b;
      a     = b;
      b     = t;
   }
   return a; /* fib(10) = 55 = 0x37 */
}
