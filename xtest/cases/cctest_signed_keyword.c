// SPDX-License-Identifier: MIT
// cctest_signed_keyword.c --- cctest case signed_keyword
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
   signed x = -10;
   signed y = 20;
   return x + y; /* 10 = 0x0A */
}
