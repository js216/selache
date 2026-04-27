// SPDX-License-Identifier: MIT
// cctest_bf_zero.c --- cctest case bf_zero
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
   struct {
      unsigned int a : 4;
      unsigned int : 0; /* force alignment to next storage unit */
      unsigned int b : 4;
   } bf;
