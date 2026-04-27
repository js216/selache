// SPDX-License-Identifier: MIT
// cctest_label_end.c --- cctest case label_end
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
   int x = 1;
   int r = 0;
   if (x)
      goto skip;
   r = 0x10;
skip:;
   r += 0x55;
   return r; /* 0x55 */
}
