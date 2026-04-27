// SPDX-License-Identifier: MIT
// cctest_strtok_state.c --- cctest case strtok adjacent-delimiter behavior
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x07 */

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
   /* C99 strtok: adjacent delimiters are skipped; "a,b,,c" yields
    * three tokens "a", "b", "c" -- NOT four with an empty token. */
   char buf[] = "a,b,,c";
   int count = 0;
   char first = 0, second = 0, third = 0, fourth = 0;

   char *t = strtok(buf, ",");
   while (t) {
      if (count == 0) first = t[0];
      else if (count == 1) second = t[0];
      else if (count == 2) third = t[0];
      else if (count == 3) fourth = t[0];
      count++;
      t = strtok(NULL, ",");
   }

   int score = 0;
   if (count == 3) score |= 0x1;
   if (first == 'a' && second == 'b' && third == 'c') score |= 0x2;
   if (fourth == 0) score |= 0x4; /* no fourth token */
   return score;
}
