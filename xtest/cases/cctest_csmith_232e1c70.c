// SPDX-License-Identifier: MIT
// cctest_csmith_232e1c70.c --- cctest case csmith_232e1c70 (csmith seed 590224496)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x8c1de2b0 */
/* @exp_ticks 0xc865 */

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

static unsigned int crc32_tab[256];
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

static int8_t
safe_unary_minus_func_int8_t_s(int8_t si )
{
 
  return
    -si;
}
static int8_t
safe_add_func_int8_t_s_s(int8_t si1, int8_t si2 )
{
 
  return
    (si1 + si2);
}
static int8_t
safe_sub_func_int8_t_s_s(int8_t si1, int8_t si2 )
{
 
  return
    (si1 - si2);
}
static int8_t
safe_mul_func_int8_t_s_s(int8_t si1, int8_t si2 )
{
 
  return
    si1 * si2;
}
static int8_t
safe_mod_func_int8_t_s_s(int8_t si1, int8_t si2 )
{
 
  return
    ((si2 == 0) || ((si1 == (-128)) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 % si2);
}
static int8_t
safe_div_func_int8_t_s_s(int8_t si1, int8_t si2 )
{
 
  return
    ((si2 == 0) || ((si1 == (-128)) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 / si2);
}
static int8_t
safe_lshift_func_int8_t_s_s(int8_t left, int right )
{
 
  return
    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32) || (left > ((127) >> ((int)right)))) ?
    ((left)) :
    (left << ((int)right));
}
static int8_t
safe_lshift_func_int8_t_s_u(int8_t left, unsigned int right )
{
 
  return
    ((left < 0) || (((unsigned int)right) >= 32) || (left > ((127) >> ((unsigned int)right)))) ?
    ((left)) :
    (left << ((unsigned int)right));
}
static int8_t
safe_rshift_func_int8_t_s_s(int8_t left, int right )
{
 
  return
    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32))?
    ((left)) :
    (left >> ((int)right));
}
static int8_t
safe_rshift_func_int8_t_s_u(int8_t left, unsigned int right )
{
 
  return
    ((left < 0) || (((unsigned int)right) >= 32)) ?
    ((left)) :
    (left >> ((unsigned int)right));
}
static int16_t
safe_unary_minus_func_int16_t_s(int16_t si )
{
 
  return
    -si;
}
static int16_t
safe_add_func_int16_t_s_s(int16_t si1, int16_t si2 )
{
 
  return
    (si1 + si2);
}
static int16_t
safe_sub_func_int16_t_s_s(int16_t si1, int16_t si2 )
{
 
  return
    (si1 - si2);
}
static int16_t
safe_mul_func_int16_t_s_s(int16_t si1, int16_t si2 )
{
 
  return
    si1 * si2;
}
static int16_t
safe_mod_func_int16_t_s_s(int16_t si1, int16_t si2 )
{
 
  return
    ((si2 == 0) || ((si1 == (-32767-1)) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 % si2);
}
static int16_t
safe_div_func_int16_t_s_s(int16_t si1, int16_t si2 )
{
 
  return
    ((si2 == 0) || ((si1 == (-32767-1)) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 / si2);
}
static int16_t
safe_lshift_func_int16_t_s_s(int16_t left, int right )
{
 
  return
    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32) || (left > ((32767) >> ((int)right)))) ?
    ((left)) :
    (left << ((int)right));
}
static int16_t
safe_lshift_func_int16_t_s_u(int16_t left, unsigned int right )
{
 
  return
    ((left < 0) || (((unsigned int)right) >= 32) || (left > ((32767) >> ((unsigned int)right)))) ?
    ((left)) :
    (left << ((unsigned int)right));
}
static int16_t
safe_rshift_func_int16_t_s_s(int16_t left, int right )
{
 
  return
    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32))?
    ((left)) :
    (left >> ((int)right));
}
static int16_t
safe_rshift_func_int16_t_s_u(int16_t left, unsigned int right )
{
 
  return
    ((left < 0) || (((unsigned int)right) >= 32)) ?
    ((left)) :
    (left >> ((unsigned int)right));
}
static int32_t
safe_unary_minus_func_int32_t_s(int32_t si )
{
 
  return
    (si==(-2147483647-1)) ?
    ((si)) :
    -si;
}
static int32_t
safe_add_func_int32_t_s_s(int32_t si1, int32_t si2 )
{
 
  return
    (((si1>0) && (si2>0) && (si1 > ((2147483647)-si2))) || ((si1<0) && (si2<0) && (si1 < ((-2147483647-1)-si2)))) ?
    ((si1)) :
    (si1 + si2);
}
static int32_t
safe_sub_func_int32_t_s_s(int32_t si1, int32_t si2 )
{
 
  return
    (((si1^si2) & (((si1 ^ ((si1^si2) & (~(2147483647))))-si2)^si2)) < 0) ?
    ((si1)) :
    (si1 - si2);
}
static int32_t
safe_mul_func_int32_t_s_s(int32_t si1, int32_t si2 )
{
 
  return
    (((si1 > 0) && (si2 > 0) && (si1 > ((2147483647) / si2))) || ((si1 > 0) && (si2 <= 0) && (si2 < ((-2147483647-1) / si1))) || ((si1 <= 0) && (si2 > 0) && (si1 < ((-2147483647-1) / si2))) || ((si1 <= 0) && (si2 <= 0) && (si1 != 0) && (si2 < ((2147483647) / si1)))) ?
    ((si1)) :
    si1 * si2;
}
static int32_t
safe_mod_func_int32_t_s_s(int32_t si1, int32_t si2 )
{
 
  return
    ((si2 == 0) || ((si1 == (-2147483647-1)) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 % si2);
}
static int32_t
safe_div_func_int32_t_s_s(int32_t si1, int32_t si2 )
{
 
  return
    ((si2 == 0) || ((si1 == (-2147483647-1)) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 / si2);
}
static int32_t
safe_lshift_func_int32_t_s_s(int32_t left, int right )
{
 
  return
    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32) || (left > ((2147483647) >> ((int)right)))) ?
    ((left)) :
    (left << ((int)right));
}
static int32_t
safe_lshift_func_int32_t_s_u(int32_t left, unsigned int right )
{
 
  return
    ((left < 0) || (((unsigned int)right) >= 32) || (left > ((2147483647) >> ((unsigned int)right)))) ?
    ((left)) :
    (left << ((unsigned int)right));
}
static int32_t
safe_rshift_func_int32_t_s_s(int32_t left, int right )
{
 
  return
    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32))?
    ((left)) :
    (left >> ((int)right));
}
static int32_t
safe_rshift_func_int32_t_s_u(int32_t left, unsigned int right )
{
 
  return
    ((left < 0) || (((unsigned int)right) >= 32)) ?
    ((left)) :
    (left >> ((unsigned int)right));
}
static int64_t
safe_unary_minus_func_int64_t_s(int64_t si )
{
 
  return
    (si==(-9223372036854775807L -1)) ?
    ((si)) :
    -si;
}
static int64_t
safe_add_func_int64_t_s_s(int64_t si1, int64_t si2 )
{
 
  return
    (((si1>0) && (si2>0) && (si1 > ((9223372036854775807L)-si2))) || ((si1<0) && (si2<0) && (si1 < ((-9223372036854775807L -1)-si2)))) ?
    ((si1)) :
    (si1 + si2);
}
static int64_t
safe_sub_func_int64_t_s_s(int64_t si1, int64_t si2 )
{
 
  return
    (((si1^si2) & (((si1 ^ ((si1^si2) & (~(9223372036854775807L))))-si2)^si2)) < 0) ?
    ((si1)) :
    (si1 - si2);
}
static int64_t
safe_mul_func_int64_t_s_s(int64_t si1, int64_t si2 )
{
 
  return
    (((si1 > 0) && (si2 > 0) && (si1 > ((9223372036854775807L) / si2))) || ((si1 > 0) && (si2 <= 0) && (si2 < ((-9223372036854775807L -1) / si1))) || ((si1 <= 0) && (si2 > 0) && (si1 < ((-9223372036854775807L -1) / si2))) || ((si1 <= 0) && (si2 <= 0) && (si1 != 0) && (si2 < ((9223372036854775807L) / si1)))) ?
    ((si1)) :
    si1 * si2;
}
static int64_t
safe_mod_func_int64_t_s_s(int64_t si1, int64_t si2 )
{
 
  return
    ((si2 == 0) || ((si1 == (-9223372036854775807L -1)) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 % si2);
}
static int64_t
safe_div_func_int64_t_s_s(int64_t si1, int64_t si2 )
{
 
  return
    ((si2 == 0) || ((si1 == (-9223372036854775807L -1)) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 / si2);
}
static int64_t
safe_lshift_func_int64_t_s_s(int64_t left, int right )
{
 
  return
    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32) || (left > ((9223372036854775807L) >> ((int)right)))) ?
    ((left)) :
    (left << ((int)right));
}
static int64_t
safe_lshift_func_int64_t_s_u(int64_t left, unsigned int right )
{
 
  return
    ((left < 0) || (((unsigned int)right) >= 32) || (left > ((9223372036854775807L) >> ((unsigned int)right)))) ?
    ((left)) :
    (left << ((unsigned int)right));
}
static int64_t
safe_rshift_func_int64_t_s_s(int64_t left, int right )
{
 
  return
    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32))?
    ((left)) :
    (left >> ((int)right));
}
static int64_t
safe_rshift_func_int64_t_s_u(int64_t left, unsigned int right )
{
 
  return
    ((left < 0) || (((unsigned int)right) >= 32)) ?
    ((left)) :
    (left >> ((unsigned int)right));
}
static uint8_t
safe_unary_minus_func_uint8_t_u(uint8_t ui )
{
 
  return -ui;
}
static uint8_t
safe_add_func_uint8_t_u_u(uint8_t ui1, uint8_t ui2 )
{
 
  return ui1 + ui2;
}
static uint8_t
safe_sub_func_uint8_t_u_u(uint8_t ui1, uint8_t ui2 )
{
 
  return ui1 - ui2;
}
static uint8_t
safe_mul_func_uint8_t_u_u(uint8_t ui1, uint8_t ui2 )
{
 
  return ((unsigned int)ui1) * ((unsigned int)ui2);
}
static uint8_t
safe_mod_func_uint8_t_u_u(uint8_t ui1, uint8_t ui2 )
{
 
  return
    (ui2 == 0) ?
    ((ui1)) :
    (ui1 % ui2);
}
static uint8_t
safe_div_func_uint8_t_u_u(uint8_t ui1, uint8_t ui2 )
{
 
  return
    (ui2 == 0) ?
    ((ui1)) :
    (ui1 / ui2);
}
static uint8_t
safe_lshift_func_uint8_t_u_s(uint8_t left, int right )
{
 
  return
    ((((int)right) < 0) || (((int)right) >= 32) || (left > ((255) >> ((int)right)))) ?
    ((left)) :
    (left << ((int)right));
}
static uint8_t
safe_lshift_func_uint8_t_u_u(uint8_t left, unsigned int right )
{
 
  return
    ((((unsigned int)right) >= 32) || (left > ((255) >> ((unsigned int)right)))) ?
    ((left)) :
    (left << ((unsigned int)right));
}
static uint8_t
safe_rshift_func_uint8_t_u_s(uint8_t left, int right )
{
 
  return
    ((((int)right) < 0) || (((int)right) >= 32)) ?
    ((left)) :
    (left >> ((int)right));
}
static uint8_t
safe_rshift_func_uint8_t_u_u(uint8_t left, unsigned int right )
{
 
  return
    (((unsigned int)right) >= 32) ?
    ((left)) :
    (left >> ((unsigned int)right));
}
static uint16_t
safe_unary_minus_func_uint16_t_u(uint16_t ui )
{
 
  return -ui;
}
static uint16_t
safe_add_func_uint16_t_u_u(uint16_t ui1, uint16_t ui2 )
{
 
  return ui1 + ui2;
}
static uint16_t
safe_sub_func_uint16_t_u_u(uint16_t ui1, uint16_t ui2 )
{
 
  return ui1 - ui2;
}
static uint16_t
safe_mul_func_uint16_t_u_u(uint16_t ui1, uint16_t ui2 )
{
 
  return ((unsigned int)ui1) * ((unsigned int)ui2);
}
static uint16_t
safe_mod_func_uint16_t_u_u(uint16_t ui1, uint16_t ui2 )
{
 
  return
    (ui2 == 0) ?
    ((ui1)) :
    (ui1 % ui2);
}
static uint16_t
safe_div_func_uint16_t_u_u(uint16_t ui1, uint16_t ui2 )
{
 
  return
    (ui2 == 0) ?
    ((ui1)) :
    (ui1 / ui2);
}
static uint16_t
safe_lshift_func_uint16_t_u_s(uint16_t left, int right )
{
 
  return
    ((((int)right) < 0) || (((int)right) >= 32) || (left > ((65535) >> ((int)right)))) ?
    ((left)) :
    (left << ((int)right));
}
static uint16_t
safe_lshift_func_uint16_t_u_u(uint16_t left, unsigned int right )
{
 
  return
    ((((unsigned int)right) >= 32) || (left > ((65535) >> ((unsigned int)right)))) ?
    ((left)) :
    (left << ((unsigned int)right));
}
static uint16_t
safe_rshift_func_uint16_t_u_s(uint16_t left, int right )
{
 
  return
    ((((int)right) < 0) || (((int)right) >= 32)) ?
    ((left)) :
    (left >> ((int)right));
}
static uint16_t
safe_rshift_func_uint16_t_u_u(uint16_t left, unsigned int right )
{
 
  return
    (((unsigned int)right) >= 32) ?
    ((left)) :
    (left >> ((unsigned int)right));
}
static uint32_t
safe_unary_minus_func_uint32_t_u(uint32_t ui )
{
 
  return -ui;
}
static uint32_t
safe_add_func_uint32_t_u_u(uint32_t ui1, uint32_t ui2 )
{
 
  return ui1 + ui2;
}
static uint32_t
safe_sub_func_uint32_t_u_u(uint32_t ui1, uint32_t ui2 )
{
 
  return ui1 - ui2;
}
static uint32_t
safe_mul_func_uint32_t_u_u(uint32_t ui1, uint32_t ui2 )
{
 
  return ((unsigned int)ui1) * ((unsigned int)ui2);
}
static uint32_t
safe_mod_func_uint32_t_u_u(uint32_t ui1, uint32_t ui2 )
{
 
  return
    (ui2 == 0) ?
    ((ui1)) :
    (ui1 % ui2);
}
static uint32_t
safe_div_func_uint32_t_u_u(uint32_t ui1, uint32_t ui2 )
{
 
  return
    (ui2 == 0) ?
    ((ui1)) :
    (ui1 / ui2);
}
static uint32_t
safe_lshift_func_uint32_t_u_s(uint32_t left, int right )
{
 
  return
    ((((int)right) < 0) || (((int)right) >= 32) || (left > ((4294967295U) >> ((int)right)))) ?
    ((left)) :
    (left << ((int)right));
}
static uint32_t
safe_lshift_func_uint32_t_u_u(uint32_t left, unsigned int right )
{
 
  return
    ((((unsigned int)right) >= 32) || (left > ((4294967295U) >> ((unsigned int)right)))) ?
    ((left)) :
    (left << ((unsigned int)right));
}
static uint32_t
safe_rshift_func_uint32_t_u_s(uint32_t left, int right )
{
 
  return
    ((((int)right) < 0) || (((int)right) >= 32)) ?
    ((left)) :
    (left >> ((int)right));
}
static uint32_t
safe_rshift_func_uint32_t_u_u(uint32_t left, unsigned int right )
{
 
  return
    (((unsigned int)right) >= 32) ?
    ((left)) :
    (left >> ((unsigned int)right));
}
static uint64_t
safe_unary_minus_func_uint64_t_u(uint64_t ui )
{
 
  return -ui;
}
static uint64_t
safe_add_func_uint64_t_u_u(uint64_t ui1, uint64_t ui2 )
{
 
  return ui1 + ui2;
}
static uint64_t
safe_sub_func_uint64_t_u_u(uint64_t ui1, uint64_t ui2 )
{
 
  return ui1 - ui2;
}
static uint64_t
safe_mul_func_uint64_t_u_u(uint64_t ui1, uint64_t ui2 )
{
 
  return ((unsigned long long)ui1) * ((unsigned long long)ui2);
}
static uint64_t
safe_mod_func_uint64_t_u_u(uint64_t ui1, uint64_t ui2 )
{
 
  return
    (ui2 == 0) ?
    ((ui1)) :
    (ui1 % ui2);
}
static uint64_t
safe_div_func_uint64_t_u_u(uint64_t ui1, uint64_t ui2 )
{
 
  return
    (ui2 == 0) ?
    ((ui1)) :
    (ui1 / ui2);
}
static uint64_t
safe_lshift_func_uint64_t_u_s(uint64_t left, int right )
{
 
  return
    ((((int)right) < 0) || (((int)right) >= 32) || (left > ((18446744073709551615UL) >> ((int)right)))) ?
    ((left)) :
    (left << ((int)right));
}
static uint64_t
safe_lshift_func_uint64_t_u_u(uint64_t left, unsigned int right )
{
 
  return
    ((((unsigned int)right) >= 32) || (left > ((18446744073709551615UL) >> ((unsigned int)right)))) ?
    ((left)) :
    (left << ((unsigned int)right));
}
static uint64_t
safe_rshift_func_uint64_t_u_s(uint64_t left, int right )
{
 
  return
    ((((int)right) < 0) || (((int)right) >= 32)) ?
    ((left)) :
    (left >> ((int)right));
}
static uint64_t
safe_rshift_func_uint64_t_u_u(uint64_t left, unsigned int right )
{
 
  return
    (((unsigned int)right) >= 32) ?
    ((left)) :
    (left >> ((unsigned int)right));
}
static float
safe_add_func_float_f_f(float sf1, float sf2 )
{
 
  return
    (fabsf((0.5f * sf1) + (0.5f * sf2)) > (0.5f * FLT_MAX)) ?
    (sf1) :
    (sf1 + sf2);
}
static float
safe_sub_func_float_f_f(float sf1, float sf2 )
{
 
  return
    (fabsf((0.5f * sf1) - (0.5f * sf2)) > (0.5f * FLT_MAX)) ?
    (sf1) :
    (sf1 - sf2);
}
static float
safe_mul_func_float_f_f(float sf1, float sf2 )
{
 
  return
    (fabsf((0x1.0p-100f * sf1) * (0x1.0p-28f * sf2)) > (0x1.0p-100f * (0x1.0p-28f * FLT_MAX))) ?
    (sf1) :
    (sf1 * sf2);
}
static float
safe_div_func_float_f_f(float sf1, float sf2 )
{
 
  return
    ((fabsf(sf2) < 1.0f) && (((sf2 == 0.0f) || (fabsf((0x1.0p-49f * sf1) / (0x1.0p100f * sf2))) > (0x1.0p-100f * (0x1.0p-49f * FLT_MAX))))) ?
    (sf1) :
    (sf1 / sf2);
}
static double
safe_add_func_double_f_f(double sf1, double sf2 )
{
 
  return
    (fabs((0.5 * sf1) + (0.5 * sf2)) > (0.5 * DBL_MAX)) ?
    (sf1) :
    (sf1 + sf2);
}
static double
safe_sub_func_double_f_f(double sf1, double sf2 )
{
 
  return
    (fabs((0.5 * sf1) - (0.5 * sf2)) > (0.5 * DBL_MAX)) ?
    (sf1) :
    (sf1 - sf2);
}
static double
safe_mul_func_double_f_f(double sf1, double sf2 )
{
 
  return
    (fabs((0x1.0p-100 * sf1) * (0x1.0p-924 * sf2)) > (0x1.0p-100 * (0x1.0p-924 * DBL_MAX))) ?
    (sf1) :
    (sf1 * sf2);
}
static double
safe_div_func_double_f_f(double sf1, double sf2 )
{
 
  return
    ((fabs(sf2) < 1.0) && (((sf2 == 0.0) || (fabs((0x1.0p-974 * sf1) / (0x1.0p100 * sf2))) > (0x1.0p-100 * (0x1.0p-974 * DBL_MAX))))) ?
    (sf1) :
    (sf1 / sf2);
}
static int32_t
safe_convert_func_float_to_int32_t(float sf1 )
{
 
  return
    ((sf1 <= (-2147483647-1)) || (sf1 >= (2147483647))) ?
    ((2147483647)) :
    ((int32_t)(sf1));
}

