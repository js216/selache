/* SPDX-License-Identifier: MIT */
/* errno_internal.h --- Internal errno access for stdlib */
/* Copyright (c) 2026 Jakob Kastelic */

#ifndef LIBSEL_ERRNO_INTERNAL_H
#define LIBSEL_ERRNO_INTERNAL_H

#define SEL_ERANGE 34

void sel_set_errno(int val);

#endif
