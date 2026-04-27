// SPDX-License-Identifier: MIT
// cctest_for_empty_body.c --- cctest case for_empty_body
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
   int i;
   for (i = 0; i < 10; i++)
      ; /* empty body */
   return i;
}
