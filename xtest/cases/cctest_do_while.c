// SPDX-License-Identifier: MIT
// cctest_do_while.c --- cctest case do_while
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x0C */

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
   int n = 0, i = 0;
   do {
      n = n + 2;
      i = i + 1;
   } while (i < 6);
   return n;
}
