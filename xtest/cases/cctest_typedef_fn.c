#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

static int helper_add(int x, int y)
{
   return x + y;
}

typedef int fn_type(int, int);

/* @expect 0x33 */
int cctest_typedef_fn(void)
{
   fn_type *fp = helper_add; /* pointer to function type */
   return fp(0x11, 0x22);    /* 0x33 */
}
