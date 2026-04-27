#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

/* @expect 0x0A */
int cctest_for_empty_body(void)
{
   int i;
   for (i = 0; i < 10; i++)
      ; /* empty body */
   return i;
}
