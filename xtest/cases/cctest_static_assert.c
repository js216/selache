#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

typedef char sa_check_short[(sizeof(short) == 2) ? 1 : -1];
typedef char sa_check_int[(sizeof(int) == 4) ? 1 : -1];

/* @expect 2 */
int cctest_static_assert(void)
{
   return (int)sizeof(sa_check_short) + (int)sizeof(sa_check_int); /* 1+1 = 2 */
}
