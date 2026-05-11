// SPDX-License-Identifier: GPL-3.0
// cli.rs --- Integration tests for the selload boot-stream generator binary
// Copyright (c) 2026 Jakob Kastelic

use std::path::PathBuf;
use std::process::Command;
use std::sync::atomic::{AtomicU64, Ordering};

fn selload_bin() -> PathBuf {
    PathBuf::from(env!("CARGO_BIN_EXE_selload"))
}

static WORK_COUNTER: AtomicU64 = AtomicU64::new(0);

fn make_workdir(tag: &str) -> PathBuf {
    let n = WORK_COUNTER.fetch_add(1, Ordering::SeqCst);
    let mut dir = std::env::temp_dir();
    dir.push(format!("selload_it_{}_{}_{}", tag, std::process::id(), n));
    let _ = std::fs::remove_dir_all(&dir);
    std::fs::create_dir_all(&dir).unwrap();
    dir
}

#[test]
fn no_args_prints_usage_and_fails() {
    let out = Command::new(selload_bin())
        .output()
        .expect("failed to spawn selload");
    assert!(!out.status.success(), "expected non-zero exit");
    let stderr = String::from_utf8_lossy(&out.stderr);
    assert!(stderr.contains("Usage:"), "stderr: {stderr}");
    assert!(stderr.contains("selload"), "stderr: {stderr}");
}

#[test]
fn version_flag_prints_banner() {
    let out = Command::new(selload_bin())
        .arg("-version")
        .output()
        .expect("failed to spawn selload");
    assert!(
        out.status.success(),
        "rc={:?} stderr={}",
        out.status.code(),
        String::from_utf8_lossy(&out.stderr)
    );
    let stderr = String::from_utf8_lossy(&out.stderr);
    assert!(
        stderr.contains("ADSP-2156x Family ELF Loader"),
        "banner missing on stderr: {stderr}"
    );
}

#[test]
fn help_flag_prints_usage() {
    let out = Command::new(selload_bin())
        .arg("-help")
        .output()
        .expect("failed to spawn selload");
    assert!(
        out.status.success(),
        "rc={:?} stderr={}",
        out.status.code(),
        String::from_utf8_lossy(&out.stderr)
    );
    let stderr = String::from_utf8_lossy(&out.stderr);
    assert!(stderr.contains("Usage: selload"), "stderr: {stderr}");
    assert!(stderr.contains("-proc"), "stderr: {stderr}");
}

#[test]
fn missing_input_file_errors() {
    let work = make_workdir("missing_input");
    let out = Command::new(selload_bin())
        .arg("-proc")
        .arg("ADSP-21569")
        .arg("nonexistent_input_file.dxe")
        .current_dir(&work)
        .output()
        .expect("failed to spawn selload");
    assert!(!out.status.success(), "expected non-zero exit");
    let stderr = String::from_utf8_lossy(&out.stderr);
    assert!(
        stderr.contains("selload") || stderr.contains("FATAL"),
        "stderr: {stderr}"
    );
}
