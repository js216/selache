// SPDX-License-Identifier: MIT
// cctest_global_const_init.c --- cctest case global_const_init
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x36 */

#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

static const int g_const_a = 10 + 20;
static const int g_const_b = (3 * 4) << 1;

int test_main(void)
{
   return g_const_a + g_const_b; /* 30 + 24 = 54 = 0x36 */
}
