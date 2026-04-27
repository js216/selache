// SPDX-License-Identifier: MIT
// cctest_bytewise_copy.c --- cctest case bytewise_copy
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

int test_main(void)
{
   int src = 0x12345678;
   int dst = 0;
   char *s = (char *)&src;
   char *d = (char *)&dst;
   for (int i = 0; i < (int)sizeof(int); i++)
      d[i] = s[i];
   return (dst == src) ? 0x55 : 0xAA;
}
