// SPDX-License-Identifier: MIT
// cctest_libsel_string_strtok.c --- libsel string/strtok per-function selcc
// test Copyright (c) 2026 Jakob Kastelic

/* @expect 0x55 */

#include <stddef.h>
#include <stdint.h>

static char *_saved;

char *strtok(char *str, const char *delim)
{
   char *t;
   const char *d;
   int id;
   if (str)
      _saved = str;
   if (!_saved)
      return 0;
   for (;;) {
      if (!*_saved) {
         _saved = 0;
         return 0;
      }
      id = 0;
      for (d = delim; *d; d++)
         if (*_saved == *d) {
            id = 1;
            break;
         }
      if (!id)
         break;
      _saved++;
   }
   t = _saved;
   while (*_saved) {
      for (d = delim; *d; d++)
         if (*_saved == *d) {
            *_saved++ = 0;
            return t;
         }
      _saved++;
   }
   _saved = 0;
   return t;
}

int test_main(void)
{
   char b[] = "a,b";
   char *t  = strtok(b, ",");
   return (t && t[0] == 'a' && t[1] == 0) ? 0x55 : 0xAA;
}
