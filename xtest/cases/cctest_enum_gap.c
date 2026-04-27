// SPDX-License-Identifier: MIT
// cctest_enum_gap.c --- cctest case enum_gap
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x1F5 */

#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

enum sparse { SP_LO = 1, SP_HI = 1000, SP_NEG = -500 };

int test_main(void)
{
   return SP_HI + SP_NEG + SP_LO; /* 1000 - 500 + 1 = 501 = 0x1F5 */
}
