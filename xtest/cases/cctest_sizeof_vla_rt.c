#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

/* @expect 0x14 */
int cctest_sizeof_vla_rt(void)
{
   int n = 5;
   int vla[n];
   return (int)sizeof(vla); /* 20 */
}
