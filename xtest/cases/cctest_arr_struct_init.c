// SPDX-License-Identifier: MIT
// cctest_arr_struct_init.c --- cctest case arr_struct_init
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x15 */

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
   struct pt pts[] = {
       {1, 2},
       {3, 4},
       {5, 6}
   };
   return pts[0].x + pts[0].y + pts[1].x + pts[1].y + pts[2].x + pts[2].y;
   /* 1+2+3+4+5+6 = 21 = 0x15 */
}
