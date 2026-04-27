// SPDX-License-Identifier: MIT
// cctest_float_trunc.c --- cctest case float_trunc
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
   float f = -3.7f;
   int i   = (int)f; /* -3 (truncate toward zero) */
   return -i;        /* 3 */
}
