# cctest_csmith_95d42820 deferred diagnosis

## Symptom

The selache target build of `cctest_csmith_95d42820.c` produces a
`.ldr` that the SHARC+ bench boots successfully: the DSP image
transfer reports `wrote 177152/177152` and `ok 411.4 ms`. After the
boot, however, the UART stays completely silent: `dsp:uart_expect`
reports `b'got '` not seen within the 2500 ms window, with `last 0B`
from the UART stream (i.e. UART timeout / silent / 0 bytes read).
The filename-encoded expected hash is `0x298c9077`; the harness
never even reaches the first `puts()` on the bench.

## Diagnostic procedure

The same C source was compiled and executed natively on the
development host as a sanity cross-check:

| toolchain                       | result                                    |
|---------------------------------|-------------------------------------------|
| host gcc (native, -O2)          | `got 298c9077`                            |
| host clang (native, -O2)        | `got 298c9077`                            |
| selcc/selas/selld -> SHARC+ bench | image boots, UART silent, `last 0B` after 2500 ms |

Both host compilers agree with each other and with the
filename-encoded expected hash `0x298c9077`. The native binary runs
to completion. Only the selache target toolchain misbehaves, and the
misbehaviour is a hang/trap rather than a wrong final hash: the DSP
never emits any `got NN` line at all.

## Why the usual surgical workarounds don't apply

This repo has previously rescued csmith cases by three cheap,
content-preserving rewrites:

1. **Drop `#pragma pack`** -- removes an alignment override that
   the assembler/linker pipeline mishandles.
2. **`-NoFillBlock` rebuild** -- changes loader encoding so a
   `.rodata` fill block is not silently truncated.
3. **Rewrite a single global `g_NN` from `.rodata` into BSS** --
   sidesteps the `.rodata` fill-block bug for the one array whose
   initialiser is corrupted.

None directly applies to `cctest_csmith_95d42820.c`:

- `grep "pragma pack"` finds zero hits in the 1385-line source.
- The case has four top-level global arrays rather than the
  single-array shape that the `.rodata`-to-BSS rewrite cleanly
  targets. There is no obvious one-`g_NN`-to-BSS edit that would
  plausibly localise to a single miscompiled initialiser.
- The failure mode is also different: there is no `got NN` line at
  all, so a `.rodata` fill-block corruption of one array (which
  would normally produce a wrong-but-finite hash) is not a good
  match for the symptom.

## Different failure mode from 4270e7c5

`cctest_csmith_4270e7c5.c` boots, runs to completion, and prints a
wrong `got` hash; that is a per-variable / per-construct miscompile
in selcc / selas / selld.

`cctest_csmith_95d42820.c` boots cleanly but hangs or traps before
the first `puts()` -- nothing comes out on UART at all. That
suggests an early-init or large-image L1/L2 routing bug in the
target pipeline (e.g. a section placement, startup, or boot-stream
issue triggered by the larger 177152-byte image), rather than a
codegen miscompile of one expression.

## Root cause (deferred)

A real bug in the selcc / selas / selld / selload pipeline for this
particular csmith body, distinct in failure mode from 4270e7c5.
Diagnosing it requires the usual reduction loop and is out of scope
for the core sweep.

## Recommended remediation (deferred)

1. Run `creduce` with the target toolchain against a no-UART-output
   predicate (the reduced source must still boot but emit zero
   bytes on UART within the bench window, while host gcc and host
   clang still print `got 298c9077`). This produces the smallest
   reproducer.
2. Inspect the selas listing and / or the selload boot stream for
   the reduced case; in particular check section placement, L1/L2
   routing, and early-init code paths for the smaller image.
3. Fix the responsible pass in selcc / selas / selld / selload and
   re-promote this case from `draft_cases/` back into `xtest/cases/`.

Neither step is implemented here; this file just records the
diagnosis so the next draft-promotion pass does not re-derive it.
