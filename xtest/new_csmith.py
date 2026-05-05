#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-3.0
# new_csmith.py --- Wrap a fresh csmith program as a cctest case
# Copyright (c) 2026 Jakob Kastelic
"""Drop a single new randomised cctest case into xtest/draft_cases/.

Csmith generates a self-contained C program whose main() folds every
global into a CRC32 context and calls platform_main_end() to print the
final checksum. cctest cases instead expect `int test_main(void)` to
return a single integer, which the harness compares against an
`@expect` directive embedded in the source. The two formats line up
neatly: this script runs csmith with a conservative option set,
strips the standard csmith.h dependencies, rewrites main() into
test_main() so it returns the lower 32 bits of the checksum
directly, executes the program once on host gcc to recover the
expected value, embeds that value back into the case file via
`@expect`, and writes the result to xtest/draft_cases/.

run.py picks up cases from xtest/cases/ only, so the draft directory
acts as a staging area: review the generated case, then `mv` it into
xtest/cases/ for it to land in the next sweep.
"""

import argparse
import os
import pathlib
import re
import subprocess
import sys
import tempfile

SCRIPT_DIR = pathlib.Path(__file__).resolve().parent
DRAFT_DIR = SCRIPT_DIR / "draft_cases"

# Conservative csmith options. The point of the cctest sweep is to
# exercise every selcc/selas/seld/selload codegen path against
# realistic but small C; csmith without these limits emits
# multi-thousand-line programs whose translation time dominates the
# board turnaround. Safe-math wrappers stay ON (default): csmith
# emits safe_div/safe_mod/safe_lshift/etc. calls which short-circuit
# divisor-zero, INT_MIN/-1 division, and shift-count >= width into
# defined fallbacks before the raw operator runs. We paste the
# expanded wrapper bodies (csmith_safe_math.h.inc) into each case so
# the generated source is self-contained -- no -I/usr/include/csmith
# at compile time.  --no-volatiles drops the volatile-load /
# volatile-store paths the embedded driver model has not been
# verified against.
CSMITH_FLAGS = [
    "--concise",
    "--no-bitfields",
    "--no-pointers",
    "--no-structs",
    "--no-unions",
    "--no-volatiles",
    "--no-volatile-pointers",
    "--max-funcs", "3",
    "--max-block-size", "3",
    "--max-block-depth", "3",
    "--max-expr-complexity", "4",
    "--max-array-dim", "2",
    "--max-array-len-per-dim", "4",
]

# A self-contained replacement for csmith.h: just the CRC32 hash, the
# `transparent_crc` accumulator over uint64_t values, and no-op
# platform stubs. csmith's generated main() calls these by name; we
# inline them so the case file does not need any external include
# path. Keeping the runtime small also keeps it inside what selcc /
# easm21k / cc21k all definitely accept.
CSMITH_RUNTIME = r"""static unsigned int crc32_tab[256];
static unsigned int crc32_context = 0xFFFFFFFFUL;

static void crc32_gentab(void)
{
   int i, j;
   unsigned int crc;
   for (i = 0; i < 256; i++) {
      crc = (unsigned int)i;
      for (j = 0; j < 8; j++)
         crc = (crc & 1U) ? ((crc >> 1) ^ 0xEDB88320UL) : (crc >> 1);
      crc32_tab[i] = crc;
   }
}

static void crc32_byte(unsigned char b)
{
   crc32_context = ((crc32_context >> 8) & 0x00FFFFFFUL) ^
                   crc32_tab[(crc32_context ^ (unsigned int)b) & 0xFFU];
}

static void transparent_crc(unsigned long long val, const char *vname, int flag)
{
   int i;
   (void)vname;
   (void)flag;
   for (i = 0; i < 8; i++)
      crc32_byte((unsigned char)((val >> (i * 8)) & 0xFFULL));
}

static void platform_main_begin(void) {}
"""

# The cctest harness CFLAGS pull these in for every case.
CCTEST_INCLUDES = """\
#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <math.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>
"""

# Header (without @expect; that gets injected after the host run).
SPDX_HEADER_TEMPLATE = """\
// SPDX-License-Identifier: MIT
// cctest_csmith_{stem}.c --- cctest case csmith_{stem} (csmith seed {seed})
// Copyright (c) 2026 Jakob Kastelic
"""


def run(cmd, **kwargs):
    """Wrapper around subprocess.run that surfaces stderr on failure."""
    p = subprocess.run(cmd, capture_output=True, text=True, **kwargs)
    if p.returncode != 0:
        sys.stderr.write(f"{' '.join(str(c) for c in cmd)}\n{p.stderr}")
        sys.exit(p.returncode)
    return p.stdout


