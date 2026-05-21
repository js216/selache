// SPDX-License-Identifier: MIT
// cctest_csmith_30c7e640.c --- cctest case csmith_30c7e640 (csmith seed 818406976)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0xf0793cef */

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

// Options:   -s 818406976 -o /tmp/csmith_gen_b_pbplzw/csmith.c --concise --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 8 --max-block-size 5 --max-block-depth 4 --max-expr-complexity 8 --max-array-dim 3 --max-array-len-per-dim 7 --max-struct-fields 8 --max-union-fields 5

static long __undefined;


struct S0 {
   int8_t  f0;
};

#pragma pack(push)
#pragma pack(1)
struct S1 {
   const uint32_t  f0;
   struct S0  f1;
   uint64_t  f2;
   int32_t  f3;
   int16_t  f4;
   uint8_t  f5;
   uint32_t  f6;
};
#pragma pack(pop)

union U2 {
   uint8_t  f0;
   uint32_t  f1;
   const struct S0  f2;
   struct S1  f3;
};


static int32_t g_3 = 1L;
static int32_t g_7 = 0xA5273358L;
static int32_t g_8 = 0xC10977A1L;
static int32_t g_13 = 1L;
static int32_t *g_61 = &g_7;
static int32_t **g_60 = &g_61;
static int32_t g_67 = 1L;
static uint64_t g_74 = 0x64A0F0C0ED6D2303LL;
static int8_t g_95[5][4] = {{0L,0x3CL,0x56L,0x56L},{0xB7L,0xB7L,0L,0x56L},{(-8L),0x3CL,(-8L),0L},{(-8L),0L,0L,(-8L)},{0xB7L,0L,0x56L,0L}};
static uint8_t g_96 = 0x22L;
static int16_t g_98 = (-1L);
static int8_t *g_100 = &g_95[2][0];
static int8_t **g_99[6][1][4] = {{{(void*)0,&g_100,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0}},{{&g_100,&g_100,(void*)0,&g_100}},{{&g_100,&g_100,(void*)0,&g_100}},{{(void*)0,&g_100,(void*)0,(void*)0}},{{(void*)0,&g_100,(void*)0,&g_100}}};
static int8_t **g_102 = &g_100;
static int16_t g_117 = 0L;
static uint32_t g_118 = 0xCFBC8947L;
static int32_t g_133 = 0x3CABD61FL;
static int16_t g_134 = 0xD68CL;
static uint32_t g_135[2] = {1UL,1UL};
static int64_t g_139 = 0xCBC2B75F9727A2C1LL;
static struct S0 g_148 = {0x91L};
static union U2 g_150 = {248UL};
static uint16_t g_159 = 0xD0B6L;
static struct S1 g_162[3] = {{0xB5352CA7L,{0x4DL},18446744073709551612UL,-1L,1L,5UL,4294967290UL},{0xB5352CA7L,{0x4DL},18446744073709551612UL,-1L,1L,5UL,4294967290UL},{0xB5352CA7L,{0x4DL},18446744073709551612UL,-1L,1L,5UL,4294967290UL}};
static uint8_t g_201 = 1UL;
static union U2 g_206 = {0x4EL};
static union U2 g_216 = {0xF4L};
static union U2 *g_215 = &g_216;
static int32_t g_242[2] = {0x19EB458DL,0x19EB458DL};
static int32_t g_249 = (-3L);
static uint32_t g_259 = 18446744073709551610UL;
static int32_t g_279[5] = {(-1L),(-1L),(-1L),(-1L),(-1L)};
static uint32_t *g_368[2][7] = {{&g_135[0],&g_135[0],&g_135[0],&g_135[0],&g_135[0],&g_135[0],&g_135[0]},{&g_135[0],&g_135[0],&g_135[0],&g_135[0],&g_135[0],&g_135[0],&g_135[0]}};
static uint32_t **g_367 = &g_368[1][0];
static int32_t g_390 = 0x969621E6L;
static int8_t ** const *g_451[7] = {&g_102,&g_102,&g_102,&g_102,&g_102,&g_102,&g_102};
static int8_t ** const **g_450 = &g_451[2];
static int32_t **g_516[5][2][7] = {{{&g_61,&g_61,&g_61,&g_61,&g_61,&g_61,&g_61},{&g_61,(void*)0,(void*)0,&g_61,&g_61,(void*)0,(void*)0}},{{(void*)0,&g_61,&g_61,&g_61,(void*)0,&g_61,&g_61},{&g_61,&g_61,(void*)0,(void*)0,&g_61,&g_61,(void*)0}},{{&g_61,&g_61,&g_61,&g_61,&g_61,&g_61,&g_61},{&g_61,(void*)0,(void*)0,&g_61,&g_61,(void*)0,(void*)0}},{{(void*)0,&g_61,&g_61,&g_61,(void*)0,&g_61,&g_61},{&g_61,&g_61,(void*)0,(void*)0,&g_61,&g_61,(void*)0}},{{&g_61,&g_61,&g_61,&g_61,&g_61,&g_61,&g_61},{&g_61,(void*)0,(void*)0,&g_61,&g_61,(void*)0,(void*)0}}};
static struct S1 g_546 = {1UL,{-9L},0x06F7607D01DCAB14LL,0xE9748EC6L,0x00D0L,0x7CL,4294967295UL};
static struct S1 *g_545 = &g_546;
static int32_t g_568 = 0x8815894DL;
static uint16_t g_592[5] = {0UL,0UL,0UL,0UL,0UL};
static struct S1 **g_675 = &g_545;
static const uint32_t g_676 = 0UL;
static const struct S0 g_702 = {8L};
static union U2 ***g_752[2] = {(void*)0,(void*)0};
static union U2 *** const * const g_751[5][5][7] = {{{&g_752[0],&g_752[1],&g_752[1],&g_752[1],&g_752[1],&g_752[1],&g_752[1]},{&g_752[0],&g_752[1],&g_752[1],&g_752[1],&g_752[1],&g_752[1],&g_752[0]},{&g_752[1],&g_752[0],(void*)0,(void*)0,&g_752[0],&g_752[1],&g_752[1]},{(void*)0,&g_752[0],&g_752[0],&g_752[1],&g_752[1],(void*)0,&g_752[1]},{&g_752[1],&g_752[0],(void*)0,&g_752[1],&g_752[0],&g_752[1],(void*)0}},{{&g_752[1],&g_752[0],&g_752[1],&g_752[1],&g_752[1],&g_752[1],&g_752[0]},{&g_752[1],&g_752[0],&g_752[1],&g_752[1],&g_752[1],&g_752[1],&g_752[1]},{&g_752[0],&g_752[1],&g_752[1],&g_752[1],&g_752[1],&g_752[1],&g_752[1]},{&g_752[1],&g_752[1],&g_752[1],&g_752[1],(void*)0,(void*)0,&g_752[1]},{&g_752[1],&g_752[1],&g_752[1],&g_752[1],&g_752[1],&g_752[1],(void*)0}},{{(void*)0,&g_752[1],&g_752[1],&g_752[1],&g_752[1],&g_752[0],&g_752[1]},{&g_752[1],&g_752[1],&g_752[1],&g_752[1],&g_752[1],&g_752[1],&g_752[0]},{&g_752[1],&g_752[1],&g_752[1],&g_752[1],&g_752[1],&g_752[0],&g_752[1]},{&g_752[1],&g_752[1],&g_752[0],&g_752[1],&g_752[0],&g_752[1],&g_752[1]},{&g_752[1],&g_752[0],&g_752[0],(void*)0,&g_752[1],&g_752[1],&g_752[1]}},{{&g_752[1],&g_752[1],&g_752[0],(void*)0,&g_752[0],&g_752[1],&g_752[1]},{&g_752[1],&g_752[1],&g_752[1],&g_752[1],&g_752[1],&g_752[1],&g_752[1]},{&g_752[1],(void*)0,&g_752[0],&g_752[1],(void*)0,&g_752[1],&g_752[1]},{&g_752[0],(void*)0,&g_752[1],(void*)0,&g_752[1],(void*)0,&g_752[1]},{&g_752[1],&g_752[1],&g_752[0],&g_752[1],(void*)0,&g_752[0],(void*)0}},{{&g_752[1],&g_752[1],&g_752[0],&g_752[1],&g_752[1],(void*)0,&g_752[0]},{&g_752[1],&g_752[1],&g_752[0],&g_752[0],(void*)0,&g_752[1],(void*)0},{&g_752[1],&g_752[1],&g_752[1],&g_752[1],&g_752[1],&g_752[1],&g_752[1]},{&g_752[0],&g_752[0],&g_752[1],&g_752[1],(void*)0,&g_752[1],&g_752[1]},{&g_752[1],&g_752[0],&g_752[1],&g_752[1],&g_752[1],&g_752[1],&g_752[1]}}};
static const uint8_t g_764 = 0x25L;
static int64_t g_787 = 0x088637B2579E5154LL;
static int64_t g_802 = 0x8CFAB223B77F3AA8LL;
static int8_t ***g_883 = (void*)0;
static int8_t ****g_882 = &g_883;
static const union U2 g_913 = {1UL};
static struct S0 *g_934 = &g_162[1].f1;
static struct S0 **g_933 = &g_934;
static uint16_t *g_978 = &g_592[4];
static uint16_t **g_977 = &g_978;
static int64_t g_993 = (-1L);
static int8_t g_1022[1] = {0x84L};
static int64_t *g_1048 = (void*)0;
static int64_t **g_1047 = &g_1048;



