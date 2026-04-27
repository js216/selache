#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

#define UINT32_MAX 0xFFFFFFFFU
#ifndef SIZE_MAX
#define SIZE_MAX UINT32_MAX
#endif
/* @expect 0x55 */
int cctest_size_max(void)
{
   return (SIZE_MAX == 0xFFFFFFFFU) ? 0x55 : 0xAA;
}
