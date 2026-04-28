// SPDX-License-Identifier: MIT
// cctest_libsel_stdlib_atol.c --- libsel stdlib/atol per-function selcc test
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x55 */

#include <stddef.h>
#include <stdint.h>

static int isspace(int c)
{
   return c == ' ' || c == '\t' || c == '\n' || c == '\r' || c == '\f' ||
          c == '\v';
}

long atol(const char *s)
{
   long r = 0;
   int sg = 1;
   while (isspace((unsigned char)*s))
      s++;
   if (*s == '-') {
      sg = -1;
      s++;
   } else if (*s == '+')
      s++;
   while (*s >= '0' && *s <= '9') {
      r = r * 10 + (*s - '0');
      s++;
   }
   return sg * r;
}

int test_main(void)
{

   return (atol("123") == 123L && atol("-42") == -42L) ? 0x55 : 0xAA;
}
