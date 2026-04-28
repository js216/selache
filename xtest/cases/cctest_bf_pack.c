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

int test_main(void) {
  struct {
    unsigned int a : 3;
    unsigned int b : 3;
    unsigned int c : 3;
    unsigned int d : 3;
  } bf;
  bf.a = 7;  /* 0b111 */
  bf.b = 5;  /* 0b101 */
  bf.c = 3;  /* 0b011 */
  bf.d = 1;  /* 0b001 */
  return bf.a + bf.b + bf.c + bf.d; /* 7+5+3+1 = 16 = 0x10 */
}
