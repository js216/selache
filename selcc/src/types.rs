// SPDX-License-Identifier: GPL-3.0
// types.rs --- C type system representation
// Copyright (c) 2026 Jakob Kastelic

#[derive(Debug, Clone, PartialEq)]
pub enum Type {
    Void,
    Char,
    Short,
    Int,
    Long,
    LongLong,
    ULongLong,
    Float,
    Double,
    Unsigned(Box<Type>),
    Pointer(Box<Type>),
    Array(Box<Type>, Option<usize>),
    Struct {
        name: Option<String>,
        fields: Vec<(String, Type)>,
    },
    Union {
        name: Option<String>,
        fields: Vec<(String, Type)>,
    },
    Enum {
        name: Option<String>,
    },
    Typedef(String),
    Volatile(Box<Type>),
    Const(Box<Type>),
    /// Bitfield: base integer type with a specific bit width (C99 6.7.2.1).
    Bitfield(Box<Type>, u8),
    FunctionPtr {
        return_type: Box<Type>,
        params: Vec<Type>,
    },
    Bool,
    Complex(Box<Type>),
    Imaginary(Box<Type>),
}

/// Tag-to-fields resolver for struct/union types declared by tag only.
///
/// Size and alignment queries need to see the real field list of any
/// nested aggregate; an empty-fields `Type::Struct` (the form produced
/// by the parser when only a tag is visible at the use site) must be
/// expanded through the translation unit's `struct_defs` table before
/// its size can be computed. The `Types` module stays free of
/// compiler-internal types by taking this behaviour as a trait.
pub trait TypeCtx {
    /// Look up the fields of a struct or union declared by tag.
    fn resolve_tag(&self, name: &str) -> Option<&[(String, Type)]>;
    /// Look up the target type of a typedef name.
    fn resolve_typedef(&self, name: &str) -> Option<&Type> {
        let _ = name;
        None
    }
}

/// An empty context: no tag lookups possible. Used as a degenerate
/// ctx when the caller has no access to struct_defs (e.g. unit tests
/// that build types inline with full field lists).
pub struct NullCtx;
impl TypeCtx for NullCtx {
    fn resolve_tag(&self, _name: &str) -> Option<&[(String, Type)]> {
        None
    }
}

/// Size in bytes, resolving tag-only struct/union references and
/// typedefs through `ctx`. Callers that may see tag-only aggregates
/// (globals, struct fields, sizeof, memcpy dst size, index scaling)
/// MUST use this instead of `Type::size_bytes`, which returns 0 for
/// an empty-fields struct and causes silent layout collapse.
pub fn size_bytes_ctx(ty: &Type, ctx: &dyn TypeCtx) -> u32 {
    match ty {
        Type::Void => 0,
        Type::Bool => 1,
        Type::Char => 1,
        Type::Short => 2,
        Type::Int | Type::Long | Type::Float | Type::Double => 4,
        Type::LongLong | Type::ULongLong => 8,
        Type::Unsigned(inner) => size_bytes_ctx(inner, ctx),
        Type::Pointer(_) => 4,
        Type::Array(elem, Some(n)) => size_bytes_ctx(elem, ctx) * (*n as u32),
        Type::Array(_, None) => 0,
        Type::Struct { name, fields } => {
            if fields.is_empty() {
                if let Some(sname) = name {
                    if let Some(def) = ctx.resolve_tag(sname) {
                        return struct_size_bytes_ctx(def, ctx);
                    }
                }
                0
            } else {
                struct_size_bytes_ctx(fields, ctx)
            }
        }
        Type::Union { name, fields } => {
            if fields.is_empty() {
                if let Some(uname) = name {
                    if let Some(def) = ctx.resolve_tag(uname) {
                        return def
                            .iter()
                            .map(|(_, t)| size_bytes_ctx(t, ctx))
                            .max()
                            .unwrap_or(0);
                    }
                }
                0
            } else {
                fields
                    .iter()
                    .map(|(_, t)| size_bytes_ctx(t, ctx))
                    .max()
                    .unwrap_or(0)
            }
        }
        Type::Enum { .. } => 4,
        Type::Typedef(name) => {
            if let Some(target) = ctx.resolve_typedef(name) {
                return size_bytes_ctx(target, ctx);
            }
            // Typedef names sometimes alias a struct tag directly.
            if let Some(def) = ctx.resolve_tag(name) {
                return struct_size_bytes_ctx(def, ctx);
            }
            4
        }
        Type::Volatile(inner) | Type::Const(inner) => size_bytes_ctx(inner, ctx),
        Type::Bitfield(inner, _) => size_bytes_ctx(inner, ctx),
        Type::FunctionPtr { .. } => 4,
        Type::Complex(inner) => 2 * size_bytes_ctx(inner, ctx),
        Type::Imaginary(inner) => size_bytes_ctx(inner, ctx),
    }
}

