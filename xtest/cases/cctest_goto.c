// SPDX-License-Identifier: MIT
// cctest_goto.c --- cctest case goto
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x0A */

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
   int s = 0;
   int i = 1;
loop:
   s = s + i;
   i = i + 1;
   if (i <= 4)
      goto loop;
   return s;
}
