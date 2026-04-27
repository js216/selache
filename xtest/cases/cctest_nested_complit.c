// SPDX-License-Identifier: MIT
// cctest_nested_complit.c --- cctest case nested_complit
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

struct ncouter {
   struct ns_inner in;
   int c;
};

int test_main(void)
{
   struct ncouter o = {
       .in = (struct ns_inner){5, 10},
          .c = 15
   };
   return o.in.a + o.in.b + o.c; /* 5+10+15 = 30 = 0x1E */
}
