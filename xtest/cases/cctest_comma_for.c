// SPDX-License-Identifier: MIT
// cctest_comma_for.c --- cctest case comma_for
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x0A */

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
   int i, j;
   for (i = 0, j = 10; i < 5; i++, j--) {
   }
   return i + j; /* 5+5=10 = 0xA */
}
