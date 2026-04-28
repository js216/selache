// SPDX-License-Identifier: MIT
// cctest_libsel_string_strcpy.c --- libsel string/strcpy per-function selcc
// test Copyright (c) 2026 Jakob Kastelic

/* @expect 0x55 */

#include <stddef.h>
#include <stdint.h>

char *strcpy(char *dest, const char *src)
{
   char *r = dest;
   while ((*dest++ = *src++))
      ;
   return r;
}

int test_main(void)
{
   char b[8] = {0};
   return (strcpy(b, "hi") == b && b[0] == 'h' && b[1] == 'i' && b[2] == 0)
              ? 0x55
              : 0xAA;
}
