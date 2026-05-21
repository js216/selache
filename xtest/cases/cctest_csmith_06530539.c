// SPDX-License-Identifier: MIT
// cctest_csmith_06530539.c --- cctest case csmith_06530539 (csmith seed 106104121)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x5348a8cb */

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

// Options:   -s 106104121 -o /tmp/csmith_gen_ezaslmz4/csmith.c --concise --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 8 --max-block-size 5 --max-block-depth 4 --max-expr-complexity 8 --max-array-dim 3 --max-array-len-per-dim 7 --max-struct-fields 8 --max-union-fields 5

static long __undefined;


struct S0 {
   int32_t  f0;
   const int32_t  f1;
};

#pragma pack(push)
#pragma pack(1)
struct S1 {
   int64_t  f0;
   uint32_t  f1;
   uint16_t  f2;
   const int16_t  f3;
   const int32_t  f4;
   int32_t  f5;
   int32_t  f6;
};
#pragma pack(pop)

union U2 {
   int32_t  f0;
   uint8_t  f1;
   int16_t  f2;
   const int32_t  f3;
};

union U3 {
   uint16_t  f0;
   int8_t  f1;
   uint64_t  f2;
   int16_t  f3;
};


static uint32_t g_5 = 1UL;
static uint8_t g_38 = 0x5FL;
static uint32_t g_42 = 1UL;
static int32_t g_50 = (-1L);
static int32_t g_59 = 0x03393D3BL;
static int8_t g_63[3] = {7L,7L,7L};
static uint32_t g_64[5] = {0xA6DD7547L,0xA6DD7547L,0xA6DD7547L,0xA6DD7547L,0xA6DD7547L};
static int64_t g_91 = 0x00C683D18CDA4751LL;
static int64_t g_97 = 0L;
static int64_t g_99 = (-2L);
static uint32_t *g_109 = &g_42;
static uint32_t **g_108[2][7] = {{&g_109,&g_109,&g_109,&g_109,&g_109,&g_109,&g_109},{&g_109,(void*)0,&g_109,(void*)0,&g_109,(void*)0,&g_109}};
static uint32_t ***g_107 = &g_108[0][3];
static const uint32_t **g_110 = (void*)0;
static int32_t g_172[1][2][7] = {{{(-1L),0x6666BE2FL,0x6666BE2FL,(-1L),0xA8DDDF17L,(-1L),0x6666BE2FL},{0xEBDF0E56L,0xEBDF0E56L,0x6666BE2FL,0xD0833143L,0x6666BE2FL,0xEBDF0E56L,0xEBDF0E56L}}};
static int16_t g_188 = 0L;
static uint64_t g_189[3][7][5] = {{{4UL,0x6A7F400C7566D79CLL,0x4FA95B6DD3C1BD19LL,5UL,18446744073709551612UL},{18446744073709551612UL,5UL,0x4FA95B6DD3C1BD19LL,0x6A7F400C7566D79CLL,4UL},{5UL,0x64AAA90A817FA558LL,1UL,0x64AAA90A817FA558LL,5UL},{18446744073709551615UL,0x64AAA90A817FA558LL,0xCB1B8CC65BC01747LL,18446744073709551606UL,5UL},{5UL,18446744073709551606UL,0xCB1B8CC65BC01747LL,0x64AAA90A817FA558LL,18446744073709551615UL},{5UL,0x64AAA90A817FA558LL,1UL,0x64AAA90A817FA558LL,5UL},{18446744073709551615UL,0x64AAA90A817FA558LL,0xCB1B8CC65BC01747LL,18446744073709551606UL,5UL}},{{5UL,18446744073709551606UL,0xCB1B8CC65BC01747LL,0x64AAA90A817FA558LL,18446744073709551615UL},{5UL,0x64AAA90A817FA558LL,1UL,0x64AAA90A817FA558LL,5UL},{18446744073709551615UL,0x64AAA90A817FA558LL,0xCB1B8CC65BC01747LL,18446744073709551606UL,5UL},{5UL,18446744073709551606UL,0xCB1B8CC65BC01747LL,0x64AAA90A817FA558LL,18446744073709551615UL},{5UL,0x64AAA90A817FA558LL,1UL,0x64AAA90A817FA558LL,5UL},{18446744073709551615UL,0x64AAA90A817FA558LL,0xCB1B8CC65BC01747LL,18446744073709551606UL,5UL},{5UL,18446744073709551606UL,0xCB1B8CC65BC01747LL,0x64AAA90A817FA558LL,18446744073709551615UL}},{{5UL,0x64AAA90A817FA558LL,1UL,0x64AAA90A817FA558LL,5UL},{18446744073709551615UL,0x64AAA90A817FA558LL,0xCB1B8CC65BC01747LL,18446744073709551606UL,5UL},{5UL,18446744073709551606UL,0xCB1B8CC65BC01747LL,0x64AAA90A817FA558LL,18446744073709551615UL},{5UL,0x64AAA90A817FA558LL,1UL,0x64AAA90A817FA558LL,5UL},{18446744073709551615UL,0x64AAA90A817FA558LL,0xCB1B8CC65BC01747LL,18446744073709551606UL,5UL},{5UL,18446744073709551606UL,0xCB1B8CC65BC01747LL,0x64AAA90A817FA558LL,18446744073709551615UL},{5UL,0x64AAA90A817FA558LL,1UL,0x64AAA90A817FA558LL,5UL}}};
static uint32_t g_192 = 0UL;
static union U3 g_221 = {0UL};
static int32_t g_248 = 1L;
static uint32_t g_257 = 0xD3B7CBDBL;
static uint8_t *g_265 = &g_38;
static uint8_t **g_264 = &g_265;
static int32_t *g_348 = &g_59;
static struct S0 g_352 = {0xFFE85CD8L,0x943AF525L};
static uint8_t g_360 = 0x81L;
static uint32_t g_380 = 1UL;
static struct S1 g_381 = {1L,0x8DD21E31L,0x4DFFL,0x5379L,0x3524D7A8L,0L,1L};
static int8_t g_411 = 1L;
static int16_t g_417 = 0x7DBEL;
static uint32_t g_418 = 0UL;
static int32_t **g_489 = (void*)0;
static int32_t ***g_488 = &g_489;
static uint32_t ***g_521 = &g_108[0][3];
static union U2 g_559 = {0xF9E8D903L};
static union U2 *g_558 = &g_559;
static union U2 g_562[5] = {{-2L},{-2L},{-2L},{-2L},{-2L}};
static int16_t g_568 = 1L;
static struct S0 g_597 = {-7L,-1L};
static struct S0 *g_596 = &g_597;
static uint16_t *g_603 = (void*)0;
static int32_t g_612[3] = {1L,1L,1L};
static int32_t g_613 = 0xB0BD9E3EL;
static uint8_t g_619 = 0x11L;
static int32_t g_710 = 2L;
static int32_t g_712 = 0x39626313L;
static int16_t g_713[3][2] = {{(-2L),(-2L)},{(-2L),(-2L)},{(-2L),(-2L)}};
static int16_t g_714[7][6][5] = {{{0x6D08L,0x9F59L,0L,0xF09BL,0x9F59L},{0x6D08L,0L,0xC02CL,0xF09BL,0L},{(-9L),0L,0L,0L,0L},{0x6D08L,0x9F59L,0L,0xF09BL,0x9F59L},{0x6D08L,0L,0xC02CL,0xF09BL,0L},{(-9L),0L,0L,0L,0L}},{{0x6D08L,0x9F59L,0L,0xF09BL,0x9F59L},{0x6D08L,0L,0xC02CL,0xF09BL,0L},{(-9L),0L,0L,0L,0L},{0x6D08L,0x9F59L,0L,0xF09BL,0x9F59L},{0x6D08L,0L,0xC02CL,0xF09BL,0L},{(-9L),0L,0L,0L,0L}},{{0x6D08L,0x9F59L,0L,0xF09BL,0x9F59L},{0x6D08L,0L,0xC02CL,0xF09BL,0L},{(-9L),0L,0L,0L,0L},{0x6D08L,0x9F59L,0L,0xF09BL,0x9F59L},{0x6D08L,0L,0L,0x9F59L,(-1L)},{(-2L),(-1L),0L,0L,(-1L)}},{{7L,0xD39EL,0L,0x9F59L,0xD39EL},{7L,(-1L),0L,0x9F59L,(-1L)},{(-2L),(-1L),0L,0L,(-1L)},{7L,0xD39EL,0L,0x9F59L,0xD39EL},{7L,(-1L),0L,0x9F59L,(-1L)},{(-2L),(-1L),0L,0L,(-1L)}},{{7L,0xD39EL,0L,0x9F59L,0xD39EL},{7L,(-1L),0L,0x9F59L,(-1L)},{(-2L),(-1L),0L,0L,(-1L)},{7L,0xD39EL,0L,0x9F59L,0xD39EL},{7L,(-1L),0L,0x9F59L,(-1L)},{(-2L),(-1L),0L,0L,(-1L)}},{{7L,0xD39EL,0L,0x9F59L,0xD39EL},{7L,(-1L),0L,0x9F59L,(-1L)},{(-2L),(-1L),0L,0L,(-1L)},{7L,0xD39EL,0L,0x9F59L,0xD39EL},{7L,(-1L),0L,0x9F59L,(-1L)},{(-2L),(-1L),0L,0L,(-1L)}},{{7L,0xD39EL,0L,0x9F59L,0xD39EL},{7L,(-1L),0L,0x9F59L,(-1L)},{(-2L),(-1L),0L,0L,(-1L)},{7L,0xD39EL,0L,0x9F59L,0xD39EL},{7L,(-1L),0L,0x9F59L,(-1L)},{(-2L),(-1L),0L,0L,(-1L)}}};
static uint32_t g_715 = 0xF24F9B03L;
static uint32_t g_782 = 0UL;
static int32_t ****g_793 = &g_488;
static int32_t *****g_792 = &g_793;
static uint64_t *g_798[4] = {&g_189[1][6][4],&g_189[1][6][4],&g_189[1][6][4],&g_189[1][6][4]};
static uint64_t **g_797 = &g_798[0];
static uint64_t ***g_796 = &g_797;
static int32_t g_808 = (-6L);
static uint32_t g_809 = 0x8A77B1D8L;
static uint32_t *g_838 = (void*)0;
static uint8_t ***g_860 = &g_264;
static uint8_t ****g_859 = &g_860;
static int32_t g_933 = (-1L);
static int32_t g_935 = 9L;
static uint32_t g_938 = 18446744073709551612UL;
static uint8_t g_951[6][6][6] = {{{255UL,0x6DL,255UL,0x21L,0xE4L,0x21L},{255UL,0x6DL,255UL,0x21L,0xE4L,0x21L},{255UL,0x6DL,255UL,0x21L,0xE4L,0x21L},{255UL,0x6DL,255UL,0x21L,0xE4L,0x21L},{255UL,0x6DL,255UL,0x21L,0xE4L,0x21L},{255UL,0x6DL,255UL,0x21L,0xE4L,0x21L}},{{255UL,0x6DL,255UL,0x21L,0xE4L,0x21L},{255UL,0x6DL,255UL,0x21L,0xE4L,0x21L},{255UL,0x6DL,255UL,0x21L,0xE4L,0x21L},{255UL,0x6DL,255UL,0x21L,255UL,0x36L},{0xC9L,0x21L,0xC9L,0x36L,255UL,0x36L},{0xC9L,0x21L,0xC9L,0x36L,255UL,0x36L}},{{0xC9L,0x21L,0xC9L,0x36L,255UL,0x36L},{0xC9L,0x21L,0xC9L,0x36L,255UL,0x36L},{0xC9L,0x21L,0xC9L,0x36L,255UL,0x36L},{0xC9L,0x21L,0xC9L,0x36L,255UL,0x36L},{0xC9L,0x21L,0xC9L,0x36L,255UL,0x36L},{0xC9L,0x21L,0xC9L,0x36L,255UL,0x36L}},{{0xC9L,0x21L,0xC9L,0x36L,255UL,0x36L},{0xC9L,0x21L,0xC9L,0x36L,255UL,0x36L},{0xC9L,0x21L,0xC9L,0x36L,255UL,0x36L},{0xC9L,0x21L,0xC9L,0x36L,255UL,0x36L},{0xC9L,0x21L,0xC9L,0x36L,255UL,0x36L},{0xC9L,0x21L,0xC9L,0x36L,255UL,0x36L}},{{0xC9L,0x21L,0xC9L,0x36L,255UL,0x36L},{0xC9L,0x21L,0xC9L,0x36L,255UL,0x36L},{0xC9L,0x21L,0xC9L,0x36L,255UL,0x36L},{0xC9L,0x21L,0xC9L,0x36L,255UL,0x36L},{0xC9L,0x21L,0xC9L,0x36L,255UL,0x36L},{0xC9L,0x21L,0xC9L,0x36L,255UL,0x36L}},{{0xC9L,0x21L,0xC9L,0x36L,255UL,0x36L},{0xC9L,0x21L,0xC9L,0x36L,255UL,0x36L},{0xC9L,0x21L,0xC9L,0x36L,255UL,0x36L},{0xC9L,0x21L,0xC9L,0x36L,255UL,0x36L},{0xC9L,0x21L,0xC9L,0x36L,255UL,0x36L},{0xC9L,0x21L,0xC9L,0x36L,255UL,0x36L}}};
static union U2 *** const g_973 = (void*)0;
static const int32_t g_1023 = (-6L);
static const int32_t *g_1022 = &g_1023;
static int32_t *g_1103[1] = {&g_59};
static int8_t g_1120 = 0x1CL;
static struct S1 g_1207 = {0x12AF4E2B96164437LL,0UL,0xB869L,0L,0L,-1L,-1L};
static union U2 g_1227 = {1L};
static int32_t *g_1235 = &g_613;
static const uint64_t g_1280 = 18446744073709551611UL;
static struct S1 g_1287 = {-1L,0x0660BDE9L,0x0D1FL,-1L,0L,0xD5AE476CL,0x8FE1109DL};
static struct S1 *g_1286 = &g_1287;
static int8_t *g_1296[3][6] = {{(void*)0,(void*)0,&g_63[2],(void*)0,(void*)0,&g_63[2]},{(void*)0,(void*)0,&g_63[2],(void*)0,(void*)0,&g_63[2]},{(void*)0,(void*)0,&g_63[2],(void*)0,(void*)0,&g_63[2]}};
static int8_t **g_1295[7][5] = {{&g_1296[0][1],&g_1296[0][1],&g_1296[0][1],&g_1296[0][1],&g_1296[0][1]},{&g_1296[0][1],&g_1296[0][1],&g_1296[0][1],&g_1296[0][1],&g_1296[0][1]},{&g_1296[0][1],&g_1296[0][1],&g_1296[0][1],&g_1296[0][1],&g_1296[0][1]},{&g_1296[0][1],&g_1296[0][1],&g_1296[0][1],&g_1296[0][1],&g_1296[0][1]},{&g_1296[0][1],&g_1296[0][1],&g_1296[0][1],&g_1296[0][1],&g_1296[0][1]},{&g_1296[0][1],&g_1296[0][1],&g_1296[0][1],&g_1296[0][1],&g_1296[0][1]},{&g_1296[0][1],&g_1296[0][1],&g_1296[0][1],&g_1296[0][1],&g_1296[0][1]}};
static union U2 **g_1306 = &g_558;
static union U2 ***g_1305 = &g_1306;
static uint8_t g_1329 = 0x9DL;
static int16_t *g_1354 = &g_221.f3;
static int16_t **g_1353[7] = {&g_1354,&g_1354,&g_1354,&g_1354,&g_1354,&g_1354,&g_1354};
static uint8_t g_1454[4] = {7UL,7UL,7UL,7UL};
static const struct S1 g_1540 = {5L,1UL,0x2E53L,0xCCA3L,0x6F3AFEA4L,1L,5L};
static const struct S1 g_1544 = {0x7D148CE91A962C42LL,18446744073709551615UL,0x217EL,0xD62FL,-1L,-7L,0xE23C2B07L};
static const struct S1 *g_1543[1] = {&g_1544};
static uint32_t **g_1570 = &g_838;
static const uint64_t *g_1597 = (void*)0;
static const uint64_t **g_1596[7] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
static const uint64_t ***g_1595 = &g_1596[1];
static const uint64_t ****g_1594 = &g_1595;
static const uint64_t *****g_1593 = &g_1594;
static const int32_t **g_1690 = (void*)0;
static const int32_t ***g_1689[1] = {&g_1690};
static const int32_t ****g_1688[6][1][2] = {{{&g_1689[0],&g_1689[0]}},{{&g_1689[0],&g_1689[0]}},{{&g_1689[0],&g_1689[0]}},{{&g_1689[0],&g_1689[0]}},{{&g_1689[0],&g_1689[0]}},{{&g_1689[0],&g_1689[0]}}};
static int32_t g_1764 = 0x19E85185L;
static union U3 *g_1773[4] = {&g_221,&g_221,&g_221,&g_221};
static uint64_t g_1776[7] = {18446744073709551613UL,0x71AC53057E1F925CLL,18446744073709551613UL,18446744073709551613UL,0x71AC53057E1F925CLL,18446744073709551613UL,18446744073709551613UL};
static uint64_t g_1785 = 8UL;



