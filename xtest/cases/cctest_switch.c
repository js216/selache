// SPDX-License-Identifier: MIT
// cctest_switch.c --- cctest case switch
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x22 */

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
      case 1: r = 0x11; break;
      case 2: r = 0x22; break;
      case 3: r = 0x33; break;
      default: r = 0xFF; break;
   }
   return r;
}
