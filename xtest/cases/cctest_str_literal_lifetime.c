// SPDX-License-Identifier: MIT
// cctest_str_literal_lifetime.c --- cctest case str_literal_lifetime
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
   const char *p;
   {
      p = "hello"; /* string literal persists past block */
   }
   return (p[0] == 'h') ? 0x55 : 0xAA;
}
