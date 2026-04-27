// SPDX-License-Identifier: MIT
// cctest_sizeof_abstract.c --- cctest case sizeof_abstract
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x18 */

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
   int a = (int)sizeof(int *);  /* 4 */
   int b = (int)sizeof(int[5]); /* 20 */
   return a + b;                /* 4+20 = 24 = 0x18 */
}
