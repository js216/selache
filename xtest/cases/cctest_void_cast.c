#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

static int side_effect_fn(int *p)
{
   (*p)++;
   return 99;
}

/* @expect 1 */
int cctest_void_cast(void)
{
   int x = 0;
   (void)side_effect_fn(&x); /* discard return, keep side effect */
   return x;                 /* 1 */
}
