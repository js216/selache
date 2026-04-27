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
int cctest_struct_assign_all(void)
{
   struct s3 {
      int a;
      int b;
      int c;
   };
   struct s3 src = {5, 10, 15};
   struct s3 dst;
   dst = src;
   return dst.a + dst.b + dst.c;
}