static union U2  func_1(void);
static const struct S1  func_6(union U2  p_7, uint8_t  p_8, struct S1  p_9, int32_t  p_10, int64_t  p_11);
static union U2  func_12(union U3  p_13, const int32_t  p_14, const int16_t  p_15, uint32_t  p_16);
static const int32_t  func_24(uint64_t  p_25, struct S1  p_26, int64_t  p_27);
static struct S1  func_28(struct S1  p_29, uint32_t  p_30);
static uint8_t  func_67(uint16_t  p_68, uint16_t  p_69);
static uint8_t  func_76(int32_t * p_77, uint32_t ** p_78, uint32_t * p_79);
static uint32_t * func_83(uint16_t  p_84, uint32_t  p_85, uint32_t *** p_86, const uint32_t ** p_87);




static union U2  func_1(void)
{ 
    uint16_t l_4 = 0UL;
    uint8_t l_18[2][6][3] = {{{0xDAL,0x14L,0xAEL},{0x14L,255UL,251UL},{0xDAL,255UL,1UL},{0x73L,0x14L,251UL},{0x73L,0x73L,0xAEL},{0xDAL,0x14L,0xAEL}},{{0x14L,255UL,251UL},{0xDAL,255UL,1UL},{0x73L,0x14L,251UL},{0x73L,0x73L,0xAEL},{0xDAL,0x14L,0xAEL},{0x14L,255UL,251UL}}};
    int32_t *l_1554 = &g_710;
    union U3 l_1562 = {7UL};
    uint32_t **l_1569 = &g_838;
    struct S1 *l_1585[6] = {&g_381,&g_381,&g_381,&g_381,&g_381,&g_381};
    union U2 l_1587 = {0L};
    struct S1 l_1685 = {8L,4UL,65535UL,0x8729L,-8L,0x70676A80L,9L};
    const int32_t ****l_1691 = &g_1689[0];
    struct S0 *l_1692 = &g_597;
    uint32_t ***l_1697 = &g_108[0][3];
    int i, j, k;
    if ((safe_div_func_uint32_t_u_u((l_4 , l_4), l_4)))
    { 
        union U3 l_17 = {1UL};
        struct S0 l_1557 = {-3L,-5L};
        int32_t l_1586 = (-1L);
        int32_t l_1628 = 1L;
        int32_t l_1638 = 1L;
        uint16_t *l_1652 = &g_1287.f2;
        int32_t **l_1662[1];
        union U2 l_1663 = {0L};
        int i;
        for (i = 0; i < 1; i++)
            l_1662[i] = &l_1554;
        g_5 = 0xA5B7D8CFL;
        if ((((func_6(func_12(l_17, g_5, l_17.f0, l_18[0][2][0]), (**g_264), (*g_1286), l_17.f0, g_808) , g_91) , l_17.f0) & (*g_348)))
        { 
            int32_t **l_1555 = (void*)0;
            int32_t **l_1556 = &g_1103[0];
            int64_t *l_1571 = &g_99;
            (*l_1556) = l_1554;
            (*g_1235) = ((**l_1556) , 0xC10525FCL);
            if (((l_1557 , (safe_lshift_func_uint16_t_u_u((safe_mod_func_int64_t_s_s(0x698EA3634DF957F6LL, ((*l_1571) |= (l_1562 , (((safe_lshift_func_int8_t_s_u(((safe_mod_func_uint64_t_u_u((*l_1554), (safe_mul_func_uint8_t_u_u((l_1569 == (g_1570 = &g_838)), ((**l_1556) > g_562[1].f3))))) < (**g_264)), (*l_1554))) && 0xA3L) , 0x8063C6E944AC4A42LL))))), 5))) > (**l_1556)))
            { 
                uint8_t ***l_1575 = &g_264;
                uint8_t ****l_1574 = &l_1575;
                int32_t l_1576 = 0xADFEBD5FL;
                struct S1 l_1577 = {-1L,1UL,0UL,8L,0x8848D009L,0x3737AB4FL,0x85135CA5L};
                l_1586 = (((*g_859) == ((*l_1574) = (void*)0)) == (l_1576 >= (((((((((l_1577 , (safe_rshift_func_uint16_t_u_s(((*l_1554) > ((safe_rshift_func_uint8_t_u_s(((((safe_rshift_func_uint8_t_u_s((~(1UL ^ (l_1585[5] == &l_1577))), (**l_1556))) & 0x2D27L) > 6L) >= g_1544.f2), 0)) , 0xCA8EFA92L)), (**l_1556)))) || (-10L)) | (*l_1554)) , (*g_596)) , (void*)0) != (void*)0) & (**l_1556)) <= g_418) ^ (*l_1554))));
            }
            else
            { 
                return l_1587;
            }
        }
        else
        { 
            uint16_t l_1606 = 0x0479L;
            int32_t l_1611 = 0xA0C3EAA7L;
            uint32_t l_1613 = 4294967295UL;
            int64_t * const l_1618 = &g_97;
            int64_t l_1647[3][4] = {{0xBEE8E38039286EDDLL,0xBEE8E38039286EDDLL,0x6F00D97A570AB311LL,0xBEE8E38039286EDDLL},{0xBEE8E38039286EDDLL,6L,6L,0xBEE8E38039286EDDLL},{6L,0xBEE8E38039286EDDLL,6L,6L}};
            int i, j;
            if ((*l_1554))
            { 
                const uint64_t *l_1592 = &g_1280;
                const uint64_t **l_1591 = &l_1592;
                const uint64_t ***l_1590[4][7] = {{&l_1591,(void*)0,&l_1591,(void*)0,(void*)0,&l_1591,(void*)0},{(void*)0,&l_1591,&l_1591,&l_1591,&l_1591,&l_1591,&l_1591},{&l_1591,&l_1591,(void*)0,&l_1591,&l_1591,&l_1591,&l_1591},{&l_1591,(void*)0,&l_1591,&l_1591,(void*)0,&l_1591,&l_1591}};
                const uint64_t ****l_1589[2][5][2] = {{{&l_1590[2][5],&l_1590[2][5]},{&l_1590[2][5],&l_1590[2][5]},{&l_1590[2][5],&l_1590[2][5]},{&l_1590[2][5],&l_1590[2][5]},{&l_1590[2][5],&l_1590[2][5]}},{{&l_1590[2][5],&l_1590[2][5]},{&l_1590[2][5],&l_1590[2][5]},{&l_1590[2][5],&l_1590[2][5]},{&l_1590[2][5],&l_1590[2][5]},{&l_1590[2][5],&l_1590[2][5]}}};
                const uint64_t *****l_1588[5][1] = {{&l_1589[0][2][1]},{&l_1589[0][2][1]},{&l_1589[0][2][1]},{&l_1589[0][2][1]},{&l_1589[0][2][1]}};
                int32_t *l_1603 = &g_1287.f5;
                int32_t *l_1604 = &g_1287.f5;
                int32_t *l_1605[7][6] = {{&g_50,(void*)0,(void*)0,(void*)0,(void*)0,&g_50},{&g_381.f5,&g_50,&g_59,(void*)0,&g_59,&g_50},{&g_59,&g_381.f5,(void*)0,&g_562[1].f0,&g_562[1].f0,(void*)0},{&g_59,&g_59,&g_59,(void*)0,&g_50,(void*)0},{(void*)0,&g_1207.f6,(void*)0,&g_562[1].f0,&g_59,&g_59},{&g_381.f5,(void*)0,(void*)0,&g_381.f5,&g_1207.f6,(void*)0},{(void*)0,&g_381.f5,&g_59,&g_381.f5,(void*)0,&g_562[1].f0}};
                uint16_t l_1621 = 0x07C9L;
                int i, j, k;
                g_1593 = l_1588[2][0];
                for (g_715 = 16; (g_715 <= 26); g_715 = safe_add_func_uint16_t_u_u(g_715, 2))
                { 
                    uint32_t l_1600 = 0x6D438C9BL;
                    l_1600--;
                }
                ++l_1606;
                for (l_1562.f0 = 26; (l_1562.f0 >= 17); l_1562.f0 = safe_sub_func_uint32_t_u_u(l_1562.f0, 7))
                { 
                    int16_t l_1612[6] = {0xF301L,1L,0xF301L,0xF301L,1L,0xF301L};
                    int64_t *l_1617 = &g_97;
                    struct S1 **l_1622 = &g_1286;
                    int i;
                    l_1613++;
                    (*l_1603) ^= (0xAD34L | (*l_1554));
                    (*g_1235) |= (((*l_1617) = (l_17.f3 >= (safe_unary_minus_func_uint32_t_u(((*g_109) &= (l_1612[1] > l_1612[3])))))) , ((((((l_1612[0] == ((*g_265) = (((l_1618 == (void*)0) != (safe_lshift_func_int8_t_s_s((*l_1554), (*l_1554)))) != l_1621))) & l_1606) , l_1622) != (void*)0) && 0xFDBCL) > l_1612[1]));
                    (*l_1604) = (*l_1603);
                    if (l_1612[2])
                        continue;
                }
            }
            else
            { 
                uint32_t l_1643 = 0UL;
                int32_t *l_1646 = &g_381.f6;
                int32_t l_1654 = 0x6136D6AFL;
                for (g_1287.f5 = 0; (g_1287.f5 <= (-18)); g_1287.f5 = safe_sub_func_int64_t_s_s(g_1287.f5, 9))
                { 
                    int32_t *l_1625 = &g_50;
                    int32_t l_1626 = 0xC83630AAL;
                    int32_t *l_1627 = &g_710;
                    int32_t *l_1629 = &g_381.f6;
                    int32_t *l_1630 = (void*)0;
                    int32_t *l_1631 = (void*)0;
                    int32_t *l_1632 = &g_1207.f5;
                    int32_t *l_1633 = &g_59;
                    int32_t *l_1634 = &l_1586;
                    int32_t *l_1635 = (void*)0;
                    int32_t *l_1636 = &l_1587.f0;
                    int32_t *l_1637 = &g_59;
                    int32_t *l_1639 = &g_935;
                    int32_t *l_1640 = &g_381.f5;
                    int32_t *l_1641 = (void*)0;
                    int32_t *l_1642[7] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                    uint16_t *l_1649 = &g_221.f0;
                    uint16_t **l_1650 = &l_1649;
                    uint16_t **l_1651 = (void*)0;
                    int64_t *l_1653 = &g_91;
                    uint16_t *l_1655[2][5] = {{&g_1207.f2,&g_1207.f2,&l_1562.f0,&l_1562.f0,&l_1562.f0},{&g_1207.f2,&g_1207.f2,&l_1562.f0,&l_1562.f0,&l_1562.f0}};
                    int i, j;
                    --l_1643;
                    l_1646 = (void*)0;
                    (*l_1633) = (l_1611 = (((l_1647[1][1] >= ((((+((*l_1632) ^= (l_1654 = (((l_1557.f0 | (((*l_1618) = (255UL < (((*l_1650) = l_1649) == (l_1652 = g_1354)))) == ((*l_1653) = (l_1557.f0 , (-2L))))) ^ (*l_1554)) & l_1557.f0)))) && 0L) ^ 65535UL) & l_17.f1)) == (*g_1235)) <= l_1557.f1));
                    if (l_1643)
                        break;
                }
                for (g_619 = (-5); (g_619 < 49); g_619 = safe_add_func_uint32_t_u_u(g_619, 3))
                { 
                    uint32_t l_1658 = 0x22F792CDL;
                    int32_t **l_1661[7][4][2] = {{{&g_1103[0],&g_1103[0]},{&g_1103[0],&g_1103[0]},{&g_348,&l_1554},{&g_1103[0],&l_1554}},{{&g_348,&g_1103[0]},{&g_1103[0],&g_1103[0]},{&g_1103[0],&g_1103[0]},{&g_348,&l_1554}},{{&g_1103[0],&l_1554},{&g_348,&g_1103[0]},{&g_1103[0],&g_1103[0]},{&g_1103[0],&g_1103[0]}},{{&g_348,&l_1554},{&g_1103[0],&l_1554},{&g_348,&g_1103[0]},{&g_1103[0],&g_1103[0]}},{{&g_1103[0],&g_1103[0]},{&g_348,&l_1554},{&g_1103[0],&l_1554},{&g_348,&g_1103[0]}},{{&g_1103[0],&g_1103[0]},{&g_1103[0],&g_1103[0]},{&g_348,&l_1554},{&g_1103[0],&l_1554}},{{&g_348,&g_1103[0]},{&g_1103[0],&g_1103[0]},{&g_1103[0],&g_1103[0]},{&g_348,&l_1554}}};
                    int i, j, k;
                    ++l_1658;
                    if (l_17.f1)
                        continue;
                    (*l_1554) = ((*g_348) = (((((***g_792) = l_1661[1][0][1]) != l_1662[0]) > g_612[2]) , (0xF56BL & 0xBE6CL)));
                    if ((*g_1235))
                        continue;
                    if ((*g_1235))
                        continue;
                }
            }
        }
        return l_1663;
    }
    else
    { 
        uint8_t l_1670 = 0x91L;
        int64_t *l_1673[7] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
        int32_t l_1674[2];
        int32_t **l_1683 = &g_1103[0];
        int32_t *l_1684[5];
        int i;
        for (i = 0; i < 2; i++)
            l_1674[i] = (-1L);
        for (i = 0; i < 5; i++)
            l_1684[i] = &g_562[1].f0;
        (*g_348) = (safe_mul_func_int16_t_s_s((safe_lshift_func_uint16_t_u_u(((((l_1670 <= (((*l_1683) = (((((safe_lshift_func_int8_t_s_s((l_1670 < g_1329), 4)) | (l_1674[0] = (*l_1554))) & (safe_lshift_func_uint8_t_u_s(0x7AL, (safe_add_func_int32_t_s_s((safe_rshift_func_uint8_t_u_u(((l_1670 < ((((safe_add_func_uint64_t_u_u(((0x77FE29C33EB0C3A7LL > (***g_796)) | 0x81CA59E34D27AEE6LL), 1L)) == 0x8AEC3036E97ED0B7LL) && l_1670) && (**g_264))) ^ l_1670), (****g_859))), 0x90FE1D8CL))))) & l_1670) , (void*)0)) != l_1684[0])) , g_1287.f4) >= 4UL) >= (*l_1554)), g_1287.f2)), (*g_1354)));
        (*g_1235) |= 0xB4BE4B1BL;
        (*l_1683) = (void*)0;
        (*l_1683) = (void*)0;
    }
    (*l_1554) |= (l_1685 , 2L);
    for (g_1207.f5 = 0; (g_1207.f5 <= 2); g_1207.f5 += 1)
    { 
        const uint32_t *l_1699 = &g_64[(g_1207.f5 + 1)];
        const uint32_t **l_1698[2];
        int32_t *l_1700 = &g_1287.f6;
        uint64_t ***l_1707[6][7][4] = {{{&g_797,&g_797,&g_797,&g_797},{&g_797,&g_797,&g_797,&g_797},{&g_797,&g_797,&g_797,&g_797},{&g_797,&g_797,&g_797,&g_797},{&g_797,&g_797,&g_797,&g_797},{&g_797,&g_797,&g_797,&g_797},{&g_797,&g_797,&g_797,&g_797}},{{&g_797,&g_797,&g_797,&g_797},{&g_797,&g_797,&g_797,&g_797},{&g_797,&g_797,&g_797,&g_797},{&g_797,&g_797,&g_797,&g_797},{&g_797,&g_797,(void*)0,&g_797},{&g_797,&g_797,&g_797,&g_797},{&g_797,&g_797,&g_797,&g_797}},{{&g_797,&g_797,&g_797,&g_797},{&g_797,&g_797,&g_797,&g_797},{&g_797,&g_797,&g_797,&g_797},{&g_797,&g_797,&g_797,&g_797},{&g_797,&g_797,&g_797,&g_797},{&g_797,&g_797,&g_797,&g_797},{&g_797,&g_797,(void*)0,&g_797}},{{&g_797,&g_797,&g_797,&g_797},{&g_797,&g_797,&g_797,&g_797},{&g_797,&g_797,&g_797,&g_797},{&g_797,&g_797,(void*)0,&g_797},{(void*)0,&g_797,(void*)0,(void*)0},{&g_797,&g_797,&g_797,&g_797},{&g_797,&g_797,&g_797,&g_797}},{{&g_797,&g_797,&g_797,&g_797},{&g_797,&g_797,&g_797,&g_797},{&g_797,&g_797,&g_797,&g_797},{&g_797,&g_797,(void*)0,(void*)0},{&g_797,&g_797,&g_797,&g_797},{&g_797,(void*)0,&g_797,&g_797},{(void*)0,&g_797,&g_797,&g_797}},{{&g_797,&g_797,&g_797,&g_797},{&g_797,(void*)0,&g_797,&g_797},{&g_797,&g_797,(void*)0,(void*)0},{&g_797,&g_797,&g_797,&g_797},{&g_797,&g_797,&g_797,&g_797},{&g_797,&g_797,&g_797,&g_797},{&g_797,&g_797,&g_797,&g_797}}};
        union U2 **l_1734 = &g_558;
        int8_t l_1798 = 3L;
        int i, j, k;
        for (i = 0; i < 2; i++)
            l_1698[i] = &l_1699;
        if (g_64[(g_1207.f5 + 1)])
            break;
        (*l_1554) = (safe_div_func_int8_t_s_s(((((((*g_792) = (*g_792)) != (l_1691 = g_1688[0][0][1])) <= (l_1692 != &g_352)) & (safe_div_func_int64_t_s_s((safe_unary_minus_func_uint64_t_u((((*g_1286) , (!0x0B5F54E3L)) , (**g_797)))), (***g_796)))) == 250UL), g_64[(g_1207.f5 + 1)]));
        l_1700 = func_83(g_64[(g_1207.f5 + 1)], g_64[(g_1207.f5 + 1)], l_1697, l_1698[1]);
        for (l_1562.f0 = 0; (l_1562.f0 <= 1); l_1562.f0 += 1)
        { 
            uint32_t * const l_1703 = &g_64[0];
            uint64_t ***l_1705[4] = {&g_797,&g_797,&g_797,&g_797};
            int32_t l_1711[1][1];
            int32_t l_1744 = 0xC67A4F30L;
            uint32_t ***l_1749 = &g_108[1][5];
            int16_t **l_1762 = (void*)0;
            const int32_t *l_1766 = &g_559.f0;
            union U3 *l_1771 = &g_221;
            union U2 l_1799[5] = {{-6L},{-6L},{-6L},{-6L},{-6L}};
            int i, j;
            for (i = 0; i < 1; i++)
            {
                for (j = 0; j < 1; j++)
                    l_1711[i][j] = (-1L);
            }
            for (g_568 = 0; (g_568 <= 4); g_568 += 1)
            { 
                int32_t l_1710[7][6][3] = {{{(-4L),(-4L),0x663261ECL},{0xCA89F2E5L,0x779B1D6FL,0x09304BECL},{(-1L),0xABCBD597L,8L},{0xD5DDCBF7L,0xBA09510EL,0xD5DDCBF7L},{(-4L),(-1L),8L},{0x37DE793AL,1L,0x09304BECL}},{{0x017C8607L,0x663261ECL,0x663261ECL},{8L,0xBA09510EL,0L},{0x017C8607L,1L,(-7L)},{0x37DE793AL,0x779B1D6FL,0x154EE3ECL},{(-4L),1L,0x663261ECL},{0xD5DDCBF7L,0x779B1D6FL,8L}},{{(-1L),1L,8L},{0xCA89F2E5L,0xBA09510EL,0xCA89F2E5L},{(-4L),0x663261ECL,8L},{7L,1L,8L},{0x017C8607L,(-1L),0x663261ECL},{0x09304BECL,0xBA09510EL,0x154EE3ECL}},{{0x017C8607L,0xABCBD597L,(-7L)},{7L,0x779B1D6FL,0L},{(-4L),(-4L),0x663261ECL},{0xCA89F2E5L,0x779B1D6FL,0x09304BECL},{(-1L),0xABCBD597L,8L},{0xD5DDCBF7L,0xBA09510EL,0xD5DDCBF7L}},{{(-4L),(-1L),8L},{0x37DE793AL,1L,0x09304BECL},{0x017C8607L,0x663261ECL,0x663261ECL},{8L,0xBA09510EL,0L},{0x017C8607L,1L,(-7L)},{0x37DE793AL,0x779B1D6FL,0x154EE3ECL}},{{(-4L),1L,0x663261ECL},{0xD5DDCBF7L,0x779B1D6FL,8L},{0x017C8607L,(-4L),0xABCBD597L},{0x154EE3ECL,1L,0x154EE3ECL},{(-1L),(-7L),0xABCBD597L},{8L,0x779B1D6FL,0xD5DDCBF7L}},{{0xE440D88AL,0x017C8607L,(-7L)},{0xCA89F2E5L,1L,0x13F1FCB2L},{0xE440D88AL,1L,8L},{8L,0xA8C4B736L,0x8C9B7668L},{(-1L),(-1L),(-7L)},{0x154EE3ECL,0xA8C4B736L,0xCA89F2E5L}}};
                int32_t *l_1727 = (void*)0;
                int32_t l_1743[4] = {8L,8L,8L,8L};
                int i, j, k;
                for (g_50 = 0; (g_50 <= 1); g_50 += 1)
                { 
                    uint32_t *l_1704 = &g_42;
                    uint64_t ****l_1706[6];
                    uint8_t ****l_1718[4] = {&g_860,&g_860,&g_860,&g_860};
                    int64_t *l_1726 = &g_97;
                    int i, j, k;
                    for (i = 0; i < 6; i++)
                        l_1706[i] = &l_1705[1];
                    (*g_348) |= ((l_1710[6][3][1] = ((safe_mul_func_int8_t_s_s((((l_18[l_1562.f0][(g_1207.f5 + 1)][g_1207.f5] = (l_1703 == l_1704)) , (*g_1594)) == (l_1707[2][4][0] = (g_796 = l_1705[1]))), 0x1BL)) && ((((*g_1354) = (((g_64[g_568] ^= (safe_rshift_func_int8_t_s_u(0x9CL, 6))) == ((g_189[l_1562.f0][(l_1562.f0 + 5)][(g_50 + 2)] <= g_189[(g_50 + 1)][(g_50 + 1)][(l_1562.f0 + 3)]) < l_18[l_1562.f0][(g_50 + 4)][g_50])) , 8L)) > l_18[l_1562.f0][(g_50 + 1)][(l_1562.f0 + 1)]) ^ (*g_109)))) || l_1711[0][0]);
                    (*g_1235) |= ((*g_348) = ((*l_1554) = (safe_div_func_uint8_t_u_u((***g_860), (safe_add_func_int32_t_s_s((safe_div_func_int16_t_s_s(((*g_1354) = ((void*)0 == l_1718[2])), (0UL | ((*l_1726) = (safe_mod_func_int16_t_s_s((~((safe_sub_func_int32_t_s_s(l_1711[0][0], (safe_add_func_uint64_t_u_u(l_18[l_1562.f0][(g_50 + 1)][(l_1562.f0 + 1)], ((((&l_1711[0][0] != (void*)0) | 0xE560L) && (-10L)) == l_1710[6][3][1]))))) != 0x94L)), 0xE031L)))))), l_1710[3][3][2]))))));
                    l_1727 = (void*)0;
                }
                for (l_1685.f5 = 0; (l_1685.f5 <= 2); l_1685.f5 += 1)
                { 
                    uint16_t l_1741[3];
                    int8_t *l_1742[4][5] = {{&g_411,&g_63[0],&g_63[0],&g_411,&g_411},{&g_63[1],&g_63[0],&g_63[1],&g_63[0],&g_63[1]},{&g_411,&g_411,&g_63[0],&g_63[0],&g_411},{&g_411,&g_63[0],&g_411,&g_63[0],&g_411}};
                    int i, j, k;
                    for (i = 0; i < 3; i++)
                        l_1741[i] = 0x2930L;
                    (*l_1700) = ((safe_add_func_uint8_t_u_u((safe_div_func_uint32_t_u_u(((((*g_1354) = g_189[l_1562.f0][(g_1207.f5 + 2)][(l_1562.f0 + 3)]) >= (((safe_mul_func_uint8_t_u_u(0xEBL, (((l_1734 = ((*g_1305) = (void*)0)) != &g_558) , ((safe_lshift_func_uint16_t_u_s((safe_lshift_func_int8_t_s_s(((safe_mul_func_int8_t_s_s(l_18[l_1562.f0][l_1562.f0][g_1207.f5], ((*l_1554) = l_1741[0]))) != (0x18DCL ^ l_1711[0][0])), 6)), 6)) | 0xE571633977E93B38LL)))) ^ l_1743[0]) & l_1744)) < l_1711[0][0]), l_1741[0])), l_1741[1])) , 0xFBEDDD42L);
                }
            }
            l_1700 = func_83((((l_1744 || l_1711[0][0]) & (*g_109)) <= (safe_mod_func_int32_t_s_s(((*l_1692) , 0x4B0846DFL), ((g_64[g_1207.f5]--) | (g_381.f5 , ((*l_1554) = (&g_1594 != (void*)0))))))), l_1711[0][0], l_1749, g_110);
            for (g_221.f3 = 0; (g_221.f3 <= 1); g_221.f3 += 1)
            { 
                union U2 **l_1763 = &g_558;
                int16_t *l_1765 = &g_713[0][0];
                int16_t ****l_1768 = (void*)0;
                int16_t ***l_1770 = &l_1762;
                int16_t ****l_1769 = &l_1770;
                int i, j, k;
                if ((safe_lshift_func_int16_t_s_u(((*l_1765) = (safe_mul_func_int16_t_s_s((safe_rshift_func_uint8_t_u_s((safe_div_func_uint8_t_u_u(g_189[g_1207.f5][(l_1562.f0 + 5)][(l_1562.f0 + 1)], (-1L))), 3)), (((((safe_mod_func_int64_t_s_s((g_97 = (safe_add_func_uint64_t_u_u((((l_1762 == &g_1354) || (((*g_521) = (*l_1697)) == (void*)0)) | (((*g_1305) != l_1763) ^ l_18[l_1562.f0][(g_221.f3 + 2)][g_1207.f5])), g_1764))), l_1711[0][0])) ^ 0x2B30F989CED5F224LL) & (-1L)) <= (*l_1700)) != 0x9886208EEBE33495LL)))), g_712)))
                { 
                    (*l_1554) = ((*l_1700) , l_1711[0][0]);
                }
                else
                { 
                    union U2 l_1767 = {0x8B78A7B8L};
                    l_1766 = (void*)0;
                    return l_1767;
                }
                if (l_18[l_1562.f0][(g_221.f3 + 2)][g_1207.f5])
                    break;
                if ((*l_1766))
                    continue;
                (*l_1769) = &l_1762;
            }
            for (l_4 = 0; (l_4 <= 1); l_4 += 1)
            { 
                int32_t *l_1774 = &l_1685.f5;
                int32_t *l_1775[4] = {&g_1287.f6,&g_1287.f6,&g_1287.f6,&g_1287.f6};
                int8_t *l_1795 = (void*)0;
                int8_t *l_1796 = (void*)0;
                int8_t *l_1797 = &g_63[0];
                int i, j, k;
                for (g_380 = 0; (g_380 <= 2); g_380 += 1)
                { 
                    union U3 **l_1772[6][1] = {{&l_1771},{&l_1771},{&l_1771},{&l_1771},{&l_1771},{&l_1771}};
                    int i, j;
                    g_1773[1] = l_1771;
                }
                g_1776[4]--;
                l_1700 = func_83(((safe_sub_func_int8_t_s_s((((**g_264) = (((l_1700 != ((*l_1766) , func_83((safe_div_func_int8_t_s_s((safe_lshift_func_int8_t_s_s(g_1785, 4)), ((l_18[l_1562.f0][g_1207.f5][l_1562.f0] = (!(((void*)0 == l_1700) != (safe_rshift_func_int16_t_s_s((safe_mod_func_uint8_t_u_u(246UL, ((*l_1700) = ((*l_1797) = (safe_lshift_func_int8_t_s_s((((((*g_109) = ((((safe_lshift_func_uint16_t_u_u(1UL, 15)) , (*g_1570)) != (void*)0) , 4294967294UL)) && (*l_1766)) != (-1L)) , 1L), (*l_1766))))))), 7))))) && (*l_1700)))), l_1798, &g_108[0][3], g_110))) & (*l_1554)) || g_562[1].f3)) == 0x8EL), (*l_1766))) == 0xEFC5E778L), g_1785, l_1749, &l_1699);
                for (g_50 = 0; (g_50 >= 0); g_50 -= 1)
                { 
                    int i, j;
                    if (l_1711[g_50][g_50])
                        break;
                    return l_1799[1];
                }
                if ((*g_1235))
                    continue;
            }
        }
    }
    return (*g_558);
}



