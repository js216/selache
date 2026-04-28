// SPDX-License-Identifier: MIT
// cctest_va_copy.c --- cctest case va_copy
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x60 */

#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>



/* Variadic: walk 3 int args (C99 7.15) */
static int va_sum3v(int n, ...) {
  va_list ap;
  va_start(ap, n);
  int s = 0;
  for (int i = 0; i < n; i++)
    s += va_arg(ap, int);
  va_end(ap);
  return s;
}
int test_main(void) {
  return va_sum3v(3, 0x20, 0x30, 0x10); /* 0x60 */
}
