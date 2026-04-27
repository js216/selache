// SPDX-License-Identifier: MIT
// cctest_sizeof_case.c --- cctest case sizeof_case
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x44 */

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
   int x = (int)sizeof(int);
   switch (x) {
      case sizeof(int): return 0x44;
      default: return 0xFF;
   }
}