static const struct S1  func_6(union U2  p_7, uint8_t  p_8, struct S1  p_9, int32_t  p_10, int64_t  p_11)
{ 
    const struct S1 *l_1539[6] = {&g_1540,&g_1540,&g_1540,&g_1540,&g_1540,&g_1540};
    const struct S1 **l_1538 = &l_1539[1];
    const struct S1 *l_1542[5] = {&g_1540,&g_1540,&g_1540,&g_1540,&g_1540};
    const struct S1 **l_1541[6] = {&l_1542[1],&l_1542[1],&l_1542[1],&l_1542[1],&l_1542[1],&l_1542[1]};
    int32_t l_1545 = 0x432A9A07L;
    uint64_t l_1552[2];
    int32_t *l_1553[1];
    int i;
    for (i = 0; i < 2; i++)
        l_1552[i] = 1UL;
    for (i = 0; i < 1; i++)
        l_1553[i] = &g_1227.f0;
    l_1553[0] = ((((safe_div_func_int64_t_s_s(((safe_lshift_func_uint16_t_u_s((safe_lshift_func_int8_t_s_u((((*l_1538) = &p_9) == (g_1543[0] = &g_1207)), 3)), 7)) , l_1545), l_1545)) || (safe_rshift_func_uint16_t_u_u((safe_add_func_uint8_t_u_u(((l_1545 = 0x9DL) == (safe_div_func_uint64_t_u_u(((((g_221 = g_221) , (l_1552[1] ^ p_8)) , 8UL) , p_7.f0), (***g_796)))), (**g_264))), l_1552[0]))) <= l_1552[0]) , &l_1545);
    return (*g_1286);
}



