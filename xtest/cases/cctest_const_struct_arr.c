// SPDX-License-Identifier: MIT
// cctest_const_struct_arr.c --- cctest case const_struct_arr
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x10 */

#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

static const struct {
   int x;
   int y;
} const_pts[] = {
    {.x = 1, .y = 2},
    {.x = 3, .y = 4},
    {.x = 5, .y = 6},
};

int test_main(void)
{
   return const_pts[0].x + const_pts[1].y + const_pts[2].x + const_pts[2].y;
   /* 1 + 4 + 5 + 6 = 16 = 0x10 */
}
