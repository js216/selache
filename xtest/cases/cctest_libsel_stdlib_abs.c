// SPDX-License-Identifier: MIT
// cctest_libsel_stdlib_abs.c --- libsel stdlib/abs per-function selcc test
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x55 */

#include <stddef.h>
#include <stdint.h>

int abs(int n)
{
   return n < 0 ? -n : n;
}

int test_main(void)
{

   return (abs(-5) == 5 && abs(7) == 7) ? 0x55 : 0xAA;
}
