/* SPDX-License-Identifier: GPL-3.0 */
/* strlen.c --- Compute the length of a string */
/* Copyright (c) 2026 Jakob Kastelic */

#include "string.h"

size_t strlen(const char *s)
{
    const char *p = s;

    while (*p != '\0') {
        p++;
    }

    return (size_t)(p - s);
}
