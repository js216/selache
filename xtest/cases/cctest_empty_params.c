#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

   bf.a = 1;
   bf.b = 0;
   return bf.a + bf.b; /* 1+0 = 1 */
}

static int empty_params_fn()
{
   return 0x33;
}

/* @expect 0x33 */
int cctest_empty_params(void)
{
   return empty_params_fn(); /* 0x33 */
}
