// SPDX-License-Identifier: MIT
// cctest_if_arith.c --- cctest case if_arith
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x55 */

#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

#define ARITH_A 3
#define ARITH_B 7

int test_main(void)
{
#if (ARITH_A + ARITH_B) == 10
   return 0x55;
#else
   return 0xAA;
#endif
}
