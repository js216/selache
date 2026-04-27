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

typedef int (*binop_fn)(int, int);

/* @expect 0x30 */
int cctest_fnptr(void)
{
   binop_fn fp = helper_add;
   return fp(0x10, 0x20); /* 0x30 */
}
