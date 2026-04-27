// SPDX-License-Identifier: MIT
// cctest_empty_body.c --- cctest case empty_body
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x42 */

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
   int x = 0;
   if (1) {
   } /* empty if body */
   while (0) {
   } /* empty while body */
   for (int i = 0; i < 5; i++) {
   } /* empty for body */
   {
      x = 0x42;
   }         /* standalone block */
   return x; /* 0x42 */
}
