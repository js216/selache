#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-3.0
# grow_drafts.py --- HW-validate draft_cases/, then expand corpus by N
# Copyright (c) 2026 Jakob Kastelic
"""Grow draft_cases/ to a target size, hardware-validating each draft
before counting it.

Workflow per outer iteration:
  1. Build every untested draft into build/drafts/{cces,sel}/.
  2. Submit each untested draft to the bench on both cces and sel
     toolchains, check the dsp.uart `got NN` against `@expect`.
  3. On success, append the draft's stem to draft_cases/.validated so
     the next pass skips it.
  4. On any failure, halt with the offending case + reason.
  5. If the corpus is below TARGET, run new_csmith.py BATCH times to
     add new candidates and repeat.

The .validated sidecar is the single source of truth for "has run on
hardware"; deleting it forces a full re-validation on the next run.
"""
import argparse
import json
import os
import pathlib
import re
import subprocess
import sys
import tempfile
import time

ROOT = pathlib.Path(__file__).resolve().parents[2]
DRAFT_DIR = ROOT / "selache/xtest/draft_cases"
BUILD_DIR = ROOT / "selache/xtest/build/drafts"
SUBMIT_PY = ROOT / "test_serv/submit.py"
NEW_CSMITH = ROOT / "selache/xtest/new_csmith.py"
SERVER = "http://localhost:8080"
VALIDATED = DRAFT_DIR / ".validated"


def list_drafts():
    return sorted(p.stem for p in DRAFT_DIR.glob("cctest_csmith_*.c"))


def load_validated():
    if VALIDATED.exists():
        return set(VALIDATED.read_text().splitlines())
    return set()


def mark_validated(stem):
    with VALIDATED.open("a") as f:
        f.write(f"{stem}\n")


def expect_of(stem):
    src = DRAFT_DIR / f"{stem}.c"
    m = re.search(r"@expect\s+(0x[0-9a-fA-F]+|\d+)", src.read_text())
    if not m:
        raise RuntimeError(f"no @expect in {src}")
    return int(m.group(1), 0)


def make_drafts():
    subprocess.check_call(
        ["make", "-C", "selache/xtest",
         "drafts-cces", "drafts-sel",
         f"-j{os.cpu_count() or 4}",
         "--output-sync=line", "--no-print-directory"],
        cwd=ROOT)


def hw_check(stem, toolchain, expect):
    """Submit one draft .ldr to the bench, return (ok, reason)."""
    ldr = BUILD_DIR / toolchain / f"{stem}.0x{expect:x}.ldr"
    if not ldr.exists():
        return False, f"missing {ldr}"
    with tempfile.TemporaryDirectory(prefix=f"hw_{stem}_") as tmp:
        plan_path = pathlib.Path(tmp) / "plan.txt"
        extract = pathlib.Path(tmp) / "artefact"
        plan_path.write_text(
            f'description "draft {stem} ({toolchain})"\n'
            f'# nonce {time.time_ns()}\n'
            f'dsp:reset\n'
            f'dsp:uart_open\n'
            f'dsp:boot ldr=@ldr\n'
            f'dsp:uart_expect sentinel="got " timeout_ms=3000\n'
            f'dsp:uart_close\n'
            f'mark tag=draft_hw\n')
        cp = subprocess.run(
            ["python3", str(SUBMIT_PY),
             "--server", SERVER,
             "--wait", "600",
             "--extract", str(extract),
             "--runtime", "60",
             "--blob", f"ldr={ldr}",
             str(plan_path)],
            capture_output=True, text=True, timeout=900)
        if cp.returncode != 0:
            return False, (f"submit.py rc={cp.returncode}: "
                           f"{(cp.stderr or cp.stdout)[-500:]}")
        manifest = json.loads((extract / "manifest.json").read_text())
        n_errors = manifest.get("n_errors", -1)
        if n_errors != 0:
            return False, f"manifest n_errors={n_errors}"
        uart = (extract / "streams/dsp.uart.bin").read_bytes().decode(
            "ascii", "replace")
        m = re.search(r"got\s+([0-9a-fA-F]+)", uart)
        if not m:
            return False, f"no `got NN` in uart: {uart!r}"
        got = int(m.group(1), 16)
        if got != expect:
            return False, f"expect=0x{expect:x} got=0x{got:x}"
    return True, None


def validate_one(stem):
    expect = expect_of(stem)
    for tc in ("cces", "sel"):
        t0 = time.monotonic()
        ok, why = hw_check(stem, tc, expect)
        dt = time.monotonic() - t0
        if not ok:
            return False, f"{tc}: {why} (+{dt:.1f}s)"
    return True, None


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("--target", type=int, default=1000,
                    help="grow corpus until cctest_csmith_*.c hits this count")
    ap.add_argument("--batch", type=int, default=10,
                    help="how many drafts to generate per outer iteration")
    args = ap.parse_args()

    while True:
        validated = load_validated()
        all_drafts = list_drafts()
        untested = [d for d in all_drafts if d not in validated]
        print(f"[{time.strftime('%H:%M:%S')}] corpus={len(all_drafts)} "
              f"validated={len(validated)} untested={len(untested)}")
        if untested:
            make_drafts()
            for stem in untested:
                t0 = time.monotonic()
                ok, why = validate_one(stem)
                dt = time.monotonic() - t0
                if not ok:
                    sys.exit(f"FAIL {stem}: {why}")
                mark_validated(stem)
                print(f"  PASS {stem} (+{dt:.1f}s)")
        if len(all_drafts) >= args.target:
            print(f"reached target: corpus={len(all_drafts)}")
            return
        print(f"generating {args.batch} new csmith drafts")
        for _ in range(args.batch):
            subprocess.check_call(
                ["python3", str(NEW_CSMITH)], cwd=ROOT)


if __name__ == "__main__":
    main()
