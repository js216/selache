// SPDX-License-Identifier: MIT
// cctest_bitwise_mixed_sign.c --- cctest case bitwise_mixed_sign
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
   int s               = -1; /* all bits set */
   unsigned int u      = 0xFF00;
   unsigned int result = s & u; /* s promoted to unsigned */
   return (result == 0xFF00) ? 0x55 : 0xAA;
}
