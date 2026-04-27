// SPDX-License-Identifier: MIT
// cctest_dbl_indirect.c --- cctest case dbl_indirect
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x30 */

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
   int (*fp)(int, int)  = helper_add;
   int (**pp)(int, int) = &fp;
   return (*pp)(0x10, 0x20); /* 0x30 */
}
