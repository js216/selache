#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

/* @expect 0x1E */
int cctest_const_member_init(void)
{
   struct cs {
      const int a;
      int b;
   };
   struct cs s = {10, 20};
   return s.a + s.b;
}
