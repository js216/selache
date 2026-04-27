#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

struct retval {
   int a;
   int b;
};

static struct retval make_pair(int x, int y)
{
   struct retval r;
   r.a = x;
   r.b = y;
   return r;
}

/* @expect 0x30 */
int cctest_struct_ret(void)
{
   struct retval p = make_pair(0x10, 0x20);
   return p.a + p.b; /* 0x30 */
}
