// SPDX-License-Identifier: MIT
// cctest_fnptr.c --- cctest case fnptr
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

typedef int (*binop_fn)(int, int);

int test_main(void)
{
   binop_fn fp = helper_add;
   return fp(0x10, 0x20); /* 0x30 */
}
