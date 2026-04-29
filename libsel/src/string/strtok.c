/* SPDX-License-Identifier: MIT */
/* strtok.c --- Tokenize a string using delimiter characters */
/* Copyright (c) 2026 Jakob Kastelic */

#include "string.h"

static char *saved;

__attribute__((weak)) char *strtok(char *str, const char *delim)
{
    char *token;
    const char *d;
    int is_delim;

    if (str != NULL) {
        saved = str;
    }

    if (saved == NULL) {
        return NULL;
    }

    /* skip leading delimiters */
    for (;;) {
        if (*saved == '\0') {
            saved = NULL;
            return NULL;
        }
        is_delim = 0;
        for (d = delim; *d != '\0'; d++) {
            if (*saved == *d) {
                is_delim = 1;
                break;
            }
        }
        if (!is_delim) {
            break;
        }
        saved++;
    }

    token = saved;

    /* find end of token */
    while (*saved != '\0') {
        for (d = delim; *d != '\0'; d++) {
            if (*saved == *d) {
                *saved++ = '\0';
                return token;
            }
        }
        saved++;
    }

    saved = NULL;
    return token;
}
