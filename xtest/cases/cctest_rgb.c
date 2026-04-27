// SPDX-License-Identifier: MIT
// cctest_rgb.c --- cctest case rgb
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x60 */

#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

struct rgb {
   int r;
   int g;
   int b;
};

int test_main(void)
{
   struct rgb c;
   c.r = 0x10;
   c.g = 0x20;
   c.b = 0x30;
   return c.r + c.g + c.b; /* 0x60 */
}
