// SPDX-License-Identifier: MIT
// cctest_default_first.c --- cctest case default_first
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x03 */

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
   int x = 42;
   switch (x) {
      default: return 3;
      case 1: return 1;
      case 2: return 2;
   }
}
