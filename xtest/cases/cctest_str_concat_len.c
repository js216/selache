// SPDX-License-Identifier: MIT
// cctest_str_concat_len.c --- cctest case str_concat_len
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x05 */

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
   const char *s = "ab"
                   "cde";
   int len       = 0;
   while (s[len])
      len++;
   return len; /* "abcde" = 5 */
}
