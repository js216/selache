// SPDX-License-Identifier: MIT
// cctest_do_at_least_once.c --- cctest case do_at_least_once
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x01 */

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
   int count = 0;
   do {
      count++;
   } while (0);
   return count;
}
