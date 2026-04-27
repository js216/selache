// SPDX-License-Identifier: MIT
// cctest_bitfield2.c --- cctest case bitfield2
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0xAA */

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
      int val : 2;
   } bf;