static union U2  func_12(union U3  p_13, const int32_t  p_14, const int16_t  p_15, uint32_t  p_16)
{ 
    uint32_t l_44 = 0x523668F7L;
    int32_t l_1203 = 0x76C791BCL;
    union U2 *l_1226 = &g_1227;
    struct S1 *l_1248 = &g_1207;
    uint64_t l_1249 = 18446744073709551608UL;
    struct S0 **l_1251 = &g_596;
    uint64_t ***l_1264 = &g_797;
    int32_t l_1268 = 0xA97D4984L;
    int64_t *l_1274 = &g_99;
    uint32_t *l_1275 = &g_1207.f1;
    int8_t * const l_1321 = &g_63[0];
    int8_t *l_1322 = (void*)0;
    int32_t l_1344 = 0x2AB9C003L;
    int32_t l_1345 = 0xC1C5BA21L;
    int32_t l_1346 = 0x952661A0L;
    uint64_t *l_1394 = &l_1249;
    int64_t l_1437[6][4][1] = {{{(-8L)},{0xAD917728C0C777B2LL},{0xAD917728C0C777B2LL},{(-8L)}},{{3L},{(-4L)},{(-8L)},{(-4L)}},{{3L},{(-8L)},{0xAD917728C0C777B2LL},{0xAD917728C0C777B2LL}},{{(-8L)},{3L},{(-4L)},{(-8L)}},{{(-4L)},{3L},{(-8L)},{0xAD917728C0C777B2LL}},{{0xAD917728C0C777B2LL},{(-8L)},{3L},{(-4L)}}};
    int32_t l_1438 = 1L;
    int32_t l_1439 = (-1L);
    int32_t l_1440[3][3][1] = {{{0L},{0x3A948B0AL},{0L}},{{0x3A948B0AL},{0L},{0x3A948B0AL}},{{0L},{0x3A948B0AL},{0L}}};
    int64_t l_1442 = 0xF3EE468521B6E530LL;
    uint8_t l_1465 = 0x63L;
    int32_t *l_1493 = &g_59;
    union U2 ***l_1503 = &g_1306;
    int32_t *l_1506 = &g_1207.f6;
    uint16_t l_1531 = 65528UL;
    int i, j, k;
    for (p_13.f1 = 0; (p_13.f1 == (-28)); p_13.f1 = safe_sub_func_int64_t_s_s(p_13.f1, 1))
    { 
        struct S1 l_31[3] = {{0x75B167D3D8E1CE43LL,0UL,0x5752L,0xC256L,8L,6L,0L},{0x75B167D3D8E1CE43LL,0UL,0x5752L,0xC256L,8L,6L,0L},{0x75B167D3D8E1CE43LL,0UL,0x5752L,0xC256L,8L,6L,0L}};
        uint8_t *l_36 = (void*)0;
        uint8_t *l_37 = &g_38;
        uint32_t *l_41[1];
        int32_t l_43 = 0xF9F01020L;
        uint32_t *l_47[3];
        int32_t l_48 = 0xC5DE30EAL;
        int64_t *l_1202[2][6] = {{&g_99,&g_97,&g_91,&g_97,&g_99,&g_99},{&g_97,&g_97,&g_97,&g_97,(void*)0,&g_97}};
        struct S1 *l_1206 = &g_1207;
        union U2 l_1212 = {-3L};
        const uint32_t **l_1238[1][4][4];
        struct S0 l_1260 = {0x0E475980L,0xFB032C87L};
        union U3 l_1273 = {0x9DC3L};
        const uint64_t *l_1279 = &g_1280;
        const uint64_t **l_1278 = &l_1279;
        int32_t *l_1290 = &l_43;
        union U2 ***l_1310[6];
        int32_t l_1335[4];
        uint32_t l_1336 = 0UL;
        int32_t l_1464 = (-10L);
        int32_t *l_1490 = &g_613;
        int32_t l_1515[5] = {0L,0L,0L,0L,0L};
        int64_t l_1516[6] = {(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)};
        int i, j, k;
        for (i = 0; i < 1; i++)
            l_41[i] = &g_42;
        for (i = 0; i < 3; i++)
            l_47[i] = &g_5;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 4; j++)
            {
                for (k = 0; k < 4; k++)
                    l_1238[i][j][k] = (void*)0;
            }
        }
        for (i = 0; i < 6; i++)
            l_1310[i] = &g_1306;
        for (i = 0; i < 4; i++)
            l_1335[i] = 0xBB7F15E3L;
    }
    if (p_13.f1)
        goto lbl_1530;
