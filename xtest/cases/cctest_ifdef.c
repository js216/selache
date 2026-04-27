// SPDX-License-Identifier: MIT
// cctest_ifdef.c --- cctest case ifdef
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x30 */

#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

#define CCTEST_IFDEF_MARKER

int test_main(void)
{
   int r = 0;
#ifdef CCTEST_IFDEF_MARKER
   r += 0x10;
#endif
#ifndef CCTEST_NONEXISTENT
   r += 0x20;
#endif
   return r; /* 0x30 */
}
