#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

struct arr_only {
   int a[3];
   int b[2];
};

/* @expect 9 */
int cctest_struct_arr_only(void)
{
   struct arr_only s = {
       {1, 2, 3},
       {4, 5}
   };
   return s.a[0] + s.a[2] + s.b[1]; /* 1+3+5 = 9 */
}
