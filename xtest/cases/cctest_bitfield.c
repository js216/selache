// SPDX-License-Identifier: MIT
// cctest_bitfield.c --- cctest case bitfield
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
   struct {
      int x : 4;
      int y : 4;
   } bf;
