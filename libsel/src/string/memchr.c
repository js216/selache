/* SPDX-License-Identifier: MIT */
/* memchr.c --- Find a byte in the first n bytes of memory */
/* Copyright (c) 2026 Jakob Kastelic */

#include "string.h"

__attribute__((weak)) void *memchr(const void *s, int c, size_t n)
{
    const unsigned char *p = s;
    unsigned char val = (unsigned char)c;

    while (n--) {
        if (*p == val) {
            return (void *)p;
        }
        p++;
    }

    return NULL;
}