// Options:   -s 590224496 -o /tmp/csmith_gen_t0831hay/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


struct S0 {
   int32_t  f0;
};

struct S1 {
   uint64_t  f0;
};

struct S2 {
   const struct S0  f0;
   struct S1  f1;
   const uint64_t  f2;
   int64_t  f3;
   int8_t  f4;
};

struct S3 {
   int64_t  f0;
   uint64_t  f1;
   int64_t  f2;
   const int64_t  f3;
};

#pragma pack(push)
#pragma pack(1)
struct S4 {
   int8_t  f0;
   int32_t  f1;
};
#pragma pack(pop)

union U5 {
   const struct S2  f0;
   int8_t  f1;
   uint64_t  f2;
   uint32_t  f3;
};

union U6 {
   uint16_t  f0;
   int32_t  f1;
   uint16_t  f2;
};

union U7 {
   const int64_t  f0;
   uint32_t  f1;
   int16_t  f2;
   uint32_t  f3;
};


static struct S4 g_11 = {0x77L,0xCDA7209CL};
static struct S0 g_32 = {0xF77D900DL};
static int32_t g_33 = 1L;
static int32_t g_34 = (-1L);
static uint32_t g_38 = 0x2C9AA6F5L;
static uint16_t g_67 = 65526UL;
static uint16_t g_68 = 65535UL;
static int64_t g_95[5][2][5] = {{{8L,8L,8L,8L,8L},{0L,0L,0L,0L,0L}},{{8L,8L,8L,8L,8L},{0L,0L,0L,0L,0L}},{{8L,8L,8L,8L,8L},{0L,0L,0L,0L,0L}},{{8L,8L,8L,8L,8L},{0L,0L,0L,0L,0L}},{{8L,8L,8L,8L,8L},{0L,0L,0L,0L,0L}}};
static uint8_t g_96 = 255UL;
static int64_t g_101 = 0L;
static uint16_t g_109 = 1UL;
static uint16_t g_116 = 0UL;
static int8_t g_133[4][4][4] = {{{(-2L),(-2L),(-1L),(-1L)},{(-2L),(-2L),(-1L),(-1L)},{(-2L),(-2L),(-1L),(-1L)},{(-2L),(-2L),(-1L),(-1L)}},{{(-2L),(-2L),(-1L),(-1L)},{(-2L),(-2L),(-1L),(-1L)},{(-2L),(-2L),(-1L),(-1L)},{(-2L),(-2L),(-1L),(-1L)}},{{(-2L),(-2L),(-1L),(-1L)},{(-2L),(-2L),(-1L),(-1L)},{(-2L),(-2L),(-1L),(-1L)},{(-2L),(-2L),(-1L),(-1L)}},{{(-2L),(-2L),(-1L),(-1L)},{(-2L),(-2L),(-1L),(-1L)},{(-2L),(-2L),(-1L),(-1L)},{(-2L),(-2L),(-1L),(-1L)}}};
static int32_t g_136[5][5][3] = {{{(-1L),0xA6E1C48DL,0L},{(-1L),0x9D29D4CFL,(-1L)},{(-1L),0L,0x4419D395L},{0L,0x9D29D4CFL,0xE29C1E94L},{0xA6E1C48DL,0xA6E1C48DL,0x4419D395L}},{{(-1L),0xDA5373E3L,(-1L)},{0xA6E1C48DL,0L,0L},{0L,0xDA5373E3L,0xE29C1E94L},{(-1L),0xA6E1C48DL,0L},{(-1L),0x9D29D4CFL,(-1L)}},{{(-1L),0L,0x4419D395L},{0L,0x9D29D4CFL,0xE29C1E94L},{0xA6E1C48DL,0xA6E1C48DL,0x4419D395L},{(-1L),0xDA5373E3L,(-1L)},{0xA6E1C48DL,0L,0L}},{{0L,0xDA5373E3L,0xE29C1E94L},{(-1L),0xA6E1C48DL,0L},{(-1L),0x9D29D4CFL,(-1L)},{(-1L),0L,0x4419D395L},{0L,0x9D29D4CFL,0xE29C1E94L}},{{0xA6E1C48DL,0xA6E1C48DL,0x4419D395L},{(-1L),0xDA5373E3L,(-1L)},{0xA6E1C48DL,0L,0L},{0L,0xDA5373E3L,0xE29C1E94L},{(-1L),0xA6E1C48DL,0L}}};
static int8_t g_156 = 0x1CL;
static uint64_t g_158 = 1UL;
static int8_t g_169 = (-1L);
static union U7 g_185 = {0xFE77FC2152800829LL};
static struct S3 g_189 = {-6L,0xC8FD093CF0600BE3LL,0xBA8943D24E930141LL,0xF60F279C46A1A6AELL};
static union U5 g_233 = {{{0x6B67929DL},{0x6EDA828D7F249F29LL},1UL,1L,0xEFL}};



