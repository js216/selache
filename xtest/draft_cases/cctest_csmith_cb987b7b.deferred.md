# cctest_csmith_cb987b7b deferred diagnosis

## Symptom

The selache target build of `cctest_csmith_cb987b7b.c` boots and runs
to completion on the SHARC+ bench, but the harness prints
`got 0b544876` instead of the filename-encoded expected hash
`0xfa8e4ddc`. The boot itself is healthy: the 63488-byte image
transfers cleanly, the DSP comes up, and `dsp:uart_expect` reports
`HIT b'got '` within the standard 2.5 s window. The wrong hash is
reproducible across attempts.

## Diagnostic procedure

The same C source was compiled and executed natively on the
development host as a sanity cross-check:

| Toolchain        | Output            | Matches filename `0xfa8e4ddc` |
|------------------|-------------------|-------------------------------|
| host gcc         | `got fa8e4ddc`    | yes                           |
| host clang       | `got fa8e4ddc`    | yes                           |
| selache target   | `got 0b544876`    | no                            |

Both host toolchains agree with each other and with the
filename-encoded expected hash, so the C source is well-formed and
deterministic. The discrepancy lives in the selache target toolchain
chain (selcc compile + selas assemble + selld link + selload boot
stream).

## Why the usual surgical workarounds don't apply

Recent selache history resolved several csmith target failures with
small per-case rewrites. None of those patterns fits cb987b7b:

- `xtest: drop pragma-pack on csmith XXXX` — `grep -n 'pragma' cctest_csmith_cb987b7b.c` is empty.
- `xtest: NoFillBlock for csmith XXXX` — there is no oversize-block
  signal here; the 63488-byte image is well within the L1 budget.
- `xtest: rewrite g_NN to BSS for csmith XXXX` — the case has two
  top-level global arrays (no single .data offender to retarget at
  BSS).

The bug is therefore not localised by these source-level dodges.

## Different failure mode landscape

This case mirrors the wrong-hash mode of `cctest_csmith_4270e7c5`
(deferred upstream) rather than the early-hang silent-UART mode of
`cctest_csmith_95d42820`. The DSP reaches `puts()` and prints a
well-formed hash; the value itself is wrong. The most likely culprits
are: a bad initialised-global at load time (LDR data section that
selload encoded with the wrong word width), a wrong-result codegen
for one of the `safe_*_func_*` arithmetic helpers, or a
calling-convention mismatch in one of the bodies that selcc routed
through a thunk.

## Root cause

Deferred. The selcc / selas / selld / selload pipeline has at least
one bug specific to the code shapes csmith emits in this seed. No
minimal reproducer extracted yet.

## Recommended remediation

Deferred. Suggested next steps when a selcc/seld engineer picks this
up:

1. Run `creduce` against the source with a predicate that compares
   the SHARC+ `got NN` print against `fa8e4ddc`, to shrink the case
   to a minimal reproducer.
2. Diff the selas listing of the reduced case against the
   listing produced by the reference target toolchain used in the
   companion mission for this seed.
3. Inspect the selload boot stream for the reduced case to confirm
   that initialised globals load with the right word width and
   address.

Until that work happens, the case is deferred out of the
`selache-core-tests` sweep so the remaining ~900 cases can exercise
the toolchain.
