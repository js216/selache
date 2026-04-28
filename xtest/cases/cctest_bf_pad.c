// SPDX-License-Identifier: MIT
// cctest_bf_pad.c --- cctest case bf_pad
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

int test_main(void) {
  struct {
    unsigned int x : 4;
    unsigned int   : 4; /* 4-bit padding, unnamed */
    unsigned int y : 4;
  } s;
  s.x = 0x0A;
  s.y = 0x05;
  return s.x + s.y; /* 10+5 = 15 = 0x0F */
}
