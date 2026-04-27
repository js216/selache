// SPDX-License-Identifier: MIT
// cctest_xor_swap.c --- cctest case xor_swap
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
   int a = 0x12, b = 0x34;
   a ^= b;
   b ^= a;
   a ^= b;
   return (a == 0x34 && b == 0x12) ? 0x55 : 0xAA;
}
