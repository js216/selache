// SPDX-License-Identifier: MIT
// cctest_str_short_init.c --- cctest case str_short_init
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x68 */

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
  char s[10] = "hi";
  /* s[0]='h', s[1]='i', s[2]='\0', s[3..9]='\0' */
  return s[0] + s[2] + s[5]; /* 'h'+0+0 = 104 = 0x68 */
}
