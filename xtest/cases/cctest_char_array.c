// SPDX-License-Identifier: MIT
// cctest_char_array.c --- cctest case char_array
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0xCA */

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
   char s[] = "abcd";
   return s[0] + s[3] + (int)sizeof(s); /* 'a'+'d'+5 = 97+100+5 = 202 = 0xCA */
}
