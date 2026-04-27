// SPDX-License-Identifier: MIT
// cctest_comma_return.c --- cctest case comma_return
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

static int g_comma_ret_side = 0;

int test_main(void)
{
   g_comma_ret_side = 0;
   int val          = (g_comma_ret_side = 10, g_comma_ret_side + 5);
   return val; /* 15 = 0x0F */
}
