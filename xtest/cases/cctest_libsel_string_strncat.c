// SPDX-License-Identifier: MIT
// cctest_libsel_string_strncat.c --- libsel string/strncat per-function selcc
// test Copyright (c) 2026 Jakob Kastelic

/* @expect 0x55 */

#include <stddef.h>
#include <stdint.h>

char *strncat(char *dest, const char *src, size_t n)
{
   char *e = dest;
   while (*e)
      e++;
   while (n-- && *src)
      *e++ = *src++;
   *e = 0;
   return dest;
}

int test_main(void)
{
   char b[16] = "hi";
   return (strncat(b, "abcd", 2) == b && b[2] == 'a' && b[3] == 'b' &&
           b[4] == 0)
              ? 0x55
              : 0xAA;
}
