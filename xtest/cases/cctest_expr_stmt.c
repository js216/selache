// SPDX-License-Identifier: MIT
// cctest_expr_stmt.c --- cctest case expr_stmt
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x42 */

#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

int test_main(void)
{
   int x = 0x42;
   x;        /* valid expression statement, no side effect */
   5;        /* literal expression statement */
   x + 1;    /* computed but discarded */
   return x; /* 0x42 -- x unchanged */
}
