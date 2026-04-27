// SPDX-License-Identifier: MIT
// cctest_all_compound.c --- cctest case all_compound
// Copyright (c) 2026 Jakob Kastelic

/* @expect 9 */

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
   int x = 100;
   x /= 5;    /* 20 */
   x %= 7;    /* 6 */
   x &= 0xF;  /* 6 */
   x |= 0x10; /* 0x16 */
   x ^= 0x04; /* 0x12 */
   x >>= 1;   /* 9 */
   return x;
}
