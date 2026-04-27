// SPDX-License-Identifier: MIT
// cctest_strncpy_fn.c --- cctest case strncpy_fn
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x6162 */

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
   char dst[8];
   for (int i = 0; i < 8; i++) dst[i] = 0x55;
   strncpy(dst, "ab", 4); /* writes 'a','b','\0','\0' */
   if (dst[2] != 0) return 0;
   if (dst[3] != 0) return 0;
   return ((unsigned char)dst[0] << 8) | (unsigned char)dst[1];
}
