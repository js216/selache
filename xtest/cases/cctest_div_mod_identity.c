// SPDX-License-Identifier: MIT
// cctest_div_mod_identity.c --- cctest case div_mod_identity
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
   int a = -17, b = 5;
   int q = a / b; /* -3 */
   int r = a % b; /* -2 */
   return (q * b + r == a) ? 0x55 : 0xAA;
}
