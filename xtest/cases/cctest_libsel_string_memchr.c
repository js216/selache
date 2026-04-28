// SPDX-License-Identifier: MIT
// cctest_libsel_string_memchr.c --- libsel string/memchr per-function selcc
// test Copyright (c) 2026 Jakob Kastelic

/* @expect 0x55 */

#include <stddef.h>
#include <stdint.h>

void *memchr(const void *s, int c, size_t n)
{
   const unsigned char *p = s;
   unsigned char v        = (unsigned char)c;
   while (n--) {
      if (*p == v)
         return (void *)p;
      p++;
   }
   return 0;
}

int test_main(void)
{
   char b[] = "hello";
   return (memchr(b, 'l', 5) == &b[2]) ? 0x55 : 0xAA;
}
