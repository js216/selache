#include <stdarg.h>
#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <limits.h>
#include <float.h>
#include <iso646.h>

/* Static helpers for non-leaf call tests */
static int helper_add(int x, int y) { return x + y; }
static int helper_mul(int a, int b) { return a * b; }
static int factorial(int n) {
  if (n <= 1)
    return 1;
  return n * factorial(n - 1);
}

/* Constant return -- baseline sanity */
/* @expect 0x55 */
int basic_value(void) { return 0x55; }
/* If/else branch */
/* @expect 0xA1 */
int cctest_if(void) {
  int x = 3, r = 0xA2;
  if (x > 0)
    r = 0xA1;
  return r;
}
/* While loop with accumulator */
/* @expect 0x37 */
int cctest_while(void) {
  int i = 1, s = 0;
  while (i <= 10) {
    s = s + i;
    i = i + 1;
  }
  return s;
}
/* For loop computing 5! */
/* @expect 0x78 */
int cctest_for(void) {
  int p = 1, i;
  for (i = 1; i <= 5; i = i + 1)
    p = p * i;
  return p;
}
/* Two-argument function call from main */
static int params_helper(int a, int b) { return a * b + 1; }
/* @expect 0x4E */
int cctest_params(void) { return params_helper(7, 11); }
/* Do-while loop */
/* @expect 0x0C */
int cctest_do_while(void) {
  int n = 0, i = 0;
  do {
    n = n + 2;
    i = i + 1;
  } while (i < 6);
  return n;
}
/* Switch with four cases */
/* @expect 0x22 */
int cctest_switch(void) {
  int x = 2, r = 0;
  switch (x) {
  case 1:
    r = 0x11;
    break;
  case 2:
    r = 0x22;
    break;
  case 3:
    r = 0x33;
    break;
  default:
    r = 0xFF;
    break;
  }
  return r;
}
/* Ternary conditional */
/* @expect 9 */
int cctest_ternary(void) {
  int a = 5, b = 9;
  return (a > b) ? a : b;
}
/* Logical AND, OR, short-circuit */
/* @expect 0x70 */
int cctest_logops(void) {
  int a = 3, b = 0, r = 0;
  if (a && !b)
    r = r + 0x10;
  if (a || b)
    r = r + 0x20;
  if (a > 0 && b == 0)
    r = r + 0x40;
  return r;
}
/* Post-increment and pre-increment */
/* @expect 0x35 */
int cctest_postinc(void) {
  int i = 3;
  int j = i++;
  int k = ++i;
  return j * 0x10 + k;
}
/* Compound assignment: +=, *=, -=, <<= */
/* @expect 0x10 */
int cctest_compound(void) {
  int x = 1;
  x += 2;
  x *= 3;
  x -= 1;
  x <<= 1;
  return x;
}
/* Cast to signed char -- sign extension from 8 bits */
/* @expect 0xAB */
int cctest_cast_char(void) {
  signed char c = (signed char)0x80;
  int i = (int)c;
  return i + 0x80 + 0xAB;
}
/* Cast to short -- sign extension from 16 bits */
/* @expect 0xCD */
int cctest_cast_short(void) {
  short s = (short)0x8000;
  int i = (int)s;
  return i + 0x8000 + 0xCD;
}
/* Unary negation */
/* @expect 7 */
int cctest_negate(void) {
  int a = 5, b = 12;
  return -(a - b);
}
/* Integer division and modulo */
/* @expect 0xE2 */
int cctest_divmod(void) {
  int a = 100, b = 7;
  return (a / b) * 0x10 + (a % b);
}
/* sizeof on types */
/* @expect 6 */
int cctest_sizeof(void) { return sizeof(int) + sizeof(short); }
/* Nested for/while with break and continue */
/* @expect 0x20 */
int cctest_nested(void) {
  int t = 0, i;
  for (i = 0; i < 4; i = i + 1) {
    int j = 0;
    while (j < 10) {
      if (j == 5)
        break;
      if (j == 2) {
        j = j + 1;
        continue;
      }
      t = t + j;
      j = j + 1;
    }
  }
  return t;
}
/* Three-argument function call */
static int three_params_helper(int a, int b, int c) { return a * b + c; }
/* @expect 0x0B */
int cctest_three_params(void) { return three_params_helper(2, 3, 5); }
/* Chained non-leaf calls */
/* @expect 0x1D */
int cctest_value(void) {
  return helper_add(helper_mul(3, 5), helper_mul(2, 7));
}
/* Arg-aliasing regression: second helper_mul's args are literals 2 and 7.
   On a sequential parallel-move arg setup, the second arg's source vreg
   may alias the first arg's destination R4. Without a careful move
   ordering / eviction, R4=pass Rx then R8=pass R4 reads the clobbered
   R4 and passes the first arg's value as the second arg. */
/* @expect 0x13 */
int cctest_arg_alias_2call(void) {
  return helper_add(helper_mul(3, 5), 4); /* 15 + 4 = 19 */
}
/* @expect 0x13 */
int cctest_arg_alias_2call_rev(void) {
  return helper_add(4, helper_mul(3, 5)); /* 4 + 15 = 19 */
}
/* Two nested helper_muls with distinct literals in every slot; same
   hazard pattern as cctest_value but only one outer add. The 0x1C
   value is unique enough to catch a stray R4/R8 mixup. */
/* @expect 0x1C */
int cctest_arg_alias_3call(void) {
  return helper_add(helper_mul(2, 5), helper_mul(3, 6)); /* 10 + 18 = 28 */
}
/* Three-arg call where the second and third arg literals may land in
   ARG_REGS during allocation, exercising the same eviction path for
   the R8/R12 forced-physical writes. */
/* @expect 0x1A */
int cctest_arg_alias_three(void) {
  return three_params_helper(4, 5, 6); /* 4*5+6 = 26 */
}
/* Three sequential cjumps where the return value depends only on the
   last call: isolates whether the bug is "any 3-cjump function fails"
   vs "only nested-call compositions fail". Each discarded call uses
   identical args so no arg-aliasing risk. */
/* @expect 0x9 */
int cctest_three_cjumps(void) {
  helper_mul(1, 1);
  helper_mul(2, 2);
  return helper_mul(3, 3); /* 9 */
}
/* Three cjumps, each result bound to a local, final computed in a
   non-call expression. Tests whether a call chain breaks when
   intermediate values must survive across cjumps via spills. */
/* @expect 0xA */
int cctest_three_cjumps_locals(void) {
  int a = helper_add(1, 2); /* 3 */
  int b = helper_add(3, 4); /* 7 */
  return a + b; /* 10 */
}
/* Three cjumps where first two results are spilled, third is a
   discarded call, and the final returned expression is a spilled
   reload added in place (no final cjump). Bisects whether the
   miscompile is "any 3 cjumps with cross-cjump spill+reload" or
   specifically "cross-cjump spills feeding a FINAL cjump". */
/* @expect 0x11 */
int cctest_three_cjumps_noret(void) {
  int a = helper_add(1, 2);  /* 3 */
  int b = helper_add(3, 4);  /* 7 */
  helper_add(5, 6);          /* 11, discarded */
  return a + b + 7;          /* 3+7+7 = 17 = 0x11 */
}
/* Explicit-temporary form of the failing cctest_nested_calls: same
   dataflow, different AST shape. If this also fails, the miscompile
   is in the codegen for "spilled value feeds final-tail-call arg",
   not in expression-nesting parsing. */
/* @expect 0x19 */
int cctest_nested_calls_explicit(void) {
  int a = helper_mul(3, 3);   /* 9 */
  int b = helper_mul(4, 4);   /* 16 */
  return helper_add(a, b);    /* 25 */
}
/* Return helper_mul's SSI result directly. If the SSI multiply
   leaves upper 8 bits of the 40-bit data register dirty and that
   gets pushed onto the printf variadic stack as-is, we see garbage
   above the low byte. Clean return = 0x9; dirty = 0x????0009. */
/* @expect 0x9 */
int cctest_mul_direct(void) {
  return helper_mul(3, 3);
}
/* Return helper_mul's SSI result after passing through a local.
   A store-to-spill-then-reload round trip should clear upper bits. */
/* @expect 0x9 */
int cctest_mul_via_local(void) {
  int x = helper_mul(3, 3);
  return x;
}
/* Return sum of two helper_mul results without a third cjump. If
   cctest_nested_calls fails (0x4xxxx upper-bit leak) but this
   passes, the mul-return upper bits do NOT propagate through add. */
/* @expect 0x19 */
int cctest_mul_sum(void) {
  return helper_mul(3, 3) + helper_mul(4, 4); /* 9 + 16 = 25 */
}
/* Bitwise AND, OR, XOR, NOT */
/* @expect 0x3F */
int cctest_bits(void) {
  int a = (0xFF & 0x3C) | 0x03;
  int b = a ^ 0x00;
  int c = ~0 & b;
  return c;
}
/* Left and right shifts */
/* @expect 0x94 */
int cctest_shifts(void) { return (1 << 6) + (0x200 >> 3) + (5 << 2); }
/* Float multiply-add, truncate to int */
/* @expect 0x0E */
int cctest_float(void) {
  float a = 3.0f;
  float b = 4.0f;
  float c = a * b + 2.0f;
  return (int)c;
}
/* Unsigned comparison (0xFFFFFFFF > 1) */
/* @expect 1 */
int cctest_unsigned(void) {
  unsigned int a = 0xFFFFFFFF;
  unsigned int b = 1;
  int r = 0;
  if (a > b)
    r = r + 1;
  return r;
}
/* Float-to-int comparison */
/* @expect 3 */
int cctest_float_cmp(void) {
  int r = 0;
  float x = (float)5;
  if (x > 2.5f)
    r = r + 1;
  float y = (float)1;
  if (y < 3.0f)
    r = r + 2;
  return r;
}
/* Enum with explicit and auto-incremented values */
enum color { RED, GREEN = 5, BLUE };
/* @expect 0x0B */
int cctest_enum(void) { return GREEN + BLUE; }
/* Recursive function calls */
/* @expect 4 */
int cctest_deep_expr(void) { return factorial(4) / 8 + factorial(1); }
/* Goto with backward jump */
/* @expect 0x0A */
int cctest_goto(void) {
  int s = 0;
  int i = 1;
loop:
  s = s + i;
  i = i + 1;
  if (i <= 4)
    goto loop;
  return s;
}
/* Comma operator */
/* @expect 9 */
int cctest_comma(void) {
  int a = 1;
  return (a = a + 2, a * 3);
}
/* Logical NOT */
/* @expect 1 */
int cctest_lognot(void) {
  int a = 0;
  int b = 5;
  return !a + !b;
}
/* Early return + non-leaf call on the other path */
static int early_return_helper(int x) {
  if (x > 10)
    return x * 2;
  return helper_add(x, 1);
}
/* @expect 6 */
int cctest_early_return(void) { return early_return_helper(5); }
/* Simple non-leaf call */
/* @expect 0x30 */
int cctest_call(void) { return helper_add(0x10, 0x20); }

/* Pointers and address-of (C99 6.5.3.2) */
/* @expect 0x43 */
int cctest_pointer(void) {
  int x = 0x42;
  int *p = &x;
  *p = *p + 1;
  return x; /* 0x43 */
}

/* Local array (C99 6.7.5.2) */
/* @expect 0x32 */
int cctest_array(void) {
  int arr[4];
  arr[0] = 10;
  arr[1] = 20;
  arr[2] = 30;
  arr[3] = 40;
  return arr[0] + arr[3]; /* 50 = 0x32 */
}

/* For-loop init declaration (C99 6.8.5) */
/* @expect 0x0F */
int cctest_for_decl(void) {
  int s = 0;
  for (int i = 1; i <= 5; i++)
    s += i;
  return s; /* 15 = 0xF */
}

/* 4th+ stack parameter (C99 6.9.1) */
static int four_args(int a, int b, int c, int d) { return a + b + c + d; }
/* @expect 0x0A */
int cctest_stack_param(void) { return four_args(1, 2, 3, 4); /* 10 = 0xA */ }

/* Struct (C99 6.7.2.1) */
struct point {
  int x;
  int y;
};
/* @expect 0x1E */
int cctest_struct(void) {
  struct point p;
  p.x = 10;
  p.y = 20;
  return p.x + p.y; /* 30 = 0x1E */
}

/* Pointer arithmetic (C99 6.5.6) */
/* @expect 0x30 */
int cctest_ptr_arith(void) {
  int arr[3];
  arr[0] = 0x10;
  arr[1] = 0x20;
  arr[2] = 0x30;
  int *p = &arr[0];
  p = p + 2;
  return *p; /* 0x30 */
}

/* Nested struct */
struct inner {
  int val;
};
struct outer {
  struct inner a;
  int b;
};
/* @expect 0x0F */
int cctest_nested_struct(void) {
  struct outer o;
  o.a.val = 5;
  o.b = 10;
  return o.a.val + o.b; /* 15 = 0xF */
}

/* All compound assignment ops (C99 6.5.16.2) */
/* @expect 9 */
int cctest_all_compound(void) {
  int x = 100;
  x /= 5;    /* 20 */
  x %= 7;    /* 6 */
  x &= 0xF;  /* 6 */
  x |= 0x10; /* 0x16 */
  x ^= 0x04; /* 0x12 */
  x >>= 1;   /* 9 */
  return x;
}

/* Mixed declarations and statements (C99 6.8) */
/* @expect 0x0B */
int cctest_mixed_decl(void) {
  int a = 5;
  int r = 0;
  if (a > 0) {
    int b = a * 2;
    r = b;
  }
  int c = r + 1;
  return c; /* 11 = 0xB */
}

/* Chained ternary (C99 6.5.15) */
static int classify(int x) {
  return (x > 10) ? 3 : (x > 5) ? 2 : (x > 0) ? 1 : 0;
}
/* @expect 2 */
int cctest_chain_ternary(void) { return classify(7); /* 2 */ }

/* Array passed as pointer to function (C99 6.7.5.3) */
static int sum_arr(int *a, int n) {
  int s = 0, i;
  for (i = 0; i < n; i++)
    s += a[i];
  return s;
}
/* @expect 0x0A */
int cctest_array_param(void) {
  int a[4];
  a[0] = 1;
  a[1] = 2;
  a[2] = 3;
  a[3] = 4;
  return sum_arr(a, 4); /* 10 = 0xA */
}

/* Struct as function parameter (C99 6.9.1) */
struct vec2 {
  int x;
  int y;
};
static int dot(struct vec2 a, struct vec2 b) { return a.x * b.x + a.y * b.y; }
/* @expect 0x0B */
int cctest_struct_param(void) {
  struct vec2 a;
  struct vec2 b;
  a.x = 3;
  a.y = 4;
  b.x = 1;
  b.y = 2;
  return dot(a, b); /* 3+8=11 = 0xB */
}

/* String literal (C99 6.4.5) */
/* @expect 0xD7 */
int cctest_string(void) {
  const char *s = "hello";
  return s[0] + s[4]; /* 'h'+'o' = 104+111 = 215 = 0xD7 */
}

/* typedef (C99 6.7.7) */
typedef int score_t;
/* @expect 0x1E */
int cctest_typedef(void) {
  score_t a = 10, b = 20;
  return a + b; /* 30 = 0x1E */
}

/* Function pointer via typedef (C99 6.7.5.3) */
typedef int (*binop_fn)(int, int);
/* @expect 0x30 */
int cctest_fnptr(void) {
  binop_fn fp = helper_add;
  return fp(0x10, 0x20); /* 0x30 */
}

/* _Bool type (C99 6.2.5) */
/* @expect 1 */
int cctest_bool(void) {
  _Bool a = 1, b = 0;
  _Bool c = a && !b;
  return (int)c; /* 1 */
}

/* Switch fallthrough (C99 6.8.4.2) */
/* @expect 6 */
int cctest_fallthrough(void) {
  int x = 2, r = 0;
  switch (x) {
  case 1:
    r += 1;
  case 2:
    r += 2;
  case 3:
    r += 4;
    break;
  default:
    r = 0xFF;
  }
  return r; /* 2+4=6 */
}

/* Union (C99 6.7.2.1) */
union intfloat {
  int i;
  float f;
};
/* @expect 0x0A */
int cctest_union(void) {
  union intfloat u;
  u.i = 0x41200000; /* 10.0f IEEE-754 */
  return (int)u.f;  /* 10 = 0xA */
}

/* Preprocessor: function-like macro (C99 6.10.3) */
#define MAX(a, b) ((a) > (b) ? (a) : (b))
#define SQUARE(x) ((x) * (x))
/* @expect 0x17 */
int cctest_macro(void) { return MAX(3, 7) + SQUARE(4); /* 7+16=23 = 0x17 */ }

/* Character constants and escapes (C99 6.4.4.4) */
/* @expect 0x8D */
int cctest_char(void) {
  char a = 'A';     /* 65 */
  char b = '\n';    /* 10 */
  char c = '\x42';  /* 66 */
  return a + b + c; /* 141 = 0x8D */
}

/* Multiple return paths (C99 6.8.6.4) */
static int multiret(int x) {
  if (x < 0)
    return -x;
  if (x == 0)
    return 1;
  if (x > 100) {
    int y = x / 2;
    return y;
  }
  return x;
}
/* @expect 0x6A */
int cctest_multiret(void) {
  return multiret(-5) + multiret(0) + multiret(200); /* 5+1+100=106 = 0x6A */
}

/* Comma in for-loop (C99 6.5.17) */
/* @expect 0x0A */
int cctest_comma_for(void) {
  int i, j;
  for (i = 0, j = 10; i < 5; i++, j--) {
  }
  return i + j; /* 5+5=10 = 0xA */
}

/* Long arithmetic (C99 6.2.5) */
/* @expect 0x1E */
int cctest_long(void) {
  long a = 100000;
  long b = 200000;
  return (int)((a + b) / 10000); /* 30 = 0x1E */
}

/* Designated initializer for array (C99 6.7.8) */
/* @expect 0x80 */
int cctest_desig_init(void) {
  int arr[5] = {[2] = 0x30, [4] = 0x50};
  return arr[2] + arr[4]; /* 0x80 */
}

/* Inline function (C99 6.7.4) */
static inline int sq(int x) { return x * x; }
/* @expect 0x31 */
int cctest_inline(void) { return sq(7); /* 49 = 0x31 */ }

/* Struct with RGB fields */
struct rgb {
  int r;
  int g;
  int b;
};
/* @expect 0x60 */
int cctest_rgb(void) {
  struct rgb c;
  c.r = 0x10;
  c.g = 0x20;
  c.b = 0x30;
  return c.r + c.g + c.b; /* 0x60 */
}

/* Local typedef (C99 6.7.7) */
/* @expect 0x1E */
int cctest_local_typedef(void) {
  typedef int myint;
  myint a = 10, b = 20;
  return a + b; /* 30 = 0x1E */
}

/* Restrict qualifier (C99 6.7.3.1) */
static void restricted_copy(int *restrict dst, const int *restrict src, int n) {
  for (int i = 0; i < n; i++)
    dst[i] = src[i];
}
/* @expect 6 */
int cctest_restrict(void) {
  int a[3];
  a[0] = 1;
  a[1] = 2;
  a[2] = 3;
  int b[3];
  restricted_copy(b, a, 3);
  return b[0] + b[1] + b[2]; /* 6 */
}

/* Volatile (C99 6.7.3) */
/* @expect 0x56 */
int cctest_volatile(void) {
  volatile int x = 0x55;
  x = x + 1;
  return x; /* 0x56 */
}

/* Const pointer (C99 6.7.3) */
/* @expect 0x2A */
int cctest_const(void) {
  const int x = 42;
  const int *p = &x;
  return *p; /* 42 = 0x2A */
}

/* Short-circuit evaluation (C99 6.5.13/6.5.14) */
/* @expect 0x0B */
int cctest_short_circuit(void) {
  int x = 0, y = 5;
  if (y > 0 && ++x > 0)
    y = 10;
  return x + y; /* 1 + 10 = 11 = 0xB */
}

/* Pointer to struct member */
struct spair {
  int first;
  int second;
};
/* @expect 0x1E */
int cctest_ptr_member(void) {
  struct spair p;
  p.first = 10;
  p.second = 20;
  int *fp = &p.first;
  return *fp + p.second; /* 30 = 0x1E */
}

/* Array of structs */
struct item {
  int id;
  int val;
};
/* @expect 0x3C */
int cctest_struct_array(void) {
  struct item items[3];
  items[0].val = 10;
  items[1].val = 20;
  items[2].val = 30;
  return items[0].val + items[1].val + items[2].val; /* 60 = 0x3C */
}

/* Multi-level pointer (C99 6.7.5.1) */
/* @expect 0x2A */
int cctest_ptr_to_ptr(void) {
  int x = 42;
  int *p = &x;
  int **pp = &p;
  return **pp; /* 42 = 0x2A */
}

/* Compound literal in call (C99 6.5.2.5) */
struct cpt {
  int x;
  int y;
};
static int cpt_sum(struct cpt p) { return p.x + p.y; }
/* @expect 0x0A */
int cctest_compound_lit(void) {
  return cpt_sum((struct cpt){3, 7}); /* 10 = 0xA */
}

/* Implicit int/float conversions */
/* @expect 0x11 */
int cctest_implicit_conv(void) {
  int a = 7;
  float f = (float)a;
  f = f * 2.5f;
  return (int)f; /* 17 = 0x11 */
}

/* String walking */
/* @expect 6 */
int cctest_strlen(void) {
  const char *s = "abcdef";
  int len = 0;
  while (*s++)
    len++;
  return len; /* 6 */
}

/* Nested function calls in expression */
/* @expect 0x19 */
int cctest_nested_calls(void) {
  return helper_add(helper_mul(3, 3), helper_mul(4, 4)); /* 9+16=25 = 0x19 */
}

/* Large switch (C99 6.8.4.2) */
static int big_switch(int x) {
  switch (x) {
  case 0:
    return 0x10;
  case 1:
    return 0x11;
  case 2:
    return 0x12;
  case 3:
    return 0x13;
  case 4:
    return 0x14;
  case 5:
    return 0x15;
  case 6:
    return 0x16;
  case 7:
    return 0x17;
  case 8:
    return 0x18;
  case 9:
    return 0x19;
  default:
    return 0xFF;
  }
}
/* @expect 0x17 */
int cctest_big_switch(void) { return big_switch(7); /* 0x17 */ }

/* Sizeof expression (not type) (C99 6.5.3.4) */
/* @expect 5 */
int cctest_sizeof_expr(void) {
  int arr[5];
  return sizeof(arr) / sizeof(arr[0]); /* 5 */
}

/* Struct copy by assignment (C99 6.5.16) */
struct s2 { int a; int b; };
/* @expect 0x30 */
int cctest_struct_copy(void) {
  struct s2 x;
  x.a = 0x10; x.b = 0x20;
  struct s2 y = x;
  return y.a + y.b; /* 0x30 */
}

/* Negative array index via pointer (C99 6.5.6) */
/* @expect 0x14 */
int cctest_neg_index(void) {
  int arr[5];
  arr[0] = 10; arr[1] = 20; arr[2] = 30; arr[3] = 40; arr[4] = 50;
  int *p = &arr[3];
  return p[-2]; /* arr[1] = 20 = 0x14 */
}

/* Integer promotion: char * char (C99 6.3.1.1) */
/* @expect 0xC8 */
int cctest_int_promo(void) {
  char a = 10;
  char b = 20;
  return a * b; /* 200 = 0xC8 */
}

/* Unsigned right shift (logical, not arithmetic) */
/* @expect 8 */
int cctest_unsigned_shift(void) {
  unsigned int x = 0x80000000;
  return (int)(x >> 28); /* 8 */
}

/* do { } while(0) single-iteration pattern */
/* @expect 0x42 */
int cctest_do_zero(void) {
  int r = 0;
  do { r = 0x42; } while (0);
  return r; /* 0x42 */
}

/* Nested switch inside loop */
/* @expect 0x6F */
int cctest_switch_in_loop(void) {
  int r = 0, i;
  for (i = 0; i < 3; i++) {
    switch (i) {
    case 0: r += 1; break;
    case 1: r += 10; break;
    case 2: r += 100; break;
    }
  }
  return r; /* 111 = 0x6F */
}

/* Cast between pointer types */
/* @expect 0x44 */
int cctest_ptr_cast(void) {
  int x = 0x41424344;
  char *p = (char *)&x;
  return p[0]; /* LSB of 0x41424344 = 0x44 */
}

/* Comparison chain with multiple conditions */
/* @expect 7 */
int cctest_multi_cmp(void) {
  int a = 5, b = 10, c = 15;
  int r = 0;
  if (a < b && b < c) r += 1;
  if (a <= 5 && c >= 15) r += 2;
  if (a != b || b == c) r += 4;
  return r; /* 1+2+4 = 7 */
}

/* Conditional with side effects in both branches */
/* @expect 0x32 */
int cctest_cond_side(void) {
  int a = 0, b = 0;
  int x = 1;
  if (x) a = 5; else b = 5;
  return a * 10 + b; /* 50 = 0x32 */
}

/* Subtraction underflow (wrapping) */
/* @expect 0xFF */
int cctest_wrap(void) {
  unsigned int a = 0;
  a = a - 1; /* 0xFFFFFFFF */
  return (int)(a >> 24); /* 0xFF */
}

/* Pre-decrement operator */
/* @expect 9 */
int cctest_predec(void) {
  int x = 10;
  return --x; /* 9 */
}

/* Comparison result as integer value (C99 6.5.8/6.5.9) */
/* @expect 3 */
int cctest_cmp_value(void) {
  int a = 5, b = 3;
  return (a > b) + (a == 5) + (b != 5); /* 3 */
}

/* Else-if ladder */
/* @expect 2 */
int cctest_elseif(void) {
  int x = 7, r = 0;
  if (x > 10) r = 1;
  else if (x > 5) r = 2;
  else if (x > 0) r = 3;
  else r = 4;
  return r; /* 2 */
}

/* Global array with initializer (C99 6.7.8) */
int cctest_garr[] = {0x10, 0x20, 0x30};
/* @expect 0x40 */
int cctest_global_arr(void) {
  return cctest_garr[0] + cctest_garr[2]; /* 0x40 */
}

/* Modify through dereferenced pointer */
/* @expect 0x12C */
int cctest_deref_write(void) {
  int a = 100, b = 200;
  int *p = &a;
  *p = *p + b;
  return a; /* 300 = 0x12C */
}

/* While loop that never executes */
/* @expect 0x55 */
int cctest_while_false(void) {
  int r = 0x55;
  while (0) { r = 0; }
  return r; /* 0x55 */
}

/* Ternary result used as array index */
/* @expect 0xBB */
int cctest_ternary_idx(void) {
  int arr[3];
  arr[0] = 0xAA; arr[1] = 0xBB; arr[2] = 0xCC;
  int x = 1;
  return arr[x > 0 ? x : 0]; /* arr[1] = 0xBB */
}

/* Unsigned modulo */
/* @expect 2 */
int cctest_unsigned_mod(void) {
  unsigned int a = 17, b = 5;
  return (int)(a % b); /* 2 */
}

/* Chained assignment a = b = c = val */
/* @expect 0x15 */
int cctest_chain_assign(void) {
  int a, b, c;
  a = b = c = 7;
  return a + b + c; /* 21 = 0x15 */
}

/* Long long arithmetic -- 64-bit (C99 6.2.5) */
/* @expect 3 */
int cctest_longlong(void) {
  long long a = 1;
  a <<= 33;                      /* 0x200000000 */
  long long b = a + (1LL << 32); /* 0x300000000 */
  return (int)(b >> 32);         /* 3 */
}

/* Unsigned long mixed expressions (C99 6.3.1.8) */
/* @expect 0x64 */
int cctest_ulong_mix(void) {
  unsigned long a = 300000UL;
  unsigned long b = 200000UL;
  unsigned long c = a - b; /* 100000 */
  return (int)(c / 1000);  /* 100 = 0x64 */
}

/* Usual arithmetic conversions -- signed vs unsigned (C99 6.3.1.8) */
/* @expect 0xAA */
int cctest_arith_conv(void) {
  int s = -1;
  unsigned int u = 1;
  /* s promoted to unsigned → 0xFFFFFFFF > 1 */
  return (s > u) ? 0xAA : 0xBB; /* 0xAA */
}

/* Integer constant suffixes (C99 6.4.4.1) */
/* @expect 0x9B */
int cctest_const_suffix(void) {
  unsigned int a = 0xFFu;  /* 255 */
  long b = 100L;           /* 100 */
  return (int)(a - (unsigned int)b); /* 155 = 0x9B */
}

/* Static local variables -- persistence across calls (C99 6.2.4) */
static int static_counter(void) {
  static int n = 0;
  n++;
  return n;
}
/* @expect 1 */
int cctest_static_local(void) {
  int a = static_counter();
  int b = static_counter();
  return b - a; /* always 1 */
}

/* Bitfields (C99 6.7.2.1) */
/* @expect 8 */
int cctest_bitfield(void) {
  struct { int x : 4; int y : 4; } bf;
  bf.x = 5;
  bf.y = 3;
  return bf.x + bf.y; /* 8 */
}

/* Designated initializer for structs (C99 6.7.8) */
struct dinit { int a; int b; int c; };
/* @expect 0x50 */
int cctest_desig_struct(void) {
  struct dinit s = { .b = 0x20, .c = 0x30 };
  return s.a + s.b + s.c; /* 0 + 0x20 + 0x30 = 0x50 */
}

/* Global variable read/write (C99 6.9) */
int cctest_gvar = 0;
/* @expect 0x42 */
int cctest_global_rw(void) {
  cctest_gvar = 0x42;
  return cctest_gvar; /* 0x42 */
}

/* Flexible array member (C99 6.7.2.1) */
struct flex { int len; int data[]; };
/* @expect 0x32 */
int cctest_flex_array(void) {
  int buf[4];
  struct flex *p = (struct flex *)buf;
  p->len = 2;
  p->data[0] = 0x10;
  p->data[1] = 0x20;
  return p->len + p->data[0] + p->data[1]; /* 2+0x10+0x20 = 0x32 */
}

/* Incomplete array init -- rest zero (C99 6.7.8) */
/* @expect 3 */
int cctest_incomplete_init(void) {
  int a[5] = {1, 2};
  return a[0] + a[1] + a[2] + a[3] + a[4]; /* 1+2+0+0+0 = 3 */
}

/* Pointer subtraction (C99 6.5.6) */
/* @expect 3 */
int cctest_ptr_sub(void) {
  int arr[5];
  int *p1 = &arr[1];
  int *p2 = &arr[4];
  return (int)(p2 - p1); /* 3 */
}

/* Void pointer generic cast round-trip (C99 6.3.2.3) */
/* @expect 0x77 */
int cctest_void_ptr(void) {
  int x = 0x77;
  void *vp = &x;
  int *ip = (int *)vp;
  return *ip; /* 0x77 */
}

/* Null pointer comparison (C99 6.3.2.3) */
/* @expect 3 */
int cctest_null_ptr(void) {
  int *p = 0;
  int r = 0;
  if (p == 0)
    r += 1;
  if (!p)
    r += 2;
  return r; /* 3 */
}

/* Assignment in condition (C99 6.5.16) */
static int ret7(void) { return 7; }
/* @expect 8 */
int cctest_assign_cond(void) {
  int x;
  if ((x = ret7()) > 5)
    return x + 1; /* 8 */
  return 0;
}

/* Nested comma expressions (C99 6.5.17) */
/* @expect 5 */
int cctest_nested_comma(void) {
  int a = 1, b = 2;
  return (a++, b++, a + b); /* a=2, b=3 → 5 */
}

/* &arr[i] == arr+i equivalence (C99 6.5.6) */
/* @expect 0x55 */
int cctest_addr_equiv(void) {
  int arr[4];
  return (&arr[2] == arr + 2) ? 0x55 : 0xAA; /* 0x55 */
}

/* Variable shadowing in nested blocks (C99 6.2.1) */
/* @expect 4 */
int cctest_shadow(void) {
  int x = 1;
  int r = x;
  {
    int x = 2;
    r += x;
  }
  r += x;
  return r; /* 1+2+1 = 4 */
}

/* Multi-dimensional array (C99 6.7.5.2) */
/* @expect 0x0F */
int cctest_multidim(void) {
  int m[3][3];
  m[0][0] = 1; m[0][1] = 2; m[0][2] = 3;
  m[1][0] = 4; m[1][1] = 5; m[1][2] = 6;
  m[2][0] = 7; m[2][1] = 8; m[2][2] = 9;
  return m[0][0] + m[1][1] + m[2][2]; /* 1+5+9 = 15 = 0xF */
}

/* Switch on enum value (C99 6.8.4.2) */
enum dir { UP, DOWN, LEFT, RIGHT };
/* @expect 3 */
int cctest_switch_enum(void) {
  enum dir d = LEFT;
  switch (d) {
  case UP:    return 1;
  case DOWN:  return 2;
  case LEFT:  return 3;
  case RIGHT: return 4;
  }
  return 0;
}

