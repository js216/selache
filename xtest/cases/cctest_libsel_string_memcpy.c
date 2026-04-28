// SPDX-License-Identifier: MIT
// cctest_libsel_string_memcpy.c --- libsel string/memcpy per-function selcc
// test Copyright (c) 2026 Jakob Kastelic

/* @expect 0x55 */

#include <stddef.h>
#include <stdint.h>

void *memcpy(void *dest, const void *src, size_t n)
{
   unsigned char *d       = dest;
   const unsigned char *s = src;
   while (n--)
      *d++ = *s++;
   return dest;
}

int test_main(void)
{
   char d[8] = {0};
   return (memcpy(d, "hi", 3) == d && d[0] == 'h' && d[1] == 'i' && d[2] == 0)
              ? 0x55
              : 0xAA;
}
