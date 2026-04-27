// SPDX-License-Identifier: MIT
// cctest_line_directive.c --- cctest case line_directive
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

#define PASTE2_XA(a, b) a##b
#define PASTE_XA(a, b)  PASTE2_XA(a, b)
int PASTE_XA(cctest_line_paste_, __LINE__) = 0x11;

int test_main(void)
{
#line 1000
   int line = __LINE__;                 /* should be 1000 */
   return (line == 1000) ? 0x55 : 0xAA; /* 0x55 */
}
