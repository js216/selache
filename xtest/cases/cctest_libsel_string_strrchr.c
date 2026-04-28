// SPDX-License-Identifier: MIT
// cctest_libsel_string_strrchr.c --- libsel string/strrchr per-function selcc
// test Copyright (c) 2026 Jakob Kastelic

/* @expect 0x55 */

#include <stddef.h>
#include <stdint.h>

char *strrchr(const char *s, int c)
{
   char ch          = (char)c;
   const char *last = 0;
   while (*s) {
      if (*s == ch)
         last = s;
      s++;
   }
   if (ch == 0)
      return (char *)s;
   return (char *)last;
}

int test_main(void)
{

   return (strrchr("hello", 'l') != 0 && *(strrchr("hello", 'l') + 1) == 'o')
              ? 0x55
              : 0xAA;
}
