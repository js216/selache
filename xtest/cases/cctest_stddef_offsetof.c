#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

struct off_test {
   int a;
   int b;
   int c;
};

/* @expect 8 */
int cctest_stddef_offsetof(void)
{
   return (int)offsetof(struct off_test, c); /* 2 * sizeof(int) = 8 */
}
