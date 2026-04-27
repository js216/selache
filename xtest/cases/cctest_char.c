// SPDX-License-Identifier: MIT
// cctest_char.c --- cctest case char
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x8D */

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
   char a = 'A';     /* 65 */
   char b = '\n';    /* 10 */
   char c = '\x42';  /* 66 */
   return a + b + c; /* 141 = 0x8D */
}
