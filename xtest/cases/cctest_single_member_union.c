#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

   s.x = 0x42;
   return s.x; /* 0x42 */
}

/* @expect 0x55 */
int cctest_single_member_union(void)
{
   union {
      int x;
   } u;
