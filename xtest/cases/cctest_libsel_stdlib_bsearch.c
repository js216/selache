// SPDX-License-Identifier: MIT
// cctest_libsel_stdlib_bsearch.c --- libsel stdlib/bsearch per-function selcc
// test Copyright (c) 2026 Jakob Kastelic

/* @expect 0x55 */

#include <stddef.h>
#include <stdint.h>

void *bsearch(const void *key, const void *base, size_t nm, size_t sz,
              int (*cmp)(const void *, const void *))
{
   size_t lo = 0, hi = nm;
   while (lo < hi) {
      size_t mid             = lo + (hi - lo) / 2;
      const unsigned char *p = (const unsigned char *)base + mid * sz;
      int c                  = cmp(key, p);
      if (c == 0)
         return (void *)p;
      if (c < 0)
         hi = mid;
      else
         lo = mid + 1;
   }
   return 0;
}

static int _icmp(const void *a, const void *b)
{
   return *(const int *)a - *(const int *)b;
}

int test_main(void)
{

   do {
      int arr[5] = {1, 3, 5, 7, 9};
      int k      = 5;
      int *r     = bsearch(&k, arr, 5, sizeof(int), _icmp);
      if (!r || *r != 5)
         return 0xAA;
   } while (0);
   1;
   return 0x55;
}