static int64_t  func_1(void);
static int16_t  func_21(uint64_t  p_22, int32_t ** const  p_23, int16_t  p_24);
static int32_t  func_30(uint64_t  p_31, uint64_t  p_32, int32_t * p_33, struct S1  p_34);
static struct S1  func_37(uint32_t  p_38, int32_t ** p_39, int32_t  p_40, uint32_t  p_41, uint32_t  p_42);
static int32_t  func_43(int32_t ** p_44, struct S0  p_45, int32_t  p_46, int32_t  p_47);
static struct S0  func_48(uint16_t  p_49, union U2  p_50, const int32_t * p_51, int32_t * p_52, int32_t ** p_53);
static int32_t * func_68(uint64_t  p_69, int32_t ** p_70, union U2  p_71);
static union U2  func_75(int16_t  p_76, uint64_t * p_77, int32_t  p_78, int32_t  p_79, uint8_t  p_80);




static int64_t  func_1(void)
{ 
    uint64_t l_2[2];
    int32_t *l_6 = (void*)0;
    int32_t l_386[1][7] = {{0x3E307548L,0x3E307548L,0x3E307548L,0x3E307548L,0x3E307548L,0x3E307548L,0x3E307548L}};
    int8_t l_388[3][6];
    union U2 **l_410 = (void*)0;
    struct S0 *l_465 = &g_148;
    uint32_t ***l_488 = &g_367;
    const uint16_t l_504 = 1UL;
    int64_t *l_532 = &g_139;
    uint64_t l_537 = 0x327329E1C7512C76LL;
    uint32_t l_540 = 0x611851A3L;
    int32_t l_541[2][6][4] = {{{0x3AF27243L,0x3AF27243L,0x7B434D94L,0x3AF27243L},{0x3AF27243L,0L,0L,0x3AF27243L},{0L,0x3AF27243L,0L,0L},{0x3AF27243L,0x3AF27243L,0x7B434D94L,0x3AF27243L},{0x3AF27243L,0L,0L,0x3AF27243L},{0L,0x3AF27243L,0L,0L}},{{0x3AF27243L,0x3AF27243L,0x7B434D94L,0x3AF27243L},{0x3AF27243L,0L,0L,0x3AF27243L},{0L,0x3AF27243L,0L,0L},{0x3AF27243L,0x3AF27243L,0x7B434D94L,0x3AF27243L},{0x3AF27243L,0L,0L,0x3AF27243L},{0L,0x3AF27243L,0L,0L}}};
    int16_t l_565 = 0x92BCL;
    int64_t l_567 = 7L;
    int32_t l_598 = 0x5D608728L;
    uint8_t l_609 = 0x12L;
    uint16_t *l_633 = (void*)0;
    uint16_t **l_632[7] = {&l_633,&l_633,&l_633,&l_633,&l_633,&l_633,&l_633};
    uint32_t l_677 = 6UL;
    const uint8_t l_690 = 0x2BL;
    int32_t **l_693 = &l_6;
    int32_t l_709[5];
    int16_t l_712 = 1L;
    uint32_t l_737 = 0x167D9D6CL;
    int8_t l_740 = 0x97L;
    int64_t l_741 = 1L;
    uint8_t l_788 = 1UL;
    uint8_t l_816[3][2][3] = {{{255UL,1UL,1UL},{255UL,8UL,255UL}},{{255UL,255UL,1UL},{0UL,8UL,0UL}},{{255UL,1UL,1UL},{255UL,8UL,255UL}}};
    int32_t ***l_858 = &l_693;
    int32_t l_862 = 0x972CB143L;
    int8_t ***l_881 = &g_102;
    int8_t ****l_880 = &l_881;
    uint16_t l_902 = 65534UL;
    uint16_t l_914 = 1UL;
    uint8_t l_917 = 8UL;
    int8_t l_921 = 5L;
    union U2 ****l_922 = &g_752[1];
    union U2 **l_943 = &g_215;
    uint64_t l_961 = 0x0758A74DB0E8A10DLL;
    int32_t **l_981 = &l_6;
    uint32_t l_1033 = 0x16082002L;
    int32_t *l_1052 = (void*)0;
    int32_t *l_1053 = (void*)0;
    int32_t *l_1054 = &g_8;
    uint64_t l_1055 = 1UL;
    int i, j, k;
    for (i = 0; i < 2; i++)
        l_2[i] = 0UL;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 6; j++)
            l_388[i][j] = 0x12L;
    }
    for (i = 0; i < 5; i++)
        l_709[i] = 0x19A56A52L;
    for (g_3 = 1; (g_3 >= 0); g_3 -= 1)
    { 
        int32_t **l_4 = (void*)0;
        int32_t **l_5[1];
        uint64_t l_399 = 0x70653C73B861F2BELL;
        union U2 *l_409 = &g_150;
        int32_t l_435 = (-8L);
        const uint32_t *l_539 = &g_162[1].f0;
        const uint32_t * const *l_538[5][3][4] = {{{&l_539,(void*)0,&l_539,&l_539},{&l_539,(void*)0,&l_539,&l_539},{&l_539,&l_539,(void*)0,&l_539}},{{(void*)0,&l_539,&l_539,&l_539},{&l_539,&l_539,&l_539,&l_539},{(void*)0,&l_539,&l_539,&l_539}},{{&l_539,&l_539,&l_539,&l_539},{&l_539,&l_539,&l_539,(void*)0},{&l_539,(void*)0,&l_539,&l_539}},{{&l_539,(void*)0,&l_539,&l_539},{&l_539,(void*)0,&l_539,(void*)0},{&l_539,&l_539,(void*)0,&l_539}},{{(void*)0,&l_539,&l_539,&l_539},{&l_539,&l_539,&l_539,&l_539},{&l_539,&l_539,&l_539,&l_539}}};
        struct S0 **l_552 = &l_465;
        int8_t *l_566[1];
        uint16_t *l_569 = (void*)0;
        uint16_t *l_570 = &g_159;
        uint32_t l_571[4][1] = {{0xF8A89E10L},{3UL},{0xF8A89E10L},{3UL}};
        uint16_t l_603 = 65529UL;
        int64_t l_629 = 0x019255C1596F9D59LL;
        uint64_t l_631 = 0x02C49AEC3C3FEB69LL;
        uint8_t l_641 = 0x99L;
        const uint32_t l_660 = 0x98130A9CL;
        int32_t l_678 = (-1L);
        int8_t l_710[4] = {0xB4L,0xB4L,0xB4L,0xB4L};
        uint16_t l_766 = 65535UL;
        uint32_t **l_793 = &g_368[1][5];
        int16_t l_798 = (-1L);
        uint64_t l_799[3][7];
        int i, j, k;
        for (i = 0; i < 1; i++)
            l_5[i] = (void*)0;
        for (i = 0; i < 1; i++)
            l_566[i] = &l_388[2][3];
        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 7; j++)
                l_799[i][j] = 18446744073709551606UL;
        }
        l_6 = (void*)0;
    }
    (*g_61) = g_802;
    return l_1055;
}