/// Size in 32-bit words, resolving tag-only references through `ctx`.
pub fn size_words_ctx(ty: &Type, ctx: &dyn TypeCtx) -> u32 {
    match ty {
        Type::Void => 0,
        Type::Bool
        | Type::Char
        | Type::Short
        | Type::Int
        | Type::Long
        | Type::Float
        | Type::Double => 1,
        Type::LongLong | Type::ULongLong => 2,
        Type::Unsigned(inner) => size_words_ctx(inner, ctx),
        Type::Pointer(_) | Type::FunctionPtr { .. } => 1,
        Type::Array(elem, Some(n)) => {
            // Narrow-element arrays (`char`, `signed char`, `unsigned
            // char`, `short`, `unsigned short`) are byte-packed: four
            // bytes per 32-bit word, so C99 byte-address semantics hold
            // through `(char *)` casts and `p[i]` indexing.  Without
            // packing, a `char s[5]` would reserve five words, forcing
            // pointer arithmetic into a word-stride that the
            // `(char *)&int` alias case cannot satisfy.  The same logic
            // extends to `short[N]`: with one short per word the index
            // stride (`sizeof(short) == 2`) walks half a word instead
            // of a full element, so `arr[1]` reads inside `arr[0]`.
            //
            // Multi-dimensional arrays of narrow elements byte-pack
            // contiguously across the inner-array boundaries — `short
            // m[2][3]` is six contiguous shorts, not two padded
            // 8-byte rows — so compute the total reservation from the
            // flat `size_bytes_ctx(self)` rather than the recursive
            // `size_words(elem) * n` (which would pad each inner row
            // up to a word boundary).  For wider elements (`int`,
            // `long long`) `size_bytes(elem)` is already a multiple of
            // 4 and the two formulas agree, so this branch keeps the
            // existing layout intact.
            let total_bytes = size_bytes_ctx(elem, ctx) * (*n as u32);
            total_bytes.div_ceil(4).max(1)
        }
        Type::Array(_, None) => 0,
        Type::Struct { .. } => size_bytes_ctx(ty, ctx).div_ceil(4),
        Type::Union { name, fields } => {
            if fields.is_empty() {
                if let Some(uname) = name {
                    if let Some(def) = ctx.resolve_tag(uname) {
                        return def
                            .iter()
                            .map(|(_, t)| size_words_ctx(t, ctx))
                            .max()
                            .unwrap_or(0);
                    }
                }
                0
            } else {
                fields
                    .iter()
                    .map(|(_, t)| size_words_ctx(t, ctx))
                    .max()
                    .unwrap_or(0)
            }
        }
        Type::Enum { .. } => 1,
        Type::Typedef(name) => {
            if let Some(target) = ctx.resolve_typedef(name) {
                return size_words_ctx(target, ctx);
            }
            if let Some(def) = ctx.resolve_tag(name) {
                let bytes: u32 = def.iter().map(|(_, t)| size_bytes_ctx(t, ctx)).sum();
                return bytes.div_ceil(4);
            }
            1
        }
        Type::Volatile(inner) | Type::Const(inner) => size_words_ctx(inner, ctx),
        Type::Bitfield(inner, _) => size_words_ctx(inner, ctx),
        Type::Complex(inner) => 2 * size_words_ctx(inner, ctx),
        Type::Imaginary(inner) => size_words_ctx(inner, ctx),
    }
}

/// Alignment in bytes, resolving tag-only references through `ctx`.
pub fn alignment_ctx(ty: &Type, ctx: &dyn TypeCtx) -> u32 {
    match ty {
        Type::Void => 1,
        Type::Char => 1,
        Type::Short => 2,
        Type::Int | Type::Long | Type::Float | Type::Double => 4,
        Type::LongLong | Type::ULongLong => 4,
        Type::Unsigned(inner) => alignment_ctx(inner, ctx),
        Type::Pointer(_) | Type::FunctionPtr { .. } => 4,
        Type::Array(elem, _) => alignment_ctx(elem, ctx),
        Type::Struct { name, fields } => {
            if fields.is_empty() {
                if let Some(sname) = name {
                    if let Some(def) = ctx.resolve_tag(sname) {
                        return def
                            .iter()
                            .map(|(_, t)| alignment_ctx(t, ctx))
                            .max()
                            .unwrap_or(1);
                    }
                }
                1
            } else {
                fields
                    .iter()
                    .map(|(_, t)| alignment_ctx(t, ctx))
                    .max()
                    .unwrap_or(1)
            }
        }
        Type::Union { name, fields } => {
            if fields.is_empty() {
                if let Some(uname) = name {
                    if let Some(def) = ctx.resolve_tag(uname) {
                        return def
                            .iter()
                            .map(|(_, t)| alignment_ctx(t, ctx))
                            .max()
                            .unwrap_or(1);
                    }
                }
                1
            } else {
                fields
                    .iter()
                    .map(|(_, t)| alignment_ctx(t, ctx))
                    .max()
                    .unwrap_or(1)
            }
        }
        Type::Enum { .. } => 4,
        Type::Typedef(name) => {
            if let Some(target) = ctx.resolve_typedef(name) {
                return alignment_ctx(target, ctx);
            }
            if let Some(def) = ctx.resolve_tag(name) {
                return def
                    .iter()
                    .map(|(_, t)| alignment_ctx(t, ctx))
                    .max()
                    .unwrap_or(1);
            }
            4
        }
        Type::Volatile(inner) | Type::Const(inner) => alignment_ctx(inner, ctx),
        Type::Bitfield(inner, _) => alignment_ctx(inner, ctx),
        Type::Bool => 1,
        Type::Complex(inner) => alignment_ctx(inner, ctx),
        Type::Imaginary(inner) => alignment_ctx(inner, ctx),
    }
}

