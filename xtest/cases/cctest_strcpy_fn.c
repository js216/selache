// SPDX-License-Identifier: MIT
// cctest_strcpy_fn.c --- cctest case strcpy_fn
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

int test_main(void)
{
   char dst[8] = {0};
   char *r = strcpy(dst, "hello");
   if (r != dst) return 0;
   /* 'h' = 0x68 */
   return (int)(unsigned char)dst[0];
}
