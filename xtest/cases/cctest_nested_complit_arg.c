// SPDX-License-Identifier: MIT
// cctest_nested_complit_arg.c --- cctest case nested_complit_arg
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

struct ncl_inner {
   int a;
   int b;
};

struct ncl_outer {
   struct ncl_inner in;
   int c;
};

static int ncl_sum(struct ncl_outer o)
{
   return o.in.a + o.in.b + o.c;
}

int test_main(void)
{
   return ncl_sum((struct ncl_outer){
       (struct ncl_inner){5, 10},
        15
   });
   /* 5 + 10 + 15 = 30 = 0x1E */
}
