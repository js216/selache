// SPDX-License-Identifier: MIT
// cctest_cast_init.c --- cctest case cast_init
// Copyright (c) 2026 Jakob Kastelic

/* @expect 3 */

#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

static int g_cast_init = (int)3;

int test_main(void)
{
   return g_cast_init; /* 3 */
}
