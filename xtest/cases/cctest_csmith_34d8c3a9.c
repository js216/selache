// SPDX-License-Identifier: MIT
// cctest_csmith_34d8c3a9.c --- cctest case csmith_34d8c3a9 (csmith seed 886621097)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0xeccb85a9 */

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

// Options:   -s 886621097 -o /tmp/csmith_gen_2oz7nmkd/csmith.c --concise --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 8 --max-block-size 5 --max-block-depth 4 --max-expr-complexity 8 --max-array-dim 3 --max-array-len-per-dim 7 --max-struct-fields 8 --max-union-fields 5

static long __undefined;


struct S0 {
   uint16_t  f0;
   const uint64_t  f1;
};

union U1 {
   const uint8_t  f0;
   struct S0  f1;
   int8_t * f2;
   uint16_t  f3;
   uint32_t  f4;
};


static int32_t g_2 = (-1L);
static int8_t g_20 = 0xA5L;
static int16_t g_52 = (-5L);
static uint8_t g_59[7] = {254UL,0x84L,254UL,254UL,0x84L,254UL,254UL};
static int8_t g_75 = 0L;
static uint8_t g_79 = 0UL;
static uint8_t g_80 = 0xD7L;
static const int16_t g_96 = 0xE763L;
static struct S0 g_102 = {65528UL,0UL};
static int32_t g_111 = 1L;
static int32_t g_117 = 0x110C122BL;
static int8_t *g_121 = &g_75;
static int8_t **g_120[7][1] = {{&g_121},{&g_121},{&g_121},{&g_121},{&g_121},{&g_121},{&g_121}};
static uint16_t g_150[2] = {0xE870L,0xE870L};
static struct S0 g_154 = {0xBC95L,18446744073709551615UL};
static uint32_t g_155[3] = {0UL,0UL,0UL};
static int32_t *g_160 = &g_117;
static int32_t **g_159 = &g_160;
static int16_t g_197[4] = {0xEDBDL,0xEDBDL,0xEDBDL,0xEDBDL};
static uint32_t g_198 = 0xCD0575CFL;
static union U1 *g_213 = (void*)0;
static union U1 **g_212 = &g_213;
static int16_t g_227 = (-8L);
static int16_t g_282 = 0x6B82L;
static uint64_t g_283 = 18446744073709551610UL;
static int8_t g_293 = 0x06L;
static union U1 g_304 = {254UL};
static int16_t *g_324 = (void*)0;
static uint8_t g_362 = 0x87L;
static int64_t g_373 = 0x3775B8159A78E738LL;
static uint16_t g_414 = 0x3162L;
static uint16_t g_423 = 65534UL;
static int16_t **g_472 = &g_324;
static int32_t g_499 = 0x4CADEC8CL;
static int16_t g_500 = 2L;
static int8_t g_501 = 0xF1L;
static int32_t g_502 = (-1L);
static int64_t g_503 = 0x163C2819EE938129LL;
static int8_t g_505 = (-1L);
static int32_t g_506 = 7L;
static int16_t g_507 = 0x07F5L;
static int8_t g_510 = 0xCBL;
static uint32_t g_511 = 0x55380635L;
static uint16_t *g_522[5][1][1] = {{{&g_154.f0}},{{&g_102.f0}},{{&g_154.f0}},{{&g_102.f0}},{{&g_154.f0}}};
static uint16_t **g_521 = &g_522[4][0][0];
static int16_t ***g_602[3] = {&g_472,&g_472,&g_472};
static int16_t *** const *g_601 = &g_602[1];
static struct S0 g_611 = {0x3FA3L,0UL};
static uint64_t g_623 = 0x21475833DC338EB4LL;
static const int64_t g_643 = 0xC1CA6AC66114BF56LL;
static uint16_t g_689[7][6][6] = {{{0xB8D6L,4UL,2UL,7UL,0x7583L,0xC46FL},{65535UL,0x001AL,0UL,0xC62FL,65535UL,65535UL},{65531UL,0UL,0xE348L,1UL,65535UL,0xDD3CL},{7UL,0xC60BL,0xE0B4L,4UL,65535UL,4UL},{0x4618L,65535UL,0x4618L,0x957EL,65535UL,65535UL},{1UL,0x123FL,0xD8E5L,5UL,0x034AL,65532UL}},{{0x8C13L,9UL,0xE348L,5UL,0UL,0x957EL},{1UL,0UL,0xB8D6L,0x957EL,5UL,0x2C8BL},{0x4618L,65527UL,0x28C2L,4UL,7UL,0xD8E5L},{7UL,0x001AL,0x73C4L,1UL,0xB8D6L,0xE0B4L},{0x4762L,65535UL,2UL,0x73C4L,65529UL,9UL},{0xC60BL,1UL,8UL,65531UL,65527UL,1UL}},{{7UL,0x86A6L,65527UL,65535UL,65535UL,1UL},{0UL,0x034AL,0x86A6L,7UL,7UL,0x86A6L},{1UL,1UL,65535UL,0xC60BL,0x27A1L,0xC388L},{1UL,65531UL,0UL,0xDD3CL,1UL,65535UL},{0xD8E5L,1UL,0UL,0x4618L,1UL,0xC388L},{0xB8D6L,0x4618L,65535UL,4UL,0x4DF1L,0x86A6L}},{{4UL,0x4DF1L,0x86A6L,0x71FBL,0x73C4L,1UL},{65535UL,65532UL,65527UL,9UL,1UL,1UL},{1UL,0xE348L,8UL,0x27A1L,1UL,9UL},{0UL,65535UL,2UL,0x4762L,0xC62FL,0xE0B4L},{2UL,0xB8D6L,0x73C4L,0UL,65535UL,0xD8E5L},{0xA594L,0x2C8BL,0x28C2L,0xEB0CL,0x28C2L,0x2C8BL}},{{0x034AL,0xC388L,0xB8D6L,0x8C13L,0xDD3CL,0x957EL},{0xC46FL,0x71FBL,0xE348L,0UL,65531UL,65532UL},{0x28C2L,0x71FBL,0xD8E5L,1UL,0xDD3CL,65535UL},{0xE0B4L,0xC388L,0x4618L,65527UL,0x28C2L,4UL},{5UL,0x2C8BL,0xE0B4L,0x28C2L,65535UL,0xDD3CL},{0x123FL,0xB8D6L,65535UL,65532UL,0xC62FL,65535UL}},{{0x27A1L,65535UL,0xEB0CL,1UL,1UL,65535UL},{0x19F3L,0xE348L,0xA594L,0x4C5CL,1UL,5UL},{0x001AL,65532UL,4UL,0UL,0x73C4L,0x27A1L},{0xE348L,0x4DF1L,1UL,1UL,0x4DF1L,0xE348L},{9UL,0x4618L,65535UL,65529UL,0UL,0x73C4L},{0UL,0x86A6L,0UL,1UL,0x123FL,5UL}},{{0UL,0x4762L,1UL,65529UL,1UL,0xA594L},{0x71FBL,0UL,0x4C5CL,65535UL,65531UL,65535UL},{65535UL,0xB8D6L,0x123FL,3UL,1UL,0xEB0CL},{1UL,0x034AL,0x7583L,0x28C2L,0x19F3L,65535UL},{7UL,0x123FL,65532UL,0x86A6L,1UL,1UL},{1UL,0xE0B4L,1UL,0xC46FL,7UL,0xC388L}}};
static uint16_t g_692[3][4] = {{0UL,0xDC0FL,0UL,1UL},{0UL,1UL,1UL,0UL},{0xF19FL,1UL,0x3029L,1UL}};
static uint64_t g_695 = 4UL;
static int64_t g_734 = (-2L);
static uint16_t g_736 = 0UL;
static uint64_t g_763 = 18446744073709551615UL;
static int32_t g_794 = (-1L);
static uint16_t g_836 = 65535UL;
static uint16_t g_870[7] = {3UL,3UL,0x7185L,3UL,3UL,0x7185L,3UL};
static int64_t *g_893 = &g_503;
static int64_t **g_892 = &g_893;
static const int32_t *g_897 = &g_499;
static uint32_t g_911 = 0xB1AA998FL;
static int16_t g_921 = 1L;
static int8_t g_924 = (-1L);
static int32_t g_925 = 0x878C7CAAL;
static int16_t g_926[1] = {8L};
static uint8_t g_927 = 248UL;
static uint32_t *g_1054 = &g_198;
static int32_t g_1158 = 0x51FCCAE4L;
static int32_t g_1159 = 0xDE001F2AL;
static uint8_t g_1163 = 254UL;
static int16_t *** const **g_1231 = (void*)0;
static int32_t *g_1343[3] = {&g_117,&g_117,&g_117};
static int32_t g_1418 = 4L;
static const int32_t g_1439 = 0xB4446918L;
static int64_t g_1459[7][4] = {{2L,2L,2L,2L},{2L,2L,2L,2L},{2L,2L,2L,2L},{2L,2L,2L,2L},{2L,2L,2L,2L},{2L,2L,2L,2L},{2L,2L,2L,2L}};
static uint32_t g_1461 = 1UL;
static uint8_t g_1504[1] = {252UL};
static const int8_t ** const *g_1506 = (void*)0;
static const int8_t ** const **g_1505 = &g_1506;
static uint32_t **g_1543 = &g_1054;
static int32_t ***g_1551[7] = {&g_159,&g_159,&g_159,&g_159,&g_159,&g_159,&g_159};
static int32_t ****g_1550 = &g_1551[2];
static uint32_t g_1566 = 0UL;



