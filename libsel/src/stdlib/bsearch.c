/* SPDX-License-Identifier: MIT */
/* bsearch.c --- Binary search of a sorted array */
/* Copyright (c) 2026 Jakob Kastelic */

#include "stddef.h"

__attribute__((weak)) void *bsearch(const void *key, const void *base, size_t nmemb,
              size_t size, int (*cmp)(const void *, const void *))
{
    size_t lo = 0;
    size_t hi = nmemb;

    while (lo < hi) {
        size_t mid = lo + (hi - lo) / 2;
        const unsigned char *p = (const unsigned char *)base + mid * size;
        int c = cmp(key, p);
        if (c == 0)
            return (void *)p;
        if (c < 0)
            hi = mid;
        else
            lo = mid + 1;
    }

    return NULL;
}
