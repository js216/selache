// SPDX-License-Identifier: MIT
// cctest_libsel_stdlib_strtoll.c --- libsel stdlib/strtoll per-function selcc
// test Copyright (c) 2026 Jakob Kastelic

/* @expect 0x55 */

#include <stddef.h>
#include <stdint.h>

int errno = 0;

void sel_set_errno(int v)
{
   errno = v;
}

static int isspace(int c)
{
   return c == ' ' || c == '\t' || c == '\n' || c == '\r' || c == '\f' ||
          c == '\v';
}

extern void sel_set_errno(int v);

static int _dv(char c)
{
   if (c >= '0' && c <= '9')
      return c - '0';
   if (c >= 'a' && c <= 'z')
      return c - 'a' + 10;
   if (c >= 'A' && c <= 'Z')
      return c - 'A' + 10;
   return -1;
}

long long strtoll(const char *nptr, char **endptr, int base)
{
   const char *s          = nptr;
   int sign               = 1;
   unsigned long long acc = 0;
   int ov                 = 0;
   unsigned long long co;
   int cl;
   while (isspace((unsigned char)*s))
      s++;
   if (*s == '-') {
      sign = -1;
      s++;
   } else if (*s == '+')
      s++;
   if (base == 0) {
      if (*s == '0') {
         s++;
         if (*s == 'x' || *s == 'X') {
            base = 16;
            s++;
         } else
            base = 8;
      } else
         base = 10;
   } else if (base == 16) {
      if (s[0] == '0' && (s[1] == 'x' || s[1] == 'X'))
         s += 2;
   }
   if (sign == -1) {
      co = (unsigned long long)-(
               (-((long long)(((unsigned long long)-1) >> 1)) - 1LL) +
               ((long long)(((unsigned long long)-1) >> 1))) +
           (unsigned long long)((long long)(((unsigned long long)-1) >> 1));
   } else
      co = (unsigned long long)((long long)(((unsigned long long)-1) >> 1));
   cl = (int)(co % (unsigned long long)base);
   co /= (unsigned long long)base;
   const char *st = s;
   int dv;
   while ((dv = _dv(*s)) >= 0 && dv < base) {
      if (acc > co ||
          (acc == co && (unsigned long long)dv > (unsigned long long)cl))
         ov = 1;
      acc = acc * (unsigned long long)base + (unsigned long long)dv;
      s++;
   }
   if (s == st) {
      if (endptr)
         *endptr = (char *)nptr;
      return 0;
   }
   if (endptr)
      *endptr = (char *)s;
   if (ov) {
      sel_set_errno(34);
      return (sign == -1)
                 ? (-((long long)(((unsigned long long)-1) >> 1)) - 1LL)
                 : ((long long)(((unsigned long long)-1) >> 1));
   }
   return (sign == -1) ? -(long long)acc : (long long)acc;
}

int test_main(void)
{

   do {
      long long v = strtoll("123", 0, 10);
      if (v != 123LL)
         return 0xAA;
      v = strtoll("-42", 0, 10);
      if (v != -42LL)
         return 0xAA;
   } while (0);
   1;
   return 0x55;
}
