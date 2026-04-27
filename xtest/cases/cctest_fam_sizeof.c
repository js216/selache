#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

struct fam_s {
   int n;
   int data[];
};

/* @expect 4 */
int cctest_fam_sizeof(void)
{
   return (int)sizeof(
       struct fam_s); /* only sizeof(int) for n; FAM not counted */
}