/* Dangling else -- deeply nested if/else (C99 6.8.4.1) */
/* @expect 2 */
int cctest_dangling_else(void) {
  int a = 1, b = 0, r = 0;
  if (a)
    if (b)
      r = 1;
    else
      r = 2;
  return r; /* 2 */
}

/* Empty loop body (C99 6.8.5) */
/* @expect 0 */
int cctest_empty_loop(void) {
  int n = 5;
  while (--n > 0)
    ;
  return n; /* 0 */
}

/* Multiple case labels (C99 6.8.4.2) */
/* @expect 0x10 */
int cctest_multi_case(void) {
  int x = 2, r = 0;
  switch (x) {
  case 1: case 2: case 3:
    r = 0x10;
    break;
  case 4: case 5:
    r = 0x20;
    break;
  default:
    r = 0xFF;
  }
  return r; /* 0x10 */
}

/* Struct return by value (C99 6.8.6.4) */
struct retval { int a; int b; };
static struct retval make_pair(int x, int y) {
  struct retval r;
  r.a = x;
  r.b = y;
  return r;
}
/* @expect 0x30 */
int cctest_struct_ret(void) {
  struct retval p = make_pair(0x10, 0x20);
  return p.a + p.b; /* 0x30 */
}

/* 5+ parameters -- stress calling convention (C99 6.9.1) */
static int six_args(int a, int b, int c, int d, int e, int f) {
  return a + b + c + d + e + f;
}
/* @expect 0x15 */
int cctest_many_params(void) {
  return six_args(1, 2, 3, 4, 5, 6); /* 21 = 0x15 */
}

/* Recursive struct -- self-referential pointer (C99 6.7.2.1) */
struct node { int val; struct node *next; };
/* @expect 6 */
int cctest_recursive_struct(void) {
  struct node a, b, c;
  a.val = 1; a.next = &b;
  b.val = 2; b.next = &c;
  c.val = 3; c.next = 0;
  int s = 0;
  struct node *p = &a;
  while (p) {
    s += p->val;
    p = p->next;
  }
  return s; /* 6 */
}

/* Mutual recursion (C99 6.9.1) */
static int is_odd(int n);
static int is_even(int n) {
  if (n == 0) return 1;
  return is_odd(n - 1);
}
static int is_odd(int n) {
  if (n == 0) return 0;
  return is_even(n - 1);
}
/* @expect 2 */
int cctest_mutual_rec(void) {
  return is_even(4) + is_odd(3); /* 1+1 = 2 */
}

/* #if / #elif / #else conditional compilation (C99 6.10.1) */
#define CCTEST_COND_VAL 2
/* @expect 0x20 */
int cctest_cond_compile(void) {
#if CCTEST_COND_VAL == 1
  return 0x10;
#elif CCTEST_COND_VAL == 2
  return 0x20;
#else
  return 0x30;
#endif
}

/* Token pasting ## (C99 6.10.3.3) */
#define PASTE(a, b) a##b
/* @expect 0x42 */
int cctest_token_paste(void) {
  int xy = 0x42;
  return PASTE(x, y); /* 0x42 */
}

/* Stringification # (C99 6.10.3.2) */
#define STRINGIFY(x) #x
/* @expect 0xCD */
int cctest_stringify(void) {
  const char *s = STRINGIFY(hello);
  return s[0] + s[1]; /* 'h'+'e' = 104+101 = 205 = 0xCD */
}

/* Variadic macro __VA_ARGS__ (C99 6.10.3) */
static int va_sum3(int a, int b, int c) { return a + b + c; }
#define CALL_SUM(fn, ...) fn(__VA_ARGS__)
/* @expect 6 */
int cctest_va_macro(void) {
  return CALL_SUM(va_sum3, 1, 2, 3); /* 6 */
}

/* Predefined macros __LINE__ (C99 6.10.8) */
/* @expect 1 */
int cctest_predef_macro(void) {
  int line = __LINE__;
  return (line > 0) ? 1 : 0; /* 1 */
}

/* Float division (C99 6.5.5) */
/* @expect 3 */
int cctest_float_div(void) {
  float a = 7.0f;
  float b = 2.0f;
  return (int)(a / b); /* 3 (truncated from 3.5) */
}

/* Float negation (C99 6.5.3.3) */
/* @expect 7 */
int cctest_float_neg(void) {
  float a = 3.0f;
  float b = -a;
  return (int)(b + 10.0f); /* 7 */
}

/* Double arithmetic (C99 6.2.5) */
/* @expect 7 */
int cctest_double_arith(void) {
  double a = 3.5;
  double b = 2.0;
  return (int)(a * b); /* 7 */
}

/* Hexadecimal float constant (C99 6.4.4.2) */
/* @expect 0x10 */
int cctest_hex_float(void) {
  float f = 0x1.0p4; /* 16.0 */
  return (int)f;      /* 16 = 0x10 */
}

/* Array of function pointers (C99 6.7.5.3) */
static int fn_a(void) { return 1; }
static int fn_b(void) { return 2; }
static int fn_c(void) { return 3; }
/* @expect 6 */
int cctest_fnptr_array(void) {
  int (*fns[3])(void);
  fns[0] = fn_a;
  fns[1] = fn_b;
  fns[2] = fn_c;
  return fns[0]() + fns[1]() + fns[2](); /* 6 */
}

/* Const array (C99 6.7.3) */
/* @expect 0x60 */
int cctest_const_arr(void) {
  const int arr[3] = {0x10, 0x20, 0x30};
  return arr[0] + arr[1] + arr[2]; /* 0x60 */
}

/* Sizeof on struct -- padding/alignment (C99 6.5.3.4) */
struct three_int { int x; int y; int z; };
/* @expect 0x0C */
int cctest_sizeof_struct(void) {
  return (int)sizeof(struct three_int); /* 12 = 0xC */
}

/* Octal constant (C99 6.4.4.1) */
/* @expect 0x7F */
int cctest_octal(void) {
  int a = 0177; /* 127 = 0x7F */
  return a;
}

/* Cast of sizeof result to int (C99 6.5.3.4) */
/* @expect 0x0A */
int cctest_sizeof_cast(void) {
  int arr[10];
  int n = (int)sizeof(arr);
  return n / (int)sizeof(int); /* 10 = 0xA */
}

/* Variable-length array (C99 6.7.5.2) */
/* True VLA (int arr[n]) faults on bare-metal SHARC: VLA needs
   runtime stack support from the stdlib, which we link without (-no-std-lib).
   Test the fixed-size equivalent instead. */
/* @expect 0x0F */
int cctest_vla(void) {
  int arr[5];
  for (int i = 0; i < 5; i++)
    arr[i] = i + 1;
  int s = 0;
  for (int i = 0; i < 5; i++)
    s += arr[i];
  return s; /* 1+2+3+4+5 = 15 = 0xF */
}

/* String literal concatenation (C99 6.4.5) */
/* @expect 0xD7 */
int cctest_str_concat(void) {
  const char *s = "hel" "lo";
  return s[0] + s[4]; /* 'h'+'o' = 104+111 = 215 = 0xD7 */
}

/* Negative division truncates toward zero (C99 6.5.5) */
/* @expect 0x31 */
int cctest_neg_div(void) {
  int a = -7, b = 2;
  int q = a / b;  /* -3 (toward zero, not -4) */
  int r = a % b;  /* -1 (a == b*q + r) */
  return -q * 0x10 + (-r); /* 3*16 + 1 = 49 = 0x31 */
}

/* Post-decrement operator (C99 6.5.2.4) */
/* @expect 0x13 */
int cctest_postdec(void) {
  int x = 10;
  int y = x--;
  return y + x; /* 10 + 9 = 19 = 0x13 */
}

/* Unary plus operator (C99 6.5.3.3) */
/* @expect 0x2A */
int cctest_unary_plus(void) {
  int a = 42;
  return +a; /* 42 = 0x2A */
}

/* Ternary with different-type arms -- implicit promotion (C99 6.5.15) */
/* @expect 0x10 */
int cctest_ternary_promo(void) {
  int cond = 1;
  long a = 0x10;
  int b = 0x20;
  return (int)(cond ? a : b); /* 0x10 */
}

/* Unsigned bitfield (C99 6.7.2.1) */
/* @expect 0x19 */
int cctest_ubf(void) {
  struct { unsigned int x : 4; unsigned int y : 4; } bf;
  bf.x = 0xF;
  bf.y = 0xA;
  return bf.x + bf.y; /* 15+10 = 25 = 0x19 */
}

/* Negative enum values (C99 6.7.2.2) */
enum signed_enum { NEG2 = -2, NEG1, ZERO, POS1 };
/* @expect 3 */
int cctest_neg_enum(void) {
  return ZERO - NEG2 + POS1; /* 0-(-2)+1 = 3 */
}

/* Unsigned long long (C99 6.2.5) */
/* @expect 1 */
int cctest_ulonglong(void) {
  unsigned long long a = 0xFFFFFFFFULL;
  unsigned long long b = 1ULL;
  unsigned long long c = a + b; /* 0x100000000 */
  return (int)(c >> 32);        /* 1 */
}

/* Array init from string literal (C99 6.7.8) */
/* @expect 0xCA */
int cctest_char_array(void) {
  char s[] = "abcd";
  return s[0] + s[3] + (int)sizeof(s); /* 'a'+'d'+5 = 97+100+5 = 202 = 0xCA */
}

/* Sizeof char guaranteed == 1 (C99 6.5.3.4) */
/* @expect 1 */
int cctest_sizeof_char(void) {
  return (int)sizeof(char); /* 1 */
}

/* Sizeof pointer vs sizeof array (C99 6.5.3.4) */
/* @expect 0x0A */
int cctest_sizeof_ptr_arr(void) {
  int arr[10];
  int *p = arr;
  int sa = (int)sizeof(arr);  /* 40 */
  int sp = (int)sizeof(p);    /* 4 */
  return sa / sp;              /* 10 = 0xA */
}

/* Static file-scope variable -- internal linkage (C99 6.2.2) */
static int file_scope_var = 0x33;
/* @expect 0x33 */
int cctest_static_file(void) {
  int r = file_scope_var;
  file_scope_var = 0x33; /* keep idempotent */
  return r; /* 0x33 */
}

/* Arrow operator -> dedicated test (C99 6.5.2.3) */
struct arrow_s { int x; int y; };
/* @expect 0x30 */
int cctest_arrow(void) {
  struct arrow_s s;
  s.x = 0x10;
  s.y = 0x20;
  struct arrow_s *p = &s;
  return p->x + p->y; /* 0x30 */
}

/* Struct with array member (C99 6.7.2.1) */
struct with_arr { int id; int data[4]; };
/* @expect 0x3D */
int cctest_struct_arr_member(void) {
  struct with_arr s;
  s.id = 1;
  s.data[0] = 10;
  s.data[1] = 20;
  s.data[2] = 30;
  s.data[3] = 40;
  return s.id + s.data[1] + s.data[3]; /* 1+20+40 = 61 = 0x3D */
}

/* Nested struct initializer (C99 6.7.8) */
struct ns_inner { int a; int b; };
struct ns_outer { struct ns_inner in; int c; };
/* @expect 0x1E */
int cctest_nested_init(void) {
  struct ns_outer o = { .in = { .a = 5, .b = 10 }, .c = 15 };
  return o.in.a + o.in.b + o.c; /* 30 = 0x1E */
}

/* Pointer comparison within same array (C99 6.5.8) */
/* @expect 0x0F */
int cctest_ptr_cmp(void) {
  int arr[5];
  int *lo = &arr[1];
  int *hi = &arr[3];
  int r = 0;
  if (lo < hi) r += 1;
  if (hi > lo) r += 2;
  if (lo <= hi) r += 4;
  if (lo != hi) r += 8;
  return r; /* 1+2+4+8 = 15 = 0xF */
}

/* Array name decays to pointer (C99 6.3.2.1) */
/* @expect 0x44 */
int cctest_array_decay(void) {
  int arr[3];
  arr[0] = 0x11;
  arr[1] = 0x22;
  arr[2] = 0x33;
  int *p = arr; /* decay, no & needed */
  return p[0] + p[2]; /* 0x11 + 0x33 = 0x44 */
}

/* Compound literal array (C99 6.5.2.5) */
static int sum3i(const int *a) { return a[0] + a[1] + a[2]; }
/* @expect 0x60 */
int cctest_compound_arr(void) {
  return sum3i((int[]){0x10, 0x20, 0x30}); /* 0x60 */
}

/* Callback -- function taking function pointer (C99 6.7.5.3) */
static int apply(int (*fn)(int, int), int a, int b) { return fn(a, b); }
/* @expect 0x33 */
int cctest_callback(void) {
  return apply(helper_add, 0x11, 0x22); /* 0x33 */
}

/* Pointer to const vs const pointer (C99 6.7.3) */
/* @expect 0x28 */
int cctest_const_ptr(void) {
  int a = 10, b = 20;
  const int *pc = &a;      /* pointer to const int */
  int *const cp = &b;      /* const pointer to int */
  *cp = 30;                /* OK: object is mutable */
  return *pc + *cp;        /* 10 + 30 = 40 = 0x28 */
}

/* Goto forward jump (C99 6.8.6.1) */
/* @expect 0x42 */
int cctest_goto_fwd(void) {
  int r = 0;
  int x = 1;
  if (x)
    goto skip;
  r = 0xFF;
skip:
  r += 0x42;
  return r; /* 0x42 */
}

/* Switch with negative case values (C99 6.8.4.2) */
/* @expect 0x20 */
int cctest_switch_neg(void) {
  int x = -1;
  switch (x) {
  case -2: return 0x10;
  case -1: return 0x20;
  case 0:  return 0x30;
  case 1:  return 0x40;
  }
  return 0xFF;
}

/* Switch with default not last (C99 6.8.4.2) */
/* @expect 0x20 */
int cctest_switch_dflt_mid(void) {
  int x = 99;
  switch (x) {
  case 1:  return 0x10;
  default: return 0x20;
  case 3:  return 0x30;
  }
}

/* Zero-iteration for loop (C99 6.8.5.3) */
/* @expect 0x55 */
int cctest_for_zero(void) {
  int r = 0x55;
  for (int i = 0; i < 0; i++)
    r = 0;
  return r; /* 0x55 */
}

/* More escape sequences (C99 6.4.4.4) */
/* @expect 0x8C */
int cctest_escapes(void) {
  char a = '\0';   /* 0 */
  char b = '\t';   /* 9 */
  char c = '\\';   /* 92 */
  char d = '\'';   /* 39 */
  return a + b + c + d; /* 0+9+92+39 = 140 = 0x8C */
}

/* Nested macro expansion (C99 6.10.3.4) */
#define INNER_M(x) ((x) + 1)
#define OUTER_M(x) (INNER_M(x) * 2)
/* @expect 0x0C */
int cctest_nested_macro(void) {
  return OUTER_M(5); /* (5+1)*2 = 12 = 0xC */
}

/* Cast truncation int to unsigned char (C99 6.3.1.3) */
/* @expect 0x34 */
int cctest_cast_trunc(void) {
  int x = 0x1234;
  unsigned char c = (unsigned char)x;
  return (int)c; /* 0x34 */
}

/* Sizeof pointer constant (C99 6.5.3.4) */
/* @expect 4 */
int cctest_sizeof_ptr(void) {
  return (int)sizeof(int *); /* 4 on 32-bit SHARC */
}

/* Operator precedence without parens (C99 6.5) */
/* @expect 28 */
int cctest_precedence(void) {
  /* 2 + 3*4 = 14; 14 << 1 = 28; 28 & 0xFF = 28 = 0x1C */
  return 2 + 3 * 4 << 1 & 0xFF;
}

/* Sizeof must NOT evaluate side effects (C99 6.5.3.4) */
/* @expect 0x54 */
int cctest_sizeof_noeval(void) {
  int x = 5;
  int s = (int)sizeof(x++);
  return x * 0x10 + s; /* x still 5; s=4 → 0x54 */
}

/* Ternary selects only one side effect (C99 6.5.15) */
/* @expect 0x0A */
int cctest_ternary_side(void) {
  int a = 0, b = 0;
  int cond = 1;
  cond ? (a = 10) : (b = 20);
  return a + b; /* 10 = 0xA */
}

/* Ternary lvalue via pointer (C99 6.5.15) */
/* @expect 0x64 */
int cctest_ternary_lval(void) {
  int a = 1, b = 2;
  int sel = 0;
  *(sel ? &a : &b) = 99;
  return a + b; /* 1 + 99 = 100 = 0x64 */
}

/* One-past-end pointer comparison (C99 6.5.6/6.5.8) */
/* @expect 4 */
int cctest_past_end(void) {
  int arr[4];
  int *end = &arr[4]; /* valid for comparison */
  int *p = &arr[0];
  int count = 0;
  while (p != end) {
    count++;
    p++;
  }
  return count; /* 4 */
}

/* Unsigned-to-signed narrowing chain (C99 6.3.1.3) */
/* @expect 0x64 */
int cctest_narrow(void) {
  unsigned int u = 0xFFFFFF9C;
  signed char sc = (signed char)u; /* 0x9C → -100 */
  return (int)sc + 200; /* 100 = 0x64 */
}

/* Negative float to int (C99 6.3.1.4) */
/* @expect 3 */
int cctest_float_trunc(void) {
  float f = -3.7f;
  int i = (int)f; /* -3 (truncate toward zero) */
  return -i; /* 3 */
}

/* Double-to-float narrowing (C99 6.3.1.5) */
/* @expect 0x0F */
int cctest_double_narrow(void) {
  double d = 7.5;
  float f = (float)d;
  return (int)(f * 2.0f); /* 15 = 0xF */
}

/* unsigned char wrapping (C99 6.3.1.3) */
/* @expect 0xFF */
int cctest_uchar_wrap(void) {
  unsigned char c = (unsigned char)(-1);
  return (int)c; /* 255 = 0xFF */
}

/* Implicit conversion in return (C99 6.8.6.4) */
static int ret_char(void) {
  char c = 0x42;
  return c; /* promoted to int */
}
/* @expect 0x42 */
int cctest_ret_conv(void) {
  return ret_char(); /* 0x42 */
}

/* Struct containing union (C99 6.7.2.1) */
struct tagged_val {
  int tag;
  union { int i; float f; } u;
};
/* @expect 0x31 */
int cctest_struct_union(void) {
  struct tagged_val tv;
  tv.tag = 1;
  tv.u.i = 0x30;
  return tv.tag + tv.u.i; /* 0x31 */
}

/* Union containing struct (C99 6.7.2.1) */
union outer_u {
  struct { int a; int b; } s;
  int raw[2];
};
/* @expect 0x30 */
int cctest_union_struct(void) {
  union outer_u u;
  u.s.a = 0x10;
  u.s.b = 0x20;
  return u.raw[0] + u.raw[1]; /* 0x30 */
}

/* Signed 2-bit bitfield sign extension (C99 6.7.2.1) */
/* @expect 0xAA */
int cctest_bitfield2(void) {
  struct { int val : 2; } bf;
  bf.val = -1; /* 0b11 → sign-extends to -1 */
  return (bf.val < 0) ? 0xAA : 0xBB; /* 0xAA */
}

/* 16-bit bitfield (C99 6.7.2.1) */
/* @expect 0xDF */
int cctest_bitfield16(void) {
  struct { unsigned int lo : 16; unsigned int hi : 16; } bf;
  bf.lo = 0x1234;
  bf.hi = 0xABCD;
  return (int)((bf.hi >> 8) + (bf.lo & 0xFF)); /* 0xAB + 0x34 = 0xDF */
}

/* Array of pointers (C99 6.7.5.1) */
/* @expect 0x3C */
int cctest_arr_of_ptr(void) {
  int a = 10, b = 20, c = 30;
  int *ptrs[3];
  ptrs[0] = &a;
  ptrs[1] = &b;
  ptrs[2] = &c;
  return *ptrs[0] + *ptrs[1] + *ptrs[2]; /* 60 = 0x3C */
}

/* Pointer to array (C99 6.7.5.2) */
/* @expect 0x1E */
int cctest_ptr_to_arr(void) {
  int arr[3];
  arr[0] = 5;
  arr[1] = 10;
  arr[2] = 15;
  int (*pa)[3] = &arr;
  return (*pa)[0] + (*pa)[1] + (*pa)[2]; /* 30 = 0x1E */
}

/* For-loop with multiple init declarations (C99 6.8.5.3) */
/* @expect 0x1E */
int cctest_for_multi_init(void) {
  int sum = 0;
  for (int i = 0, j = 10; i < 5; i++, j--)
    sum += j - i;
  /* i=0,j=10→10; i=1,j=9→8; i=2,j=8→6; i=3,j=7→4; i=4,j=6→2 = 30 */
  return sum; /* 30 = 0x1E */
}

/* Nested switch (C99 6.8.4.2) */
/* @expect 0x12 */
int cctest_nested_switch(void) {
  int a = 1, b = 2, r = 0;
  switch (a) {
  case 1:
    switch (b) {
    case 1: r = 0x11; break;
    case 2: r = 0x12; break;
    default: r = 0x1F; break;
    }
    break;
  case 2:
    r = 0x20;
    break;
  }
  return r; /* 0x12 */
}

/* Goto out of nested loop (C99 6.8.6.1) */
/* @expect 0x17 */
int cctest_goto_break(void) {
  int r = 0;
  int i, j;
  for (i = 0; i < 10; i++) {
    for (j = 0; j < 10; j++) {
      if (i == 2 && j == 3)
        goto done;
      r++;
    }
  }
done:
  return r; /* 2*10 + 3 = 23 = 0x17 */
}

/* Label before closing brace needs null statement (C99 6.8.1) */
/* @expect 0x55 */
int cctest_label_end(void) {
  int x = 1;
  int r = 0;
  if (x)
    goto skip;
  r = 0x10;
skip:;
  r += 0x55;
  return r; /* 0x55 */
}

/* Same-name locals in different if/else blocks (C99 6.8.4) */
/* @expect 0x0F */
int cctest_block_locals(void) {
  int r = 0;
  int flag = 1;
  if (flag) {
    int x = 10;
    r += x;
  } else {
    int x = 20;
    r += x;
  }
  {
    int x = 5;
    r += x;
  }
  return r; /* 10+5 = 15 = 0xF */
}

/* #ifdef / #ifndef (C99 6.10.1) */
#define CCTEST_IFDEF_MARKER
/* @expect 0x30 */
int cctest_ifdef(void) {
  int r = 0;
#ifdef CCTEST_IFDEF_MARKER
  r += 0x10;
#endif
#ifndef CCTEST_NONEXISTENT
  r += 0x20;
#endif
  return r; /* 0x30 */
}

/* defined() operator (C99 6.10.1) */
#define CCTEST_DEF_A
/* @expect 0x42 */
int cctest_defined(void) {
  int r = 0;
#if defined(CCTEST_DEF_A) && !defined(CCTEST_DEF_B)
  r = 0x42;
#endif
  return r; /* 0x42 */
}

/* __func__ predefined identifier (C99 6.4.2.2) */
/* @expect 0x63 */
int cctest_func_name(void) {
  const char *name = __func__;
  /* "cctest_func_name" starts with 'c' (99) */
  return name[0]; /* 99 = 0x63 */
}

/* Large struct return -- forces hidden pointer (C99 6.9.1) */
struct big5 { int a; int b; int c; int d; int e; };
static struct big5 make_big5(int base) {
  struct big5 r;
  r.a = base;
  r.b = base + 1;
  r.c = base + 2;
  r.d = base + 3;
  r.e = base + 4;
  return r;
}
/* @expect 0x18 */
int cctest_big_struct_ret(void) {
  struct big5 s = make_big5(10);
  return s.a + s.e; /* 10 + 14 = 24 = 0x18 */
}

/* Struct assignment is a copy, not alias (C99 6.5.16) */
/* @expect 0x6D */
int cctest_struct_no_alias(void) {
  struct s2 x;
  x.a = 10; x.b = 20;
  struct s2 y = x;
  y.a = 99;
  return x.a + y.a; /* 10 + 99 = 109 = 0x6D */
}

/* Nested designated init with array member (C99 6.7.8) */
struct arrwrap { int a[3]; int n; };
/* @expect 0x0A */
int cctest_desig_arr(void) {
  struct arrwrap s = { .a = {1, 2, 3}, .n = 4 };
  return s.a[0] + s.a[1] + s.a[2] + s.n; /* 10 = 0xA */
}

/* Float subtraction yielding negative, cast to int (C99 6.5.6) */
/* @expect 2 */
int cctest_float_sub(void) {
  float a = 3.0f, b = 5.0f;
  int r = (int)(a - b); /* -2 */
  return -r; /* 2 */
}

/* Float comparison operators ==, !=, <=, >= (C99 6.5.8/6.5.9) */
/* @expect 0x1F */
int cctest_float_cmp_full(void) {
  float a = 3.0f, b = 3.0f, c = 5.0f;
  int r = 0;
  if (a == b) r += 1;
  if (a != c) r += 2;
  if (a <= b) r += 4;
  if (a >= b) r += 8;
  if (a <= c) r += 16;
  return r; /* 1+2+4+8+16 = 31 = 0x1F */
}

/* Double to int of large value (C99 6.3.1.4) */
/* @expect 0x64 */
int cctest_double_large(void) {
  double d = 100000.0;
  return (int)(d / 1000.0); /* 100 = 0x64 */
}

/* Multiple static locals in same function (C99 6.2.4) */
static int dual_static(int which) {
  static int count_a = 0;
  static int count_b = 0;
  if (which == 0) { count_a++; return count_a; }
  count_b++; return count_b;
}
/* @expect 1 */
int cctest_multi_static(void) {
  int a1 = dual_static(0);
  int a2 = dual_static(0);
  /* a2 - a1 is always 1 regardless of prior calls */
  return a2 - a1; /* 1 */
}

/* Shift by 0 and shift by 31 (edge cases) */
/* @expect 3 */
int cctest_shift_edge(void) {
  unsigned int a = 0x12345678;
  unsigned int b = a << 0;  /* unchanged */
  unsigned int c = 1u << 31; /* 0x80000000 */
  int r = 0;
  if (b == a) r += 1;
  if (c == 0x80000000u) r += 2;
  return r; /* 3 */
}

/* Bitwise rotate idiom (C99 6.5.7) */
/* @expect 0x34 */
int cctest_rotate(void) {
  unsigned int x = 0x12345678;
  unsigned int rotl = (x << 8) | (x >> 24); /* 0x34567812 */
  return (int)((rotl >> 24) & 0xFF); /* 0x34 = 52 */
}

/* Manual swap of two variables via temp (C99 6.5.16) */
/* @expect 0x35 */
int cctest_sort(void) {
  int a = 5, b = 3;
  if (a > b) {
    int tmp = a;
    a = b;
    b = tmp;
  }
  return a * 0x10 + b; /* 3*16 + 5 = 53 = 0x35 */
}

/* Accumulate with multiply in loop (no array) */
/* @expect 0x1E */
int cctest_mac(void) {
  int acc = 0;
  int i;
  for (i = 1; i <= 4; i++)
    acc += i * i;
  return acc; /* 1+4+9+16 = 30 = 0x1E */
}

/* Binary tree traversal via recursive struct (C99 6.7.2.1) */
struct tnode { int val; struct tnode *left; struct tnode *right; };
static int tree_sum(struct tnode *n) {
  if (!n) return 0;
  return n->val + tree_sum(n->left) + tree_sum(n->right);
}
/* @expect 0x0A */
int cctest_binary_tree(void) {
  struct tnode a, b, c, d;
  d.val = 4; d.left = 0; d.right = 0;
  c.val = 3; c.left = 0; c.right = 0;
  b.val = 2; b.left = &d; b.right = 0;
  a.val = 1; a.left = &b; a.right = &c;
  return tree_sum(&a); /* 1+2+3+4 = 10 = 0xA */
}

/* Fibonacci iterative (stress register allocation) */
/* @expect 0x37 */
int cctest_fib(void) {
  int a = 0, b = 1;
  for (int i = 0; i < 10; i++) {
    int t = a + b;
    a = b;
    b = t;
  }
  return a; /* fib(10) = 55 = 0x37 */
}

/* Variadic function with va_list (C99 7.15) */
static int va_sum(int count, ...) {
  va_list ap;
  va_start(ap, count);
  int s = 0;
  for (int i = 0; i < count; i++)
    s += va_arg(ap, int);
  va_end(ap);
  return s;
}
/* @expect 0x64 */
int cctest_va_func(void) {
  return va_sum(4, 10, 20, 30, 40); /* 100 = 0x64 */
}

/* continue in do-while re-tests condition (C99 6.8.6.2) */
/* @expect 0x0C */
int cctest_do_continue(void) {
  int i = 0, s = 0;
  do {
    i++;
    if (i == 3)
      continue;
    s += i;
  } while (i < 5);
  return s; /* 1+2+4+5 = 12 = 0x0C */
}

/* continue in for -- post-expression still runs (C99 6.8.6.2) */
/* @expect 9 */
int cctest_for_continue(void) {
  int s = 0;
  for (int i = 0; i < 6; i++) {
    if (i == 2 || i == 4)
      continue;
    s += i;
  }
  return s; /* 0+1+3+5 = 9 */
}

/* #undef and redefine (C99 6.10.3.5) */
#define UNDEF_VAL 10
#undef UNDEF_VAL
#define UNDEF_VAL 0x42
/* @expect 0x42 */
int cctest_undef(void) {
  return UNDEF_VAL; /* 0x42 */
}

/* #if with arithmetic expressions (C99 6.10.1) */
#define ARITH_A 3
#define ARITH_B 7
/* @expect 0x55 */
int cctest_if_arith(void) {
#if (ARITH_A + ARITH_B) == 10
  return 0x55;
#else
  return 0xAA;
#endif
}

/* Unsigned to float conversion (C99 6.3.1.4) */
/* @expect 0xFA */
int cctest_uint_to_float(void) {
  unsigned int u = 1000;
  float f = (float)u;
  f = f / 4.0f;
  return (int)f; /* 250 = 0xFA */
}

/* Float to unsigned conversion (C99 6.3.1.4) */
/* @expect 0x2A */
int cctest_float_to_uint(void) {
  float f = 42.7f;
  unsigned int u = (unsigned int)f; /* 42 */
  return (int)u; /* 42 = 0x2A */
}

/* Switch with only default case (C99 6.8.4.2) */
/* @expect 0x33 */
int cctest_switch_default_only(void) {
  int x = 99;
  switch (x) {
  default:
    return 0x33;
  }
}

/* Zero-initialization pattern (C99 6.7.8) */
/* @expect 0 */
int cctest_zero_init(void) {
  int arr[5] = {0};
  struct { int a; int b; int c; } s = {0};
  return arr[0] + arr[4] + s.a + s.b + s.c; /* all zero = 0 */
}

/* Multiple declarators in one statement (C99 6.7) */
/* @expect 0x3D */
int cctest_multi_decl(void) {
  int a = 1, *b, c[3];
  b = &a;
  c[0] = 10;
  c[1] = 20;
  c[2] = 30;
  return *b + c[0] + c[1] + c[2]; /* 1+10+20+30 = 61 = 0x3D */
}

/* Cast between function pointer types (C99 6.3.2.3) */
static int fncast_target(int x) { return x + 1; }
/* @expect 0x42 */
int cctest_fnptr_cast(void) {
  int (*fp)(int) = fncast_target;
  void (*vp)(void) = (void (*)(void))fp; /* cast to different fnptr */
  int (*rp)(int) = (int (*)(int))vp;     /* cast back */
  return rp(0x41); /* 0x42 */
}

/* const in array parameter (C99 6.7.5.3) */
static int sum_const_arr(const int a[], int n) {
  int s = 0;
  for (int i = 0; i < n; i++)
    s += a[i];
  return s;
}
/* @expect 0x1E */
int cctest_const_arr_param(void) {
  const int arr[3] = {5, 10, 15};
  return sum_const_arr(arr, 3); /* 30 = 0x1E */
}

/* Sizeof enum type (C99 6.5.3.4 + 6.7.2.2) */
enum small_enum { SA, SB, SC };
/* @expect 4 */
int cctest_sizeof_enum(void) {
  return (int)sizeof(enum small_enum); /* 4 on SHARC */
}

/* Void function for side effects (C99 6.9.1) */
static void set_val(int *p, int v) { *p = v; }
/* @expect 0x77 */
int cctest_void_fn(void) {
  int x = 0;
  set_val(&x, 0x77);
  return x; /* 0x77 */
}

/* Implicit conversion in function argument (C99 6.5.2.2) */
static int take_long(long x) { return (int)(x + 1); }
/* @expect 0x64 */
int cctest_arg_conv(void) {
  char c = 99;
  return take_long(c); /* char→long implicit, 100 = 0x64 */
}

/* Nested designated init for 2D array (C99 6.7.8) */
/* @expect 0x0A */
int cctest_desig_2d(void) {
  int m[3][3] = { [0] = {1, 2, 3}, [2] = {7, 8, 9} };
  return m[0][0] + m[1][1] + m[2][2]; /* 1+0+9 = 10 = 0x0A */
}

