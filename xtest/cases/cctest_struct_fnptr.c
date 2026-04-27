// SPDX-License-Identifier: MIT
// cctest_struct_fnptr.c --- cctest case struct_fnptr
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x35 */

#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

static int helper_add(int x, int y)
{
   return x + y;
}

struct dispatch {
   int (*op)(int, int);
   int a;
   int b;
};

int test_main(void)
{
   struct dispatch d;
   d.op = helper_add;
   d.a  = 0x10;
   d.b  = 0x25;
   return d.op(d.a, d.b); /* 0x35 */
}
