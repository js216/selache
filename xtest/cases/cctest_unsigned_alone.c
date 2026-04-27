// SPDX-License-Identifier: MIT
// cctest_unsigned_alone.c --- cctest case unsigned_alone
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x12C */

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
   unsigned a = 100;
   unsigned b = 200;
   return (int)(a + b); /* 300 = 0x12C */
}
