// SPDX-License-Identifier: MIT
// cctest_kr_style.c --- cctest case kr_style
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x30 */

#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>



/* K&R old-style function definition (C99 6.9.1 p13, "obsolescent") */
static int kr_add(a, b)
  int a;
  int b;
{
  return a + b;
}
int test_main(void) {
  return kr_add(0x10, 0x20); /* 0x30 */
}
