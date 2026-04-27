// SPDX-License-Identifier: MIT
// cctest_switch_enum.c --- cctest case switch_enum
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

enum dir { UP, DOWN, LEFT, RIGHT };

int test_main(void)
{
   enum dir d = LEFT;
   switch (d) {
      case UP: return 1;
      case DOWN: return 2;
      case LEFT: return 3;
      case RIGHT: return 4;
   }
   return 0;
}
