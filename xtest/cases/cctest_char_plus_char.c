// SPDX-License-Identifier: MIT
// cctest_char_plus_char.c --- cctest case char_plus_char
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0xFE */

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
   unsigned char a = 127;
   unsigned char b = 127;
   int sum         = a + b; /* promoted to int, no overflow */
   return sum;              /* 254 = 0xFE */
}
