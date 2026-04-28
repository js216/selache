// SPDX-License-Identifier: MIT
// cctest_libsel_string_strlen.c --- libsel string/strlen per-function selcc
// test Copyright (c) 2026 Jakob Kastelic

/* @expect 0x55 */

#include <stddef.h>
#include <stdint.h>

size_t strlen(const char *s)
{
   const char *p = s;
   while (*p)
      p++;
   return (size_t)(p - s);
}

int test_main(void)
{

   return (strlen("") == 0 && strlen("hi") == 2 && strlen("hello") == 5) ? 0x55
                                                                         : 0xAA;
}
