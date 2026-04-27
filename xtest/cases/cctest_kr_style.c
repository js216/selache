#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

   s.arr[0] = 5;
   s.arr[1] = 10;
   s.arr[2] = 15;
   s.ptr    = &s.arr[1];
   s.val    = 20;
   return s.arr[0] + *s.ptr + s.arr[2] + s.val; /* 5+10+15+20 = 50 = 0x32 */
}

static int kr_add(a, b)
int a;
int b;
{
   return a + b;
}

/* @expect 0x30 */
int cctest_kr_style(void)
{
   return kr_add(0x10, 0x20); /* 0x30 */
}
