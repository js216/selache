// SPDX-License-Identifier: MIT
// cctest_bf_first.c --- cctest case bf_first
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x3A */

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
      unsigned int flags : 8;
      int value;
      int extra;
   } s;
