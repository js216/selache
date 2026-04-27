#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

/* @expect 0x12A */
int cctest_str_table(void)
{
   const char *names[] = {"alpha", "beta", "gamma"};
   return names[0][0] + names[1][0] + names[2][0];
   /* 'a'+'b'+'g' = 97+98+103 = 298 = 0x12A */
}