static int32_t  func_1(void);
static int8_t  func_9(struct S4  p_10);
static uint64_t  func_14(uint32_t  p_15);
static uint8_t  func_27(union U6  p_28, uint16_t  p_29, int64_t  p_30);




static int32_t  func_1(void)
{ 
    int64_t l_2 = 1L;
    struct S2 l_161[2] = {{{-9L},{0x6908100F8154E251LL},0xE944683A1E9C1B1BLL,0x8E1355ABE805C0E4LL,1L},{{-9L},{0x6908100F8154E251LL},0xE944683A1E9C1B1BLL,0x8E1355ABE805C0E4LL,1L}};
    int32_t l_168 = 0xFE06259CL;
    union U5 l_199 = {{{1L},{1UL},3UL,9L,0x1EL}};
    int i;
    if (l_2)
    { 
        uint8_t l_154 = 0xE6L;
        int32_t l_155 = 0xAB0B14FCL;
        int32_t l_157 = 0x1EF432E6L;
        int32_t l_159 = 0L;
        int32_t l_160 = 0xD08C6042L;
        l_160 &= ((l_159 = ((g_158 &= (l_157 = (g_156 = (safe_mod_func_int8_t_s_s((l_155 = (safe_mod_func_uint64_t_u_u((0xB0B4L & (0x2BA7B7E80D68F985LL == (0x587C7AB89BDD7770LL > (((safe_mul_func_int8_t_s_s(func_9(g_11), 0L)) , l_154) | g_136[2][4][2])))), l_154))), g_136[1][2][1]))))) < 0xDF6C7F8FBDC13816LL)) , l_154);
    }
    else
    { 
        uint32_t l_170 = 4294967295UL;
        int32_t l_178 = 0xE45A5366L;
        union U5 l_191 = {{{0xF237C987L},{0xC961D12E868B81BELL},18446744073709551615UL,5L,0x06L}};
        struct S1 l_201 = {0xA19F3F7CD451E0E9LL};
        g_11.f1 = 1L;
        if ((l_161[1] , ((safe_rshift_func_int16_t_s_s((safe_div_func_uint32_t_u_u((g_133[2][0][1] , ((safe_div_func_int16_t_s_s(((l_168 = (g_133[2][0][1] ^= 0x93L)) > g_169), g_68)) , 1UL)), l_170)), 0)) <= g_32.f0)))
        { 
            uint8_t l_171 = 0UL;
            l_171++;
            for (l_170 = 0; (l_170 <= 3); l_170 += 1)
            { 
                g_136[2][4][2] &= g_68;
                g_136[2][4][2] = ((g_96++) && g_136[2][4][2]);
                g_11.f1 ^= g_34;
            }
            for (g_34 = 0; (g_34 <= 1); g_34 += 1)
            { 
                l_168 |= ((safe_mul_func_int8_t_s_s((0x2CDDL == ((++g_38) == (safe_rshift_func_int8_t_s_u(((safe_rshift_func_int8_t_s_u((((l_178 , (((g_185 , ((g_185.f1 == 1L) == 0L)) && 5UL) > g_133[2][0][1])) & g_109) != l_171), 2)) > 4294967295UL), g_185.f3)))), l_161[1].f4)) || l_161[1].f3);
            }
        }
        else
        { 
            int8_t l_190 = 3L;
            struct S0 l_196 = {-1L};
            uint32_t l_200 = 0x5E3F2DEFL;
            for (g_34 = (-5); (g_34 > 8); g_34 = safe_add_func_int16_t_s_s(g_34, 7))
            { 
                struct S0 l_195[5] = {{0x72D5D3A5L},{0x72D5D3A5L},{0x72D5D3A5L},{0x72D5D3A5L},{0x72D5D3A5L}};
                int i;
                g_33 = (safe_unary_minus_func_int8_t_s((((g_189 , l_190) , (l_191 , (safe_sub_func_uint64_t_u_u((!(((l_195[2] , g_156) , l_195[2].f0) > l_170)), 0x35C5DC2C40DF2919LL)))) != 0x669F7C8DL)));
                l_196 = g_32;
                if (g_96)
                    continue;
            }
            if ((safe_rshift_func_int16_t_s_u((g_32.f0 || 0xC7F9L), ((l_199 , l_191.f0.f1.f0) & g_158))))
            { 
                l_200 = g_189.f3;
                l_201 = (g_189 , l_199.f0.f1);
            }
            else
            { 
                g_34 = g_189.f1;
            }
        }
    }
    for (g_185.f1 = 0; (g_185.f1 < 27); g_185.f1 = safe_add_func_uint64_t_u_u(g_185.f1, 3))
    { 
        uint32_t l_213[3][2] = {{0x5BE74CFFL,0x5BE74CFFL},{0x5BE74CFFL,0x5BE74CFFL},{0x5BE74CFFL,0x5BE74CFFL}};
        struct S1 l_214 = {0xF36FFF55306404F5LL};
        uint32_t l_234 = 0x4AB442EEL;
        int32_t l_253[3][1][3] = {{{1L,1L,1L}},{{0x9FA897B0L,0x1C99C192L,0x9FA897B0L}},{{1L,1L,1L}}};
        int i, j, k;
        l_168 = (safe_div_func_int32_t_s_s(((+1L) <= ((safe_mod_func_uint32_t_u_u(g_189.f1, (safe_sub_func_uint16_t_u_u(((((safe_add_func_int32_t_s_s((l_213[0][1] ^ ((l_214 , l_213[0][1]) & l_199.f0.f3)), g_109)) , l_214.f0) | 0UL) | g_67), 0xC6D4L)))) < g_33)), 8L));
        for (g_34 = 0; (g_34 < 29); ++g_34)
        { 
            const uint64_t l_235 = 0xD2AB83D353EA13BFLL;
            uint32_t l_242 = 0x97CAD44DL;
            g_136[1][4][2] |= (((safe_mul_func_int16_t_s_s((safe_sub_func_int16_t_s_s(((l_213[0][0] >= 0x6976L) < ((safe_mul_func_int8_t_s_s((safe_mul_func_uint8_t_u_u((((((safe_rshift_func_uint8_t_u_u((safe_mul_func_int16_t_s_s((safe_lshift_func_uint8_t_u_s((((g_34 , ((g_185 , g_233) , 2UL)) == 0xD98B46675EF05320LL) , g_38), l_214.f0)), l_234)), 0)) > 0UL) <= g_33) > g_169) , g_156), l_199.f0.f0.f0)), 1UL)) ^ l_234)), l_235)), 0x2587L)) & (-6L)) , g_189.f1);
            for (g_32.f0 = 0; (g_32.f0 <= 1); g_32.f0 += 1)
            { 
                int32_t l_254 = (-1L);
                int i, j, k;
                g_33 = ((((((!g_95[(g_32.f0 + 2)][g_32.f0][(g_32.f0 + 2)]) & (safe_add_func_uint32_t_u_u((+(safe_lshift_func_uint8_t_u_u((g_96 &= 253UL), 1))), (((g_95[(g_32.f0 + 2)][g_32.f0][(g_32.f0 + 2)] > ((g_185.f3 && l_213[2][1]) | g_95[(g_32.f0 + 2)][g_32.f0][(g_32.f0 + 2)])) && (-5L)) , 0UL)))) , 0xADA18132L) <= g_11.f1) || g_101) , g_11.f1);
                g_11.f1 = (l_242 >= (safe_mul_func_int16_t_s_s(((g_95[(g_32.f0 + 3)][g_32.f0][(g_32.f0 + 2)] &= (-1L)) == ((l_168 | (safe_rshift_func_int8_t_s_u(((safe_mod_func_int64_t_s_s((safe_rshift_func_int8_t_s_u((l_253[1][0][2] = ((1L ^ g_189.f0) < g_233.f0.f3)), g_156)), g_101)) < g_189.f2), l_214.f0))) != 0xF8A200C9L)), l_254)));
                if (l_242)
                    break;
            }
        }
        for (g_11.f0 = 29; (g_11.f0 != (-13)); g_11.f0 = safe_sub_func_uint64_t_u_u(g_11.f0, 7))
        { 
            l_168 ^= l_214.f0;
        }
    }
    return g_169;
}



