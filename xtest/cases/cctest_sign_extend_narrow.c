// SPDX-License-Identifier: MIT
// cctest_sign_extend_narrow.c --- cctest case sign_extend_narrow
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x55 */

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
      signed int val : 8;
   } s;
