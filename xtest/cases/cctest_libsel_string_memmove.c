// SPDX-License-Identifier: MIT
// cctest_libsel_string_memmove.c --- libsel string/memmove per-function selcc
// test Copyright (c) 2026 Jakob Kastelic

/* @expect 0x55 */

#include <stddef.h>
#include <stdint.h>

void *memmove(void *dest, const void *src, size_t n)
{
   unsigned char *d       = dest;
   const unsigned char *s = src;
   if (d < s) {
      while (n--)
         *d++ = *s++;
   } else if (d > s) {
      d += n;
      s += n;
      while (n--)
         *--d = *--s;
   }
   return dest;
}

int test_main(void)
{
   char b[] = "abcdef";
   return (memmove(b + 1, b, 4) == b + 1 && b[1] == 'a' && b[2] == 'b') ? 0x55
                                                                        : 0xAA;
}
