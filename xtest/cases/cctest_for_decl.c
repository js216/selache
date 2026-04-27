// SPDX-License-Identifier: MIT
// cctest_for_decl.c --- cctest case for_decl
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x0F */

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
   int s = 0;
   for (int i = 1; i <= 5; i++)
      s += i;
   return s; /* 15 = 0xF */
}
