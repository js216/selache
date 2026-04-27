// SPDX-License-Identifier: MIT
// cctest_deep_ifelse.c --- cctest case deep_ifelse
// Copyright (c) 2026 Jakob Kastelic

/* @expect 8 */

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
   int x = 0xFF;
   if (x & 0x01)
      if (x & 0x02)
         if (x & 0x04)
            if (x & 0x08)
               if (x & 0x10)
                  if (x & 0x20)
                     if (x & 0x40)
                        if (x & 0x80)
                           return 8;
   return 0;
}
