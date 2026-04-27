// SPDX-License-Identifier: MIT
// cctest_string.c --- cctest case string
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0xD7 */

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
   const char *s = "hello";
   return s[0] + s[4]; /* 'h'+'o' = 104+111 = 215 = 0xD7 */
}
