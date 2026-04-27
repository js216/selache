#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

int cctest_garr[] = {0x10, 0x20, 0x30};

/* @expect 0x40 */
int cctest_global_arr(void)
{
   return cctest_garr[0] + cctest_garr[2]; /* 0x40 */
}