static int16_t  func_21(uint64_t  p_22, int32_t ** const  p_23, int16_t  p_24)
{ 
    uint32_t l_35 = 0x93846F26L;
    int32_t *l_36 = &g_13;
    int8_t l_58[3];
    union U2 l_59[3] = {{252UL},{252UL},{252UL}};
    struct S0 *l_147[3][2][5] = {{{&g_148,(void*)0,(void*)0,&l_59[0].f3.f1,&l_59[0].f3.f1},{(void*)0,(void*)0,(void*)0,&g_148,(void*)0}},{{&l_59[0].f3.f1,&g_148,&g_148,&l_59[0].f3.f1,&g_148},{&l_59[0].f3.f1,&l_59[0].f3.f1,(void*)0,(void*)0,&g_148}},{{(void*)0,&g_148,&g_148,&g_148,&g_148},{&g_148,&g_148,(void*)0,&g_148,&g_148}}};
    int32_t l_284 = 6L;
    int32_t l_285 = 0x073444A4L;
    int32_t l_287 = 1L;
    int32_t l_288 = (-6L);
    int32_t l_289 = 0x39258C68L;
    int32_t l_290 = 1L;
    uint32_t l_291 = 18446744073709551613UL;
    int8_t ***l_303 = &g_99[5][0][1];
    const uint32_t *l_370 = &g_118;
    const uint32_t **l_369[1][3];
    int i, j, k;
    for (i = 0; i < 3; i++)
        l_58[i] = 0x26L;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 3; j++)
            l_369[i][j] = &l_370;
    }
    if ((safe_add_func_int32_t_s_s(func_30(p_24, l_35, l_36, func_37((*l_36), &l_36, func_43(&l_36, (g_148 = func_48((safe_mul_func_int8_t_s_s(((safe_lshift_func_uint8_t_u_s(255UL, p_24)) , l_58[2]), 254UL)), l_59[0], (*p_23), &g_8, g_60)), p_24, p_22), (*l_36), g_117)), g_162[1].f5)))
    { 
        int32_t l_265[2][2][4] = {{{0L,4L,0L,4L},{0L,4L,0L,4L}},{{0L,4L,0L,4L},{0L,4L,0L,4L}}};
        uint8_t l_268 = 0x3FL;
        int32_t l_273 = (-5L);
        int32_t l_278[3][1];
        int32_t **l_316 = &g_61;
        union U2 l_344 = {0x8BL};
        union U2 **l_356[1][2][1];
        union U2 ***l_355 = &l_356[0][1][0];
        int i, j, k;
        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 1; j++)
                l_278[i][j] = (-4L);
        }
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 2; j++)
            {
                for (k = 0; k < 1; k++)
                    l_356[i][j][k] = &g_215;
            }
        }
        if ((safe_mul_func_int16_t_s_s(((*l_36) , (*l_36)), ((safe_lshift_func_int16_t_s_s(l_265[1][1][1], (((-7L) && (((0x11BD201EBDC434A2LL && ((safe_lshift_func_int16_t_s_s((*l_36), 9)) != ((*g_100) = l_265[1][1][1]))) >= 3UL) ^ l_268)) >= p_22))) ^ (*l_36)))))
        { 
lbl_306:
            g_242[1] = (safe_mod_func_uint64_t_u_u(p_22, 0xD4CCEA3E293BD1F3LL));
        }
        else
        { 
            int64_t l_280 = (-1L);
            int32_t l_281 = 0x85CDD8E9L;
            int32_t l_282 = (-7L);
            int32_t l_283 = 0x870F3924L;
            int32_t l_286[7][2] = {{0x51F2F3D9L,0x51F2F3D9L},{0L,(-2L)},{0x7D6F02A8L,(-2L)},{0L,0x51F2F3D9L},{0x51F2F3D9L,0L},{(-2L),0x7D6F02A8L},{(-2L),0L}};
            union U2 l_309[5] = {{0x38L},{0x38L},{0x38L},{0x38L},{0x38L}};
            int8_t l_314 = 0L;
            int32_t ***l_315 = (void*)0;
            uint32_t *l_319 = &g_216.f3.f6;
            uint32_t *l_320 = &g_162[1].f6;
            int16_t l_359 = 0x45D1L;
            struct S0 l_364 = {5L};
            const uint32_t ***l_371 = (void*)0;
            const uint32_t ***l_372[1][3][7] = {{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&l_369[0][0],&l_369[0][0],&l_369[0][0],&l_369[0][0],&l_369[0][0],&l_369[0][0],&l_369[0][0]},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}}};
            int16_t *l_377 = &g_98;
            int32_t *l_378 = &l_344.f3.f3;
            int32_t *l_379 = (void*)0;
            int32_t *l_380 = &l_290;
            int i, j, k;
            for (g_150.f1 = 12; (g_150.f1 > 25); g_150.f1++)
            { 
                int32_t *l_274 = &g_67;
                int32_t *l_275 = &g_216.f3.f3;
                int32_t *l_276 = &g_242[1];
                int32_t *l_277[6] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                int8_t ****l_296 = (void*)0;
                int8_t ***l_298 = &g_99[5][0][1];
                int8_t ****l_297 = &l_298;
                int i;
                ++l_291;
                (*l_276) |= (safe_lshift_func_int16_t_s_s((((*l_297) = &g_99[5][0][1]) != ((safe_lshift_func_int16_t_s_s(p_22, (safe_mul_func_uint8_t_u_u(1UL, l_278[0][0])))) , l_303)), 4));
                if (((*l_276) = ((*l_36) , ((*l_275) = (safe_rshift_func_uint16_t_u_u(p_24, 8))))))
                { 
                    if (g_259)
                        goto lbl_306;
                    (*l_276) ^= 0xBFFCE8DCL;
                }
                else
                { 
                    (*p_23) = (void*)0;
                    if ((*g_61))
                        break;
                }
            }
            if ((((*l_320) &= (safe_mul_func_int8_t_s_s(((*g_100) = (((l_309[0] , (safe_rshift_func_uint16_t_u_s((safe_lshift_func_int8_t_s_u(l_314, 0)), 14))) , (*l_36)) | ((l_316 = &l_36) == &g_61))), (g_279[4] <= (((safe_add_func_uint16_t_u_u(65535UL, g_135[1])) == g_13) > g_117))))) && g_133))
            { 
                int8_t l_321 = 8L;
                return l_321;
            }
            else
            { 
                int8_t l_329 = 0x1EL;
                int32_t l_330[6] = {6L,6L,6L,6L,6L,6L};
                int32_t *l_363 = &g_242[0];
                int i;
                if ((safe_add_func_int32_t_s_s((safe_rshift_func_int16_t_s_u((+(**l_316)), (safe_div_func_int64_t_s_s(1L, (g_7 || p_22))))), l_329)))
                { 
                    uint32_t **l_334 = &l_320;
                    uint32_t **l_335 = &l_319;
                    int64_t *l_345 = &l_280;
                    int32_t l_346[1];
                    int i;
                    for (i = 0; i < 1; i++)
                        l_346[i] = 0L;
                    l_330[1] ^= (*g_61);
                    (*l_316) = ((*g_60) = func_68((safe_add_func_uint16_t_u_u((((!g_162[1].f0) || 0L) <= ((((*l_334) = &l_35) == ((*l_335) = (void*)0)) , (safe_sub_func_int32_t_s_s(((safe_mul_func_uint16_t_u_u((**l_316), (safe_add_func_uint8_t_u_u((((*l_320)++) == 0x978A3B0EL), (**l_316))))) < 1L), 0x7FBF128CL)))), g_206.f0)), l_316, l_344));
                    l_346[0] = (((*l_345) = 5L) ^ (g_279[4] & 0x05CAA28AL));
                    l_278[2][0] |= (3L < (0x41L > (*g_100)));
                    l_284 &= ((safe_lshift_func_uint8_t_u_u(((safe_add_func_uint32_t_u_u(g_242[1], ((p_24 | (safe_sub_func_int8_t_s_s(p_24, (l_329 ^ p_24)))) , ((l_309[0] , (safe_lshift_func_int8_t_s_u((l_355 == (void*)0), p_24))) & 1UL)))) | 0x27619C6F29274E30LL), g_162[1].f2)) > 255UL);
                }
                else
                { 
                    return p_22;
                }
                for (g_201 = 19; (g_201 >= 41); g_201++)
                { 
                    return l_359;
                }
                (*l_363) = (~(safe_div_func_int16_t_s_s((p_22 != g_216.f0), g_150.f0)));
            }
            (*l_380) &= (g_162[1].f1 , (l_364 , (safe_rshift_func_uint8_t_u_u(((g_367 == (l_369[0][1] = l_369[0][0])) <= ((*g_61) ^ (safe_sub_func_int16_t_s_s(((*l_377) = (safe_lshift_func_uint8_t_u_u((((**g_367) = (**g_367)) >= 0xD3D90BD9L), 6))), p_24)))), (**l_316)))));
        }
    }
    else
    { 
        return g_135[0];
    }
    return g_96;
}



