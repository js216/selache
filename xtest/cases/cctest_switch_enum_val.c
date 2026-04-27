// SPDX-License-Identifier: MIT
// cctest_switch_enum_val.c --- cctest case switch_enum_val
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

struct rgb {
   int r;
   int g;
   int b;
};

int test_main(void)
{
   enum rgb { R, G, B };
   enum rgb c = G;
   switch (c) {
      case R: return 1;
      case G: return 3;
      case B: return 5;
   }
   return 0;
}
