// SPDX-License-Identifier: MIT
// cctest_printf_first_arg.c --- cctest case printf_first_arg
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x61 */

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
   char buf[16];
   for (int i = 0; i < 16; i++)
      buf[i] = 0;
   snprintf(buf, sizeof(buf), "[%x] %x", 0xa5a5u, 0xb6b6u);
   return (int)(unsigned char)buf[1];
}