/// ctx-aware version of `struct_size_bytes` — the only difference is
/// that nested field types are measured with `size_bytes_ctx` /
/// `alignment_ctx` instead of the tag-blind methods on `Type`.
pub fn struct_size_bytes_ctx(fields: &[(String, Type)], ctx: &dyn TypeCtx) -> u32 {
    let mut offset: u32 = 0;
    let mut bit_offset: u32 = 0;
    let mut max_align: u32 = 1;

    for (_, ty) in fields {
        if let Type::Bitfield(base, width) = ty {
            let storage_bits = size_bytes_ctx(base, ctx) * 8;
            let w = *width as u32;
            if w == 0 {
                if bit_offset > 0 {
                    offset += bit_offset.div_ceil(8);
                    bit_offset = 0;
                }
                let align = alignment_ctx(base, ctx);
                offset = align_up(offset, align);
            } else if bit_offset + w > storage_bits {
                offset += bit_offset.div_ceil(8);
                let align = alignment_ctx(base, ctx);
                offset = align_up(offset, align);
                if align > max_align {
                    max_align = align;
                }
                bit_offset = w;
            } else {
                if bit_offset == 0 {
                    let align = alignment_ctx(base, ctx);
                    offset = align_up(offset, align);
                    if align > max_align {
                        max_align = align;
                    }
                }
                bit_offset += w;
            }
        } else {
            if bit_offset > 0 {
                offset += bit_offset.div_ceil(8);
                bit_offset = 0;
            }
            let align = alignment_ctx(ty, ctx);
            offset = align_up(offset, align);
            if align > max_align {
                max_align = align;
            }
            offset += size_bytes_ctx(ty, ctx);
        }
    }
    if bit_offset > 0 {
        offset += bit_offset.div_ceil(8);
    }
    align_up(offset, max_align)
}

/// ctx-aware version of `struct_field_layout`. Uses `size_bytes_ctx` /
/// `alignment_ctx` so tag-only aggregate fields do not collapse to size
/// zero and mis-align every field that follows.
pub fn struct_field_layout_ctx(
    fields: &[(String, Type)],
    target: &str,
    ctx: &dyn TypeCtx,
) -> Option<(u32, Option<u32>, Option<u8>)> {
    let mut offset: u32 = 0;
    let mut bit_offset: u32 = 0;

    for (name, ty) in fields {
        if let Type::Bitfield(base, width) = ty {
            let storage_bits = size_bytes_ctx(base, ctx) * 8;
            let w = *width as u32;
            if w == 0 {
                if bit_offset > 0 {
                    offset += bit_offset.div_ceil(8);
                    bit_offset = 0;
                }
                let align = alignment_ctx(base, ctx);
                offset = align_up(offset, align);
                if name == target {
                    return Some((offset, Some(0), Some(*width)));
                }
            } else if bit_offset + w > storage_bits {
                offset += bit_offset.div_ceil(8);
                let align = alignment_ctx(base, ctx);
                offset = align_up(offset, align);
                if name == target {
                    return Some((offset, Some(0), Some(*width)));
                }
                bit_offset = w;
            } else {
                if bit_offset == 0 {
                    let align = alignment_ctx(base, ctx);
                    offset = align_up(offset, align);
                }
                if name == target {
                    return Some((offset, Some(bit_offset), Some(*width)));
                }
                bit_offset += w;
            }
        } else {
            if bit_offset > 0 {
                offset += bit_offset.div_ceil(8);
                bit_offset = 0;
            }
            let align = alignment_ctx(ty, ctx);
            offset = align_up(offset, align);
            if name == target {
                return Some((offset, None, None));
            }
            if name.starts_with("__anon") {
                match ty {
                    Type::Struct { fields: inner, .. } => {
                        if let Some((nested_off, bo, bw)) =
                            struct_field_layout_ctx(inner, target, ctx)
                        {
                            return Some((offset + nested_off, bo, bw));
                        }
                    }
                    Type::Union { fields: inner, .. } => {
                        if let Some((nested_off, bo, bw)) =
                            struct_field_layout_ctx(inner, target, ctx)
                        {
                            return Some((offset + nested_off, bo, bw));
                        }
                    }
                    _ => {}
                }
            }
            offset += size_bytes_ctx(ty, ctx);
        }
    }
    None
}

