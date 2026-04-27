// SPDX-License-Identifier: MIT
// cctest_strerror_errno.c --- cctest case strerror over varied errnums
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x0F */

#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>
#include <errno.h>

static int nonempty(const char *s)
{
   return (s != NULL && s[0] != '\0') ? 1 : 0;
}

int test_main(void)
{
   int score = 0;

   /* errnum = 0: must return non-NULL, non-empty */
   if (nonempty(strerror(0))) score |= 0x1;

   /* errnum = EDOM */
   if (nonempty(strerror(EDOM))) score |= 0x2;

   /* errnum = ERANGE */
   if (nonempty(strerror(ERANGE))) score |= 0x4;

   /* large unknown errnum: implementation must still return a string */
   if (nonempty(strerror(99999))) score |= 0x8;

   return score;
}
