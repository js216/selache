#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

/* @expect 0x55 */
int cctest_2d_decay(void)
{
   int a[3][4];
   a[1][2]      = 0x55;
   int(*row)[4] = a; /* decay: int[3][4] -> int(*)[4] */
   return row[1][2];
}
