// SPDX-License-Identifier: MIT
// cctest_sizeof_unary.c --- cctest case sizeof_unary
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

int test_main(void)
{
   int x = 0;
   return (int)(sizeof x); /* 4 on 32-bit SHARC */
}
