// SPDX-License-Identifier: MIT
// cctest_long_ident.c --- cctest case long_ident
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x63 */

#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

static int
abcdefghij_abcdefghij_abcdefghij_abcdefghij_abcdefghij_abcdefghijk(void)
{
   return 0x63;
}

int test_main(void)
{
   return abcdefghij_abcdefghij_abcdefghij_abcdefghij_abcdefghij_abcdefghijk();
}
