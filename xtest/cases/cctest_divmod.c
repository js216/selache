// SPDX-License-Identifier: MIT
// cctest_divmod.c --- cctest case divmod
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0xE2 */

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
   int a = 100, b = 7;
   return (a / b) * 0x10 + (a % b);
}
