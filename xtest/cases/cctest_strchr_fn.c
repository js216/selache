// SPDX-License-Identifier: MIT
// cctest_strchr_fn.c --- cctest case strchr_fn
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x02 */

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
   const char *p = strchr(s, 'l');
   if (!p) return 0xFF;
   return (int)(p - s); /* 2 */
}
