// SPDX-License-Identifier: MIT
// cctest_switch_no_match.c --- cctest case switch_no_match
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
   int r = 0x42;
   switch (99) {
      case 1: r = 1; break;
      case 2: r = 2; break;
   }
   return r; /* no case matched, r unchanged */
}
