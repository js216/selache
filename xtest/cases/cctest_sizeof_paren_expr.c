// SPDX-License-Identifier: MIT
// cctest_sizeof_paren_expr.c --- cctest case sizeof_paren_expr
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x04 */

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
   int x = 42;
   return (int)sizeof((x)); /* sizeof(int) */
}
