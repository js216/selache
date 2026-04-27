// SPDX-License-Identifier: MIT
// cctest_scope_hide.c --- cctest case scope_hide
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x14 */

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
   int x = 10;
   {
      int x = 20;
      return x; /* 20 = 0x14 */
   }
}