static int32_t  func_30(uint64_t  p_31, uint64_t  p_32, int32_t * p_33, struct S1  p_34)
{ 
    (*g_60) = p_33;
    return (*p_33);
}



static struct S1  func_37(uint32_t  p_38, int32_t ** p_39, int32_t  p_40, uint32_t  p_41, uint32_t  p_42)
{ 
    uint32_t l_157 = 18446744073709551615UL;
    uint16_t *l_158 = &g_159;
    struct S1 l_165[3] = {{6UL,{-1L},0x567A964C9D428488LL,0xCC42B59BL,1L,0xA8L,1UL},{6UL,{-1L},0x567A964C9D428488LL,0xCC42B59BL,1L,0xA8L,1UL},{6UL,{-1L},0x567A964C9D428488LL,0xCC42B59BL,1L,0xA8L,1UL}};
    int32_t *l_168 = &g_13;
    int16_t l_188 = (-1L);
    union U2 *l_204 = &g_150;
    int8_t *l_223[3][3][1] = {{{&g_162[1].f1.f0},{&l_165[2].f1.f0},{&l_165[2].f1.f0}},{{&g_162[1].f1.f0},{&l_165[2].f1.f0},{&l_165[2].f1.f0}},{{&g_162[1].f1.f0},{&l_165[2].f1.f0},{&l_165[2].f1.f0}}};
    int32_t l_241 = 2L;
    int32_t l_243[6][3][7] = {{{0x33D034B4L,1L,0x80103624L,0x2A826569L,(-1L),0L,1L},{0x14CE292EL,7L,0x4F7FA5D5L,0x2A826569L,0x2A826569L,0x4F7FA5D5L,7L},{9L,7L,0x80103624L,(-1L),0x60E03093L,(-2L),7L}},{{0x14CE292EL,1L,(-2L),0x63E53FBDL,0x60E03093L,0x4F7FA5D5L,(-5L)},{0xC927E87AL,0xE07A8E80L,0x63E53FBDL,1L,0x14CE292EL,0x2A826569L,0xE07A8E80L},{0xC927E87AL,(-5L),0x60E03093L,0x14CE292EL,9L,0x2A826569L,(-5L)}},{{(-1L),(-1L),(-1L),0x14CE292EL,0x14CE292EL,(-1L),(-1L)},{0x410F041EL,(-1L),0x60E03093L,1L,0x33D034B4L,0x63E53FBDL,(-1L)},{(-1L),(-5L),0x63E53FBDL,(-9L),0x33D034B4L,(-1L),(-5L)}},{{0xC927E87AL,0xE07A8E80L,0x63E53FBDL,1L,0x14CE292EL,0x2A826569L,0xE07A8E80L},{0xC927E87AL,(-5L),0x60E03093L,0x14CE292EL,9L,0x2A826569L,(-5L)},{(-1L),(-1L),(-1L),0x14CE292EL,0x14CE292EL,(-1L),(-1L)}},{{0x410F041EL,(-1L),0x60E03093L,1L,0x33D034B4L,0x63E53FBDL,(-1L)},{(-1L),(-5L),0x63E53FBDL,(-9L),0x33D034B4L,(-1L),(-5L)},{0xC927E87AL,0xE07A8E80L,0x63E53FBDL,1L,0x14CE292EL,0x2A826569L,0xE07A8E80L}},{{0xC927E87AL,(-5L),0x60E03093L,0x14CE292EL,9L,0x2A826569L,(-5L)},{(-1L),(-1L),(-1L),0x14CE292EL,0x14CE292EL,(-1L),(-1L)},{0x410F041EL,(-1L),0x60E03093L,1L,0x33D034B4L,0x63E53FBDL,(-1L)}}};
    uint16_t l_255 = 1UL;
    int i, j, k;
    p_40 &= ((safe_lshift_func_int8_t_s_u((l_157 & ((--(*l_158)) != (g_162[1] , (safe_mul_func_int16_t_s_s(g_162[1].f6, (l_165[2] , 3UL)))))), g_139)) > ((-3L) > 0xCC09L));
    for (g_67 = 4; (g_67 >= (-13)); --g_67)
    { 
        int32_t *l_169 = (void*)0;
        const int32_t l_189 = (-1L);
        int32_t l_197 = 0xF70AFF55L;
        struct S1 l_217 = {2UL,{-3L},18446744073709551615UL,0x1E180988L,0x09DCL,7UL,0xC61CCE0BL};
        union U2 *l_222 = &g_206;
        int32_t l_225[7][1];
        int i, j;
        for (i = 0; i < 7; i++)
        {
            for (j = 0; j < 1; j++)
                l_225[i][j] = (-4L);
        }
        l_169 = ((*g_60) = l_168);
        for (g_150.f3.f4 = 0; (g_150.f3.f4 > 3); ++g_150.f3.f4)
        { 
            int32_t *l_174 = &g_8;
            int16_t *l_187 = &l_165[2].f4;
            union U2 l_190[6][4] = {{{0x75L},{0x14L},{0x14L},{0x75L}},{{0xCDL},{0x14L},{255UL},{0x14L}},{{0x14L},{246UL},{255UL},{255UL}},{{0xCDL},{0xCDL},{0x14L},{255UL}},{{0x75L},{246UL},{0x75L},{0x14L}},{{0x75L},{0x14L},{0x14L},{0x75L}}};
            int i, j;
            for (g_133 = 0; (g_133 > (-17)); g_133--)
            { 
                (*g_60) = l_174;
            }
            (*g_60) = func_68((*l_168), p_39, func_75(((safe_div_func_uint16_t_u_u((p_41 || (safe_lshift_func_int16_t_s_s(((safe_div_func_uint8_t_u_u((safe_mod_func_uint32_t_u_u(((*l_169) > (((((safe_sub_func_int64_t_s_s((safe_mod_func_uint8_t_u_u(((249UL != (-8L)) | ((*l_187) &= g_162[1].f6)), l_188)), (*l_174))) <= l_189) , l_190[5][2]) , (*l_169)) <= 4294967294UL)), 1L)), p_40)) <= g_7), (*l_168)))), (*l_169))) , (*l_168)), &g_74, (*g_61), p_42, (*l_168)));
        }
        for (g_150.f3.f6 = (-21); (g_150.f3.f6 == 42); ++g_150.f3.f6)
        { 
            uint8_t l_193 = 0x37L;
            union U2 *l_205 = &g_206;
            int64_t l_240 = 0xBE62DB80F26FC960LL;
            int32_t l_244 = (-5L);
            int32_t l_245 = (-7L);
            int32_t l_250 = (-3L);
            int32_t l_251 = 6L;
            int32_t l_252 = 0xC23CCA66L;
            int32_t l_253 = 5L;
            int32_t l_254[1][5][3] = {{{0xD3D53B09L,0xDEDF7951L,0xD3D53B09L},{0xF1C5D373L,0xF1C5D373L,0xF1C5D373L},{0xD3D53B09L,0xDEDF7951L,0xD3D53B09L},{0xF1C5D373L,0xF1C5D373L,0xF1C5D373L},{0xD3D53B09L,0xDEDF7951L,0xD3D53B09L}}};
            int32_t *l_260 = &l_253;
            int i, j, k;
            (*g_60) = (*g_60);
            l_193 = (*l_169);
            for (g_133 = 0; (g_133 >= 15); g_133++)
            { 
                uint32_t l_196 = 7UL;
                int32_t l_210 = 0x87556249L;
                struct S1 l_211 = {0UL,{0x74L},0x5F2194A6FF7F1617LL,0xB4B0E1CBL,8L,0xEAL,9UL};
                union U2 **l_214[1][7][3] = {{{&l_205,&l_205,&l_205},{&l_205,&l_205,&l_205},{&l_205,&l_205,&l_205},{&l_205,&l_205,&l_205},{&l_205,&l_205,&l_205},{&l_205,&l_205,&l_205},{&l_205,&l_205,&l_205}}};
                const uint32_t *l_224 = (void*)0;
                int32_t l_246 = 0x1939D09DL;
                int32_t l_247 = 0L;
                int32_t l_248[6][4] = {{0x1255D904L,1L,0x1255D904L,1L},{0x1255D904L,1L,0x1255D904L,1L},{0x1255D904L,1L,0x1255D904L,1L},{0x1255D904L,1L,0x1255D904L,1L},{0x1255D904L,1L,0x1255D904L,1L},{0x1255D904L,1L,0x1255D904L,1L}};
                int32_t *l_258 = &l_247;
                int i, j, k;
                if ((**p_39))
                { 
                    int32_t *l_198 = &g_162[1].f3;
                    int32_t *l_199 = &l_197;
                    int32_t *l_200[1][4][4] = {{{&g_162[1].f3,&g_162[1].f3,&g_162[1].f3,&g_162[1].f3},{&g_162[1].f3,&g_162[1].f3,&g_162[1].f3,&g_162[1].f3},{&g_162[1].f3,&g_162[1].f3,&g_162[1].f3,&g_162[1].f3},{&g_162[1].f3,&g_162[1].f3,&g_162[1].f3,&g_162[1].f3}}};
                    int i, j, k;
                    (*g_60) = func_68(l_196, &g_61, g_150);
                    --g_201;
                    l_205 = l_204;
                }
                else
                { 
                    union U2 **l_209 = (void*)0;
                    union U2 ***l_208 = &l_209;
                    union U2 ****l_207 = &l_208;
                    (*l_207) = (void*)0;
                    l_210 = l_193;
                    return l_211;
                }
                if (((safe_add_func_uint64_t_u_u((&g_118 != (void*)0), (((((g_215 = (void*)0) == (l_217 , (((safe_mul_func_uint16_t_u_u((((*g_100) |= p_38) ^ (((safe_mul_func_int16_t_s_s((*l_169), ((0UL != g_201) || 0xF5EF4C97AD9788A3LL))) , (**g_60)) & (**p_39))), p_40)) , g_162[1]) , l_222))) , (*l_168)) , (void*)0) == l_223[0][1][0]))) >= (*l_168)))
                { 
                    l_211.f3 = (l_224 == (void*)0);
                }
                else
                { 
                    int32_t *l_226 = &l_210;
                    int32_t *l_227 = &g_162[1].f3;
                    int32_t *l_228 = &l_165[2].f3;
                    int32_t *l_229 = &l_225[1][0];
                    int32_t *l_230 = &g_206.f3.f3;
                    int32_t *l_231 = &l_197;
                    int32_t *l_232 = &l_225[6][0];
                    int32_t *l_233 = &g_162[1].f3;
                    int32_t *l_234 = &l_165[2].f3;
                    int32_t *l_235 = &l_225[6][0];
                    int32_t *l_236 = (void*)0;
                    int32_t *l_237 = &g_162[1].f3;
                    int32_t *l_238 = &g_216.f3.f3;
                    int32_t *l_239[7][5][4] = {{{&g_162[1].f3,&l_165[2].f3,&l_217.f3,&l_217.f3},{&g_13,&g_13,&g_13,&l_165[2].f3},{&l_165[2].f3,&g_162[1].f3,&g_13,&g_162[1].f3},{&g_13,&g_13,&l_217.f3,&g_13},{&g_162[1].f3,&g_13,&g_13,&g_162[1].f3}},{{&g_13,&g_162[1].f3,&g_13,&l_165[2].f3},{&g_13,&g_13,&g_13,&l_217.f3},{&g_162[1].f3,&l_165[2].f3,&l_217.f3,&l_217.f3},{&g_13,&g_13,&g_13,&l_165[2].f3},{&l_165[2].f3,&g_162[1].f3,&g_13,&g_162[1].f3}},{{&g_13,&g_13,&l_217.f3,&g_13},{&g_162[1].f3,&g_13,&g_13,&g_162[1].f3},{&g_13,&g_162[1].f3,&g_13,&l_165[2].f3},{&g_13,&g_13,&g_13,&l_217.f3},{&g_162[1].f3,&l_165[2].f3,&l_217.f3,&l_217.f3}},{{&g_13,&g_13,&g_13,&l_165[2].f3},{&l_165[2].f3,&g_162[1].f3,&g_13,&g_162[1].f3},{&g_13,&g_13,&l_217.f3,&g_13},{&g_162[1].f3,&g_13,&g_13,&g_162[1].f3},{&g_13,&g_162[1].f3,&g_13,&l_165[2].f3}},{{&g_13,&g_13,&g_13,&l_217.f3},{&g_162[1].f3,&l_165[2].f3,&l_217.f3,&l_217.f3},{&g_13,&g_13,&g_13,&l_165[2].f3},{&l_165[2].f3,&g_162[1].f3,&g_13,&g_162[1].f3},{&g_13,&g_13,&l_217.f3,&g_13}},{{&g_162[1].f3,&g_13,&g_13,&g_162[1].f3},{&g_13,&g_162[1].f3,&g_13,&l_165[2].f3},{&g_13,&g_13,&g_13,&l_217.f3},{&g_162[1].f3,&l_165[2].f3,&l_217.f3,&l_217.f3},{&g_13,&g_13,&g_13,&l_165[2].f3}},{{&l_165[2].f3,&g_162[1].f3,&g_13,&g_162[1].f3},{&g_13,&g_13,&l_217.f3,&g_13},{&g_162[1].f3,&g_13,&g_13,&g_162[1].f3},{&g_13,&g_162[1].f3,&g_13,&l_165[2].f3},{&g_13,&g_13,&g_13,&l_217.f3}}};
                    int i, j, k;
                    if (l_225[1][0])
                        break;
                    if ((**g_60))
                        break;
                    ++l_255;
                }
                l_258 = (*g_60);
            }
            (*l_260) &= (g_259 , (*g_61));
        }
        if ((*l_169))
            break;
    }
    return g_162[1];
}



