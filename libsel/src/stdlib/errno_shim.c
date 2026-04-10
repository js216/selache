/* SPDX-License-Identifier: GPL-3.0 */
/* errno_shim.c --- Set errno for stdlib functions */
/* Copyright (c) 2026 Jakob Kastelic */

/* Access errno through a pointer returned by a platform-provided function.
   On glibc: __errno_location().  On the bare-metal SHARC+ target, this
   file is replaced by a stub that returns &errno directly. */

int *__errno_location(void);

void sel_set_errno(int val)
{
    *__errno_location() = val;
}
