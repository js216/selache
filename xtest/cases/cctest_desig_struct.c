#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

   bf.x = 5;
   bf.y = 3;
   return bf.x + bf.y; /* 8 */
}

struct dinit {
   int a;
   int b;
   int c;
};

/* @expect 0x50 */
int cctest_desig_struct(void)
{
   struct dinit s = {.b = 0x20, .c = 0x30};
   return s.a + s.b + s.c; /* 0 + 0x20 + 0x30 = 0x50 */
}
