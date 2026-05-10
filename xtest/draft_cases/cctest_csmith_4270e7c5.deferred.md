# cctest_csmith_4270e7c5 deferred diagnosis

## Symptom

The selache target build of `cctest_csmith_4270e7c5.c` boots and runs
to completion on the SHARC+ bench, but the harness prints
`got 5760b22a` instead of the filename-encoded expected hash
`0x9bcab2b4`. The boot itself is healthy: the image transfers, the
harness reaches `test_main`, and the final `got NN` line prints
within the standard 2.5 s window. The wrong hash is reproducible.

## Diagnostic procedure

The same C source was compiled and executed natively on the
development host as a sanity cross-check:

| toolchain                       | `got` value    |
|---------------------------------|----------------|
| host gcc (native, -O2)          | `got 9bcab2b4` |
| host clang (native, -O2)        | `got 9bcab2b4` |
| selcc/selas/selld -> SHARC+ bench | `got 5760b22a` |

Both host compilers agree with each other and with the
filename-encoded expected hash. Only the selache target toolchain
disagrees. The source therefore exercises a real miscompile somewhere
in the selcc -> selas -> selld -> selload pipeline; it is not a UART,
boot, image, or test-harness issue.

## Why the usual surgical workarounds don't apply

This repo has previously rescued csmith cases by three cheap,
content-preserving rewrites driven by per-draft filter scripts or
small `.c` edits:

1. **Drop `#pragma pack`** -- removes an alignment override that
   the assembler/linker pipeline mishandles.
2. **`-NoFillBlock` rebuild** -- changes loader encoding so a
   `.rodata` fill block is not silently truncated.
3. **Rewrite a single global `g_NN` from `.rodata` into BSS** --
   sidesteps the `.rodata` fill-block bug for the one array whose
   initialiser is corrupted.

None directly applies to `cctest_csmith_4270e7c5.c`:

- `grep "pragma pack"` finds zero hits in the 851-line source.
- The case has exactly one top-level global array,
  `static uint8_t g_26[3][4]` at line 797, whose initialiser is
  12 bytes -- well below any plausible `.rodata` fill-block
  threshold, and the wrong-hash symptom persists regardless of
  loader fill-block encoding choices used elsewhere.
- There is therefore no obvious single-array rewrite that would
  plausibly recover the correct hash.

## Root cause (deferred)

A real miscompile in the selcc / selas / selld / selload pipeline for
this particular csmith body. Diagnosing it requires the usual bisect
loop: shrink the csmith source with `creduce` against a target-bench
oracle that compares `got` against the host-gcc value, then read the
resulting selas listing. That is out of scope for the core sweep.

## Recommended remediation (deferred)

1. Run `creduce` with the target toolchain to minimise to the
   smallest source that still prints a non-`9bcab2b4` hash on
   SHARC+ while host gcc and host clang still print `9bcab2b4`.
2. Inspect the selas listing and selld map for the reduced case;
   compare against the host gcc assembly to localise the
   miscompiled construct.
3. Fix the responsible pass in selcc / selas / selld and re-promote
   this case from `draft_cases/` back into `xtest/cases/`.

Neither step is implemented here; this file just records the
diagnosis so the next draft-promotion pass does not re-derive it.
