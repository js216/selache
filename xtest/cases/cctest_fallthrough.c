// SPDX-License-Identifier: MIT
// cctest_fallthrough.c --- cctest case fallthrough
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
   int x = 2, r = 0;
   switch (x) {
      case 1: r += 1;
      case 2: r += 2;
      case 3: r += 4; break;
      default: r = 0xFF;
   }
   return r; /* 2+4=6 */
}
