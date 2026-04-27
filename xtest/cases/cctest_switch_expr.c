// SPDX-License-Identifier: MIT
// cctest_switch_expr.c --- cctest case switch_expr
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

   s.val = 3;
   s.val += 2;
   return s.val; /* 5 */
}

int test_main(void)
{
   int a = 3, b = 4;
   switch (a + b) {
      case 7: return 0x55;
      case 8: return 0xAA;
      default: return 0;
   }
}
