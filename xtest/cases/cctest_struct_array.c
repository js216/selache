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
int cctest_struct_array(void)
{
   struct item items[3];
   items[0].val = 10;
   items[1].val = 20;
   items[2].val = 30;
   return items[0].val + items[1].val + items[2].val; /* 60 = 0x3C */
}
