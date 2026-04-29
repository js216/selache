/* SPDX-License-Identifier: MIT */
/* exit.c --- Bare-metal _Exit: halt the core */
/* Copyright (c) 2026 Jakob Kastelic */

/* C99 7.20.4.4: _Exit terminates without invoking atexit / signal
   handlers and without flushing buffers. On a freestanding SHARC+
   target there is no OS to return to, so we park the core in a
   tight halt loop. The assembly counterpart in startup.s ends
   reset-from-main the same way; this provides the C-callable entry
   point that exit.c, abort.c, and the assert handler all funnel
   through. */

__attribute__((weak)) void _Exit(int status)
{
    (void)status;
    for (;;) {
        /* Spin. A SHARC+ IDLE here would be slightly lower-power,
           but it would also wake on any unmasked interrupt; an
           empty loop guarantees the core stays put. */
    }
}
