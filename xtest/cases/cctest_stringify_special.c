// SPDX-License-Identifier: MIT
// cctest_stringify_special.c --- cctest case stringify_special
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



/* Stringify (#) with special characters (C99 6.10.3.2) */
#define STR_SPECIAL(x) #x
int test_main(void) {
  const char *s1 = STR_SPECIAL(a+b);   /* "a+b" */
  const char *s2 = STR_SPECIAL(x==y);  /* "x==y" */
  return s1[1] + s2[1]; /* '+' + '=' = 43 + 61 = 104 = 0x68 */
}
