// SPDX-License-Identifier: MIT
// cctest_putchar_fn.c --- cctest case putchar_fn
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x42 */

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
   int r = putchar('B');
   /* putchar returns the char on success. May return negative on error. */
   if (r < 0) return 0;
   return r & 0xFF; /* 'B' = 0x42 */
}
