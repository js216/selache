// SPDX-License-Identifier: MIT
// cctest_sign_promo_cmp.c --- cctest case sign_promo_cmp
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
   unsigned int u = 1;
   int s          = -1;
   return (u < s) ? 0x55 : 0xAA; /* -1 promotes to UINT_MAX > 1 */
}
