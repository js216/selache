// SPDX-License-Identifier: MIT
// cctest_ptr_cast.c --- cctest case ptr_cast
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x44 */

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
   int x   = 0x41424344;
   char *p = (char *)&x;
   return p[0]; /* LSB of 0x41424344 = 0x44 */
}
