#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

static int classify(int x)
{
   return (x > 10) ? 3 : (x > 5) ? 2 : (x > 0) ? 1 : 0;
}

/* @expect 2 */
int cctest_chain_ternary(void)
{
   return classify(7); /* 2 */
}
