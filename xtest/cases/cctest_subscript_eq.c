// SPDX-License-Identifier: MIT
// cctest_subscript_eq.c --- cctest case subscript_eq
// Copyright (c) 2026 Jakob Kastelic

/* @expect 7 */

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
   int arr[4];
   arr[0] = 0x10;
   arr[1] = 0x20;
   arr[2] = 0x30;
   arr[3] = 0x40;
   int r  = 0;
   if (arr[2] == *(arr + 2))
      r += 1;
   if (2 [arr] == arr[2])
      r += 2; /* i[a] == a[i] */
   if (*(arr + 0) == arr[0])
      r += 4;
   return r; /* 1+2+4 = 7 */
}
