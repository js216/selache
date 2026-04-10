/* SPDX-License-Identifier: GPL-3.0 */
/* strncat.c --- Concatenate up to n characters from a string */
/* Copyright (c) 2026 Jakob Kastelic */

#include "string.h"

char *strncat(char *dest, const char *src, size_t n)
{
    char *end = dest;

    while (*end != '\0') {
        end++;
    }

    while (n-- && *src != '\0') {
        *end++ = *src++;
    }

    *end = '\0';

    return dest;
}
