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
int cctest_sign_promo_cmp(void)
{
   unsigned int u = 1;
   int s          = -1;
   return (u < s) ? 0x55 : 0xAA; /* -1 promotes to UINT_MAX > 1 */
}
