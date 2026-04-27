// SPDX-License-Identifier: MIT
// cctest_nested_struct_ret.c --- cctest case nested_struct_ret
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

struct nr_pair {
   int x;
   int y;
};

static struct nr_pair nr_make(int a, int b)
{
   struct nr_pair p;
   p.x = a;
   p.y = b;
   return p;
}

static int nr_sum(struct nr_pair a, struct nr_pair b)
{
   return a.x + a.y + b.x + b.y;
}

int test_main(void)
{
   return nr_sum(nr_make(1, 2), nr_make(12, 15));
   /* 1+2+12+15 = 30 = 0x1E */
}
