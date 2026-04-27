#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

static int fn_ten(void)
{
   return 10;
}

static int fn_twenty(void)
{
   return 20;
}

static int fn_thirty(void)
{
   return 30;
}

/* @expect 0x3C */
int cctest_fnptr_dispatch(void)
{
   int (*fns[3])(void) = {fn_ten, fn_twenty, fn_thirty};
   int sum             = 0;
   for (int i = 0; i < 3; i++)
      sum += fns[i]();
   return sum; /* 60 */
}