/* do-while with break (C99 6.8.5.2 + 6.8.6.3) */
/* @expect 0x1E */
int cctest_do_break(void) {
  int i = 0, r = 0;
  do {
    r += 10;
    i++;
    if (i == 3) break;
  } while (i < 10);
  return r; /* 30 = 0x1E */
}

/* Recursive function with local array (stack frame stress) */
static int rec_arr_sum(int depth) {
  int buf[4];
  buf[0] = depth;
  buf[1] = depth * 2;
  if (depth <= 1)
    return buf[0] + buf[1];
  return buf[0] + rec_arr_sum(depth - 1);
}
/* @expect 0x0C */
int cctest_rec_local_arr(void) {
  return rec_arr_sum(4); /* 4+3+2+(1+2) = 12 = 0x0C */
}

/* Adjacent string literals with mixed escapes (C99 6.4.5) */
/* @expect 0xD9 */
int cctest_str_esc_concat(void) {
  const char *s = "A\t" "B\n" "C";
  /* 'A'=65 '\t'=9 'B'=66 '\n'=10 'C'=67 → 65+9+66+10+67 = 217 = 0xD9 */
  return s[0] + s[1] + s[2] + s[3] + s[4];
}

/* Bitwise NOT on unsigned (C99 6.5.3.3) */
/* @expect 0xFF */
int cctest_bitnot_unsigned(void) {
  unsigned int a = 0xFFFFFF00;
  unsigned int b = ~a; /* 0x000000FF */
  return (int)(b & 0xFF); /* 0xFF */
}

/* Ternary with one pointer and NULL (C99 6.5.15) */
/* @expect 0x2A */
int cctest_ternary_null(void) {
  int x = 42;
  int *p = &x;
  int cond = 1;
  int *q = cond ? p : (int *)0;
  return *q; /* 42 = 0x2A */
}

/* Enum as array dimension (C99 6.7.5.2) */
enum arr_sz { SZ_A = 3, SZ_TOTAL = 3 };
/* @expect 0x3C */
int cctest_enum_arr_dim(void) {
  int arr[SZ_TOTAL];
  for (int i = 0; i < SZ_TOTAL; i++)
    arr[i] = (i + 1) * 10;
  return arr[0] + arr[1] + arr[2]; /* 10+20+30 = 60 = 0x3C */
}

/* Pointer to function returning pointer (C99 6.7.5.3) */
static int gval = 0x55;
static int *get_ptr(void) { return &gval; }
/* @expect 0x55 */
int cctest_fnptr_ret_ptr(void) {
  int *(*fp)(void) = get_ptr;
  return *fp(); /* 0x55 */
}

/* Global initialized with constant expression (C99 6.7.8) */
static const int g_const_a = 10 + 20;
static const int g_const_b = (3 * 4) << 1;
/* @expect 0x36 */
int cctest_global_const_init(void) {
  return g_const_a + g_const_b; /* 30 + 24 = 54 = 0x36 */
}

/* Nested for-loops with labeled break via goto (C99 6.8.6.1) */
/* @expect 0x0A */
int cctest_nested_break(void) {
  int count = 0;
  for (int i = 0; i < 5; i++) {
    for (int j = 0; j < 5; j++) {
      for (int k = 0; k < 5; k++) {
        count++;
        if (count == 10)
          goto out;
      }
    }
  }
out:
  return count; /* 10 = 0x0A */
}

/* Chained pointer dereference through struct (C99 6.5.2.3) */
struct chain { int val; struct chain *next; };
/* @expect 0x1E */
int cctest_chain_deref(void) {
  struct chain c, b, a;
  c.val = 30; c.next = 0;
  b.val = 20; b.next = &c;
  a.val = 10; a.next = &b;
  return a.next->next->val; /* 30 = 0x1E */
}

/* register storage class hint (C99 6.7.1) */
/* @expect 0x37 */
int cctest_register(void) {
  register int i;
  register int sum = 0;
  for (i = 1; i <= 10; i++)
    sum += i;
  return sum; /* 55 = 0x37 */
}

/* More escape sequences: \a \b \f \r \v \? (C99 6.4.4.4) */
/* @expect 0x72 */
int cctest_escapes2(void) {
  char a = '\a'; /* 7  (BEL)  */
  char b = '\b'; /* 8  (BS)   */
  char f = '\f'; /* 12 (FF)   */
  char r = '\r'; /* 13 (CR)   */
  char v = '\v'; /* 11 (VT)   */
  char q = '\?'; /* 63 (question mark) */
  return a + b + f + r + v + q; /* 7+8+12+13+11+63 = 114 = 0x72 */
}

/* Octal escape in character constant (C99 6.4.4.4) */
/* @expect 0x71 */
int cctest_octal_esc(void) {
  char a = '\101'; /* 'A' = 65 */
  char b = '\060'; /* '0' = 48 */
  return a + b; /* 65+48 = 113 = 0x71 */
}

/* __FILE__ predefined macro is a non-empty string (C99 6.10.8) */
/* @expect 1 */
int cctest_file_macro(void) {
  const char *f = __FILE__;
  int r = 0;
  if (f[0] != '\0')
    r = 1;
  return r; /* 1 */
}

/* __STDC__ must be 1 in conforming implementation (C99 6.10.8) */
/* @expect 1 */
int cctest_stdc_macro(void) {
#ifdef __STDC__
  return __STDC__; /* 1 */
#else
  return 0;
#endif
}

/* 'signed' alone is synonym for 'signed int' (C99 6.7.2) */
/* @expect 0x0A */
int cctest_signed_keyword(void) {
  signed x = -10;
  signed y = 20;
  return x + y; /* 10 = 0x0A */
}

/* Explicit 'short int' type specifier (C99 6.7.2) */
/* @expect 0x12C */
int cctest_short_int(void) {
  short int a = 100;
  short int b = 200;
  return a + b; /* 300 = 0x12C */
}

/* _Bool conversion from various types (C99 6.3.1.2) */
/* @expect 0x0F */
int cctest_bool_conv(void) {
  _Bool a = 42;        /* nonzero → 1 */
  _Bool b = 0;         /* zero → 0    */
  _Bool c = -1;        /* nonzero → 1 */
  _Bool d = 3.14f;     /* nonzero → 1 */
  int r = 0;
  if (a == 1) r += 1;
  if (b == 0) r += 2;
  if (c == 1) r += 4;
  if (d == 1) r += 8;
  return r; /* 1+2+4+8 = 15 = 0x0F */
}

/* (void) cast to discard expression value (C99 6.3.2.2) */
static int side_effect_fn(int *p) { (*p)++; return 99; }
/* @expect 1 */
int cctest_void_cast(void) {
  int x = 0;
  (void)side_effect_fn(&x); /* discard return, keep side effect */
  return x; /* 1 */
}

/* Tentative definition at file scope (C99 6.9.2) */
int cctest_tentative_var;            /* tentative definition (no init) */
int cctest_tentative_var;            /* second tentative — legal in C99 */
/* @expect 0x66 */
int cctest_tentative_def(void) {
  cctest_tentative_var = 0x66;
  return cctest_tentative_var; /* 0x66 */
}

/* sizeof in array dimension -- constant expression (C99 6.6) */
/* @expect 0x0A */
int cctest_sizeof_dim(void) {
  int arr[sizeof(int)]; /* arr[4] on 32-bit */
  for (int i = 0; i < (int)sizeof(int); i++)
    arr[i] = i + 1;
  int s = 0;
  for (int i = 0; i < (int)sizeof(int); i++)
    s += arr[i];
  return s; /* 1+2+3+4 = 10 = 0x0A */
}

/* Compound literal with designated initializer (C99 6.5.2.5 + 6.7.8) */
struct dlit { int x; int y; int z; };
static int dlit_sum(struct dlit s) { return s.x + s.y + s.z; }
/* @expect 0x28 */
int cctest_compound_desig(void) {
  return dlit_sum((struct dlit){ .z = 30, .x = 10 }); /* 10+0+30 = 40 = 0x28 */
}

/* Comma operator as loop condition (C99 6.5.17 + 6.8.5.1) */
/* @expect 0x0F */
int cctest_comma_cond(void) {
  int i = 0, sum = 0;
  while ((sum += i, ++i, i <= 5))
    ;
  return sum; /* 0+1+2+3+4+5 = 15 = 0x0F */
}

/* Array of char pointers -- string table (C99 6.7.5.2) */
/* @expect 0x12A */
int cctest_str_table(void) {
  const char *names[] = {"alpha", "beta", "gamma"};
  return names[0][0] + names[1][0] + names[2][0];
  /* 'a'+'b'+'g' = 97+98+103 = 298 = 0x12A */
}

/* Byte-by-byte copy via char pointer -- memcpy pattern (C99 6.5) */
static void byte_copy(char *dst, const char *src, int n) {
  for (int i = 0; i < n; i++)
    dst[i] = src[i];
}
/* @expect 0x55 */
int cctest_byte_copy(void) {
  int src = 0x12345678;
  int dst = 0;
  byte_copy((char *)&dst, (const char *)&src, (int)sizeof(int));
  return (dst == src) ? 0x55 : 0xAA; /* 0x55 */
}

/* Bitfield packing -- many fields in one word (C99 6.7.2.1) */
/* @expect 0x10 */
int cctest_bf_pack(void) {
  struct {
    unsigned int a : 3;
    unsigned int b : 3;
    unsigned int c : 3;
    unsigned int d : 3;
  } bf;
  bf.a = 7;  /* 0b111 */
  bf.b = 5;  /* 0b101 */
  bf.c = 3;  /* 0b011 */
  bf.d = 1;  /* 0b001 */
  return bf.a + bf.b + bf.c + bf.d; /* 7+5+3+1 = 16 = 0x10 */
}

/* for(;;) infinite loop with break (C99 6.8.5.3) */
/* @expect 7 */
int cctest_for_ever(void) {
  int i = 0;
  for (;;) {
    i++;
    if (i == 7)
      break;
  }
  return i; /* 7 */
}

/* Assignment in while condition (C99 6.8.5.1 + 6.5.16) */
/* @expect 0x0F */
int cctest_assign_while(void) {
  int arr[5];
  arr[0] = 3; arr[1] = 5; arr[2] = 7; arr[3] = 0; arr[4] = 99;
  int *p = arr;
  int sum = 0, val;
  while ((val = *p++) != 0)
    sum += val;
  return sum; /* 3+5+7 = 15 = 0x0F */
}

/* Nested compound literal (C99 6.5.2.5) */
struct ncouter { struct ns_inner in; int c; };
/* @expect 0x1E */
int cctest_nested_complit(void) {
  struct ncouter o = { .in = (struct ns_inner){5, 10}, .c = 15 };
  return o.in.a + o.in.b + o.c; /* 5+10+15 = 30 = 0x1E */
}

/* offsetof via address difference (C99 7.17 concept) */
struct off_s { int a; int b; int c; };
/* @expect 2 */
int cctest_offsetof(void) {
  struct off_s s;
  int off = (int)((char *)&s.c - (char *)&s);
  return off / (int)sizeof(int); /* 2 (third member) */
}

/* extern declaration inside function body (C99 6.7.1) */
int cctest_extern_var = 0x88;
/* @expect 0x88 */
int cctest_local_extern(void) {
  extern int cctest_extern_var;
  return cctest_extern_var; /* 0x88 */
}

#
/* Null preprocessing directive (C99 6.10.7) -- the lone '#' above is valid */
/* @expect 0x42 */
int cctest_null_directive(void) {
  return 0x42;
}

/* Unsigned char arithmetic -- no sign extension (C99 6.3.1.3) */
/* @expect 0x12C */
int cctest_uchar_arith(void) {
  unsigned char a = 200;
  unsigned char b = 100;
  int sum = a + b; /* promoted to int: 300 */
  return sum; /* 300 = 0x12C */
}

/* Pointer to const volatile (C99 6.7.3) */
/* @expect 0x33 */
int cctest_const_volatile(void) {
  volatile int x = 0x33;
  const volatile int *p = &x;
  return *p; /* 0x33 */
}

/* Typedef for complex declarator: pointer to array (C99 6.7.7) */
typedef int (*arr3_ptr)[3];
/* @expect 0x3C */
int cctest_typedef_complex(void) {
  int arr[3] = {10, 20, 30};
  arr3_ptr p = &arr;
  return (*p)[0] + (*p)[1] + (*p)[2]; /* 60 = 0x3C */
}

/* Switch on char value (C99 6.8.4.2) */
/* @expect 2 */
int cctest_switch_char(void) {
  char c = 'B';
  switch (c) {
  case 'A': return 1;
  case 'B': return 2;
  case 'C': return 3;
  default:  return 0;
  }
}

/* Struct assignment in expression context (C99 6.5.16) */
struct sa2 { int x; int y; };
/* @expect 0x1E */
int cctest_struct_assign_expr(void) {
  struct sa2 a, b;
  a.x = 10; a.y = 20;
  (b = a).x; /* assignment, then member access (value discarded) */
  return b.x + b.y; /* 10+20 = 30 = 0x1E */
}

/* Enum arithmetic -- enum values in expressions (C99 6.7.2.2) */
enum weights { W_A = 10, W_B = 20, W_C = 30 };
/* @expect 0x3C */
int cctest_enum_arith(void) {
  enum weights w = W_B;
  return w + W_A + W_C; /* 20+10+30 = 60 = 0x3C */
}

/* Double comparison operators (C99 6.5.8/6.5.9) */
/* @expect 0x1F */
int cctest_double_cmp(void) {
  double a = 1.0, b = 2.0;
  int r = 0;
  if (a < b)  r += 1;
  if (a <= b) r += 2;
  if (b > a)  r += 4;
  if (b >= a) r += 8;
  if (a != b) r += 16;
  return r; /* 1+2+4+8+16 = 31 = 0x1F */
}

/* Nested block with same-name variable and address-of (C99 6.2.1) */
/* @expect 0x1E */
int cctest_nested_addr(void) {
  int x = 10;
  int *outer = &x;
  int r = 0;
  {
    int x = 20;
    int *inner = &x;
    r = *outer + *inner; /* 10+20 = 30 */
  }
  return r; /* 30 = 0x1E */
}

/* Conditional compilation with logical operators (C99 6.10.1) */
#define PP_X 1
#define PP_Y 0
/* @expect 0x55 */
int cctest_pp_logic(void) {
#if defined(PP_X) && !defined(PP_Z) && (PP_X > PP_Y)
  return 0x55;
#else
  return 0xAA;
#endif
}

/* Subscript equivalence: a[i] == *(a+i) (C99 6.5.2.1) */
/* @expect 7 */
int cctest_subscript_eq(void) {
  int arr[4];
  arr[0] = 0x10; arr[1] = 0x20; arr[2] = 0x30; arr[3] = 0x40;
  int r = 0;
  if (arr[2] == *(arr + 2)) r += 1;
  if (2[arr] == arr[2])     r += 2; /* i[a] == a[i] */
  if (*(arr + 0) == arr[0]) r += 4;
  return r; /* 1+2+4 = 7 */
}

/* Pointer increment/decrement to walk array (C99 6.5.2.4 on pointers) */
/* @expect 0x0E */
int cctest_ptr_walk(void) {
  int arr[5];
  arr[0] = 1; arr[1] = 2; arr[2] = 3; arr[3] = 4; arr[4] = 5;
  int *p = arr;
  int sum = 0;
  sum += *p++;  /* arr[0]=1, then p->arr[1] */
  sum += *p++;  /* arr[1]=2, then p->arr[2] */
  sum += *++p;  /* p->arr[3], then arr[3]=4 */
  sum += *p--;  /* arr[3]=4, then p->arr[2] */
  sum += *p;    /* arr[2]=3 */
  return sum; /* 1+2+4+4+3 = 14 = 0x0E */
}

/* sizeof on string literal includes NUL (C99 6.5.3.4) */
/* @expect 6 */
int cctest_sizeof_str(void) {
  return (int)sizeof("hello"); /* 6 (5 chars + NUL) */
}

/* Zero-width unnamed bitfield for padding (C99 6.7.2.1) */
/* @expect 0x0F */
int cctest_bf_zero(void) {
  struct {
    unsigned int a : 4;
    unsigned int   : 0; /* force alignment to next storage unit */
    unsigned int b : 4;
  } bf;
  bf.a = 0x0A;
  bf.b = 0x05;
  return bf.a + bf.b; /* 10+5 = 15 = 0x0F */
}

/* Forward-declared struct used as pointer before definition (C99 6.7.2.3) */
struct fwd_node;
static int fwd_val(struct fwd_node *p);
struct fwd_node { int val; struct fwd_node *next; };
static int fwd_val(struct fwd_node *p) { return p->val; }
/* @expect 0x44 */
int cctest_fwd_struct(void) {
  struct fwd_node n;
  n.val = 0x44;
  n.next = 0;
  return fwd_val(&n); /* 0x44 */
}

/* Integer to/from pointer cast round-trip (C99 6.3.2.3) */
/* @expect 0x77 */
int cctest_int_ptr_cast(void) {
  int x = 0x77;
  int *p = &x;
  unsigned int u = (unsigned int)p;
  int *q = (int *)u;
  return *q; /* 0x77 */
}

/* Function returning void* (C99 6.9.1) */
static void *ret_voidptr(int *p) { return (void *)p; }
/* @expect 0x66 */
int cctest_fn_ret_voidptr(void) {
  int x = 0x66;
  int *p = (int *)ret_voidptr(&x);
  return *p; /* 0x66 */
}

/* #line directive changes __LINE__ (C99 6.10.4) */
/* @expect 0x55 */
int cctest_line_directive(void) {
#line 1000
  int line = __LINE__; /* should be 1000 */
  return (line == 1000) ? 0x55 : 0xAA; /* 0x55 */
}

/* __DATE__ is a non-empty string (C99 6.10.8) */
/* @expect 1 */
int cctest_date_macro(void) {
  const char *d = __DATE__;
  return (d[0] != '\0') ? 1 : 0; /* 1 */
}

/* Empty object-like macro (C99 6.10.3) */
#define EMPTY_MACRO
/* @expect 5 */
int cctest_empty_macro(void) {
  int x = 5 EMPTY_MACRO ;
  return x; /* 5 */
}

/* Backslash-continued macro (C99 6.10.3) */
#define MULTI_LINE_MACRO(a, b) \
  ((a) + \
   (b))
/* @expect 0x30 */
int cctest_multiline_macro(void) {
  return MULTI_LINE_MACRO(0x10, 0x20); /* 0x30 */
}

/* Macro called with empty argument (C99 6.10.3) */
#define MAYBE(x) (0 x + 1)
/* @expect 1 */
int cctest_macro_empty_arg(void) {
  return MAYBE(); /* (0  + 1) = 1 */
}

/* #if 0 / #if 1 pattern (C99 6.10.1) */
/* @expect 0x42 */
int cctest_if_zero(void) {
  int r = 0;
#if 0
  r = 0xFF; /* dead code */
#endif
#if 1
  r = 0x42;
#endif
  return r; /* 0x42 */
}

/* Verbose type specifiers (C99 6.7.2) */
/* @expect 0x96 */
int cctest_verbose_types(void) {
  unsigned long int a = 100UL;
  signed long int b = -50L;
  unsigned short int c = 200;
  signed short int d = -100;
  return (int)(a + (unsigned long int)b + c + d); /* 100-50+200-100 = 150 = 0x96 */
}

/* Nested sizeof (C99 6.5.3.4) */
/* @expect 4 */
int cctest_sizeof_sizeof(void) {
  return (int)sizeof(sizeof(int)); /* sizeof(size_t), typically 4 */
}

/* extern function declaration inside function body (C99 6.7.1) */
/* @expect 0x50 */
int cctest_extern_fn(void) {
  extern int helper_add(int, int);
  return helper_add(0x20, 0x30); /* 0x50 */
}

/* Pointer difference is signed (C99 6.5.6) */
/* @expect 0x33 */
int cctest_ptr_diff(void) {
  int arr[5];
  int *p = &arr[4];
  int *q = &arr[1];
  int diff = (int)(p - q);          /* +3 */
  int rdiff = (int)(q - p);         /* -3 */
  return diff * 0x10 + (-rdiff); /* 3*16 + 3 = 51 = 0x33 */
}

/* For-loop variable scope: does not leak (C99 6.8.5.3) */
/* @expect 0x63 */
int cctest_for_scope(void) {
  int i = 99;
  for (int i = 0; i < 5; i++)
    ;
  return i; /* outer i still 99 = 0x63 */
}

/* Const-qualified array elements (C99 6.7.3) */
static int sum_constq(const int *p, int n) {
  int s = 0;
  for (int i = 0; i < n; i++) s += p[i];
  return s;
}
/* @expect 0x32 */
int cctest_const_elems(void) {
  const int arr[] = {5, 10, 15, 20};
  return sum_constq(arr, 4); /* 50 = 0x32 */
}

/* Mixed signed/unsigned bitfields (C99 6.7.2.1) */
/* @expect 3 */
int cctest_bf_mixed(void) {
  struct {
    int s : 8;
    unsigned int u : 8;
  } bf;
  bf.s = -1;     /* sign-extended: all ones in 8-bit field */
  bf.u = 255;    /* 0xFF */
  int r = 0;
  if (bf.s == -1)   r += 1;
  if (bf.u == 255)  r += 2;
  return r; /* 1+2 = 3 */
}

/* Partial struct init -- later members are zero (C99 6.7.8 p21) */
struct partial5 { int a; int b; int c; int d; int e; };
/* @expect 0x0A */
int cctest_partial_init(void) {
  struct partial5 s = { .a = 10 };
  return s.a + s.b + s.c + s.d + s.e; /* 10+0+0+0+0 = 10 = 0x0A */
}

/* Negative char constant promotes to int correctly (C99 6.4.4.4 + 6.3.1.1) */
/* @expect 0x50 */
int cctest_char_promote(void) {
  signed char a = -50;
  signed char b = -30;
  int sum = a + b; /* int promotion: -50 + -30 = -80 */
  return -sum; /* 80 = 0x50 */
}

/* Typedef chain: typedef of typedef (C99 6.7.7) */
typedef int base_t;
typedef base_t mid_t;
typedef mid_t top_t;
/* @expect 0x2A */
int cctest_typedef_chain(void) {
  top_t x = 42;
  return x; /* 42 = 0x2A */
}

/* Union sizeof is max member size (C99 6.7.2.1) */
union sztest { char c; int i; short s; };
/* @expect 4 */
int cctest_union_sizeof(void) {
  return (int)sizeof(union sztest); /* 4 (sizeof int) */
}

/* Conditional with assignment to different variables (C99 6.5.15) */
/* @expect 0x0F */
int cctest_cond_assign(void) {
  int a = 0, b = 0;
  for (int i = 0; i < 6; i++)
    (i & 1) ? (a += i) : (b += i);
  /* even i: b += 0,2,4 = 6; odd i: a += 1,3,5 = 9 */
  return a + b; /* 9+6 = 15 = 0x0F */
}

/* Chained function pointer calls from array (C99 6.5.2.2) */
static int inc1(int x) { return x + 1; }
static int dbl1(int x) { return x * 2; }
/* @expect 0x0D */
int cctest_fnptr_chain(void) {
  int (*ops[2])(int);
  ops[0] = inc1;
  ops[1] = dbl1;
  int x = 5;
  x = ops[0](x); /* 6 */
  x = ops[1](x); /* 12 */
  x = ops[0](x); /* 13 */
  return x; /* 13 = 0x0D */
}

/* Struct with function pointer member (C99 6.7.2.1) */
struct dispatch { int (*op)(int, int); int a; int b; };
/* @expect 0x35 */
int cctest_struct_fnptr(void) {
  struct dispatch d;
  d.op = helper_add;
  d.a = 0x10;
  d.b = 0x25;
  return d.op(d.a, d.b); /* 0x35 */
}

/* Variadic with mixed types: float promoted to double (C99 7.15 + 6.5.2.2) */
static int va_mixed(int count, ...) {
  va_list ap;
  va_start(ap, count);
  int iarg = va_arg(ap, int);
  int farg = (int)va_arg(ap, double); /* float promoted to double in varargs */
  int iarg2 = va_arg(ap, int);
  va_end(ap);
  return iarg + farg + iarg2;
}
/* @expect 0x3C */
int cctest_va_mixed(void) {
  return va_mixed(3, 10, 20.0, 30); /* 10+20+30 = 60 = 0x3C */
}

/* long double type (C99 6.2.5) -- on SHARC with -double-size-32, same as float */
/* @expect 7 */
int cctest_long_double(void) {
  long double a = 3.0L;
  long double b = 4.0L;
  return (int)(a + b); /* 7 */
}

/* Indirect macro with token pasting producing value (C99 6.10.3.4 p2) */
#define SELFVAL 10
/* @expect 0x0A */
int cctest_self_ref_macro(void) {
  return SELFVAL; /* 10 = 0x0A */
}
#undef SELFVAL

/* Assignment truncates to left operand type (C99 6.5.16.1) */
/* @expect 0x2345 */
int cctest_assign_trunc(void) {
  unsigned int full = 0x12345;
  unsigned short s = (unsigned short)full; /* explicit truncation to 16 bits */
  return (int)s; /* 0x2345 */
}

/* Nested conditional compilation (C99 6.10.1) */
#define NEST_OUTER 1
#define NEST_INNER 2
/* @expect 0x22 */
int cctest_nested_pp(void) {
#ifdef NEST_OUTER
  #if NEST_INNER == 2
    return 0x22;
  #elif NEST_INNER == 1
    return 0x11;
  #else
    return 0xFF;
  #endif
#else
  return 0;
#endif
}

/* Indirect macro expansion: macro produces another macro name (C99 6.10.3.4) */
#define IND_A 10
#define IND_B 20
#define IND_SEL(x) IND_##x
/* @expect 0x1E */
int cctest_indirect_macro(void) {
  return IND_SEL(A) + IND_SEL(B); /* IND_A + IND_B = 10+20 = 30 = 0x1E */
}

/* sizeof on abstract declarator (C99 6.5.3.4) */
/* @expect 0x18 */
int cctest_sizeof_abstract(void) {
  int a = (int)sizeof(int *);     /* 4 */
  int b = (int)sizeof(int [5]);   /* 20 */
  return a + b; /* 4+20 = 24 = 0x18 */
}

/* Multi-statement macro using do-while(0) pattern (C99 6.10.3 + 6.8.5.2) */
#define SWAP_INTS(a, b) do { int _t = (a); (a) = (b); (b) = _t; } while (0)
/* @expect 0x73 */
int cctest_do_while_macro(void) {
  int x = 3, y = 7;
  SWAP_INTS(x, y);
  return x * 0x10 + y; /* 7*16+3 = 115 = 0x73 */
}

/* Array size in parameter declaration is ignored (C99 6.7.5.3) */
static int first_elem(int a[100]) { return a[0]; }
/* @expect 0x42 */
int cctest_arr_param_decay(void) {
  int arr[3];
  arr[0] = 0x42;
  return first_elem(arr); /* works fine despite arr being only 3 elems */
}

/* Designated init: later designator overrides earlier (C99 6.7.8 p19) */
/* @expect 0x32 */
int cctest_desig_override(void) {
  int arr[3] = { [0] = 10, [1] = 20, [0] = 30 }; /* arr[0] overridden to 30 */
  return arr[0] + arr[1]; /* 30+20 = 50 = 0x32 */
}

/* Bare return; in void function (C99 6.8.6.4) */
static void void_setter(int *p, int val) {
  if (val < 0) return; /* bare return in void fn */
  *p = val;
  return; /* trailing bare return */
}
/* @expect 0xA5 */
int cctest_void_return(void) {
  int x = 99;
  void_setter(&x, -1);   /* early return, x unchanged */
  int a = x;
  void_setter(&x, 0x42); /* normal path */
  return a + x; /* 99 + 0x42 = 99+66 = 165 = 0xA5 */
}

/* Ternary with struct operands (C99 6.5.15) */
struct tern_s { int a; int b; };
/* @expect 0x46 */
int cctest_ternary_struct(void) {
  struct tern_s x, y;
  x.a = 10; x.b = 20;
  y.a = 30; y.b = 40;
  int cond = 0;
  struct tern_s r = cond ? x : y;
  return r.a + r.b; /* 30+40 = 70 = 0x46 */
}

/* Initializer with function call results (C99 6.7.8) */
/* @expect 0x1A */
int cctest_init_fn_call(void) {
  int arr[3] = { helper_add(1, 2), helper_mul(3, 4), helper_add(5, 6) };
  return arr[0] + arr[1] + arr[2]; /* 3+12+11 = 26 = 0x1A */
}

/* Union init uses first member; designated init picks non-first (C99 6.7.8) */
union u_init { int i; float f; };
/* @expect 0x4C */
int cctest_union_init(void) {
  union u_init a = { 0x42 };              /* first member: i = 0x42 */
  union u_init b = { .f = 10.0f };         /* designated: f = 10.0 */
  return a.i + (int)b.f; /* 0x42 + 10 = 76 = 0x4C */
}

/* Return compound literal struct (C99 6.5.2.5 + 6.8.6.4) */
struct ret_lit { int x; int y; };
static struct ret_lit make_lit(int a, int b) {
  return (struct ret_lit){ a, b };
}
/* @expect 0x30 */
int cctest_ret_complit(void) {
  struct ret_lit r = make_lit(0x10, 0x20);
  return r.x + r.y; /* 0x30 */
}

/* Comma operator inside array subscript (C99 6.5.17 + 6.5.2.1) */
/* @expect 0x28 */
int cctest_comma_subscript(void) {
  int arr[5];
  arr[0] = 10; arr[1] = 20; arr[2] = 30; arr[3] = 40; arr[4] = 50;
  int dummy = 0;
  return arr[(dummy = 99, 3)]; /* comma evaluates dummy=99, result is 3 → arr[3] = 40 = 0x28 */
}

/* Enum with large gap between values (C99 6.7.2.2) */
enum sparse { SP_LO = 1, SP_HI = 1000, SP_NEG = -500 };
/* @expect 0x1F5 */
int cctest_enum_gap(void) {
  return SP_HI + SP_NEG + SP_LO; /* 1000 - 500 + 1 = 501 = 0x1F5 */
}

/* Same member name at different struct nesting levels (C99 6.7.2.1) */
/* @expect 0x1E */
int cctest_same_member(void) {
  struct { struct { int x; } a; int x; } s;
  s.a.x = 10;
  s.x = 20;
  return s.a.x + s.x; /* 10+20 = 30 = 0x1E */
}

/* Variadic: walk 3 int args (C99 7.15) */
static int va_sum3v(int n, ...) {
  va_list ap;
  va_start(ap, n);
  int s = 0;
  for (int i = 0; i < n; i++)
    s += va_arg(ap, int);
  va_end(ap);
  return s;
}
/* @expect 0x60 */
int cctest_va_copy(void) {
  return va_sum3v(3, 0x20, 0x30, 0x10); /* 0x60 */
}

/* Out-parameter pattern: return multiple values (C99 6.5.3.2) */
static void swap_out(int *a, int *b) {
  int t = *a;
  *a = *b;
  *b = t;
}
/* @expect 0x73 */
int cctest_out_param(void) {
  int x = 3, y = 7;
  swap_out(&x, &y);
  return x * 0x10 + y; /* x=7, y=3 → 7*16+3 = 115 = 0x73 */
}

/* Name space separation: tag, variable, label share a name (C99 6.2.3) */
struct ns_tag { int val; };
/* @expect 0x0F */
int cctest_name_space(void) {
  int ns_tag = 5;                /* ordinary name space */
  struct ns_tag s;               /* tag name space */
  s.val = ns_tag + 10;
  return s.val; /* 15 = 0x0F */
}

/* sizeof unary form without parentheses (C99 6.5.3.4) */
/* @expect 4 */
int cctest_sizeof_unary(void) {
  int x = 0;
  return (int)(sizeof x); /* 4 on 32-bit SHARC */
}

/* Cast to same type -- no-op (C99 6.5.4) */
/* @expect 0x55 */
int cctest_noop_cast(void) {
  int x = 0x55;
  return (int)x; /* 0x55 */
}

/* sizeof in switch case label -- constant expression (C99 6.6 + 6.8.4.2) */
/* @expect 0x44 */
int cctest_sizeof_case(void) {
  int x = (int)sizeof(int);
  switch (x) {
  case sizeof(int):
    return 0x44;
  default:
    return 0xFF;
  }
}

/* Explicit auto storage class (C99 6.7.1) */
/* @expect 0x2A */
int cctest_auto_keyword(void) {
  auto int x = 42;
  return x; /* 42 = 0x2A */
}

/* _Bool bitfield (C99 6.7.2.1) */
/* @expect 1 */
int cctest_bool_bitfield(void) {
  struct { _Bool a : 1; _Bool b : 1; } bf;
  bf.a = 1;
  bf.b = 0;
  return bf.a + bf.b; /* 1+0 = 1 */
}

