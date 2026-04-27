#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

static void void_setter(int *p, int val)
{
   if (val < 0)
      return; /* bare return in void fn */
   *p = val;
   return; /* trailing bare return */
}

/* @expect 0xA5 */
int cctest_void_return(void)
{
   int x = 99;
   void_setter(&x, -1); /* early return, x unchanged */
   int a = x;
   void_setter(&x, 0x42); /* normal path */
   return a + x;          /* 99 + 0x42 = 99+66 = 165 = 0xA5 */
}
