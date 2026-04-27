#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

   u.x = 0x55;
   return u.x; /* 0x55 */
}

/* @expect 0x33 */
int cctest_single_enum(void)
{
   enum { ONLY = 0x33 };
