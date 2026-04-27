// SPDX-License-Identifier: MIT
// cctest_cast_char.c --- cctest case cast_char
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0xAB */

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
   signed char c = (signed char)0x80;
   int i         = (int)c;
   return i + 0x80 + 0xAB;
}