/// Compute the size in bytes of a struct, accounting for bitfield packing
/// and natural alignment padding (C99 6.7.2.1).
fn struct_size_bytes(fields: &[(String, Type)]) -> u32 {
    let mut offset: u32 = 0;
    let mut bit_offset: u32 = 0; // bits used within current storage unit
    let mut max_align: u32 = 1;

    for (_, ty) in fields {
        if let Type::Bitfield(base, width) = ty {
            let storage_bits = base.size_bytes() * 8;
            let w = *width as u32;
            if w == 0 {
                // Zero-width bitfield: flush to next storage unit boundary.
                if bit_offset > 0 {
                    offset += bit_offset.div_ceil(8);
                    bit_offset = 0;
                }
                let align = base.alignment();
                offset = align_up(offset, align);
            } else if bit_offset + w > storage_bits {
                // Would overflow current storage unit: start a new one.
                offset += bit_offset.div_ceil(8);
                let align = base.alignment();
                offset = align_up(offset, align);
                if align > max_align {
                    max_align = align;
                }
                bit_offset = w;
            } else {
                // Fits in current storage unit.
                if bit_offset == 0 {
                    let align = base.alignment();
                    offset = align_up(offset, align);
                    if align > max_align {
                        max_align = align;
                    }
                }
                bit_offset += w;
            }
        } else {
            // Non-bitfield: flush any pending bitfield bits.
            if bit_offset > 0 {
                offset += bit_offset.div_ceil(8);
                bit_offset = 0;
            }
            let align = ty.alignment();
            offset = align_up(offset, align);
            if align > max_align {
                max_align = align;
            }
            offset += ty.size_bytes();
        }
    }
    // Flush trailing bitfield bits.
    if bit_offset > 0 {
        offset += bit_offset.div_ceil(8);
    }
    // Round up to struct alignment.
    align_up(offset, max_align)
}

/// Compute the byte offset and optional bit-offset of a named field in a struct.
/// Returns `(byte_offset, bit_offset, bit_width)` where `bit_offset` and `bit_width`
/// are `Some` for bitfields and `None` for regular fields.
pub fn struct_field_layout(
    fields: &[(String, Type)],
    target: &str,
) -> Option<(u32, Option<u32>, Option<u8>)> {
    let mut offset: u32 = 0;
    let mut bit_offset: u32 = 0;

    for (name, ty) in fields {
        if let Type::Bitfield(base, width) = ty {
            let storage_bits = base.size_bytes() * 8;
            let w = *width as u32;
            if w == 0 {
                if bit_offset > 0 {
                    offset += bit_offset.div_ceil(8);
                    bit_offset = 0;
                }
                let align = base.alignment();
                offset = align_up(offset, align);
                if name == target {
                    return Some((offset, Some(0), Some(*width)));
                }
            } else if bit_offset + w > storage_bits {
                offset += bit_offset.div_ceil(8);
                let align = base.alignment();
                offset = align_up(offset, align);
                if name == target {
                    return Some((offset, Some(0), Some(*width)));
                }
                bit_offset = w;
            } else {
                if bit_offset == 0 {
                    let align = base.alignment();
                    offset = align_up(offset, align);
                }
                if name == target {
                    return Some((offset, Some(bit_offset), Some(*width)));
                }
                bit_offset += w;
            }
        } else {
            if bit_offset > 0 {
                offset += bit_offset.div_ceil(8);
                bit_offset = 0;
            }
            let align = ty.alignment();
            offset = align_up(offset, align);
            if name == target {
                return Some((offset, None, None));
            }
            // Search inside anonymous struct/union members.
            if name.starts_with("__anon") {
                match ty {
                    Type::Struct { fields: inner, .. } => {
                        if let Some((nested_off, bo, bw)) = struct_field_layout(inner, target) {
                            return Some((offset + nested_off, bo, bw));
                        }
                    }
                    Type::Union { fields: inner, .. } => {
                        if let Some((nested_off, bo, bw)) = struct_field_layout(inner, target) {
                            return Some((offset + nested_off, bo, bw));
                        }
                    }
                    _ => {}
                }
            }
            offset += ty.size_bytes();
        }
    }
    None
}

/// Round `val` up to the next multiple of `align`.
fn align_up(val: u32, align: u32) -> u32 {
    if align == 0 {
        return val;
    }
    val.div_ceil(align) * align
}

impl Type {
    /// Size in 32-bit words (SHARC native unit).
    pub fn size_words(&self) -> u32 {
        match self {
            Type::Void => 0,
            Type::Bool => 1, // occupies 1 word on SHARC
            Type::Char | Type::Short | Type::Int | Type::Long | Type::Float | Type::Double => 1,
            Type::LongLong | Type::ULongLong => 2,
            Type::Unsigned(inner) => inner.size_words(),
            Type::Pointer(_) => 1,
            Type::Array(elem, Some(n)) => {
                // Narrow-element arrays pack four bytes per word; see
                // the ctx-aware `size_words_ctx` for rationale.
                if elem.size_bytes() == 1 {
                    (*n as u32).div_ceil(4).max(1)
                } else {
                    elem.size_words() * (*n as u32)
                }
            }
            Type::Array(_, None) => 0,
            Type::Struct { fields, .. } => {
                // Round up bytes to words.
                struct_size_bytes(fields).div_ceil(4)
            }
            Type::Union { fields, .. } => fields
                .iter()
                .map(|(_, ty)| ty.size_words())
                .max()
                .unwrap_or(0),
            Type::Enum { .. } => 1,
            Type::Typedef(_) => 1, // resolved during sema
            Type::Volatile(inner) => inner.size_words(),
            Type::Const(inner) => inner.size_words(),
            Type::Bitfield(inner, _) => inner.size_words(),
            Type::FunctionPtr { .. } => 1, // pointer-sized
            Type::Complex(inner) => 2 * inner.size_words(),
            Type::Imaginary(inner) => inner.size_words(),
        }
    }

