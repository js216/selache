// SPDX-License-Identifier: MIT
// cctest_desig_init.c --- cctest case desig_init
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x80 */

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
   int arr[5] = {[2] = 0x30, [4] = 0x50};
   return arr[2] + arr[4]; /* 0x80 */
}
