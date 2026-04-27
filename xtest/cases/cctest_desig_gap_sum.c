// SPDX-License-Identifier: MIT
// cctest_desig_gap_sum.c --- cctest case desig_gap_sum
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x14 */

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
   int a[4] = {[0] = 3, [2] = 7, [3] = 10};
   return a[0] + a[1] + a[2] + a[3]; /* 3+0+7+10 = 20 */
}
