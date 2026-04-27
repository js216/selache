#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

   /* s.x cannot be modified after init */
   return s.x + s.y; /* 0x30 */
}

/* @expect 0x55 */
int cctest_cast_complit(void)
{
   long val = *(long *)(int[]){0x55};
   return (int)val; /* 0x55 */
}
