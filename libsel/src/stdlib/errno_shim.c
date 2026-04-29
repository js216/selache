/* SPDX-License-Identifier: MIT */
/* errno_shim.c --- Set errno for stdlib functions */
/* Copyright (c) 2026 Jakob Kastelic */

/* C99 7.5p2 only requires errno to be a "modifiable lvalue of type int".
   We use a plain global, defined in libsel/src/support/errno.c. */

#include <errno.h>

__attribute__((weak)) void sel_set_errno(int val)
{
    errno = val;
}
