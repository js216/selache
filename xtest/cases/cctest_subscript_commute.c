// SPDX-License-Identifier: MIT
// cctest_subscript_commute.c --- cctest case subscript_commute
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x42 */

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
   int arr[3] = {0x10, 0x42, 0x30};
   return 1 [arr]; /* arr[1] = 0x42 */
}
