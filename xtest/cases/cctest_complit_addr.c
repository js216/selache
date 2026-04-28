// SPDX-License-Identifier: MIT
// cctest_complit_addr.c --- cctest case complit_addr
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x42 */

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
  int *p = &(int){0x42};
  return *p; /* 0x42 */
}
