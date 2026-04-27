// SPDX-License-Identifier: MIT
// cctest_extract_byte.c --- cctest case extract_byte
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
   unsigned int x = 0x12345678u;
   return (int)((x >> 16) & 0xFF);
}