static int8_t  func_1(void);
static uint32_t  func_7(int8_t * p_8, const int8_t * p_9, int32_t  p_10);
static int8_t * func_11(int32_t  p_12, int64_t  p_13, int8_t * p_14);
static int32_t  func_15(int8_t * p_16);
static int8_t * func_17(const int8_t * const  p_18);
static int32_t * func_23(int8_t  p_24, int64_t  p_25, uint64_t  p_26, int8_t * p_27, int32_t * p_28);
static uint16_t  func_34(int32_t * p_35, int8_t * p_36, int8_t * p_37, int8_t * p_38, uint16_t  p_39);
static int32_t * func_45(int32_t ** p_46, uint16_t  p_47, const int16_t  p_48, uint64_t  p_49);




static int8_t  func_1(void)
{ 
    const int8_t * const l_19 = &g_20;
    int32_t l_1097[7] = {(-1L),0x98259370L,(-1L),(-1L),0x98259370L,(-1L),(-1L)};
    int8_t *l_1098 = &g_924;
    uint32_t l_1553 = 4294967295UL;
    int8_t **l_1558 = &g_121;
    int16_t ****l_1584[6] = {&g_602[2],&g_602[2],&g_602[1],&g_602[2],&g_602[2],&g_602[1]};
    int32_t *l_1586 = &g_1158;
    int32_t *l_1587 = &g_499;
    int32_t *l_1588[4] = {&g_1158,&g_1158,&g_1158,&g_1158};
    uint32_t l_1589 = 0UL;
    int32_t l_1592[7][2][3] = {{{1L,1L,1L},{0xD7AB7EB2L,(-10L),(-10L)}},{{1L,1L,1L},{0xD7AB7EB2L,(-10L),(-10L)}},{{1L,1L,1L},{0xD7AB7EB2L,(-10L),(-10L)}},{{1L,1L,1L},{0xD7AB7EB2L,(-10L),(-10L)}},{{1L,1L,1L},{0xD7AB7EB2L,(-10L),(-10L)}},{{1L,1L,1L},{0xD7AB7EB2L,(-10L),(-10L)}},{{1L,1L,1L},{0xD7AB7EB2L,(-10L),(-10L)}}};
    uint64_t l_1593 = 0x986B26EA648448EDLL;
    struct S0 l_1601 = {0x381CL,0x1DEA44155BBB51A8LL};
    uint8_t *l_1602 = (void*)0;
    uint8_t *l_1603 = &g_1504[0];
    int8_t *l_1604 = &g_505;
    int8_t l_1605 = 1L;
    int i, j, k;
    for (g_2 = 0; (g_2 <= (-22)); g_2--)
    { 
        union U1 l_1094 = {0x5BL};
        const int8_t *l_1549 = (void*)0;
        int32_t *l_1554 = &g_506;
        int8_t ***l_1555 = &g_120[0][0];
        int8_t ***l_1556 = &g_120[5][0];
        int8_t ***l_1557[7][7] = {{&g_120[6][0],&g_120[5][0],&g_120[0][0],&g_120[5][0],&g_120[6][0],&g_120[6][0],&g_120[5][0]},{&g_120[5][0],(void*)0,&g_120[5][0],&g_120[5][0],&g_120[5][0],&g_120[5][0],(void*)0},{&g_120[5][0],(void*)0,&g_120[0][0],&g_120[0][0],(void*)0,&g_120[5][0],(void*)0},{&g_120[5][0],&g_120[5][0],&g_120[5][0],&g_120[5][0],(void*)0,&g_120[0][0],&g_120[5][0]},{&g_120[5][0],&g_120[5][0],&g_120[5][0],(void*)0,&g_120[5][0],&g_120[5][0],&g_120[5][0]},{&g_120[5][0],&g_120[5][0],(void*)0,&g_120[5][0],&g_120[5][0],&g_120[5][0],&g_120[5][0]},{&g_120[0][0],&g_120[6][0],&g_120[0][0],&g_120[5][0],&g_120[5][0],&g_120[0][0],&g_120[6][0]}};
        uint16_t ***l_1561 = &g_521;
        uint16_t ****l_1560 = &l_1561;
        uint64_t *l_1565 = &g_283;
        int32_t *l_1567 = (void*)0;
        int32_t *l_1568 = &g_1418;
        int32_t *l_1569 = &g_117;
        uint8_t l_1580 = 0UL;
        const uint16_t l_1581 = 0x0A7AL;
        int i, j;
    }
    (**g_159) ^= (safe_sub_func_uint64_t_u_u((l_1584[2] != l_1584[2]), (safe_unary_minus_func_int32_t_s((*g_897)))));
    ++l_1589;
    l_1593--;
    (*g_160) = ((*l_1587) |= (safe_add_func_uint16_t_u_u((((safe_add_func_uint16_t_u_u((!(l_1601 , (((void*)0 == &g_893) ^ ((*l_1603) |= 247UL)))), (((((g_373 , l_1604) == (void*)0) , 0x55F774CEL) | (**g_1543)) >= (*g_1054)))) == 0x2BL) && (*g_121)), l_1605)));
    return (*l_1586);
}



static uint32_t  func_7(int8_t * p_8, const int8_t * p_9, int32_t  p_10)
{ 
    int32_t *****l_1552 = &g_1550;
    (*l_1552) = g_1550;
    return (*g_1054);
}



