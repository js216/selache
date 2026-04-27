// SPDX-License-Identifier: MIT
// cctest_unbraced_2d.c --- cctest case unbraced_2d
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x0D */

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
   int m[2][3] = {1, 2, 3, 4, 5, 6};   /* fills row by row */
   return m[0][2] + m[1][0] + m[1][2]; /* 3+4+6 = 13 = 0x0D */
}
