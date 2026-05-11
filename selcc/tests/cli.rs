// SPDX-License-Identifier: GPL-3.0
// cli.rs --- Integration tests for the selcc compiler driver binary
// Copyright (c) 2026 Jakob Kastelic

use std::path::PathBuf;
use std::process::Command;
use std::sync::atomic::{AtomicU64, Ordering};

fn selcc_bin() -> PathBuf {
    PathBuf::from(env!("CARGO_BIN_EXE_selcc"))
}

static WORK_COUNTER: AtomicU64 = AtomicU64::new(0);

fn make_workdir(tag: &str) -> PathBuf {
    let n = WORK_COUNTER.fetch_add(1, Ordering::SeqCst);
    let mut dir = std::env::temp_dir();
    dir.push(format!("selcc_it_{}_{}_{}", tag, std::process::id(), n));
    let _ = std::fs::remove_dir_all(&dir);
    std::fs::create_dir_all(&dir).unwrap();
    dir
}

#[test]
fn no_args_prints_usage_and_fails() {
    let out = Command::new(selcc_bin())
        .output()
        .expect("failed to spawn selcc");
    assert!(!out.status.success(), "expected non-zero exit");
    let stderr = String::from_utf8_lossy(&out.stderr);
    assert!(stderr.contains("Usage:"), "stderr: {stderr}");
    assert!(stderr.contains("selcc"), "stderr: {stderr}");
}

#[test]
fn version_flag_prints_banner() {
    let out = Command::new(selcc_bin())
        .arg("-version")
        .output()
        .expect("failed to spawn selcc");
    assert!(
        out.status.success(),
        "rc={:?} stderr={}",
        out.status.code(),
        String::from_utf8_lossy(&out.stderr)
    );
    let stdout = String::from_utf8_lossy(&out.stdout);
    assert!(
        stdout.contains("Selache C Compiler") || stdout.contains("Version"),
        "stdout: {stdout}"
    );
}

#[test]
fn preprocess_flag_emits_to_stdout() {
    // -E with a single input and no -o should write the preprocessed
    // text to stdout. We use a tiny input that has nothing for the
    // preprocessor to do (no #include, no #define), so the output
    // must contain the literal token sequence we wrote.
    let work = make_workdir("preprocess");
    let src = work.join("hello.c");
    std::fs::write(&src, "int answer = 42;\n").unwrap();
    let out = Command::new(selcc_bin())
        .arg("-E")
        .arg(&src)
        .output()
        .expect("failed to spawn selcc");
    assert!(
        out.status.success(),
        "rc={:?} stderr={}",
        out.status.code(),
        String::from_utf8_lossy(&out.stderr)
    );
    let stdout = String::from_utf8_lossy(&out.stdout);
    assert!(
        stdout.contains("answer") && stdout.contains("42"),
        "preprocessed output missing expected tokens; stdout=\n{stdout}"
    );
}

#[test]
fn missing_input_file_errors() {
    let work = make_workdir("missing_input");
    let out = Command::new(selcc_bin())
        .arg("-c")
        .arg("nonexistent_input_file.c")
        .current_dir(&work)
        .output()
        .expect("failed to spawn selcc");
    assert!(!out.status.success(), "expected non-zero exit");
    let stderr = String::from_utf8_lossy(&out.stderr);
    assert!(stderr.contains("selcc:"), "stderr: {stderr}");
}
