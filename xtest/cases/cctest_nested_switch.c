// SPDX-License-Identifier: MIT
// cctest_nested_switch.c --- cctest case nested_switch
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x12 */

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
   int a = 1, b = 2, r = 0;
   switch (a) {
      case 1:
         switch (b) {
            case 1: r = 0x11; break;
            case 2: r = 0x12; break;
            default: r = 0x1F; break;
         }
         break;
      case 2: r = 0x20; break;
   }
   return r; /* 0x12 */
}
