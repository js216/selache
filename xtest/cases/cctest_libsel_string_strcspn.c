// SPDX-License-Identifier: MIT
// cctest_libsel_string_strcspn.c --- libsel string/strcspn per-function selcc
// test Copyright (c) 2026 Jakob Kastelic

/* @expect 0x55 */

#include <stddef.h>
#include <stdint.h>

size_t strcspn(const char *s, const char *r)
{
   const char *p = s, *x;
   while (*p) {
      for (x = r; *x; x++)
         if (*p == *x)
            return (size_t)(p - s);
      p++;
   }
   return (size_t)(p - s);
}

int test_main(void)
{

   return (strcspn("hello", "l") == 2 && strcspn("abc", "xyz") == 3) ? 0x55
                                                                     : 0xAA;
}
