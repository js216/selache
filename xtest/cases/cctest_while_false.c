// SPDX-License-Identifier: MIT
// cctest_while_false.c --- cctest case while_false
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

int test_main(void)
{
   int r = 0x55;
   while (0) {
      r = 0;
   }
   return r; /* 0x55 */
}
