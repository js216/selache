// SPDX-License-Identifier: MIT
// cctest_all_const_struct.c --- cctest case all_const_struct
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x1E */

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
   const struct {
      const int a;
      const int b;
      const int c;
   } s = {5, 10, 15};