static int8_t  func_9(struct S4  p_10)
{ 
    int16_t l_19[1][1];
    int32_t l_22 = 0xAEBB1BB3L;
    int32_t l_104[2][3][5] = {{{0x3E211E8DL,0x3E211E8DL,0x29726E95L,0x3E211E8DL,0x3E211E8DL},{1L,0x3E211E8DL,1L,1L,0x3E211E8DL},{0x3E211E8DL,1L,1L,0x3E211E8DL,1L}},{{0x3E211E8DL,0x3E211E8DL,0x29726E95L,0x3E211E8DL,0x3E211E8DL},{1L,0x3E211E8DL,1L,1L,0x3E211E8DL},{0x3E211E8DL,0x29726E95L,0x29726E95L,1L,0x29726E95L}}};
    union U5 l_142[1] = {{{{8L},{18446744073709551615UL},0x8454CA82F6642889LL,0x93DA9AB640BF3EC7LL,0xDDL}}};
    int i, j, k;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 1; j++)
            l_19[i][j] = 0x82F4L;
    }
    for (p_10.f0 = (-7); (p_10.f0 == 4); p_10.f0 = safe_add_func_int64_t_s_s(p_10.f0, 2))
    { 
        uint64_t l_18 = 0UL;
        int32_t l_23 = (-3L);
        p_10.f1 &= (g_11.f0 > (l_104[1][0][1] &= func_14((l_23 = (l_22 = (safe_lshift_func_int8_t_s_s((l_19[0][0] = (l_18 ^ 0L)), ((((l_18 || (-1L)) | 0L) && 0xA722L) < l_18))))))));
    }
    if ((g_34 != (l_22 = (safe_mul_func_int8_t_s_s((safe_mod_func_uint64_t_u_u(g_109, (g_11.f0 , (((safe_div_func_uint64_t_u_u(0x2A49CFF131093E8FLL, l_19[0][0])) ^ g_68) || g_95[4][0][2])))), 0x21L)))))
    { 
        int32_t l_112[5] = {(-10L),(-10L),(-10L),(-10L),(-10L)};
        struct S0 l_113 = {0xC9EDED60L};
        int32_t l_114 = 0xB125E79EL;
        int32_t l_115 = 0xA42F3C5DL;
        int32_t l_134 = 0xA22EFFBDL;
        int32_t l_135[5];
        int i;
        for (i = 0; i < 5; i++)
            l_135[i] = 0L;
        if (((l_112[2] , ((((((l_113 , (g_33 & ((((g_95[3][1][4] , l_113.f0) & p_10.f1) & p_10.f0) <= l_104[0][0][3]))) <= l_113.f0) != g_68) < g_38) > 1L) | l_22)) != g_11.f1))
        { 
            uint64_t l_127[5];
            int i;
            for (i = 0; i < 5; i++)
                l_127[i] = 7UL;
            g_116++;
            p_10.f1 = (safe_rshift_func_uint16_t_u_s((l_19[0][0] <= (((((l_22 = 0x1770L) == g_109) < (safe_sub_func_uint64_t_u_u((l_115 = (safe_lshift_func_uint16_t_u_u(g_95[3][0][2], 12))), l_104[1][0][1]))) & g_34) >= 0xDDEFL)), 1));
            l_104[1][0][1] |= (l_127[4] = (p_10.f1 = ((l_114 = ((g_96 & (g_68 < (((safe_mod_func_int64_t_s_s(0x422DCD2DC6FEDBD1LL, 0x105C8CF041155C20LL)) & p_10.f0) , g_32.f0))) == g_67)) , g_11.f0)));
        }
        else
        { 
            int32_t l_130 = 0x6E4515CBL;
            int32_t l_131 = 0L;
            int32_t l_132[2];
            struct S3 l_151 = {2L,0xCE9429D60EDB9B34LL,0L,0x8AF15EAAFD925828LL};
            int i;
            for (i = 0; i < 2; i++)
                l_132[i] = 0L;
            for (g_101 = 0; (g_101 >= 28); g_101 = safe_add_func_int8_t_s_s(g_101, 9))
            { 
                uint8_t l_137 = 0x2FL;
                ++l_137;
            }
            if (((l_104[1][0][1] < ((safe_lshift_func_int16_t_s_u((l_142[0] , g_68), (++g_67))) != ((safe_div_func_int64_t_s_s(((safe_add_func_uint64_t_u_u((((safe_sub_func_uint16_t_u_u(((l_151 , p_10.f0) != p_10.f0), l_135[1])) >= p_10.f1) > 0UL), g_116)) || (-9L)), l_22)) > p_10.f1))) > l_132[1]))
            { 
                return g_68;
            }
            else
            { 
                return p_10.f1;
            }
        }
    }
    else
    { 
        for (p_10.f0 = 0; (p_10.f0 > 25); p_10.f0 = safe_add_func_uint64_t_u_u(p_10.f0, 5))
        { 
            if (g_133[3][3][0])
                break;
        }
        return g_136[2][4][2];
    }
    return g_136[2][4][2];
}



