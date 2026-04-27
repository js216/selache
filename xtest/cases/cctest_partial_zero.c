// SPDX-License-Identifier: MIT
// cctest_partial_zero.c --- cctest case partial_zero
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0 */

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
   struct {
      int a;
      int b;
      int c;
   } s = {0};
