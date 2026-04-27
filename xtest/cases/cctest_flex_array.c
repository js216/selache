#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

struct flex {
   int len;
   int data[];
};

/* @expect 0x32 */
int cctest_flex_array(void)
{
   int buf[4];
   struct flex *p = (struct flex *)buf;
   p->len         = 2;
   p->data[0]     = 0x10;
   p->data[1]     = 0x20;
   return p->len + p->data[0] + p->data[1]; /* 2+0x10+0x20 = 0x32 */
}
