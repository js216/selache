// SPDX-License-Identifier: MIT
// cctest_switch_dflt_mid.c --- cctest case switch_dflt_mid
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
   int x = 99;
   switch (x) {
      case 1: return 0x10;
      default: return 0x20;
      case 3: return 0x30;
   }
}
