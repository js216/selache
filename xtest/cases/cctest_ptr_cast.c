#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

/* @expect 0x44 */
int cctest_ptr_cast(void)
{
   int x   = 0x41424344;
   char *p = (char *)&x;
   return p[0]; /* LSB of 0x41424344 = 0x44 */
}
