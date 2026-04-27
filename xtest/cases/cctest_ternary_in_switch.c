// SPDX-License-Identifier: MIT
// cctest_ternary_in_switch.c --- cctest case ternary_in_switch
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
   int x = 1, y = 2;
   switch (x > 0 ? y : -y) {
      case 2: return 0x22;
      case -2: return 0xAA;
      default: return 0xFF;
   }
}