lbl_1530:
    (*g_1235) ^= (safe_mul_func_int8_t_s_s((0x2101L || (((((safe_mul_func_int8_t_s_s((*l_1493), (~(safe_rshift_func_uint8_t_u_u(((*g_1022) , (**g_264)), 6))))) >= (safe_lshift_func_uint16_t_u_s(((safe_add_func_uint32_t_u_u(((*l_1251) == (void*)0), ((safe_div_func_uint16_t_u_u(0x5F0FL, 0x78CDL)) , p_13.f1))) & (*l_1506)), 9))) , (*l_1264)) == (*l_1264)) >= p_16)), 6L));
    (*l_1506) &= ((((g_1227.f3 , ((-9L) | l_1531)) < 65527UL) & (***g_796)) >= (0UL || ((p_15 < 7UL) >= (-1L))));
    return (***l_1503);
}



static const int32_t  func_24(uint64_t  p_25, struct S1  p_26, int64_t  p_27)
{ 
    uint64_t ***l_666 = (void*)0;
    uint64_t ****l_667 = (void*)0;
    uint64_t ****l_668 = &l_666;
    int32_t l_680 = 0xE31AAD4FL;
    int32_t l_693 = 0xA3BFB981L;
    int32_t ** const *l_697 = &g_489;
    int32_t ** const ** const l_696 = &l_697;
    int32_t l_708[7] = {0x5140CC83L,0x55604310L,0x55604310L,0x5140CC83L,0x55604310L,0x55604310L,0x5140CC83L};
    union U3 l_729 = {0x9125L};
    int64_t l_762 = 0xA301A6CE2C103949LL;
    uint32_t **l_774 = &g_109;
    union U2 l_776 = {0x7237C5A7L};
    int16_t l_781[4][2][2] = {{{0x4378L,0L},{(-8L),0L}},{{0x4378L,(-1L)},{(-1L),0x4378L}},{{0L,(-8L)},{0L,0x4378L}},{{(-1L),(-1L)},{0x4378L,0L}}};
    uint64_t l_795 = 18446744073709551615UL;
    int8_t l_807 = 0L;
    const uint32_t *l_835[6][5][4] = {{{&g_42,&g_64[4],&g_64[3],&g_42},{(void*)0,(void*)0,(void*)0,&g_64[1]},{&g_42,(void*)0,&g_64[1],&g_64[1]},{&g_64[1],&g_64[1],(void*)0,(void*)0},{&g_380,&g_257,&g_42,(void*)0}},{{&g_380,&g_380,&g_64[3],&g_42},{(void*)0,&g_715,&g_42,&g_64[0]},{&g_715,(void*)0,&g_380,(void*)0},{&g_42,&g_64[4],&g_42,&g_380},{&g_257,(void*)0,(void*)0,&g_380}},{{&g_64[1],&g_257,&g_380,(void*)0},{(void*)0,(void*)0,(void*)0,&g_42},{&g_380,&g_64[1],&g_380,&g_257},{&g_64[3],(void*)0,&g_257,&g_380},{&g_42,(void*)0,&g_257,&g_257}},{{(void*)0,&g_380,&g_715,&g_64[1]},{&g_42,&g_715,(void*)0,&g_715},{&g_257,&g_64[4],&g_42,&g_715},{&g_64[4],(void*)0,&g_42,(void*)0},{&g_257,(void*)0,&g_42,&g_257}},{{&g_257,&g_64[0],&g_42,&g_715},{&g_64[4],&g_257,&g_42,&g_42},{&g_257,(void*)0,(void*)0,&g_64[0]},{&g_42,&g_42,&g_715,&g_257},{(void*)0,(void*)0,&g_257,&g_257}},{{&g_42,&g_42,&g_257,&g_380},{&g_64[3],&g_380,&g_380,&g_64[0]},{&g_380,&g_64[4],(void*)0,&g_380},{(void*)0,&g_64[4],&g_380,&g_715},{&g_64[1],(void*)0,(void*)0,&g_257}}};
    const uint32_t **l_834 = &l_835[0][0][0];
    struct S1 l_843[3] = {{-3L,0xD2D3FAB8L,65535UL,-2L,0x544C60ABL,8L,0x2C6634B4L},{-3L,0xD2D3FAB8L,65535UL,-2L,0x544C60ABL,8L,0x2C6634B4L},{-3L,0xD2D3FAB8L,65535UL,-2L,0x544C60ABL,8L,0x2C6634B4L}};
    int64_t l_874 = 0x6783CF189FCC8E9ELL;
    uint8_t l_885[4];
    int32_t *l_903 = &g_50;
    union U2 ** const l_962 = &g_558;
    union U2 ** const *l_961 = &l_962;
    uint16_t l_1019 = 0xD6CAL;
    uint32_t l_1040[5] = {0x1668B698L,0x1668B698L,0x1668B698L,0x1668B698L,0x1668B698L};
    uint8_t ****l_1049 = &g_860;
    uint8_t **l_1083 = (void*)0;
    int16_t l_1184 = 0xDD6BL;
    uint32_t *l_1191[2];
    uint32_t l_1192[1][1];
    struct S0 l_1199 = {0x6006BF91L,0x5793CE55L};
    int16_t *l_1200 = &g_713[2][0];
    int32_t **l_1201 = &g_348;
    int i, j, k;
    for (i = 0; i < 4; i++)
        l_885[i] = 247UL;
    for (i = 0; i < 2; i++)
        l_1191[i] = &g_257;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 1; j++)
            l_1192[i][j] = 0x28BCA7FAL;
    }
