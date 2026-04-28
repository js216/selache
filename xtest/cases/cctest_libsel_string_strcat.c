// SPDX-License-Identifier: MIT
// cctest_libsel_string_strcat.c --- libsel string/strcat per-function selcc
// test Copyright (c) 2026 Jakob Kastelic

/* @expect 0x55 */

#include <stddef.h>
#include <stdint.h>

char *strcat(char *dest, const char *src)
{
   char *e = dest;
   while (*e)
      e++;
   while ((*e++ = *src++))
      ;
   return dest;
}

int test_main(void)
{
   char b[16] = "hi";
   return (strcat(b, " there") == b && b[2] == ' ' && b[7] == 'e' && b[8] == 0)
              ? 0x55
              : 0xAA;
}
