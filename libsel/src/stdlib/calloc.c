/* SPDX-License-Identifier: GPL-3.0 */
/* calloc.c --- Allocate and zero-initialize memory */
/* Copyright (c) 2026 Jakob Kastelic */

#include "stddef.h"

void *malloc(size_t size);

void *calloc(size_t nmemb, size_t size)
{
    size_t total;
    unsigned char *p;
    size_t i;

    if (nmemb == 0 || size == 0)
        return NULL;

    total = nmemb * size;

    /* overflow check */
    if (nmemb != 0 && total / nmemb != size)
        return NULL;

    p = malloc(total);
    if (!p)
        return NULL;

    for (i = 0; i < total; i++)
        p[i] = 0;

    return p;
}
