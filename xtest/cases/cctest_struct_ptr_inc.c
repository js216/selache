#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

struct item {
   int id;
   int val;
};

/* @expect 0x3C */
int cctest_struct_ptr_inc(void)
{
   struct item arr[3];
   arr[0].id      = 1;
   arr[0].val     = 10;
   arr[1].id      = 2;
   arr[1].val     = 20;
   arr[2].id      = 3;
   arr[2].val     = 30;
   struct item *p = arr;
   int sum        = p->val; /* 10 */
   p++;
   sum += p->val; /* 20 */
   p++;
   sum += p->val; /* 30 */
   return sum;    /* 60 = 0x3C */
}