static int8_t * func_11(int32_t  p_12, int64_t  p_13, int8_t * p_14)
{ 
    int16_t ***l_1103 = &g_472;
    int32_t l_1115[2][5] = {{5L,2L,5L,5L,2L},{2L,5L,5L,2L,5L}};
    int32_t l_1116 = (-1L);
    int8_t *l_1122 = &g_510;
    uint32_t *l_1124 = (void*)0;
    uint8_t l_1142[7][7][1];
    struct S0 l_1152 = {65529UL,0xB0042C7B329A8649LL};
    union U1 *l_1201 = &g_304;
    int32_t l_1211 = 1L;
    int64_t **l_1222 = &g_893;
    int16_t ****l_1233 = &l_1103;
    int16_t *****l_1232[5][7][4] = {{{&l_1233,&l_1233,(void*)0,&l_1233},{(void*)0,&l_1233,&l_1233,&l_1233},{&l_1233,&l_1233,&l_1233,&l_1233},{&l_1233,&l_1233,&l_1233,&l_1233},{(void*)0,&l_1233,(void*)0,&l_1233},{&l_1233,&l_1233,(void*)0,&l_1233},{(void*)0,&l_1233,&l_1233,&l_1233}},{{&l_1233,&l_1233,&l_1233,&l_1233},{&l_1233,&l_1233,&l_1233,&l_1233},{(void*)0,&l_1233,(void*)0,&l_1233},{&l_1233,&l_1233,(void*)0,&l_1233},{(void*)0,&l_1233,&l_1233,&l_1233},{&l_1233,&l_1233,&l_1233,&l_1233},{&l_1233,&l_1233,&l_1233,&l_1233}},{{(void*)0,&l_1233,(void*)0,&l_1233},{&l_1233,&l_1233,(void*)0,&l_1233},{(void*)0,&l_1233,&l_1233,&l_1233},{&l_1233,&l_1233,&l_1233,&l_1233},{&l_1233,&l_1233,&l_1233,&l_1233},{(void*)0,&l_1233,(void*)0,&l_1233},{&l_1233,&l_1233,(void*)0,&l_1233}},{{(void*)0,&l_1233,&l_1233,&l_1233},{&l_1233,&l_1233,&l_1233,&l_1233},{&l_1233,&l_1233,&l_1233,&l_1233},{(void*)0,&l_1233,(void*)0,&l_1233},{&l_1233,&l_1233,(void*)0,&l_1233},{(void*)0,&l_1233,&l_1233,&l_1233},{&l_1233,&l_1233,&l_1233,&l_1233}},{{&l_1233,&l_1233,&l_1233,&l_1233},{(void*)0,&l_1233,(void*)0,&l_1233},{&l_1233,&l_1233,(void*)0,&l_1233},{(void*)0,&l_1233,&l_1233,&l_1233},{&l_1233,&l_1233,&l_1233,&l_1233},{&l_1233,&l_1233,&l_1233,&l_1233},{(void*)0,&l_1233,(void*)0,&l_1233}}};
    int32_t *l_1240 = &l_1115[0][3];
    uint8_t l_1309 = 255UL;
    int8_t l_1310[4][6] = {{0L,0xCEL,1L,1L,0xCEL,0L},{0L,1L,4L,1L,1L,1L},{0L,(-9L),0L,1L,(-9L),4L},{0xF5L,1L,0L,0L,1L,0xF5L}};
    uint16_t *l_1325 = (void*)0;
    uint64_t *l_1333 = &g_695;
    int8_t ***l_1354 = (void*)0;
    uint32_t l_1380 = 4294967295UL;
    int8_t l_1382 = 0x42L;
    uint16_t l_1388[2][4] = {{65529UL,65529UL,65529UL,65529UL},{65529UL,65529UL,65529UL,65529UL}};
    const uint32_t l_1430 = 1UL;
    int64_t l_1532 = 0x1CF0F924DB8DF697LL;
    int8_t l_1546 = 0x7CL;
    const int8_t ** const **l_1548 = &g_1506;
    int i, j, k;
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 7; j++)
        {
            for (k = 0; k < 1; k++)
                l_1142[i][j][k] = 255UL;
        }
    }
    if ((safe_rshift_func_uint8_t_u_u((p_13 ^ (((l_1103 == (void*)0) == ((safe_mod_func_int64_t_s_s((p_12 ^ (safe_mod_func_uint16_t_u_u((((safe_mul_func_uint8_t_u_u(((safe_div_func_int64_t_s_s((*g_893), g_505)) , (!(safe_sub_func_int32_t_s_s((0UL < 65531UL), (*g_1054))))), (*p_14))) , 0x6A65503905A3B2E2LL) , p_13), l_1115[0][3]))), l_1116)) <= 0x8C086DBC37E1D09DLL)) || p_12)), p_13)))
    { 
        int32_t *l_1117 = &g_506;
        struct S0 *l_1120 = &g_154;
        int8_t l_1121[3];
        int64_t l_1149 = (-2L);
        int32_t l_1154 = 1L;
        int32_t l_1156 = 0x6C6B619BL;
        int32_t l_1161 = 0xA053CBC4L;
        uint32_t l_1181 = 18446744073709551611UL;
        int32_t l_1195 = 0L;
        uint64_t l_1202 = 0UL;
        int8_t l_1229[3][5] = {{0xF3L,0xF3L,0xF3L,0xF3L,0xF3L},{0L,0x04L,0L,0x04L,0L},{0xF3L,0xF3L,0xF3L,0xF3L,0xF3L}};
        int i, j;
        for (i = 0; i < 3; i++)
            l_1121[i] = 0x0FL;
        (*g_159) = l_1117;
        if (((*l_1117) == 0x3F2A90DBB102F0C0LL))
        { 
            uint32_t **l_1123 = &g_1054;
            (*g_159) = func_23((((**g_892) == (((*l_1123) = func_23((*p_14), ((l_1121[2] = ((5UL <= (0L && ((void*)0 != l_1120))) ^ (*g_1054))) & (*p_14)), g_689[1][0][5], l_1122, (*g_159))) != l_1124)) >= (*l_1117)), (*g_893), p_12, p_14, (*g_159));
        }
        else
        { 
            const int32_t l_1134 = 0x08B80943L;
            int16_t *****l_1143 = (void*)0;
            int32_t *l_1148[4];
            int16_t *** const l_1153[3][6] = {{&g_472,&g_472,&g_472,&g_472,&g_472,&g_472},{&g_472,&g_472,&g_472,&g_472,&g_472,&g_472},{&g_472,&g_472,&g_472,&g_472,&g_472,&g_472}};
            uint32_t **l_1180 = &l_1124;
            uint16_t ***l_1198[2];
            int8_t *l_1200 = (void*)0;
            int64_t **l_1223[6][2][7] = {{{&g_893,(void*)0,(void*)0,&g_893,&g_893,&g_893,&g_893},{&g_893,&g_893,&g_893,&g_893,&g_893,&g_893,&g_893}},{{&g_893,(void*)0,&g_893,&g_893,&g_893,(void*)0,&g_893},{&g_893,&g_893,(void*)0,&g_893,&g_893,(void*)0,&g_893}},{{&g_893,(void*)0,&g_893,&g_893,&g_893,&g_893,&g_893},{&g_893,(void*)0,(void*)0,&g_893,&g_893,&g_893,&g_893}},{{&g_893,&g_893,&g_893,&g_893,&g_893,&g_893,&g_893},{&g_893,(void*)0,&g_893,&g_893,&g_893,(void*)0,&g_893}},{{&g_893,&g_893,(void*)0,&g_893,&g_893,(void*)0,&g_893},{&g_893,(void*)0,&g_893,&g_893,&g_893,&g_893,&g_893}},{{&g_893,(void*)0,(void*)0,&g_893,&g_893,&g_893,&g_893},{&g_893,&g_893,&g_893,&g_893,&g_893,&g_893,&g_893}}};
            struct S0 l_1228 = {0xC551L,0UL};
            int i, j, k;
            for (i = 0; i < 4; i++)
                l_1148[i] = &g_111;
            for (i = 0; i < 2; i++)
                l_1198[i] = (void*)0;
lbl_1203:
            for (g_423 = (-27); (g_423 == 30); ++g_423)
            { 
                int32_t l_1135 = 0xD6CB0F7BL;
                int16_t ****l_1145[3];
                int16_t *****l_1144 = &l_1145[0];
                int32_t *l_1147 = &l_1115[1][0];
                int32_t l_1162 = 0x0EA6B30FL;
                int i;
                for (i = 0; i < 3; i++)
                    l_1145[i] = &g_602[1];
                for (g_373 = 0; (g_373 <= 5); g_373 += 1)
                { 
                    uint32_t *l_1131[2][3][5] = {{{&g_511,&g_511,&g_511,&g_511,&g_511},{&g_511,&g_511,(void*)0,&g_511,&g_511},{&g_511,&g_511,&g_511,&g_511,&g_511}},{{&g_511,&g_911,&g_911,&g_511,&g_911},{&g_511,&g_511,(void*)0,&g_511,&g_511},{&g_911,&g_511,&g_911,&g_911,&g_511}}};
                    int32_t l_1146 = 5L;
                    int32_t l_1155 = (-3L);
                    int32_t l_1157 = 1L;
                    int32_t l_1160 = 8L;
                    int i, j, k;
                    (*g_159) = (((safe_div_func_uint32_t_u_u(((*l_1117) = (--(*g_1054))), (safe_rshift_func_int8_t_s_u(l_1134, l_1135)))) && ((((l_1115[0][1] = ((*g_1054) | ((g_80 < (safe_add_func_uint8_t_u_u((((safe_sub_func_int8_t_s_s((-3L), (l_1142[2][4][0] & ((((l_1144 = l_1143) == &g_601) == 0x5CL) >= l_1146)))) , l_1147) == l_1148[1]), 0x5EL))) , l_1149))) <= 0x4D0874D1L) != p_12) , p_13)) , (void*)0);
                    (*g_159) = l_1148[2];
                    (*l_1147) = (safe_mul_func_int8_t_s_s((1L & (l_1152 , ((void*)0 == l_1153[1][3]))), (*p_14)));
                    --g_1163;
                    l_1115[1][3] = 0x981D3825L;
                }
            }
            (*g_160) = (**g_159);
lbl_1213:
            for (g_623 = 0; (g_623 <= 6); g_623 += 1)
            { 
                uint16_t ***l_1197 = (void*)0;
                int i;
                (*g_159) = &l_1115[1][0];
                if ((safe_div_func_int32_t_s_s((((*l_1122) |= g_59[g_623]) ^ (((safe_mod_func_int32_t_s_s((!(safe_div_func_int32_t_s_s((((safe_rshift_func_int8_t_s_u((safe_mod_func_int64_t_s_s(p_12, (**g_892))), (+(safe_div_func_int32_t_s_s(p_13, (0x55L || (*g_121))))))) , l_1180) == &g_1054), p_13))), l_1181)) & (-4L)) , 0x67L)), p_13)))
                { 
                    int16_t l_1192 = 9L;
                    uint8_t *l_1196 = &g_927;
                    uint32_t *l_1199 = &g_155[0];
                    (*l_1117) = (((safe_add_func_int32_t_s_s(((((safe_mul_func_int16_t_s_s(p_13, ((((safe_add_func_uint32_t_u_u((safe_mod_func_int16_t_s_s(p_13, g_59[g_623])), (((((*l_1199) = ((((0x3A1D00C4L ^ (safe_add_func_uint8_t_u_u((l_1192 ^ (8L != (((*l_1196) = ((l_1195 ^= (safe_sub_func_int32_t_s_s(l_1192, g_59[g_623]))) || l_1142[2][5][0])) , 0x949B3495DCD0D65ALL))), 0xB4L))) , l_1197) == l_1198[1]) > g_59[g_623])) , l_1152.f0) <= 0UL) , (-1L)))) >= l_1115[0][3]) <= 0xCF19A4602A03FE4FLL) | g_59[6]))) | p_13) || 1UL) , (*l_1117)), p_13)) > 0x8BL) , l_1192);
                    return l_1200;
                }
                else
                { 
                    (*g_212) = l_1201;
                    if (g_505)
                        goto lbl_1213;
                }
                (*g_160) &= (l_1202 <= l_1142[2][4][0]);
                if (g_75)
                    goto lbl_1203;
                (*g_160) ^= (p_13 != ((((*l_1117) & (safe_rshift_func_int16_t_s_u(((void*)0 != &g_897), 9))) , p_12) > (*l_1117)));
                for (g_293 = 2; (g_293 >= 0); g_293 -= 1)
                { 
                    uint64_t *l_1212 = &g_695;
                    int i;
                }
            }
            l_1115[0][3] ^= (((safe_lshift_func_uint8_t_u_s((safe_unary_minus_func_int16_t_s((safe_sub_func_uint32_t_u_u((!(safe_mod_func_int16_t_s_s(((*l_1117) = (l_1222 == l_1223[3][1][4])), p_12))), p_12)))), ((*l_1122) = (((safe_add_func_uint64_t_u_u((((65526UL == (safe_mod_func_uint8_t_u_u(((l_1228 , &p_14) != &p_14), g_1159))) >= 0xD9L) || 0x1205L), l_1116)) || (**g_521)) == 0x38A13B71L)))) <= l_1229[2][3]) && p_13);
        }
    }
    else
    { 
        int32_t **l_1230 = (void*)0;
        uint8_t *l_1238 = &g_79;
        int32_t l_1239 = (-1L);
        struct S0 *l_1286 = &g_154;
        union U1 l_1357[7] = {{0x71L},{0x71L},{0x71L},{0x71L},{0x71L},{0x71L},{0x71L}};
        int8_t *l_1381[3][4] = {{&g_501,&g_501,&g_501,&g_501},{&g_501,&g_501,&g_501,&g_501},{&g_501,&g_501,&g_501,&g_501}};
        int32_t l_1387[7][4] = {{(-1L),1L,1L,(-1L)},{1L,(-1L),1L,0x72E6A412L},{1L,1L,1L,6L},{1L,(-1L),6L,6L},{0xD4D76A81L,0xD4D76A81L,1L,(-1L)},{(-1L),1L,1L,1L},{0xD4D76A81L,0x72E6A412L,6L,1L}};
        int i, j;
lbl_1273:
        l_1240 = func_45(l_1230, (((g_1231 = &g_601) == (l_1232[3][1][0] = l_1232[1][5][2])) < 0x0152L), p_12, (safe_unary_minus_func_uint16_t_u(((~(p_13 == (safe_mod_func_uint8_t_u_u(((*l_1238) = p_12), l_1239)))) || (-1L)))));
        for (l_1211 = (-2); (l_1211 < (-25)); l_1211 = safe_sub_func_int64_t_s_s(l_1211, 9))
        { 
            uint32_t *l_1255 = &g_198;
            int32_t *l_1256[4][3] = {{&g_2,&g_1158,&g_506},{&g_2,&g_2,&g_1158},{&l_1211,&g_1158,&g_1158},{&g_1158,&l_1115[0][3],&g_506}};
            int8_t l_1308 = 0x72L;
            int i, j;
            if ((l_1239 = (safe_mul_func_uint8_t_u_u(g_102.f1, ((safe_sub_func_uint32_t_u_u((*g_1054), (safe_add_func_uint32_t_u_u((((**g_159) = ((p_12 && (p_12 | ((safe_lshift_func_uint16_t_u_s((safe_lshift_func_uint8_t_u_s((p_13 | (safe_mul_func_int8_t_s_s((l_1255 != l_1255), (*p_14)))), (*g_121))), p_13)) < (*l_1240)))) , p_13)) ^ (*l_1240)), 0x45C9DE7CL)))) ^ 18446744073709551615UL)))))
            { 
                (*g_159) = (void*)0;
                return p_14;
            }
            else
            { 
                uint32_t l_1271 = 1UL;
                int8_t ***l_1289 = (void*)0;
                int8_t ****l_1288[6] = {&l_1289,&l_1289,&l_1289,&l_1289,&l_1289,&l_1289};
                int8_t *****l_1287[6][3] = {{&l_1288[5],&l_1288[0],&l_1288[0]},{&l_1288[0],&l_1288[5],&l_1288[5]},{&l_1288[0],&l_1288[5],&l_1288[0]},{&l_1288[0],&l_1288[0],&l_1288[3]},{&l_1288[0],&l_1288[0],&l_1288[3]},{&l_1288[0],&l_1288[0],&l_1288[0]}};
                int32_t l_1296 = 1L;
                int i, j;
                if (((l_1239 = ((*l_1240) , (safe_div_func_int16_t_s_s((safe_mul_func_int8_t_s_s(((safe_lshift_func_uint16_t_u_s(((**g_521) = (0x0CD09D8692100ED9LL <= p_12)), 6)) ^ (safe_div_func_uint32_t_u_u((*g_1054), ((safe_lshift_func_uint16_t_u_u(p_13, (g_611 , (safe_mul_func_uint8_t_u_u(((safe_add_func_int32_t_s_s((*g_160), p_12)) < (*g_160)), (*p_14)))))) | l_1271)))), (*p_14))), p_13)))) >= (*l_1240)))
                { 
                    int32_t *l_1272 = &g_499;
                    int8_t ***l_1285[3][5][4] = {{{&g_120[5][0],&g_120[1][0],&g_120[1][0],&g_120[5][0]},{&g_120[1][0],&g_120[1][0],&g_120[5][0],&g_120[1][0]},{&g_120[1][0],&g_120[5][0],&g_120[5][0],&g_120[5][0]},{&g_120[1][0],&g_120[1][0],&g_120[1][0],&g_120[5][0]},{&g_120[5][0],&g_120[5][0],&g_120[5][0],&g_120[1][0]}},{{&g_120[5][0],&g_120[1][0],&g_120[1][0],&g_120[5][0]},{&g_120[1][0],&g_120[1][0],&g_120[5][0],&g_120[1][0]},{&g_120[1][0],&g_120[5][0],&g_120[5][0],&g_120[5][0]},{&g_120[1][0],&g_120[1][0],&g_120[1][0],&g_120[5][0]},{&g_120[5][0],&g_120[5][0],&g_120[5][0],&g_120[1][0]}},{{&g_120[5][0],&g_120[1][0],&g_120[1][0],&g_120[5][0]},{&g_120[1][0],&g_120[1][0],&g_120[5][0],&g_120[1][0]},{&g_120[1][0],&g_120[5][0],&g_120[5][0],&g_120[5][0]},{&g_120[1][0],&g_120[1][0],&g_120[1][0],&g_120[5][0]},{&g_120[5][0],&g_120[5][0],&g_120[5][0],&g_120[1][0]}}};
                    int i, j, k;
                    (*g_159) = l_1272;
                    if (g_1163)
                        goto lbl_1273;
                    (*g_160) = (0x1BDAF74728C76FD8LL <= (p_13 ^= ((~((((*l_1122) |= (safe_sub_func_int16_t_s_s((-3L), (((safe_lshift_func_uint8_t_u_s((g_2 ^ (safe_div_func_int16_t_s_s((safe_lshift_func_uint16_t_u_u(65530UL, (((*g_893) <= (safe_sub_func_int16_t_s_s((0xB1L || ((g_120[0][0] = &p_14) != &g_121)), 0xD26CL))) && g_1163))), (-3L)))), 7)) , l_1286) != (void*)0)))) , l_1287[3][1]) != (void*)0)) & 8UL)));
                }
                else
                { 
                    int8_t l_1311[2][5] = {{0x1DL,0L,0L,0x1DL,0x06L},{0x1DL,0L,0L,0x1DL,0x06L}};
                    int i, j;
                    l_1311[0][3] ^= ((**g_159) = (((safe_lshift_func_int16_t_s_u((((safe_add_func_int64_t_s_s(((((**g_521)++) || (--(**g_521))) ^ ((p_13 || (1L != ((~(((safe_sub_func_uint32_t_u_u((safe_mod_func_int32_t_s_s(((*g_121) == (p_12 < (((safe_mul_func_uint8_t_u_u((safe_rshift_func_int8_t_s_u(0x09L, 2)), ((l_1239 = 6L) , l_1308))) <= l_1309) && 0x7DL))), 1UL)), (*g_1054))) > p_13) && l_1310[0][1])) >= g_870[2]))) != 0x81C4L)), 0x13B31EF1C2CD7429LL)) != g_836) > 0xCFADL), 4)) | p_13) , (**g_159)));
                    return p_14;
                }
            }
        }
        if (p_13)
        { 
            const int8_t *l_1314 = &l_1310[3][2];
            const int8_t **l_1313[6][2] = {{&l_1314,(void*)0},{&l_1314,&l_1314},{(void*)0,&l_1314},{&l_1314,(void*)0},{&l_1314,&l_1314},{(void*)0,&l_1314}};
            const int8_t ***l_1312 = &l_1313[4][0];
            int32_t l_1315 = (-5L);
            uint16_t *l_1326 = (void*)0;
            int32_t l_1356[1][7] = {{0x7D654BC9L,0x7D654BC9L,0x7D654BC9L,0x7D654BC9L,0x7D654BC9L,0x7D654BC9L,0x7D654BC9L}};
            int i, j;
            (*l_1312) = (void*)0;
            if (((*g_521) != ((l_1315 || (safe_rshift_func_uint8_t_u_u((!((safe_mod_func_int64_t_s_s(((l_1115[0][1] ^= (safe_lshift_func_int16_t_s_u((safe_rshift_func_int16_t_s_u(l_1315, 1)), 5))) ^ ((l_1325 != l_1326) >= ((*g_160) = (safe_lshift_func_uint16_t_u_u((safe_add_func_uint8_t_u_u((((((0x9024D011L != (((safe_mul_func_int16_t_s_s(((&g_695 == l_1333) & l_1315), p_13)) , p_13) | l_1315)) , (*l_1240)) != 0x50L) & (**g_521)) , g_80), l_1315)), p_12))))), l_1315)) < 0x9D93D79DL)), (*l_1240)))) , (*g_521))))
            { 
                const int32_t l_1342 = 6L;
                (*g_160) = ((safe_add_func_int64_t_s_s(((l_1315 , l_1152) , (safe_sub_func_int16_t_s_s(p_13, ((*g_159) == (g_1343[2] = func_45(&g_160, ((((safe_mul_func_uint16_t_u_u(((**g_521) = ((safe_add_func_int32_t_s_s((p_12 <= p_12), p_13)) ^ l_1315)), p_12)) & 0UL) == l_1342) >= 1UL), (*l_1240), (*l_1240))))))), p_12)) , p_12);
            }
            else
            { 
                int8_t l_1355 = 0xD8L;
                (*g_160) ^= ((((+((*g_893) |= (((*l_1240) , (safe_add_func_int32_t_s_s(0x27D1474CL, ((safe_div_func_uint8_t_u_u((~l_1315), (-7L))) > ((safe_add_func_int16_t_s_s((((safe_mod_func_int16_t_s_s((l_1354 != (void*)0), l_1239)) | g_52) <= p_12), l_1355)) , (*g_121)))))) != (*l_1240)))) , g_154) , (*p_14)) != 0x43L);
                return p_14;
            }
            l_1356[0][4] &= ((**g_159) = l_1315);
        }
        else
        { 
            uint16_t l_1359[1];
            int32_t *l_1360 = &g_1158;
            uint8_t **l_1363 = (void*)0;
            uint8_t **l_1364 = &l_1238;
            int32_t *l_1383 = &g_1158;
            int32_t *l_1384 = &l_1115[0][2];
            int32_t *l_1385 = &g_499;
            int32_t *l_1386[2];
            int i;
            for (i = 0; i < 1; i++)
                l_1359[i] = 0xDA59L;
            for (i = 0; i < 2; i++)
                l_1386[i] = &g_1158;
            l_1359[0] = (l_1357[6] , (~((*g_892) == (*g_892))));
            (*l_1360) ^= (*g_160);
            (*g_159) = func_23((safe_add_func_uint16_t_u_u(((((*l_1364) = &g_59[6]) != (void*)0) ^ (**g_892)), ((((*l_1360) = (((*p_14) = (safe_rshift_func_uint16_t_u_s((safe_sub_func_int8_t_s_s((safe_unary_minus_func_int16_t_s(1L)), (safe_mod_func_int16_t_s_s(p_12, ((safe_lshift_func_int16_t_s_u(((safe_sub_func_int32_t_s_s((((safe_mod_func_int64_t_s_s((safe_sub_func_uint32_t_u_u((((*l_1240) ^ ((*l_1240) | p_13)) ^ 0x84006AA1DAEE9288LL), p_13)), 1L)) < (*l_1240)) == l_1380), 4294967289UL)) & (**g_521)), (*l_1360))) || 0x8379L))))), 11))) <= (*l_1240))) <= (*l_1240)) >= g_499))), (*g_893), g_926[0], l_1381[2][2], (*g_159));
            l_1388[1][2]++;
            (*l_1383) = 1L;
        }
    }
    for (g_117 = 0; (g_117 >= 17); g_117 = safe_add_func_uint32_t_u_u(g_117, 4))
    { 
        int16_t **l_1393[4] = {(void*)0,(void*)0,(void*)0,(void*)0};
        int i;
        (*l_1103) = l_1393[2];
    }
    for (l_1152.f0 = 0; (l_1152.f0 <= 0); l_1152.f0 += 1)
    { 
        int32_t *l_1394[5][7] = {{&l_1211,&g_499,&l_1211,(void*)0,(void*)0,&l_1211,&g_499},{&l_1211,&g_499,&l_1211,(void*)0,(void*)0,&l_1211,&g_499},{&l_1211,&g_499,&l_1211,(void*)0,(void*)0,&l_1211,&g_499},{&l_1211,&g_499,&l_1211,(void*)0,(void*)0,&l_1211,&g_499},{&l_1211,&g_499,&l_1211,(void*)0,(void*)0,&l_1211,&g_499}};
        uint32_t l_1395 = 0UL;
        uint8_t l_1405 = 0xACL;
        int8_t *l_1413 = &l_1310[1][4];
        union U1 l_1485[7][7] = {{{2UL},{0xDBL},{0x7DL},{0x7DL},{0xDBL},{2UL},{0xDBL}},{{0x47L},{0UL},{0UL},{251UL},{255UL},{251UL},{0x47L}},{{2UL},{2UL},{0x26L},{0xDBL},{0x26L},{2UL},{2UL}},{{0UL},{0x47L},{0x2EL},{0x47L},{0UL},{0UL},{0x47L}},{{0x7DL},{0x7FL},{0x7DL},{0x26L},{0x26L},{0x7DL},{0x7FL}},{{0x47L},{255UL},{0x2EL},{0x2EL},{255UL},{0x47L},{255UL}},{{0x7DL},{0x26L},{0x26L},{0x7DL},{0x7FL},{0x7DL},{0x26L}}};
        int16_t **l_1489 = &g_324;
        uint8_t l_1490 = 1UL;
        uint16_t ***l_1522 = &g_521;
        int i, j;
        ++l_1395;
        if (g_150[l_1152.f0])
            continue;
    }
    for (g_503 = 0; (g_503 <= 1); g_503 += 1)
    { 
        int16_t l_1525 = 0xB0B3L;
        int32_t *l_1526 = &g_506;
        int32_t *l_1527 = &g_111;
        int32_t *l_1528 = &l_1211;
        int32_t *l_1529 = &g_506;
        int32_t *l_1530 = &g_117;
        int32_t *l_1531[6][4][2] = {{{&l_1115[0][3],&l_1115[0][3]},{&l_1211,(void*)0},{(void*)0,&g_506},{(void*)0,&g_2}},{{&l_1115[0][3],(void*)0},{&l_1115[0][3],&l_1211},{&l_1115[0][3],(void*)0},{&l_1115[0][3],&g_2}},{{(void*)0,&g_506},{(void*)0,(void*)0},{&l_1211,&l_1115[0][3]},{&l_1115[0][3],&g_499}},{{(void*)0,&g_2},{&g_499,&g_2},{(void*)0,&g_499},{&l_1115[0][3],&l_1115[0][3]}},{{&l_1211,(void*)0},{(void*)0,&g_506},{(void*)0,&g_2},{&l_1115[0][3],(void*)0}},{{&l_1115[0][3],&l_1211},{&l_1115[0][3],(void*)0},{&l_1115[0][3],&g_2},{(void*)0,&g_506}}};
        int64_t l_1533 = 0xCC65945663712CDELL;
        uint64_t l_1534 = 2UL;
        int8_t *l_1547 = &g_505;
        int i, j, k;
        if (l_1525)
            break;
        l_1534++;
        for (l_1533 = 0; (l_1533 <= 1); l_1533 += 1)
        { 
            const uint32_t *l_1545 = &g_511;
            const uint32_t * const *l_1544 = &l_1545;
            for (g_507 = 2; (g_507 >= 0); g_507 -= 1)
            { 
                union U1 l_1539 = {0xABL};
                uint32_t **l_1542 = &g_1054;
                uint32_t ***l_1541[1][7][3] = {{{&l_1542,&l_1542,&l_1542},{&l_1542,&l_1542,&l_1542},{&l_1542,&l_1542,&l_1542},{&l_1542,&l_1542,&l_1542},{&l_1542,&l_1542,&l_1542},{&l_1542,&l_1542,&l_1542},{&l_1542,&l_1542,&l_1542}}};
                int i, j, k;
                (*l_1530) |= (safe_rshift_func_uint8_t_u_s((((((**g_521) = (l_1539 , ((((!l_1115[g_503][g_507]) <= ((g_1543 = (g_154 , &l_1124)) == ((*l_1240) , l_1544))) | (g_102 , p_12)) | (*p_14)))) == l_1539.f0) , g_611) , l_1546), (*p_14)));
                return l_1547;
            }
            return l_1547;
        }
    }
    l_1548 = &g_1506;
    return p_14;
}



