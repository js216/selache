// SPDX-License-Identifier: MIT
// cctest_ret_complit.c --- cctest case ret_complit
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x30 */

#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

struct ret_lit {
   int x;
   int y;
};

static struct ret_lit make_lit(int a, int b)
{
   return (struct ret_lit){a, b};
}

int test_main(void)
{
   struct ret_lit r = make_lit(0x10, 0x20);
   return r.x + r.y; /* 0x30 */
}
