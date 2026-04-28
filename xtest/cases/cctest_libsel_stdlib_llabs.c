// SPDX-License-Identifier: MIT
// cctest_libsel_stdlib_llabs.c --- libsel stdlib/llabs per-function selcc test
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x55 */

#include <stddef.h>
#include <stdint.h>

long long llabs(long long n)
{
   return n < 0 ? -n : n;
}

int test_main(void)
{

   return (llabs(-5LL) == 5LL) ? 0x55 : 0xAA;
}
