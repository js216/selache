// SPDX-License-Identifier: MIT
// cctest_desig_nested_arr.c --- cctest case desig_nested_arr
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x1E */

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
   struct pt {
      int x;
      int y;
   };
   struct pt pts[3] = {
       [0].x = 1, [0].y = 2, [1].x = 3, [1].y = 4, [2].x = 10, [2].y = 10};
   return pts[0].x + pts[0].y + pts[1].x + pts[1].y + pts[2].x + pts[2].y;
}
