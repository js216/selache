// SPDX-License-Identifier: MIT
// cctest_incomplete_init.c --- cctest case incomplete_init
// Copyright (c) 2026 Jakob Kastelic

/* @expect 3 */

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
   int a[5] = {1, 2};
   return a[0] + a[1] + a[2] + a[3] + a[4]; /* 1+2+0+0+0 = 3 */
}
