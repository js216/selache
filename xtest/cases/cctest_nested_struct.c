// SPDX-License-Identifier: MIT
// cctest_nested_struct.c --- cctest case nested_struct
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x0F */

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
   struct outer o;
   o.a.val = 5;
   o.b     = 10;
   return o.a.val + o.b; /* 15 = 0xF */
}
