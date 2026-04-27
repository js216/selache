#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

/* @expect 0x96 */
int cctest_verbose_types(void)
{
   unsigned long int a  = 100UL;
   signed long int b    = -50L;
   unsigned short int c = 200;
   signed short int d   = -100;
   return (int)(a + (unsigned long int)b + c +
                d); /* 100-50+200-100 = 150 = 0x96 */
}
