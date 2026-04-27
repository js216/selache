// SPDX-License-Identifier: MIT
// cctest_bool_bitfield.c --- cctest case bool_bitfield
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

int test_main(void)
{
   struct {
      _Bool a : 1;
      _Bool b : 1;
   } bf;
