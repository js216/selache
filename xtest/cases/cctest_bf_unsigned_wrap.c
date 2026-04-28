// SPDX-License-Identifier: MIT
// cctest_bf_unsigned_wrap.c --- cctest case bf_unsigned_wrap
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x07 */

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
  struct { unsigned int v : 3; } s;
  s.v = 7; /* max for 3-bit */
  s.v += 1; /* wraps to 0 */
  return (s.v == 0) ? 0x07 : 0x00;
}
