/* SPDX-License-Identifier: MIT */
/* strerror.c --- Return a description string for an error number */
/* Copyright (c) 2026 Jakob Kastelic */

#include "string.h"

__attribute__((weak)) char *strerror(int errnum)
{
    (void)errnum;
    return (char *)"unknown error";
}
