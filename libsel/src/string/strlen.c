/* SPDX-License-Identifier: MIT */
/* strlen.c --- Compute the length of a string */
/* Copyright (c) 2026 Jakob Kastelic */

#include "string.h"

__attribute__((weak)) size_t strlen(const char *s)
{
    const char *p = s;

    while (*p != '\0') {
        p++;
    }

    return (size_t)(p - s);
}
