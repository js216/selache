// SPDX-License-Identifier: MIT
// cctest_libsel_string_strpbrk.c --- libsel string/strpbrk per-function selcc
// test Copyright (c) 2026 Jakob Kastelic

/* @expect 0x55 */

#include <stddef.h>
#include <stdint.h>

char *strpbrk(const char *s, const char *a)
{
   const char *x;
   while (*s) {
      for (x = a; *x; x++)
         if (*s == *x)
            return (char *)s;
      s++;
   }
   return 0;
}

int test_main(void)
{
   char *p = strpbrk("hello", "wlz");
   return (p != 0 && *p == 'l') ? 0x55 : 0xAA;
}
