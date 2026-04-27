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
int cctest_twos_compl(void)
{
   unsigned int u = (unsigned int)(-1);
   return (u == 0xFFFFFFFFu) ? 0x55 : 0xAA;
}
