// SPDX-License-Identifier: MIT
// cctest_libsel_string_strchr.c --- libsel string/strchr per-function selcc
// test Copyright (c) 2026 Jakob Kastelic

/* @expect 0x55 */

#include <stddef.h>
#include <stdint.h>

char *strchr(const char *s, int c)
{
   char ch = (char)c;
   while (*s) {
      if (*s == ch)
         return (char *)s;
      s++;
   }
   if (ch == 0)
      return (char *)s;
   return 0;
}

int test_main(void)
{

   return (strchr("hello", 'l') != 0 && *strchr("hello", 'l') == 'l' &&
           strchr("hi", 'z') == 0)
              ? 0x55
              : 0xAA;
}
