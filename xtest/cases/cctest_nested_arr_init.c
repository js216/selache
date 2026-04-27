// SPDX-License-Identifier: MIT
// cctest_nested_arr_init.c --- cctest case nested_arr_init
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

struct inner_arr {
   int data[3];
};

struct outer_arr {
   struct inner_arr in;
   int tag;
};

int test_main(void)
{
   struct outer_arr o = {{{5, 10, 15}}, 0};
   return o.in.data[0] + o.in.data[1] + o.in.data[2] + o.tag;
   /* 5+10+15+0 = 30 = 0x1E */
}
