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
int cctest_int_suffix_all(void)
{
   unsigned u             = 42U;
   long l                 = 42L;
   unsigned long ul       = 42UL;
   long long ll           = 42LL;
   unsigned long long ull = 42ULL;
   return (u == 42 && l == 42 && ul == 42 && ll == 42 && ull == 42) ? 0x55
                                                                    : 0xAA;
}
