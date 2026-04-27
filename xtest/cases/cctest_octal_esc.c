// SPDX-License-Identifier: MIT
// cctest_octal_esc.c --- cctest case octal_esc
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x71 */

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
   char a = '\101'; /* 'A' = 65 */
   char b = '\060'; /* '0' = 48 */
   return a + b;    /* 65+48 = 113 = 0x71 */
}
