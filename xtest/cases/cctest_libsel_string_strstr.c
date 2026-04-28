// SPDX-License-Identifier: MIT
// cctest_libsel_string_strstr.c --- libsel string/strstr per-function selcc
// test Copyright (c) 2026 Jakob Kastelic

/* @expect 0x55 */

#include <stddef.h>
#include <stdint.h>

char *strstr(const char *hay, const char *nd)
{
   const char *h, *n;
   if (!*nd)
      return (char *)hay;
   while (*hay) {
      h = hay;
      n = nd;
      while (*h == *n && *n) {
         h++;
         n++;
      }
      if (!*n)
         return (char *)hay;
      hay++;
   }
   return 0;
}

int test_main(void)
{

   return (strstr("hello", "ll") != 0 && strstr("hello", "xy") == 0 &&
           strstr("hello", "") != 0)
              ? 0x55
              : 0xAA;
}
