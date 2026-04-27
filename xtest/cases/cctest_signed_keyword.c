#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

/* @expect 0x0A */
int cctest_signed_keyword(void)
{
   signed x = -10;
   signed y = 20;
   return x + y; /* 10 = 0x0A */
}
