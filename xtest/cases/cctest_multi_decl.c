// SPDX-License-Identifier: MIT
// cctest_multi_decl.c --- cctest case multi_decl
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x3D */

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
      int a;
      int b;
      int c;
   } s = {0};

   return arr[0] + arr[4] + s.a + s.b + s.c; /* all zero = 0 */
}

int test_main(void)
{
   int a = 1, *b, c[3];
   b     = &a;
   c[0]  = 10;
   c[1]  = 20;
   c[2]  = 30;
   return *b + c[0] + c[1] + c[2]; /* 1+10+20+30 = 61 = 0x3D */
}
