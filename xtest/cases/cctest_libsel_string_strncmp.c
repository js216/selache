// SPDX-License-Identifier: MIT
// cctest_libsel_string_strncmp.c --- libsel string/strncmp per-function selcc
// test Copyright (c) 2026 Jakob Kastelic

/* @expect 0x55 */

#include <stddef.h>
#include <stdint.h>

int strncmp(const char *s1, const char *s2, size_t n)
{
   const unsigned char *a = (const unsigned char *)s1,
                       *b = (const unsigned char *)s2;
   while (n--) {
      if (*a != *b)
         return *a - *b;
      if (!*a)
         return 0;
      a++;
      b++;
   }
   return 0;
}

int test_main(void)
{

   return (strncmp("abc", "abd", 2) == 0 && strncmp("abc", "abd", 3) < 0)
              ? 0x55
              : 0xAA;
}
