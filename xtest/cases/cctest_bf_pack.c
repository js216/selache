// SPDX-License-Identifier: MIT
// cctest_bf_pack.c --- cctest case bf_pack
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x10 */

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
      unsigned int a : 3;
      unsigned int b : 3;
      unsigned int c : 3;
      unsigned int d : 3;
   } bf;
