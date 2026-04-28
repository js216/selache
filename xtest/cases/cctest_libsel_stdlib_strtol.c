// SPDX-License-Identifier: MIT
// cctest_libsel_stdlib_strtol.c --- libsel stdlib/strtol per-function selcc
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

long strtol(const char *nptr, char **endptr, int base)
{
   const char *s     = nptr;
   int sign          = 1;
   unsigned long acc = 0;
   int ov            = 0;
   unsigned long co;
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
      co = (unsigned long)-((-((long)(((unsigned long)-1) >> 1)) - 1L) +
                            ((long)(((unsigned long)-1) >> 1))) +
           (unsigned long)((long)(((unsigned long)-1) >> 1));
   } else
      co = (unsigned long)((long)(((unsigned long)-1) >> 1));
   cl = (int)(co % (unsigned long)base);
   co /= (unsigned long)base;
   const char *st = s;
   int dv;
   while ((dv = _dv(*s)) >= 0 && dv < base) {
      if (acc > co || (acc == co && (unsigned long)dv > (unsigned long)cl))
         ov = 1;
      acc = acc * (unsigned long)base + (unsigned long)dv;
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
      return (sign == -1) ? (-((long)(((unsigned long)-1) >> 1)) - 1L)
                          : ((long)(((unsigned long)-1) >> 1));
   }
   return (sign == -1) ? -(long)acc : (long)acc;
}

int test_main(void)
{

   do {
      long v = strtol("123", 0, 10);
      if (v != 123)
         return 0xAA;
      v = strtol("-42", 0, 10);
      if (v != -42)
         return 0xAA;
      v = strtol("ff", 0, 16);
      if (v != 255)
         return 0xAA;
   } while (0);
   1;
   return 0x55;
}
