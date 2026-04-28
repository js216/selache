// SPDX-License-Identifier: MIT
// cctest_struct_pun.c --- cctest case struct_pun
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

int test_main(void) {
  struct { unsigned int flags; } s;
  s.flags = 0;
  unsigned char *p = (unsigned char *)&s;
  p[0] = 0x0A; /* set low byte */
  return (int)(s.flags & 0xFF); /* 0x0A */
}