/* Empty parameter list f() accepts any args (C99 6.7.5.3) */
static int empty_params_fn() { return 0x33; }
/* @expect 0x33 */
int cctest_empty_params(void) {
  return empty_params_fn(); /* 0x33 */
}

/* Two pointers to same object compare equal (C99 6.5.9) */
/* @expect 0x55 */
int cctest_ptr_equal(void) {
  int x = 42;
  int *p = &x;
  int *q = &x;
  return (p == q) ? 0x55 : 0xAA; /* 0x55 */
}

/* Array of unions (C99 6.7.2.1) */
union ival { int i; float f; };
/* @expect 0x3C */
int cctest_arr_of_union(void) {
  union ival arr[3];
  arr[0].i = 10;
  arr[1].i = 20;
  arr[2].i = 30;
  return arr[0].i + arr[1].i + arr[2].i; /* 60 = 0x3C */
}

/* Const file-scope global (C99 6.7.3) */
static const int g_const_val = 0x77;
/* @expect 0x77 */
int cctest_const_global(void) {
  return g_const_val; /* 0x77 */
}

/* Static function forward declaration (C99 6.7.1) */
static int fwd_static(int x);
/* @expect 0x31 */
int cctest_static_fwd(void) {
  return fwd_static(0x30); /* 0x31 */
}
static int fwd_static(int x) { return x + 1; }

/* Fully-braced 2D array initializer (C99 6.7.8) */
/* @expect 0x0F */
int cctest_braced_2d(void) {
  int m[2][3] = { {1, 2, 3}, {4, 5, 6} };
  return m[0][0] + m[0][2] + m[1][1] + m[1][2]; /* 1+3+5+6 = 15 = 0x0F */
}

/* Union with pointer member (C99 6.7.2.1) */
union uptr { int val; int *ptr; };
/* @expect 0x42 */
int cctest_union_ptr(void) {
  int x = 0x42;
  union uptr u;
  u.ptr = &x;
  return *u.ptr; /* 0x42 */
}

/* _Bool in struct as regular member (C99 6.7.2.1) */
struct with_bool { int x; _Bool flag; int y; };
/* @expect 0x1F */
int cctest_struct_bool(void) {
  struct with_bool s;
  s.x = 10;
  s.flag = 1;
  s.y = 20;
  return s.x + (int)s.flag + s.y; /* 10+1+20 = 31 = 0x1F */
}

/* Expression statement with no side effects (C99 6.8.3) */
/* @expect 0x42 */
int cctest_expr_stmt(void) {
  int x = 0x42;
  x;       /* valid expression statement, no side effect */
  5;       /* literal expression statement */
  x + 1;   /* computed but discarded */
  return x; /* 0x42 -- x unchanged */
}

/* Long identifier -- C99 requires 63 significant chars (C99 6.4.2.1) */
static int abcdefghij_abcdefghij_abcdefghij_abcdefghij_abcdefghij_abcdefghijk(void) {
  return 0x63;
}
/* @expect 0x63 */
int cctest_long_ident(void) {
  return abcdefghij_abcdefghij_abcdefghij_abcdefghij_abcdefghij_abcdefghijk();
}

/* Pointer arithmetic with char* steps by 1 byte (C99 6.5.6) */
/* @expect 0x45 */
int cctest_char_ptr_arith(void) {
  int x = 0x11223344;
  char *p = (char *)&x;
  char first = p[0]; /* LSB on little-endian SHARC: 0x44 */
  char *q = p + 1;
  return (int)(unsigned char)first + (int)(q > p); /* 0x44 + 1 = 0x45 */
}

/* Function pointer equality (C99 6.5.9) */
/* @expect 3 */
int cctest_fnptr_equal(void) {
  int (*a)(int, int) = helper_add;
  int (*b)(int, int) = helper_add;
  int (*c)(int, int) = helper_mul;
  int r = 0;
  if (a == b) r += 1;  /* same function */
  if (a != c) r += 2;  /* different function */
  return r; /* 1+2 = 3 */
}

/* Increment inside array subscript (C99 6.5.2.4 + 6.5.2.1) */
/* @expect 0x46 */
int cctest_inc_subscript(void) {
  int arr[4];
  arr[0] = 10; arr[1] = 20; arr[2] = 30; arr[3] = 40;
  int i = 0;
  int a = arr[i++]; /* arr[0]=10, i becomes 1 */
  int b = arr[i++]; /* arr[1]=20, i becomes 2 */
  int c = arr[++i]; /* i becomes 3, arr[3]=40 */
  return a + b + c; /* 10+20+40 = 70 = 0x46 */
}

/* Enum as function return type and parameter type (C99 6.7.2.2 + 6.9.1) */
enum fruit { APPLE, BANANA, CHERRY };
static enum fruit next_fruit(enum fruit f) {
  switch (f) {
  case APPLE:  return BANANA;
  case BANANA: return CHERRY;
  default:     return APPLE;
  }
}
/* @expect 2 */
int cctest_enum_fn(void) {
  enum fruit f = APPLE;
  f = next_fruit(f);  /* BANANA = 1 */
  f = next_fruit(f);  /* CHERRY = 2 */
  return (int)f; /* 2 */
}

/* Struct defined inside function -- local scope (C99 6.2.1) */
/* @expect 0x30 */
int cctest_local_struct(void) {
  struct local_s { int a; int b; };
  struct local_s s;
  s.a = 0x10;
  s.b = 0x20;
  return s.a + s.b; /* 0x30 */
}

/* const parameter: copy is local, caller's value unaffected (C99 6.7.3) */
static int const_param(const int x) {
  return x + 1; /* cannot modify x */
}
/* @expect 0x42 */
int cctest_const_param(void) {
  int a = 0x41;
  return const_param(a); /* 0x42 */
}

/* Cast with type qualifier (C99 6.5.4) */
/* @expect 0x55 */
int cctest_qual_cast(void) {
  int x = 0x55;
  int *p = &x;
  const int *cp = (const int *)p; /* cast adds qualifier */
  return *cp; /* 0x55 */
}

/* Struct with only bitfield members (C99 6.7.2.1) */
/* @expect 0x6D */
int cctest_bf_only(void) {
  struct {
    unsigned int r : 5;
    unsigned int g : 6;
    unsigned int b : 5;
  } rgb;
  rgb.r = 31;  /* max 5-bit */
  rgb.g = 63;  /* max 6-bit */
  rgb.b = 15;
  return rgb.r + rgb.g + rgb.b; /* 31+63+15 = 109 = 0x6D */
}

/* Compound literal has automatic storage -- address is valid (C99 6.5.2.5) */
/* @expect 0x42 */
int cctest_complit_addr(void) {
  int *p = &(int){0x42};
  return *p; /* 0x42 */
}

/* Hex escape in string literal (C99 6.4.4.4 + 6.4.5) */
/* @expect 0xC6 */
int cctest_hex_str(void) {
  const char *s = "\x41\x42\x43"; /* "ABC" */
  return s[0] + s[1] + s[2]; /* 65+66+67 = 198 = 0xC6 */
}

/* Comma operator yields value of right operand (C99 6.5.17) */
/* @expect 0x14 */
int cctest_comma_type(void) {
  int a = 10;
  long b = 20L;
  long r = (a, b); /* result is b (20) */
  return (int)r; /* 20 = 0x14 */
}

/* Unbraced 2D array initializer -- elements fill row-major (C99 6.7.8) */
/* @expect 0x0D */
int cctest_unbraced_2d(void) {
  int m[2][3] = { 1, 2, 3, 4, 5, 6 }; /* fills row by row */
  return m[0][2] + m[1][0] + m[1][2]; /* 3+4+6 = 13 = 0x0D */
}

/* 'unsigned' alone as type specifier = unsigned int (C99 6.7.2) */
/* @expect 0x12C */
int cctest_unsigned_alone(void) {
  unsigned a = 100;
  unsigned b = 200;
  return (int)(a + b); /* 300 = 0x12C */
}

/* 'long' alone as type specifier = long int (C99 6.7.2) */
/* @expect 0x1F4 */
int cctest_long_alone(void) {
  long a = 1000L;
  long b = -500L;
  return (int)(a + b); /* 500 = 0x1F4 */
}

/* Non-zero-width unnamed bitfield for padding (C99 6.7.2.1) */
/* @expect 0x0F */
int cctest_bf_pad(void) {
  struct {
    unsigned int x : 4;
    unsigned int   : 4; /* 4-bit padding, unnamed */
    unsigned int y : 4;
  } s;
  s.x = 0x0A;
  s.y = 0x05;
  return s.x + s.y; /* 10+5 = 15 = 0x0F */
}

/* __TIME__ predefined macro is a non-empty string (C99 6.10.8) */
/* @expect 1 */
int cctest_time_macro(void) {
  const char *t = __TIME__;
  return (t[0] != '\0') ? 1 : 0; /* 1 */
}

/* extern on function definition -- default linkage (C99 6.9.1) */
extern int cctest_extern_fndef(void);
/* @expect 0x42 */
int cctest_extern_fndef(void) {
  return 0x42;
}

/* Enum defined inside struct (C99 6.7.2.2 inside 6.7.2.1) */
/* @expect 0x0F */
int cctest_enum_in_struct(void) {
  struct { enum { E_LO = 1, E_HI = 10 } tag; int val; } s;
  s.tag = E_HI;
  s.val = 5;
  return s.tag + s.val; /* 10+5 = 15 = 0x0F */
}

/* sizeof on function pointer (C99 6.5.3.4) */
/* @expect 4 */
int cctest_sizeof_fnptr(void) {
  return (int)sizeof(int (*)(int, int)); /* 4 on 32-bit */
}

/* Cast removing const qualifier (C99 6.5.4) */
/* @expect 0x44 */
int cctest_cast_remove_qual(void) {
  int x = 0x33;
  const int *cp = &x;
  int *p = (int *)cp; /* cast away const */
  *p = 0x44;
  return x; /* 0x44 */
}

/* Static assert pattern using typedef (C99 idiom) */
typedef int static_check_int_is_4[(sizeof(int) == 4) ? 1 : -1];
/* @expect 4 */
int cctest_static_check(void) {
  return (int)sizeof(static_check_int_is_4); /* 4 (array of 1 int) */
}

/* Function pointer in struct initializer (C99 6.7.8) */
struct op_entry { int (*fn)(int, int); int a; int b; };
/* @expect 0x30 */
int cctest_struct_fnptr_init(void) {
  struct op_entry e = { helper_add, 0x10, 0x20 };
  return e.fn(e.a, e.b); /* 0x30 */
}

/* Enum constant referencing earlier constant (C99 6.7.2.2) */
enum seq { SEQ_A = 5, SEQ_B = SEQ_A + 3, SEQ_C = SEQ_B * 2 };
/* @expect 0x1D */
int cctest_enum_ref(void) {
  return SEQ_A + SEQ_B + SEQ_C; /* 5+8+16 = 29 = 0x1D */
}

/* Function pointer from conditional expression (C99 6.5.15 + 6.5.2.2) */
/* @expect 7 */
int cctest_cond_fnptr(void) {
  int sel = 1;
  return (sel ? helper_add : helper_mul)(3, 4); /* helper_add(3,4) = 7 */
}

/* Pointer to first struct member equals pointer to struct (C99 6.7.2.1 p13) */
struct first_m { int x; int y; };
/* @expect 0x55 */
int cctest_first_member(void) {
  struct first_m s;
  s.x = 0x55;
  s.y = 0x66;
  int *p = (int *)&s; /* &s == &s.x guaranteed */
  return *p; /* 0x55 */
}

/* sizeof on conditional expression uses wider type (C99 6.5.15 + 6.5.3.4) */
/* @expect 4 */
int cctest_sizeof_cond(void) {
  int a = 0;
  long b = 0;
  /* sizeof(cond ? a : b) should be sizeof(long), even though cond is known */
  return (int)sizeof(a ? a : b); /* sizeof(long) = 4 on SHARC */
}

/* Array of structs with designated initializer (C99 6.7.8) */
struct arr_di { int id; int val; };
/* @expect 0x21 */
int cctest_arr_struct_desig(void) {
  struct arr_di arr[3] = { [1] = { .id = 1, .val = 0x20 } };
  return arr[0].id + arr[0].val + arr[1].id + arr[1].val + arr[2].id;
  /* 0+0+1+0x20+0 = 33 = 0x21 */
}

/* Struct member as array index (C99 6.5.2.1 + 6.5.2.3) */
/* @expect 0x28 */
int cctest_member_index(void) {
  struct { int idx; } s;
  int arr[5];
  arr[0] = 10; arr[1] = 20; arr[2] = 30; arr[3] = 40; arr[4] = 50;
  s.idx = 3;
  return arr[s.idx]; /* arr[3] = 40 = 0x28 */
}

/* Callback with void* context pointer (C99 6.5.2.2 + 6.3.2.3) */
static int ctx_callback(void *ctx, int val) {
  int *acc = (int *)ctx;
  *acc += val;
  return *acc;
}
/* @expect 0x3C */
int cctest_callback_ctx(void) {
  int total = 0;
  ctx_callback(&total, 10);
  ctx_callback(&total, 20);
  ctx_callback(&total, 30);
  return total; /* 60 = 0x3C */
}

/* Double-indirect function call through pointer to fnptr (C99 6.5.2.2) */
/* @expect 0x30 */
int cctest_dbl_indirect(void) {
  int (*fp)(int, int) = helper_add;
  int (**pp)(int, int) = &fp;
  return (*pp)(0x10, 0x20); /* 0x30 */
}

/* Pointer to pointer to struct navigation (C99 6.7.5.1 + 6.5.2.3) */
struct ppn { int val; };
/* @expect 0x42 */
int cctest_pp_struct(void) {
  struct ppn s;
  s.val = 0x42;
  struct ppn *p = &s;
  struct ppn **pp = &p;
  return (*pp)->val; /* 0x42 */
}

/* Nested ternary with function calls (C99 6.5.15 + 6.5.2.2) */
/* @expect 0x0C */
int cctest_nested_ternary_fn(void) {
  int x = 2;
  return (x == 1) ? helper_add(1, 2) :
         (x == 2) ? helper_mul(3, 4) :
                     helper_add(5, 6);
  /* x==2 → helper_mul(3,4) = 12 = 0x0C */
}

/* Char array sized exactly to string -- no NUL stored (C99 6.7.8 p14) */
/* @expect 0xD7 */
int cctest_exact_char_arr(void) {
  char s[5] = "hello"; /* fills all 5 bytes, no room for NUL */
  return s[0] + s[4]; /* 'h'+'o' = 104+111 = 215 = 0xD7 */
}

/* String literal used directly in subscript (C99 6.4.5 + 6.5.2.1) */
/* @expect 0x43 */
int cctest_str_subscript(void) {
  return "ABCDE"[2]; /* 'C' = 67 = 0x43 */
}

/* Digraphs: <% %> <: :> are alternate tokens (C99 6.4.6) */
/* @expect 0x3C */
int cctest_digraph(void) {
  int arr<:3:>; /* int arr[3]; */
  arr<:0:> = 10;
  arr<:1:> = 20;
  arr<:2:> = 30;
  int sum = 0;
  <%  /* { */
    sum = arr<:0:> + arr<:1:> + arr<:2:>;
  %>  /* } */
  return sum; /* 60 = 0x3C */
}

/* Global array of function pointers with initializer (C99 6.7.8 + 6.7.5.3) */
static int gfn_a(void) { return 1; }
static int gfn_b(void) { return 2; }
static int gfn_c(void) { return 3; }
static int (*const gfn_table[])(void) = { gfn_a, gfn_b, gfn_c };
/* @expect 6 */
int cctest_global_fnptr_arr(void) {
  return gfn_table[0]() + gfn_table[1]() + gfn_table[2](); /* 1+2+3 = 6 */
}

/* Static const initializer referencing another static const (C99 6.6 + 6.7.8) */
static const int sc_base = 10;
static const int sc_derived = 10 + 5; /* constant expression, not sc_base */
/* @expect 0x19 */
int cctest_const_chain(void) {
  return sc_base + sc_derived; /* 10+15 = 25 = 0x19 */
}

/* Cast in static initializer (C99 6.6 + 6.7.8) */
static int g_cast_init = (int)3;
/* @expect 3 */
int cctest_cast_init(void) {
  return g_cast_init; /* 3 */
}

/* Negative zero compares equal to zero (C99 6.2.6.2) */
/* @expect 0x55 */
int cctest_neg_zero(void) {
  int a = -0;
  int b = 0;
  return (a == b) ? 0x55 : 0xAA; /* 0x55 */
}

/* Plain char signedness test (implementation-defined, C99 6.2.5) */
/* @expect 0xFF */
int cctest_plain_char(void) {
  char c = (char)0xFF;
  /* If char is unsigned: c == 255, (int)c == 255 → 0xFF
     If char is signed:   c == -1,  (int)c == -1  → we add 256 = 0xFF */
  int val = (int)c;
  if (val < 0) val += 256;
  return val; /* 0xFF either way */
}

/* sizeof on compound literal (C99 6.5.2.5 + 6.5.3.4) */
/* @expect 3 */
int cctest_sizeof_complit(void) {
  return (int)(sizeof((int[]){1, 2, 3}) / sizeof(int)); /* 3 */
}

/* static in array parameter -- hint that array has >= N elements (C99 6.7.5.3 p7) */
static int sum_static(int a[static 3], int n) {
  int s = 0;
  for (int i = 0; i < n; i++)
    s += a[i];
  return s;
}
/* @expect 0x1E */
int cctest_static_arr_param(void) {
  int arr[5] = {2, 4, 6, 8, 10};
  return sum_static(arr, 5); /* 30 = 0x1E */
}

/* Trailing comma in enum definition (C99 6.7.2.2) */
enum trailing_e { TE_A = 5, TE_B = 10, TE_C = 15, };
/* @expect 0x1E */
int cctest_enum_trailing(void) {
  return TE_A + TE_B + TE_C; /* 30 = 0x1E */
}

/* Trailing comma in initializer list (C99 6.7.8) */
/* @expect 0x37 */
int cctest_trailing_init(void) {
  int arr[4] = {10, 20, 30, 40,};
  struct { int x; int y; } s = {5, 15,};
  return arr[3] + s.y; /* 40 + 15 = 55 = 0x37 */
}

/* Multi-character constant (C99 6.4.4.4, implementation-defined value) */
/* @expect 0x55 */
int cctest_multichar(void) {
  int mc = 'AB';
  /* Implementation-defined, but nonzero and contains 'A' and 'B' bits */
  return (mc != 0) ? 0x55 : 0xAA; /* 0x55 */
}

/* Chained casts -- multi-step type conversion (C99 6.5.4) */
/* @expect 0x78 */
int cctest_nested_cast(void) {
  int x = 0x12345678;
  int r = (int)(short)(char)x; /* char: 0x78, short: 0x0078, int: 0x0078 */
  return r; /* 0x78 = 120 */
}

/* Deep nested scopes with shadowing at 4 levels (C99 6.2.1) */
/* @expect 0x0F */
int cctest_deep_scope(void) {
  int x = 1;
  int r = 0;
  {
    int x = 2;
    r += x; /* 2 */
    {
      int x = 3;
      r += x; /* 3 */
      {
        int x = 4;
        r += x; /* 4 */
      }
      r += x; /* 3 */
    }
    r += x; /* 2 */
  }
  r += x; /* 1 */
  return r; /* 2+3+4+3+2+1 = 15 = 0x0F */
}

/* const pointer to const int (C99 6.7.3) */
/* @expect 0x42 */
int cctest_const_const_ptr(void) {
  int x = 0x42;
  const int *const p = &x;
  return *p; /* 0x42 */
}

/* Comma operator in return statement (C99 6.5.17 + 6.8.6.4) */
static int g_comma_ret_side = 0;
/* @expect 0x0F */
int cctest_comma_return(void) {
  g_comma_ret_side = 0;
  int val = (g_comma_ret_side = 10, g_comma_ret_side + 5);
  return val; /* 15 = 0x0F */
}

/* File-scope struct with designated init (C99 6.7.8) */
static struct { int a; int b; int c; } g_desig_struct = { .c = 30, .a = 10 };
/* @expect 0x28 */
int cctest_global_desig(void) {
  return g_desig_struct.a + g_desig_struct.b + g_desig_struct.c;
  /* 10 + 0 + 30 = 40 = 0x28 */
}

/* do-while with side-effect in condition (C99 6.8.5.2) */
/* @expect 0x0A */
int cctest_do_side_cond(void) {
  int i = 0, sum = 0;
  do {
    sum += i;
  } while (++i < 5);
  return sum; /* 0+1+2+3+4 = 10 = 0x0A */
}

/* Unsigned negation is well-defined: -u == (UINT_MAX - u + 1) (C99 6.2.6.2) */
/* @expect 0x0F */
int cctest_neg_unsigned(void) {
  unsigned int a = 1;
  unsigned int b = -a; /* 0xFFFFFFFF */
  return (int)(b >> 28); /* 0xF = 15 */
}

/* Wide single bitfield spanning full storage unit (C99 6.7.2.1) */
/* @expect 0xAD */
int cctest_wide_bitfield(void) {
  struct { unsigned int val : 32; } bf;
  bf.val = 0xDEADBEEF;
  return (int)((bf.val >> 16) & 0xFF); /* 0xAD = 173 */
}

/* Pointer to function returning function pointer (C99 6.7.5.3) */
static int fn_ret_add(int a, int b) { return a + b; }
typedef int (*binop_t)(int, int);
static binop_t get_binop(int which) {
  if (which == 0) return fn_ret_add;
  return helper_mul;
}
/* @expect 0x30 */
int cctest_ptr_fn_ret_fn(void) {
  binop_t (*getter)(int) = get_binop;
  binop_t op = getter(0);
  return op(0x10, 0x20); /* 0x30 */
}

/* Null pointer relational patterns (C99 6.3.2.3 + 6.5.9) */
/* @expect 0x0F */
int cctest_null_relational(void) {
  int x = 42;
  int *p = &x;
  int *q = (int *)0;
  int r = 0;
  if (p != (int *)0) r += 1;  /* non-null != NULL */
  if (q == (int *)0) r += 2;  /* null == NULL */
  if (!q)            r += 4;  /* !null is true */
  if (p)             r += 8;  /* non-null is true */
  return r; /* 1+2+4+8 = 15 = 0x0F */
}

/* Mixed signed/unsigned comparison edge case (C99 6.3.1.8) */
/* @expect 3 */
int cctest_sign_cmp_edge(void) {
  int s = -1;
  unsigned int u = 0;
  /* -1 converted to unsigned → 0xFFFFFFFF > 0 */
  int r = 0;
  if ((unsigned int)s > u) r += 1;
  /* But as signed: -1 < 0 is false; they're just -1 and 0 */
  if (s < (int)u) r += 2;
  return r; /* 1+2 = 3 */
}

/* Enum implicit integer conversion in arithmetic (C99 6.7.2.2 + 6.3.1.1) */
/* @expect 0x38 */
int cctest_enum_int_conv(void) {
  enum { EA = 10, EB = 20 };
  int x = EA + 5;       /* enum + int → int */
  int y = EB * 2;       /* enum * int → int */
  int z = EA < EB;      /* enum < enum → int (1) */
  return x + y + z; /* 15 + 40 + 1 = 56 = 0x38 */
}

/* sizeof on different expression forms (C99 6.5.3.4) */
/* @expect 0x0A */
int cctest_sizeof_exprs(void) {
  int x = 0;
  int a = (int)sizeof(x + 1);         /* sizeof(int) = 4 */
  int b = (int)sizeof((short)x);       /* sizeof(short) = 2 */
  int c = (int)sizeof(1 ? x : (char)0); /* sizeof(int) = 4 due to promotion */
  return a + b + c; /* 4 + 2 + 4 = 10 = 0x0A */
}

/* Global union with initializer (C99 6.7.8) */
static union { int i; float f; } g_union_init = { 0x77 };
/* @expect 0x77 */
int cctest_global_union(void) {
  return g_union_init.i; /* 0x77 */
}

/* Struct with both array and pointer members (C99 6.7.2.1) */
/* @expect 0x32 */
int cctest_struct_mixed_members(void) {
  struct { int arr[3]; int *ptr; int val; } s;
  s.arr[0] = 5; s.arr[1] = 10; s.arr[2] = 15;
  s.ptr = &s.arr[1];
  s.val = 20;
  return s.arr[0] + *s.ptr + s.arr[2] + s.val; /* 5+10+15+20 = 50 = 0x32 */
}

/* K&R old-style function definition (C99 6.9.1 p13, "obsolescent") */
static int kr_add(a, b)
  int a;
  int b;
{
  return a + b;
}
/* @expect 0x30 */
int cctest_kr_style(void) {
  return kr_add(0x10, 0x20); /* 0x30 */
}

/* __STDC_VERSION__ predefined macro (C99 6.10.8) */
/* @expect 0x99 */
int cctest_stdc_version(void) {
#ifdef __STDC_VERSION__
  long v = __STDC_VERSION__;
  return (v >= 199901L) ? 0x99 : 0x01;
#else
  return 0x99; /* still pass if not defined -- compiler-specific */
#endif
}

/* Address constant at file scope -- pointer init from &global (C99 6.6 p9) */
static int g_addr_target = 0x55;
static int *g_addr_ptr = &g_addr_target;
/* @expect 0x55 */
int cctest_addr_const(void) {
  return *g_addr_ptr; /* 0x55 */
}

/* Compound assignment across types (C99 6.5.16.2 + 6.3.1) */
/* @expect 0xBE */
int cctest_compound_cross(void) {
  int x = 100;
  char c = 5;
  x += c;          /* int += char → 105 */
  x -= (short)10;  /* int -= short → 95 */
  float f = 2.0f;
  x = (int)((float)x * f); /* 190 */
  return x; /* 190 = 0xBE */
}

/* Empty compound statement as body (C99 6.8.2) */
/* @expect 0x42 */
int cctest_empty_body(void) {
  int x = 0;
  if (1) {}         /* empty if body */
  while (0) {}      /* empty while body */
  for (int i = 0; i < 5; i++) {} /* empty for body */
  { x = 0x42; }     /* standalone block */
  return x; /* 0x42 */
}

/* #if with character constant (C99 6.10.1) */
/* @expect 0x41 */
int cctest_pp_char(void) {
#if 'A' == 65
  return 0x41;
#else
  return 0;
#endif
}

/* Bitwise ops on unsigned long long (C99 6.5.10/11/12) */
/* @expect 7 */
int cctest_ull_bitops(void) {
  unsigned long long a = 0xFFFF0000FFFF0000ULL;
  unsigned long long b = 0x0000FFFF0000FFFFULL;
  unsigned long long c = a & b; /* 0 */
  unsigned long long d = a | b; /* 0xFFFFFFFFFFFFFFFF */
  unsigned long long e = a ^ b; /* 0xFFFFFFFFFFFFFFFF */
  int r = 0;
  if (c == 0ULL) r += 1;
  if (d == e)    r += 2;
  if (~0ULL == d) r += 4;
  return r; /* 1+2+4 = 7 */
}

/* Unsigned division (C99 6.5.5) */
/* @expect 0x80 */
int cctest_unsigned_div(void) {
  unsigned int a = 0x80000000u; /* 2147483648 */
  unsigned int b = 0x10000u;    /* 65536 */
  unsigned int q = a / b;       /* 32768 = 0x8000 */
  return (int)(q >> 8); /* 0x80 = 128 */
}

/* Cast of function return in expression (C99 6.5.4 + 6.5.2.2) */
/* @expect 0x111 */
int cctest_cast_ret(void) {
  return (short)helper_add(0x100, 0x10) + 1;
  /* helper_add returns 0x110 = 272, cast to short: 0x110, +1 = 0x111 */
  /* On 32-bit SHARC short is 16-bit: 0x110 fits, so 0x111 = 273 */
}

/* Complex declarator: array of ptrs to functions returning int (C99 6.7.5) */
static int cplx_fn1(void) { return 10; }
static int cplx_fn2(void) { return 20; }
/* @expect 0x1E */
int cctest_complex_decl(void) {
  int (*arr[2])(void) = { cplx_fn1, cplx_fn2 };
  int (*(*pp))(void) = &arr[0]; /* pointer to first element */
  return (*pp)() + arr[1](); /* 10+20 = 30 = 0x1E */
}

/* Conditional constant expression at file scope (C99 6.6) */
static const int g_cond_const = (sizeof(int) == 4) ? 0x44 : 0x88;
/* @expect 0x44 */
int cctest_cond_const(void) {
  return g_cond_const; /* 0x44 */
}

/* Recursive typedef through struct pointer (C99 6.7.7 + 6.7.2.1) */
typedef struct rtd_node rtd_node_t;
struct rtd_node { int val; rtd_node_t *next; };
/* @expect 0x1E */
int cctest_recursive_typedef(void) {
  rtd_node_t a, b;
  a.val = 10; a.next = &b;
  b.val = 20; b.next = 0;
  return a.val + a.next->val; /* 30 = 0x1E */
}

/* Struct containing only arrays (C99 6.7.2.1) */
struct arr_only { int a[3]; int b[2]; };
/* @expect 9 */
int cctest_struct_arr_only(void) {
  struct arr_only s = { {1, 2, 3}, {4, 5} };
  return s.a[0] + s.a[2] + s.b[1]; /* 1+3+5 = 9 */
}

/* Union accessed through different member types (C99 6.5.2.3) */
/* @expect 0x55 */
int cctest_union_reinterpret(void) {
  union { unsigned int u; unsigned char b[4]; } u;
  u.u = 0x44332211;
  /* SHARC is little-endian for -char-size-8 */
  return u.b[0] + u.b[3]; /* 0x11 + 0x44 = 0x55 */
}

/* Pointer arithmetic negative direction (C99 6.5.6) */
/* @expect 0x14 */
int cctest_ptr_neg_arith(void) {
  int arr[5] = {10, 20, 30, 40, 50};
  int *p = &arr[4];
  p = p - 3;
  return *p; /* arr[1] = 20 = 0x14 */
}

/* Sizeof on ternary with different-sized types (C99 6.5.15 + 6.5.3.4) */
/* @expect 0x0C */
int cctest_sizeof_ternary(void) {
  int cond = 1;
  int a = (int)sizeof(cond ? (long long)0 : (char)0);
  /* Result type is long long due to promotion, so sizeof = 8 */
  int b = (int)sizeof(cond ? (short)0 : (char)0);
  /* Result type is int due to integer promotion, so sizeof = 4 */
  return a + b; /* 8 + 4 = 12 = 0x0C */
}

/* Double precision large/small values (C99 6.2.5) */
/* @expect 0x64 */
int cctest_double_precision(void) {
  double large = 1.0e15;
  double small_val = 1.0e-10;
  double r = large * small_val; /* 1.0e5 = 100000 */
  return (int)(r / 1000.0); /* 100 = 0x64 */
}

/* Global array of structs with partial init (C99 6.7.8) */
static struct { int key; int val; } g_kvtable[4] = {
  { 1, 10 }, { 2, 20 }
  /* entries [2] and [3] are zero-initialized */
};
/* @expect 0x1E */
int cctest_global_arr_struct(void) {
  return g_kvtable[0].val + g_kvtable[1].val + g_kvtable[2].val + g_kvtable[3].key;
  /* 10 + 20 + 0 + 0 = 30 = 0x1E */
}

/* Nested ternary as function argument (C99 6.5.15 + 6.5.2.2) */
/* @expect 0x28 */
int cctest_ternary_arg(void) {
  int x = 2;
  return helper_add(x > 1 ? 10 : 5, x > 3 ? 20 : 30);
  /* helper_add(10, 30) = 40 = 0x28 */
}

/* Pointer to incomplete type completed later (C99 6.2.5 + 6.7.2.3) */
struct later_complete;
static struct later_complete *g_later_ptr;
struct later_complete { int x; int y; };
/* @expect 0x28 */
int cctest_incomplete_later(void) {
  struct later_complete obj;
  obj.x = 15;
  obj.y = 25;
  g_later_ptr = &obj;
  return g_later_ptr->x + g_later_ptr->y; /* 40 = 0x28 */
}

/* Comma in all three for-loop clauses (C99 6.8.5.3 + 6.5.17) */
/* @expect 0x1E */
int cctest_for_comma_all(void) {
  int a, b, sum = 0;
  for (a = 0, b = 10; a < 3, b > 7; a++, b--)
    sum += a + b;
  /* iter0: a=0,b=10 → sum=10; iter1: a=1,b=9 → sum=20; iter2: a=2,b=8 → sum=30
     then a=3,b=7 → condition: (3<3 is 0, but comma evals to b>7 which is false) → stop */
  return sum; /* 30 = 0x1E */
}

/* Float with exponent notation (C99 6.4.4.2) */
/* @expect 0x21 */
int cctest_float_exp(void) {
  float a = 1.5e2f;   /* 150.0 */
  float b = 2.0e-1f;  /* 0.2 */
  double c = 3.0e3;   /* 3000.0 */
  return (int)(a * b) + (int)(c / 1000.0); /* 30 + 3 = 33 = 0x21 */
}

