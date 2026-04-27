#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

struct arr_di {
   int id;
   int val;
};

/* @expect 0x21 */
int cctest_arr_struct_desig(void)
{
   struct arr_di arr[3] = {
       [1] = {.id = 1, .val = 0x20}
   };
   return arr[0].id + arr[0].val + arr[1].id + arr[1].val + arr[2].id;
   /* 0+0+1+0x20+0 = 33 = 0x21 */
}
