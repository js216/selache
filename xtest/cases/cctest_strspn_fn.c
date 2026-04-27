// SPDX-License-Identifier: MIT
// cctest_strspn_fn.c --- cctest case strspn_fn
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x04 */

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
   /* span of chars from "abc"; "abca" then 'X' */
   size_t n = strspn("abcaXyz", "abc");
   return (int)n;
}
