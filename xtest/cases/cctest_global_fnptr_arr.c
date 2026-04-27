// SPDX-License-Identifier: MIT
// cctest_global_fnptr_arr.c --- cctest case global_fnptr_arr
// Copyright (c) 2026 Jakob Kastelic

/* @expect 6 */

#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

static int gfn_a(void)
{
   return 1;
}

static int gfn_b(void)
{
   return 2;
}

static int gfn_c(void)
{
   return 3;
}

static int (*const gfn_table[])(void) = {gfn_a, gfn_b, gfn_c};

int test_main(void)
{
   return gfn_table[0]() + gfn_table[1]() + gfn_table[2](); /* 1+2+3 = 6 */
}
