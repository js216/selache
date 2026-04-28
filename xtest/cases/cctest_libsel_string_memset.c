// SPDX-License-Identifier: MIT
// cctest_libsel_string_memset.c --- libsel string/memset per-function selcc
// test Copyright (c) 2026 Jakob Kastelic

/* @expect 0x55 */

#include <stddef.h>
#include <stdint.h>

void *memset(void *s, int c, size_t n)
{
   unsigned char *p = s;
   unsigned char v  = (unsigned char)c;
   while (n--)
      *p++ = v;
   return s;
}

int test_main(void)
{
   char b[4] = {1, 2, 3, 4};
   return (memset(b, 7, 3) == b && b[0] == 7 && b[1] == 7 && b[2] == 7 &&
           b[3] == 4)
              ? 0x55
              : 0xAA;
}
