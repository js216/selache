// SPDX-License-Identifier: MIT
// cctest_byte_pack.c --- cctest case byte_pack
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

int test_main(void)
{
   unsigned int x = ((unsigned int)0x12 << 24) | ((unsigned int)0x34 << 16) |
                    ((unsigned int)0x56 << 8) | ((unsigned int)0x78 << 0);
   return (x == 0x12345678u) ? 0x55 : 0xAA;
}
