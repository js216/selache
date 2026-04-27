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
int cctest_bitwise_mixed_sign(void)
{
   int s               = -1; /* all bits set */
   unsigned int u      = 0xFF00;
   unsigned int result = s & u; /* s promoted to unsigned */
   return (result == 0xFF00) ? 0x55 : 0xAA;
}
