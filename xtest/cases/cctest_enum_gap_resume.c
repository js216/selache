// SPDX-License-Identifier: MIT
// cctest_enum_gap_resume.c --- cctest case enum_gap_resume
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x0B */

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
  enum e_gap2 { P2 = 3, Q2, R2 = 10 };
  return Q2 + R2 - P2; /* 4+10-3 = 11 */
}
