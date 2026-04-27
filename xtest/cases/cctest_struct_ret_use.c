// SPDX-License-Identifier: MIT
// cctest_struct_ret_use.c --- cctest case struct_ret_use
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

struct ret_pair2 {
   int a;
   int b;
};

static struct ret_pair2 make_ret_pair2(int a, int b)
{
   struct ret_pair2 r = {a, b};
   return r;
}

int test_main(void)
{
   struct ret_pair2 p = make_ret_pair2(10, 20);
   return p.a + p.b;
}
