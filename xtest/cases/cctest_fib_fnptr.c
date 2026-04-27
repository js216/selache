// SPDX-License-Identifier: MIT
// cctest_fib_fnptr.c --- cctest case fib_fnptr
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x15 */

#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

static int (*fib_fp)(int);

static int fib_rec(int n)
{
   if (n <= 1)
      return n;
   return fib_fp(n - 1) + fib_fp(n - 2);
}

int test_main(void)
{
   fib_fp = fib_rec;
   return fib_fp(8); /* fib(8) = 21 = 0x15 */
}