    /// Size in bytes.
    pub fn size_bytes(&self) -> u32 {
        match self {
            Type::Void => 0,
            Type::Bool => 1, // C99 6.2.5: _Bool is 1 byte
            Type::Char => 1,
            Type::Short => 2,
            Type::Int | Type::Long | Type::Float | Type::Double => 4,
            Type::LongLong | Type::ULongLong => 8,
            Type::Unsigned(inner) => inner.size_bytes(),
            Type::Pointer(_) => 4,
            Type::Array(elem, Some(n)) => elem.size_bytes() * (*n as u32),
            Type::Array(_, None) => 0,
            Type::Struct { fields, .. } => struct_size_bytes(fields),
            Type::Union { fields, .. } => fields
                .iter()
                .map(|(_, ty)| ty.size_bytes())
                .max()
                .unwrap_or(0),
            Type::Enum { .. } => 4,
            Type::Typedef(_) => 4,
            Type::Volatile(inner) => inner.size_bytes(),
            Type::Const(inner) => inner.size_bytes(),
            Type::Bitfield(inner, _) => inner.size_bytes(),
            Type::FunctionPtr { .. } => 4, // pointer-sized
            Type::Complex(inner) => 2 * inner.size_bytes(),
            Type::Imaginary(inner) => inner.size_bytes(),
        }
    }

    /// Whether this is an integer type.
    pub fn is_integer(&self) -> bool {
        matches!(
            self,
            Type::Bool
                | Type::Char
                | Type::Short
                | Type::Int
                | Type::Long
                | Type::LongLong
                | Type::ULongLong
                | Type::Enum { .. }
        ) || matches!(self, Type::Unsigned(inner) if inner.is_integer())
            || matches!(self, Type::Volatile(inner) if inner.is_integer())
            || matches!(self, Type::Const(inner) if inner.is_integer())
            || matches!(self, Type::Bitfield(inner, _) if inner.is_integer())
    }

    /// Whether this is a pointer type.
    pub fn is_pointer(&self) -> bool {
        matches!(self, Type::Pointer(_) | Type::FunctionPtr { .. })
            || matches!(self, Type::Volatile(inner) if inner.is_pointer())
            || matches!(self, Type::Const(inner) if inner.is_pointer())
    }

    /// Whether this is a floating-point type.
    pub fn is_float(&self) -> bool {
        matches!(self, Type::Float | Type::Double)
            || matches!(self, Type::Volatile(inner) if inner.is_float())
            || matches!(self, Type::Const(inner) if inner.is_float())
    }

    /// Whether this is a scalar type (arithmetic or pointer).
    /// C99 6.2.5p21: scalar types are arithmetic types and pointer types.
    pub fn is_scalar(&self) -> bool {
        self.is_integer()
            || self.is_float()
            || self.is_pointer()
            || self.is_complex()
            || self.is_imaginary()
    }

    /// Whether this is a complex type.
    pub fn is_complex(&self) -> bool {
        matches!(self, Type::Complex(_))
            || matches!(self, Type::Volatile(inner) if inner.is_complex())
    }

    /// Whether this is an imaginary type.
    pub fn is_imaginary(&self) -> bool {
        matches!(self, Type::Imaginary(_))
            || matches!(self, Type::Volatile(inner) if inner.is_imaginary())
    }

    /// Whether this type has the volatile qualifier.
    pub fn is_volatile(&self) -> bool {
        matches!(self, Type::Volatile(_))
    }

    /// Whether this type has the const qualifier.
    pub fn is_const(&self) -> bool {
        matches!(self, Type::Const(_))
    }

    /// Natural alignment in bytes (C99 6.7.2.1).
    pub fn alignment(&self) -> u32 {
        match self {
            Type::Void => 1,
            Type::Char => 1,
            Type::Short => 2,
            Type::Int | Type::Long | Type::Float => 4,
            Type::Double => 4,
            Type::LongLong | Type::ULongLong => 4, // SHARC: 32-bit word aligned
            Type::Unsigned(inner) => inner.alignment(),
            Type::Pointer(_) | Type::FunctionPtr { .. } => 4,
            Type::Array(elem, _) => elem.alignment(),
            Type::Struct { fields, .. } => fields
                .iter()
                .map(|(_, ty)| ty.alignment())
                .max()
                .unwrap_or(1),
            Type::Union { fields, .. } => fields
                .iter()
                .map(|(_, ty)| ty.alignment())
                .max()
                .unwrap_or(1),
            Type::Enum { .. } => 4,
            Type::Typedef(_) => 4,
            Type::Volatile(inner) | Type::Const(inner) => inner.alignment(),
            Type::Bitfield(inner, _) => inner.alignment(),
            Type::Bool => 1,
            Type::Complex(inner) => inner.alignment(),
            Type::Imaginary(inner) => inner.alignment(),
        }
    }

    /// Integer conversion rank (C99 6.3.1.1). Higher rank = wider type.
    pub fn integer_rank(&self) -> u8 {
        match self.unqualified() {
            Type::Char => 1,
            Type::Short => 2,
            Type::Int | Type::Enum { .. } => 3,
            Type::Long => 4,
            Type::LongLong => 5,
            Type::ULongLong => 5,
            Type::Unsigned(inner) => inner.integer_rank(),
            Type::Bitfield(inner, _) => inner.integer_rank(),
            _ => 3, // default to int rank
        }
    }