static int32_t  func_15(int8_t * p_16)
{ 
    int16_t l_1093 = 0x4242L;
    return l_1093;
}



static int8_t * func_17(const int8_t * const  p_18)
{ 
    uint64_t l_21[1][7] = {{0x51EBF0DDD9CD4431LL,0x51EBF0DDD9CD4431LL,1UL,0x51EBF0DDD9CD4431LL,0x51EBF0DDD9CD4431LL,1UL,0x51EBF0DDD9CD4431LL}};
    int32_t * const l_29 = &g_2;
    int32_t *l_40[3];
    int8_t *l_167 = (void*)0;
    int i, j;
    for (i = 0; i < 3; i++)
        l_40[i] = (void*)0;
    for (g_20 = 0; (g_20 <= 0); g_20 += 1)
    { 
        int8_t *l_43 = (void*)0;
        uint32_t *l_1053[6] = {&g_304.f4,&g_911,&g_911,&g_304.f4,&g_911,&g_911};
        int32_t l_1057[2];
        int32_t l_1058 = 0xA64ED84AL;
        int64_t l_1090[5][4] = {{(-6L),0L,(-6L),0L},{(-6L),0L,(-6L),0L},{(-6L),0L,(-6L),0L},{(-6L),0L,(-6L),0L},{(-6L),0L,(-6L),0L}};
        int i, j;
        for (i = 0; i < 2; i++)
            l_1057[i] = (-1L);
        if (g_20)
        { 
            uint8_t l_22 = 0x80L;
            int8_t *l_44[7][3][4] = {{{&g_20,&g_20,&g_20,&g_20},{&g_20,&g_20,&g_20,&g_20},{(void*)0,&g_20,(void*)0,&g_20}},{{&g_20,&g_20,&g_20,&g_20},{&g_20,&g_20,&g_20,&g_20},{&g_20,&g_20,&g_20,&g_20}},{{&g_20,&g_20,&g_20,&g_20},{&g_20,(void*)0,(void*)0,&g_20},{(void*)0,&g_20,&g_20,&g_20}},{{&g_20,&g_20,&g_20,&g_20},{&g_20,&g_20,&g_20,&g_20},{&g_20,&g_20,&g_20,&g_20}},{{&g_20,(void*)0,&g_20,(void*)0},{(void*)0,&g_20,&g_20,&g_20},{&g_20,&g_20,&g_20,&g_20}},{{&g_20,(void*)0,&g_20,&g_20},{&g_20,&g_20,&g_20,&g_20},{&g_20,&g_20,&g_20,&g_20}},{{(void*)0,(void*)0,&g_20,&g_20},{&g_20,&g_20,(void*)0,(void*)0},{&g_20,&g_20,&g_20,(void*)0}}};
            int32_t *l_168[5][5][2] = {{{&g_2,(void*)0},{&g_2,&g_2},{(void*)0,&g_2},{&g_2,&g_2},{&g_2,&g_2}},{{(void*)0,&g_2},{&g_2,&g_2},{&g_2,&g_2},{(void*)0,&g_2},{&g_2,&g_2}},{{&g_2,&g_2},{(void*)0,&g_2},{&g_2,(void*)0},{&g_2,(void*)0},{&g_2,&g_2}},{{(void*)0,&g_2},{&g_2,&g_2},{&g_2,&g_2},{(void*)0,&g_2},{&g_2,&g_2}},{{&g_2,&g_2},{(void*)0,&g_2},{&g_2,&g_2},{&g_2,&g_2},{(void*)0,&g_2}}};
            const uint32_t l_1074 = 1UL;
            int i, j, k;
            if (l_22)
                break;
            for (l_22 = 0; (l_22 <= 0); l_22 += 1)
            { 
                int32_t **l_41 = (void*)0;
                int32_t **l_42 = &l_40[1];
                uint32_t *l_1051 = &g_198;
                uint32_t **l_1052[6][5][4] = {{{&l_1051,(void*)0,&l_1051,&l_1051},{&l_1051,&l_1051,&l_1051,&l_1051},{&l_1051,&l_1051,(void*)0,&l_1051},{(void*)0,&l_1051,&l_1051,(void*)0},{&l_1051,&l_1051,&l_1051,&l_1051}},{{&l_1051,&l_1051,&l_1051,&l_1051},{&l_1051,&l_1051,&l_1051,&l_1051},{&l_1051,(void*)0,&l_1051,&l_1051},{&l_1051,&l_1051,&l_1051,&l_1051},{&l_1051,&l_1051,&l_1051,&l_1051}},{{&l_1051,(void*)0,&l_1051,&l_1051},{&l_1051,&l_1051,&l_1051,&l_1051},{(void*)0,(void*)0,(void*)0,&l_1051},{&l_1051,&l_1051,&l_1051,&l_1051},{&l_1051,&l_1051,&l_1051,&l_1051}},{{&l_1051,(void*)0,&l_1051,&l_1051},{&l_1051,&l_1051,&l_1051,&l_1051},{&l_1051,&l_1051,(void*)0,&l_1051},{(void*)0,&l_1051,&l_1051,(void*)0},{&l_1051,&l_1051,&l_1051,&l_1051}},{{&l_1051,&l_1051,&l_1051,&l_1051},{&l_1051,&l_1051,&l_1051,&l_1051},{&l_1051,(void*)0,&l_1051,&l_1051},{&l_1051,&l_1051,&l_1051,&l_1051},{&l_1051,&l_1051,&l_1051,&l_1051}},{{&l_1051,(void*)0,&l_1051,&l_1051},{&l_1051,&l_1051,&l_1051,&l_1051},{&l_1051,&l_1051,&l_1051,&l_1051},{&l_1051,(void*)0,&l_1051,&l_1051},{&l_1051,&l_1051,(void*)0,(void*)0}}};
                int8_t *l_1060 = (void*)0;
                union U1 l_1061 = {0xC9L};
                int i, j, k;
                (*l_42) = func_23(l_21[g_20][(g_20 + 3)], (((&g_2 != l_29) != (safe_sub_func_int8_t_s_s(((void*)0 == p_18), (safe_lshift_func_uint16_t_u_s(func_34(((*l_42) = l_40[1]), &g_20, l_43, l_44[6][1][2], l_21[g_20][(l_22 + 2)]), l_21[g_20][(g_20 + 4)]))))) , l_21[l_22][(g_20 + 6)]), l_22, l_167, l_168[1][2][0]);
                if ((safe_add_func_uint16_t_u_u(((l_1053[0] = l_1051) != g_1054), (safe_div_func_uint32_t_u_u((*g_1054), (*g_1054))))))
                { 
                    int8_t *l_1059 = &g_20;
                    l_1058 ^= (g_506 ^= ((**g_159) &= l_1057[1]));
                    return l_1059;
                }
                else
                { 
                    if ((*g_160))
                        break;
                }
                for (g_794 = 0; (g_794 >= 0); g_794 -= 1)
                { 
                    return l_1060;
                }
                if ((*g_897))
                { 
                    return l_43;
                }
                else
                { 
                    uint16_t **l_1065 = &g_522[4][0][0];
                    int i, j;
                    (*g_160) ^= (((&g_198 != ((l_1061 , (((((~(l_21[g_20][(g_20 + 3)] = ((1L | ((void*)0 == l_1065)) != (safe_rshift_func_uint16_t_u_s(65533UL, 8))))) || ((*g_893) = (((safe_div_func_uint64_t_u_u((safe_sub_func_int64_t_s_s((safe_mod_func_int64_t_s_s((*g_893), 3UL)), 0x3F4EAA9A1AB13C98LL)), 0x99A01EF329DF412ELL)) ^ (*l_29)) >= l_21[g_20][(g_20 + 3)]))) | 0xF27028ACL) , (*g_121)) <= (*p_18))) , l_1053[0])) , (void*)0) != &g_120[2][0]);
                    (**g_159) = l_1074;
                    (*g_160) = 1L;
                    return l_1060;
                }
            }
        }
        else
        { 
            (*g_160) = 0x7B2A19D2L;
        }
        for (g_79 = 0; (g_79 <= 0); g_79 += 1)
        { 
            int8_t *l_1087 = &g_75;
            struct S0 *l_1089 = &g_611;
            struct S0 **l_1088 = &l_1089;
            int8_t *l_1091[7][1] = {{&g_293},{&g_501},{&g_501},{&g_293},{&g_501},{&g_501},{&g_293}};
            int32_t l_1092[6];
            int i, j;
            for (i = 0; i < 6; i++)
                l_1092[i] = 0x39F92FCEL;
            (*g_160) = 1L;
            (*g_160) ^= ((l_1092[0] = (safe_mul_func_int8_t_s_s((safe_sub_func_int8_t_s_s((safe_rshift_func_uint8_t_u_s(((((0UL != ((safe_lshift_func_int16_t_s_u((safe_add_func_uint16_t_u_u(((**g_521) = (safe_mul_func_uint8_t_u_u(((((void*)0 != &g_611) & (((*l_1087) = 0x1BL) , ((void*)0 == l_1088))) < ((l_21[g_79][(g_79 + 5)] | l_21[g_79][(g_79 + 5)]) > l_1057[0])), l_21[g_79][(g_79 + 5)]))), (*l_29))), l_1057[1])) < 0x8F9EL)) , l_21[g_79][(g_79 + 5)]) & 0x71L) || (*l_29)), (*p_18))), g_79)), l_1090[0][0]))) ^ (*p_18));
            if ((*l_29))
                continue;
        }
    }
    return l_167;
}



