#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

struct big_init {
   int a;
   int b;
   int c;
   int d;
   int e;
   int f;
   int g;
   int h;
};

/* @expect 0x42 */
int cctest_big_partial_init(void)
{
   struct big_init s = {.e = 0x42};
   return s.a + s.b + s.c + s.d + s.e + s.f + s.g + s.h;
   /* all zero except e=0x42, total = 0x42 */
}