lbl_695:
    (*l_668) = l_666;
    for (g_619 = 0; (g_619 <= 2); g_619 += 1)
    { 
        uint16_t l_694 = 0x8A1AL;
        int32_t l_704 = 0x40F80CBDL;
        int32_t l_705 = 0x851C6283L;
        int32_t l_706 = 0x8984E935L;
        int32_t l_707 = 0x16AB54E2L;
        int32_t l_711 = 0xE42D5A34L;
        const struct S0 *l_760 = &g_597;
        int64_t *l_763 = &l_762;
        uint32_t * const *l_773 = &g_109;
        uint8_t l_775 = 0UL;
        int16_t l_794 = 0xF786L;
        int32_t *l_799 = &l_680;
        int32_t *l_800 = (void*)0;
        int32_t *l_801 = &l_776.f0;
        int32_t *l_802 = (void*)0;
        int32_t *l_803 = &l_708[5];
        int32_t *l_804 = &l_704;
        int32_t *l_805 = &l_708[0];
        int32_t *l_806[5][2] = {{&l_693,&l_706},{&l_693,&l_706},{&l_693,&l_706},{&l_693,&l_706},{&l_693,&l_706}};
        int i, j;
        for (g_221.f3 = 0; (g_221.f3 <= 2); g_221.f3 += 1)
        { 
            int32_t l_670 = 1L;
            int32_t l_709 = 8L;
            uint64_t ****l_730 = &l_666;
            int32_t *l_755 = &g_50;
            uint64_t *l_768 = &g_189[1][0][3];
            int32_t *l_777 = &l_680;
            int32_t *l_778 = &g_50;
            int32_t *l_779 = &g_710;
            int32_t *l_780[4];
            union U2 l_787[2] = {{-5L},{-5L}};
            int i;
            for (i = 0; i < 4; i++)
                l_780[i] = &l_708[1];
            for (p_26.f2 = 0; (p_26.f2 <= 2); p_26.f2 += 1)
            { 
                union U2 l_669 = {0xBEAE4C2FL};
                int32_t ** const **l_699 = (void*)0;
                int32_t ** const ***l_698 = &l_699;
                int i;
                if ((l_669 , g_612[g_619]))
                { 
                    int16_t *l_681[3][7] = {{&g_221.f3,&g_568,&g_568,&g_221.f3,&g_221.f3,&g_221.f3,&g_568},{&g_562[1].f2,&g_562[1].f2,&g_568,&l_669.f2,&g_568,&g_562[1].f2,&g_562[1].f2},{&g_562[1].f2,&g_568,&l_669.f2,&g_568,&g_562[1].f2,&g_562[1].f2,&g_568}};
                    int i, j;
                    l_670 = (0x4FA2L > p_26.f6);
                    g_107 = &g_108[0][3];
                    p_26.f6 ^= ((safe_div_func_int32_t_s_s(((*g_348) = (safe_lshift_func_int16_t_s_u((((safe_mod_func_int64_t_s_s((~((safe_mod_func_int16_t_s_s((g_188 = l_680), (((+(*g_348)) <= (((**g_264) , (((safe_mod_func_int8_t_s_s((safe_rshift_func_int16_t_s_u(1L, (safe_add_func_int8_t_s_s((l_680 != (l_693 = (safe_sub_func_int16_t_s_s((0x2846L && p_26.f5), g_612[2])))), p_26.f4)))), (-8L))) && p_25) , p_26.f4)) != p_26.f0)) | g_38))) >= p_26.f5)), g_64[2])) > p_26.f2) < l_694), 3))), l_669.f3)) <= 0x3D188FAFBCD1A088LL);
                }
                else
                { 
                    if (g_221.f3)
                        goto lbl_695;
                    return l_669.f1;
                }
                (*l_698) = l_696;
                return p_25;
            }
            for (l_680 = 0; (l_680 <= 2); l_680 += 1)
            { 
                int32_t *l_700 = &l_693;
                int32_t *l_701 = &g_59;
                int32_t *l_702 = &g_59;
                int32_t *l_703[6] = {&g_50,&l_680,&g_50,&g_50,&l_680,&g_50};
                int64_t *l_728 = &g_99;
                struct S0 *l_761[1];
                int i;
                for (i = 0; i < 1; i++)
                    l_761[i] = &g_597;
                --g_715;
                if ((safe_lshift_func_uint8_t_u_s((safe_sub_func_int32_t_s_s((safe_add_func_int16_t_s_s((((safe_add_func_int64_t_s_s(((((l_705 || (((*l_728) = g_248) != (l_729 , (*l_702)))) , (void*)0) != l_730) , p_26.f1), g_619)) & g_381.f3) | l_709), p_25)), p_26.f5)), 6)))
                { 
                    int32_t *****l_737 = (void*)0;
                    int32_t ****l_739 = &g_488;
                    int32_t *****l_738 = &l_739;
                    int8_t *l_754[2];
                    int i;
                    for (i = 0; i < 2; i++)
                        l_754[i] = &l_729.f1;
                    l_707 ^= (safe_sub_func_int64_t_s_s((safe_div_func_uint8_t_u_u(((safe_lshift_func_uint16_t_u_u(8UL, 1)) ^ (((((*l_738) = (void*)0) != &g_488) != (g_411 = (safe_div_func_uint16_t_u_u((safe_mod_func_int32_t_s_s((g_380 <= (safe_sub_func_uint8_t_u_u((safe_mod_func_uint8_t_u_u((safe_div_func_int32_t_s_s(((void*)0 == &l_711), (safe_lshift_func_int8_t_s_u((((safe_add_func_uint64_t_u_u(((((l_711 , l_705) & g_99) == (*g_348)) >= l_709), g_91)) != l_694) , l_706), 1)))), 0x3BL)), 0x45L))), l_704)), 2L)))) < g_381.f1)), g_713[1][1])), p_26.f6));
                    l_755 = &l_706;
                }
                else
                { 
                    (*l_700) = ((safe_mod_func_uint8_t_u_u(p_26.f5, ((*l_701) = (*l_755)))) <= (l_760 == l_761[0]));
                    (*l_700) &= ((*l_755) = l_762);
                    l_703[2] = &l_670;
                }
                if ((&p_27 != (p_26.f6 , l_763)))
                { 
                    if (l_762)
                        goto lbl_695;
                }
                else
                { 
                    return (*g_348);
                }
            }
            (*g_348) |= (((p_26.f1 ^ ((((safe_sub_func_uint32_t_u_u((0x26E62909L ^ (safe_sub_func_uint64_t_u_u((--(*l_768)), (((safe_sub_func_int32_t_s_s(0xDCB862C4L, l_707)) , l_773) == l_774)))), ((g_714[5][1][3] || p_26.f5) || l_706))) != l_775) < p_26.f4) , (**g_264))) , l_776) , p_26.f2);
            ++g_782;
            (*l_730) = (((((((0xC31FC31C3090F8DBLL && (g_381 , (safe_add_func_uint64_t_u_u((l_787[1] , (safe_mul_func_int16_t_s_s((safe_rshift_func_uint8_t_u_s((&l_696 != (g_792 = g_792)), (l_787[1] , (-1L)))), 0x5029L))), 0xF8746B40FC975EEFLL)))) , l_794) == p_26.f4) , 18446744073709551612UL) & g_612[2]) , l_795) , g_796);
        }
        g_809++;
    }
    (*g_348) ^= p_26.f0;
    for (g_360 = (-1); (g_360 >= 13); g_360 = safe_add_func_uint16_t_u_u(g_360, 2))
    { 
        uint32_t l_829 = 0x89D46926L;
        int16_t *l_830[5][5][5] = {{{&g_713[1][1],&g_714[3][0][1],&g_714[1][5][3],(void*)0,(void*)0},{&g_714[5][1][3],&g_568,&g_714[5][1][3],&g_562[1].f2,&g_714[5][1][3]},{&g_714[3][0][1],&g_714[3][0][1],&g_221.f3,&g_559.f2,(void*)0},{&g_568,&g_714[5][1][3],&g_714[5][1][3],&l_729.f3,(void*)0},{&g_714[3][0][1],&g_713[1][1],&g_714[1][5][3],&g_559.f2,&g_714[1][5][3]}},{{&g_714[5][1][3],&g_714[5][1][3],&l_781[0][1][1],&g_562[1].f2,(void*)0},{&g_713[1][1],&g_714[3][0][1],&g_714[1][5][3],(void*)0,(void*)0},{&g_714[5][1][3],&g_568,&g_714[5][1][3],&g_562[1].f2,&g_714[5][1][3]},{&g_714[3][0][1],&g_714[3][0][1],&g_221.f3,&g_559.f2,(void*)0},{&g_568,&g_714[5][1][3],&g_714[5][1][3],(void*)0,(void*)0}},{{&g_714[1][5][3],&g_221.f3,&g_713[2][0],&g_713[2][0],&g_713[2][0]},{&g_714[5][1][3],&g_714[5][1][3],(void*)0,&g_714[5][0][3],(void*)0},{&g_221.f3,&g_714[1][5][3],&g_713[2][0],&g_562[1].f2,&g_417},{&g_714[5][1][3],&l_781[0][1][1],(void*)0,&g_714[5][0][3],(void*)0},{&g_714[1][5][3],&g_714[1][5][3],&g_568,&g_713[2][0],&g_417}},{{&l_781[0][1][1],&g_714[5][1][3],(void*)0,(void*)0,(void*)0},{&g_714[1][5][3],&g_221.f3,&g_713[2][0],&g_713[2][0],&g_713[2][0]},{&g_714[5][1][3],&g_714[5][1][3],(void*)0,&g_714[5][0][3],(void*)0},{&g_221.f3,&g_714[1][5][3],&g_713[2][0],&g_562[1].f2,&g_417},{&g_714[5][1][3],&l_781[0][1][1],(void*)0,&g_714[5][0][3],(void*)0}},{{&g_714[1][5][3],&g_714[1][5][3],&g_568,&g_713[2][0],&g_417},{&l_781[0][1][1],&g_714[5][1][3],(void*)0,(void*)0,(void*)0},{&g_714[1][5][3],&g_221.f3,&g_713[2][0],&g_713[2][0],&g_713[2][0]},{&g_714[5][1][3],&g_714[5][1][3],(void*)0,&g_714[5][0][3],(void*)0},{&g_221.f3,&g_714[1][5][3],&g_713[2][0],&g_562[1].f2,&g_417}}};
        uint16_t *l_831 = &g_381.f2;
        const uint32_t l_832[4][1] = {{18446744073709551612UL},{0xC03A411DL},{18446744073709551612UL},{0xC03A411DL}};
        uint32_t ***l_833[3];
        uint32_t *l_837 = (void*)0;
        uint32_t **l_836[1][5];
        int8_t *l_839 = &l_807;
        int32_t *l_840 = &l_708[0];
        int32_t ****l_846 = (void*)0;
        union U2 **l_858 = &g_558;
        int32_t l_879 = 0xCD4CF5C1L;
        int32_t l_880 = 1L;
        int32_t l_881 = 0x596E633EL;
        int8_t l_882 = 0x4BL;
        int32_t l_883 = 1L;
        int32_t l_884 = 6L;
        int32_t l_936 = 0x99C7E3CEL;
        int32_t l_937 = 0x5CC03102L;
        uint64_t ****l_965 = &g_796;
        uint64_t ****l_966 = (void*)0;
        union U3 l_982[1][6][5] = {{{{65526UL},{7UL},{65526UL},{0xEF20L},{0xEF20L}},{{8UL},{0x274BL},{8UL},{65532UL},{65532UL}},{{65526UL},{7UL},{65526UL},{0xEF20L},{0xEF20L}},{{8UL},{0x274BL},{8UL},{65532UL},{65532UL}},{{65526UL},{7UL},{65526UL},{0xEF20L},{0xEF20L}},{{8UL},{0x274BL},{8UL},{65532UL},{65532UL}}}};
        int32_t l_983[2];
        const uint8_t *l_1101[3][4][6] = {{{&g_559.f1,&g_562[1].f1,&g_559.f1,&g_38,(void*)0,&g_559.f1},{&l_885[0],&l_776.f1,&g_38,&g_360,(void*)0,&l_885[0]},{&g_38,&g_562[1].f1,&g_360,&g_360,&g_562[1].f1,&g_38},{&l_885[0],(void*)0,&g_360,&g_38,&l_776.f1,&l_885[0]}},{{&g_559.f1,(void*)0,&g_38,&g_559.f1,&g_562[1].f1,&g_559.f1},{&g_559.f1,&g_562[1].f1,&g_559.f1,&g_38,(void*)0,&g_559.f1},{&l_885[0],&l_776.f1,&g_38,&g_360,(void*)0,&l_885[0]},{&g_38,&g_562[1].f1,&g_360,&g_360,&g_562[1].f1,&g_38}},{{&l_885[0],(void*)0,&g_360,&g_38,&l_776.f1,&l_885[0]},{&g_559.f1,(void*)0,&g_38,&g_559.f1,&g_562[1].f1,&g_559.f1},{&g_559.f1,&g_562[1].f1,&g_559.f1,&g_38,(void*)0,&g_559.f1},{&l_885[0],&l_776.f1,&g_38,&g_360,(void*)0,&l_885[0]}}};
        const uint8_t * const *l_1100 = &l_1101[0][3][4];
        const uint8_t * const **l_1099 = &l_1100;
        const uint8_t * const ***l_1098[5][5] = {{&l_1099,(void*)0,&l_1099,(void*)0,&l_1099},{&l_1099,&l_1099,&l_1099,&l_1099,&l_1099},{&l_1099,(void*)0,&l_1099,(void*)0,&l_1099},{&l_1099,&l_1099,&l_1099,&l_1099,&l_1099},{&l_1099,(void*)0,&l_1099,(void*)0,&l_1099}};
        int32_t **l_1187 = (void*)0;
        int32_t **l_1188[7] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
        int i, j, k;
        for (i = 0; i < 3; i++)
            l_833[i] = &g_108[0][3];
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 5; j++)
                l_836[i][j] = &l_837;
        }
        for (i = 0; i < 2; i++)
            l_983[i] = 5L;
    }
    (*l_1201) = ((((safe_lshift_func_uint16_t_u_s((((*g_265) |= p_26.f0) == (((void*)0 != l_1191[0]) > p_27)), 2)) == l_1192[0][0]) & ((safe_rshift_func_int8_t_s_u((safe_div_func_uint64_t_u_u(((g_713[2][0] , (safe_mod_func_int16_t_s_s(((*l_1200) = ((((l_1199 , (void*)0) != &g_110) & p_26.f2) ^ 1L)), 9L))) <= p_26.f2), p_26.f4)), 5)) || p_26.f3)) , (void*)0);
    return p_26.f3;
}



