// SPDX-License-Identifier: MIT
// cctest_nested_init.c --- cctest case nested_init
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

struct ns_inner {
   int a;
   int b;
};

struct ns_outer {
   struct ns_inner in;
   int c;
};

int test_main(void)
{
   struct ns_outer o = {
       .in = {.a = 5, .b = 10},
         .c = 15
   };
   return o.in.a + o.in.b + o.c; /* 30 = 0x1E */
}
