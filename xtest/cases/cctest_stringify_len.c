// SPDX-License-Identifier: MIT
// cctest_stringify_len.c --- cctest case stringify_len
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x03 */

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
#define MKSTR(x) #x
   const char *s = MKSTR(abc);
   int len       = 0;
   while (s[len])
      len++;
   return len; /* "abc" -> 3 */
#undef MKSTR
}
