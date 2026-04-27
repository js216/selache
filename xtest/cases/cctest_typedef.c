// SPDX-License-Identifier: MIT
// cctest_typedef.c --- cctest case typedef
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

typedef int score_t;

int test_main(void)
{
   score_t a = 10, b = 20;
   return a + b; /* 30 = 0x1E */
}