    /// Whether this is a 64-bit integer type (long long or unsigned long long).
    pub fn is_long_long(&self) -> bool {
        match self.unqualified() {
            Type::LongLong | Type::ULongLong => true,
            Type::Unsigned(inner) => inner.is_long_long(),
            _ => false,
        }
    }

    /// Whether this is an unsigned integer type.
    pub fn is_unsigned(&self) -> bool {
        match self.unqualified() {
            // C99 6.2.5p2: _Bool can hold values 0 and 1; it is an
            // unsigned integer type.
            Type::Unsigned(_) | Type::ULongLong | Type::Bool => true,
            Type::Bitfield(inner, _) => inner.is_unsigned(),
            _ => false,
        }
    }

    /// Usual arithmetic conversions for two integer operands (C99 6.3.1.8).
    pub fn usual_arithmetic_conversion(a: &Type, b: &Type) -> Type {
        // If either is float/double, promote (handled by caller).
        if a.is_float() || b.is_float() {
            return if matches!(a.unqualified(), Type::Double)
                || matches!(b.unqualified(), Type::Double)
            {
                Type::Double
            } else {
                Type::Float
            };
        }

        let pa = a.integer_promoted();
        let pb = b.integer_promoted();

        // If both have the same type, done.
        if pa == pb {
            return pa;
        }

        let a_unsigned = pa.is_unsigned();
        let b_unsigned = pb.is_unsigned();
        let a_rank = pa.integer_rank();
        let b_rank = pb.integer_rank();

        if a_unsigned == b_unsigned {
            // Same signedness: use the higher rank.
            if a_rank >= b_rank {
                pa
            } else {
                pb
            }
        } else {
            // Different signedness.
            let (unsigned_ty, signed_rank, unsigned_rank) = if a_unsigned {
                (&pa, b_rank, a_rank)
            } else {
                (&pb, a_rank, b_rank)
            };
            if unsigned_rank >= signed_rank {
                unsigned_ty.clone()
            } else {
                // Signed type can represent all values of unsigned type.
                // On SHARC, int (32 bits) can represent all unsigned short values.
                if a_unsigned {
                    pb
                } else {
                    pa
                }
            }
        }
    }

    /// Apply integer promotions (C99 6.3.1.1).
    /// `char` and `short` promote to `int`. `unsigned short` promotes to `int`
    /// if int can represent all values (true on SHARC where int is 32 bits).
    pub fn integer_promoted(&self) -> Type {
        match self.unqualified() {
            Type::Char | Type::Short => Type::Int,
            Type::Unsigned(inner) => match inner.as_ref() {
                Type::Char | Type::Short => Type::Int,
                _ => self.clone(),
            },
            Type::Bitfield(_, width) => {
                // Bitfields promote to int if width fits in int (always true
                // for 32-bit int).
                if (*width as u32) < 32 {
                    Type::Int
                } else {
                    self.clone()
                }
            }
            _ => self.clone(),
        }
    }

    /// Strip all qualifiers (const, volatile) from the outermost level.
    pub fn unqualified(&self) -> &Type {
        match self {
            Type::Const(inner) | Type::Volatile(inner) => inner.unqualified(),
            _ => self,
        }
    }
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn size_words_primitive() {
        assert_eq!(Type::Void.size_words(), 0);
        assert_eq!(Type::Char.size_words(), 1);
        assert_eq!(Type::Short.size_words(), 1);
        assert_eq!(Type::Int.size_words(), 1);
        assert_eq!(Type::Long.size_words(), 1);
        assert_eq!(Type::Float.size_words(), 1);
        assert_eq!(Type::Double.size_words(), 1);
    }

    #[test]
    fn size_words_pointer() {
        assert_eq!(Type::Pointer(Box::new(Type::Int)).size_words(), 1);
    }

    #[test]
    fn size_words_array() {
        let arr = Type::Array(Box::new(Type::Int), Some(10));
        assert_eq!(arr.size_words(), 10);
    }

    #[test]
    fn size_words_struct() {
        let s = Type::Struct {
            name: Some("point".into()),
            fields: vec![("x".into(), Type::Int), ("y".into(), Type::Int)],
        };
        assert_eq!(s.size_words(), 2);
    }

    #[test]
    fn size_bytes_char() {
        assert_eq!(Type::Char.size_bytes(), 1);
        assert_eq!(Type::Short.size_bytes(), 2);
        assert_eq!(Type::Int.size_bytes(), 4);
    }

    #[test]
    fn is_integer_types() {
        assert!(Type::Int.is_integer());
        assert!(Type::Char.is_integer());
        assert!(Type::Unsigned(Box::new(Type::Int)).is_integer());
        assert!(!Type::Float.is_integer());
        assert!(!Type::Pointer(Box::new(Type::Int)).is_integer());
    }

    #[test]
    fn is_pointer_types() {
        assert!(Type::Pointer(Box::new(Type::Int)).is_pointer());
        assert!(!Type::Int.is_pointer());
    }

