// SPDX-License-Identifier: MIT
// cctest_unsigned_mod.c --- cctest case unsigned_mod
// Copyright (c) 2026 Jakob Kastelic

/* @expect 2 */

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
   unsigned int a = 17, b = 5;
   return (int)(a % b); /* 2 */
}
