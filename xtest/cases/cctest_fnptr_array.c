#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

static int fn_a(void)
{
   return 1;
}

static int fn_b(void)
{
   return 2;
}

static int fn_c(void)
{
   return 3;
}

/* @expect 6 */
int cctest_fnptr_array(void)
{
   int (*fns[3])(void);
   fns[0] = fn_a;
   fns[1] = fn_b;
   fns[2] = fn_c;
   return fns[0]() + fns[1]() + fns[2](); /* 6 */
}
