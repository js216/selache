// SPDX-License-Identifier: MIT
// cctest_nested_addr.c --- cctest case nested_addr
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

struct inner {
   int val;
};

struct outer {
   struct inner a;
   int b;
};

int test_main(void)
{
   int x      = 10;
   int *outer = &x;
   int r      = 0;
   {
      int x      = 20;
      int *inner = &x;
      r          = *outer + *inner; /* 10+20 = 30 */
   }
   return r; /* 30 = 0x1E */
}
