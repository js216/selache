// SPDX-License-Identifier: MIT
// cctest_strcspn_fn.c --- cctest case strcspn_fn
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x03 */

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
   /* span up to first char in reject "xyz"; 'x' at index 3 */
   size_t n = strcspn("abcxdef", "xyz");
   return (int)n;
}
