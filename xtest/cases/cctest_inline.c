// SPDX-License-Identifier: MIT
// cctest_inline.c --- cctest case inline
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x31 */

#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

static inline int sq(int x)
{
   return x * x;
}

int test_main(void)
{
   return sq(7); /* 49 = 0x31 */
}
