#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

static int add1(int x)
{
   return x + 1;
}

static int sub1(int x)
{
   return x - 1;
}

typedef int (*unary_fn)(int);

static unary_fn pick_fn(int which)
{
   return which ? add1 : sub1;
}

/* @expect 0x0B */
int cctest_fn_returning_fnptr(void)
{
   unary_fn f = pick_fn(1);
   return f(10); /* add1(10) = 11 */
}