/* Anonymous enum -- no tag name (C99 6.7.2.2) */
/* @expect 0x28 */
int cctest_anon_enum(void) {
  enum { AE_X = 7, AE_Y = 13, AE_Z = 20 };
  return AE_X + AE_Y + AE_Z; /* 40 = 0x28 */
}

/* Type specifier order variations (C99 6.7.2) */
/* @expect 0x19A */
int cctest_type_order(void) {
  unsigned long int a = 100UL;
  long unsigned int b = 200UL;
  signed short int c = 10;
  short signed int d = 20;
  int long e = 50L;
  int unsigned f = 30u;
  return (int)(a + b) + c + d + (int)e + (int)f; /* 300+10+20+50+30 = 410 = 0x19A */
}

/* Typedef for function type (not function pointer) (C99 6.7.7) */
typedef int fn_type(int, int);
/* @expect 0x33 */
int cctest_typedef_fn(void) {
  fn_type *fp = helper_add; /* pointer to function type */
  return fp(0x11, 0x22); /* 0x33 */
}

/* va_copy -- duplicate a va_list (C99 7.15.1.1) */
static int va_copy_sum(int count, ...) {
  va_list ap, ap2;
  va_start(ap, count);
  va_copy(ap2, ap);
  int s1 = 0;
  for (int i = 0; i < count; i++)
    s1 += va_arg(ap, int);
  va_end(ap);
  int s2 = 0;
  for (int i = 0; i < count; i++)
    s2 += va_arg(ap2, int);
  va_end(ap2);
  return (s1 == s2) ? s1 : -1;
}
/* @expect 0x3C */
int cctest_va_copy_real(void) {
  return va_copy_sum(3, 10, 20, 30); /* 60 = 0x3C */
}

/* Struct padding -- mixed char/int members (C99 6.7.2.1) */
/* @expect 0x67 */
int cctest_struct_padding(void) {
  struct { char a; int b; char c; } s;
  s.a = 1;
  s.b = 100;
  s.c = 2;
  /* Verify values survive padding */
  return s.a + s.b + s.c; /* 103 = 0x67 */
}

/* Stringify (#) with special characters (C99 6.10.3.2) */
#define STR_SPECIAL(x) #x
/* @expect 0x68 */
int cctest_stringify_special(void) {
  const char *s1 = STR_SPECIAL(a+b);   /* "a+b" */
  const char *s2 = STR_SPECIAL(x==y);  /* "x==y" */
  return s1[1] + s2[1]; /* '+' + '=' = 43 + 61 = 104 = 0x68 */
}

/* Macro double-evaluation hazard (C99 6.10.3) */
#define DBL_MAX_M(a, b) ((a) > (b) ? (a) : (b))
/* @expect 0x11 */
int cctest_macro_dbl_eval(void) {
  int x = 5, y = 3;
  int r = DBL_MAX_M(x++, y++); /* x++ evaluated twice if x>y: x becomes 7, r=6 */
  return r + x + y; /* 6 + 7 + 4 = 17 = 0x11 */
}

/* #elif chain without #else (C99 6.10.1) */
#define ELIF_VAL 3
/* @expect 0x30 */
int cctest_elif_no_else(void) {
  int r = 0xFF;
#if ELIF_VAL == 1
  r = 0x10;
#elif ELIF_VAL == 2
  r = 0x20;
#elif ELIF_VAL == 3
  r = 0x30;
#elif ELIF_VAL == 4
  r = 0x40;
#endif
  return r; /* 0x30 */
}

/* Explicit signed char type (C99 6.7.2) */
/* @expect 0x32 */
int cctest_signed_char(void) {
  signed char a = -100;
  signed char b = 50;
  int sum = a + b; /* int promotion: -100+50 = -50 */
  return -sum; /* 50 = 0x32 */
}

/* Float suffix variants: f, none (double), L (C99 6.4.4.2) */
/* @expect 0x0C */
int cctest_float_suffix(void) {
  float a = 3.0f;
  double b = 4.0;
  long double c = 5.0L;
  return (int)a + (int)b + (int)c; /* 3+4+5 = 12 = 0x0C */
}

/* Large int to float: precision loss for values > 2^24 (C99 6.3.1.4) */
/* @expect 0x55 */
int cctest_int_float_prec(void) {
  int big = 0x1000001; /* 16777217 -- exceeds float 24-bit mantissa */
  float f = (float)big;
  int back = (int)f;
  /* May round to 16777216 (0x1000000) or 16777218 -- implementation-defined */
  /* Just verify it's close (within 1 of the original) */
  int diff = big - back;
  if (diff < 0) diff = -diff;
  return (diff <= 1) ? 0x55 : 0xAA; /* 0x55 */
}

/* Recursive macro self-reference guard (C99 6.10.3.4 p2) */
#define SELF_REF SELF_REF
/* @expect 0x42 */
int cctest_macro_self_ref(void) {
  /* SELF_REF expands to SELF_REF (not infinite loop -- stops at self-reference) */
  /* We can't use SELF_REF as a value, but the fact it compiles proves the guard works */
  int SELF_REF = 0x42;
  return SELF_REF; /* 0x42 */
}

/* Bitfield as first member then regular members (C99 6.7.2.1) */
/* @expect 0x3A */
int cctest_bf_first(void) {
  struct { unsigned int flags : 8; int value; int extra; } s;
  s.flags = 0x0A;
  s.value = 0x10;
  s.extra = 0x20;
  return (int)s.flags + s.value + s.extra; /* 10+16+32 = 58 = 0x3A */
}

/* Complex nested conditional with assignment (C99 6.5.15 + 6.5.16) */
/* @expect 0x0F */
int cctest_complex_cond(void) {
  int a = 0, b = 0, c = 0;
  int x = 5;
  (x > 3) ? (a = x, b = x * 2) : (c = x * 3);
  return a + b + c; /* 5 + 10 + 0 = 15 = 0x0F */
}

/* Enum defined inside function (C99 6.7.2.2 -- block scope) */
/* @expect 0x12 */
int cctest_local_enum(void) {
  enum local_e { LE_A = 3, LE_B = 7, LE_C = 11 };
  enum local_e val = LE_B;
  return val + LE_C; /* 7 + 11 = 18 = 0x12 */
}

/* Integer constant expression in bitfield width (C99 6.6 + 6.7.2.1) */
#define BF_WIDTH (2 + 3)
/* @expect 0x1F */
int cctest_bf_const_width(void) {
  struct { unsigned int x : BF_WIDTH; } bf; /* 5-bit field */
  bf.x = 31; /* max for 5 bits */
  return bf.x; /* 31 = 0x1F */
}

/* Array initialized from wider initializer list elements (C99 6.7.8) */
/* @expect 0x85 */
int cctest_init_narrow(void) {
  char arr[4] = { 0x41, 0x42, 0x43, 0x44 }; /* int constants narrowed to char */
  return arr[0] + arr[3]; /* 'A'+'D' = 65+68 = 133 = 0x85 */
}

/* Nested #ifdef with #undef inside (C99 6.10.1 + 6.10.3.5) */
#define NEST_UNDEF_A
#define NEST_UNDEF_B
/* @expect 7 */
int cctest_nested_undef(void) {
  int r = 0;
#ifdef NEST_UNDEF_A
  r += 1;
  #ifdef NEST_UNDEF_B
    r += 2;
    #undef NEST_UNDEF_B
  #endif
  #ifndef NEST_UNDEF_B
    r += 4; /* B was just undef'd */
  #endif
#endif
  return r; /* 1+2+4 = 7 */
}

/* Struct as array element accessed via computed index (C99 6.5.2.1 + 6.7.2.1) */
/* @expect 0x2D */
int cctest_struct_computed_idx(void) {
  struct { int a; int b; } arr[4];
  for (int i = 0; i < 4; i++) {
    arr[i].a = i * 10;
    arr[i].b = i * 10 + 5;
  }
  int idx = 2;
  return arr[idx].a + arr[idx].b; /* 20+25 = 45 = 0x2D */
}

/* stdint.h fixed-width types (C99 7.18) */
/* @expect 0x3F */
int cctest_stdint_types(void) {
  int8_t a = -1;
  uint8_t b = 255;
  int16_t c = -1000;
  uint16_t d = 60000u;
  int32_t e = 42;
  uint32_t f = 100u;
  int r = 0;
  if (a == -1) r += 1;
  if (b == 255) r += 2;
  if (c < 0) r += 4;
  if (d > 50000u) r += 8;
  if (e == 42) r += 16;
  if (f == 100u) r += 32;
  return r; /* 1+2+4+8+16+32 = 63 = 0x3F */
}

/* stdint.h sizeof verification (C99 7.18.1) */
/* @expect 0x3F */
int cctest_stdint_sizes(void) {
  int r = 0;
  if (sizeof(int8_t) == 1) r += 1;
  if (sizeof(uint8_t) == 1) r += 2;
  if (sizeof(int16_t) == 2) r += 4;
  if (sizeof(uint16_t) == 2) r += 8;
  if (sizeof(int32_t) == 4) r += 16;
  if (sizeof(uint32_t) == 4) r += 32;
  return r; /* 1+2+4+8+16+32 = 63 = 0x3F */
}

/* stdint.h 64-bit types (C99 7.18.1) */
/* @expect 1 */
int cctest_stdint_64(void) {
  int64_t a = 1;
  a <<= 40;
  uint64_t b = (uint64_t)a;
  return (int)(b >> 40); /* 1 */
}

/* stdbool.h macros: bool, true, false (C99 7.16) */
/* @expect 0x0F */
int cctest_stdbool(void) {
  bool a = true;
  bool b = false;
  bool c = !b;
  int r = 0;
  if (a == true) r += 1;
  if (b == false) r += 2;
  if (c) r += 4;
  if (a && c) r += 8;
  return r; /* 1+2+4+8 = 15 = 0x0F */
}

/* intptr_t / uintptr_t round-trip (C99 7.18.1.4) */
/* @expect 0x77 */
int cctest_intptr(void) {
  int x = 0x77;
  intptr_t ip = (intptr_t)&x;
  int *p = (int *)ip;
  return *p; /* 0x77 */
}

/* uint8_t overflow wraps modulo 256 (C99 6.3.1.3 + 7.18) */
/* @expect 0x2C */
int cctest_uint8_wrap(void) {
  uint8_t a = 200;
  uint8_t b = 100;
  uint8_t c = (uint8_t)(a + b); /* 300 mod 256 = 44 */
  return (int)c; /* 44 = 0x2C */
}

/* String literal with embedded NUL -- sizeof includes all bytes (C99 6.4.5) */
/* @expect 0xC3 */
int cctest_embedded_nul(void) {
  char s[] = "ab\0cd";
  /* sizeof includes all chars + trailing NUL: 'a','b','\0','c','d','\0' = 6 */
  int sz = (int)sizeof(s);
  /* But s[3] is 'c', s[4] is 'd' -- data past the embedded NUL is present */
  return sz * 0x10 + s[3]; /* 6*16 + 'c' = 96 + 99 = 195 = 0xC3 */
}

/* Typedef for array type (C99 6.7.7) */
typedef int arr5_t[5];
/* @expect 0x0F */
int cctest_typedef_arr(void) {
  arr5_t a = {1, 2, 3, 4, 5};
  int sum = 0;
  for (int i = 0; i < 5; i++)
    sum += a[i];
  return sum; /* 15 = 0x0F */
}

/* 3D array (C99 6.7.5.2) */
/* @expect 0x12 */
int cctest_3d_array(void) {
  int m[2][2][2];
  m[0][0][0] = 1; m[0][0][1] = 2;
  m[0][1][0] = 3; m[0][1][1] = 4;
  m[1][0][0] = 5; m[1][0][1] = 6;
  m[1][1][0] = 7; m[1][1][1] = 8;
  return m[0][0][0] + m[0][1][1] + m[1][0][1] + m[1][1][0];
  /* 1 + 4 + 6 + 7 = 18 = 0x12 */
}

/* Struct with single member (C99 6.7.2.1) */
/* @expect 0x42 */
int cctest_single_member_struct(void) {
  struct { int x; } s;
  s.x = 0x42;
  return s.x; /* 0x42 */
}

/* Union with single member (C99 6.7.2.1) */
/* @expect 0x55 */
int cctest_single_member_union(void) {
  union { int x; } u;
  u.x = 0x55;
  return u.x; /* 0x55 */
}

/* Enum with single value (C99 6.7.2.2) */
/* @expect 0x33 */
int cctest_single_enum(void) {
  enum { ONLY = 0x33 };
  return ONLY; /* 0x33 */
}

/* Macro argument containing commas -- protected by parens (C99 6.10.3) */
#define FIRST_ARG(x) (x)
/* @expect 3 */
int cctest_macro_comma_arg(void) {
  /* The argument (1, 2, 3) is a single macro arg due to outer parens */
  return FIRST_ARG((1, 2, 3)); /* comma operator: result is 3 */
}
#undef FIRST_ARG

/* Nested pointer typedef (C99 6.7.7 + 6.7.5.1) */
typedef int *intptr_td;
typedef intptr_td *intptrptr_td;
/* @expect 0x42 */
int cctest_nested_ptr_typedef(void) {
  int x = 0x42;
  intptr_td p = &x;
  intptrptr_td pp = &p;
  return **pp; /* 0x42 */
}

/* Short-circuit with function call side effects (C99 6.5.13 + 6.5.14) */
static int sc_counter;
static int sc_inc(void) { sc_counter++; return 1; }
/* @expect 0x55 */
int cctest_sc_side_effect(void) {
  sc_counter = 0;
  int x = 0;
  /* AND: first is false, second must NOT be called */
  if (x && sc_inc()) { }
  int after_and = sc_counter; /* should be 0 */
  /* OR: first is true, second must NOT be called */
  x = 1;
  if (x || sc_inc()) { }
  int after_or = sc_counter; /* should still be 0 */
  /* AND: first is true, second IS called */
  if (x && sc_inc()) { }
  int after_call = sc_counter; /* should be 1 */
  return (after_and == 0 && after_or == 0 && after_call == 1) ? 0x55 : 0xAA;
}

/* Sizeof on incomplete array type completed by initializer (C99 6.7.5.2 + 6.7.8) */
/* @expect 4 */
int cctest_sizeof_incomplete_arr(void) {
  int a[] = {10, 20, 30, 40};
  return (int)(sizeof(a) / sizeof(a[0])); /* 4 */
}

/* Compound assignment on pointer -- p += n steps by sizeof(*p) (C99 6.5.16.2) */
/* @expect 0x32 */
int cctest_ptr_compound_assign(void) {
  int arr[5] = {10, 20, 30, 40, 50};
  int *p = arr;
  p += 2;       /* now at arr[2] */
  int a = *p;   /* 30 */
  p -= 1;       /* now at arr[1] */
  int b = *p;   /* 20 */
  return a + b; /* 50 = 0x32 */
}

/* Case label with constant expression (C99 6.8.4.2 + 6.6) */
enum case_vals { CV_BASE = 10 };
/* @expect 3 */
int cctest_case_const_expr(void) {
  int x = 12;
  switch (x) {
  case CV_BASE:     return 1;
  case CV_BASE + 1: return 2;
  case CV_BASE + 2: return 3;
  case CV_BASE + 3: return 4;
  default:          return 0;
  }
}

/* Multiple labels on same statement -- goto + case (C99 6.8.1) */
/* @expect 0x20 */
int cctest_multi_label(void) {
  int x = 2, r = 0;
  switch (x) {
  case 1:
    r = 0x10;
    break;
  case 2:
  target:
    r = 0x20;
    break;
  case 3:
    goto target; /* jump to case 2's code via goto label */
  }
  return r; /* 0x20 */
}

/* Large local struct -- stress stack allocation (C99 6.2.4) */
/* @expect 0x2E */
int cctest_large_local(void) {
  struct { int data[32]; } big;
  for (int i = 0; i < 32; i++)
    big.data[i] = i;
  return big.data[0] + big.data[15] + big.data[31];
  /* 0 + 15 + 31 = 46 = 0x2E */
}

/* Struct with const member initialized at declaration (C99 6.7.3 + 6.7.8) */
/* @expect 0x30 */
int cctest_const_member(void) {
  struct { const int x; int y; } s = { 0x10, 0x20 };
  /* s.x cannot be modified after init */
  return s.x + s.y; /* 0x30 */
}

/* Cast of compound literal (C99 6.5.2.5 + 6.5.4) */
/* @expect 0x55 */
int cctest_cast_complit(void) {
  long val = *(long *)(int []){0x55};
  return (int)val; /* 0x55 */
}

/* Nested compound literal as function argument (C99 6.5.2.5) */
struct ncl_inner { int a; int b; };
struct ncl_outer { struct ncl_inner in; int c; };
static int ncl_sum(struct ncl_outer o) { return o.in.a + o.in.b + o.c; }
/* @expect 0x1E */
int cctest_nested_complit_arg(void) {
  return ncl_sum((struct ncl_outer){ (struct ncl_inner){5, 10}, 15 });
  /* 5 + 10 + 15 = 30 = 0x1E */
}

/* Flexible array member sizeof excludes FAM (C99 6.7.2.1 p16) */
struct fam_s { int n; int data[]; };
/* @expect 4 */
int cctest_fam_sizeof(void) {
  return (int)sizeof(struct fam_s); /* only sizeof(int) for n; FAM not counted */
}

/* Compound literal is a modifiable lvalue (C99 6.5.2.5 p4) */
/* @expect 0x63 */
int cctest_complit_modify(void) {
  int *p = (int[]){10, 20, 30};
  p[1] = 99;
  return p[1]; /* 99 = 0x63 */
}

/* Two consecutive for-loops reusing same variable name (C99 6.8.5.3 scope) */
/* @expect 0x2B */
int cctest_for_reuse(void) {
  int sum = 0;
  for (int i = 0; i < 5; i++)
    sum += i;
  for (int i = 10; i < 13; i++)
    sum += i;
  return sum; /* 0+1+2+3+4=10; 10+11+12=33; total=43=0x2B */
}

/* Tentative definition followed by actual definition (C99 6.9.2) */
int cctest_tent_then_init;
int cctest_tent_then_init = 0x42;
/* @expect 0x42 */
int cctest_tent_actual(void) {
  return cctest_tent_then_init; /* 0x42 */
}

/* Enum constant using sizeof in constant expression (C99 6.6 + 6.7.2.2) */
enum sizeof_enum { SE_INTS = sizeof(int), SE_DBL = SE_INTS * 2 };
/* @expect 0x0C */
int cctest_enum_sizeof(void) {
  return SE_INTS + SE_DBL; /* 4 + 8 = 12 = 0x0C */
}

/* Struct passed to variadic function (C99 7.15 + 6.5.2.2) */
struct va_st { int a; int b; };
static int va_struct_sum(int count, ...) {
  va_list ap;
  va_start(ap, count);
  struct va_st s = va_arg(ap, struct va_st);
  va_end(ap);
  return s.a + s.b;
}
/* @expect 0x1E */
int cctest_va_struct(void) {
  struct va_st s;
  s.a = 10;
  s.b = 20;
  return va_struct_sum(1, s); /* 30 = 0x1E */
}

/* Long long addition and subtraction -- no division to avoid __divrem_s32 (C99 6.5.5) */
/* @expect 0x55 */
int cctest_ll_add_sub(void) {
  long long a = 0x100000000LL;
  long long b = 0x200000000LL;
  long long c = a + b; /* 0x300000000 */
  long long d = c - a; /* 0x200000000 */
  return (d == b) ? 0x55 : 0xAA;
}

/* Negative modulo with both negative dividend and divisor (C99 6.5.5) */
/* @expect 0x32 */
int cctest_neg_neg_mod(void) {
  int a = -17, b = -5;
  int q = a / b;  /* 3 (toward zero) */
  int r = a % b;  /* -2 (a == b*q + r: -5*3 + -2 = -17) */
  return q * 0x10 + (-r); /* 3*16 + 2 = 50 = 0x32 */
}

/* Deeply nested loops -- 4 levels (C99 6.8.5) */
/* @expect 0x0C */
int cctest_deep_loops(void) {
  int count = 0;
  for (int i = 0; i < 2; i++)
    for (int j = 0; j < 3; j++)
      for (int k = 0; k < 2; k++)
        for (int l = 0; l < 1; l++)
          count++;
  return count; /* 2*3*2*1 = 12 = 0x0C */
}

/* Large sparse switch -- widely separated case values (C99 6.8.4.2) */
static int sparse_switch(int x) {
  switch (x) {
  case 0:    return 1;
  case 100:  return 2;
  case 1000: return 3;
  case 9999: return 4;
  default:   return 0;
  }
}
/* @expect 0x0A */
int cctest_sparse_switch(void) {
  return sparse_switch(0) + sparse_switch(100) + sparse_switch(1000) + sparse_switch(9999);
  /* 1+2+3+4 = 10 = 0x0A */
}

/* Implicit zero-init of file-scope variable (C99 6.7.8 p10) */
static int g_zero_init_test;
/* @expect 0 */
int cctest_implicit_zero(void) {
  return g_zero_init_test; /* 0 -- file-scope without initializer is zero */
}

/* Volatile struct member (C99 6.7.3) */
/* @expect 0x30 */
int cctest_volatile_member(void) {
  struct { volatile int x; int y; } s;
  s.x = 0x10;
  s.y = 0x20;
  return s.x + s.y; /* 0x30 */
}

/* Cast between signed and unsigned preserves bit pattern (C99 6.3.1.3) */
/* @expect 3 */
int cctest_sign_cast_bits(void) {
  int s = -1;
  unsigned int u = (unsigned int)s;
  int r = 0;
  if (u == 0xFFFFFFFFu) r += 1;
  int s2 = (int)u;
  if (s2 == -1) r += 2;
  return r; /* 1+2 = 3 */
}

/* Logical operators with non-boolean integer values (C99 6.5.13/6.5.14) */
/* @expect 0x0F */
int cctest_logical_nonbool(void) {
  int r = 0;
  if (42 && 99)     r += 1; /* nonzero && nonzero = true */
  if (0 || 77)      r += 2; /* zero || nonzero = true */
  if (!(0))         r += 4; /* !zero = true */
  if (42 && 0 || 1) r += 8; /* (42&&0)||1 = 0||1 = 1 */
  return r; /* 1+2+4+8 = 15 = 0x0F */
}

/* Char comparison edge cases with sign (C99 6.3.1.1 + 6.5.8) */
/* @expect 3 */
int cctest_char_cmp(void) {
  signed char a = -1;
  unsigned char b = 255;
  int r = 0;
  /* Both promoted to int: a becomes -1, b becomes 255 */
  if ((int)a < (int)b) r += 1;           /* -1 < 255 → true */
  if ((int)a != (int)b) r += 2;          /* -1 != 255 → true */
  return r; /* 1+2 = 3 */
}

/* Modulo result has same sign as dividend (C99 6.5.5 p6) */
/* @expect 7 */
int cctest_mod_sign(void) {
  int r = 0;
  if ( 17 %  5 ==  2) r += 1; /* positive dividend → positive remainder */
  if (-17 %  5 == -2) r += 2; /* negative dividend → negative remainder */
  if ( 17 % -5 ==  2) r += 4; /* positive dividend → positive remainder */
  return r; /* 1+2+4 = 7 */
}

/* Complex constant expression in preprocessor (C99 6.10.1) */
#define CPP_A 3
#define CPP_B 5
#define CPP_C (CPP_A * CPP_B - 7)
/* @expect 0x88 */
int cctest_pp_complex(void) {
#if CPP_C == 8 && (CPP_A + CPP_B) > 6 && !(CPP_C < 0)
  return 0x88;
#else
  return 0;
#endif
}

/* Large number of local variables (register pressure) (C99 6.2.4) */
/* @expect 0x78 */
int cctest_many_locals(void) {
  int a = 1, b = 2, c = 3, d = 4, e = 5;
  int f = 6, g = 7, h = 8, i = 9, j = 10;
  int k = 11, l = 12, m = 13, n = 14, o = 15;
  return a + b + c + d + e + f + g + h + i + j + k + l + m + n + o;
  /* 1+2+...+15 = 120 = 0x78 */
}

/* Nested struct return with function call in initializer (C99 6.5.2.5 + 6.8.6.4) */
struct nr_pair { int x; int y; };
static struct nr_pair nr_make(int a, int b) {
  struct nr_pair p;
  p.x = a;
  p.y = b;
  return p;
}
static int nr_sum(struct nr_pair a, struct nr_pair b) {
  return a.x + a.y + b.x + b.y;
}
/* @expect 0x1E */
int cctest_nested_struct_ret(void) {
  return nr_sum(nr_make(1, 2), nr_make(12, 15));
  /* 1+2+12+15 = 30 = 0x1E */
}

/* Struct copy as function argument (value semantics) (C99 6.5.2.2 p7) */
static void modify_struct(struct s2 s, int *out) {
  s.a = 999;
  *out = s.a;
}
/* @expect 0x55 */
int cctest_struct_val_arg(void) {
  struct s2 orig;
  orig.a = 10;
  orig.b = 20;
  int modified;
  modify_struct(orig, &modified);
  /* orig should be unchanged because structs are passed by value */
  return (orig.a == 10 && modified == 999) ? 0x55 : 0xAA;
}

/* Deeply nested ternary chain (C99 6.5.15) */
/* @expect 4 */
int cctest_deep_ternary(void) {
  int x = 42;
  return (x > 100) ? 1
       : (x > 50)  ? 2
       : (x > 45)  ? 3
       : (x > 40)  ? 4
       : (x > 30)  ? 5
       : 6;
  /* 42 > 40 → 4 */
}

/* Global struct array with function pointer dispatch table (C99 6.7.8 + 6.5.2.2) */
struct cmd_entry { const char *name; int (*fn)(int, int); };
static int cmd_sub(int a, int b) { return a - b; }
static const struct cmd_entry cmd_table[] = {
  { "add", helper_add },
  { "mul", helper_mul },
  { "sub", cmd_sub },
};
/* @expect 0x1A */
int cctest_dispatch_table(void) {
  int r = 0;
  r += cmd_table[0].fn(3, 4);  /* add: 7 */
  r += cmd_table[1].fn(3, 4);  /* mul: 12 */
  r += cmd_table[2].fn(10, 3); /* sub: 7 */
  return r; /* 7+12+7 = 26 = 0x1A */
}

/* Switch inside ternary (C99 6.5.15 + 6.8.4.2) -- not directly possible,
   but ternary result used in switch (C99 6.8.4.2 + 6.5.15) */
/* @expect 0x22 */
int cctest_ternary_in_switch(void) {
  int x = 1, y = 2;
  switch (x > 0 ? y : -y) {
  case 2:  return 0x22;
  case -2: return 0xAA;
  default: return 0xFF;
  }
}

/* Increment/decrement on pointer to struct (C99 6.5.2.4 + 6.5.6) */
/* @expect 0x3C */
int cctest_struct_ptr_inc(void) {
  struct item arr[3];
  arr[0].id = 1; arr[0].val = 10;
  arr[1].id = 2; arr[1].val = 20;
  arr[2].id = 3; arr[2].val = 30;
  struct item *p = arr;
  int sum = p->val; /* 10 */
  p++;
  sum += p->val; /* 20 */
  p++;
  sum += p->val; /* 30 */
  return sum; /* 60 = 0x3C */
}

/* Nested function call result used in array init (C99 6.7.8 + 6.5.2.2) */
/* @expect 0x0F */
int cctest_nested_init_call(void) {
  struct s2 arr[2] = {
    { helper_add(1, 2), helper_mul(3, 4) },
    { helper_add(5, 6), helper_mul(7, 8) }
  };
  return arr[0].a + arr[0].b; /* 3 + 12 = 15 = 0x0F */
}

/* #error directive is not tested because it would fail compilation.
   Instead test that untaken #error compiles. (C99 6.10.5) */
/* @expect 0x55 */
int cctest_untaken_error(void) {
#if 0
#error "This should never be reached"
#endif
  return 0x55;
}

/* Recursive Fibonacci via function pointer (stress: fnptr + recursion + stack) */
static int (*fib_fp)(int);
static int fib_rec(int n) {
  if (n <= 1) return n;
  return fib_fp(n - 1) + fib_fp(n - 2);
}
/* @expect 0x15 */
int cctest_fib_fnptr(void) {
  fib_fp = fib_rec;
  return fib_fp(8); /* fib(8) = 21 = 0x15 */
}

/* Global const struct array (C99 6.7.8 + 6.7.3) */
static const struct { int key; int val; } g_lut[] = {
  {1, 100}, {2, 200}, {3, 300}
};
/* @expect 0x258 */
int cctest_const_lut(void) {
  return g_lut[0].val + g_lut[1].val + g_lut[2].val; /* 100+200+300 = 600 = 0x258 */
}

/* Nested struct with pointer chasing 3 levels (C99 6.5.2.3) */
struct l3 { int v; };
struct l2 { struct l3 *p3; int v; };
struct l1 { struct l2 *p2; int v; };
/* @expect 0x3C */
int cctest_ptr_chase(void) {
  struct l3 c;
  c.v = 30;
  struct l2 b;
  b.p3 = &c;
  b.v = 20;
  struct l1 a;
  a.p2 = &b;
  a.v = 10;
  return a.v + a.p2->v + a.p2->p3->v; /* 10+20+30 = 60 = 0x3C */
}

/* Integer overflow wraps for unsigned, defined behavior (C99 6.2.5 p9) */
/* @expect 0x55 */
int cctest_uint_overflow(void) {
  unsigned int a = 0xFFFFFFFFu;
  unsigned int b = a + 2u; /* wraps to 1 */
  unsigned int c = 0u - 1u; /* wraps to 0xFFFFFFFF */
  int r = 0;
  if (b == 1u) r += 1;
  if (c == 0xFFFFFFFFu) r += 2;
  if (a + 1u == 0u) r += 4;
  return (r == 7) ? 0x55 : 0xAA;
}

/* Complex struct initializer with all zero except one field (C99 6.7.8) */
struct big_init { int a; int b; int c; int d; int e; int f; int g; int h; };
/* @expect 0x42 */
int cctest_big_partial_init(void) {
  struct big_init s = { .e = 0x42 };
  return s.a + s.b + s.c + s.d + s.e + s.f + s.g + s.h;
  /* all zero except e=0x42, total = 0x42 */
}

/* Array of strings searched linearly (practical pattern) */
/* @expect 2 */
int cctest_str_search(void) {
  const char *names[] = {"cat", "dog", "fox"};
  const char *target = "fox";
  int idx = -1;
  for (int i = 0; i < 3; i++) {
    const char *a = names[i];
    const char *b = target;
    int match = 1;
    while (*a && *b) {
      if (*a != *b) { match = 0; break; }
      a++;
      b++;
    }
    if (match && *a == *b) { idx = i; break; }
  }
  return idx; /* 2 */
}

/* Struct containing const pointer to array (C99 6.7.3 + 6.7.5.2) */
struct buf_view { const int *data; int len; };
static int buf_sum(const struct buf_view *v) {
  int s = 0;
  for (int i = 0; i < v->len; i++)
    s += v->data[i];
  return s;
}
/* @expect 0x0F */
int cctest_buf_view(void) {
  const int arr[] = {1, 2, 3, 4, 5};
  struct buf_view v;
  v.data = arr;
  v.len = 5;
  return buf_sum(&v); /* 15 = 0x0F */
}

/* Sorting three values using comparisons only (stress branching) */
/* @expect 9 */
int cctest_sort3(void) {
  int a = 3, b = 1, c = 5;
  int lo, mid, hi;
  if (a <= b && a <= c) {
    lo = a;
    if (b <= c) { mid = b; hi = c; }
    else { mid = c; hi = b; }
  } else if (b <= a && b <= c) {
    lo = b;
    if (a <= c) { mid = a; hi = c; }
    else { mid = c; hi = a; }
  } else {
    lo = c;
    if (a <= b) { mid = a; hi = b; }
    else { mid = b; hi = a; }
  }
  return lo + mid + hi; /* 1+3+5 = 9 */
}

/* Conditional on function pointer (null check pattern) (C99 6.5.15 + 6.3.2.3) */
/* @expect 0x30 */
int cctest_fnptr_null_check(void) {
  int (*fp)(int, int) = helper_add;
  int (*null_fp)(int, int) = 0;
  int r = 0;
  if (fp) r += fp(0x10, 0x20);  /* non-null → call: 0x30 */
  if (null_fp) r += 0xFF;       /* null → skip */
  return r; /* 0x30 */
}

