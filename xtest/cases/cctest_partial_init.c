// SPDX-License-Identifier: MIT
// cctest_partial_init.c --- cctest case partial_init
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x0A */

#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

   bf.s  = -1;  /* sign-extended: all ones in 8-bit field */
   bf.u  = 255; /* 0xFF */
   int r = 0;
   if (bf.s == -1)
      r += 1;
   if (bf.u == 255)
      r += 2;
   return r; /* 1+2 = 3 */
}

struct partial5 {
   int a;
   int b;
   int c;
   int d;
   int e;
};

int test_main(void)
{
   struct partial5 s = {.a = 10};
   return s.a + s.b + s.c + s.d + s.e; /* 10+0+0+0+0 = 10 = 0x0A */
}
