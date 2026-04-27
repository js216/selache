#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

/* @expect 0x0F */
int cctest_for_decl(void)
{
   int s = 0;
   for (int i = 1; i <= 5; i++)
      s += i;
   return s; /* 15 = 0xF */
}
