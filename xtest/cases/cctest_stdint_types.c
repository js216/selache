// SPDX-License-Identifier: MIT
// cctest_stdint_types.c --- cctest case stdint_types
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x3f */

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
  int8_t a = -1;
  uint8_t b = 255;
  int16_t c = -1000;
  uint16_t d = 60000u;
  int32_t e = 42;
  uint32_t f = 100u;
  int r = 0;
  if (a == -1) r += 1;
  if (b == 255) r += 2;
  if (c < 0) r += 4;
  if (d > 50000u) r += 8;
  if (e == 42) r += 16;
  if (f == 100u) r += 32;
  return r; /* 1+2+4+8+16+32 = 63 = 0x3F */
}
