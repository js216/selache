// SPDX-License-Identifier: MIT
// cctest_struct_assign_expr.c --- cctest case struct_assign_expr
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x1E */

#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

struct sa2 {
   int x;
   int y;
};

int test_main(void)
{
   struct sa2 a, b;
   a.x = 10;
   a.y = 20;
   (b = a).x;        /* assignment, then member access (value discarded) */
   return b.x + b.y; /* 10+20 = 30 = 0x1E */
}