static uint64_t  func_14(uint32_t  p_15)
{ 
    union U6 l_31 = {0UL};
    int32_t l_99 = 0x3B9E22A4L;
    int32_t l_100 = 1L;
    struct S0 l_102[4][4][2] = {{{{-1L},{-1L}},{{9L},{-1L}},{{-1L},{9L}},{{-1L},{-1L}}},{{{9L},{-1L}},{{-1L},{9L}},{{-1L},{-1L}},{{9L},{-1L}}},{{{-1L},{9L}},{{-1L},{-1L}},{{9L},{-1L}},{{-1L},{9L}}},{{{-1L},{-1L}},{{9L},{-1L}},{{-1L},{9L}},{{-1L},{-1L}}}};
    int32_t l_103 = 0xA876B163L;
    int i, j, k;
    l_103 = (g_11.f0 | (!(((g_101 |= (safe_sub_func_uint64_t_u_u((((l_100 &= (l_99 = func_27(l_31, (g_34 = (g_32 , (g_33 = g_32.f0))), g_11.f0))) == g_95[3][1][3]) , g_96), g_95[4][1][3]))) , l_102[0][3][0]) , 0x93C3L)));
    return g_11.f0;
}



static uint8_t  func_27(union U6  p_28, uint16_t  p_29, int64_t  p_30)
{ 
    int32_t l_35[1];
    const uint32_t l_39[5][2][4] = {{{0xEA44E0C4L,0UL,0xB8BF5144L,0UL},{0xA9D45C54L,0xE206F6ECL,2UL,0xB8BF5144L}},{{0UL,0xE206F6ECL,0xE206F6ECL,0UL},{0xE206F6ECL,0UL,0xA9D45C54L,0xEA44E0C4L}},{{0xE206F6ECL,0xA9D45C54L,0xE206F6ECL,2UL},{0UL,0xEA44E0C4L,2UL,2UL}},{{0xA9D45C54L,0xA9D45C54L,0xB8BF5144L,0xEA44E0C4L},{0xEA44E0C4L,0UL,0xB8BF5144L,0UL}},{{0xA9D45C54L,0xE206F6ECL,2UL,0xB8BF5144L},{0UL,0xE206F6ECL,0xE206F6ECL,0UL}}};
    int32_t l_91 = (-1L);
    int32_t l_93[2][2][4] = {{{0xC768A6AAL,0xC768A6AAL,0xC768A6AAL,0xC768A6AAL},{0xC768A6AAL,0xC768A6AAL,0xC768A6AAL,0xC768A6AAL}},{{0xC768A6AAL,0xC768A6AAL,0xC768A6AAL,0xC768A6AAL},{0xC768A6AAL,0xC768A6AAL,0xC768A6AAL,0xC768A6AAL}}};
    int i, j, k;
    for (i = 0; i < 1; i++)
        l_35[i] = 0x0C8E82B3L;
    for (p_30 = 0; (p_30 >= 0); p_30 -= 1)
    { 
        int32_t l_69[1][3];
        int i, j;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 3; j++)
                l_69[i][j] = 0xF83D54B5L;
        }
        if (l_35[p_30])
        { 
            const int16_t l_64 = (-1L);
            struct S2 l_75 = {{2L},{0xAC0FE8B8566A4DCBLL},0x99A0A08098031143LL,0L,0xD9L};
            int32_t l_89 = 0x310918DDL;
            int32_t l_90 = 0xD0CEA35DL;
            if ((safe_div_func_uint16_t_u_u((p_29 = ((g_38 = g_32.f0) <= (((g_32.f0 > (l_35[p_30] | l_35[p_30])) > l_39[3][1][2]) , p_29))), 0xC042L)))
            { 
                g_11.f1 |= 0x038CF49CL;
                return l_35[0];
            }
            else
            { 
                int8_t l_46 = 1L;
                int32_t l_55 = 0x944D42BEL;
                g_33 = (safe_lshift_func_int16_t_s_s((safe_add_func_int32_t_s_s(p_30, ((safe_add_func_uint8_t_u_u(g_38, ((l_46 & (safe_div_func_uint8_t_u_u((safe_add_func_uint8_t_u_u(((safe_div_func_int64_t_s_s(0x78915D48947DE68BLL, p_28.f0)) , g_32.f0), (-1L))), g_34))) < (-1L)))) ^ 2L))), 7));
                g_11.f1 = (((((safe_rshift_func_int8_t_s_s(p_30, l_46)) & (l_35[0] & (g_34 != g_34))) , g_33) ^ g_34) ^ l_39[3][0][1]);
                l_55 = 0x962DE1B4L;
            }
            for (g_33 = 0; (g_33 >= 0); g_33 -= 1)
            { 
                int16_t l_83 = 0x896CL;
                l_69[0][1] |= (l_35[0] | (safe_mul_func_int8_t_s_s(((g_68 &= (safe_lshift_func_uint16_t_u_s(((safe_add_func_uint32_t_u_u((((safe_mul_func_uint8_t_u_u(l_64, (safe_mul_func_uint16_t_u_u((g_38 != ((p_28.f0 ^ 4294967295UL) < g_33)), l_39[3][1][2])))) == (-1L)) > p_28.f0), 4294967289UL)) && p_28.f0), g_67))) != 0x6CDD171CF63D7CB6LL), l_64)));
                l_90 = (safe_mod_func_uint16_t_u_u((!(safe_mul_func_int16_t_s_s((l_75 , (0x0D67L && (((safe_mod_func_int64_t_s_s((safe_mod_func_int32_t_s_s((safe_rshift_func_uint16_t_u_s(((safe_unary_minus_func_uint16_t_u(l_83)) < (safe_div_func_int32_t_s_s((l_89 |= (safe_mod_func_uint32_t_u_u((((!((g_32.f0 , l_69[0][0]) < g_11.f1)) || 0x0BD6DA29L) >= p_30), p_29))), l_83))), 8)), (-10L))), g_34)) | g_11.f1) == l_69[0][1]))), 0x7FF4L))), g_68));
                l_91 = 1L;
            }
            return g_68;
        }
        else
        { 
            int64_t l_92[3][3][1] = {{{0xF63C109E68FEE394LL},{(-1L)},{0xF63C109E68FEE394LL}},{{(-1L)},{0xF63C109E68FEE394LL},{(-1L)}},{{0xF63C109E68FEE394LL},{(-1L)},{0xF63C109E68FEE394LL}}};
            int32_t l_94 = 0x96D32418L;
            int i, j, k;
            ++g_96;
            return g_95[4][1][2];
        }
    }
    return g_11.f0;
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_11.f0, "g_11.f0", print_hash_value);
    transparent_crc(g_11.f1, "g_11.f1", print_hash_value);
    transparent_crc(g_32.f0, "g_32.f0", print_hash_value);
    transparent_crc(g_33, "g_33", print_hash_value);
    transparent_crc(g_34, "g_34", print_hash_value);
    transparent_crc(g_38, "g_38", print_hash_value);
    transparent_crc(g_67, "g_67", print_hash_value);
    transparent_crc(g_68, "g_68", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 5; k++)
            {
                transparent_crc(g_95[i][j][k], "g_95[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_96, "g_96", print_hash_value);
    transparent_crc(g_101, "g_101", print_hash_value);
    transparent_crc(g_109, "g_109", print_hash_value);
    transparent_crc(g_116, "g_116", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 4; k++)
            {
                transparent_crc(g_133[i][j][k], "g_133[i][j][k]", print_hash_value);

            }
        }
    }
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            for (k = 0; k < 3; k++)
            {
                transparent_crc(g_136[i][j][k], "g_136[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_156, "g_156", print_hash_value);
    transparent_crc(g_158, "g_158", print_hash_value);
    transparent_crc(g_169, "g_169", print_hash_value);
    transparent_crc(g_185.f1, "g_185.f1", print_hash_value);
    transparent_crc(g_185.f2, "g_185.f2", print_hash_value);
    transparent_crc(g_185.f3, "g_185.f3", print_hash_value);
    transparent_crc(g_189.f0, "g_189.f0", print_hash_value);
    transparent_crc(g_189.f1, "g_189.f1", print_hash_value);
    transparent_crc(g_189.f2, "g_189.f2", print_hash_value);
    transparent_crc(g_189.f3, "g_189.f3", print_hash_value);
    transparent_crc(g_233.f0.f0.f0, "g_233.f0.f0.f0", print_hash_value);
    transparent_crc(g_233.f0.f1.f0, "g_233.f0.f1.f0", print_hash_value);
    transparent_crc(g_233.f0.f2, "g_233.f0.f2", print_hash_value);
    transparent_crc(g_233.f0.f3, "g_233.f0.f3", print_hash_value);
    transparent_crc(g_233.f0.f4, "g_233.f0.f4", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
