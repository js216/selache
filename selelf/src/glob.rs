// SPDX-License-Identifier: GPL-3.0
// glob.rs --- Simple wildcard pattern matching
// Copyright (c) 2026 Jakob Kastelic

/// Simple wildcard matching supporting `*` and `?`.
pub fn matches(pattern: &str, name: &str) -> bool {
    if !pattern.contains('*') && !pattern.contains('?') {
        return pattern == name;
    }
    glob_match(pattern.as_bytes(), name.as_bytes())
}

fn glob_match(pattern: &[u8], name: &[u8]) -> bool {
    let mut pi = 0;
    let mut ni = 0;
    let mut star_pi = usize::MAX;
    let mut star_ni = 0;

    while ni < name.len() {
        if pi < pattern.len() && (pattern[pi] == b'?' || pattern[pi] == name[ni]) {
            pi += 1;
            ni += 1;
        } else if pi < pattern.len() && pattern[pi] == b'*' {
            star_pi = pi;
            star_ni = ni;
            pi += 1;
        } else if star_pi != usize::MAX {
            pi = star_pi + 1;
            star_ni += 1;
            ni = star_ni;
        } else {
            return false;
        }
    }

    while pi < pattern.len() && pattern[pi] == b'*' {
        pi += 1;
    }

    pi == pattern.len()
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn test_exact_match() {
        assert!(matches("foo.doj", "foo.doj"));
        assert!(!matches("foo.doj", "bar.doj"));
    }

    #[test]
    fn test_star_wildcard() {
        assert!(matches("*.doj", "foo.doj"));
        assert!(matches("f*", "foo.doj"));
        assert!(matches("*oo*", "foo.doj"));
        assert!(!matches("*.txt", "foo.doj"));
        assert!(matches("*", "anything"));
    }

    #[test]
    fn test_question_mark_wildcard() {
        assert!(matches("f?o.doj", "foo.doj"));
        assert!(!matches("f??.doj", "fo.doj"));
        assert!(matches("???", "abc"));
    }

    #[test]
    fn test_mixed_wildcards() {
        assert!(matches("f?o*", "foo.doj"));
        assert!(matches("*?doj", "x.doj"));
    }
}
