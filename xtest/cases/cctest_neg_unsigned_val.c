// SPDX-License-Identifier: MIT
// cctest_neg_unsigned_val.c --- cctest case neg_unsigned_val
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
   unsigned int u   = 1;
   unsigned int neg = -u; /* UINT_MAX */
   return (neg == 0xFFFFFFFFu) ? 0x55 : 0xAA;
}
