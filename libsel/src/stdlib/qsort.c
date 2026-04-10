/* SPDX-License-Identifier: MIT */
/* qsort.c --- Sort an array using quicksort */
/* Copyright (c) 2026 Jakob Kastelic */

#include "stddef.h"

static void swap_bytes(unsigned char *a, unsigned char *b, size_t size)
{
    size_t i;
    unsigned char tmp;
    for (i = 0; i < size; i++) {
        tmp = a[i];
        a[i] = b[i];
        b[i] = tmp;
    }
}

static void do_qsort(unsigned char *base, size_t lo, size_t hi,
                      size_t size, int (*cmp)(const void *, const void *))
{
    size_t i, j;
    unsigned char *pivot;

    if (lo >= hi)
        return;

    pivot = base + hi * size;
    i = lo;
    for (j = lo; j < hi; j++) {
        if (cmp(base + j * size, pivot) <= 0) {
            swap_bytes(base + i * size, base + j * size, size);
            i++;
        }
    }
    swap_bytes(base + i * size, pivot, size);

    if (i > lo)
        do_qsort(base, lo, i - 1, size, cmp);
    if (i < hi)
        do_qsort(base, i + 1, hi, size, cmp);
}

void qsort(void *base, size_t nmemb, size_t size,
            int (*cmp)(const void *, const void *))
{
    if (nmemb < 2)
        return;
    do_qsort((unsigned char *)base, 0, nmemb - 1, size, cmp);
}
