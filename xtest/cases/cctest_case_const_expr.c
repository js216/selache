// SPDX-License-Identifier: MIT
// cctest_case_const_expr.c --- cctest case case_const_expr
// Copyright (c) 2026 Jakob Kastelic

/* @expect 3 */

#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

enum case_vals { CV_BASE = 10 };

int test_main(void)
{
   int x = 12;
   switch (x) {
      case CV_BASE: return 1;
      case CV_BASE + 1: return 2;
      case CV_BASE + 2: return 3;
      case CV_BASE + 3: return 4;
      default: return 0;
   }
}
