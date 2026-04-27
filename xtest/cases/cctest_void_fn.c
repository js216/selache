#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

static void set_val(int *p, int v)
{
   *p = v;
}

/* @expect 0x77 */
int cctest_void_fn(void)
{
   int x = 0;
   set_val(&x, 0x77);
   return x; /* 0x77 */
}
