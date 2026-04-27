// SPDX-License-Identifier: MIT
// cctest_compound.c --- cctest case compound
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

int test_main(void)
{
   int x = 1;
   x += 2;
   x *= 3;
   x -= 1;
   x <<= 1;
   return x;
}
