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
int cctest_char_escapes_full(void)
{
   char bel = '\a'; /* 7 */
   char bs  = '\b'; /* 8 */
   char ff  = '\f'; /* 12 */
   char cr  = '\r'; /* 13 */
   char tab = '\t'; /* 9 */
   char vt  = '\v'; /* 11 */
   return (bel == 7 && bs == 8 && ff == 12 && cr == 13 && tab == 9 && vt == 11)
              ? 0x55
              : 0xAA;
}
