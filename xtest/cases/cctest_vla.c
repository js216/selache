// SPDX-License-Identifier: MIT
// cctest_vla.c --- cctest case vla
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x0F */

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
   int arr[5];
   for (int i = 0; i < 5; i++)
      arr[i] = i + 1;
   int s = 0;
   for (int i = 0; i < 5; i++)
      s += arr[i];
   return s; /* 1+2+3+4+5 = 15 = 0xF */
}
