// SPDX-License-Identifier: MIT
// cctest_printf_fn.c --- cctest case printf_fn
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x55 */

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
   /* printf goes through putchar; we can't capture stdout here.
      Just check the byte count returned for a fixed string. */
   int n = printf("ab");
   if (n != 2) return 0;
   return 0x55;
}
