// SPDX-License-Identifier: MIT
// cctest_sizeof_noeval.c --- cctest case sizeof_noeval
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x54 */

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
   int x = 5;
   int s = (int)sizeof(x++);
   return x * 0x10 + s; /* x still 5; s=4 → 0x54 */
}
