// SPDX-License-Identifier: MIT
// cctest_isalnum.c --- cctest case isalnum
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x33 */

#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int test_main(void)
{
   int r = 0;
   if (isalnum('A')) r |= 0x01;
   if (isalnum('z')) r |= 0x02;
   if (isalnum('5')) r |= 0x10;
   if (!isalnum(' ')) r |= 0x20;
   return r; /* 0x33 */
}
