// SPDX-License-Identifier: MIT
// cctest_do_zero.c --- cctest case do_zero
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x42 */

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
   int r = 0;
   do {
      r = 0x42;
   } while (0);
   return r; /* 0x42 */
}
