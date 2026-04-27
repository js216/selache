// SPDX-License-Identifier: MIT
// cctest_unary_plus.c --- cctest case unary_plus
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x2A */

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
   int a = 42;
   return +a; /* 42 = 0x2A */
}
