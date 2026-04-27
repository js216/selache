// SPDX-License-Identifier: MIT
// cctest_big_struct_ret.c --- cctest case big_struct_ret
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x18 */

#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

struct big5 {
   int a;
   int b;
   int c;
   int d;
   int e;
};

static struct big5 make_big5(int base)
{
   struct big5 r;
   r.a = base;
   r.b = base + 1;
   r.c = base + 2;
   r.d = base + 3;
   r.e = base + 4;
   return r;
}

int test_main(void)
{
   struct big5 s = make_big5(10);
   return s.a + s.e; /* 10 + 14 = 24 = 0x18 */
}
