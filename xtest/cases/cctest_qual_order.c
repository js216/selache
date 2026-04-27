// SPDX-License-Identifier: MIT
// cctest_qual_order.c --- cctest case qual_order
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x42 */

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
   const volatile int a = 0x42;
   volatile const int b = 0x42;
   int const volatile c = 0x42;
   return (a == b && b == c) ? 0x42 : 0;
}
