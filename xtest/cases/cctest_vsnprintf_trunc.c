// SPDX-License-Identifier: MIT
// cctest_vsnprintf_trunc.c --- cctest case vsnprintf C99 truncation return
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x07 */

#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

static int call_vsnprintf(char *buf, size_t sz, const char *fmt, ...)
{
   va_list ap;
   va_start(ap, fmt);
   int n = vsnprintf(buf, sz, fmt, ap);
   va_end(ap);
   return n;
}

int test_main(void)
{
   int score = 0;
   /* Buffer of size 4; format produces "hello" (5 chars + NUL). */
   char buf[4];
   memset(buf, 0x55, sizeof(buf));
   int n = call_vsnprintf(buf, sizeof(buf), "%s", "hello");

   /* C99: return value is the number of chars that WOULD have been
    * written (excluding NUL) if buffer were large enough = 5. */
   if (n == 5) score |= 0x1;

   /* Buffer must be NUL-terminated within sz; first 3 chars are "hel". */
   if (buf[0] == 'h' && buf[1] == 'e' && buf[2] == 'l' && buf[3] == '\0')
      score |= 0x2;

   /* Truncation should not have written past buf[sz-1] */
   if (strlen(buf) == 3) score |= 0x4;

   return score;
}
