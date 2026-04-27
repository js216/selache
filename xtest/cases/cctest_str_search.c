// SPDX-License-Identifier: MIT
// cctest_str_search.c --- cctest case str_search
// Copyright (c) 2026 Jakob Kastelic

/* @expect 2 */

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
   const char *names[] = {"cat", "dog", "fox"};
   const char *target  = "fox";
   int idx             = -1;
   for (int i = 0; i < 3; i++) {
      const char *a = names[i];
      const char *b = target;
      int match     = 1;
      while (*a && *b) {
         if (*a != *b) {
            match = 0;
            break;
         }
         a++;
         b++;
      }
      if (match && *a == *b) {
         idx = i;
         break;
      }
   }
   return idx; /* 2 */
}
