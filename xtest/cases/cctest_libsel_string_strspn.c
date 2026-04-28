// SPDX-License-Identifier: MIT
// cctest_libsel_string_strspn.c --- libsel string/strspn per-function selcc
// test Copyright (c) 2026 Jakob Kastelic

/* @expect 0x55 */

#include <stddef.h>
#include <stdint.h>

size_t strspn(const char *s, const char *a)
{
   const char *p = s, *x;
   int f;
   while (*p) {
      f = 0;
      for (x = a; *x; x++)
         if (*p == *x) {
            f = 1;
            break;
         }
      if (!f)
         break;
      p++;
   }
   return (size_t)(p - s);
}

int test_main(void)
{

   return (strspn("aaab", "a") == 3 && strspn("xyz", "a") == 0) ? 0x55 : 0xAA;
}
