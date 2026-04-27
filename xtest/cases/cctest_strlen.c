// SPDX-License-Identifier: MIT
// cctest_strlen.c --- cctest case strlen
// Copyright (c) 2026 Jakob Kastelic

/* @expect 6 */

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
   const char *s = "abcdef";
   int len       = 0;
   while (*s++)
      len++;
   return len; /* 6 */
}
