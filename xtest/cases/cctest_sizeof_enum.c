// SPDX-License-Identifier: MIT
// cctest_sizeof_enum.c --- cctest case sizeof_enum
// Copyright (c) 2026 Jakob Kastelic

/* @expect 4 */

#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

enum small_enum { SA, SB, SC };

int test_main(void)
{
   return (int)sizeof(enum small_enum); /* 4 on SHARC */
}
