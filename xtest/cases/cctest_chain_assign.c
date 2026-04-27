// SPDX-License-Identifier: MIT
// cctest_chain_assign.c --- cctest case chain_assign
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x15 */

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
   int a, b, c;
   a = b = c = 7;
   return a + b + c; /* 21 = 0x15 */
}
