// SPDX-License-Identifier: MIT
// cctest_div_neg1.c --- cctest case div_neg1
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
   int x = 42;
   return (x / (-1) == -42) ? 0x55 : 0xAA;
}