static int32_t  func_43(int32_t ** p_44, struct S0  p_45, int32_t  p_46, int32_t  p_47)
{ 
    union U2 *l_149 = &g_150;
    union U2 **l_151 = &l_149;
    int32_t *l_152 = &g_7;
    (*l_151) = l_149;
    (*g_60) = l_152;
    return (**p_44);
}



static struct S0  func_48(uint16_t  p_49, union U2  p_50, const int32_t * p_51, int32_t * p_52, int32_t ** p_53)
{ 
    int32_t l_65 = 0L;
    int32_t *l_66 = &g_67;
    uint64_t *l_73[3][4][4] = {{{&g_74,(void*)0,&g_74,&g_74},{&g_74,&g_74,&g_74,(void*)0},{(void*)0,&g_74,&g_74,&g_74},{&g_74,&g_74,&g_74,&g_74}},{{&g_74,&g_74,(void*)0,&g_74},{&g_74,&g_74,&g_74,(void*)0},{&g_74,&g_74,&g_74,&g_74},{&g_74,(void*)0,&g_74,&g_74}},{{&g_74,&g_74,&g_74,(void*)0},{&g_74,&g_74,&g_74,&g_74},{&g_74,&g_74,&g_74,&g_74},{&g_74,&g_74,&g_74,&g_74}}};
    int8_t *l_94 = &g_95[0][3];
    int32_t l_97 = 0x95AE89E6L;
    struct S0 l_146 = {1L};
    int i, j, k;
    for (p_50.f3.f5 = 0; (p_50.f3.f5 != 6); p_50.f3.f5 = safe_add_func_uint16_t_u_u(p_50.f3.f5, 6))
    { 
        struct S0 l_64 = {0x58L};
        return l_64;
    }
    (*l_66) = (l_65 = 0L);
    (*g_60) = func_68(((*l_66) |= (g_74 |= (!p_49))), &l_66, func_75((safe_mul_func_int8_t_s_s((!(safe_add_func_int8_t_s_s(((safe_div_func_uint64_t_u_u(((safe_mod_func_uint64_t_u_u((g_96 = (l_65 &= (p_50.f3.f2 = (((*l_94) = (safe_mod_func_int16_t_s_s((&g_61 != &g_61), (safe_div_func_int64_t_s_s(g_3, ((((1UL ^ g_7) , p_50.f0) , g_3) || (**p_53))))))) < p_49)))), l_97)) > (**g_60)), p_49)) && 4UL), l_97))), g_13)), l_73[0][0][2], g_98, l_97, g_13));
    return l_146;
}



