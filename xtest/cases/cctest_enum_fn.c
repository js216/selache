// SPDX-License-Identifier: MIT
// cctest_enum_fn.c --- cctest case enum_fn
// Copyright (c) 2026 Jakob Kastelic

/* @expect 2 */

#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

enum fruit { APPLE, BANANA, CHERRY };

static enum fruit next_fruit(enum fruit f)
{
   switch (f) {
      case APPLE: return BANANA;
      case BANANA: return CHERRY;
      default: return APPLE;
   }
}

int test_main(void)
{
   enum fruit f = APPLE;
   f            = next_fruit(f); /* BANANA = 1 */
   f            = next_fruit(f); /* CHERRY = 2 */
   return (int)f;                /* 2 */
}