def transform_csmith(src):
    """Return cctest-shape C source from a csmith-generated program.

    The csmith program looks like:
       #include "csmith.h"
       <globals + safe_math wrappers + functions...>
       int main (int argc, char* argv[]) {
          int print_hash_value = 0;
          if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
          platform_main_begin();
          crc32_gentab();
          func_1();
          transparent_crc(...);
          ...
          platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
          return 0;
       }

    The transformation:
      - drop `#include "csmith.h"` (we inline a smaller runtime).
      - rename main() to test_main() and zero the parameter list.
      - delete the argv parsing line (we never feed it `1`).
      - delete every `if (print_hash_value) printf(...);` line; with
        flag = 0 they are dead at runtime, but selcc has no `printf`
        on the device path the host-side gcc/clang stages share, and
        leaving them in pulls in a stdio impl on the SHARC+ side.
      - rewrite the platform_main_end + return pair into a single
        `return (int)(crc32_context ^ 0xFFFFFFFFUL);` so the harness
        sees the checksum as the case's @expect value.
    """
    # Strip the csmith.h include; the inlined runtime replaces it.
    src = re.sub(r'^\s*#\s*include\s+"csmith\.h"\s*$', "",
                 src, count=1, flags=re.MULTILINE)
    # Rewrite main() signature.
    src = re.sub(r"\bint\s+main\s*\(\s*int\s+argc\s*,\s*char\s*\*\s*argv\s*\[\s*\]\s*\)",
                 "int test_main(void)", src, count=1)
    # Drop the argv parsing line. csmith always emits this exact form
    # right after the local declarations.
    src = re.sub(
        r"^\s*if\s*\(\s*argc\s*==\s*2\s*&&\s*strcmp\(\s*argv\[1\]\s*,\s*\"1\"\s*\)\s*==\s*0\s*\)\s*print_hash_value\s*=\s*1\s*;\s*$",
        "",
        src,
        flags=re.MULTILINE,
    )
    # Drop conditional printf lines (always dead with flag = 0).
    src = re.sub(
        r"^\s*if\s*\(\s*print_hash_value\s*\)\s*printf\s*\([^;]*\)\s*;\s*$",
        "",
        src,
        flags=re.MULTILINE,
    )
    # Replace the platform_main_end + return 0 tail with a checksum
    # return. csmith emits the two on adjacent lines; allow a flexible
    # whitespace gap between them.
    src = re.sub(
        r"platform_main_end\s*\(\s*crc32_context\s*\^\s*0xFFFFFFFFUL\s*,\s*print_hash_value\s*\)\s*;\s*\n\s*return\s+0\s*;",
        "return (int)(crc32_context ^ 0xFFFFFFFFUL);",
        src,
        count=1,
    )
    return src


SAFE_MATH_PATH = SCRIPT_DIR / "csmith_safe_math.h.inc"


def assemble_case(src, seed, stem):
    """Stitch the SPDX header, includes, runtime, csmith's safe-math
    wrapper bodies, and the transformed csmith body into a single
    self-contained cctest case. The @expect directive is left out;
    it gets prepended by the caller after the host run."""
    header = SPDX_HEADER_TEMPLATE.format(stem=stem, seed=seed)
    safe_math = SAFE_MATH_PATH.read_text()
    return (f"{header}\n{CCTEST_INCLUDES}\n{CSMITH_RUNTIME}\n"
            f"{safe_math}\n{src.lstrip()}")


class UBDetected(Exception):
    """Raised by host_eval when gcc and clang disagree on the output of
    the generated case. Csmith with --safe-math-wrappers 0 emits raw
    `/` and `%` expressions whose divisors can be zero, which is UB
    that the two compilers resolve differently (one traps, one folds
    to garbage). Any disagreement -- compile error, runtime crash,
    missing `got NN`, or differing values -- means the case isn't
    portable and shouldn't land in draft_cases/."""