static int32_t * func_23(int8_t  p_24, int64_t  p_25, uint64_t  p_26, int8_t * p_27, int32_t * p_28)
{ 
    uint8_t l_169 = 1UL;
    int32_t l_172 = 0L;
    int32_t l_173 = 0x757E7574L;
    int32_t l_294[2];
    uint8_t l_308 = 1UL;
    int8_t **l_336 = &g_121;
    uint16_t *l_344[4] = {&g_150[0],&g_150[0],&g_150[0],&g_150[0]};
    const union U1 l_460 = {1UL};
    int32_t **l_514 = &g_160;
    uint8_t l_534 = 0xF2L;
    int8_t l_617 = 0xE9L;
    int16_t l_728[4][7];
    int16_t **l_757 = &g_324;
    int32_t *l_758[1][2];
    const uint32_t l_775 = 18446744073709551615UL;
    int16_t ****l_778 = &g_602[0];
    uint64_t l_819 = 1UL;
    int64_t l_869 = 0xD5214180F3690179LL;
    struct S0 l_873 = {0x2086L,0xFD467F88E33C0242LL};
    int64_t ** const l_891 = (void*)0;
    uint8_t *l_894 = &g_80;
    int8_t l_922 = 1L;
    int64_t l_979 = 0L;
    uint32_t l_1024 = 0x70085770L;
    int32_t l_1040 = 4L;
    const union U1 *l_1044 = &g_304;
    const union U1 **l_1043 = &l_1044;
    int i, j;
    for (i = 0; i < 2; i++)
        l_294[i] = (-3L);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 7; j++)
            l_728[i][j] = 5L;
    }
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 2; j++)
            l_758[i][j] = &l_294[0];
    }
    return p_28;
}



