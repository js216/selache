// SPDX-License-Identifier: MIT
// cctest_hex_char_esc.c --- cctest case hex_char_esc
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x41 */

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
   char c = '\x41'; /* 'A' */
   return (int)c;
}
