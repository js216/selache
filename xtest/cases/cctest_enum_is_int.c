#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

   int s        = 5; /* 's' the variable, not the tag */
   struct s obj = {s + 5};
   return obj.x; /* 10 */
}

#define X(name, val) XC_##name = val,

/* @expect 0x04 */
int cctest_enum_is_int(void)
{
   enum e { X };
