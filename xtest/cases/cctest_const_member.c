// SPDX-License-Identifier: MIT
// cctest_const_member.c --- cctest case const_member
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x30 */

#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

   for (int i = 0; i < 32; i++)
      big.data[i] = i;
   return big.data[0] + big.data[15] + big.data[31];
   /* 0 + 15 + 31 = 46 = 0x2E */
}

int test_main(void)
{
   struct {
      const int x;
      int y;
   } s = {0x10, 0x20};
