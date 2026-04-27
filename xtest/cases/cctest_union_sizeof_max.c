#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

   return (int)sizeof(struct sa); /* 4+20=24 */
}

/* @expect 0x04 */
int cctest_union_sizeof_max(void)
{
   union u {
      char c;
      int i;
      double d;
   };
