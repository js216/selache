// SPDX-License-Identifier: MIT
// cctest_token_paste.c --- cctest case token_paste
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x42 */

#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

#define PASTE(a, b) a##b

int test_main(void)
{
   int xy = 0x42;
   return PASTE(x, y); /* 0x42 */
}
