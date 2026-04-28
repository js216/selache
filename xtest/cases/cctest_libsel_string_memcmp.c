// SPDX-License-Identifier: MIT
// cctest_libsel_string_memcmp.c --- libsel string/memcmp per-function selcc
// test Copyright (c) 2026 Jakob Kastelic

/* @expect 0x55 */

#include <stddef.h>
#include <stdint.h>

int memcmp(const void *s1, const void *s2, size_t n)
{
   const unsigned char *a = s1, *b = s2;
   while (n--) {
      if (*a != *b)
         return *a - *b;
      a++;
      b++;
   }
   return 0;
}

int test_main(void)
{

   return (memcmp("abc", "abc", 3) == 0 && memcmp("abc", "abd", 3) < 0) ? 0x55
                                                                        : 0xAA;
}
