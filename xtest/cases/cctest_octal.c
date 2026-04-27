// SPDX-License-Identifier: MIT
// cctest_octal.c --- cctest case octal
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x7F */

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
   int a = 0177; /* 127 = 0x7F */
   return a;
}
