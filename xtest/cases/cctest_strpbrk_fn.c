// SPDX-License-Identifier: MIT
// cctest_strpbrk_fn.c --- cctest case strpbrk_fn
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
   const char *s = "abcdef";
   const char *p = strpbrk(s, "zfd");
   if (!p) return 0xFF;
   return (int)(p - s); /* 'd' at 3 */
}