static struct S1  func_28(struct S1  p_29, uint32_t  p_30)
{ 
    int32_t *l_49 = &g_50;
    int32_t *l_51 = &g_50;
    int32_t *l_52 = &g_50;
    int32_t *l_53 = (void*)0;
    int32_t *l_54 = &g_50;
    int32_t *l_55 = (void*)0;
    int32_t *l_56 = &g_50;
    int32_t *l_57 = &g_50;
    int32_t *l_58 = &g_50;
    int32_t *l_60 = &g_50;
    int32_t *l_61 = (void*)0;
    int32_t *l_62[4];
    uint32_t *l_81[6] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
    uint32_t **l_80 = &l_81[0];
    uint32_t ***l_82 = &l_80;
    int64_t *l_90 = &g_91;
    int64_t *l_96 = &g_97;
    int64_t *l_98[2];
    uint8_t *l_106 = &g_38;
    struct S0 l_337 = {0x82585733L,1L};
    uint8_t l_338 = 254UL;
    int8_t l_406 = (-1L);
    union U3 l_407 = {0x1722L};
    union U2 l_487[3] = {{0xD95A64DBL},{0xD95A64DBL},{0xD95A64DBL}};
    union U2 *l_561[1][1][1];
    uint64_t l_563 = 1UL;
    int8_t l_641 = (-4L);
    const int32_t *l_643[7][7][5] = {{{&g_559.f3,&g_559.f3,&g_559.f3,&g_559.f3,&g_381.f4},{&g_381.f4,&l_487[0].f3,(void*)0,&g_559.f3,(void*)0},{&g_562[1].f3,&g_562[1].f3,&g_562[1].f3,&g_562[1].f3,&g_562[1].f3},{&g_381.f4,&g_381.f4,(void*)0,(void*)0,(void*)0},{&g_562[1].f3,(void*)0,&g_559.f3,&g_381.f4,(void*)0},{&g_381.f4,&g_559.f3,(void*)0,&g_381.f4,&l_487[0].f3},{&g_381.f4,&g_381.f4,&g_559.f3,&g_562[1].f3,&l_487[0].f3}},{{&g_381.f4,(void*)0,&l_487[0].f3,(void*)0,&g_381.f4},{&g_559.f3,&g_562[1].f3,&g_562[1].f3,&g_559.f3,&g_381.f4},{(void*)0,&g_559.f3,&g_562[1].f3,&g_559.f3,&g_381.f4},{&g_562[1].f3,&g_559.f3,&g_562[1].f3,&g_381.f4,&g_381.f4},{&g_381.f4,&g_381.f4,&g_381.f4,&g_559.f3,&g_381.f4},{&l_487[0].f3,&g_562[1].f3,&g_562[1].f3,&g_559.f3,&l_487[0].f3},{&g_381.f4,&g_381.f4,&g_559.f3,(void*)0,&g_562[1].f3}},{{&g_562[1].f3,&l_487[0].f3,(void*)0,&g_562[1].f3,&g_562[1].f3},{&g_562[1].f3,(void*)0,&g_381.f4,&g_381.f4,(void*)0},{&g_559.f3,&g_381.f4,&g_381.f4,&g_381.f4,&g_559.f3},{&g_381.f4,&g_559.f3,&g_562[1].f3,(void*)0,&g_562[1].f3},{&g_559.f3,&g_381.f4,&l_487[0].f3,&g_562[1].f3,(void*)0},{&l_487[0].f3,&l_487[0].f3,&g_559.f3,&g_559.f3,&g_562[1].f3},{(void*)0,&g_562[1].f3,&g_381.f4,&g_559.f3,&g_559.f3}},{{&g_562[1].f3,&l_487[0].f3,&g_381.f4,&g_381.f4,(void*)0},{&g_562[1].f3,&g_562[1].f3,&g_559.f3,(void*)0,&g_562[1].f3},{&g_559.f3,&l_487[0].f3,&g_381.f4,&g_381.f4,&g_562[1].f3},{(void*)0,&l_487[0].f3,&l_487[0].f3,&l_487[0].f3,&l_487[0].f3},{&g_559.f3,&g_562[1].f3,&g_381.f4,&g_562[1].f3,&g_381.f4},{&g_559.f3,&g_381.f4,&l_487[0].f3,&g_559.f3,&g_381.f4},{&g_559.f3,(void*)0,(void*)0,&g_381.f4,&g_381.f4}},{{&g_559.f3,&g_559.f3,&l_487[0].f3,&g_562[1].f3,&g_381.f4},{&g_559.f3,&g_381.f4,&g_562[1].f3,&g_562[1].f3,&g_381.f4},{(void*)0,&l_487[0].f3,&g_559.f3,&g_381.f4,&l_487[0].f3},{&g_559.f3,&g_562[1].f3,&g_381.f4,(void*)0,&g_562[1].f3},{(void*)0,&g_562[1].f3,&g_559.f3,&g_381.f4,&g_559.f3},{&l_487[0].f3,&l_487[0].f3,&g_381.f4,&g_562[1].f3,&g_381.f4},{&g_559.f3,&g_562[1].f3,&g_562[1].f3,&g_381.f4,&g_562[1].f3}},{{&g_381.f4,&l_487[0].f3,&g_381.f4,&g_562[1].f3,&l_487[0].f3},{(void*)0,&g_562[1].f3,&g_562[1].f3,&g_559.f3,&g_381.f4},{&g_559.f3,&l_487[0].f3,&g_381.f4,&g_559.f3,(void*)0},{(void*)0,&g_562[1].f3,&l_487[0].f3,&g_559.f3,(void*)0},{&g_381.f4,&g_562[1].f3,&g_381.f4,&g_562[1].f3,&g_562[1].f3},{&l_487[0].f3,(void*)0,&g_559.f3,&g_562[1].f3,&g_562[1].f3},{&l_487[0].f3,(void*)0,&l_487[0].f3,&g_559.f3,&g_559.f3}},{{&l_487[0].f3,(void*)0,&g_559.f3,&l_487[0].f3,&g_559.f3},{&g_381.f4,&g_381.f4,(void*)0,&g_562[1].f3,(void*)0},{&g_381.f4,&g_381.f4,&g_559.f3,&g_559.f3,&g_381.f4},{&l_487[0].f3,&g_562[1].f3,&l_487[0].f3,&g_381.f4,&g_562[1].f3},{&g_562[1].f3,&g_559.f3,&g_559.f3,&g_562[1].f3,(void*)0},{&g_559.f3,(void*)0,&g_381.f4,(void*)0,(void*)0},{&g_381.f4,&g_559.f3,&l_487[0].f3,&l_487[0].f3,&g_562[1].f3}}};
    const int32_t **l_642 = &l_643[0][6][3];
    const int32_t *l_645 = &g_562[1].f0;
    const int32_t **l_644 = &l_645;
    int64_t l_660 = 1L;
    int64_t l_661 = 0xC8685BBDA40B511ELL;
    uint16_t *l_662[3];
    const uint32_t *l_664 = &g_42;
    const uint32_t **l_663 = &l_664;
    struct S1 l_665 = {0L,5UL,1UL,0x0839L,0xF8458BC2L,0x4D7683C9L,0x0E178892L};
    int i, j, k;
    for (i = 0; i < 4; i++)
        l_62[i] = (void*)0;
    for (i = 0; i < 2; i++)
        l_98[i] = &g_99;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 1; k++)
                l_561[i][j][k] = &g_562[1];
        }
    }
    for (i = 0; i < 3; i++)
        l_662[i] = &g_221.f0;
    g_64[1]--;
    (*g_107) = (func_67(((safe_div_func_uint32_t_u_u(((safe_mod_func_int32_t_s_s((safe_add_func_uint8_t_u_u(func_76(l_60, ((*l_82) = l_80), func_83((safe_div_func_int64_t_s_s(((*l_90) = g_59), 0xD364BFA3C5B2E90ELL)), ((safe_sub_func_int16_t_s_s((safe_lshift_func_uint8_t_u_u(((p_29.f0 = ((*l_96) = 0x946A2B7F3A40B105LL)) , ((safe_sub_func_int64_t_s_s(p_30, ((((*l_106) |= (((*l_96) = (safe_mod_func_uint8_t_u_u((((safe_rshift_func_uint8_t_u_u((((((p_29.f1 && p_29.f0) & 18446744073709551615UL) | (*l_56)) && p_30) && g_5), g_97)) ^ p_29.f6) & g_63[0]), p_29.f5))) ^ 0UL)) | (*l_57)) || p_29.f2))) != g_59)), 0)), 0xB927L)) != p_29.f4), g_107, g_110)), 8UL)), p_29.f5)) != g_189[1][0][3]), 1L)) , p_29.f0), g_188) , (*l_82));
    return l_665;
}



