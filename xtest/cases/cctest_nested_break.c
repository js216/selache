// SPDX-License-Identifier: MIT
// cctest_nested_break.c --- cctest case nested_break
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x0A */

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
   int count = 0;
   for (int i = 0; i < 5; i++) {
      for (int j = 0; j < 5; j++) {
         for (int k = 0; k < 5; k++) {
            count++;
            if (count == 10)
               goto out;
         }
      }
   }
out:
   return count; /* 10 = 0x0A */
}
