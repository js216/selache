// SPDX-License-Identifier: MIT
// cctest_rotate.c --- cctest case rotate
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x34 */

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
   unsigned int x    = 0x12345678;
   unsigned int rotl = (x << 8) | (x >> 24); /* 0x34567812 */
   return (int)((rotl >> 24) & 0xFF);        /* 0x34 = 52 */
}
