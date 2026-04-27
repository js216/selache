// SPDX-License-Identifier: MIT
// cctest_const_fold.c --- cctest case const_fold
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

int test_main(void)
{
   const int a = 2 + 3;     /* 5 */
   const int b = a * 4;     /* 20 */
   const int c = b - a + 5; /* 20 */
   return c * 4;            /* 80 = 0x50 */
}
