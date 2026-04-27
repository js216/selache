#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

typedef int (*intfn)(int);

static int apply_fn(intfn f, int x)
{
   return f(x);
}

static int double_it(int x)
{
   return x * 2;
}

static int triple_it(int x)
{
   return x * 3;
}

/* @expect 0x19 */
int cctest_fn_taking_fn(void)
{
   int a = apply_fn(double_it, 5); /* 10 */
   int b = apply_fn(triple_it, 5); /* 15 */
   return a + b;                   /* 10+15 = 25 = 0x19 */
}
