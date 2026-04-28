// SPDX-License-Identifier: MIT
// cctest_union_reinterpret.c --- cctest case union_reinterpret
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

int test_main(void) {
  union { unsigned int u; unsigned char b[4]; } u;
  u.u = 0x44332211;
  /* SHARC is little-endian for -char-size-8 */
  return u.b[0] + u.b[3]; /* 0x11 + 0x44 = 0x55 */
}
