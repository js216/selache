// SPDX-License-Identifier: MIT
// cctest_extern_fn.c --- cctest case extern_fn
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x50 */

#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

static int helper_add(int x, int y)
{
   return x + y;
}

int test_main(void)
{
   extern int helper_add(int, int);
   return helper_add(0x20, 0x30); /* 0x50 */
}
