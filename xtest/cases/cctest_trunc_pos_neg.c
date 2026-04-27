// SPDX-License-Identifier: MIT
// cctest_trunc_pos_neg.c --- cctest case trunc_pos_neg
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x03 */

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
   int a = (int)(3.7f);  /* 3 */
   int b = (int)(-2.7f); /* -2 */
   return a + b + 2;     /* 3 + (-2) + 2 = 3 */
}
