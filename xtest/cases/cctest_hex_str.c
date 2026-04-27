// SPDX-License-Identifier: MIT
// cctest_hex_str.c --- cctest case hex_str
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0xC6 */

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
   const char *s = "\x41\x42\x43"; /* "ABC" */
   return s[0] + s[1] + s[2];      /* 65+66+67 = 198 = 0xC6 */
}
