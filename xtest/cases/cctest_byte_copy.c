// SPDX-License-Identifier: MIT
// cctest_byte_copy.c --- cctest case byte_copy
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x55 */

#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

static void byte_copy(char *dst, const char *src, int n)
{
   for (int i = 0; i < n; i++)
      dst[i] = src[i];
}

int test_main(void)
{
   int src = 0x12345678;
   int dst = 0;
   byte_copy((char *)&dst, (const char *)&src, (int)sizeof(int));
   return (dst == src) ? 0x55 : 0xAA; /* 0x55 */
}
