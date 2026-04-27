// SPDX-License-Identifier: MIT
// cctest_bool.c --- cctest case bool
// Copyright (c) 2026 Jakob Kastelic

/* @expect 1 */

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
   _Bool a = 1, b = 0;
   _Bool c = a && !b;
   return (int)c; /* 1 */
}
