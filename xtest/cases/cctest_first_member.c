// SPDX-License-Identifier: MIT
// cctest_first_member.c --- cctest case first_member
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

struct first_m {
   int x;
   int y;
};

int test_main(void)
{
   struct first_m s;
   s.x    = 0x55;
   s.y    = 0x66;
   int *p = (int *)&s; /* &s == &s.x guaranteed */
   return *p;          /* 0x55 */
}
