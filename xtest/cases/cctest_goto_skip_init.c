// SPDX-License-Identifier: MIT
// cctest_goto_skip_init.c --- cctest case goto_skip_init
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
   goto skip;
   {
      int x = 99;
      r     = x;
   }
skip:
   return r; /* 0x55 -- the block was skipped */
}
