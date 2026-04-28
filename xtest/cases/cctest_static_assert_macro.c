// SPDX-License-Identifier: MIT
// cctest_static_assert_macro.c --- cctest case static_assert_macro
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x33 */

#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

#include <assert.h>

int test_main(void)
{
   _Static_assert(sizeof(int) == 4, "int must be 4 bytes");
   _Static_assert(CHAR_BIT == 8, "byte is 8 bits");
   return 0x33;
}