static int32_t * func_68(uint64_t  p_69, int32_t ** p_70, union U2  p_71)
{ 
    int64_t l_127 = 0x072BDA1E5BAC9057LL;
    int32_t l_140 = (-3L);
    for (p_69 = 0; (p_69 > 26); p_69 = safe_add_func_uint16_t_u_u(p_69, 4))
    { 
        int32_t l_111 = 0x92DDE99EL;
        struct S1 l_113 = {4294967295UL,{1L},0xA3EDB7DE593F29F9LL,0L,0x69E5L,1UL,0x5A2DC96FL};
        int32_t l_131 = 1L;
        int32_t l_132 = 0x85BF1637L;
    }
    return (*g_60);
}



static union U2  func_75(int16_t  p_76, uint64_t * p_77, int32_t  p_78, int32_t  p_79, uint8_t  p_80)
{ 
    int8_t ***l_101[2];
    union U2 l_106[3] = {{0x0DL},{0x0DL},{0x0DL}};
    int i;
    for (i = 0; i < 2; i++)
        l_101[i] = &g_99[5][0][1];
lbl_105:
    g_102 = (g_99[5][0][1] = (g_96 , g_99[5][0][1]));
    for (p_78 = 0; (p_78 > (-28)); p_78 = safe_sub_func_uint8_t_u_u(p_78, 1))
    { 
        if (p_78)
            goto lbl_105;
    }
    return l_106[1];
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_3, "g_3", print_hash_value);
    transparent_crc(g_7, "g_7", print_hash_value);
    transparent_crc(g_8, "g_8", print_hash_value);
    transparent_crc(g_13, "g_13", print_hash_value);
    transparent_crc(g_67, "g_67", print_hash_value);
    transparent_crc(g_74, "g_74", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 4; j++)
        {
            transparent_crc(g_95[i][j], "g_95[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_96, "g_96", print_hash_value);
    transparent_crc(g_98, "g_98", print_hash_value);
    transparent_crc(g_117, "g_117", print_hash_value);
    transparent_crc(g_118, "g_118", print_hash_value);
    transparent_crc(g_133, "g_133", print_hash_value);
    transparent_crc(g_134, "g_134", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_135[i], "g_135[i]", print_hash_value);

    }
    transparent_crc(g_139, "g_139", print_hash_value);
    transparent_crc(g_148.f0, "g_148.f0", print_hash_value);
    transparent_crc(g_150.f0, "g_150.f0", print_hash_value);
    transparent_crc(g_159, "g_159", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_162[i].f0, "g_162[i].f0", print_hash_value);
        transparent_crc(g_162[i].f1.f0, "g_162[i].f1.f0", print_hash_value);
        transparent_crc(g_162[i].f2, "g_162[i].f2", print_hash_value);
        transparent_crc(g_162[i].f3, "g_162[i].f3", print_hash_value);
        transparent_crc(g_162[i].f4, "g_162[i].f4", print_hash_value);
        transparent_crc(g_162[i].f5, "g_162[i].f5", print_hash_value);
        transparent_crc(g_162[i].f6, "g_162[i].f6", print_hash_value);

    }
    transparent_crc(g_201, "g_201", print_hash_value);
    transparent_crc(g_206.f0, "g_206.f0", print_hash_value);
    transparent_crc(g_216.f0, "g_216.f0", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_242[i], "g_242[i]", print_hash_value);

    }
    transparent_crc(g_249, "g_249", print_hash_value);
    transparent_crc(g_259, "g_259", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_279[i], "g_279[i]", print_hash_value);

    }
    transparent_crc(g_390, "g_390", print_hash_value);
    transparent_crc(g_546.f0, "g_546.f0", print_hash_value);
    transparent_crc(g_546.f1.f0, "g_546.f1.f0", print_hash_value);
    transparent_crc(g_546.f2, "g_546.f2", print_hash_value);
    transparent_crc(g_546.f3, "g_546.f3", print_hash_value);
    transparent_crc(g_546.f4, "g_546.f4", print_hash_value);
    transparent_crc(g_546.f5, "g_546.f5", print_hash_value);
    transparent_crc(g_546.f6, "g_546.f6", print_hash_value);
    transparent_crc(g_568, "g_568", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_592[i], "g_592[i]", print_hash_value);

    }
    transparent_crc(g_676, "g_676", print_hash_value);
    transparent_crc(g_702.f0, "g_702.f0", print_hash_value);
    transparent_crc(g_764, "g_764", print_hash_value);
    transparent_crc(g_787, "g_787", print_hash_value);
    transparent_crc(g_802, "g_802", print_hash_value);
    transparent_crc(g_913.f0, "g_913.f0", print_hash_value);
    transparent_crc(g_993, "g_993", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_1022[i], "g_1022[i]", print_hash_value);

    }
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
