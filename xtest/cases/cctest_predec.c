// SPDX-License-Identifier: MIT
// cctest_predec.c --- cctest case predec
// Copyright (c) 2026 Jakob Kastelic

/* @expect 9 */

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
   int x = 10;
   return --x; /* 9 */
}
