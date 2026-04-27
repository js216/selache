// SPDX-License-Identifier: MIT
// cctest_ternary_void.c --- cctest case ternary_void
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x0A */

#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

static int g_ternary_void;

int test_main(void)
{
   int x          = 1;
   g_ternary_void = 0;
   x ? (void)(g_ternary_void = 10) : (void)(g_ternary_void = 20);
   return g_ternary_void; /* 10 = 0x0A */
}
