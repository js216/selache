// SPDX-License-Identifier: MIT
// cctest_gcd.c --- cctest case gcd
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x06 */

#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

static int gcd(int a, int b)
{
   while (b != 0) {
      int t = b;
      b     = a % b;
      a     = t;
   }
   return a;
}

int test_main(void)
{
   return gcd(48, 18); /* 6 */
}
