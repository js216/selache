// SPDX-License-Identifier: MIT
// cctest_sizeof_no_sideeffect.c --- cctest case sizeof_no_sideeffect
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x04 */

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
   int x  = 0;
   int sz = (int)sizeof(x = 42); /* x = 42 is NOT executed */
   return sz + x;                /* 4 + 0 = 4 */
}