static uint8_t  func_67(uint16_t  p_68, uint16_t  p_69)
{ 
    int32_t *l_321 = &g_59;
    int32_t *l_322[4] = {&g_50,&g_50,&g_50,&g_50};
    int64_t l_323 = 0x0BE43B6D30F81C46LL;
    uint64_t l_324 = 0x2C87CCA9B6156802LL;
    const int32_t *l_329 = &g_50;
    const int32_t **l_328 = &l_329;
    const int32_t ***l_327 = &l_328;
    uint32_t l_330 = 0x78D936C7L;
    int i;
    ++l_324;
    (*l_327) = (void*)0;
    l_330++;
    return p_68;
}



static uint8_t  func_76(int32_t * p_77, uint32_t ** p_78, uint32_t * p_79)
{ 
    union U2 l_122 = {-3L};
    struct S1 l_134 = {0xD54ED7DDA2347DC7LL,0xB573DB0AL,0x6214L,-9L,0x3D0AF170L,0x72F399B0L,0xCF61366EL};
    int32_t l_146 = 0x08CA92D9L;
    uint32_t l_178 = 18446744073709551615UL;
    uint8_t l_179 = 0UL;
    const int32_t *l_282 = &g_59;
    const int32_t **l_281[6] = {&l_282,&l_282,&l_282,&l_282,&l_282,&l_282};
    int i;
lbl_318:
    for (g_42 = 0; (g_42 <= 56); g_42++)
    { 
        uint8_t *l_119 = &g_38;
        uint8_t **l_118 = &l_119;
        uint64_t l_123 = 0UL;
        int32_t l_187[7][5][3];
        int32_t *l_225 = (void*)0;
        int64_t l_273 = 9L;
        const uint32_t *l_276[4];
        const uint32_t **l_275[2];
        const int32_t ***l_283 = &l_281[2];
        int32_t *l_284 = (void*)0;
        int32_t *l_285 = &l_187[4][3][2];
        int i, j, k;
        for (i = 0; i < 7; i++)
        {
            for (j = 0; j < 5; j++)
            {
                for (k = 0; k < 3; k++)
                    l_187[i][j][k] = 0xFD5536E5L;
            }
        }
        for (i = 0; i < 4; i++)
            l_276[i] = &g_64[1];
        for (i = 0; i < 2; i++)
            l_275[i] = &l_276[0];
    }
    for (g_91 = 0; (g_91 >= 14); ++g_91)
    { 
        uint8_t l_301 = 0x2DL;
        uint32_t *l_308[5];
        int i;
        for (i = 0; i < 5; i++)
            l_308[i] = &g_257;
        (*p_77) &= 1L;
        for (g_38 = 14; (g_38 == 24); g_38++)
        { 
            int32_t l_292 = 0xBC6411B7L;
            struct S0 l_293 = {0L,1L};
            uint8_t *l_296 = (void*)0;
            uint64_t *l_302 = (void*)0;
            union U3 l_303 = {0xFEC2L};
            uint16_t *l_304 = &l_134.f2;
            int32_t *l_305 = &g_248;
            (*p_77) = ((safe_rshift_func_int8_t_s_u(2L, l_292)) || ((l_293 , ((safe_mod_func_uint32_t_u_u((*l_282), g_64[1])) < (((*g_264) = (*g_264)) != l_296))) ^ (*p_77)));
            (*p_77) &= (-1L);
            p_77 = &g_59;
            (*p_77) = (((safe_div_func_int32_t_s_s((((*l_305) |= (safe_add_func_uint64_t_u_u((0xB459L < ((p_79 == &l_178) & (l_301 || ((*l_304) |= (g_221.f0 = ((l_302 != (l_303 , &g_189[0][2][3])) != (*l_282))))))), g_5))) , (*p_77)), (*p_77))) & (**g_264)) || l_301);
        }
        if ((*p_77))
        { 
            uint32_t l_311 = 18446744073709551615UL;
            (*p_77) ^= (0x36236462L & (((void*)0 == l_308[1]) <= (g_221.f3 >= (safe_div_func_uint8_t_u_u(l_311, (safe_lshift_func_uint8_t_u_s(255UL, 0)))))));
            for (g_59 = (-20); (g_59 != 0); ++g_59)
            { 
                return l_311;
            }
            for (l_134.f6 = (-26); (l_134.f6 == 11); l_134.f6 = safe_add_func_uint8_t_u_u(l_134.f6, 8))
            { 
                if (l_301)
                    goto lbl_318;
                return (*g_265);
            }
            (*p_77) = (safe_lshift_func_uint16_t_u_s(((void*)0 == &g_108[0][3]), l_311));
        }
        else
        { 
            if (g_42)
                break;
            return l_301;
        }
    }
    return (**g_264);
}



static uint32_t * func_83(uint16_t  p_84, uint32_t  p_85, uint32_t *** p_86, const uint32_t ** p_87)
{ 
    uint32_t *l_111 = &g_64[2];
    return l_111;
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_5, "g_5", print_hash_value);
    transparent_crc(g_38, "g_38", print_hash_value);
    transparent_crc(g_42, "g_42", print_hash_value);
    transparent_crc(g_50, "g_50", print_hash_value);
    transparent_crc(g_59, "g_59", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_63[i], "g_63[i]", print_hash_value);

    }
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_64[i], "g_64[i]", print_hash_value);

    }
    transparent_crc(g_91, "g_91", print_hash_value);
    transparent_crc(g_97, "g_97", print_hash_value);
    transparent_crc(g_99, "g_99", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 7; k++)
            {
                transparent_crc(g_172[i][j][k], "g_172[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_188, "g_188", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 7; j++)
        {
            for (k = 0; k < 5; k++)
            {
                transparent_crc(g_189[i][j][k], "g_189[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_192, "g_192", print_hash_value);
    transparent_crc(g_221.f0, "g_221.f0", print_hash_value);
    transparent_crc(g_221.f1, "g_221.f1", print_hash_value);
    transparent_crc(g_221.f3, "g_221.f3", print_hash_value);
    transparent_crc(g_248, "g_248", print_hash_value);
    transparent_crc(g_257, "g_257", print_hash_value);
    transparent_crc(g_352.f0, "g_352.f0", print_hash_value);
    transparent_crc(g_352.f1, "g_352.f1", print_hash_value);
    transparent_crc(g_360, "g_360", print_hash_value);
    transparent_crc(g_380, "g_380", print_hash_value);
    transparent_crc(g_381.f0, "g_381.f0", print_hash_value);
    transparent_crc(g_381.f1, "g_381.f1", print_hash_value);
    transparent_crc(g_381.f2, "g_381.f2", print_hash_value);
    transparent_crc(g_381.f3, "g_381.f3", print_hash_value);
    transparent_crc(g_381.f4, "g_381.f4", print_hash_value);
    transparent_crc(g_381.f5, "g_381.f5", print_hash_value);
    transparent_crc(g_381.f6, "g_381.f6", print_hash_value);
    transparent_crc(g_411, "g_411", print_hash_value);
    transparent_crc(g_417, "g_417", print_hash_value);
    transparent_crc(g_418, "g_418", print_hash_value);
    transparent_crc(g_559.f0, "g_559.f0", print_hash_value);
    transparent_crc(g_559.f1, "g_559.f1", print_hash_value);
    transparent_crc(g_559.f2, "g_559.f2", print_hash_value);
    transparent_crc(g_559.f3, "g_559.f3", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_562[i].f0, "g_562[i].f0", print_hash_value);
        transparent_crc(g_562[i].f1, "g_562[i].f1", print_hash_value);
        transparent_crc(g_562[i].f2, "g_562[i].f2", print_hash_value);
        transparent_crc(g_562[i].f3, "g_562[i].f3", print_hash_value);

    }
    transparent_crc(g_568, "g_568", print_hash_value);
    transparent_crc(g_597.f0, "g_597.f0", print_hash_value);
    transparent_crc(g_597.f1, "g_597.f1", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_612[i], "g_612[i]", print_hash_value);

    }
    transparent_crc(g_613, "g_613", print_hash_value);
    transparent_crc(g_619, "g_619", print_hash_value);
    transparent_crc(g_710, "g_710", print_hash_value);
    transparent_crc(g_712, "g_712", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(g_713[i][j], "g_713[i][j]", print_hash_value);

        }
    }
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 6; j++)
        {
            for (k = 0; k < 5; k++)
            {
                transparent_crc(g_714[i][j][k], "g_714[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_715, "g_715", print_hash_value);
    transparent_crc(g_782, "g_782", print_hash_value);
    transparent_crc(g_808, "g_808", print_hash_value);
    transparent_crc(g_809, "g_809", print_hash_value);
    transparent_crc(g_933, "g_933", print_hash_value);
    transparent_crc(g_935, "g_935", print_hash_value);
    transparent_crc(g_938, "g_938", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 6; j++)
        {
            for (k = 0; k < 6; k++)
            {
                transparent_crc(g_951[i][j][k], "g_951[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_1023, "g_1023", print_hash_value);
    transparent_crc(g_1120, "g_1120", print_hash_value);
    transparent_crc(g_1207.f0, "g_1207.f0", print_hash_value);
    transparent_crc(g_1207.f1, "g_1207.f1", print_hash_value);
    transparent_crc(g_1207.f2, "g_1207.f2", print_hash_value);
    transparent_crc(g_1207.f3, "g_1207.f3", print_hash_value);
    transparent_crc(g_1207.f4, "g_1207.f4", print_hash_value);
    transparent_crc(g_1207.f5, "g_1207.f5", print_hash_value);
    transparent_crc(g_1207.f6, "g_1207.f6", print_hash_value);
    transparent_crc(g_1227.f0, "g_1227.f0", print_hash_value);
    transparent_crc(g_1227.f1, "g_1227.f1", print_hash_value);
    transparent_crc(g_1227.f2, "g_1227.f2", print_hash_value);
    transparent_crc(g_1227.f3, "g_1227.f3", print_hash_value);
    transparent_crc(g_1280, "g_1280", print_hash_value);
    transparent_crc(g_1287.f0, "g_1287.f0", print_hash_value);
    transparent_crc(g_1287.f1, "g_1287.f1", print_hash_value);
    transparent_crc(g_1287.f2, "g_1287.f2", print_hash_value);
    transparent_crc(g_1287.f3, "g_1287.f3", print_hash_value);
    transparent_crc(g_1287.f4, "g_1287.f4", print_hash_value);
    transparent_crc(g_1287.f5, "g_1287.f5", print_hash_value);
    transparent_crc(g_1287.f6, "g_1287.f6", print_hash_value);
    transparent_crc(g_1329, "g_1329", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_1454[i], "g_1454[i]", print_hash_value);

    }
    transparent_crc(g_1540.f0, "g_1540.f0", print_hash_value);
    transparent_crc(g_1540.f1, "g_1540.f1", print_hash_value);
    transparent_crc(g_1540.f2, "g_1540.f2", print_hash_value);
    transparent_crc(g_1540.f3, "g_1540.f3", print_hash_value);
    transparent_crc(g_1540.f4, "g_1540.f4", print_hash_value);
    transparent_crc(g_1540.f5, "g_1540.f5", print_hash_value);
    transparent_crc(g_1540.f6, "g_1540.f6", print_hash_value);
    transparent_crc(g_1544.f0, "g_1544.f0", print_hash_value);
    transparent_crc(g_1544.f1, "g_1544.f1", print_hash_value);
    transparent_crc(g_1544.f2, "g_1544.f2", print_hash_value);
    transparent_crc(g_1544.f3, "g_1544.f3", print_hash_value);
    transparent_crc(g_1544.f4, "g_1544.f4", print_hash_value);
    transparent_crc(g_1544.f5, "g_1544.f5", print_hash_value);
    transparent_crc(g_1544.f6, "g_1544.f6", print_hash_value);
    transparent_crc(g_1764, "g_1764", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(g_1776[i], "g_1776[i]", print_hash_value);

    }
    transparent_crc(g_1785, "g_1785", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
