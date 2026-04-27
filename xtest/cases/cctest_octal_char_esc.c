// SPDX-License-Identifier: MIT
// cctest_octal_char_esc.c --- cctest case octal_char_esc
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x09 */

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
   char c = '\011'; /* tab = 9 */
   return (int)c;
}
