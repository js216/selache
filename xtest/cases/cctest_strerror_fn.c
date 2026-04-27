// SPDX-License-Identifier: MIT
// cctest_strerror_fn.c --- cctest case strerror_fn
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x01 */

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
   char *p = strerror(0);
   if (!p) return 0;
   /* must return a non-empty string */
   return (p[0] != 0) ? 1 : 0;
}
