// SPDX-License-Identifier: MIT
// cctest_struct_partial_init.c --- cctest case struct_partial_init
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x0A */

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
   } s = {10};
