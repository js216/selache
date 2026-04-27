// SPDX-License-Identifier: MIT
// cctest_struct_padding.c --- cctest case struct_padding
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x67 */

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
      char a;
      int b;
      char c;
   } s;