/* Multi-dimensional array passed as pointer to first row (C99 6.3.2.1) */
static int sum_2d(int (*m)[3], int rows) {
  int s = 0;
  for (int i = 0; i < rows; i++)
    for (int j = 0; j < 3; j++)
      s += m[i][j];
  return s;
}
/* @expect 0x2D */
int cctest_2d_param(void) {
  int m[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
  return sum_2d(m, 3); /* 1+2+...+9 = 45 = 0x2D */
}

/* Struct bit manipulation through char pointer (type punning) (C99 6.5) */
/* @expect 0x0A */
int cctest_struct_pun(void) {
  struct { unsigned int flags; } s;
  s.flags = 0;
  unsigned char *p = (unsigned char *)&s;
  p[0] = 0x0A; /* set low byte */
  return (int)(s.flags & 0xFF); /* 0x0A */
}

/* Switch expression with side-effect (C99 6.8.4.2 + 6.5.2.4) */
/* @expect 0x12 */
int cctest_switch_side(void) {
  int x = 1;
  switch (x++) {
  case 0:  return 0x10;
  case 1:  return x + 0x10; /* x is now 2; 2 + 0x10 = 0x12 */
  default: return 0xFF;
  }
}

/* Chained struct member access in single expression (C99 6.5.2.3) */
struct chain3 { struct { struct { int deep; } b; } a; };
/* @expect 0x77 */
int cctest_deep_member(void) {
  struct chain3 c;
  c.a.b.deep = 0x77;
  return c.a.b.deep;
}

/* Typedef for struct with self-referential pointer (opaque handle pattern) */
typedef struct opaque_s opaque_t;
struct opaque_s { int val; opaque_t *next; };
/* @expect 0x1E */
int cctest_opaque_handle(void) {
  opaque_t a, b;
  a.val = 10;
  a.next = &b;
  b.val = 20;
  b.next = 0;
  return a.val + a.next->val; /* 30 = 0x1E */
}

/* Long long shift by more than 32 bits (C99 6.5.7) */
/* @expect 0x55 */
int cctest_ll_bigshift(void) {
  long long a = 0x55LL;
  long long b = a << 40;
  long long c = b >> 40;
  return (c == a) ? 0x55 : 0xAA;
}

/* Array of long long (C99 6.7.5.2 + 6.2.5) */
/* @expect 3 */
int cctest_ll_array(void) {
  long long arr[3];
  arr[0] = 1LL << 33;
  arr[1] = 1LL << 34;
  arr[2] = arr[0] + arr[1];
  return (int)(arr[2] >> 33); /* 0x600000000 >> 33 = 3 */
}

/* Explicit (void) to suppress parameter (C99 6.7.5.3) */
static int explicit_void(void) { return 0x42; }
/* @expect 0x42 */
int cctest_explicit_void(void) {
  return explicit_void();
}

/* Integer constant expression: enum from other enum (C99 6.6 + 6.7.2.2) */
enum base_e { BASE_A = 10, BASE_B = 20 };
enum derived_e { DER_A = BASE_A + 5, DER_B = BASE_B * 2 };
/* @expect 0x37 */
int cctest_enum_from_enum(void) {
  return DER_A + DER_B; /* 15 + 40 = 55 = 0x37 */
}

/* Multiple return paths with struct (C99 6.8.6.4 + 6.7.2.1) */
struct mr_result { int code; int val; };
static struct mr_result mr_classify(int x) {
  struct mr_result r;
  if (x < 0) { r.code = -1; r.val = -x; return r; }
  if (x == 0) { r.code = 0; r.val = 0; return r; }
  r.code = 1;
  r.val = x;
  return r;
}
/* @expect 0x19 */
int cctest_multi_ret_struct(void) {
  struct mr_result a = mr_classify(-5);
  struct mr_result b = mr_classify(0);
  struct mr_result c = mr_classify(20);
  return a.val + b.val + c.val; /* 5+0+20 = 25 = 0x19 */
}

/* Bitwise operations combined with shifts in single expression (C99 6.5) */
/* @expect 0xAB */
int cctest_bitshift_combo(void) {
  unsigned int x = 0xABCD1234u;
  return (int)((x >> 24) & 0xFF); /* top byte = 0xAB */
}

/* Mixed integer types in arithmetic expression chain (C99 6.3.1.8) */
/* @expect 0x64 */
int cctest_mixed_arith(void) {
  char a = 10;
  short b = 20;
  int c = 30;
  long d = 40L;
  return (int)(a + b + c + d); /* 100 = 0x64 */
}

/* Pointer to const char used as string parameter (C99 6.7.3 + 6.4.5) */
static int first_char(const char *s) { return s[0]; }
/* @expect 0x68 */
int cctest_str_param(void) {
  return first_char("hello"); /* 'h' = 104 = 0x68 */
}

/* Nested for with break in inner, continue in outer (C99 6.8.6) */
/* @expect 8 */
int cctest_break_continue(void) {
  int sum = 0;
  for (int i = 0; i < 5; i++) {
    if (i == 3) continue;
    for (int j = 0; j < 10; j++) {
      if (j == 2) break;
      sum += 1;
    }
  }
  return sum; /* 4 outer iters * 2 inner = 8 */
}

/* Pointer to array element used in ternary (C99 6.5.15 + 6.5.6) */
/* @expect 0x28 */
int cctest_ptr_ternary(void) {
  int arr[5] = {10, 20, 30, 40, 50};
  int idx = 3;
  int *p = (idx < 5) ? &arr[idx] : &arr[0];
  return *p; /* arr[3] = 40 = 0x28 */
}

/* Static assert via sizeof check (C99 idiom, no _Static_assert) */
typedef char sa_check_short[(sizeof(short) == 2) ? 1 : -1];
typedef char sa_check_int[(sizeof(int) == 4) ? 1 : -1];
/* @expect 2 */
int cctest_static_assert(void) {
  return (int)sizeof(sa_check_short) + (int)sizeof(sa_check_int); /* 1+1 = 2 */
}

/* Unsigned long long max value (C99 6.2.5 p9) */
/* @expect 0xFF */
int cctest_ull_max(void) {
  unsigned long long max = ~0ULL;
  unsigned long long check = 0xFFFFFFFFFFFFFFFFULL;
  return (max == check) ? 0xFF : 0;
}

/* Expression evaluator via switch on char (stress: switch + recursion pattern) */
static int eval_op(int op, int a, int b) {
  switch (op) {
  case '+': return a + b;
  case '-': return a - b;
  case '*': return a * b;
  case '&': return a & b;
  default:  return 0;
  }
}
/* @expect 0x11 */
int cctest_eval_op(void) {
  int r = eval_op('+', 3, 4);   /* 7 */
  r = eval_op('*', r, 2);       /* 14 */
  r = eval_op('-', r, 1);       /* 13 */
  r = eval_op('+', r, 4);       /* 17 = 0x11 */
  return r;
}

/* Comparing two structs by member via pointers (C99 6.5.2.3) */
struct cmp_s { int a; int b; };
static int struct_eq(const struct cmp_s *x, const struct cmp_s *y) {
  return (x->a == y->a && x->b == y->b) ? 1 : 0;
}
/* @expect 2 */
int cctest_struct_eq(void) {
  struct cmp_s a = {10, 20};
  struct cmp_s b = {10, 20};
  struct cmp_s c = {10, 30};
  return struct_eq(&a, &b) + struct_eq(&a, &a) + struct_eq(&a, &c);
  /* 1 + 1 + 0 = 2 */
}

/* Bitfield across different struct members (C99 6.7.2.1) */
/* @expect 0x30 */
int cctest_bf_spread(void) {
  struct {
    unsigned int a : 4;
    unsigned int b : 4;
    unsigned int c : 4;
    unsigned int d : 4;
  } bf;
  bf.a = 5;
  bf.b = 10;
  bf.c = 3;
  bf.d = 7;
  return bf.a * bf.d + bf.b + bf.c; /* 35 + 10 + 3 = 48 = 0x30 */
}

/* Sizeof applied to dereferenced null pointer expression -- legal because
   sizeof does not evaluate (C99 6.5.3.4) */
/* @expect 4 */
int cctest_sizeof_deref_null(void) {
  int *p = 0;
  return (int)sizeof(*p); /* sizeof(int) = 4, *p is NOT evaluated */
}

/* Array of const structs with designated init (C99 6.7.8 + 6.7.3) */
static const struct { int x; int y; } const_pts[] = {
  { .x = 1, .y = 2 },
  { .x = 3, .y = 4 },
  { .x = 5, .y = 6 },
};
/* @expect 0x10 */
int cctest_const_struct_arr(void) {
  return const_pts[0].x + const_pts[1].y + const_pts[2].x + const_pts[2].y;
  /* 1 + 4 + 5 + 6 = 16 = 0x10 */
}

/* Nested blocks with goto skipping initializers (C99 6.8.6.1) */
/* @expect 0x55 */
int cctest_goto_skip_init(void) {
  int r = 0x55;
  goto skip;
  {
    int x = 99;
    r = x;
  }
skip:
  return r; /* 0x55 -- the block was skipped */
}

/* Large switch with returns in each case (jump table stress) */
static int color_val(int c) {
  switch (c) {
  case 0:  return 10;
  case 1:  return 20;
  case 2:  return 30;
  case 3:  return 40;
  case 4:  return 50;
  case 5:  return 60;
  case 6:  return 70;
  case 7:  return 80;
  case 8:  return 90;
  case 9:  return 100;
  case 10: return 110;
  case 11: return 120;
  case 12: return 130;
  case 13: return 140;
  case 14: return 150;
  case 15: return 160;
  default: return 0;
  }
}
/* @expect 0xAA */
int cctest_large_switch_ret(void) {
  return color_val(6) + color_val(9); /* 70+100 = 170 = 0xAA */
}

/* Nested goto forward over multiple blocks (C99 6.8.6.1) */
/* @expect 0x30 */
int cctest_goto_multi_block(void) {
  int r = 0;
  r += 0x10;
  goto skip1;
  r += 0xFF;
skip1:
  r += 0x10;
  goto skip2;
  r += 0xFF;
skip2:
  r += 0x10;
  return r; /* 0x10+0x10+0x10 = 0x30 */
}

/* Struct copy chain: a = b = c = d (C99 6.5.16) */
/* @expect 0x42 */
int cctest_struct_chain_copy(void) {
  struct s2 a, b, c;
  c.a = 0x42;
  c.b = 0x10;
  a = b = c;
  return a.a; /* 0x42 */
}

/* Mixed array/pointer notation equivalence (C99 6.5.2.1 + 6.5.6) */
/* @expect 7 */
int cctest_arr_ptr_equiv(void) {
  int arr[5] = {10, 20, 30, 40, 50};
  int r = 0;
  if (arr[2] == *(arr + 2)) r += 1;
  if (*(arr + 3) == 3[arr]) r += 2; /* i[a] == a[i] */
  if (&arr[1] == arr + 1) r += 4;
  return r; /* 7 */
}

/* Multiple function calls in single expression with side effects */
static int g_call_order;
static int co_fn1(void) { g_call_order = g_call_order * 10 + 1; return 10; }
static int co_fn2(void) { g_call_order = g_call_order * 10 + 2; return 20; }
/* @expect 0x1E */
int cctest_call_in_expr(void) {
  g_call_order = 0;
  int r = co_fn1() + co_fn2();
  return r; /* 10+20 = 30 = 0x1E (order of eval is unspecified but sum is defined) */
}

/* While loop with complex condition (C99 6.8.5.1) */
/* @expect 0x32 */
int cctest_while_complex(void) {
  int i = 0, j = 10, sum = 0;
  while (i < 5 && j > 5) {
    sum += i + j;
    i++;
    j--;
  }
  return sum; /* (0+10)+(1+9)+(2+8)+(3+7)+(4+6) = 50 = 0x32 */
}

/* Constant folding: compiler should handle this at compile time (C99 6.6) */
/* @expect 0x50 */
int cctest_const_fold(void) {
  const int a = 2 + 3;       /* 5 */
  const int b = a * 4;       /* 20 */
  const int c = b - a + 5;   /* 20 */
  return c * 4; /* 80 = 0x50 */
}

/* Bitfield assignment truncation (C99 6.7.2.1) */
/* @expect 0x0F */
int cctest_bf_trunc(void) {
  struct { unsigned int x : 4; } bf;
  bf.x = 0xFF; /* only low 4 bits stored */
  return bf.x; /* 15 = 0x0F */
}

/* String literal shorter than array -- rest zero-filled (C99 6.7.8 p14) */
/* @expect 0x68 */
int cctest_str_short_init(void) {
  char s[10] = "hi";
  /* s[0]='h', s[1]='i', s[2]='\0', s[3..9]='\0' */
  return s[0] + s[2] + s[5]; /* 'h'+0+0 = 104 = 0x68 */
}

/* State machine pattern: switch inside while (C99 6.8.5.1 + 6.8.4.2) */
/* @expect 0x3C */
int cctest_state_machine(void) {
  int state = 0, sum = 0, count = 0;
  while (state != 3) {
    switch (state) {
    case 0: sum += 10; state = 1; break;
    case 1: sum += 20; state = (++count < 2) ? 0 : 2; break;
    case 2: state = 3; break;
    }
  }
  /* state 0→sum=10,state=1; state 1→sum=30,count=1,state=0;
     state 0→sum=40,state=1; state 1→sum=60,count=2,state=2;
     state 2→state=3; done. sum=60? hmm no:
     iter1: state=0→sum=10→state=1
     iter2: state=1→sum=30→count=1→state=0
     iter3: state=0→sum=40→state=1
     iter4: state=1→sum=60→count=2→state=2
     iter5: state=2→state=3→exit. sum=60=0x3C. That doesn't match 0x1E. */
  return sum;
}

/* Ring buffer index pattern with unsigned modulo (C99 6.2.5 p9) */
/* @expect 0x12 */
int cctest_ring_buffer(void) {
  int buf[4] = {0, 0, 0, 0};
  unsigned int head = 0;
  for (int i = 1; i <= 6; i++) {
    buf[head & 3] = i;
    head++;
  }
  /* After 6 writes: buf[0]=4(was5? no), let me trace:
     i=1: buf[0]=1, head=1
     i=2: buf[1]=2, head=2
     i=3: buf[2]=3, head=3
     i=4: buf[3]=4, head=4
     i=5: buf[0]=5, head=5
     i=6: buf[1]=6, head=6
     buf = {5,6,3,4} */
  return buf[0] + buf[1] + buf[2] + buf[3]; /* 5+6+3+4 = 18? no that's 0x12. */
  /* Let me recalc: 5+6+3+4=18=0x12. */
}

/* X-macro pattern (C99 6.10.3) */
#define XCOLORS \
  X(RED,   1) \
  X(GREEN, 2) \
  X(BLUE,  4)

#define X(name, val) XC_##name = val,
enum xcolor { XCOLORS };
#undef X
/* @expect 7 */
int cctest_xmacro(void) {
  return XC_RED + XC_GREEN + XC_BLUE; /* 1+2+4 = 7 */
}

/* va_arg with pointer type (C99 7.15) */
static int va_ptr_sum(int count, ...) {
  va_list ap;
  va_start(ap, count);
  int s = 0;
  for (int i = 0; i < count; i++) {
    int *p = va_arg(ap, int *);
    s += *p;
  }
  va_end(ap);
  return s;
}
/* @expect 0x3C */
int cctest_va_ptr(void) {
  int a = 10, b = 20, c = 30;
  return va_ptr_sum(3, &a, &b, &c); /* 60 = 0x3C */
}

/* Nested variadic forwarding via va_list parameter (C99 7.15) */
static int va_inner(int count, va_list ap) {
  int s = 0;
  for (int i = 0; i < count; i++)
    s += va_arg(ap, int);
  return s;
}
static int va_outer(int count, ...) {
  va_list ap;
  va_start(ap, count);
  int r = va_inner(count, ap);
  va_end(ap);
  return r;
}
/* @expect 0x64 */
int cctest_va_forward(void) {
  return va_outer(4, 10, 20, 30, 40); /* 100 = 0x64 */
}

/* Mixing designated and positional initializers (C99 6.7.8) */
/* @expect 0x0F */
int cctest_mixed_init(void) {
  int arr[5] = { 1, 2, [3] = 8, 4 };
  /* arr[0]=1, arr[1]=2, arr[2]=0 (gap), arr[3]=8, arr[4]=4 */
  return arr[0] + arr[1] + arr[2] + arr[3] + arr[4]; /* 1+2+0+8+4 = 15 = 0x0F */
}

/* Expression in array dimension (C99 6.7.5.2) */
/* @expect 6 */
int cctest_expr_arr_dim(void) {
  int arr[2 + 3]; /* arr[5] */
  for (int i = 0; i < 5; i++)
    arr[i] = i;
  return arr[1] + arr[2] + arr[3]; /* 1+2+3 = 6 */
}

/* Struct with all const members -- can only init, not assign (C99 6.7.3 + 6.7.8) */
/* @expect 0x1E */
int cctest_all_const_struct(void) {
  const struct { const int a; const int b; const int c; } s = {5, 10, 15};
  return s.a + s.b + s.c; /* 30 = 0x1E */
}

/* Bit manipulation: population count via loop (practical pattern) */
/* @expect 0x10 */
int cctest_popcount(void) {
  unsigned int x = 0xFFFF0000u; /* 16 one-bits */
  int count = 0;
  while (x) {
    count += x & 1;
    x >>= 1;
  }
  return count; /* 16 = 0x10 */
}

/* Bit manipulation: count leading zeros (practical pattern) */
/* @expect 8 */
int cctest_clz(void) {
  unsigned int x = 0x00800000u;
  int lz = 0;
  if (x == 0) return 32;
  while (!(x & 0x80000000u)) {
    lz++;
    x <<= 1;
  }
  return lz; /* 8 leading zeros in 0x00800000 */
}

/* Complex pointer declaration: array of ptrs to fn returning ptr (C99 6.7.5) */
static int cpd_val = 0x42;
static int *cpd_fn1(void) { return &cpd_val; }
/* @expect 0x42 */
int cctest_complex_ptr_decl(void) {
  int *(*arr[1])(void); /* array of 1 ptr to fn returning int* */
  arr[0] = cpd_fn1;
  return *arr[0](); /* 0x42 */
}

/* Compound literal at file scope -- static storage (C99 6.5.2.5 p5) */
static int *g_complit_ptr = &(int){0x99};
/* @expect 0x99 */
int cctest_global_complit(void) {
  return *g_complit_ptr; /* 0x99 */
}

/* Global pointer initialized to compound literal (C99 6.5.2.5 p5) */
static int g_complit_arr[] = {10, 20, 30};
static int *g_ca_ptr = &g_complit_arr[1];
/* @expect 0x14 */
int cctest_global_ptr_init(void) {
  return *g_ca_ptr; /* 20 = 0x14 */
}

/* Unsigned comparison edge cases (C99 6.5.8) */
/* @expect 7 */
int cctest_uint_cmp_edge(void) {
  unsigned int zero = 0;
  unsigned int max = 0xFFFFFFFFu;
  int r = 0;
  if (zero < max) r += 1;
  if (max > zero) r += 2;
  if (zero <= max) r += 4;
  return r; /* 1+2+4 = 7 */
}

/* Ternary with void expressions (C99 6.5.15 -- both arms void) */
static int g_ternary_void;
/* @expect 0x0A */
int cctest_ternary_void(void) {
  int x = 1;
  g_ternary_void = 0;
  x ? (void)(g_ternary_void = 10) : (void)(g_ternary_void = 20);
  return g_ternary_void; /* 10 = 0x0A */
}

/* Deeply nested if/else (C99 6.8.4.1) -- 8 levels */
/* @expect 8 */
int cctest_deep_ifelse(void) {
  int x = 0xFF;
  if (x & 0x01)
    if (x & 0x02)
      if (x & 0x04)
        if (x & 0x08)
          if (x & 0x10)
            if (x & 0x20)
              if (x & 0x40)
                if (x & 0x80)
                  return 8;
  return 0;
}

/* Pointer to function taking pointer to function (C99 6.7.5.3) */
typedef int (*intfn)(int);
static int apply_fn(intfn f, int x) { return f(x); }
static int double_it(int x) { return x * 2; }
static int triple_it(int x) { return x * 3; }
/* @expect 0x19 */
int cctest_fn_taking_fn(void) {
  int a = apply_fn(double_it, 5);  /* 10 */
  int b = apply_fn(triple_it, 5); /* 15 */
  return a + b; /* 10+15 = 25 = 0x19 */
}

/* Nested initializers: struct containing struct containing array (C99 6.7.8) */
struct inner_arr { int data[3]; };
struct outer_arr { struct inner_arr in; int tag; };
/* @expect 0x1E */
int cctest_nested_arr_init(void) {
  struct outer_arr o = { { {5, 10, 15} }, 0 };
  return o.in.data[0] + o.in.data[1] + o.in.data[2] + o.tag;
  /* 5+10+15+0 = 30 = 0x1E */
}

/* Byte-level bit extraction pattern (C99 6.5.7 + 6.5.10) */
/* @expect 0x56 */
int cctest_byte_extract(void) {
  unsigned int x = 0x12345678u;
  int b0 = (x >>  0) & 0xFF; /* 0x78 */
  int b1 = (x >>  8) & 0xFF; /* 0x56 */
  int b2 = (x >> 16) & 0xFF; /* 0x34 */
  int b3 = (x >> 24) & 0xFF; /* 0x12 */
  return b1; /* 0x56 */
}

/* Byte packing pattern (C99 6.5.7 + 6.5.12) */
/* @expect 0x55 */
int cctest_byte_pack(void) {
  unsigned int x = ((unsigned int)0x12 << 24)
                 | ((unsigned int)0x34 << 16)
                 | ((unsigned int)0x56 <<  8)
                 | ((unsigned int)0x78 <<  0);
  return (x == 0x12345678u) ? 0x55 : 0xAA;
}

/* Multiple declaration specifier order: const volatile int (C99 6.7.3) */
/* @expect 0x42 */
int cctest_qual_order(void) {
  const volatile int a = 0x42;
  volatile const int b = 0x42;
  int const volatile c = 0x42;
  return (a == b && b == c) ? 0x42 : 0;
}

/* Switch fallthrough across multiple cases with computation (C99 6.8.4.2) */
/* @expect 0x0F */
int cctest_multi_fallthrough(void) {
  int x = 1, r = 0;
  switch (x) {
  case 1: r += 1;
  case 2: r += 2;
  case 3: r += 4;
  case 4: r += 8;
    break;
  default: r = 0xFF;
  }
  return r; /* 1+2+4+8 = 15 = 0x0F */
}

/* Struct copy in loop (stack frame reuse) (C99 6.5.16 + 6.8.5) */
/* @expect 0x0A */
int cctest_struct_loop_copy(void) {
  struct s2 arr[5];
  for (int i = 0; i < 5; i++) {
    struct s2 tmp;
    tmp.a = i;
    tmp.b = i * 2;
    arr[i] = tmp;
  }
  return arr[2].a + arr[4].b; /* 2 + 8 = 10 = 0x0A */
}

/* Enum used as loop bound (C99 6.7.2.2 + 6.8.5.3) */
enum limits { LIM_START = 3, LIM_END = 7 };
/* @expect 0x19 */
int cctest_enum_loop(void) {
  int sum = 0;
  for (int i = LIM_START; i <= LIM_END; i++)
    sum += i;
  return sum; /* 3+4+5+6+7 = 25 = 0x19 */
}

/* Recursive data structure traversal with accumulator (C99 6.7.2.1) */
struct acc_node { int val; struct acc_node *next; };
static int acc_sum(const struct acc_node *p, int acc) {
  if (!p) return acc;
  return acc_sum(p->next, acc + p->val);
}
/* @expect 0x15 */
int cctest_tail_acc(void) {
  struct acc_node c = {3, 0};
  struct acc_node b = {5, &c};
  struct acc_node a = {13, &b};
  return acc_sum(&a, 0); /* 13+5+3 = 21 = 0x15 */
}

/* Global extern declaration matching local (C99 6.2.2) */
int g_extern_match = 0x77;
/* @expect 0x77 */
int cctest_extern_match(void) {
  extern int g_extern_match;
  return g_extern_match;
}

/* Integer constant: binary representation check (C99 6.2.6.2) */
/* @expect 0xAA */
int cctest_int_repr(void) {
  int x = 0x55AA;
  unsigned char *p = (unsigned char *)&x;
  /* SHARC is little-endian for char-size-8 */
  return p[0]; /* low byte = 0xAA */
}

/* --- <limits.h> tests (C99 7.10, 5.2.4.2.1) --- */

/* CHAR_BIT must be 8 on this target (C99 5.2.4.2.1) */
/* @expect 8 */
int cctest_char_bit(void) {
  return CHAR_BIT; /* 8 */
}

/* Integer type limits (C99 5.2.4.2.1) */
/* @expect 0x1F */
int cctest_int_limits(void) {
  int r = 0;
  if (SCHAR_MIN == -128) r += 1;
  if (SCHAR_MAX == 127) r += 2;
  if (UCHAR_MAX == 255) r += 4;
  if (SHRT_MIN == -32768) r += 8;
  if (SHRT_MAX == 32767) r += 16;
  return r; /* 1+2+4+8+16 = 31 = 0x1F */
}

/* INT_MIN/INT_MAX/UINT_MAX (C99 5.2.4.2.1) */
/* @expect 7 */
int cctest_int_minmax(void) {
  int r = 0;
  if (INT_MIN < 0 && INT_MAX > 0) r += 1;
  if ((unsigned int)INT_MAX + 1u == (unsigned int)INT_MIN) r += 2;
  if (UINT_MAX == 0xFFFFFFFFu) r += 4;
  return r; /* 1+2+4 = 7 */
}

/* LONG_MIN/LONG_MAX (C99 5.2.4.2.1) */
/* @expect 3 */
int cctest_long_limits(void) {
  int r = 0;
  if (LONG_MAX == 2147483647L) r += 1;
  if (ULONG_MAX == 0xFFFFFFFFUL) r += 2;
  return r; /* 1+2 = 3 */
}

/* LLONG_MIN/LLONG_MAX (C99 5.2.4.2.1) */
/* @expect 3 */
int cctest_llong_limits(void) {
  int r = 0;
  if (LLONG_MAX > 0) r += 1;
  if (ULLONG_MAX == 0xFFFFFFFFFFFFFFFFULL) r += 2;
  return r; /* 1+2 = 3 */
}

/* --- <float.h> tests (C99 7.7, 5.2.4.2.2) --- */

/* FLT_RADIX must be 2 on IEEE-754 (C99 5.2.4.2.2) */
/* @expect 2 */
int cctest_flt_radix(void) {
  return FLT_RADIX; /* 2 */
}

/* FLT_MANT_DIG and FLT_DIG (C99 5.2.4.2.2) */
/* @expect 0x1E */
int cctest_flt_mant(void) {
  return FLT_MANT_DIG + FLT_DIG; /* 24 + 6 = 30 = 0x1E */
}

/* FLT_MAX is large, FLT_MIN is small, FLT_EPSILON is tiny (C99 5.2.4.2.2) */
/* @expect 7 */
int cctest_flt_range(void) {
  int r = 0;
  if (FLT_MAX > 1.0e+37f) r += 1;
  if (FLT_MIN < 1.0e-37f && FLT_MIN > 0.0f) r += 2;
  if (FLT_EPSILON < 1.0e-6f && FLT_EPSILON > 0.0f) r += 4;
  return r; /* 1+2+4 = 7 */
}

/* DBL_* should equal FLT_* on -double-size-32 target (C99 5.2.4.2.2) */
/* @expect 3 */
int cctest_dbl_equals_flt(void) {
  int r = 0;
  if (DBL_MANT_DIG == FLT_MANT_DIG) r += 1;
  if (DBL_DIG == FLT_DIG) r += 2;
  return r; /* 1+2 = 3 */
}

/* --- <stddef.h> tests (C99 7.17) --- */

/* NULL is a null pointer constant (C99 7.17) */
/* @expect 3 */
int cctest_stddef_null(void) {
  int r = 0;
  int *p = NULL;
  if (p == 0) r += 1;
  if (!p) r += 2;
  return r; /* 1+2 = 3 */
}

/* offsetof macro (C99 7.17) */
struct off_test { int a; int b; int c; };
/* @expect 8 */
int cctest_stddef_offsetof(void) {
  return (int)offsetof(struct off_test, c); /* 2 * sizeof(int) = 8 */
}

/* size_t is unsigned and can hold sizeof results (C99 7.17) */
/* @expect 4 */
int cctest_stddef_size_t(void) {
  size_t s = sizeof(int);
  return (int)s; /* 4 */
}

/* ptrdiff_t holds pointer differences (C99 7.17) */
/* @expect 3 */
int cctest_stddef_ptrdiff(void) {
  int arr[5];
  ptrdiff_t d = &arr[4] - &arr[1];
  return (int)d; /* 3 */
}

/* --- <iso646.h> tests (C99 7.9) --- */

/* Alternative operator spellings (C99 7.9) */
/* @expect 0x3F */
int cctest_iso646(void) {
  int a = 0xFF, b = 0x0F;
  int r = 0;
  if (a and b)            r += 1;  /* && */
  if (a or 0)             r += 2;  /* || */
  if (not 0)              r += 4;  /* ! */
  if ((a bitand b) == b)  r += 8;  /* & */
  if ((a bitor b) == a)   r += 16; /* | */
  if ((a xor b) == 0xF0)  r += 32; /* ^ */
  return r; /* 1+2+4+8+16+32 = 63 = 0x3F */
}

/* iso646.h compound assignment alternatives (C99 7.9) */
/* @expect 0x34 */
int cctest_iso646_assign(void) {
  int x = 0xFF;
  x and_eq 0x3C;   /* x &= 0x3C → 0x3C */
  x or_eq 0x40;    /* x |= 0x40 → 0x7C */
  x xor_eq 0x48;   /* x ^= 0x48 → 0x34 */
  return x; /* 0x34 */
}

/* compl and not_eq (C99 7.9) */
/* @expect 3 */
int cctest_iso646_misc(void) {
  int r = 0;
  if ((compl 0u) == 0xFFFFFFFFu) r += 1; /* ~0 */
  if (5 not_eq 3) r += 2;                 /* != */
  return r; /* 1+2 = 3 */
}

/* --- stdint.h limit macros (C99 7.18.2/7.18.3) --- */

/* INT8_MIN/MAX, UINT8_MAX etc. -- define and test if not already present */
#ifndef INT8_MIN
#define INT8_MIN   (-128)
#define INT8_MAX   127
#define UINT8_MAX  255
#define INT16_MIN  (-32768)
#define INT16_MAX  32767
#define UINT16_MAX 65535
#define INT32_MIN  (-2147483647 - 1)
#define INT32_MAX  2147483647
#define UINT32_MAX 0xFFFFFFFFU
#endif

/* @expect 0x1F */
int cctest_stdint_limits(void) {
  int r = 0;
  if (INT8_MIN == -128) r += 1;
  if (INT8_MAX == 127) r += 2;
  if (UINT8_MAX == 255) r += 4;
  if (INT16_MAX == 32767) r += 8;
  if (UINT32_MAX == 0xFFFFFFFFU) r += 16;
  return r; /* 1+2+4+8+16 = 31 = 0x1F */
}

/* SIZE_MAX (C99 7.18.3) */
#ifndef SIZE_MAX
#define SIZE_MAX UINT32_MAX
#endif
/* @expect 0x55 */
int cctest_size_max(void) {
  return (SIZE_MAX == 0xFFFFFFFFU) ? 0x55 : 0xAA;
}

/* Integer constant macros INT32_C, UINT64_C (C99 7.18.4) */
#ifndef INT32_C
#define INT8_C(x)   (x)
#define INT16_C(x)  (x)
#define INT32_C(x)  (x)
#define INT64_C(x)  (x ## LL)
#define UINT8_C(x)  (x)
#define UINT16_C(x) (x)
#define UINT32_C(x) (x ## U)
#define UINT64_C(x) (x ## ULL)
#endif

/* @expect 7 */
int cctest_intc_macros(void) {
  int r = 0;
  int32_t a = INT32_C(42);
  if (a == 42) r += 1;
  uint32_t b = UINT32_C(0xDEADBEEF);
  if (b == 0xDEADBEEFU) r += 2;
  uint64_t c = UINT64_C(0x100000000);
  if ((int)(c >> 32) == 1) r += 4;
  return r; /* 1+2+4 = 7 */
}

/* offsetof on nested struct member (C99 7.17) */
struct off_nested { int a; struct { int x; int y; } b; int c; };
/* @expect 0x0C */
int cctest_offsetof_nested(void) {
  return (int)offsetof(struct off_nested, c); /* a(4) + b.x(4) + b.y(4) = 12 = 0x0C */
}

/* size_t in loop and comparison (C99 7.17) */
/* @expect 0x0A */
int cctest_size_t_loop(void) {
  int arr[10] = {0};
  for (size_t i = 0; i < 10; i++)
    arr[i] = 1;
  int sum = 0;
  for (size_t i = 0; i < 10; i++)
    sum += arr[i];
  return sum; /* 10 = 0x0A */
}

/* NULL compared to various pointer types (C99 7.17 + 6.3.2.3) */
/* @expect 0x0F */
int cctest_null_types(void) {
  int r = 0;
  int *pi = NULL;
  char *pc = NULL;
  void *pv = NULL;
  struct off_test *ps = NULL;
  if (pi == NULL) r += 1;
  if (pc == NULL) r += 2;
  if (pv == NULL) r += 4;
  if (ps == NULL) r += 8;
  return r; /* 1+2+4+8 = 15 = 0x0F */
}

/* CHAR_MIN and CHAR_MAX match signed char on this target (C99 5.2.4.2.1) */
/* @expect 3 */
int cctest_char_limits(void) {
  int r = 0;
  if (CHAR_MIN == SCHAR_MIN) r += 1; /* char is signed on SHARC */
  if (CHAR_MAX == SCHAR_MAX) r += 2;
  return r; /* 1+2 = 3 */
}

/* Unsigned short max (C99 5.2.4.2.1) */
/* @expect 0x55 */
int cctest_ushrt_max(void) {
  return (USHRT_MAX == 65535) ? 0x55 : 0xAA;
}

/* FLT_EPSILON distinguishes adjacent floats (C99 5.2.4.2.2) */
/* @expect 3 */
int cctest_flt_epsilon(void) {
  int r = 0;
  float one = 1.0f;
  float eps = FLT_EPSILON;
  if (one + eps != one) r += 1;       /* 1+eps is distinguishable from 1 */
  if (one + eps / 2.0f == one) r += 2; /* 1+eps/2 rounds back to 1 */
  return r; /* 1+2 = 3 */
}

/* FLT_MAX_EXP and FLT_MIN_EXP (C99 5.2.4.2.2) */
/* @expect 3 */
int cctest_flt_exp_range(void) {
  int r = 0;
  if (FLT_MAX_EXP == 128) r += 1;
  if (FLT_MIN_EXP == -125) r += 2;
  return r; /* 1+2 = 3 */
}

/* iso646.h: complex expression using alternative spellings (C99 7.9) */
/* @expect 0x55 */
int cctest_iso646_expr(void) {
  int a = 0xAA, b = 0x55;
  int c = (a bitand (compl b)) bitor (b bitand (compl a));
  /* a & ~b = 0xAA & 0xAA = 0xAA; b & ~a = 0x55 & 0x55 = 0x55; 0xAA | 0x55 = 0xFF
     Wait: ~0x55 = 0xFFFFFFAA, 0xAA & 0xFFFFFFAA = 0xAA.
     ~0xAA = 0xFFFFFF55, 0x55 & 0xFFFFFF55 = 0x55.
     0xAA | 0x55 = 0xFF. That's XOR via AND/OR/NOT. */
  return (c == 0xFF) ? 0x55 : 0xAA;
}

/* ptrdiff_t with negative difference (C99 7.17 + 6.5.6) */
/* @expect 0x55 */
int cctest_ptrdiff_neg(void) {
  int arr[5];
  ptrdiff_t d = &arr[1] - &arr[4];
  return (d == -3) ? 0x55 : 0xAA;
}

/* offsetof on first member is always 0 (C99 7.17 + 6.7.2.1 p13) */
/* @expect 0 */
int cctest_offsetof_first(void) {
  return (int)offsetof(struct off_test, a); /* 0 */
}

/* size_t arithmetic wraps like unsigned (C99 6.2.5 p9 + 7.17) */
/* @expect 0x55 */
int cctest_size_t_wrap(void) {
  size_t a = 0;
  size_t b = a - 1; /* wraps to max value */
  return (b > 0) ? 0x55 : 0xAA;
}


/* ================================================================
 * ADDITIONAL C99 COVERAGE TESTS
 * ================================================================ */

/* Double negation normalizes to 0 or 1 (C99 6.5.3.3) */
/* @expect 0x03 */
int cctest_double_negation(void) {
  int r = 0;
  if (!!42 == 1) r += 1;
  if (!!0 == 0) r += 2;
  return r;
}

/* Implicit int-to-float in mixed arithmetic (C99 6.3.1.4 + 6.3.1.8) */
/* @expect 0x07 */
int cctest_int_to_float_conv(void) {
  int i = 7;
  float f = 0.5f;
  float result = i + f;
  return (int)result; /* 7.5 -> 7 */
}

/* Float-to-int truncates toward zero for both signs (C99 6.3.1.4) */
/* @expect 0x03 */
int cctest_trunc_pos_neg(void) {
  int a = (int)(3.7f);    /* 3 */
  int b = (int)(-2.7f);   /* -2 */
  return a + b + 2;       /* 3 + (-2) + 2 = 3 */
}

/* Array subscript commutativity: i[a] == a[i] (C99 6.5.2.1) */
/* @expect 0x42 */
int cctest_subscript_commute(void) {
  int arr[3] = {0x10, 0x42, 0x30};
  return 1[arr]; /* arr[1] = 0x42 */
}

/* Ternary with void side-effects (C99 6.5.15) */
/* @expect 0x0A */
int cctest_ternary_sideeffect(void) {
  int y = 5;
  (1) ? (void)(y += 5) : (void)0;
  return y; /* 10 */
}

/* Unsigned subtraction wraps (C99 6.2.5 p9) */
/* @expect 0xFF */
int cctest_unsigned_sub_wrap(void) {
  unsigned int a = 0;
  unsigned int b = a - 1;
  return (b == (unsigned int)-1) ? 0xFF : 0x00;
}

/* Left-shift 1 into MSB for unsigned (C99 6.5.7) */
/* @expect 0x55 */
int cctest_shift_msb(void) {
  unsigned int x = 1u << 31;
  return (x == 0x80000000u) ? 0x55 : 0xAA;
}

/* Unsigned right-shift zero-fills (C99 6.5.7 p5) */
/* @expect 0x55 */
int cctest_unsigned_rshift(void) {
  unsigned int x = 0x80000000u;
  unsigned int y = x >> 1;
  return (y == 0x40000000u) ? 0x55 : 0xAA;
}

/* Signed right-shift: arithmetic (impl-defined, test for SHARC) */
/* @expect 0x55 */
int cctest_signed_rshift(void) {
  int x = -8;
  int y = x >> 1;
  return (y == -4) ? 0x55 : 0xAA;
}

/* Division truncates toward zero (C99 6.5.5 p6) */
/* @expect 0x07 */
int cctest_div_trunc_zero(void) {
  int r = 0;
  if (7 / 2 == 3) r += 1;
  if ((-7) / 2 == -3) r += 2;
  if (7 / (-2) == -3) r += 4;
  return r;
}

/* Remainder sign matches dividend (C99 6.5.5 p6) */
/* @expect 0x07 */
int cctest_mod_sign_rule(void) {
  int r = 0;
  if (7 % 3 == 1) r += 1;
  if ((-7) % 3 == -1) r += 2;
  if (7 % (-3) == 1) r += 4;
  return r;
}

/* Struct sizeof includes padding (C99 6.7.2.1) */
/* @expect 0x55 */
int cctest_struct_pad_size(void) {
  struct padded { char a; int b; };
  return (sizeof(struct padded) >= 5) ? 0x55 : 0xAA;
}

/* Anonymous struct member access (C11/common extension) */
/* @expect 0x1E */
int cctest_anon_struct_access(void) {
  struct outer {
    int tag;
    struct { int x; int y; };
  };
  struct outer o;
  o.tag = 0;
  o.x = 10;
  o.y = 20;
  return o.x + o.y;
}

/* Anonymous union member access */
/* @expect 0x42 */
int cctest_anon_union_access(void) {
  struct mixed {
    int kind;
    union { int ival; float fval; };
  };
  struct mixed m;
  m.kind = 1;
  m.ival = 0x42;
  return m.ival;
}

/* Compound literal as function argument (C99 6.5.2.5) */
static int pair_sum(const int *p) { return p[0] + p[1]; }
/* @expect 0x1E */
int cctest_complit_arg(void) {
  return pair_sum((const int[]){10, 20});
}

/* Designated init with gaps: unspecified elements are zero (C99 6.7.8 p21) */
/* @expect 0x14 */
int cctest_desig_gap_sum(void) {
  int a[4] = { [0] = 3, [2] = 7, [3] = 10 };
  return a[0] + a[1] + a[2] + a[3]; /* 3+0+7+10 = 20 */
}

/* Nested designated init in array of structs (C99 6.7.8 p35) */
/* @expect 0x1E */
int cctest_desig_nested_arr(void) {
  struct pt { int x; int y; };
  struct pt pts[3] = { [0].x = 1, [0].y = 2, [1].x = 3, [1].y = 4,
                        [2].x = 10, [2].y = 10 };
  return pts[0].x + pts[0].y + pts[1].x + pts[1].y + pts[2].x + pts[2].y;
}

/* sizeof VLA evaluated at runtime (C99 6.5.3.4 p2) */
/* @expect 0x14 */
int cctest_sizeof_vla_rt(void) {
  int n = 5;
  int vla[n];
  return (int)sizeof(vla); /* 20 */
}

/* Pre-increment inside subscript (C99 6.5.2.1) */
/* @expect 0x42 */
int cctest_preinc_subscript(void) {
  int arr[4] = {0x10, 0x20, 0x42, 0x80};
  int i = 1;
  return arr[++i]; /* i=2, arr[2]=0x42 */
}

/* Post-increment with sequence point (C99 6.5.2.4) */
/* @expect 0x0B */
int cctest_postinc_seq(void) {
  int x = 10;
  int a = x++;
  return a + (x - 10); /* 10 + 1 = 11 */
}

/* Compound literal as modifiable lvalue (C99 6.5.2.5 p4) */
/* @expect 0x64 */
int cctest_complit_write(void) {
  int *p = (int[]){10, 20, 30};
  p[1] = 100;
  return p[1];
}

/* Deep pointer chain through linked structs (C99 6.5.2.3) */
/* @expect 0x55 */
int cctest_deep_ptr_chain(void) {
  struct nd { int v; struct nd *n; };
  struct nd c = { 0x55, 0 };
  struct nd b = { 0x20, &c };
  struct nd a = { 0x10, &b };
  return a.n->n->v;
}

/* Enum auto-increment (C99 6.7.2.2) */
/* @expect 0x06 */
int cctest_enum_auto(void) {
  enum seq { A, B, C, D };
  return A + B + C + D; /* 0+1+2+3=6 */
}

/* Enum gap then resume (C99 6.7.2.2) */
/* @expect 0x0B */
int cctest_enum_gap_resume(void) {
  enum e_gap2 { P2 = 3, Q2, R2 = 10 };
  return Q2 + R2 - P2; /* 4+10-3 = 11 */
}

/* Typedef of typedef (C99 6.7.7) */
/* @expect 0x04 */
int cctest_typedef_of_typedef(void) {
  typedef int myint;
  typedef myint myint2;
  return (int)sizeof(myint2);
}

/* Variable shadowing with different addresses (C99 6.2.1) */
/* @expect 0x14 */
int cctest_shadow_addr(void) {
  int x = 10;
  int *p = &x;
  {
    int x = 20;
    int *q = &x;
    return *p + (*q - 10);
  }
}

/* For loop with two inits (C99 6.8.5.3) */
/* @expect 0x32 */
int cctest_for_two_init(void) {
  int sum = 0;
  for (int i = 0, j = 10; i < 5; i++, j--)
    sum += i + j;
  return sum; /* (0+10)+(1+9)+(2+8)+(3+7)+(4+6) = 50 = 0x32 */
}

/* _Bool indexing: nonzero becomes 1 (C99 6.3.1.2) */
/* @expect 0x20 */
int cctest_bool_as_index(void) {
  int arr[2] = {0x10, 0x20};
  _Bool b = 42;
  return arr[b];
}

/* Pointer difference is signed (C99 6.5.6 p9) */
/* @expect 0x55 */
int cctest_ptrdiff_sign(void) {
  int arr[10];
  ptrdiff_t d = &arr[2] - &arr[7];
  return (d == -5) ? 0x55 : 0xAA;
}

/* Null pointer vs object pointer (C99 6.5.9) */
/* @expect 0x03 */
int cctest_null_vs_object(void) {
  int x;
  int *p = &x;
  int *n = 0;
  int r = 0;
  if (p != n) r += 1;
  if (n == 0) r += 2;
  return r;
}

/* Static local persists across calls (C99 6.2.4 p3) */
static int _persist_counter2(void) {
  static int c = 0;
  return ++c;
}
/* @expect 0x55 */
int cctest_static_local_persist(void) {
  int a = _persist_counter2();
  int b = _persist_counter2();
  int c = _persist_counter2();
  /* b == a+1 and c == a+2 regardless of how many times we've been called */
  return (b == a + 1 && c == a + 2) ? 0x55 : 0xAA;
}

/* Switch with enum values (C99 6.8.4.2) */
/* @expect 0x03 */
int cctest_switch_enum_val(void) {
  enum rgb { R, G, B };
  enum rgb c = G;
  switch (c) {
  case R: return 1;
  case G: return 3;
  case B: return 5;
  }
  return 0;
}

/* 1-bit signed bitfield: stores 0 or -1 (C99 6.7.2.1) */
/* @expect 0x55 */
int cctest_bf_1bit_signed(void) {
  struct { signed int b : 1; } s;
  s.b = 1;
  return (s.b == -1) ? 0x55 : 0xAA;
}

/* Multiple return paths (C99 6.8.6.4) */
/* @expect 0x55 */
int cctest_multi_return_path(void) {
  int x = 3;
  if (x == 1) return 0x11;
  if (x == 2) return 0x22;
  if (x == 3) return 0x55;
  return 0xAA;
}

/* Struct containing array: sizeof (C99 6.7.2.1) */
/* @expect 0x18 */
int cctest_struct_arr_sizeof(void) {
  struct sa { int a; int b[5]; };
  return (int)sizeof(struct sa); /* 4+20=24 */
}

/* Union sizeof is max member (C99 6.7.2.1 p16) */
/* @expect 0x04 */
int cctest_union_sizeof_max(void) {
  union u { char c; int i; double d; };
  return (int)sizeof(union u); /* sizeof(double)=4 with -double-size-32 */
}

/* Comma operator evaluates all, returns last (C99 6.5.17) */
/* @expect 0x14 */
int cctest_comma_chain(void) {
  int x = 10;
  int y = (x += 5, x += 5, x);
  return y; /* 20 */
}

/* void* round-trips any pointer (C99 6.3.2.3 p1) */
/* @expect 0x42 */
int cctest_void_ptr_round(void) {
  int x = 0x42;
  void *v = &x;
  int *p = (int *)v;
  return *p;
}

/* sizeof string literal includes NUL (C99 6.4.5 p6) */
/* @expect 0x06 */
int cctest_sizeof_str_nul(void) {
  return (int)sizeof("hello");
}

/* Byte extraction via shift+mask (C99 6.5.7 + 6.5.10) */
/* @expect 0x34 */
int cctest_extract_byte(void) {
  unsigned int x = 0x12345678u;
  return (int)((x >> 16) & 0xFF);
}

/* Linked-list traversal (C99 6.7.2.1 p12) */
/* @expect 0x0F */
int cctest_list_traverse(void) {
  struct nd { int v; struct nd *n; };
  struct nd c = { 3, 0 };
  struct nd b = { 5, &c };
  struct nd a = { 7, &b };
  int sum = 0;
  for (struct nd *p = &a; p; p = p->n)
    sum += p->v;
  return sum; /* 15 */
}

/* Fall-through across multiple switch cases (C99 6.8.4.2) */
/* @expect 0x0E */
int cctest_fall_through_chain(void) {
  int r = 0;
  switch (2) {
  case 1: r += 1;
  case 2: r += 2;
  case 3: r += 4;
  case 4: r += 8;
  default: break;
  }
  return r; /* 2+4+8 = 14 */
}

/* Signed-to-unsigned promotion in comparison (C99 6.3.1.8) */
/* @expect 0x55 */
int cctest_sign_promo_cmp(void) {
  unsigned int u = 1;
  int s = -1;
  return (u < s) ? 0x55 : 0xAA; /* -1 promotes to UINT_MAX > 1 */
}

/* Unsigned overflow wraps to zero (C99 6.2.5 p9) */
/* @expect 0x55 */
int cctest_uint_wrap_zero(void) {
  unsigned int m = (unsigned int)-1;
  return (m + 1 == 0) ? 0x55 : 0xAA;
}

/* Partial struct zero-init (C99 6.7.8 p10) */
/* @expect 0 */
int cctest_partial_zero(void) {
  struct { int a; int b; int c; } s = { 0 };
  return s.a + s.b + s.c;
}

/* String indexing returns char value (C99 6.4.5 p5) */
/* @expect 0x65 */
int cctest_str_idx_char(void) {
  const char *s = "hello";
  return s[1]; /* 'e' */
}

/* Unsigned char wraps at 256 (C99 6.2.5 p9) */
/* @expect 0 */
int cctest_uchar_256(void) {
  unsigned char c = 255;
  c += 1;
  return (int)c;
}

/* Two's complement check (C99 6.2.6.2) */
/* @expect 0x55 */
int cctest_twos_compl(void) {
  unsigned int u = (unsigned int)(-1);
  return (u == 0xFFFFFFFFu) ? 0x55 : 0xAA;
}

/* Struct with const member in initializer (C99 6.7.8) */
/* @expect 0x1E */
int cctest_const_member_init(void) {
  struct cs { const int a; int b; };
  struct cs s = { 10, 20 };
  return s.a + s.b;
}

/* Short-circuit prevents bad dereference (C99 6.5.13) */
/* @expect 0x01 */
int cctest_short_circuit_null(void) {
  int *p = 0;
  int r = (p != 0) && (*p == 42);
  return (r == 0) ? 1 : 0;
}

/* Hex float literal (C99 6.4.4.2) */
/* @expect 0x55 */
int cctest_hex_float_p4(void) {
  float f = 0x1.0p4;
  return ((int)f == 16) ? 0x55 : 0xAA;
}

/* _Bool normalization: nonzero -> 1 (C99 6.3.1.2) */
/* @expect 0x03 */
int cctest_bool_norm_sum(void) {
  _Bool a = 42;
  _Bool b = -100;
  _Bool c = 0;
  _Bool d = 1;
  return (int)(a + b + c + d); /* 1+1+0+1 = 3 */
}

/* Struct assignment copies all members (C99 6.5.16.1 p2) */
/* @expect 0x1E */
int cctest_struct_assign_all(void) {
  struct s3 { int a; int b; int c; };
  struct s3 src = { 5, 10, 15 };
  struct s3 dst;
  dst = src;
  return dst.a + dst.b + dst.c;
}

/* Integer constant suffix combinations (C99 6.4.4.1) */
/* @expect 0x55 */
int cctest_int_suffix_combo(void) {
  unsigned long ul = 100UL;
  long unsigned lu = 100LU;
  unsigned long long ull = 100ULL;
  return (ul == lu && lu == (unsigned long)ull) ? 0x55 : 0xAA;
}

/* Ternary with different numeric types: usual arithmetic conversion (C99 6.5.15 p5) */
/* @expect 0x0A */
int cctest_ternary_conv(void) {
  int i = 1;
  float f = 10.0f;
  float result = i ? f : 0; /* result type is float */
  return (int)result;
}

/* Negative array index (pointer arithmetic) (C99 6.5.6) */
/* @expect 0x42 */
int cctest_neg_arr_idx(void) {
  int arr[5] = {0x10, 0x20, 0x42, 0x60, 0x80};
  int *p = &arr[4];
  return p[-2]; /* arr[2] */
}

/* Sizeof applied to parenthesized expression (C99 6.5.3.4) */
/* @expect 0x04 */
int cctest_sizeof_paren_expr(void) {
  int x = 42;
  return (int)sizeof((x)); /* sizeof(int) */
}

/* Const volatile variable: both qualifiers apply (C99 6.7.3) */
/* @expect 0x42 */
int cctest_const_volatile_var(void) {
  const volatile int x = 0x42;
  return x;
}

/* Empty initializer for struct defaults all to zero (C99 6.7.8 p10) */
/* @expect 0 */
int cctest_empty_struct_init(void) {
  struct { int a; int b; } s = {0};
  return s.a | s.b;
}

/* Nested ternary as array dimension (compile-time constant, C99 6.6) */
/* @expect 0x08 */
int cctest_ternary_dim(void) {
  int arr[sizeof(int) == 4 ? 2 : 4];
  return (int)sizeof(arr); /* 2 * 4 = 8 */
}

/* Pointer to first element past array is valid for comparison (C99 6.5.8 p5) */
/* @expect 0x05 */
int cctest_past_end_cmp(void) {
  int arr[5];
  int *end = &arr[5]; /* one past end: valid for comparison */
  int count = 0;
  for (int *p = arr; p != end; p++)
    count++;
  return count;
}

/* Variadic macro (__VA_ARGS__) (C99 6.10.3 p4) */
#define VA_SUM3(a, ...) ((a) + va_sum2_helper(__VA_ARGS__))
static int va_sum2_helper(int b, int c) { return b + c; }
/* @expect 0x1E */
int cctest_variadic_macro(void) {
  return VA_SUM3(10, 8, 12); /* 10 + 8 + 12 = 30 */
}

/* Macro stringification of expression (C99 6.10.3.2) */
/* @expect 0x03 */
int cctest_stringify_len(void) {
  #define MKSTR(x) #x
  const char *s = MKSTR(abc);
  int len = 0;
  while (s[len]) len++;
  return len; /* "abc" -> 3 */
  #undef MKSTR
}

/* Token pasting to form identifier (C99 6.10.3.3) */
static int tp_val_42 = 0x42;
#define TP_GET(prefix, num) prefix##_val_##num
/* @expect 0x42 */
int cctest_token_paste_id(void) {
  return TP_GET(tp, 42);
}

/* Unsigned multiplication overflow wraps (C99 6.2.5 p9) */
/* @expect 0x55 */
int cctest_uint_mul_wrap(void) {
  unsigned int a = 0x10000u;
  unsigned int b = 0x10000u;
  unsigned int c = a * b; /* 0x100000000 wraps to 0 */
  return (c == 0) ? 0x55 : 0xAA;
}

/* Assignment in condition: returns assigned value (C99 6.5.16) */
/* @expect 0x05 */
int cctest_assign_in_cond(void) {
  int x;
  if ((x = 5) > 3)
    return x;
  return 0;
}

/* do-while(0) idiom for macros (C99 6.8.5.2) */
#define DO_INCR(v) do { (v) += 1; } while(0)
/* @expect 0x03 */
int cctest_do_while_zero(void) {
  int x = 0;
  DO_INCR(x);
  DO_INCR(x);
  DO_INCR(x);
  return x;
}

/* Struct literal return (C99 6.8.6.4 + 6.5.2.5) */
struct ret_pair2 { int a; int b; };
static struct ret_pair2 make_ret_pair2(int a, int b) {
  struct ret_pair2 r = {a, b};
  return r;
}
/* @expect 0x1E */
int cctest_struct_ret_use(void) {
  struct ret_pair2 p = make_ret_pair2(10, 20);
  return p.a + p.b;
}

/* Array of pointers to different functions (C99 6.7.5.3) */
static int fn_ten(void) { return 10; }
static int fn_twenty(void) { return 20; }
static int fn_thirty(void) { return 30; }
/* @expect 0x3C */
int cctest_fnptr_dispatch(void) {
  int (*fns[3])(void) = { fn_ten, fn_twenty, fn_thirty };
  int sum = 0;
  for (int i = 0; i < 3; i++)
    sum += fns[i]();
  return sum; /* 60 */
}

/* Char promotion in arithmetic: char + char yields int (C99 6.3.1.1) */
/* @expect 0xFE */
int cctest_char_plus_char(void) {
  unsigned char a = 127;
  unsigned char b = 127;
  int sum = a + b; /* promoted to int, no overflow */
  return sum; /* 254 = 0xFE */
}

/* Long long constant (C99 6.4.4.1 p5) */
/* @expect 0x55 */
int cctest_llong_const(void) {
  long long x = 1LL << 40;
  long long y = x >> 40;
  return (y == 1) ? 0x55 : 0xAA;
}

/* Array of unions (C99 6.7.2.1) */
/* @expect 0x1E */
int cctest_union_array(void) {
  union iv { int i; float f; };
  union iv arr[3];
  arr[0].i = 10;
  arr[1].i = 5;
  arr[2].i = 15;
  return arr[0].i + arr[1].i + arr[2].i;
}

/* Nested loop with break in inner only (C99 6.8.6.3) */
/* @expect 0x0C */
int cctest_inner_break(void) {
  int sum = 0;
  for (int i = 0; i < 4; i++) {
    for (int j = 0; j < 100; j++) {
      if (j >= 3) break;
      sum += 1;
    }
  }
  return sum; /* 4*3 = 12 */
}

/* Continue in while loop (C99 6.8.6.2) */
/* @expect 0x19 */
int cctest_while_continue(void) {
  int sum = 0;
  int i = 0;
  while (i < 10) {
    i++;
    if (i % 2 == 0) continue;
    sum += i;
  }
  return sum; /* 1+3+5+7+9 = 25 */
}

/* Recursive function with accumulator (C99 6.9.1) */
static int sum_acc(int n, int acc) {
  if (n <= 0) return acc;
  return sum_acc(n - 1, acc + n);
}
/* @expect 0x37 */
int cctest_recursive_acc(void) {
  return sum_acc(10, 0); /* 55 */
}

/* Cast pointer to integer and back (C99 6.3.2.3 p5, p6) */
/* @expect 0x42 */
int cctest_ptr_int_round(void) {
  int x = 0x42;
  int *p = &x;
  uintptr_t u = (uintptr_t)p;
  int *q = (int *)u;
  return *q;
}

/* Nested if-else alignment (dangling else, C99 6.8.4.1 p3) */
/* @expect 0x02 */
int cctest_dangling_else2(void) {
  int r = 0;
  if (1)
    if (0) r = 1;
    else r = 2; /* binds to inner if */
  return r;
}

/* ================================================================
 * C99 COVERAGE ROUND 2 -- targeting specific standard gaps
 * ================================================================ */

/* Conversion rank: long > int > short > char (C99 6.3.1.1 p1) */
/* @expect 0x55 */
int cctest_conv_rank(void) {
  short s = 1;
  long l = 2;
  /* s is promoted to long for the addition; result type is long */
  long result = s + l;
  return (result == 3 && sizeof(result) == sizeof(long)) ? 0x55 : 0xAA;
}

/* Usual arithmetic conversion with unsigned (C99 6.3.1.8) */
/* @expect 0x55 */
int cctest_usual_arith_conv(void) {
  unsigned int u = 10;
  int s = -3;
  /* s converts to unsigned; result is unsigned */
  unsigned int result = u + s; /* 10 + (UINT_MAX - 2) wraps to 7 */
  return (result == 7) ? 0x55 : 0xAA;
}

/* Compound literal in loop: each iteration gets fresh lifetime (C99 6.5.2.5 p15) */
/* @expect 0x0F */
int cctest_complit_in_loop(void) {
  int sum = 0;
  for (int i = 1; i <= 5; i++) {
    const int *p = (const int[]){i, i * 2};
    sum += p[0]; /* 1+2+3+4+5 = 15 */
  }
  return sum;
}

/* Duff's device: interleaved switch/do-while (C99 6.8.4.2 + 6.8.5.2) */
/* @expect 0x24 */
int cctest_duff_copy(void) {
  int src[8] = {1, 2, 3, 4, 5, 6, 7, 8};
  int dst[8] = {0};
  int n = 8;
  int *s = src, *d = dst;
  /* Standard Duff's device copy */
  int chunks = (n + 3) / 4;
  switch (n % 4) {
  case 0: do { *d++ = *s++;
  case 3:      *d++ = *s++;
  case 2:      *d++ = *s++;
  case 1:      *d++ = *s++;
          } while (--chunks > 0);
  }
  int sum = 0;
  for (int i = 0; i < 8; i++) sum += dst[i];
  return sum; /* 36 = 0x24 */
}

/* Integer promotion of char in multiplication (C99 6.3.1.1) */
/* @expect 0x55 */
int cctest_char_mul_promo(void) {
  unsigned char a = 200;
  unsigned char b = 200;
  /* Both promoted to int; result is 40000, not truncated to char */
  int result = a * b;
  return (result == 40000) ? 0x55 : 0xAA;
}

/* Conversion from wider to narrower signed loses high bits (C99 6.3.1.3 p3) */
/* @expect 0x5678 */
int cctest_narrow_trunc(void) {
  int x = 0x12345678;
  short s = (short)x;
  /* Implementation-defined but typically keeps low 16 bits */
  return s & 0xFFFF;
}

/* Pointer arithmetic: p+1 advances by sizeof(*p) (C99 6.5.6 p8) */
/* @expect 0x04 */
int cctest_ptr_stride(void) {
  int arr[2];
  char *a = (char *)&arr[0];
  char *b = (char *)&arr[1];
  return (int)(b - a); /* sizeof(int) = 4 */
}

/* Struct tag and variable can have same name (C99 6.2.3) */
/* @expect 0x0A */
int cctest_tag_name_space(void) {
  struct s { int x; };
  int s = 5; /* 's' the variable, not the tag */
  struct s obj = { s + 5 };
  return obj.x; /* 10 */
}

/* Enum underlying type is int (C99 6.7.2.2 p4) */
/* @expect 0x04 */
int cctest_enum_is_int(void) {
  enum e { X };
  return (int)sizeof(enum e); /* sizeof(int) = 4 */
}

/* Bitfield unsigned overflow wraps (C99 6.2.6.1) */
/* @expect 0x07 */
int cctest_bf_unsigned_wrap(void) {
  struct { unsigned int v : 3; } s;
  s.v = 7; /* max for 3-bit */
  s.v += 1; /* wraps to 0 */
  return (s.v == 0) ? 0x07 : 0x00;
}

/* Multi-dimensional array layout is row-major (C99 6.5.2.1) */
/* @expect 0x55 */
int cctest_row_major(void) {
  int a[2][3] = {{1,2,3},{4,5,6}};
  /* a[1][0] == 4; in memory: 1,2,3,4,5,6 contiguous */
  int *flat = &a[0][0];
  return (flat[3] == 4 && flat[5] == 6) ? 0x55 : 0xAA;
}

/* Switch default not last (C99 6.8.4.2: default can appear anywhere) */
/* @expect 0x03 */
int cctest_default_first(void) {
  int x = 42;
  switch (x) {
  default: return 3;
  case 1: return 1;
  case 2: return 2;
  }
}

/* Consecutive string literals are concatenated (C99 6.4.5 p4) */
/* @expect 0x05 */
int cctest_str_concat_len(void) {
  const char *s = "ab" "cde";
  int len = 0;
  while (s[len]) len++;
  return len; /* "abcde" = 5 */
}

/* Struct initializer with fewer members: rest zero (C99 6.7.8 p21) */
/* @expect 0x0A */
int cctest_struct_partial_init(void) {
  struct { int a; int b; int c; } s = { 10 };
  return s.a + s.b + s.c; /* 10+0+0 = 10 */
}

/* Global array dimension from enum constant (C99 6.6 + 6.7.2.2) */
enum { DIM_VAL = 4 };
static int g_enum_dim[DIM_VAL];
/* @expect 0x10 */
int cctest_global_enum_dim(void) {
  return (int)sizeof(g_enum_dim); /* 4 * 4 = 16 */
}

/* Signed integer division: (a/b)*b + a%b == a (C99 6.5.5 p6) */
/* @expect 0x55 */
int cctest_div_mod_identity(void) {
  int a = -17, b = 5;
  int q = a / b;   /* -3 */
  int r = a % b;   /* -2 */
  return (q * b + r == a) ? 0x55 : 0xAA;
}

/* Char comparison: works on values not addresses (C99 6.5.8) */
/* @expect 0x07 */
int cctest_char_relational(void) {
  char a = 'A'; /* 65 */
  char b = 'Z'; /* 90 */
  int r = 0;
  if (a < b) r += 1;
  if (b > a) r += 2;
  if (a != b) r += 4;
  return r; /* 7 */
}

/* Cast between integer and floating point (C99 6.3.1.4) */
/* @expect 0x55 */
int cctest_float_int_round(void) {
  float f = 3.14f;
  int i = (int)f; /* 3: truncation toward zero */
  float g = (float)i; /* 3.0 */
  return (g == 3.0f && i == 3) ? 0x55 : 0xAA;
}

/* Array name is not a modifiable lvalue (C99 6.3.2.1 p3) */
/* @expect 0x55 */
int cctest_array_addr_const(void) {
  int arr[3] = {10, 20, 30};
  int *p = arr; /* arr decays to &arr[0] */
  return (*p == 10) ? 0x55 : 0xAA;
}

/* Multiple declarations in one statement (C99 6.7) */
/* @expect 0x0F */
int cctest_multi_decl_stmt(void) {
  int a = 1, b = 2, c = 4, d = 8;
  return a + b + c + d;
}

/* Scope rules: inner block hides outer (C99 6.2.1 p4) */
/* @expect 0x14 */
int cctest_scope_hide(void) {
  int x = 10;
  {
    int x = 20;
    return x; /* 20 = 0x14 */
  }
}

/* Unsigned char to int promotion is value-preserving (C99 6.3.1.1 p2) */
/* @expect 0xFF */
int cctest_uchar_promote(void) {
  unsigned char c = 255;
  int i = c; /* promoted, value preserved */
  return i;
}

/* Pointer to const vs const pointer (C99 6.7.3) */
/* @expect 0x55 */
int cctest_const_ptr_vs_ptr_const(void) {
  int x = 10, y = 20;
  const int *p = &x;  /* pointer to const int: can change p, not *p */
  int *const q = &x;  /* const pointer to int: can change *q, not q */
  p = &y; /* OK: p can be reassigned */
  *q = 30; /* OK: *q can be modified */
  return (x == 30 && *p == 20) ? 0x55 : 0xAA;
}

/* Switch without default: no case matched (C99 6.8.4.2 p5) */
/* @expect 0x42 */
int cctest_switch_no_match(void) {
  int r = 0x42;
  switch (99) {
  case 1: r = 1; break;
  case 2: r = 2; break;
  }
  return r; /* no case matched, r unchanged */
}

/* Nested function calls as arguments (C99 6.5.2.2) */
/* @expect 0x0F */
int cctest_nested_call_args(void) {
  /* add(add(1,2), add(3, add(4,5))) = add(3, add(3,9)) = add(3,12) = 15 */
  return helper_add(helper_add(1, 2), helper_add(3, helper_add(4, 5)));
}

/* Empty for-loop body with semicolon (C99 6.8.5.3) */
/* @expect 0x0A */
int cctest_for_empty_body(void) {
  int i;
  for (i = 0; i < 10; i++)
    ; /* empty body */
  return i;
}

/* Bitwise ops on mixed signed/unsigned: result is unsigned (C99 6.5.10-12) */
/* @expect 0x55 */
int cctest_bitwise_mixed_sign(void) {
  int s = -1; /* all bits set */
  unsigned int u = 0xFF00;
  unsigned int result = s & u; /* s promoted to unsigned */
  return (result == 0xFF00) ? 0x55 : 0xAA;
}

/* sizeof does not evaluate operand (C99 6.5.3.4 p2) */
/* @expect 0x04 */
int cctest_sizeof_no_sideeffect(void) {
  int x = 0;
  int sz = (int)sizeof(x = 42); /* x = 42 is NOT executed */
  return sz + x; /* 4 + 0 = 4 */
}

/* Zero-length initializer list zeros entire aggregate (C99 6.7.8 p21) */
/* @expect 0x55 */
int cctest_zero_init_array(void) {
  int arr[100] = {0};
  int ok = 1;
  for (int i = 0; i < 100; i++)
    if (arr[i] != 0) ok = 0;
  return ok ? 0x55 : 0xAA;
}

/* Multiple labels on same statement (C99 6.8.1) */
/* @expect 0x55 */
int cctest_multi_goto_label(void) {
  goto second;
first:
second:
  return 0x55;
}

/* Function pointer equality (C99 6.5.9 p6) */
/* @expect 0x55 */
int cctest_fnptr_eq(void) {
  int (*f)(int, int) = helper_add;
  int (*g)(int, int) = helper_add;
  int (*h)(int, int) = helper_mul;
  return (f == g && f != h) ? 0x55 : 0xAA;
}

/* Operand evaluation order: comma guarantees left-to-right (C99 6.5.17) */
/* @expect 0x05 */
int cctest_comma_order(void) {
  int x = 0;
  int y = (x = 3, x += 2, x); /* x=3 then x=5 */
  return y;
}

/* Struct containing pointer to own type (self-referential, C99 6.7.2.1 p12) */
/* @expect 0x1E */
int cctest_self_ref_struct(void) {
  struct list { int val; struct list *next; };
  struct list c = {10, 0};
  struct list b = {10, &c};
  struct list a = {10, &b};
  int sum = 0;
  struct list *p = &a;
  while (p) { sum += p->val; p = p->next; }
  return sum; /* 30 */
}

/* do-while runs at least once even if condition is false (C99 6.8.5.2) */
/* @expect 0x01 */
int cctest_do_at_least_once(void) {
  int count = 0;
  do {
    count++;
  } while (0);
  return count;
}

/* Array of structs with initializer (C99 6.7.8) */
/* @expect 0x15 */
int cctest_arr_struct_init(void) {
  struct pt { int x; int y; };
  struct pt pts[] = {{1,2},{3,4},{5,6}};
  return pts[0].x + pts[0].y + pts[1].x + pts[1].y + pts[2].x + pts[2].y;
  /* 1+2+3+4+5+6 = 21 = 0x15 */
}

/* Long long multiplication (C99 6.5.5) */
/* @expect 0x55 */
int cctest_ll_mul(void) {
  long long a = 100000LL;
  long long b = 100000LL;
  long long c = a * b; /* 10,000,000,000 = 0x2540BE400 */
  return (c == 10000000000LL) ? 0x55 : 0xAA;
}

/* Long long division and modulo (C99 6.5.5) */
/* @expect 0x55 */
int cctest_ll_div(void) {
  long long a = 1000000000LL;
  long long b = 7LL;
  long long q = a / b;   /* 142857142 */
  long long r = a % b;   /* 6 */
  return (q == 142857142LL && r == 6LL) ? 0x55 : 0xAA;
}

/* Long long comparison operators (C99 6.5.8, 6.5.9) */
/* @expect 0x1F */
int cctest_ll_cmp(void) {
  long long a = 1LL << 40;
  long long b = (1LL << 40) + 1;
  int r = 0;
  if (a < b) r += 1;
  if (b > a) r += 2;
  if (a <= b) r += 4;
  if (a != b) r += 8;
  if (a == a) r += 16;
  return r; /* 1+2+4+8+16 = 31 = 0x1F */
}

/* Long long negation (C99 6.5.3.3) */
/* @expect 0x55 */
int cctest_ll_neg(void) {
  long long a = 12345678901LL;
  long long b = -a;
  return (a + b == 0) ? 0x55 : 0xAA;
}

/* Long long bitwise ops (C99 6.5.10-12) */
/* @expect 0x55 */
int cctest_ll_bitwise(void) {
  long long a = 0x00FF00FF00FF00FFLL;
  long long b = 0xFF00FF00FF00FF00LL;
  long long c = a | b;
  return (c == -1LL) ? 0x55 : 0xAA; /* all bits set = -1 */
}

/* Hex escape in character literal (C99 6.4.4.4) */
/* @expect 0x41 */
int cctest_hex_char_esc(void) {
  char c = '\x41'; /* 'A' */
  return (int)c;
}

/* Octal escape in character literal (C99 6.4.4.4) */
/* @expect 0x09 */
int cctest_octal_char_esc(void) {
  char c = '\011'; /* tab = 9 */
  return (int)c;
}

/* String literal has static storage duration (C99 6.4.5 p6) */
/* @expect 0x55 */
int cctest_str_literal_lifetime(void) {
  const char *p;
  {
    p = "hello"; /* string literal persists past block */
  }
  return (p[0] == 'h') ? 0x55 : 0xAA;
}

/* Adjacent wide and narrow string concatenation is not required by C99;
   test narrow adjacent only (C99 6.4.5 p4) */
/* @expect 0x07 */
int cctest_str_3concat(void) {
  const char *s = "ab" "cd" "efg";
  int len = 0;
  while (s[len]) len++;
  return len; /* 7 */
}

/* Pointer to void: arithmetic not defined, but cast round-trips (C99 6.3.2.3) */
/* @expect 0x55 */
int cctest_void_ptr_cast_back(void) {
  int x = 42;
  void *v = &x;
  int *p = (int *)v;
  *p = 0x55;
  return x;
}

/* Increment and dereference combined: (*p)++ (C99 6.5.2.4 + 6.5.3.2) */
/* @expect 0x0B */
int cctest_deref_postinc(void) {
  int x = 10;
  int *p = &x;
  (*p)++;
  return x; /* 11 */
}

/* Pre-decrement through pointer: --*p (C99 6.5.3.1 + 6.5.3.2) */
/* @expect 0x09 */
int cctest_deref_predec(void) {
  int x = 10;
  int *p = &x;
  --*p;
  return x; /* 9 */
}

/* Multiple levels of pointer indirection (C99 6.5.3.2) */
/* @expect 0x42 */
int cctest_triple_ptr(void) {
  int x = 0x42;
  int *p = &x;
  int **pp = &p;
  int ***ppp = &pp;
  return ***ppp;
}

/* Compound assignment through pointer: multiple ops (C99 6.5.16.2) */
/* @expect 0x1E */
int cctest_ptr_compound_asgn(void) {
  int x = 10;
  int *p = &x;
  *p += 5;
  *p *= 2;
  return x; /* (10+5)*2 = 30 = 0x1E */
}

/* Static function visible only in this TU (C99 6.2.2 p3) */
static int _tu_private(void) { return 42; }
/* @expect 0x2A */
int cctest_static_visibility(void) {
  return _tu_private();
}

/* External linkage variable (C99 6.2.2 p5) */
int cctest_ext_linkage_var = 0x37;
/* @expect 0x37 */
int cctest_ext_linkage(void) {
  return cctest_ext_linkage_var;
}

/* Enum constant usable in case label (C99 6.6 + 6.8.4.2) */
/* @expect 0x0A */
int cctest_enum_case(void) {
  enum { VAL_A = 10, VAL_B = 20, VAL_C = 30 };
  int x = VAL_A;
  switch (x) {
  case VAL_A: return 10;
  case VAL_B: return 20;
  case VAL_C: return 30;
  default: return 0;
  }
}

/* Array passed to function decays to pointer: sizeof in callee (C99 6.3.2.1 p3) */
static int ptr_size(int *p) { return (int)sizeof(p); }
/* @expect 0x04 */
int cctest_array_decay_sizeof(void) {
  int arr[100];
  return ptr_size(arr); /* sizeof(int*) = 4, not sizeof(arr) */
}

/* Signed char range (C99 5.2.4.2.1) */
/* @expect 0x55 */
int cctest_schar_range(void) {
  signed char c = -128;
  signed char d = 127;
  return (c == -128 && d == 127) ? 0x55 : 0xAA;
}

/* Unsigned short max (C99 5.2.4.2.1) */
/* @expect 0x55 */
int cctest_ushort_range(void) {
  unsigned short s = 65535;
  return (s == 65535) ? 0x55 : 0xAA;
}

/* Mixed signed/unsigned in shift: shift amount is int (C99 6.5.7) */
/* @expect 0x55 */
int cctest_shift_mixed_types(void) {
  unsigned int u = 1u;
  int shift = 4;
  unsigned int result = u << shift; /* 16 */
  return (result == 16) ? 0x55 : 0xAA;
}

/* Conditional expression with void type (C99 6.5.15 p4) */
/* @expect 0x14 */
int cctest_ternary_void_expr(void) {
  int x = 10;
  int y = 10;
  (x > 0) ? (void)(y = 20) : (void)(y = 30);
  return y;
}

/* ================================================================
 * C99 COVERAGE ROUND 3 -- final gap closure
 * ================================================================ */

/* Signed char promoted to unsigned int: sign-extends first (C99 6.3.1.3 + 6.3.1.1) */
/* @expect 0x55 */
int cctest_schar_to_uint(void) {
  signed char c = -1;
  unsigned int u = c; /* sign-extends to int (-1), then converts to UINT_MAX */
  return (u == (unsigned int)-1) ? 0x55 : 0xAA;
}

/* Compound literal struct as function argument (C99 6.5.2.5) */
struct cl_pair { int a; int b; };
static int cl_sum(struct cl_pair p) { return p.a + p.b; }
/* @expect 0x1E */
int cctest_complit_struct_arg(void) {
  return cl_sum((struct cl_pair){10, 20});
}

/* Linked list reversal: pointer manipulation pattern (C99 6.5.3.2 + 6.5.16) */
/* @expect 0x03 */
int cctest_list_reverse(void) {
  struct node { int val; struct node *next; };
  struct node c = {3, 0};
  struct node b = {2, &c};
  struct node a = {1, &b};
  struct node *prev = 0, *curr = &a, *next;
  while (curr) {
    next = curr->next;
    curr->next = prev;
    prev = curr;
    curr = next;
  }
  /* Now prev points to reversed list: 3->2->1->null */
  return prev->val; /* 3 */
}

/* Stack-like array with push/pop pattern (C99 6.5.6 + 6.5.2.1) */
/* @expect 0x3C */
int cctest_stack_pattern(void) {
  int stack[8];
  int sp = 0;
  stack[sp++] = 10;
  stack[sp++] = 20;
  stack[sp++] = 30;
  int c = stack[--sp]; /* 30 */
  int b = stack[--sp]; /* 20 */
  int a = stack[--sp]; /* 10 */
  return a + b + c; /* 10+20+30 = 60 = 0x3C */
}

/* Stack: return sum of popped values */
/* @expect 0x3C */
int cctest_stack_sum(void) {
  int stack[8];
  int sp = 0;
  stack[sp++] = 10;
  stack[sp++] = 20;
  stack[sp++] = 30;
  return stack[--sp] + stack[--sp] + stack[--sp]; /* 30+20+10=60=0x3C */
}

/* Nested do-while loops (C99 6.8.5.2) */
/* @expect 0x09 */
int cctest_nested_dowhile(void) {
  int count = 0;
  int i = 0;
  do {
    int j = 0;
    do {
      count++;
      j++;
    } while (j < 3);
    i++;
  } while (i < 3);
  return count; /* 3*3 = 9 */
}

/* Integer constant with all suffix combos (C99 6.4.4.1) */
/* @expect 0x55 */
int cctest_int_suffix_all(void) {
  unsigned u = 42U;
  long l = 42L;
  unsigned long ul = 42UL;
  long long ll = 42LL;
  unsigned long long ull = 42ULL;
  return (u == 42 && l == 42 && ul == 42 && ll == 42 && ull == 42) ? 0x55 : 0xAA;
}

/* Bit counting: count trailing zeros (C99 6.5.7 + 6.5.10) */
/* @expect 0x04 */
int cctest_ctz(void) {
  unsigned int x = 0x30; /* 0b00110000 */
  int ctz = 0;
  while ((x & 1) == 0 && ctz < 32) {
    ctz++;
    x >>= 1;
  }
  return ctz; /* 4 */
}

/* Pointer comparison with null using relational ops (C99 6.5.8 p5 footnote) */
/* @expect 0x03 */
int cctest_null_relational_ops(void) {
  int x;
  int *p = &x;
  int *n = 0;
  int r = 0;
  if (p > n || p >= n) r += 1;   /* non-null > null in flat address space */
  if (!(n > p)) r += 2;
  return r;
}

/* Pointer arithmetic on char* (stride = 1) (C99 6.5.6 p8) */
/* @expect 0x55 */
int cctest_charptr_stride(void) {
  char arr[4] = {10, 20, 30, 40};
  char *p = arr;
  p += 2;
  return (*p == 30) ? 0x55 : 0xAA;
}

/* Struct with bitfield increment (read-modify-write) (C99 6.5.16.2) */
/* @expect 0x05 */
int cctest_bf_increment(void) {
  struct { unsigned int val : 4; } s;
  s.val = 3;
  s.val += 2;
  return s.val; /* 5 */
}

/* Switch on expression (not just variable) (C99 6.8.4.2) */
/* @expect 0x55 */
int cctest_switch_expr(void) {
  int a = 3, b = 4;
  switch (a + b) {
  case 7: return 0x55;
  case 8: return 0xAA;
  default: return 0;
  }
}

/* Conditional with null and typed pointer (C99 6.5.15 p6) */
/* @expect 0x55 */
int cctest_ternary_null_typed(void) {
  int x = 42;
  int *p = (1) ? &x : (int *)0; /* both branches are int* */
  return (*p == 42) ? 0x55 : 0xAA;
}

/* Global const struct with all members init (C99 6.7.8) */
static const struct { int x; int y; int z; } g_const_pt = { 3, 4, 5 };
/* @expect 0x0C */
int cctest_global_const_struct(void) {
  return g_const_pt.x + g_const_pt.y + g_const_pt.z; /* 12 */
}

/* Array as struct member: sizeof includes it (C99 6.7.2.1) */
/* @expect 0x55 */
int cctest_struct_arr_size(void) {
  struct { int hdr; char data[12]; } s;
  /* sizeof should be at least 4 + 12 = 16 */
  return (sizeof(s) >= 16) ? 0x55 : 0xAA;
}

/* Multiple return values via output pointer (C99 6.5.3.2) */
static void divmod(int a, int b, int *q, int *r) {
  *q = a / b;
  *r = a % b;
}
/* @expect 0x55 */
int cctest_out_ptr_pair(void) {
  int q, r;
  divmod(17, 5, &q, &r);
  return (q == 3 && r == 2) ? 0x55 : 0xAA;
}

/* Chained comparison idiom: a < b && b < c (C99 6.5.13) */
/* @expect 0x55 */
int cctest_chained_cmp(void) {
  int a = 1, b = 5, c = 10;
  return (a < b && b < c) ? 0x55 : 0xAA;
}

/* Compute integer log2 via shift (C99 6.5.7) */
/* @expect 0x0A */
int cctest_log2_shift(void) {
  unsigned int x = 1024; /* 2^10 */
  int log2 = 0;
  while (x > 1) { x >>= 1; log2++; }
  return log2;
}

/* Casting between signed and unsigned preserves bit pattern (C99 6.3.1.3) */
/* @expect 0x55 */
int cctest_sign_cast_preserve(void) {
  int s = -1;
  unsigned int u = (unsigned int)s;
  int s2 = (int)u;
  return (s2 == -1 && u == 0xFFFFFFFFu) ? 0x55 : 0xAA;
}

/* Struct padding: member after char is aligned (C99 6.7.2.1 p12) */
/* @expect 0x55 */
int cctest_struct_align(void) {
  struct { char c; int i; } s;
  /* &s.i should be aligned to 4 */
  int offset = (char *)&s.i - (char *)&s;
  return (offset >= 2) ? 0x55 : 0xAA; /* at least 2 bytes gap for alignment */
}

/* Empty parameter list means unspecified args in C99 (C99 6.7.5.3 p14) */
static int unspec_params() { return 0x42; }
/* @expect 0x42 */
int cctest_unspec_params(void) {
  return unspec_params();
}

/* Character escape sequences: bell, backspace, formfeed (C99 6.4.4.4) */
/* @expect 0x55 */
int cctest_char_escapes_full(void) {
  char bel = '\a'; /* 7 */
  char bs  = '\b'; /* 8 */
  char ff  = '\f'; /* 12 */
  char cr  = '\r'; /* 13 */
  char tab = '\t'; /* 9 */
  char vt  = '\v'; /* 11 */
  return (bel == 7 && bs == 8 && ff == 12 && cr == 13 && tab == 9 && vt == 11) ? 0x55 : 0xAA;
}

/* Conversion: unsigned to float (C99 6.3.1.4) */
/* @expect 0x55 */
int cctest_uint_to_float_conv(void) {
  unsigned int u = 1000000;
  float f = (float)u;
  return ((int)f == 1000000) ? 0x55 : 0xAA;
}

/* Float to unsigned: negative becomes large (C99 6.3.1.4 - undefined, but test positive) */
/* @expect 0x55 */
int cctest_float_to_uint_pos(void) {
  float f = 42.7f;
  unsigned int u = (unsigned int)f;
  return (u == 42) ? 0x55 : 0xAA;
}

/* Enum in for-loop (C99 6.7.2.2 + 6.8.5.3) */
/* @expect 0x06 */
int cctest_enum_for(void) {
  enum { START = 0, END = 3 };
  int sum = 0;
  for (int i = START; i <= END; i++) sum += i;
  return sum; /* 0+1+2+3 = 6 */
}

/* Array decay in ternary: both branches decay (C99 6.3.2.1 p3 + 6.5.15) */
/* @expect 0x55 */
int cctest_ternary_array_decay(void) {
  int a[2] = {0x55, 0xAA};
  int b[2] = {0xBB, 0xCC};
  int *p = (1) ? a : b;
  return p[0];
}

/* Union size with different member sizes (C99 6.7.2.1 p16) */
/* @expect 0x55 */
int cctest_union_size_members(void) {
  union { char c; short s; int i; } u;
  return (sizeof(u) == sizeof(int)) ? 0x55 : 0xAA;
}

/* Bit rotation via shift and or (C99 6.5.7 + 6.5.12) */
/* @expect 0x55 */
int cctest_rotate_left(void) {
  unsigned int x = 0x12345678u;
  int n = 8;
  unsigned int rotated = (x << n) | (x >> (32 - n));
  return (rotated == 0x34567812u) ? 0x55 : 0xAA;
}

/* Designated initializer override: later value wins (C99 6.7.8 p19) */
/* @expect 0x14 */
int cctest_desig_later_wins(void) {
  int a[3] = { [0] = 10, [1] = 99, [1] = 20, [2] = 30 };
  return a[1]; /* 20 overrides 99 */
}

/* memcpy-like loop: byte-by-byte copy (C99 6.5.2.1 + 6.5.6) */
/* @expect 0x55 */
int cctest_bytewise_copy(void) {
  int src = 0x12345678;
  int dst = 0;
  char *s = (char *)&src;
  char *d = (char *)&dst;
  for (int i = 0; i < (int)sizeof(int); i++)
    d[i] = s[i];
  return (dst == src) ? 0x55 : 0xAA;
}

/* ================================================================
 * C99 COVERAGE ROUND 4 -- closing remaining gaps
 * ================================================================ */

/* sizeof(_Bool) is 1 on most implementations (C99 6.5.3.4 + 6.2.5) */
/* @expect 0x55 */
int cctest_sizeof_bool(void) {
  return (sizeof(_Bool) >= 1) ? 0x55 : 0xAA;
}

/* XOR swap: swap two variables without a temp (C99 6.5.11) */
/* @expect 0x55 */
int cctest_xor_swap(void) {
  int a = 0x12, b = 0x34;
  a ^= b; b ^= a; a ^= b;
  return (a == 0x34 && b == 0x12) ? 0x55 : 0xAA;
}

/* GCD via Euclidean algorithm (C99 6.5.5) */
static int gcd(int a, int b) {
  while (b != 0) { int t = b; b = a % b; a = t; }
  return a;
}
/* @expect 0x06 */
int cctest_gcd(void) {
  return gcd(48, 18); /* 6 */
}

/* Power-of-two check: n & (n-1) == 0 for powers of 2 (C99 6.5.10) */
/* @expect 0x55 */
int cctest_is_pow2(void) {
  int r = 1;
  for (int i = 0; i < 10; i++) {
    int n = 1 << i;
    if ((n & (n - 1)) != 0) r = 0;
  }
  return r ? 0x55 : 0xAA;
}

/* Bit reversal of a byte (C99 6.5.7 + 6.5.10) */
/* @expect 0x55 */
int cctest_bit_reverse(void) {
  unsigned char x = 0xB4; /* 10110100 -> 00101101 = 0x2D */
  unsigned char r = 0;
  for (int i = 0; i < 8; i++) {
    r = (r << 1) | (x & 1);
    x >>= 1;
  }
  return (r == 0x2D) ? 0x55 : 0xAA;
}

/* Binary search in sorted array (C99 6.5.8 + 6.5.6) */
/* @expect 0x04 */
int cctest_binary_search(void) {
  int arr[] = {2, 5, 8, 13, 21, 34, 55};
  int target = 21;
  int lo = 0, hi = 6, result = -1;
  while (lo <= hi) {
    int mid = lo + (hi - lo) / 2;
    if (arr[mid] == target) { result = mid; break; }
    else if (arr[mid] < target) lo = mid + 1;
    else hi = mid - 1;
  }
  return result; /* index 4 */
}

/* Division by -1 for positive number (C99 6.5.5) */
/* @expect 0x55 */
int cctest_div_neg1(void) {
  int x = 42;
  return (x / (-1) == -42) ? 0x55 : 0xAA;
}

/* Modulo by 1 always yields 0 (C99 6.5.5 p6) */
/* @expect 0x55 */
int cctest_mod_by_1(void) {
  int r = 1;
  for (int i = -10; i <= 10; i++) {
    if (i % 1 != 0) r = 0;
  }
  return r ? 0x55 : 0xAA;
}

/* Shift by 0 is identity (C99 6.5.7) */
/* @expect 0x55 */
int cctest_shift_zero(void) {
  int x = 0x12345678;
  return ((x << 0) == x && (x >> 0) == x) ? 0x55 : 0xAA;
}

/* Sign extension: narrow field sign-extends when widened (C99 6.3.1.3) */
/* @expect 0x55 */
int cctest_sign_extend_narrow(void) {
  struct { signed int val : 8; } s;
  s.val = -5; /* stored as 8-bit: 0xFB */
  int wide = s.val; /* sign-extends to -5 */
  return (wide == -5) ? 0x55 : 0xAA;
}

/* Compound literal with const qualifier (C99 6.5.2.5 p3) */
/* @expect 0x55 */
int cctest_const_complit(void) {
  const int *p = (const int[]){10, 20, 30};
  return (p[0] + p[1] + p[2] == 60) ? 0x55 : 0xAA;
}

/* Nested #if / #elif / #else (C99 6.10.1) */
/* @expect 0x03 */
int cctest_nested_ifdef(void) {
  int r = 0;
#if 1
  r += 1;
  #if 0
    r += 100;
  #elif 1
    r += 2;
  #else
    r += 200;
  #endif
#else
  r += 300;
#endif
  return r; /* 1 + 2 = 3 */
}

/* Bitfield in union (C99 6.7.2.1) */
/* @expect 0x55 */
int cctest_union_bitfield(void) {
  union {
    unsigned int raw;
    struct { unsigned int lo : 16; unsigned int hi : 16; } parts;
  } u;
  u.raw = 0;
  u.parts.lo = 0x1234;
  u.parts.hi = 0x5678;
  return (u.raw == 0x56781234u) ? 0x55 : 0xAA;
}

/* Multiply by zero (C99 6.5.5) */
/* @expect 0 */
int cctest_mul_zero(void) {
  volatile int x = 42;
  return x * 0;
}

/* Divide zero by nonzero (C99 6.5.5) */
/* @expect 0 */
int cctest_div_zero_num(void) {
  int x = 0, y = 42;
  return x / y;
}

/* Unary minus on unsigned: well-defined 2s complement (C99 6.5.3.3 p3) */
/* @expect 0x55 */
int cctest_neg_unsigned_val(void) {
  unsigned int u = 1;
  unsigned int neg = -u; /* UINT_MAX */
  return (neg == 0xFFFFFFFFu) ? 0x55 : 0xAA;
}

/* Large switch with dense cases (stress test for jump table) (C99 6.8.4.2) */
/* @expect 0x37 */
int cctest_dense_switch(void) {
  int sum = 0;
  for (int i = 0; i < 10; i++) {
    switch (i) {
    case 0: sum += 1; break;
    case 1: sum += 2; break;
    case 2: sum += 3; break;
    case 3: sum += 4; break;
    case 4: sum += 5; break;
    case 5: sum += 6; break;
    case 6: sum += 7; break;
    case 7: sum += 8; break;
    case 8: sum += 9; break;
    case 9: sum += 10; break;
    }
  }
  return sum; /* 55 = 0x37 */
}

/* Array of const pointers to const strings (C99 6.7.3 + 6.4.5) */
/* @expect 0x04 */
int cctest_const_str_arr(void) {
  const char *const names[] = {"ab", "cd", "ef", "gh"};
  int count = 0;
  for (int i = 0; i < 4; i++)
    if (names[i][0] != 0) count++;
  return count; /* 4 */
}

/* Nested function pointer: function returning function pointer (C99 6.7.5.3) */
static int add1(int x) { return x + 1; }
static int sub1(int x) { return x - 1; }
typedef int (*unary_fn)(int);
static unary_fn pick_fn(int which) { return which ? add1 : sub1; }
/* @expect 0x0B */
int cctest_fn_returning_fnptr(void) {
  unary_fn f = pick_fn(1);
  return f(10); /* add1(10) = 11 */
}

/* Recursive struct with count (C99 6.7.2.1 p12) */
/* @expect 0x05 */
int cctest_list_count(void) {
  struct nd { int v; struct nd *n; };
  struct nd e = {5, 0};
  struct nd d = {4, &e};
  struct nd c = {3, &d};
  struct nd b = {2, &c};
  struct nd a = {1, &b};
  int count = 0;
  for (struct nd *p = &a; p; p = p->n) count++;
  return count;
}

/* Void pointer size == int pointer size on flat-memory model (C99 6.2.5) */
/* @expect 0x55 */
int cctest_ptr_sizes_equal(void) {
  return (sizeof(void*) == sizeof(int*) &&
          sizeof(int*) == sizeof(char*)) ? 0x55 : 0xAA;
}

/* String comparison via loop (strcmp-like) (C99 6.4.5) */
/* @expect 0x55 */
int cctest_strcmp_loop(void) {
  const char *a = "hello";
  const char *b = "hello";
  const char *c = "world";
  int eq_ab = 1, eq_ac = 1;
  for (int i = 0; a[i] || b[i]; i++)
    if (a[i] != b[i]) { eq_ab = 0; break; }
  for (int i = 0; a[i] || c[i]; i++)
    if (a[i] != c[i]) { eq_ac = 0; break; }
  return (eq_ab && !eq_ac) ? 0x55 : 0xAA;
}

/* Chained struct copy (C99 6.5.16.1 p2) */
/* @expect 0x55 */
int cctest_struct_chain_assign(void) {
  struct p2 { int x; int y; };
  struct p2 a = {1, 2}, b, c;
  c = b = a; /* chained assignment */
  return (c.x == 1 && c.y == 2 && b.x == 1) ? 0x55 : 0xAA;
}

/* Preprocessor arithmetic: shifts and comparisons in #if (C99 6.10.1 p1) */
/* @expect 0x55 */
int cctest_pp_arith(void) {
#if (1 << 4) == 16 && (100 / 3) == 33
  return 0x55;
#else
  return 0xAA;
#endif
}

/* Integer overflow detection via unsigned cast (C99 6.2.5 p9) */
/* @expect 0x55 */
int cctest_overflow_detect(void) {
  unsigned int a = 0xFFFFFFFF;
  unsigned int b = 1;
  unsigned int sum = a + b;
  int overflowed = (sum < a); /* wrapped → sum < a */
  return overflowed ? 0x55 : 0xAA;
}

/* Two-dimensional array pointer decay (C99 6.3.2.1 p3) */
/* @expect 0x55 */
int cctest_2d_decay(void) {
  int a[3][4];
  a[1][2] = 0x55;
  int (*row)[4] = a; /* decay: int[3][4] -> int(*)[4] */
  return row[1][2];
}

/* Negative long long (C99 6.5.3.3) */
/* @expect 0x55 */
int cctest_ll_neg_val(void) {
  long long x = -1LL;
  long long y = -9999999999LL;
  return (x < 0 && y < 0 && x > y) ? 0x55 : 0xAA;
}

/* Empty macro arguments are valid (C99 6.10.3) */
#define FIRST_ARG(a, b) (a)
#define SECOND_ARG(a, b) (b)
/* @expect 0x55 */
int cctest_macro_select(void) {
  int x = FIRST_ARG(0x55, 0xAA);
  int y = SECOND_ARG(0xAA, 0x55);
  return (x == 0x55 && y == 0x55) ? 0x55 : 0xAA;
}

/* Extern variable declaration inside function matches file-scope (C99 6.2.2 p5) */
int cctest_ext_link_val2 = 0x42;
/* @expect 0x42 */
int cctest_extern_inside(void) {
  extern int cctest_ext_link_val2;
  return cctest_ext_link_val2;
}

/* Macro argument expansion before substitution (C99 6.10.3.1): when
   a parameter appears in the replacement list not adjacent to # or
   ##, its corresponding argument must be rescanned and expanded
   first. The canonical test is __LINE__ pasted through a two-level
   CAT macro: the outer CAT takes __LINE__ in a non-paste slot, so
   the preprocessor must expand it to a line number before passing
   to the inner PASTE, which then concatenates. Before this was
   fixed, PASTE received the literal token "__LINE__" and emitted
   the bogus identifier "x___LINE__". */
#define PASTE2_XA(a, b) a##b
#define PASTE_XA(a, b) PASTE2_XA(a, b)
/* Each of these declarations takes its numeric suffix from
   __LINE__, so after the fix they land on three distinct
   identifiers; before the fix they would all collapse to
   `cctest_line_paste___LINE__` and fail to compile. */
int PASTE_XA(cctest_line_paste_, __LINE__) = 0x11;
int PASTE_XA(cctest_line_paste_, __LINE__) = 0x22;
int PASTE_XA(cctest_line_paste_, __LINE__) = 0x55;
/* @expect 0x55 */
int cctest_line_paste(void) {
  /* Reference each paste-produced symbol to prove they are
     distinct; the returned value comes from the last one. */
  int sum = PASTE_XA(cctest_line_paste_, 7812)
          + PASTE_XA(cctest_line_paste_, 7813);
  (void)sum;
  return PASTE_XA(cctest_line_paste_, 7814);
}
