// SPDX-License-Identifier: MIT
// cctest_cast_short.c --- cctest case cast_short
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0xCD */

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
   short s = (short)0x8000;
   int i   = (int)s;
   return i + 0x8000 + 0xCD;
}
