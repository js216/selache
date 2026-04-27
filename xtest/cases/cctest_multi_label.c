// SPDX-License-Identifier: MIT
// cctest_multi_label.c --- cctest case multi_label
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x20 */

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
      case 1: r = 0x10; break;
      case 2:
      target:
         r = 0x20;
         break;
      case 3: goto target; /* jump to case 2's code via goto label */
   }
   return r; /* 0x20 */
}
