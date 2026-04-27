// SPDX-License-Identifier: MIT
// cctest_multi_case.c --- cctest case multi_case
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x10 */

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
      case 1:
      case 2:
      case 3: r = 0x10; break;
      case 4:
      case 5: r = 0x20; break;
      default: r = 0xFF;
   }
   return r; /* 0x10 */
}
