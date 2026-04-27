// SPDX-License-Identifier: MIT
// cctest_sizeof_complit.c --- cctest case sizeof_complit
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
   return (int)(sizeof((int[]){1, 2, 3}) / sizeof(int)); /* 3 */
}
