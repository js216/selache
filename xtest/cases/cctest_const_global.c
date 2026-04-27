// SPDX-License-Identifier: MIT
// cctest_const_global.c --- cctest case const_global
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x77 */

#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

static const int g_const_val = 0x77;

int test_main(void)
{
   return g_const_val; /* 0x77 */
}
