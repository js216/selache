#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

   int arr[5];
   arr[0] = 10;
   arr[1] = 20;
   arr[2] = 30;
   arr[3] = 40;
   arr[4] = 50;
   s.idx  = 3;
   return arr[s.idx]; /* arr[3] = 40 = 0x28 */
}

static int ctx_callback(void *ctx, int val)
{
   int *acc = (int *)ctx;
   *acc += val;
   return *acc;
}

/* @expect 0x3C */
int cctest_callback_ctx(void)
{
   int total = 0;
   ctx_callback(&total, 10);
   ctx_callback(&total, 20);
   ctx_callback(&total, 30);
   return total; /* 60 = 0x3C */
}
