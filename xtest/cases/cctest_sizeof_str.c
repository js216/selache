// SPDX-License-Identifier: MIT
// cctest_sizeof_str.c --- cctest case sizeof_str
// Copyright (c) 2026 Jakob Kastelic

/* @expect 6 */

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
   return (int)sizeof("hello"); /* 6 (5 chars + NUL) */
}
