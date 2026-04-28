// SPDX-License-Identifier: MIT
// cctest_libsel_stdlib_labs.c --- libsel stdlib/labs per-function selcc test
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x55 */

#include <stddef.h>
#include <stdint.h>

long labs(long n)
{
   return n < 0 ? -n : n;
}

int test_main(void)
{

   return (labs(-5L) == 5L) ? 0x55 : 0xAA;
}
