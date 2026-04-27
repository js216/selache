// SPDX-License-Identifier: MIT
// cctest_call_in_expr.c --- cctest case call_in_expr
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

static int g_call_order;

static int co_fn1(void)
{
   g_call_order = g_call_order * 10 + 1;
   return 10;
}

static int co_fn2(void)
{
   g_call_order = g_call_order * 10 + 2;
   return 20;
}

int test_main(void)
{
   g_call_order = 0;
   int r        = co_fn1() + co_fn2();
   return r; /* 10+20 = 30 = 0x1E (order of eval is unspecified but sum is
                defined) */
}
