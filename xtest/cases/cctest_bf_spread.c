// SPDX-License-Identifier: MIT
// cctest_bf_spread.c --- cctest case bf_spread
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x30 */

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
      unsigned int a : 4;
      unsigned int b : 4;
      unsigned int c : 4;
      unsigned int d : 4;
   } bf;
