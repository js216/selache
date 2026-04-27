#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

static void *ret_voidptr(int *p)
{
   return (void *)p;
}

/* @expect 0x66 */
int cctest_fn_ret_voidptr(void)
{
   int x  = 0x66;
   int *p = (int *)ret_voidptr(&x);
   return *p; /* 0x66 */
}