static uint16_t  func_34(int32_t * p_35, int8_t * p_36, int8_t * p_37, int8_t * p_38, uint16_t  p_39)
{ 
    uint8_t l_50 = 3UL;
    int16_t *l_51 = &g_52;
    int32_t *l_99 = &g_2;
    int32_t **l_98 = &l_99;
    uint16_t *l_103 = (void*)0;
    int32_t *l_110 = &g_111;
    int64_t l_112 = (-1L);
    uint16_t *l_113 = &g_102.f0;
    uint64_t l_114 = 0x31AFCD19E8F13034LL;
    int32_t *l_115 = (void*)0;
    int32_t *l_116 = &g_117;
    int8_t *l_129 = &g_75;
    uint8_t *l_138 = &l_50;
    union U1 l_143 = {0x26L};
    int32_t l_149[3][3] = {{0x11143083L,1L,1L},{0x11143083L,1L,1L},{0x11143083L,1L,1L}};
    struct S0 *l_153 = &g_154;
    int i, j;
    (*l_98) = func_45((p_39 , (void*)0), l_50, ((*l_51) ^= g_2), g_2);
    (*l_116) = (safe_sub_func_int32_t_s_s((((g_102 , (((++p_39) | ((*l_113) = (safe_sub_func_uint16_t_u_u(g_52, ((safe_sub_func_uint32_t_u_u((&g_80 == &g_80), ((*l_110) = g_96))) , ((l_112 && 0x11966D8DA357BB50LL) != (**l_98))))))) >= (*l_99))) | g_59[6]) ^ 0L), l_114));
    for (g_52 = (-15); (g_52 <= (-21)); g_52 = safe_sub_func_uint64_t_u_u(g_52, 1))
    { 
        int16_t **l_124 = &l_51;
        int8_t *l_125 = &g_75;
        int8_t **l_126 = &g_121;
        int8_t *l_128 = &g_75;
        int8_t **l_127[3][4] = {{&l_128,&l_128,&l_128,&l_128},{&l_128,&l_128,&l_128,&l_128},{&l_128,&l_128,&l_128,&l_128}};
        int32_t l_136 = 0x1138347EL;
        uint32_t l_137 = 0x06CF3CB9L;
        int i, j;
        if (g_59[0])
            break;
        (*l_116) &= (((&p_38 == g_120[5][0]) <= (((safe_sub_func_int64_t_s_s(((((l_124 != &l_51) != (((((l_129 = ((*l_126) = (l_125 = p_36))) != (void*)0) < (safe_lshift_func_int16_t_s_s((safe_mod_func_uint8_t_u_u((safe_div_func_uint16_t_u_u(9UL, (*l_110))), p_39)), g_96))) >= l_136) || (*p_36))) >= l_136) & (*l_110)), p_39)) > g_52) & l_137)) <= (*l_99));
        (*l_110) = ((((((l_138 == (void*)0) > 1UL) <= (safe_lshift_func_int16_t_s_u(g_59[6], (safe_rshift_func_int16_t_s_s((l_143 , p_39), p_39))))) , g_20) <= (**l_98)) < g_79);
    }
    if (((*l_110) ^= (g_75 != g_80)))
    { 
        int32_t l_144 = 0x6D39C238L;
        int32_t l_145 = 1L;
        int32_t l_146 = 0xEC5F198FL;
        int32_t l_147 = 0x0E3AF358L;
        int32_t *l_148[4] = {&g_2,&g_2,&g_2,&g_2};
        int i;
        ++g_150[0];
        if (g_102.f1)
            goto lbl_158;
        l_153 = &g_102;
lbl_158:
        g_155[0]--;
        (*l_98) = func_45(((g_154 , g_102) , g_159), p_39, (0UL || (safe_add_func_int16_t_s_s(g_20, (0L || g_59[6])))), g_80);
    }
    else
    { 
        union U1 *l_164 = &l_143;
        union U1 **l_163 = &l_164;
        int32_t l_165 = 0xEFADCADDL;
        int32_t l_166 = (-1L);
        (*l_163) = &l_143;
        (*g_159) = (*g_159);
        l_166 ^= ((*l_110) |= (l_165 , (*g_160)));
    }
    for (g_52 = 0; g_52 < 2; g_52 += 1)
    {
        g_150[g_52] = 0x09C6L;
    }
    return p_39;
}



