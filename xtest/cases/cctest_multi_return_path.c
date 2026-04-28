// SPDX-License-Identifier: MIT
// cctest_multi_return_path.c --- cctest case multi_return_path
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
  int x = 3;
  if (x == 1) return 0x11;
  if (x == 2) return 0x22;
  if (x == 3) return 0x55;
  return 0xAA;
}
