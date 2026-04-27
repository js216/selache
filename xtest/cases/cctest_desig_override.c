// SPDX-License-Identifier: MIT
// cctest_desig_override.c --- cctest case desig_override
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x32 */

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
   int arr[3] = {[0] = 10, [1] = 20, [0] = 30}; /* arr[0] overridden to 30 */
   return arr[0] + arr[1];                      /* 30+20 = 50 = 0x32 */
}
