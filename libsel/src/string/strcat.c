/* SPDX-License-Identifier: MIT */
/* strcat.c --- Concatenate two strings */
/* Copyright (c) 2026 Jakob Kastelic */

#include "string.h"

char *strcat(char *dest, const char *src)
{
    char *end = dest;

    while (*end != '\0') {
        end++;
    }

    while ((*end++ = *src++) != '\0') {
    }

    return dest;
}
