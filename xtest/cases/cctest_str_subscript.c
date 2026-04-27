// SPDX-License-Identifier: MIT
// cctest_str_subscript.c --- cctest case str_subscript
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x43 */

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
   return "ABCDE"[2]; /* 'C' = 67 = 0x43 */
}
