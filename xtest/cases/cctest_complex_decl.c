#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

static int cplx_fn1(void)
{
   return 10;
}

static int cplx_fn2(void)
{
   return 20;
}

/* @expect 0x1E */
int cctest_complex_decl(void)
{
   int (*arr[2])(void) = {cplx_fn1, cplx_fn2};
   int (*(*pp))(void)  = &arr[0]; /* pointer to first element */
   return (*pp)() + arr[1]();     /* 10+20 = 30 = 0x1E */
}
