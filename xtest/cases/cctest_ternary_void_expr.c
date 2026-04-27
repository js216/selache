// SPDX-License-Identifier: MIT
// cctest_ternary_void_expr.c --- cctest case ternary_void_expr
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x14 */

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
   int x = 10;
   int y = 10;
   (x > 0) ? (void)(y = 20) : (void)(y = 30);
   return y;
}
