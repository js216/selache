// SPDX-License-Identifier: MIT
// cctest_const_complit.c --- cctest case const_complit
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
  const int *p = (const int[]){10, 20, 30};
  return (p[0] + p[1] + p[2] == 60) ? 0x55 : 0xAA;
}
