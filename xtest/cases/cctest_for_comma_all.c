// SPDX-License-Identifier: MIT
// cctest_for_comma_all.c --- cctest case for_comma_all
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x1E */

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
   int a, b, sum = 0;
   for (a = 0, b = 10; a < 3, b > 7; a++, b--)
      sum += a + b;
   /* iter0: a=0,b=10 → sum=10; iter1: a=1,b=9 → sum=20; iter2: a=2,b=8 → sum=30
      then a=3,b=7 → condition: (3<3 is 0, but comma evals to b>7 which is
      false) → stop */
   return sum; /* 30 = 0x1E */
}
