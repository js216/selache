#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

/* @expect 0x34 */
int cctest_iso646_assign(void)
{
   int x = 0xFF;
   x and_eq 0x3C; /* x &= 0x3C → 0x3C */
   x or_eq 0x40;  /* x |= 0x40 → 0x7C */
   x xor_eq 0x48; /* x ^= 0x48 → 0x34 */
   return x;      /* 0x34 */
}