    #[test]
    fn unsigned_size() {
        let u = Type::Unsigned(Box::new(Type::Int));
        assert_eq!(u.size_words(), 1);
        assert_eq!(u.size_bytes(), 4);
    }

    #[test]
    fn is_float_types() {
        assert!(Type::Float.is_float());
        assert!(Type::Double.is_float());
        assert!(!Type::Int.is_float());
        assert!(!Type::Char.is_float());
        assert!(!Type::Pointer(Box::new(Type::Float)).is_float());
    }

    #[test]
    fn is_volatile_types() {
        let v = Type::Volatile(Box::new(Type::Int));
        assert!(v.is_volatile());
        assert!(!Type::Int.is_volatile());
        assert!(!Type::Float.is_volatile());
    }

    #[test]
    fn is_const_types() {
        let c = Type::Const(Box::new(Type::Int));
        assert!(c.is_const());
        assert!(c.is_integer());
        assert!(!Type::Int.is_const());
        assert_eq!(c.size_bytes(), 4);
        assert_eq!(c.size_words(), 1);
    }

    #[test]
    fn const_pointer_vs_pointer_to_const() {
        // const int *p  => Pointer(Const(Int))
        let ptr_to_const = Type::Pointer(Box::new(Type::Const(Box::new(Type::Int))));
        assert!(ptr_to_const.is_pointer());
        assert!(!ptr_to_const.is_const());

        // int *const p  => Const(Pointer(Int))
        let const_ptr = Type::Const(Box::new(Type::Pointer(Box::new(Type::Int))));
        assert!(const_ptr.is_const());
        assert!(const_ptr.is_pointer());
    }

    #[test]
    fn long_long_size() {
        assert_eq!(Type::LongLong.size_bytes(), 8);
        assert_eq!(Type::LongLong.size_words(), 2);
        assert_eq!(Type::ULongLong.size_bytes(), 8);
        assert_eq!(Type::ULongLong.size_words(), 2);
        assert!(Type::LongLong.is_integer());
        assert!(Type::ULongLong.is_integer());
        assert!(!Type::LongLong.is_float());
    }

    #[test]
    fn bitfield_packing() {
        // struct { unsigned x:3; unsigned y:5; unsigned z:1; }
        // All three fit in one 4-byte storage unit = 4 bytes total.
        let s = Type::Struct {
            name: None,
            fields: vec![
                (
                    "x".into(),
                    Type::Bitfield(Box::new(Type::Unsigned(Box::new(Type::Int))), 3),
                ),
                (
                    "y".into(),
                    Type::Bitfield(Box::new(Type::Unsigned(Box::new(Type::Int))), 5),
                ),
                (
                    "z".into(),
                    Type::Bitfield(Box::new(Type::Unsigned(Box::new(Type::Int))), 1),
                ),
            ],
        };
        assert_eq!(s.size_bytes(), 4);
        assert_eq!(s.size_words(), 1);
    }

    #[test]
    fn bitfield_overflow_to_next_unit() {
        // struct { unsigned a:30; unsigned b:10; }
        // a takes 30 bits, b needs 10 more but 30+10=40 > 32, so new unit.
        // Total: 4 + 4 = 8 bytes.
        let s = Type::Struct {
            name: None,
            fields: vec![
                (
                    "a".into(),
                    Type::Bitfield(Box::new(Type::Unsigned(Box::new(Type::Int))), 30),
                ),
                (
                    "b".into(),
                    Type::Bitfield(Box::new(Type::Unsigned(Box::new(Type::Int))), 10),
                ),
            ],
        };
        assert_eq!(s.size_bytes(), 8);
    }

    #[test]
    fn bitfield_field_layout() {
        let fields = vec![
            (
                "x".into(),
                Type::Bitfield(Box::new(Type::Unsigned(Box::new(Type::Int))), 3),
            ),
            (
                "y".into(),
                Type::Bitfield(Box::new(Type::Unsigned(Box::new(Type::Int))), 5),
            ),
        ];
        let (off, bit, width) = struct_field_layout(&fields, "x").unwrap();
        assert_eq!(off, 0);
        assert_eq!(bit, Some(0));
        assert_eq!(width, Some(3));

        let (off, bit, width) = struct_field_layout(&fields, "y").unwrap();
        assert_eq!(off, 0);
        assert_eq!(bit, Some(3));
        assert_eq!(width, Some(5));
    }

    #[test]
    fn struct_padding() {
        // struct { char a; int b; } should have 3 bytes padding after a.
        // Total: 1 (a) + 3 (pad) + 4 (b) = 8 bytes.
        let fields = vec![("a".into(), Type::Char), ("b".into(), Type::Int)];
        let s = Type::Struct {
            name: None,
            fields: fields.clone(),
        };
        assert_eq!(s.size_bytes(), 8);

        // offsetof(s, a) = 0, offsetof(s, b) = 4
        let (off_a, _, _) = struct_field_layout(&fields, "a").unwrap();
        assert_eq!(off_a, 0);
        let (off_b, _, _) = struct_field_layout(&fields, "b").unwrap();
        assert_eq!(off_b, 4);
    }

