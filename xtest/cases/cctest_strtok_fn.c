// SPDX-License-Identifier: MIT
// cctest_strtok_fn.c --- cctest case strtok_fn
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x03 */

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
   char buf[] = "a,b,cc";
   int count = 0;
   char *t = strtok(buf, ",");
   while (t) {
      count++;
      t = strtok(NULL, ",");
   }
   return count; /* 3 */
}
