// SPDX-License-Identifier: MIT
// cctest_bits.c --- cctest case bits
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x3F */

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
   int a = (0xFF & 0x3C) | 0x03;
   int b = a ^ 0x00;
   int c = ~0 & b;
   return c;
}
