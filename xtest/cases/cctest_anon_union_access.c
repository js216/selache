// SPDX-License-Identifier: MIT
// cctest_anon_union_access.c --- cctest case anon_union_access
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x42 */

#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

      struct {
         int x;
         int y;
      };
   };
   struct outer o;
   o.tag = 0;
   o.x   = 10;
   o.y   = 20;
   return o.x + o.y;
}

union ival {
   int i;
   float f;
};

int test_main(void)
{
   struct mixed {
      int kind;
