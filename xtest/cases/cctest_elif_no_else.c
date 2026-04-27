#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

#define ELIF_VAL 3

/* @expect 0x30 */
int cctest_elif_no_else(void)
{
   int r = 0xFF;
#if ELIF_VAL == 1
   r = 0x10;
#elif ELIF_VAL == 2
   r = 0x20;
#elif ELIF_VAL == 3
   r = 0x30;
#elif ELIF_VAL == 4
   r = 0x40;
#endif
   return r; /* 0x30 */
}
