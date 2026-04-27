// SPDX-License-Identifier: MIT
// cctest_short_int.c --- cctest case short_int
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x12C */

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
   short int a = 100;
   short int b = 200;
   return a + b; /* 300 = 0x12C */
}
