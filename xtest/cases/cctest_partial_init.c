// SPDX-License-Identifier: MIT
// cctest_partial_init.c --- cctest case partial_init
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0xa */

#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>



/* Partial struct init -- later members are zero (C99 6.7.8 p21) */
struct partial5 { int a; int b; int c; int d; int e; };
int test_main(void) {
  struct partial5 s = { .a = 10 };
  return s.a + s.b + s.c + s.d + s.e; /* 10+0+0+0+0 = 10 = 0x0A */
}
