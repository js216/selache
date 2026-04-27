// SPDX-License-Identifier: MIT
// cctest_str_param.c --- cctest case str_param
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x68 */

#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

static int first_char(const char *s)
{
   return s[0];
}

int test_main(void)
{
   return first_char("hello"); /* 'h' = 104 = 0x68 */
}
