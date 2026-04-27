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
int cctest_char_mul_promo(void)
{
   unsigned char a = 200;
   unsigned char b = 200;
   /* Both promoted to int; result is 40000, not truncated to char */
   int result = a * b;
   return (result == 40000) ? 0x55 : 0xAA;
}
