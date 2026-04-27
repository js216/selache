#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

struct tagged_val {
   int tag;

   union {
      int i;
      float f;
   } u;
};

/* @expect 0x31 */
int cctest_struct_union(void)
{
   struct tagged_val tv;
   tv.tag = 1;
   tv.u.i = 0x30;
   return tv.tag + tv.u.i; /* 0x31 */
}
