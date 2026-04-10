/* SPDX-License-Identifier: GPL-3.0 */
/* realloc.c --- Resize a memory allocation */
/* Copyright (c) 2026 Jakob Kastelic */

#include "heap_internal.h"

void *malloc(size_t size);
void free(void *ptr);

void *realloc(void *ptr, size_t size)
{
    struct block_header *h;
    void *newp;
    size_t old_size;
    size_t copy_size;
    unsigned char *src;
    unsigned char *dst;
    size_t i;

    if (!ptr)
        return malloc(size);

    if (size == 0) {
        free(ptr);
        return NULL;
    }

    h = (struct block_header *)((unsigned char *)ptr - sizeof(struct block_header));
    old_size = h->size;

    if (old_size >= size)
        return ptr;

    newp = malloc(size);
    if (!newp)
        return NULL;

    copy_size = old_size < size ? old_size : size;
    src = (unsigned char *)ptr;
    dst = (unsigned char *)newp;
    for (i = 0; i < copy_size; i++)
        dst[i] = src[i];

    free(ptr);
    return newp;
}
