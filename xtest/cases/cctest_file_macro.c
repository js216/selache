// SPDX-License-Identifier: MIT
// cctest_file_macro.c --- cctest case file_macro
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

int test_main(void)
{
   const char *f = __FILE__;
   int r         = 0;
   if (f[0] != '\0')
      r = 1;
   return r; /* 1 */
}
