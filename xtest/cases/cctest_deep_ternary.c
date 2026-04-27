// SPDX-License-Identifier: MIT
// cctest_deep_ternary.c --- cctest case deep_ternary
// Copyright (c) 2026 Jakob Kastelic

/* @expect 4 */

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
   return (x > 100)  ? 1
          : (x > 50) ? 2
          : (x > 45) ? 3
          : (x > 40) ? 4
          : (x > 30) ? 5
                     : 6;
   /* 42 > 40 → 4 */
}
