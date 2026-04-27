// SPDX-License-Identifier: MIT
// cctest_switch_default_only.c --- cctest case switch_default_only
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x33 */

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
   int x = 99;
   switch (x) {
      default: return 0x33;
   }
}
