// SPDX-License-Identifier: MIT
// cctest_implicit_zero.c --- cctest case implicit_zero
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0 */

#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

static int g_zero_init_test;

int test_main(void)
{
   return g_zero_init_test; /* 0 -- file-scope without initializer is zero */
}
