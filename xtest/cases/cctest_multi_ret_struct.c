#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

struct mr_result {
   int code;
   int val;
};

static struct mr_result mr_classify(int x)
{
   struct mr_result r;
   if (x < 0) {
      r.code = -1;
      r.val  = -x;
      return r;
   }
   if (x == 0) {
      r.code = 0;
      r.val  = 0;
      return r;
   }
   r.code = 1;
   r.val  = x;
   return r;
}

/* @expect 0x19 */
int cctest_multi_ret_struct(void)
{
   struct mr_result a = mr_classify(-5);
   struct mr_result b = mr_classify(0);
   struct mr_result c = mr_classify(20);
   return a.val + b.val + c.val; /* 5+0+20 = 25 = 0x19 */
}
