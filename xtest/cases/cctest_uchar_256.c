// SPDX-License-Identifier: MIT
// cctest_uchar_256.c --- cctest case uchar_256
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0 */

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
   unsigned char c = 255;
   c += 1;
   return (int)c;
}
