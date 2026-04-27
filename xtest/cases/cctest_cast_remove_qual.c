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
int cctest_cast_remove_qual(void)
{
   int x         = 0x33;
   const int *cp = &x;
   int *p        = (int *)cp; /* cast away const */
   *p            = 0x44;
   return x; /* 0x44 */
}