    #[test]
    fn struct_padding_trailing() {
        // struct { int x; char y; } should be 8 bytes (padded to int alignment).
        let s = Type::Struct {
            name: None,
            fields: vec![("x".into(), Type::Int), ("y".into(), Type::Char)],
        };
        assert_eq!(s.size_bytes(), 8);
    }

    #[test]
    fn struct_no_padding_needed() {
        // struct { int x; int y; } should be 8 bytes (no padding).
        let s = Type::Struct {
            name: None,
            fields: vec![("x".into(), Type::Int), ("y".into(), Type::Int)],
        };
        assert_eq!(s.size_bytes(), 8);
    }

    #[test]
    fn struct_short_alignment() {
        // struct { char a; short b; char c; }
        // a at 0, pad 1, b at 2, c at 4, pad 1 = 6 bytes (aligned to 2).
        let s = Type::Struct {
            name: None,
            fields: vec![
                ("a".into(), Type::Char),
                ("b".into(), Type::Short),
                ("c".into(), Type::Char),
            ],
        };
        assert_eq!(s.size_bytes(), 6);
    }

    #[test]
    fn usual_arithmetic_conversions() {
        // int + long -> long
        let r = Type::usual_arithmetic_conversion(&Type::Int, &Type::Long);
        assert_eq!(r, Type::Long);

        // int + unsigned int -> unsigned int
        let uint = Type::Unsigned(Box::new(Type::Int));
        let r = Type::usual_arithmetic_conversion(&Type::Int, &uint);
        assert_eq!(r, uint);

        // long + unsigned int -> depends on rank: unsigned int has rank 3,
        // long has rank 4. Since signed rank > unsigned rank, result is long.
        let r = Type::usual_arithmetic_conversion(&Type::Long, &uint);
        assert_eq!(r, Type::Long);

        // int + long long -> long long
        let r = Type::usual_arithmetic_conversion(&Type::Int, &Type::LongLong);
        assert_eq!(r, Type::LongLong);

        // float + int -> float
        let r = Type::usual_arithmetic_conversion(&Type::Float, &Type::Int);
        assert_eq!(r, Type::Float);

        // float + double -> double
        let r = Type::usual_arithmetic_conversion(&Type::Float, &Type::Double);
        assert_eq!(r, Type::Double);

        // unsigned long long + int -> unsigned long long
        let r = Type::usual_arithmetic_conversion(&Type::ULongLong, &Type::Int);
        assert_eq!(r, Type::ULongLong);
    }

    #[test]
    fn integer_promotion() {
        assert_eq!(Type::Char.integer_promoted(), Type::Int);
        assert_eq!(Type::Short.integer_promoted(), Type::Int);
        assert_eq!(Type::Int.integer_promoted(), Type::Int);
        assert_eq!(Type::Long.integer_promoted(), Type::Long);
        assert_eq!(Type::LongLong.integer_promoted(), Type::LongLong);
        // unsigned short -> int (int can hold all unsigned short values)
        assert_eq!(
            Type::Unsigned(Box::new(Type::Short)).integer_promoted(),
            Type::Int,
        );
        // unsigned int stays unsigned int
        assert_eq!(
            Type::Unsigned(Box::new(Type::Int)).integer_promoted(),
            Type::Unsigned(Box::new(Type::Int)),
        );
    }

    #[test]
    fn alignment_types() {
        assert_eq!(Type::Char.alignment(), 1);
        assert_eq!(Type::Short.alignment(), 2);
        assert_eq!(Type::Int.alignment(), 4);
        assert_eq!(Type::Pointer(Box::new(Type::Char)).alignment(), 4);
        assert_eq!(Type::LongLong.alignment(), 4);
    }

    #[test]
    fn unqualified_strips_qualifiers() {
        let cv = Type::Const(Box::new(Type::Volatile(Box::new(Type::Int))));
        assert_eq!(*cv.unqualified(), Type::Int);
        assert_eq!(*Type::Int.unqualified(), Type::Int);
    }

    #[test]
    fn bool_type() {
        assert!(Type::Bool.is_integer());
        assert_eq!(Type::Bool.size_bytes(), 1);
        assert_eq!(Type::Bool.size_words(), 1);
        assert!(Type::Bool.is_scalar());
        assert!(!Type::Bool.is_float());
        assert!(!Type::Bool.is_pointer());
    }

    #[test]
    fn complex_type() {
        let fc = Type::Complex(Box::new(Type::Float));
        assert_eq!(fc.size_bytes(), 8);
        assert_eq!(fc.size_words(), 2);
        assert!(fc.is_complex());
        assert!(fc.is_scalar());
        assert!(!fc.is_integer());
        assert!(!fc.is_float());

        let dc = Type::Complex(Box::new(Type::Double));
        assert_eq!(dc.size_bytes(), 8);
        assert_eq!(dc.size_words(), 2);
    }

    #[test]
    fn imaginary_type() {
        let fi = Type::Imaginary(Box::new(Type::Float));
        assert_eq!(fi.size_bytes(), 4);
        assert_eq!(fi.size_words(), 1);
        assert!(fi.is_imaginary());
        assert!(fi.is_scalar());
        assert!(!fi.is_integer());
        assert!(!fi.is_float());
        assert!(!fi.is_complex());
    }
}
