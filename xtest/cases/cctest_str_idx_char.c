// SPDX-License-Identifier: MIT
// cctest_str_idx_char.c --- cctest case str_idx_char
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x65 */

#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

   return s.a + s.b + s.c;
}

int test_main(void)
{
   const char *s = "hello";
   return s[1]; /* 'e' */
}
