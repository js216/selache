/* SPDX-License-Identifier: MIT */
/* strncpy.c --- Copy up to n characters, padding with NUL */
/* Copyright (c) 2026 Jakob Kastelic */

#include "string.h"

__attribute__((weak)) char *strncpy(char *dest, const char *src, size_t n)
{
    char *ret = dest;
    size_t i;

    for (i = 0; i < n && src[i] != '\0'; i++) {
        dest[i] = src[i];
    }

    for (; i < n; i++) {
        dest[i] = '\0';
    }

    return ret;
}
