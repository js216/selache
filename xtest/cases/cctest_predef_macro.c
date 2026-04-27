// SPDX-License-Identifier: MIT
// cctest_predef_macro.c --- cctest case predef_macro
// Copyright (c) 2026 Jakob Kastelic

/* @expect 1 */

#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

#define PASTE2_XA(a, b) a##b
#define PASTE_XA(a, b)  PASTE2_XA(a, b)
int PASTE_XA(cctest_line_paste_, __LINE__) = 0x11;

int test_main(void)
{
   int line = __LINE__;
   return (line > 0) ? 1 : 0; /* 1 */
}
