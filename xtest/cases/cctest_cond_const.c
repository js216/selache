// SPDX-License-Identifier: MIT
// cctest_cond_const.c --- cctest case cond_const
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x44 */

#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

static const int g_cond_const = (sizeof(int) == 4) ? 0x44 : 0x88;

int test_main(void)
{
   return g_cond_const; /* 0x44 */
}
