#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

int cctest_tentative_var;
int cctest_tentative_var;

/* @expect 0x66 */
int cctest_tentative_def(void)
{
   cctest_tentative_var = 0x66;
   return cctest_tentative_var; /* 0x66 */
}
