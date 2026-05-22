// SPDX-License-Identifier: MIT
// Copyright (c) 2026 Jakob Kastelic
// xtest_timer.h --- xtest-local TIMER0 tick counter

#ifndef XTEST_TIMER_H
#define XTEST_TIMER_H

#include <stdint.h>

// Start TIMER0 sub-timer 0 as a free-running SCLK0 counter.
void xtest_timer_init(void);

// Read the current 32-bit SCLK0 tick count.
uint32_t xtest_timer_ticks(void);

#endif // XTEST_TIMER_H
