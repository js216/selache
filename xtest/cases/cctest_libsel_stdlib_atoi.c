// SPDX-License-Identifier: MIT
// cctest_libsel_stdlib_atoi.c --- libsel stdlib/atoi per-function selcc test
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x55 */

#include <stddef.h>
#include <stdint.h>

static int isspace(int c)
{
   return c == ' ' || c == '\t' || c == '\n' || c == '\r' || c == '\f' ||
          c == '\v';
}

int atoi(const char *s)
{
   int r = 0, sg = 1;
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

   return (atoi("123") == 123 && atoi("-42") == -42 && atoi("  +7") == 7)
              ? 0x55
              : 0xAA;
}