static int32_t * func_45(int32_t ** p_46, uint16_t  p_47, const int16_t  p_48, uint64_t  p_49)
{ 
    const int8_t *l_53 = &g_20;
    const int8_t **l_54 = &l_53;
    int32_t l_55 = 0x12959AF2L;
    int32_t **l_83 = (void*)0;
    int32_t *l_85 = &l_55;
    int32_t **l_84 = &l_85;
    const int16_t *l_95 = &g_96;
    const int16_t **l_94 = &l_95;
    int16_t *l_97 = &g_52;
    l_55 = (((*l_54) = l_53) != &g_20);
    for (p_49 = 0; (p_49 != 35); p_49++)
    { 
        uint8_t *l_58[1];
        int32_t l_60 = (-10L);
        int8_t *l_74 = &g_75;
        int32_t l_76[5] = {0xE0027488L,0xE0027488L,0xE0027488L,0xE0027488L,0xE0027488L};
        int32_t l_77 = (-3L);
        int32_t *l_78 = &l_76[0];
        int i;
        for (i = 0; i < 1; i++)
            l_58[i] = &g_59[6];
        g_79 |= ((l_60 = 0xF5L) , ((*l_78) = (0xF4L && (p_47 == ((p_48 > ((((safe_add_func_uint32_t_u_u((safe_rshift_func_uint8_t_u_s((safe_lshift_func_uint8_t_u_s(((+4UL) && (safe_rshift_func_uint8_t_u_s((((*l_74) = ((safe_add_func_int32_t_s_s((p_49 && (l_60 = (((((safe_mod_func_uint16_t_u_u(0xEE07L, g_52)) <= p_49) > (-8L)) ^ 0L) <= p_47))), g_52)) != p_47)) <= p_49), l_76[0]))), 7)), l_77)), 0x43E267A5L)) > p_48) || 0L) , g_20)) | l_55)))));
        g_80--;
    }
    (*l_84) = &l_55;
    (*l_85) = ((p_48 == (safe_add_func_uint16_t_u_u(((safe_rshift_func_uint16_t_u_s(((((safe_sub_func_int16_t_s_s(p_48, (((safe_rshift_func_int16_t_s_s(((0x040D4F6636227FA2LL ^ g_80) | (p_47 < ((*l_85) < (((*l_94) = (((((0L && 0x687F7F2BL) ^ (*l_85)) != g_2) || (**l_84)) , &g_52)) != l_97)))), p_49)) , g_79) & 0x590452CFL))) && 0x72B4D3A6L) , g_2) > 0xD34DB645L), 11)) >= (*l_85)), (*l_85)))) & g_59[2]);
    return &g_2;
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    transparent_crc(g_20, "g_20", print_hash_value);
    transparent_crc(g_52, "g_52", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(g_59[i], "g_59[i]", print_hash_value);

    }
    transparent_crc(g_75, "g_75", print_hash_value);
    transparent_crc(g_79, "g_79", print_hash_value);
    transparent_crc(g_80, "g_80", print_hash_value);
    transparent_crc(g_96, "g_96", print_hash_value);
    transparent_crc(g_102.f0, "g_102.f0", print_hash_value);
    transparent_crc(g_102.f1, "g_102.f1", print_hash_value);
    transparent_crc(g_111, "g_111", print_hash_value);
    transparent_crc(g_117, "g_117", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_150[i], "g_150[i]", print_hash_value);

    }
    transparent_crc(g_154.f0, "g_154.f0", print_hash_value);
    transparent_crc(g_154.f1, "g_154.f1", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_155[i], "g_155[i]", print_hash_value);

    }
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_197[i], "g_197[i]", print_hash_value);

    }
    transparent_crc(g_198, "g_198", print_hash_value);
    transparent_crc(g_227, "g_227", print_hash_value);
    transparent_crc(g_282, "g_282", print_hash_value);
    transparent_crc(g_283, "g_283", print_hash_value);
    transparent_crc(g_293, "g_293", print_hash_value);
    transparent_crc(g_304.f0, "g_304.f0", print_hash_value);
    transparent_crc(g_362, "g_362", print_hash_value);
    transparent_crc(g_373, "g_373", print_hash_value);
    transparent_crc(g_414, "g_414", print_hash_value);
    transparent_crc(g_423, "g_423", print_hash_value);
    transparent_crc(g_499, "g_499", print_hash_value);
    transparent_crc(g_500, "g_500", print_hash_value);
    transparent_crc(g_501, "g_501", print_hash_value);
    transparent_crc(g_502, "g_502", print_hash_value);
    transparent_crc(g_503, "g_503", print_hash_value);
    transparent_crc(g_505, "g_505", print_hash_value);
    transparent_crc(g_506, "g_506", print_hash_value);
    transparent_crc(g_507, "g_507", print_hash_value);
    transparent_crc(g_510, "g_510", print_hash_value);
    transparent_crc(g_511, "g_511", print_hash_value);
    transparent_crc(g_611.f0, "g_611.f0", print_hash_value);
    transparent_crc(g_611.f1, "g_611.f1", print_hash_value);
    transparent_crc(g_623, "g_623", print_hash_value);
    transparent_crc(g_643, "g_643", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 6; j++)
        {
            for (k = 0; k < 6; k++)
            {
                transparent_crc(g_689[i][j][k], "g_689[i][j][k]", print_hash_value);

            }
        }
    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            transparent_crc(g_692[i][j], "g_692[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_695, "g_695", print_hash_value);
    transparent_crc(g_734, "g_734", print_hash_value);
    transparent_crc(g_736, "g_736", print_hash_value);
    transparent_crc(g_763, "g_763", print_hash_value);
    transparent_crc(g_794, "g_794", print_hash_value);
    transparent_crc(g_836, "g_836", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(g_870[i], "g_870[i]", print_hash_value);

    }
    transparent_crc(g_911, "g_911", print_hash_value);
    transparent_crc(g_921, "g_921", print_hash_value);
    transparent_crc(g_924, "g_924", print_hash_value);
    transparent_crc(g_925, "g_925", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_926[i], "g_926[i]", print_hash_value);

    }
    transparent_crc(g_927, "g_927", print_hash_value);
    transparent_crc(g_1158, "g_1158", print_hash_value);
    transparent_crc(g_1159, "g_1159", print_hash_value);
    transparent_crc(g_1163, "g_1163", print_hash_value);
    transparent_crc(g_1418, "g_1418", print_hash_value);
    transparent_crc(g_1439, "g_1439", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 4; j++)
        {
            transparent_crc(g_1459[i][j], "g_1459[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_1461, "g_1461", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_1504[i], "g_1504[i]", print_hash_value);

    }
    transparent_crc(g_1566, "g_1566", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