def host_eval(case_text):
    """Compile + run the case under host gcc AND clang at -m32 -O0
    with UBSan. Any UndefinedBehaviorSanitizer diagnostic ("runtime
    error: ...") raises UBDetected -- e.g. shift count >= width,
    divide-by-zero, signed overflow, OOB indexing -- so the caller
    can retry with a fresh seed. Both compilers must print the same
    `got NN`. Returns the agreed integer on success."""
    wrap = (
        "#include <stdio.h>\n"
        "extern int test_main(void);\n"
        "int main(void) { printf(\"got %x\\n\", test_main()); return 0; }\n"
    )
    flags = ["-m32", "-funsigned-char", "-std=c99", "-w", "-O0",
             "-fsanitize=undefined"]
    with tempfile.TemporaryDirectory(prefix="csmith_eval_") as tmp:
        tmpd = pathlib.Path(tmp)
        case_path = tmpd / "first.c"
        wrap_path = tmpd / "wrap.c"
        case_path.write_text(case_text)
        wrap_path.write_text(wrap)

        results = {}
        for tool in ("gcc", "clang"):
            bin_path = tmpd / f"host_bin_{tool}"
            cp = subprocess.run(
                [tool, *flags, "-o", str(bin_path),
                 str(case_path), str(wrap_path), "-lm"],
                capture_output=True, text=True, timeout=30)
            if cp.returncode != 0:
                raise UBDetected(
                    f"{tool} failed to compile case:\n{cp.stderr}")
            try:
                cp = subprocess.run(
                    [str(bin_path)], capture_output=True, text=True,
                    timeout=10,
                    env={**os.environ, "UBSAN_OPTIONS":
                         "print_stacktrace=0:halt_on_error=0"})
            except subprocess.TimeoutExpired:
                raise UBDetected(
                    f"{tool} binary hung > 10 s (likely UB-induced loop)")
            both = (cp.stdout or "") + "\n" + (cp.stderr or "")
            if "runtime error:" in both or "UndefinedBehaviorSanitizer" in both:
                rm = re.search(r"runtime error: [^\n]+", both)
                raise UBDetected(
                    f"{tool} UBSan: {rm.group(0) if rm else 'UB detected'}")
            if cp.returncode != 0:
                raise UBDetected(
                    f"{tool} binary exited rc={cp.returncode} "
                    f"(crash on UB?): stdout={cp.stdout!r}")
            m = re.search(r"got\s+([0-9a-fA-F]+)", cp.stdout)
            if not m:
                raise UBDetected(
                    f"{tool} produced no `got NN` line: {cp.stdout!r}")
            results[tool] = int(m.group(1), 16)
    if results["gcc"] != results["clang"]:
        raise UBDetected(
            f"gcc=0x{results['gcc']:x} clang=0x{results['clang']:x} "
            f"(divergent UB)")
    return results["gcc"]


def insert_expect(case_text, expect):
    """Place the `@expect 0xNN` directive between the SPDX header and
    the include block. Match the formatting the existing cases use."""
    block = f"\n/* @expect 0x{expect:x} */\n"
    # Insert right after the third line of the SPDX header
    # (Copyright line).
    lines = case_text.splitlines(keepends=True)
    insert_at = 0
    for i, line in enumerate(lines):
        if line.startswith("// Copyright"):
            insert_at = i + 1
            break
    lines.insert(insert_at, block)
    return "".join(lines)


def main():
    ap = argparse.ArgumentParser(description=__doc__.splitlines()[0])
    ap.add_argument("--seed", type=int, default=None,
                    help="csmith seed (default: random per invocation)")
    ap.add_argument("--name", default=None,
                    help="custom suffix for the case stem; defaults to "
                         "the seed in hex")
    ap.add_argument("--keep-csmith", action="store_true",
                    help="keep the raw csmith output alongside the "
                         "transformed case (for debugging)")
    args = ap.parse_args()

    DRAFT_DIR.mkdir(parents=True, exist_ok=True)

    # When the user pins --seed, do exactly one attempt and surface
    # any UB to them; csmith --safe-math-wrappers 0 means a fixed seed
    # can land on UB-divergent code, and silently substituting a
    # different seed would defeat the point of pinning. With a random
    # seed, retry up to MAX_TRIES times: the typical hit rate of
    # UB-divergent output is well under 1 in 10 at these flags.
    MAX_TRIES = 1 if args.seed is not None else 20
    user_seed = args.seed
    last_reason = None
    for attempt in range(MAX_TRIES):
        seed = user_seed if user_seed is not None else \
            int.from_bytes(os.urandom(4), "big")
        stem = args.name if args.name else f"{seed:08x}"
        with tempfile.TemporaryDirectory(prefix="csmith_gen_") as tmp:
            raw_path = pathlib.Path(tmp) / "csmith.c"
            run(["csmith", "-s", str(seed), "-o", str(raw_path),
                 *CSMITH_FLAGS])
            raw = raw_path.read_text()
            if args.keep_csmith:
                (DRAFT_DIR / f"cctest_csmith_{stem}.csmith.c").write_text(raw)
        transformed = transform_csmith(raw)
        case_text = assemble_case(transformed, seed, stem)
        try:
            expect = host_eval(case_text)
        except UBDetected as e:
            last_reason = f"seed {seed:#x}: {e}"
            print(f"reject {last_reason}", file=sys.stderr)
            continue
        case_text = insert_expect(case_text, expect)
        out_path = DRAFT_DIR / f"cctest_csmith_{stem}.c"
        out_path.write_text(case_text)
        print(f"wrote {out_path}  (@expect 0x{expect:x})")
        return
    sys.exit(f"could not generate a UB-clean case in {MAX_TRIES} tries; "
             f"last: {last_reason}")


if __name__ == "__main__":
    main()
