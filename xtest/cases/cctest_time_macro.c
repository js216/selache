// SPDX-License-Identifier: MIT
// cctest_time_macro.c --- cctest case time_macro
// Copyright (c) 2026 Jakob Kastelic

/* @expect 1 */

#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

   s.x = 0x0A;
   s.y = 0x05;
   return s.x + s.y; /* 10+5 = 15 = 0x0F */
}

int test_main(void)
{
   const char *t = __TIME__;
   return (t[0] != '\0') ? 1 : 0; /* 1 */
}
