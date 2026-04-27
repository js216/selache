// SPDX-License-Identifier: MIT
// cctest_const_str_arr.c --- cctest case const_str_arr
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x04 */

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
   const char *const names[] = {"ab", "cd", "ef", "gh"};
   int count                 = 0;
   for (int i = 0; i < 4; i++)
      if (names[i][0] != 0)
         count++;
   return count; /* 4 */
}
