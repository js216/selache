// SPDX-License-Identifier: MIT
// cctest_struct.c --- cctest case struct
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

struct point {
   int x;
   int y;
};

int test_main(void)
{
   struct point p;
   p.x = 10;
   p.y = 20;
   return p.x + p.y; /* 30 = 0x1E */
}
