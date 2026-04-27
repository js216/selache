// SPDX-License-Identifier: MIT
// cctest_is_pow2.c --- cctest case is_pow2
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x55 */

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
   int r = 1;
   for (int i = 0; i < 10; i++) {
      int n = 1 << i;
      if ((n & (n - 1)) != 0)
         r = 0;
   }
   return r ? 0x55 : 0xAA;
}
