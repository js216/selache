// SPDX-License-Identifier: MIT
// cctest_line_paste.c --- cctest case line_paste
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
#line 7812
int PASTE_XA(cctest_line_paste_, __LINE__) = 0x11;
int PASTE_XA(cctest_line_paste_, __LINE__) = 0x22;
int PASTE_XA(cctest_line_paste_, __LINE__) = 0x55;

int test_main(void)
{
   /* Reference each paste-produced symbol to prove they are
      distinct; the returned value comes from the last one. */
   int sum =
       PASTE_XA(cctest_line_paste_, 7812) + PASTE_XA(cctest_line_paste_, 7813);
   (void)sum;
   return PASTE_XA(cctest_line_paste_, 7814);
}
