# cctest_csmith_8c175802 deferred diagnosis

## Symptom

The embedded-toolchain build of `cctest_csmith_8c175802.c` produces a
`.ldr` that boots successfully on the bench (image transfer reports
`wrote 47104/47104`), but the standard draft mission test plan -- which
uses `timeout_ms=2500` and a 2.5 s post-boot `delay` -- never observes
the harness `got NN` line within that window.

Earlier remediation attempts in this session that all failed to fix the
symptom under the 2.5 s window:

1. `-NoFillBlock` rebuild of the `.ldr` (loader-encoding override).
2. BSS rewrite of the `static const` array `l_2594` (move out of
   `.rodata`).
3. Hoist of two large local arrays (`l_2780`, `l_2983`) into globals.
4. `-O0` rebuild of the draft.

None made any visible difference.

## Diagnostic procedure

The harness `selache/xtest/main.c` was temporarily instrumented with
raw `uart_putc` markers (`boot1` after `uart_init`, `boot2` immediately
before `test_main`, `boot3` after `test_main` returns) and the
`cctest_csmith_8c175802.c` body was likewise instrumented at successive
top-level statements / function entries. Both files were reverted after
testing; nothing here has been committed as a "fix".

Successive bench probes captured the following UART output:

| probe                                              | UART seen                                                          |
|----------------------------------------------------|--------------------------------------------------------------------|
| harness markers only, 2.5 s window                 | `boot1 boot2`                                                      |
| harness + `test_main` top-level markers `A..D`     | `boot1 boot2 A B C` (no `D`)                                       |
| `+` markers `1..4` at func\_1 entry / pre-`if`     | `boot1 boot2 A B C 1 2 3 4`                                        |
| `+` `2e/2p` (func\_2 entry / pre-body)             | `boot1 boot2 A B C 1 2 3 4 2e 2p`                                  |
| `+` `L1` after the lbl_1718/lbl_1744 hot loop, with the bench `delay` extended to **30 s** | `boot1 boot2 A B C 1 2 3 4 2e 2p L1 D boot3 got a35fa910` |

The final probe ran the full instrumented binary with a 30 s post-boot
window. The harness completed normally and printed the correct expected
hash `got a35fa910` (matching `/* @expect 0xa35fa910 */`).

Captured under `/tmp/runpy-k_c0tm0y/` on this bench.

## Root cause

`cctest_csmith_8c175802.c` is **not** hung. The csmith-generated
function body of `func_2` -- specifically the body that begins at
`lbl_1718` and is iterated by the `if (l_1715) goto lbl_1718;` test
near `lbl_1744` -- is a backwards goto over `l_1715++` that initialises
`uint32_t l_1715 = 0xF08224F3L` and only terminates when the increment
wraps back to zero. That is roughly 2.6 \times 10^8 iterations, each of
which also re-executes the side-effecting expression
`(*l_1710) &= ((****g_1512) < (**g_1073));`. On the ADSP-21569 at the
bench's configured clock this measurably runs for more than 2.5 s but
well under 30 s.

There is **no toolchain bug, no boot bug, no UART bug, and no
.rodata-fill bug**. The image agrees with the host gcc/clang runs at
the level of the final `got` value once the bench window is large
enough to let the loop finish.

## Recommended remediation (deferred)

The cleanest cluster-of-options, in order of preference, is:

1. Bump the per-draft `timeout_ms` / `delay ms` for this case to ~30 s
   in the focused mission step (and document why, citing this file).
2. Or rewrite the inner backwards-goto loop into a finite explicit
   counter via a per-draft filter script (analogous to
   `filter_csmith_41369044.py`), preserving the side-effect chain and
   the final hash. This is value-preserving only if the rewritten
   counter executes the same number of iterations modulo the
   `uint32_t` wrap, which is exactly `0x100000000 - 0xF08224F3 =
   0x0F7DDB0D` iterations. The host compilers happen to run this in
   well under a second so the host-side gcc cross-check (the same
   sanity step used for `41369044`) covers correctness.

Neither is implemented here; this file just records the diagnosis so
the next draft-promotion pass does not re-derive it.
