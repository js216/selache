#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

   bf.x = 31;   /* max for 5 bits */
   return bf.x; /* 31 = 0x1F */
}

/* @expect 0x85 */
int cctest_init_narrow(void)
{
   char arr[4] = {0x41, 0x42, 0x43, 0x44}; /* int constants narrowed to char */
   return arr[0] + arr[3];                 /* 'A'+'D' = 65+68 = 133 = 0x85 */
}
