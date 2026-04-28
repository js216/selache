// SPDX-License-Identifier: MIT
// cctest_libsel_string_strncpy.c --- libsel string/strncpy per-function selcc
// test Copyright (c) 2026 Jakob Kastelic

/* @expect 0x55 */

#include <stddef.h>
#include <stdint.h>

char *strncpy(char *dest, const char *src, size_t n)
{
   char *r = dest;
   size_t i;
   for (i = 0; i < n && src[i]; i++)
      dest[i] = src[i];
   for (; i < n; i++)
      dest[i] = 0;
   return r;
}

int test_main(void)
{
   char b[8] = {0};
   return (strncpy(b, "hi", 4) == b && b[0] == 'h' && b[1] == 'i' &&
           b[2] == 0 && b[3] == 0)
              ? 0x55
              : 0xAA;
}
