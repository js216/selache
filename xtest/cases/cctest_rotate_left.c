// SPDX-License-Identifier: MIT
// cctest_rotate_left.c --- cctest case rotate_left
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

   return (sizeof(u) == sizeof(int)) ? 0x55 : 0xAA;
}

int test_main(void)
{
   unsigned int x       = 0x12345678u;
   int n                = 8;
   unsigned int rotated = (x << n) | (x >> (32 - n));
   return (rotated == 0x34567812u) ? 0x55 : 0xAA;
}
