// SPDX-License-Identifier: MIT
// cctest_toupper.c --- cctest case toupper
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
#include <ctype.h>

int test_main(void)
{
   int r1 = toupper('a'); /* 'A' = 0x41 */
   int r2 = toupper('A');
   int r3 = toupper('7');
   if (r1 != 'A') return 0;
   if (r2 != 'A') return 0;
   if (r3 != '7') return 0;
   return r1;
}
