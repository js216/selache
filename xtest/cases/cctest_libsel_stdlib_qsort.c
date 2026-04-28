// SPDX-License-Identifier: MIT
// cctest_libsel_stdlib_qsort.c --- libsel stdlib/qsort per-function selcc test
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x55 */

#include <stddef.h>
#include <stdint.h>

static void _q_swap(unsigned char *a, unsigned char *b, size_t sz)
{
   size_t i;
   unsigned char t;
   for (i = 0; i < sz; i++) {
      t    = a[i];
      a[i] = b[i];
      b[i] = t;
   }
}

static void _q_do(unsigned char *base, size_t lo, size_t hi, size_t sz,
                  int (*cmp)(const void *, const void *))
{
   size_t i, j;
   unsigned char *pv;
   if (lo >= hi)
      return;
   pv = base + hi * sz;
   i  = lo;
   for (j = lo; j < hi; j++) {
      if (cmp(base + j * sz, pv) <= 0) {
         _q_swap(base + i * sz, base + j * sz, sz);
         i++;
      }
   }
   _q_swap(base + i * sz, pv, sz);
   if (i > lo)
      _q_do(base, lo, i - 1, sz, cmp);
   if (i < hi)
      _q_do(base, i + 1, hi, sz, cmp);
}

void qsort(void *base, size_t nm, size_t sz,
           int (*cmp)(const void *, const void *))
{
   if (nm < 2)
      return;
   _q_do((unsigned char *)base, 0, nm - 1, sz, cmp);
}

static int _icmp(const void *a, const void *b)
{
   return *(const int *)a - *(const int *)b;
}

int test_main(void)
{

   do {
      int arr[5] = {3, 1, 4, 1, 5};
      qsort(arr, 5, sizeof(int), _icmp);
      if (arr[0] != 1 || arr[1] != 1 || arr[2] != 3 || arr[3] != 4 ||
          arr[4] != 5)
         return 0xAA;
   } while (0);
   1;
   return 0x55;
}
