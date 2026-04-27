// SPDX-License-Identifier: MIT
// cctest_multi_decl_stmt.c --- cctest case multi_decl_stmt
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x0F */

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
   int a = 1, b = 2, c = 4, d = 8;
   return a + b + c + d;
}
