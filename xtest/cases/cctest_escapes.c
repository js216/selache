// SPDX-License-Identifier: MIT
// cctest_escapes.c --- cctest case escapes
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x8C */

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
   char a = '\0';        /* 0 */
   char b = '\t';        /* 9 */
   char c = '\\';        /* 92 */
   char d = '\'';        /* 39 */
   return a + b + c + d; /* 0+9+92+39 = 140 = 0x8C */
}
