// SPDX-License-Identifier: MIT
// cctest_int_suffix_combo.c --- cctest case int_suffix_combo
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

int test_main(void)
{
   unsigned long ul       = 100UL;
   long unsigned lu       = 100LU;
   unsigned long long ull = 100ULL;
   return (ul == lu && lu == (unsigned long)ull) ? 0x55 : 0xAA;
}
