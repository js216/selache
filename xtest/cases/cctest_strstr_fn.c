// SPDX-License-Identifier: MIT
// cctest_strstr_fn.c --- cctest case strstr_fn
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x6 */

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
   const char *hay = "the quick brown fox";
   const char *p = strstr(hay, "ick");
   if (!p) return 0xFF;
   return (int)(p - hay); /* 7 */
}
