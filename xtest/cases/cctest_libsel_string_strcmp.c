// SPDX-License-Identifier: MIT
// cctest_libsel_string_strcmp.c --- libsel string/strcmp per-function selcc
// test Copyright (c) 2026 Jakob Kastelic

/* @expect 0x55 */

#include <stddef.h>
#include <stdint.h>

int strcmp(const char *s1, const char *s2)
{
   const unsigned char *a = (const unsigned char *)s1,
                       *b = (const unsigned char *)s2;
   while (*a && *a == *b) {
      a++;
      b++;
   }
   return *a - *b;
}

int test_main(void)
{

   return (strcmp("abc", "abc") == 0 && strcmp("abc", "abd") < 0 &&
           strcmp("abd", "abc") > 0)
              ? 0x55
              : 0xAA;
}
