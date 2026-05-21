// SPDX-License-Identifier: MIT
// cctest_csmith_47df7986.c --- cctest case csmith_47df7986 (csmith seed 1205827974)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0xfb7307d0 */

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

// Options:   -s 1205827974 -o /tmp/csmith_gen_fat6l5k2/csmith.c --concise --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 8 --max-block-size 5 --max-block-depth 4 --max-expr-complexity 8 --max-array-dim 3 --max-array-len-per-dim 7 --max-struct-fields 8 --max-union-fields 5

static long __undefined;


#pragma pack(push)
#pragma pack(1)
struct S0 {
   const uint32_t  f0;
   int32_t  f1;
   uint32_t  f2;
   uint64_t  f3;
};
#pragma pack(pop)

#pragma pack(push)
#pragma pack(1)
struct S1 {
   int64_t  f0;
   int64_t  f1;
   int64_t  f2;
};
#pragma pack(pop)

#pragma pack(push)
#pragma pack(1)
struct S2 {
   int32_t  f0;
   const uint16_t  f1;
   const int64_t  f2;
};
#pragma pack(pop)

union U3 {
   int8_t  f0;
   struct S1  f1;
   uint32_t  f2;
   uint32_t  f3;
};

union U4 {
   uint32_t  f0;
   const int16_t  f1;
   int8_t  f2;
   uint64_t  f3;
};


static union U4 g_4 = {3UL};
static int32_t g_38 = 0x420EA1BCL;
static int32_t g_47 = 0x8A514227L;
static uint64_t g_58 = 2UL;
static union U3 g_67 = {0xCFL};
static struct S2 g_70 = {0x275799D4L,0UL,-1L};
static struct S1 *g_91 = &g_67.f1;
static struct S1 **g_90 = &g_91;
static struct S0 g_111 = {0UL,0xDAB18E11L,4294967291UL,6UL};
static union U3 *g_132[5][7][2] = {{{&g_67,&g_67},{&g_67,&g_67},{&g_67,&g_67},{&g_67,&g_67},{&g_67,&g_67},{&g_67,&g_67},{&g_67,&g_67}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{&g_67,&g_67},{&g_67,&g_67},{(void*)0,&g_67},{&g_67,&g_67},{&g_67,&g_67}},{{(void*)0,&g_67},{&g_67,&g_67},{&g_67,(void*)0},{(void*)0,(void*)0},{(void*)0,&g_67},{&g_67,&g_67},{&g_67,&g_67}},{{&g_67,&g_67},{&g_67,&g_67},{&g_67,(void*)0},{&g_67,&g_67},{&g_67,(void*)0},{&g_67,&g_67},{&g_67,&g_67}},{{(void*)0,&g_67},{&g_67,(void*)0},{&g_67,&g_67},{&g_67,&g_67},{&g_67,&g_67},{&g_67,(void*)0},{&g_67,&g_67}}};
static union U3 **g_131 = &g_132[1][3][1];
static union U4 *g_143 = &g_4;
static union U4 **g_142 = &g_143;
static uint32_t g_160[6][1] = {{0xF8CB8F1EL},{0xF8CB8F1EL},{0xF8CB8F1EL},{0xF8CB8F1EL},{0xF8CB8F1EL},{0xF8CB8F1EL}};
static int16_t g_167[4][3] = {{0x0AC8L,0x0AC8L,(-1L)},{0x0AC8L,0x0AC8L,(-1L)},{0x0AC8L,0x0AC8L,(-1L)},{0x0AC8L,0x0AC8L,(-1L)}};
static union U4 g_175 = {0xCC10BF76L};
static uint16_t g_192 = 0xCB20L;
static uint16_t g_207 = 65528UL;
static int16_t g_236[5][2] = {{1L,1L},{1L,1L},{1L,1L},{1L,1L},{1L,1L}};
static uint32_t g_241[6][5] = {{0x3AF0B7D5L,0x332806D6L,0x332806D6L,0x3AF0B7D5L,0x9790A851L},{0x68E6D00BL,0x3AF0B7D5L,0x0AFB25AEL,0x91137327L,0x91137327L},{0xFB70B172L,0x3AF0B7D5L,0xFB70B172L,0x9790A851L,0x3AF0B7D5L},{0x91137327L,0x332806D6L,0x9790A851L,0x91137327L,0x9790A851L},{0x91137327L,0x91137327L,0x0AFB25AEL,0x3AF0B7D5L,0x68E6D00BL},{0xFB70B172L,0x68E6D00BL,0x9790A851L,0x9790A851L,0x68E6D00BL}};
static int8_t g_261[7][7][1] = {{{(-6L)},{0xFFL},{(-1L)},{0x1DL},{0x1DL},{(-1L)},{0xFFL}},{{(-6L)},{0xAAL},{0x47L},{0xAAL},{(-6L)},{0xFFL},{(-1L)}},{{0x1DL},{0x1DL},{(-1L)},{0xFFL},{(-6L)},{0xAAL},{0x47L}},{{0xAAL},{(-6L)},{0xFFL},{(-1L)},{0x1DL},{0x1DL},{(-1L)}},{{0xFFL},{(-6L)},{0xAAL},{0x47L},{0xAAL},{(-6L)},{0xFFL}},{{(-1L)},{0x1DL},{0x1DL},{(-1L)},{0xFFL},{(-6L)},{0xAAL}},{{0x47L},{0xAAL},{(-6L)},{0xFFL},{(-1L)},{0x1DL},{0x1DL}}};
static uint32_t g_262 = 0xEA93889BL;
static union U4 ***g_279[6] = {&g_142,&g_142,&g_142,&g_142,&g_142,&g_142};
static union U4 *** const *g_278 = &g_279[4];
static int8_t g_318 = 0x3FL;
static int32_t g_320 = 0x314EDC10L;
static uint32_t g_322 = 0xB49C2E44L;
static int32_t g_341 = 3L;
static uint8_t g_343 = 0x1DL;
static uint8_t g_353 = 0x98L;
static int32_t g_361 = (-7L);
static int8_t g_362[6] = {0xF3L,0xF3L,0xF3L,0xF3L,0xF3L,0xF3L};
static int16_t g_363 = 5L;
static int8_t g_364 = (-8L);
static int32_t g_365[2] = {1L,1L};
static int32_t *g_372 = (void*)0;
static struct S0 g_413 = {9UL,0x7F1A8950L,4294967289UL,0xC5F1824DAFEE2369LL};
static int64_t *g_427 = &g_67.f1.f1;
static int16_t g_697 = (-1L);
static int32_t g_731 = (-10L);
static uint8_t ****g_826 = (void*)0;
static const struct S1 * const g_832 = (void*)0;
static const struct S1 * const *g_831 = &g_832;
static const struct S1 * const **g_830 = &g_831;
static const struct S1 * const *** const g_829 = &g_830;
static const uint32_t g_852 = 0xBFB536FAL;
static uint8_t **g_964[3][4] = {{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}};
static uint8_t * const g_1060 = &g_343;
static uint8_t * const *g_1059[4] = {&g_1060,&g_1060,&g_1060,&g_1060};
static uint8_t * const **g_1058 = &g_1059[3];
static uint8_t * const ***g_1057[6][5] = {{&g_1058,&g_1058,&g_1058,&g_1058,&g_1058},{&g_1058,&g_1058,&g_1058,&g_1058,&g_1058},{&g_1058,&g_1058,&g_1058,&g_1058,&g_1058},{&g_1058,&g_1058,&g_1058,&g_1058,&g_1058},{&g_1058,&g_1058,&g_1058,&g_1058,&g_1058},{&g_1058,&g_1058,&g_1058,&g_1058,&g_1058}};
static struct S0 ***g_1063 = (void*)0;
static struct S1 g_1073 = {0x2ACD3448145CA39FLL,6L,-1L};
static struct S2 g_1179 = {0x2DF08F1DL,65535UL,0x6110FDC3775E49B4LL};
static const struct S0 g_1301[6][2][1] = {{{{0x87EEF806L,0xA542B756L,3UL,0x6A737DA7B58A8507LL}},{{0xC4DB0646L,0x9A050354L,0xAEC252CAL,1UL}}},{{{0x87EEF806L,0xA542B756L,3UL,0x6A737DA7B58A8507LL}},{{0xC4DB0646L,0x9A050354L,0xAEC252CAL,1UL}}},{{{0x87EEF806L,0xA542B756L,3UL,0x6A737DA7B58A8507LL}},{{0xC4DB0646L,0x9A050354L,0xAEC252CAL,1UL}}},{{{0x87EEF806L,0xA542B756L,3UL,0x6A737DA7B58A8507LL}},{{0xC4DB0646L,0x9A050354L,0xAEC252CAL,1UL}}},{{{0x87EEF806L,0xA542B756L,3UL,0x6A737DA7B58A8507LL}},{{0xC4DB0646L,0x9A050354L,0xAEC252CAL,1UL}}},{{{0x87EEF806L,0xA542B756L,3UL,0x6A737DA7B58A8507LL}},{{0xC4DB0646L,0x9A050354L,0xAEC252CAL,1UL}}}};
static uint64_t g_1303[4] = {18446744073709551613UL,18446744073709551613UL,18446744073709551613UL,18446744073709551613UL};
static int32_t g_1395 = 0xF3C523CBL;
static const uint32_t g_1417[4][1] = {{0x745BD26AL},{0x745BD26AL},{0x745BD26AL},{0x745BD26AL}};
static const struct S0 g_1446 = {1UL,0L,7UL,9UL};
static int32_t **g_1487[1] = {&g_372};
static int32_t ***g_1486 = &g_1487[0];
static int32_t ****g_1485 = &g_1486;
static int32_t ****g_1488[2] = {&g_1486,&g_1486};
static int32_t ** const **g_1542 = (void*)0;
static const uint64_t * const g_1560[1] = {(void*)0};
static const uint64_t * const * const g_1559 = &g_1560[0];
static int8_t g_1577 = 0xFDL;
static union U4 ****g_1584 = &g_279[4];
static union U4 **** const *g_1583 = &g_1584;
static int32_t * const *g_1597 = &g_372;
static int32_t * const * const *g_1596[3] = {&g_1597,&g_1597,&g_1597};
static int32_t * const * const ** const g_1595[2] = {&g_1596[2],&g_1596[2]};
static int32_t * const * const ** const *g_1594 = &g_1595[1];
static int64_t g_1731 = 0x7E8A07D4388D0A59LL;
static int16_t *g_1778 = &g_236[3][0];
static int16_t **g_1777 = &g_1778;
static struct S2 *g_1798[4][7][2] = {{{&g_70,&g_1179},{(void*)0,(void*)0},{&g_1179,&g_70},{&g_70,&g_70},{&g_1179,(void*)0},{(void*)0,&g_1179},{&g_70,&g_70}},{{&g_70,&g_1179},{(void*)0,(void*)0},{&g_1179,&g_70},{&g_70,&g_70},{&g_1179,(void*)0},{(void*)0,&g_1179},{&g_70,&g_70}},{{&g_70,&g_1179},{(void*)0,(void*)0},{&g_1179,&g_70},{&g_70,&g_70},{&g_1179,(void*)0},{(void*)0,&g_1179},{&g_70,&g_70}},{{&g_70,&g_1179},{(void*)0,(void*)0},{&g_1179,&g_70},{&g_70,&g_70},{&g_1179,(void*)0},{(void*)0,&g_1179},{&g_70,&g_70}}};
static struct S2 **g_1797 = &g_1798[0][6][1];
static uint16_t g_1822 = 0x1D69L;
static uint8_t ***g_1871 = (void*)0;
static struct S2 g_1949 = {6L,0x2497L,8L};
static int64_t g_1972 = 0x403B464FA87C035FLL;
static int8_t *g_1978 = &g_261[2][4][0];
static int8_t **g_1977 = &g_1978;
static union U4 g_2002[2][3][1] = {{{{0x77C32DC0L}},{{0x77C32DC0L}},{{0x77C32DC0L}}},{{{0x77C32DC0L}},{{0x77C32DC0L}},{{0x77C32DC0L}}}};
static uint8_t g_2096 = 246UL;
static union U3 ***g_2106[7] = {&g_131,&g_131,&g_131,&g_131,&g_131,&g_131,&g_131};
static union U3 ****g_2105 = &g_2106[6];
static union U3 ****g_2156[6] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
static union U3 *****g_2164 = &g_2105;
static int32_t g_2204 = 0xA233379DL;
static struct S0 * const **g_2226 = (void*)0;
static struct S0 * const ***g_2225[3] = {&g_2226,&g_2226,&g_2226};
static struct S0 * const ****g_2224 = &g_2225[0];
static struct S1 * const *g_2363 = (void*)0;
static struct S1 * const **g_2362 = &g_2363;
static struct S1 * const ***g_2361 = &g_2362;
static struct S1 * const ****g_2360[4][5] = {{&g_2361,&g_2361,&g_2361,&g_2361,&g_2361},{&g_2361,&g_2361,&g_2361,&g_2361,&g_2361},{&g_2361,&g_2361,&g_2361,&g_2361,&g_2361},{&g_2361,&g_2361,&g_2361,&g_2361,&g_2361}};
static uint16_t g_2377 = 0x1FE9L;



static int32_t  func_1(void);
static const uint8_t  func_5(const struct S0  p_6, union U4 ** const  p_7, uint64_t  p_8);
static const struct S0  func_9(union U4 * p_10, uint64_t  p_11, union U4 * p_12, uint64_t  p_13);
static union U4 * func_14(int64_t  p_15, int64_t  p_16, union U4 * p_17, union U4 ** p_18, uint8_t  p_19);
static int64_t  func_22(union U4 * const  p_23, uint16_t  p_24, struct S0  p_25, const union U4 * p_26);
static union U4 * func_27(uint64_t  p_28, union U4 ** p_29, struct S0  p_30, union U4 ** const  p_31, int32_t  p_32);
static union U4 ** func_33(uint64_t  p_34, union U3  p_35);
static struct S1  func_61(union U3  p_62, union U3  p_63, int32_t * p_64, struct S2  p_65, int32_t * p_66);




static int32_t  func_1(void)
{ 
    union U4 *l_3 = &g_4;
    union U4 **l_2 = &l_3;
    union U3 l_36 = {0x65L};
    struct S0 l_444 = {0xD79DD5C4L,0x2291A3EEL,1UL,18446744073709551608UL};
    union U4 ** const l_445[4] = {&l_3,&l_3,&l_3,&l_3};
    union U4 *l_835 = (void*)0;
    union U4 **l_836 = &g_143;
    int32_t l_2040[2];
    int8_t l_2045[4][4][5] = {{{0L,(-1L),0xEAL,0xE9L,0xF7L},{0x79L,(-1L),0xEAL,(-2L),(-5L)},{0L,0L,0xEAL,0xF7L,(-2L)},{0xF3L,0x0DL,0xEAL,0xC0L,0xC0L}},{{0xEAL,1L,0xEAL,(-5L),0xE9L},{0L,(-1L),0xEAL,0xE9L,0xF7L},{0x79L,(-1L),0xEAL,(-2L),(-5L)},{0L,0L,0xEAL,0xF7L,(-2L)}},{{0xF3L,0x0DL,0xEAL,0xC0L,0xC0L},{0xEAL,1L,0xEAL,(-5L),0xE9L},{0L,(-1L),0xEAL,0xE9L,0xF7L},{0x79L,(-1L),0xEAL,(-2L),0x79L}},{{0x16L,0x32L,1L,0L,0L},{(-1L),0L,1L,0xEAL,0xEAL},{1L,0L,1L,0x79L,0xF3L},{0xF1L,0x4EL,1L,0xF3L,0L}}};
    struct S2 l_2076[7][7][3] = {{{{0xC3EAE7D3L,0x87EEL,-10L},{0xC3EAE7D3L,0x87EEL,-10L},{0xC3EAE7D3L,0x87EEL,-10L}},{{0xC3EAE7D3L,0x87EEL,-10L},{0xC3EAE7D3L,0x87EEL,-10L},{0xC3EAE7D3L,0x87EEL,-10L}},{{0xC3EAE7D3L,0x87EEL,-10L},{0xC3EAE7D3L,0x87EEL,-10L},{0xC3EAE7D3L,0x87EEL,-10L}},{{0xC3EAE7D3L,0x87EEL,-10L},{0xC3EAE7D3L,0x87EEL,-10L},{0xC3EAE7D3L,0x87EEL,-10L}},{{0xC3EAE7D3L,0x87EEL,-10L},{0xC3EAE7D3L,0x87EEL,-10L},{0xC3EAE7D3L,0x87EEL,-10L}},{{0xC3EAE7D3L,0x87EEL,-10L},{0xC3EAE7D3L,0x87EEL,-10L},{0xC3EAE7D3L,0x87EEL,-10L}},{{0xC3EAE7D3L,0x87EEL,-10L},{0xC3EAE7D3L,0x87EEL,-10L},{0xC3EAE7D3L,0x87EEL,-10L}}},{{{0xC3EAE7D3L,0x87EEL,-10L},{0xC3EAE7D3L,0x87EEL,-10L},{0xC3EAE7D3L,0x87EEL,-10L}},{{0xC3EAE7D3L,0x87EEL,-10L},{0xC3EAE7D3L,0x87EEL,-10L},{0xC3EAE7D3L,0x87EEL,-10L}},{{0xC3EAE7D3L,0x87EEL,-10L},{0xC3EAE7D3L,0x87EEL,-10L},{0xC3EAE7D3L,0x87EEL,-10L}},{{0xC3EAE7D3L,0x87EEL,-10L},{0xC3EAE7D3L,0x87EEL,-10L},{0xC3EAE7D3L,0x87EEL,-10L}},{{0xC3EAE7D3L,0x87EEL,-10L},{0xC3EAE7D3L,0x87EEL,-10L},{0xC3EAE7D3L,0x87EEL,-10L}},{{0xC3EAE7D3L,0x87EEL,-10L},{0xC3EAE7D3L,0x87EEL,-10L},{0xC3EAE7D3L,0x87EEL,-10L}},{{0xC3EAE7D3L,0x87EEL,-10L},{0xC3EAE7D3L,0x87EEL,-10L},{0xC3EAE7D3L,0x87EEL,-10L}}},{{{0xC3EAE7D3L,0x87EEL,-10L},{0xC3EAE7D3L,0x87EEL,-10L},{0xC3EAE7D3L,0x87EEL,-10L}},{{0xC3EAE7D3L,0x87EEL,-10L},{0xC3EAE7D3L,0x87EEL,-10L},{0xC3EAE7D3L,0x87EEL,-10L}},{{0xC3EAE7D3L,0x87EEL,-10L},{0xC3EAE7D3L,0x87EEL,-10L},{0xC3EAE7D3L,0x87EEL,-10L}},{{0xC3EAE7D3L,0x87EEL,-10L},{0xC3EAE7D3L,0x87EEL,-10L},{0xC3EAE7D3L,0x87EEL,-10L}},{{0xC3EAE7D3L,0x87EEL,-10L},{0xC3EAE7D3L,0x87EEL,-10L},{0xC3EAE7D3L,0x87EEL,-10L}},{{0xC3EAE7D3L,0x87EEL,-10L},{0xC3EAE7D3L,0x87EEL,-10L},{0xC3EAE7D3L,0x87EEL,-10L}},{{0xC3EAE7D3L,0x87EEL,-10L},{0xC3EAE7D3L,0x87EEL,-10L},{0xC3EAE7D3L,0x87EEL,-10L}}},{{{0xC3EAE7D3L,0x87EEL,-10L},{0xC3EAE7D3L,0x87EEL,-10L},{0xC3EAE7D3L,0x87EEL,-10L}},{{0xC3EAE7D3L,0x87EEL,-10L},{0xC3EAE7D3L,0x87EEL,-10L},{0xC3EAE7D3L,0x87EEL,-10L}},{{0xC3EAE7D3L,0x87EEL,-10L},{0xC3EAE7D3L,0x87EEL,-10L},{0xC3EAE7D3L,0x87EEL,-10L}},{{0xC3EAE7D3L,0x87EEL,-10L},{0xC3EAE7D3L,0x87EEL,-10L},{0xC3EAE7D3L,0x87EEL,-10L}},{{0xC3EAE7D3L,0x87EEL,-10L},{0xC3EAE7D3L,0x87EEL,-10L},{0xC3EAE7D3L,0x87EEL,-10L}},{{0xC3EAE7D3L,0x87EEL,-10L},{0xC3EAE7D3L,0x87EEL,-10L},{0xC3EAE7D3L,0x87EEL,-10L}},{{0xC3EAE7D3L,0x87EEL,-10L},{0xC3EAE7D3L,0x87EEL,-10L},{0xC3EAE7D3L,0x87EEL,-10L}}},{{{0xC3EAE7D3L,0x87EEL,-10L},{0xC3EAE7D3L,0x87EEL,-10L},{0xC3EAE7D3L,0x87EEL,-10L}},{{0xC3EAE7D3L,0x87EEL,-10L},{0xC3EAE7D3L,0x87EEL,-10L},{0xC3EAE7D3L,0x87EEL,-10L}},{{0xC3EAE7D3L,0x87EEL,-10L},{0xC3EAE7D3L,0x87EEL,-10L},{0xC3EAE7D3L,0x87EEL,-10L}},{{0xC3EAE7D3L,0x87EEL,-10L},{0xC3EAE7D3L,0x87EEL,-10L},{0xC3EAE7D3L,0x87EEL,-10L}},{{0xC3EAE7D3L,0x87EEL,-10L},{0xC3EAE7D3L,0x87EEL,-10L},{0xC3EAE7D3L,0x87EEL,-10L}},{{0xC3EAE7D3L,0x87EEL,-10L},{0xC3EAE7D3L,0x87EEL,-10L},{0xC3EAE7D3L,0x87EEL,-10L}},{{0xC3EAE7D3L,0x87EEL,-10L},{0xC3EAE7D3L,0x87EEL,-10L},{0xC3EAE7D3L,0x87EEL,-10L}}},{{{0xC3EAE7D3L,0x87EEL,-10L},{0xC3EAE7D3L,0x87EEL,-10L},{0xC3EAE7D3L,0x87EEL,-10L}},{{0xC3EAE7D3L,0x87EEL,-10L},{0xC3EAE7D3L,0x87EEL,-10L},{0xC3EAE7D3L,0x87EEL,-10L}},{{0xC3EAE7D3L,0x87EEL,-10L},{0xC3EAE7D3L,0x87EEL,-10L},{0xC3EAE7D3L,0x87EEL,-10L}},{{0xC3EAE7D3L,0x87EEL,-10L},{0xC3EAE7D3L,0x87EEL,-10L},{0xC3EAE7D3L,0x87EEL,-10L}},{{0xC3EAE7D3L,0x87EEL,-10L},{0xC3EAE7D3L,0x87EEL,-10L},{0xC3EAE7D3L,0x87EEL,-10L}},{{0xC3EAE7D3L,0x87EEL,-10L},{0xC3EAE7D3L,0x87EEL,-10L},{0xC3EAE7D3L,0x87EEL,-10L}},{{0xC3EAE7D3L,0x87EEL,-10L},{0xC3EAE7D3L,0x87EEL,-10L},{0xC3EAE7D3L,0x87EEL,-10L}}},{{{0xC3EAE7D3L,0x87EEL,-10L},{0xC3EAE7D3L,0x87EEL,-10L},{0xC3EAE7D3L,0x87EEL,-10L}},{{0xC3EAE7D3L,0x87EEL,-10L},{0xC3EAE7D3L,0x87EEL,-10L},{0xC3EAE7D3L,0x87EEL,-10L}},{{0xC3EAE7D3L,0x87EEL,-10L},{0xC3EAE7D3L,0x87EEL,-10L},{0xC3EAE7D3L,0x87EEL,-10L}},{{0xC3EAE7D3L,0x87EEL,-10L},{0xC3EAE7D3L,0x87EEL,-10L},{0xC3EAE7D3L,0x87EEL,-10L}},{{0xC3EAE7D3L,0x87EEL,-10L},{0xC3EAE7D3L,0x87EEL,-10L},{0xC3EAE7D3L,0x87EEL,-10L}},{{0xC3EAE7D3L,0x87EEL,-10L},{0xC3EAE7D3L,0x87EEL,-10L},{0xC3EAE7D3L,0x87EEL,-10L}},{{0xC3EAE7D3L,0x87EEL,-10L},{0xC3EAE7D3L,0x87EEL,-10L},{0xC3EAE7D3L,0x87EEL,-10L}}}};
    uint8_t l_2120 = 0x20L;
    int32_t l_2172 = 0x8A572E16L;
    int32_t l_2174 = 0L;
    int32_t l_2175[4];
    struct S1 l_2211 = {1L,-1L,-2L};
    int16_t l_2227 = 0xACBAL;
    struct S0 *l_2232 = &l_444;
    struct S0 ** const l_2231 = &l_2232;
    struct S0 ** const *l_2230 = &l_2231;
    struct S0 ** const **l_2229 = &l_2230;
    uint64_t l_2233 = 5UL;
    uint32_t l_2235 = 0x34F4ED76L;
    struct S0 ***l_2278 = (void*)0;
    uint16_t l_2281 = 0UL;
    uint32_t l_2324 = 1UL;
    struct S1 ***l_2326[4] = {&g_90,&g_90,&g_90,&g_90};
    struct S1 ****l_2325 = &l_2326[1];
    uint64_t l_2355 = 3UL;
    int32_t *l_2381 = &l_444.f1;
    uint32_t l_2386 = 0xB34BCD01L;
    uint64_t l_2398 = 0x187DA1133990FFCBLL;
    int i, j, k;
    for (i = 0; i < 2; i++)
        l_2040[i] = (-1L);
    for (i = 0; i < 4; i++)
        l_2175[i] = 0L;
    (*l_2) = (void*)0;
    l_2040[1] |= (func_5(func_9((*l_2), g_4.f0, ((*l_836) = func_14((safe_add_func_uint64_t_u_u((&g_4 == (*l_2)), func_22(func_27(g_4.f0, ((**g_278) = func_33(g_4.f0, l_36)), l_444, l_445[3], g_241[2][1]), l_444.f0, l_444, (*l_2)))), l_444.f1, l_835, l_836, l_444.f1)), l_444.f3), &l_3, g_160[2][0]) ^ 0L);
    for (g_192 = (-14); (g_192 < 4); g_192++)
    { 
        uint32_t l_2048 = 4294967292UL;
        uint16_t l_2061[5] = {5UL,5UL,5UL,5UL,5UL};
        struct S1 l_2073[5] = {{0x738EAE20DF9E5D9CLL,0x54F0A30976D4009CLL,0L},{0x738EAE20DF9E5D9CLL,0x54F0A30976D4009CLL,0L},{0x738EAE20DF9E5D9CLL,0x54F0A30976D4009CLL,0L},{0x738EAE20DF9E5D9CLL,0x54F0A30976D4009CLL,0L},{0x738EAE20DF9E5D9CLL,0x54F0A30976D4009CLL,0L}};
        union U3 *l_2077 = &g_67;
        uint8_t *l_2081 = &g_343;
        uint8_t **l_2080 = &l_2081;
        int32_t *l_2092 = &g_70.f0;
        int32_t l_2114 = 7L;
        int32_t l_2118 = 0xA88EF8D9L;
        int32_t l_2119 = 0L;
        struct S2 l_2133[7] = {{0L,0x81E9L,0x23443FCCCDE53B39LL},{0L,0x81E9L,0x23443FCCCDE53B39LL},{0L,0x81E9L,0x23443FCCCDE53B39LL},{0L,0x81E9L,0x23443FCCCDE53B39LL},{0L,0x81E9L,0x23443FCCCDE53B39LL},{0L,0x81E9L,0x23443FCCCDE53B39LL},{0L,0x81E9L,0x23443FCCCDE53B39LL}};
        int32_t *l_2168[5];
        uint16_t l_2178 = 2UL;
        uint64_t l_2228 = 4UL;
        int i;
        for (i = 0; i < 5; i++)
            l_2168[i] = &g_365[0];
        l_2061[1] = ((safe_mul_func_int8_t_s_s(((*g_1978) = l_2045[0][0][0]), ((safe_div_func_uint32_t_u_u(l_2048, g_413.f2)) == ((*g_427) = (safe_div_func_int8_t_s_s(0x01L, l_2045[2][2][4])))))) , (safe_sub_func_uint16_t_u_u(g_1417[3][0], (safe_mod_func_int8_t_s_s((((safe_rshift_func_int16_t_s_s(((safe_add_func_uint64_t_u_u((((safe_div_func_uint16_t_u_u((g_261[3][4][0] && 0xA2EFL), l_2048)) | l_36.f0) && l_2040[1]), 0x288D011A184FD3EALL)) == l_2048), 8)) , &g_1978) == &g_1978), l_2048)))));
        for (g_343 = 2; (g_343 < 21); g_343++)
        { 
            int16_t l_2070[6][1][2] = {{{8L,8L}},{{8L,8L}},{{8L,8L}},{{8L,8L}},{{8L,8L}},{{8L,8L}}};
            int32_t *l_2093 = &l_2076[0][4][0].f0;
            uint8_t *l_2094 = &g_353;
            uint8_t *l_2095 = &g_2096;
            int32_t l_2116[5] = {2L,2L,2L,2L,2L};
            int64_t *l_2142[5][6] = {{(void*)0,&l_2073[4].f0,&l_2073[4].f0,&g_1073.f2,&g_1073.f2,&l_2073[4].f0},{(void*)0,(void*)0,&g_1073.f2,(void*)0,&g_1073.f1,(void*)0},{&l_2073[4].f0,(void*)0,&l_2073[4].f0,&l_2073[4].f0,&g_1073.f2,&g_1073.f2},{&g_1073.f1,&l_2073[4].f0,&l_2073[4].f0,&g_1073.f1,(void*)0,(void*)0},{(void*)0,&g_1073.f1,&g_1073.f2,&g_1073.f1,(void*)0,&l_2073[4].f0}};
            int8_t l_2169 = 0x2FL;
            int i, j, k;
            l_444.f1 = (safe_div_func_int32_t_s_s(0x47DDD84DL, (safe_mul_func_int8_t_s_s(((safe_mul_func_uint16_t_u_u(0xAEF3L, (g_1822 = l_2070[4][0][1]))) & ((safe_mul_func_uint16_t_u_u((l_2073[4] , (0x5F38B9C6AE6C9E42LL == (safe_mod_func_uint32_t_u_u((l_2076[0][4][0] , ((*g_131) == l_2077)), 0x81F58AD4L)))), l_2070[4][0][1])) ^ l_2076[0][4][0].f2)), l_2073[4].f1))));
            if ((safe_mod_func_int32_t_s_s((l_2061[0] < ((((void*)0 == l_2080) > (((safe_rshift_func_int8_t_s_s((((safe_mul_func_int8_t_s_s((safe_add_func_uint8_t_u_u(((*l_2095) = (safe_sub_func_uint64_t_u_u((safe_sub_func_int8_t_s_s(((l_2048 || 1L) != ((*l_2094) ^= (l_2092 == ((l_2040[1] || (*g_1978)) , l_2093)))), l_2061[1])), l_2076[0][4][0].f1))), 0x1EL)), 0xD1L)) >= l_444.f3) >= (-1L)), l_2040[1])) , l_2070[4][0][1]) < 0xFD46676BL)) == (-7L))), 0x6B8AA83FL)))
            { 
                union U3 *****l_2107 = &g_2105;
                int16_t *l_2108 = &g_697;
                int32_t l_2109 = (-1L);
                int32_t l_2115 = (-4L);
                int32_t l_2117[3];
                int i;
                for (i = 0; i < 3; i++)
                    l_2117[i] = (-8L);
                if ((safe_lshift_func_int16_t_s_u(((**g_1777) ^ ((*l_2108) = ((((safe_add_func_uint16_t_u_u(l_36.f0, (safe_sub_func_uint8_t_u_u(0x71L, l_2073[4].f0)))) || (((*l_2107) = g_2105) != (void*)0)) , &g_1485) == (void*)0))), 6)))
                { 
                    int32_t *l_2110 = &g_1395;
                    int32_t l_2111[5][1] = {{9L},{0x62AE8777L},{9L},{0x62AE8777L},{9L}};
                    int32_t *l_2112 = &g_341;
                    int32_t *l_2113[5] = {&g_341,&g_341,&g_341,&g_341,&g_341};
                    int i, j;
                    l_2120--;
                    (*l_2112) |= (safe_mod_func_uint8_t_u_u((safe_mul_func_uint16_t_u_u(g_320, (safe_add_func_uint16_t_u_u((safe_sub_func_int16_t_s_s((((*g_829) != (*g_829)) <= (safe_mul_func_int16_t_s_s(8L, g_261[0][4][0]))), l_2048)), (l_2133[1] , g_1972))))), l_2116[4]));
                }
                else
                { 
                    int64_t **l_2143 = &l_2142[1][2];
                    int32_t *l_2150 = &l_2116[3];
                    (*l_2150) = ((safe_sub_func_uint32_t_u_u((safe_add_func_uint16_t_u_u((((l_2076[0][4][0] , ((safe_div_func_int64_t_s_s(((*g_427) = (safe_rshift_func_int16_t_s_u((**g_1777), 3))), 1L)) == (**g_1777))) , &g_1972) == ((*l_2143) = l_2142[1][2])), (safe_div_func_int32_t_s_s((safe_rshift_func_int16_t_s_s((safe_mul_func_int8_t_s_s(0x86L, (***g_1058))), 13)), g_365[0])))), l_444.f0)) == 0x7CBAL);
                    return g_1303[3];
                }
            }
            else
            { 
                uint16_t l_2151 = 65535UL;
                int32_t l_2163 = 0L;
                int32_t l_2170 = 1L;
                int32_t l_2173 = (-6L);
                if (l_2151)
                    break;
                for (l_36.f2 = (-22); (l_36.f2 != 13); l_36.f2++)
                { 
                    union U4 l_2157 = {18446744073709551615UL};
                    l_2163 = (((g_111.f3 != ((void*)0 == g_2156[0])) ^ (l_2157 , ((safe_add_func_uint32_t_u_u((+((0x741737E7CAC8073CLL == (l_2157.f0 ^ ((safe_lshift_func_int16_t_s_s((l_2076[0][4][0].f0 & 1L), (**g_1777))) < g_2002[1][2][0].f1))) < 0x19E8L)), 0x7BCF2037L)) & (-1L)))) , l_2061[1]);
                    g_2164 = &g_2156[1];
                }
                (***g_1485) = &l_2116[1];
                for (g_67.f0 = 0; (g_67.f0 > 16); ++g_67.f0)
                { 
                    struct S1 l_2167 = {0x01BF05D70FCCDCAELL,0xE412C891581D44CCLL,0x735B0CDAABD3A322LL};
                    int16_t l_2171 = (-3L);
                    int32_t l_2176 = 0x7DF1DA4CL;
                    int32_t l_2177[5][5] = {{0x81ED9016L,0x81ED9016L,1L,0x81ED9016L,0x81ED9016L},{(-5L),(-1L),(-5L),(-5L),(-1L)},{0x81ED9016L,1L,1L,0x81ED9016L,1L},{(-1L),(-1L),0xA2A8DA83L,(-1L),(-1L)},{1L,0x81ED9016L,1L,1L,0x81ED9016L}};
                    int i, j;
                    l_2168[4] = (l_2167 , &l_2116[4]);
                    l_2178++;
                }
                if (l_2045[0][0][0])
                    continue;
            }
        }
        for (l_36.f0 = (-1); (l_36.f0 < (-12)); --l_36.f0)
        { 
            for (l_2114 = 0; l_2114 < 4; l_2114 += 1)
            {
                for (g_1395 = 0; g_1395 < 7; g_1395 += 1)
                {
                    for (g_343 = 0; g_343 < 2; g_343 += 1)
                    {
                        g_1798[l_2114][g_1395][g_343] = &g_1949;
                    }
                }
            }
        }
        for (g_175.f0 = 4; (g_175.f0 > 43); g_175.f0 = safe_add_func_uint16_t_u_u(g_175.f0, 3))
        { 
            uint32_t l_2207 = 18446744073709551615UL;
            uint64_t l_2209 = 0xC58C3C8A1A9DD9FFLL;
            uint64_t l_2219[4] = {18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL};
            int64_t l_2234 = 1L;
            int i;
            for (l_2048 = (-18); (l_2048 > 8); l_2048++)
            { 
                struct S1 l_2208 = {0xC07C83D2CDF9D60ALL,5L,6L};
                int32_t l_2210 = 0x02A89AD1L;
                l_2210 |= (safe_mod_func_int64_t_s_s(((safe_add_func_uint32_t_u_u((safe_lshift_func_int16_t_s_s((((((safe_unary_minus_func_uint8_t_u(((safe_lshift_func_uint8_t_u_s(((safe_lshift_func_int8_t_s_s((safe_add_func_uint32_t_u_u((safe_lshift_func_uint16_t_u_s(((safe_rshift_func_uint8_t_u_s(g_2204, (safe_rshift_func_uint8_t_u_u((l_2207 || 0x28520C9E7E50B498LL), 1)))) || (l_2208 , ((void*)0 == (*l_836)))), 9)), l_2076[0][4][0].f0)), (*g_1978))) , l_2175[0]), 4)) == 0x4D3D5B05DB182FB4LL))) , l_2207) && l_2209) ^ 0x3014272FBD056FA6LL) && g_413.f2), (*g_1778))), l_2175[3])) > l_2208.f2), l_2208.f0));
            }
            g_1073 = l_2211;
            l_2175[2] = (!(safe_lshift_func_int8_t_s_u(((*g_1978) &= (((((l_2207 == (l_2209 <= ((safe_rshift_func_int16_t_s_s((((safe_add_func_int16_t_s_s(((((l_2219[3] < (safe_div_func_int32_t_s_s((safe_lshift_func_int16_t_s_s(l_2219[3], (**g_1777))), ((((g_2224 == (void*)0) , l_2227) , l_2228) | g_2002[1][2][0].f0)))) , l_2229) != (void*)0) >= l_2233), l_2211.f1)) | l_2174) && 0xF9ADB75E98415021LL), 6)) , l_2219[3]))) , l_2219[3]) , l_2211.f2) ^ 65533UL) & l_2234)), 7)));
            l_2174 |= l_2219[3];
        }
        if (l_2235)
            continue;
    }
    for (g_1073.f0 = 2; (g_1073.f0 >= 0); g_1073.f0 -= 1)
    { 
        uint64_t *l_2236 = (void*)0;
        uint64_t *l_2237 = &l_2233;
        uint16_t *l_2240 = &g_192;
        uint32_t l_2245 = 0x9004019EL;
        const int16_t l_2261 = 0L;
        int32_t l_2262[3][2] = {{0xD5334CBCL,0xD5334CBCL},{0xD5334CBCL,0xD5334CBCL},{0xD5334CBCL,0xD5334CBCL}};
        int8_t ** const *l_2264[5][5][2] = {{{&g_1977,&g_1977},{&g_1977,&g_1977},{&g_1977,&g_1977},{&g_1977,&g_1977},{&g_1977,&g_1977}},{{&g_1977,&g_1977},{&g_1977,&g_1977},{&g_1977,&g_1977},{&g_1977,&g_1977},{&g_1977,&g_1977}},{{&g_1977,&g_1977},{&g_1977,&g_1977},{&g_1977,&g_1977},{&g_1977,&g_1977},{&g_1977,&g_1977}},{{&g_1977,&g_1977},{&g_1977,&g_1977},{&g_1977,&g_1977},{&g_1977,&g_1977},{&g_1977,&g_1977}},{{&g_1977,&g_1977},{&g_1977,&g_1977},{&g_1977,&g_1977},{&g_1977,&g_1977},{&g_1977,&g_1977}}};
        int8_t ** const * const *l_2263 = &l_2264[1][2][0];
        int8_t ** const * const **l_2265 = &l_2263;
        struct S0 **l_2271 = &l_2232;
        struct S0 ****l_2276 = (void*)0;
        struct S0 ****l_2277[7] = {&g_1063,&g_1063,&g_1063,&g_1063,&g_1063,&g_1063,&g_1063};
        struct S2 l_2318 = {0xA21F1409L,1UL,1L};
        int64_t l_2329[4][2][6] = {{{1L,1L,1L,1L,1L,1L},{1L,1L,1L,1L,1L,1L}},{{1L,1L,1L,1L,1L,1L},{1L,1L,1L,1L,1L,1L}},{{1L,1L,1L,1L,1L,1L},{1L,1L,1L,1L,1L,1L}},{{1L,1L,1L,1L,1L,1L},{1L,1L,1L,1L,1L,1L}}};
        uint32_t l_2336 = 18446744073709551615UL;
        union U4 l_2368 = {18446744073709551607UL};
        int32_t l_2397[2];
        int i, j, k;
        for (i = 0; i < 2; i++)
            l_2397[i] = (-4L);
        l_2262[0][0] ^= ((((((*l_2237)--) >= ((((*l_2240)++) || (((((safe_mul_func_uint8_t_u_u(l_444.f0, l_2245)) == (safe_mul_func_uint8_t_u_u((l_444.f2 != ((safe_rshift_func_int16_t_s_s((((*g_1060) |= l_2211.f1) | (+((safe_lshift_func_int8_t_s_u((((g_4.f2 < (safe_add_func_uint32_t_u_u((safe_div_func_int16_t_s_s((safe_sub_func_uint16_t_u_u(g_167[3][1], (safe_mod_func_uint64_t_u_u((l_2211 , l_444.f1), l_2245)))), 3L)), g_160[4][0]))) > l_2076[0][4][0].f1) <= l_2045[2][0][4]), l_2120)) ^ g_192))), (**g_1777))) | 0x854090D54B83D9CBLL)), l_2245))) ^ l_2245) == l_2245) ^ 0x8DE5L)) , l_2245)) && l_2245) ^ 0xF3L) <= l_2261);
        (*l_2265) = l_2263;
        if (l_36.f0)
            continue;
        if ((((safe_unary_minus_func_uint32_t_u((safe_rshift_func_int16_t_s_s(((l_2261 & (((safe_lshift_func_uint8_t_u_u(255UL, 3)) < ((l_2271 == (void*)0) < ((((safe_mod_func_uint64_t_u_u((safe_rshift_func_int8_t_s_u(((*g_1778) ^ (((l_2278 = &l_2271) == ((safe_lshift_func_uint8_t_u_s((***g_1058), l_2076[0][4][0].f2)) , (**g_2224))) >= l_2281)), 0)), l_2245)) != (*g_1778)) != 0xFFCEB2179CE39BA7LL) & (*g_1060)))) & l_2262[2][1])) == l_2261), (*g_1778))))) ^ 18446744073709551610UL) == g_353))
        { 
            uint32_t l_2288[2][5] = {{0x4B64CB78L,1UL,0x4B64CB78L,1UL,0x4B64CB78L},{0xE9438C71L,0xE9438C71L,0xE9438C71L,0xE9438C71L,0xE9438C71L}};
            union U4 l_2291[5][1] = {{{18446744073709551606UL}},{{18446744073709551615UL}},{{18446744073709551606UL}},{{18446744073709551615UL}},{{18446744073709551606UL}}};
            int32_t l_2292 = 0L;
            int32_t *l_2293 = &l_2292;
            int i, j;
            for (l_2211.f2 = 0; (l_2211.f2 <= 2); l_2211.f2 += 1)
            { 
                uint64_t l_2309 = 18446744073709551615UL;
                int32_t *l_2310 = &l_444.f1;
                int i, j;
                l_2292 &= (0L | (safe_add_func_int16_t_s_s((safe_sub_func_int8_t_s_s((g_241[l_2211.f2][l_2211.f2] ^ (safe_rshift_func_int16_t_s_s(l_2288[0][0], (0xCAB1L | (l_2172 || l_2262[0][0]))))), (safe_add_func_uint32_t_u_u((l_2291[3][0] , g_241[l_2211.f2][l_2211.f2]), 0x15436E92L)))), 1L)));
                l_2293 = (void*)0;
                (*l_2310) ^= (safe_lshift_func_uint8_t_u_u(g_241[l_2211.f2][l_2211.f2], (safe_div_func_int32_t_s_s(l_2291[3][0].f2, (safe_mul_func_int64_t_s_s((safe_unary_minus_func_int64_t_s(g_1301[2][0][0].f2)), (g_1822 >= (safe_rshift_func_int16_t_s_s(((safe_mul_func_int16_t_s_s((*g_1778), (safe_add_func_int64_t_s_s((((*g_427) = (safe_lshift_func_int16_t_s_u((**g_1777), 15))) , l_2211.f1), l_2262[1][1])))) != l_2309), (**g_1777))))))))));
            }
        }
        else
        { 
            uint8_t l_2312 = 0xD3L;
            union U3 l_2317 = {0xA6L};
            int32_t l_2334 = 0x75FCF037L;
            uint64_t l_2347 = 18446744073709551612UL;
            int8_t l_2352 = 0xA1L;
            int32_t l_2373 = (-7L);
            int32_t l_2376 = (-5L);
            for (g_363 = 3; (g_363 >= 1); g_363 -= 1)
            { 
                uint8_t l_2311 = 8UL;
                int32_t l_2328 = 0xBC9CFAEAL;
                int32_t l_2330 = 0L;
                int64_t l_2335 = 0xB2CA12284D91E335LL;
                const union U3 l_2346 = {0L};
                struct S1 * const *l_2359 = &g_91;
                struct S1 * const **l_2358 = &l_2359;
                struct S1 * const ***l_2357 = &l_2358;
                struct S1 * const ****l_2356 = &l_2357;
                int64_t l_2370 = 0xB00868BB4AAD9DDCLL;
                for (g_70.f0 = 0; g_70.f0 < 6; g_70.f0 += 1)
                {
                    for (g_58 = 0; g_58 < 1; g_58 += 1)
                    {
                        g_160[g_70.f0][g_58] = 18446744073709551615UL;
                    }
                }
                for (l_444.f3 = 0; (l_444.f3 <= 2); l_444.f3 += 1)
                { 
                    int i, j;
                    return g_241[(g_363 + 1)][l_444.f3];
                }
                if ((l_2311 && (249UL == l_2312)))
                { 
                    struct S0 l_2323[5] = {{0UL,0x9D2922B9L,6UL,3UL},{0UL,0x9D2922B9L,6UL,3UL},{0UL,0x9D2922B9L,6UL,3UL},{0UL,0x9D2922B9L,6UL,3UL},{0UL,0x9D2922B9L,6UL,3UL}};
                    struct S1 *****l_2327 = &l_2325;
                    int32_t *l_2331 = &g_731;
                    int32_t *l_2332 = &l_2172;
                    int32_t *l_2333[4][4] = {{(void*)0,&g_38,(void*)0,&g_1395},{(void*)0,&g_1395,&g_1395,(void*)0},{&l_2262[0][0],&g_1395,&g_731,&g_1395},{&g_1395,&g_38,&g_731,&g_731}};
                    struct S2 l_2353[4] = {{-1L,0xDF44L,0x5FED7F6B9C505E5DLL},{-1L,0xDF44L,0x5FED7F6B9C505E5DLL},{-1L,0xDF44L,0x5FED7F6B9C505E5DLL},{-1L,0xDF44L,0x5FED7F6B9C505E5DLL}};
                    int8_t *l_2354 = &g_67.f0;
                    uint16_t l_2369 = 0x9881L;
                    int i, j;
                    (*l_2327) = ((((safe_div_func_uint8_t_u_u(1UL, ((***g_1058) = (safe_mod_func_uint64_t_u_u(((l_2317 , l_2076[0][4][0].f1) || ((l_2318 , (safe_rshift_func_uint8_t_u_s((((safe_mul_func_uint16_t_u_u(l_2317.f0, 0L)) < (l_2323[4] , l_2317.f0)) & 0xF3L), (*g_1978)))) <= 1L)), l_2040[1]))))) <= l_2324) && 1L) , l_2325);
                    --l_2336;
                    l_2262[0][0] |= ((safe_rshift_func_uint8_t_u_s((safe_add_func_int64_t_s_s(l_2328, ((!(l_2324 >= (((safe_lshift_func_uint8_t_u_u(((((l_2346 , l_2347) , (((safe_sub_func_int32_t_s_s(((((l_2354 = ((safe_mul_func_uint8_t_u_u(l_444.f1, (l_2352 | ((l_2353[2] , l_2328) != l_2328)))) , l_2354)) != &l_2045[0][0][0]) != (-3L)) == 5L), g_2096)) >= g_1301[2][0][0].f3) , l_444.f3)) < l_2355) , l_2352), 2)) && (*l_2331)) & l_2328))) != l_444.f1))), 5)) || (*l_2332));
                    (*l_2331) ^= (((g_2360[2][3] = l_2356) != (void*)0) , ((l_2336 <= (((safe_div_func_int16_t_s_s((l_2369 = (l_2262[1][1] ^= (safe_add_func_int8_t_s_s((**g_1977), ((***g_1058) , (l_2227 & (l_2368 , l_2040[1]))))))), g_111.f3)) ^ l_2330) & 18446744073709551610UL)) <= l_2370));
                }
                else
                { 
                    int32_t *l_2371 = &l_2175[1];
                    int32_t *l_2372 = &g_111.f1;
                    int32_t *l_2374 = &g_365[1];
                    int32_t *l_2375[6][3] = {{&l_2262[0][1],&l_2262[0][1],&l_2262[0][1]},{&g_365[0],&g_365[0],&g_365[0]},{&l_2262[0][1],&l_2262[0][1],&l_2262[0][1]},{&g_365[0],&g_365[0],&g_365[0]},{&l_2262[0][1],&l_2262[0][1],&l_2262[0][1]},{&g_365[0],&g_365[0],&g_365[0]}};
                    int32_t **l_2380[6][2] = {{&l_2372,&l_2372},{&l_2375[2][0],&l_2372},{&l_2372,&l_2375[2][0]},{&l_2372,&l_2372},{&l_2375[2][0],&l_2372},{&l_2372,&l_2375[2][0]}};
                    int i, j;
                    (*l_2371) |= 0xD45B0E82L;
                    g_2377--;
                    l_2381 = ((**g_1486) = &l_2328);
                }
            }
            return g_1822;
        }
        for (g_1073.f1 = 0; (g_1073.f1 <= 4); g_1073.f1 += 1)
        { 
            int32_t l_2382 = 0x3632CAC2L;
            int8_t l_2383 = 0L;
            int32_t *l_2384 = (void*)0;
            int32_t *l_2385[6] = {&g_731,&g_731,&g_731,&g_731,&g_731,&g_731};
            int i, j;
            ++l_2386;
            if (g_241[g_1073.f1][g_1073.f1])
                break;
            for (g_175.f3 = 0; (g_175.f3 <= 2); g_175.f3 += 1)
            { 
                int8_t l_2389[6][1][2] = {{{0x6BL,0x6BL}},{{0x6BL,0x34L}},{{0xB6L,1L}},{{0x34L,1L}},{{0xB6L,0x34L}},{{0x6BL,0x6BL}}};
                int32_t l_2390 = (-1L);
                int32_t l_2391 = 0x769A4A7BL;
                int32_t l_2392 = 0x828161DDL;
                int32_t l_2393 = 5L;
                int32_t l_2394 = 0L;
                int32_t l_2395 = 1L;
                int32_t l_2396[3][6] = {{0x02A6C391L,0L,0x02A6C391L,0L,0x02A6C391L,0L},{0x02A6C391L,0L,0x02A6C391L,0L,0x02A6C391L,0L},{0x02A6C391L,0L,0x02A6C391L,0L,0x02A6C391L,0L}};
                int i, j, k;
                l_2398--;
            }
            l_2381 = (void*)0;
        }
    }
    return g_362[4];
}



static const uint8_t  func_5(const struct S0  p_6, union U4 ** const  p_7, uint64_t  p_8)
{ 
    struct S1 l_1453 = {-1L,0x3144BF2EC0B4F8A9LL,-1L};
    struct S0 *l_1454 = (void*)0;
    struct S0 **l_1455 = &l_1454;
    int32_t l_1460 = 3L;
    struct S2 l_1473 = {0xAB04BDA4L,0x0A87L,0x5734D4CDF9CC810DLL};
    uint16_t *l_1474 = &g_207;
    int64_t *l_1475[7][2][7] = {{{(void*)0,(void*)0,&l_1453.f2,&g_1073.f0,&l_1453.f0,&l_1453.f2,&g_1073.f2},{(void*)0,&l_1453.f2,&g_1073.f0,&l_1453.f1,&g_1073.f2,&l_1453.f2,&l_1453.f2}},{{&l_1453.f2,(void*)0,(void*)0,&l_1453.f1,&l_1453.f0,&l_1453.f2,&g_1073.f0},{&l_1453.f2,(void*)0,&g_1073.f0,&g_1073.f0,&l_1453.f1,&l_1453.f1,&g_1073.f0}},{{&l_1453.f2,&l_1453.f2,&l_1453.f2,&l_1453.f2,&l_1453.f1,&l_1453.f2,&l_1453.f2},{(void*)0,(void*)0,&l_1453.f2,&g_1073.f0,&l_1453.f0,&l_1453.f2,&g_1073.f2}},{{(void*)0,&l_1453.f2,&g_1073.f0,&l_1453.f1,&g_1073.f2,&l_1453.f2,&l_1453.f2},{&l_1453.f2,(void*)0,(void*)0,&l_1453.f1,&l_1453.f0,&l_1453.f2,&g_1073.f0}},{{&l_1453.f2,(void*)0,&g_1073.f0,&g_1073.f0,&l_1453.f1,&l_1453.f1,&g_1073.f0},{&l_1453.f2,&l_1453.f2,&l_1453.f2,&l_1453.f2,&l_1453.f1,&l_1453.f2,&l_1453.f2}},{{(void*)0,(void*)0,&l_1453.f2,&g_1073.f0,&l_1453.f0,&l_1453.f2,&g_1073.f2},{(void*)0,&l_1453.f2,&g_1073.f0,&l_1453.f1,(void*)0,&g_1073.f2,&l_1453.f2}},{{&g_1073.f0,&g_1073.f2,&l_1453.f2,&g_1073.f0,&l_1453.f0,&l_1453.f0,(void*)0},{&l_1453.f1,&g_1073.f2,(void*)0,&l_1453.f2,&l_1453.f2,&g_1073.f0,(void*)0}}};
    int16_t *l_1476 = &g_236[4][1];
    int32_t ***l_1483 = (void*)0;
    int32_t ****l_1482[2][4] = {{&l_1483,(void*)0,&l_1483,&l_1483},{(void*)0,(void*)0,&l_1483,(void*)0}};
    union U4 l_1530 = {0xBF06124EL};
    int32_t * const * const l_1573 = (void*)0;
    int32_t * const * const *l_1572[4];
    int32_t * const * const **l_1571 = &l_1572[1];
    int32_t * const * const ***l_1570 = &l_1571;
    union U3 **l_1574 = &g_132[0][2][0];
    uint16_t l_1586[6] = {0x4D36L,0xCB6AL,0xCB6AL,0x4D36L,0xCB6AL,0xCB6AL};
    const uint64_t l_1604[3] = {0x7FED13A05634100CLL,0x7FED13A05634100CLL,0x7FED13A05634100CLL};
    int32_t *l_1618 = &g_320;
    union U4 ***l_1622[4];
    uint8_t *****l_1651 = &g_826;
    int32_t l_1690 = 9L;
    uint8_t l_1748 = 3UL;
    uint8_t l_1765 = 0x20L;
    int16_t **l_1780 = (void*)0;
    uint64_t l_1788 = 0x52FDC219D6E7C806LL;
    struct S2 **l_1800[2];
    int16_t l_1802[4];
    uint32_t l_1860 = 18446744073709551613UL;
    uint8_t ***l_1869 = &g_964[0][1];
    uint64_t l_1892 = 0x40C97BF9093AE9A3LL;
    union U3 l_1913 = {0xC5L};
    const uint32_t *l_1982 = &g_111.f0;
    const uint32_t **l_1981[7] = {&l_1982,&l_1982,&l_1982,&l_1982,&l_1982,&l_1982,&l_1982};
    const struct S0 *l_1997 = &g_1301[2][0][0];
    int64_t l_2033 = (-1L);
    int i, j, k;
    for (i = 0; i < 4; i++)
        l_1572[i] = &l_1573;
    for (i = 0; i < 4; i++)
        l_1622[i] = &g_142;
    for (i = 0; i < 2; i++)
        l_1800[i] = (void*)0;
    for (i = 0; i < 4; i++)
        l_1802[i] = 0x3201L;
    l_1453 = l_1453;
    (*l_1455) = l_1454;
    return p_6.f1;
}



static const struct S0  func_9(union U4 * p_10, uint64_t  p_11, union U4 * p_12, uint64_t  p_13)
{ 
    uint16_t l_1343 = 0x5672L;
    int8_t l_1348 = 0L;
    uint64_t *l_1349 = (void*)0;
    uint64_t *l_1350 = &g_111.f3;
    struct S0 * const l_1365[3] = {&g_111,&g_111,&g_111};
    struct S0 * const *l_1364 = &l_1365[2];
    struct S0 * const **l_1363 = &l_1364;
    union U4 * const *l_1374 = &g_143;
    union U4 * const **l_1373 = &l_1374;
    union U4 * const ***l_1372[5][2] = {{&l_1373,&l_1373},{&l_1373,&l_1373},{&l_1373,&l_1373},{&l_1373,&l_1373},{&l_1373,&l_1373}};
    int32_t *l_1375[5];
    union U3 *l_1404 = &g_67;
    int32_t l_1415 = 0xB0E2F43FL;
    int16_t *l_1420 = (void*)0;
    int i, j;
    for (i = 0; i < 5; i++)
        l_1375[i] = &g_413.f1;
    if ((safe_rshift_func_uint8_t_u_s(((((*l_1350) = ((-1L) | (safe_sub_func_int64_t_s_s((((safe_sub_func_int8_t_s_s(p_13, p_11)) & (l_1343 != ((safe_mul_func_uint16_t_u_u(((safe_add_func_uint16_t_u_u(l_1343, (0x8EBA886DA7537D07LL < p_13))) ^ g_413.f3), l_1348)) || 0xA251L))) ^ l_1348), p_13)))) > 0xD816A36F85EE61D8LL) , l_1343), p_13)))
    { 
        struct S2 l_1377[5] = {{-6L,65535UL,0x67644979EC637D1CLL},{-6L,65535UL,0x67644979EC637D1CLL},{-6L,65535UL,0x67644979EC637D1CLL},{-6L,65535UL,0x67644979EC637D1CLL},{-6L,65535UL,0x67644979EC637D1CLL}};
        int32_t l_1391 = 0xEAC2ED6CL;
        int32_t l_1396 = (-1L);
        int32_t l_1397 = 7L;
        int32_t l_1400 = 0xBBC542DEL;
        uint16_t l_1401 = 65528UL;
        uint32_t l_1405[1];
        struct S1 l_1408 = {0L,0xCBC6199C3D657D12LL,0L};
        struct S0 l_1423 = {0x871C07FFL,0xBBF52B84L,1UL,0x4074A50BD0E0591DLL};
        uint16_t l_1447[3][5];
        int i, j;
        for (i = 0; i < 1; i++)
            l_1405[i] = 4UL;
        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 5; j++)
                l_1447[i][j] = 0x41DCL;
        }
        for (g_175.f0 = 0; (g_175.f0 <= 2); g_175.f0 += 1)
        { 
            int32_t *l_1351 = &g_70.f0;
            int32_t l_1358 = (-1L);
            int32_t l_1392[7][2][1] = {{{6L},{0L}},{{0xCD4611BFL},{0L}},{{0xCD4611BFL},{0L}},{{6L},{0L}},{{0xCD4611BFL},{0L}},{{0xCD4611BFL},{0L}},{{6L},{0L}}};
            union U3 *l_1416 = (void*)0;
            uint16_t *l_1441[1];
            int i, j, k;
            for (i = 0; i < 1; i++)
                l_1441[i] = &g_207;
            if (((((*l_1351) = g_318) , &g_167[1][2]) != (void*)0))
            { 
                int32_t *l_1368 = &g_365[0];
                union U4 * const *l_1371 = &g_143;
                union U4 * const **l_1370 = &l_1371;
                union U4 * const ***l_1369 = &l_1370;
                if (p_13)
                    break;
                (*l_1368) = (safe_mod_func_int16_t_s_s((safe_lshift_func_int8_t_s_u((((safe_rshift_func_int16_t_s_u(l_1358, (safe_rshift_func_uint16_t_u_s((safe_div_func_int32_t_s_s((l_1358 < (l_1363 == &l_1364)), p_13)), (p_13 < ((*l_1350)--)))))) , 2L) == 0x28818332L), p_11)), g_160[5][0]));
                l_1372[0][0] = l_1369;
            }
            else
            { 
                int32_t *l_1376 = &g_731;
                int32_t l_1390[7];
                int i;
                for (i = 0; i < 7; i++)
                    l_1390[i] = 0x475383BFL;
                l_1376 = l_1375[0];
                if ((l_1377[0] , ((safe_unary_minus_func_uint16_t_u((!(g_341 <= (&g_365[0] != l_1351))))) | 18446744073709551606UL)))
                { 
                    const struct S0 l_1380[2][1][2] = {{{{4294967289UL,0x831B34D2L,4294967295UL,18446744073709551612UL},{4294967289UL,0x831B34D2L,4294967295UL,18446744073709551612UL}}},{{{4294967289UL,0x831B34D2L,4294967295UL,18446744073709551612UL},{4294967289UL,0x831B34D2L,4294967295UL,18446744073709551612UL}}}};
                    int i, j, k;
                    (*l_1376) |= 0xD752F6E5L;
                    (*l_1376) = 1L;
                    return l_1380[0][0][0];
                }
                else
                { 
                    uint32_t l_1389 = 5UL;
                    int32_t l_1393 = (-1L);
                    int64_t l_1394 = 1L;
                    int32_t l_1398 = 0xD89E8E88L;
                    int32_t l_1399 = 1L;
                    l_1389 ^= (l_1358 != ((safe_mul_func_int8_t_s_s(g_70.f1, (safe_mod_func_int8_t_s_s((safe_div_func_uint8_t_u_u((***g_1058), ((l_1377[0].f2 == ((safe_rshift_func_int16_t_s_s(g_1303[3], (&g_1303[3] != &p_11))) || (-3L))) ^ p_11))), p_11)))) && 0x2B1FC29E8872182ELL));
                    ++l_1401;
                    (*l_1376) ^= p_11;
                    (***g_278) = (***g_278);
                    (*g_131) = l_1404;
                }
            }
            l_1392[4][0][0] = p_13;
            g_111.f1 = l_1377[0].f0;
            for (g_353 = 0; (g_353 <= 1); g_353 += 1)
            { 
                int32_t l_1409 = (-4L);
                int i, j;
                if (g_236[g_175.f0][g_353])
                { 
                    g_111.f1 = 0L;
                    if (l_1397)
                        break;
                    if (p_13)
                        continue;
                    --l_1405[0];
                    g_67.f1 = l_1408;
                }
                else
                { 
                    uint64_t l_1410 = 0x370048B2EEECD2A8LL;
                    ++l_1410;
                    l_1392[2][0][0] &= (p_11 , (safe_lshift_func_uint16_t_u_u(l_1358, p_11)));
                    if (l_1415)
                        continue;
                }
            }
            g_111.f1 = (l_1392[5][0][0] = 1L);
            for (l_1415 = 0; (l_1415 <= 2); l_1415 += 1)
            { 
                int16_t *l_1422 = &g_697;
                int32_t l_1438[4];
                int32_t l_1442 = (-1L);
                uint32_t l_1445[7][1];
                int i, j;
                for (i = 0; i < 4; i++)
                    l_1438[i] = 0L;
                for (i = 0; i < 7; i++)
                {
                    for (j = 0; j < 1; j++)
                        l_1445[i][j] = 18446744073709551612UL;
                }
                (*g_131) = l_1416;
                if (p_11)
                    break;
                if (g_1417[3][0])
                    break;
                for (g_67.f3 = 0; (g_67.f3 <= 2); g_67.f3 += 1)
                { 
                    int16_t **l_1421 = &l_1420;
                    int32_t l_1436 = 1L;
                    uint32_t *l_1437 = (void*)0;
                    g_341 &= (((safe_add_func_int64_t_s_s((((*l_1421) = l_1420) == l_1422), g_413.f3)) , l_1423) , p_13);
                    l_1442 |= (l_1408.f2 || (safe_mod_func_uint32_t_u_u(p_13, (safe_add_func_uint8_t_u_u(0x5AL, (safe_mul_func_uint16_t_u_u((safe_div_func_int64_t_s_s(l_1408.f2, (safe_sub_func_uint16_t_u_u(g_4.f2, (safe_rshift_func_int16_t_s_s(((((l_1438[0] |= l_1436) ^ (((safe_mod_func_int64_t_s_s(g_241[5][3], p_13)) , (void*)0) == l_1441[0])) < 0x48206699A28C22A0LL) || p_13), p_13)))))), 8UL)))))));
                }
                if ((safe_div_func_uint64_t_u_u(((l_1358 , &g_829) != (l_1445[6][0] , (g_4.f2 , &g_829))), g_160[4][0])))
                { 
                    return g_1446;
                }
                else
                { 
                    (*g_90) = &l_1408;
                }
            }
        }
        l_1447[1][4] = 0x20CC175DL;
        l_1423.f1 = (g_1179.f1 , (safe_mod_func_int8_t_s_s(l_1423.f1, l_1377[0].f1)));
    }
    else
    { 
        union U4 **l_1450[7];
        union U4 **l_1451 = (void*)0;
        union U4 **l_1452 = &g_143;
        int i;
        for (i = 0; i < 7; i++)
            l_1450[i] = &g_143;
        (*l_1452) = (**l_1373);
    }
    return (***l_1363);
}



static union U4 * func_14(int64_t  p_15, int64_t  p_16, union U4 * p_17, union U4 ** p_18, uint8_t  p_19)
{ 
    uint8_t *l_837[2][5] = {{&g_343,&g_343,&g_343,&g_343,&g_353},{&g_343,&g_343,&g_343,&g_343,&g_353}};
    int32_t *l_840[1];
    const int16_t *l_845 = (void*)0;
    int32_t l_853 = (-8L);
    int8_t *l_856 = &g_362[4];
    int16_t *l_857[5];
    uint8_t l_858[3];
    struct S1 ****l_859 = (void*)0;
    struct S2 l_863 = {1L,65535UL,0x7EEFB86CF9EDC43ELL};
    const int32_t * const l_893 = &g_38;
    union U3 l_969 = {2L};
    uint64_t l_992 = 0xEA706EA1985742C7LL;
    int32_t * const l_996 = &g_111.f1;
    int32_t l_1011 = 0x8E43A86FL;
    uint8_t ***l_1056[6][4] = {{&g_964[0][3],&g_964[2][0],&g_964[2][0],&g_964[0][3]},{&g_964[2][1],&g_964[2][0],&g_964[0][0],&g_964[2][0]},{&g_964[2][0],&g_964[0][3],&g_964[0][0],&g_964[0][0]},{&g_964[2][1],&g_964[2][1],&g_964[2][0],&g_964[0][0]},{&g_964[0][3],&g_964[0][3],&g_964[0][3],&g_964[2][0]},{&g_964[0][3],&g_964[2][0],&g_964[2][0],&g_964[0][3]}};
    uint8_t ****l_1055 = &l_1056[2][2];
    union U3 l_1087 = {0xA9L};
    struct S1 l_1173[2][3] = {{{1L,0xFE07B50C1980C3EALL,2L},{1L,0xFE07B50C1980C3EALL,2L},{1L,0xFE07B50C1980C3EALL,2L}},{{0L,-1L,0xA5E7B0606F64E702LL},{0L,-1L,0xA5E7B0606F64E702LL},{0L,-1L,0xA5E7B0606F64E702LL}}};
    struct S2 *l_1178 = &g_1179;
    const union U4 l_1184[1] = {{0x8D1E8557L}};
    struct S0 l_1262 = {0x62943CB1L,0x375534E0L,4UL,0x7D8E097F0861A034LL};
    int32_t l_1272[2];
    union U3 l_1279 = {0L};
    int32_t l_1289[2];
    struct S0 *l_1294 = &g_413;
    struct S0 ** const l_1293[4] = {&l_1294,&l_1294,&l_1294,&l_1294};
    struct S0 ** const *l_1292 = &l_1293[2];
    const struct S0 * const **l_1295[1];
    struct S1 ***l_1309 = &g_90;
    union U3 ***l_1316 = &g_131;
    union U3 ***l_1318 = &g_131;
    uint32_t l_1334[1];
    union U4 *l_1336 = (void*)0;
    int i, j;
    for (i = 0; i < 1; i++)
        l_840[i] = &g_731;
    for (i = 0; i < 5; i++)
        l_857[i] = (void*)0;
    for (i = 0; i < 3; i++)
        l_858[i] = 1UL;
    for (i = 0; i < 2; i++)
        l_1272[i] = 2L;
    for (i = 0; i < 2; i++)
        l_1289[i] = 1L;
    for (i = 0; i < 1; i++)
        l_1295[i] = (void*)0;
    for (i = 0; i < 1; i++)
        l_1334[i] = 0xA0191EC1L;
    g_731 = (g_341 = (p_16 ^ (p_19--)));
    if ((safe_mod_func_int64_t_s_s(((*g_427) = (p_16 = (-9L))), (1UL || ((((((safe_lshift_func_uint8_t_u_s(((g_167[2][0] = ((l_845 == ((safe_lshift_func_int16_t_s_s((safe_mul_func_int8_t_s_s(((*l_856) = ((safe_sub_func_uint32_t_u_u((0L || g_852), ((l_853 > (safe_add_func_int16_t_s_s(p_15, p_15))) != 0xAA7AL))) | g_160[4][0])), g_320)), 8)) , l_845)) , p_15)) || l_858[1]), g_262)) != 4294967290UL) , &g_830) == l_859) ^ 0x6063L) ^ 0xD53A394C9F329EA1LL)))))
    { 
        struct S1 l_874 = {0L,0L,0x6FEC7C07E35C72E7LL};
        uint64_t l_875 = 0x1B79C7C8971479CBLL;
        int32_t l_876 = 0L;
        int32_t l_900 = 0x1DC83E77L;
        int32_t l_904 = 0x65C65652L;
        int32_t l_905 = 0x6185140BL;
        int32_t l_908[1][7][4] = {{{1L,0x933D3325L,1L,0xD36612BEL},{0x933D3325L,0x0334CD7FL,0xC3EBD42CL,0L},{0L,0xD93920B7L,0xF662424DL,0x0334CD7FL},{4L,0xF662424DL,0xF662424DL,4L},{0L,0xD36612BEL,0xC3EBD42CL,1L},{0x933D3325L,(-3L),1L,0xB7AB6F5AL},{1L,0xB7AB6F5AL,0x6D11BD13L,0xB7AB6F5AL}}};
        uint8_t l_925 = 0x0AL;
        struct S0 l_926 = {4294967290UL,-1L,0x57FEC03FL,0x3102320FF821715CLL};
        union U4 *l_939 = &g_175;
        uint32_t l_948[2][6] = {{1UL,1UL,1UL,1UL,1UL,1UL},{1UL,1UL,1UL,1UL,1UL,1UL}};
        int32_t l_959[2][3] = {{0x65C74E34L,0x65C74E34L,0xCC2974F0L},{0x65C74E34L,0x65C74E34L,0xCC2974F0L}};
        struct S1 ***l_962[5][6][7] = {{{&g_90,(void*)0,(void*)0,&g_90,&g_90,&g_90,&g_90},{&g_90,&g_90,&g_90,&g_90,&g_90,&g_90,&g_90},{&g_90,&g_90,&g_90,&g_90,&g_90,(void*)0,&g_90},{&g_90,&g_90,&g_90,&g_90,&g_90,(void*)0,&g_90},{&g_90,&g_90,&g_90,&g_90,&g_90,&g_90,&g_90},{&g_90,&g_90,(void*)0,(void*)0,(void*)0,&g_90,&g_90}},{{&g_90,&g_90,&g_90,&g_90,&g_90,&g_90,(void*)0},{&g_90,(void*)0,&g_90,&g_90,&g_90,&g_90,&g_90},{(void*)0,&g_90,&g_90,(void*)0,&g_90,&g_90,&g_90},{(void*)0,&g_90,&g_90,&g_90,(void*)0,(void*)0,&g_90},{&g_90,(void*)0,&g_90,&g_90,&g_90,(void*)0,&g_90},{&g_90,(void*)0,&g_90,(void*)0,&g_90,(void*)0,&g_90}},{{&g_90,(void*)0,(void*)0,&g_90,&g_90,&g_90,&g_90},{(void*)0,&g_90,&g_90,&g_90,&g_90,(void*)0,&g_90},{&g_90,(void*)0,(void*)0,&g_90,(void*)0,(void*)0,(void*)0},{&g_90,&g_90,&g_90,&g_90,(void*)0,&g_90,&g_90},{&g_90,(void*)0,&g_90,(void*)0,&g_90,&g_90,&g_90},{&g_90,(void*)0,&g_90,&g_90,&g_90,&g_90,&g_90}},{{&g_90,&g_90,&g_90,&g_90,&g_90,&g_90,(void*)0},{&g_90,&g_90,&g_90,&g_90,&g_90,&g_90,(void*)0},{&g_90,&g_90,&g_90,&g_90,&g_90,&g_90,&g_90},{(void*)0,&g_90,(void*)0,&g_90,&g_90,&g_90,&g_90},{&g_90,(void*)0,&g_90,&g_90,&g_90,&g_90,&g_90},{(void*)0,(void*)0,&g_90,&g_90,&g_90,&g_90,&g_90}},{{&g_90,&g_90,(void*)0,&g_90,&g_90,&g_90,&g_90},{&g_90,(void*)0,&g_90,(void*)0,&g_90,&g_90,(void*)0},{&g_90,&g_90,&g_90,&g_90,&g_90,&g_90,&g_90},{&g_90,(void*)0,&g_90,&g_90,(void*)0,&g_90,&g_90},{&g_90,(void*)0,&g_90,&g_90,&g_90,&g_90,&g_90},{(void*)0,(void*)0,(void*)0,&g_90,&g_90,&g_90,&g_90}}};
        uint8_t **l_963 = &l_837[0][4];
        int i, j, k;
        for (g_361 = 0; (g_361 == (-8)); g_361 = safe_sub_func_uint32_t_u_u(g_361, 1))
        { 
            uint32_t *l_877 = &g_67.f2;
            int32_t l_878 = 0x3295AA5AL;
            struct S1 l_897 = {0xEE3658A8D3B13567LL,0xC3070BD34D7BBE1ALL,1L};
            int32_t l_902 = 0x15750E93L;
            int32_t l_903 = 0L;
            int32_t l_906 = 1L;
            uint16_t l_911 = 0xDC1FL;
            struct S1 *l_957 = (void*)0;
            if ((((((~(l_863 , ((p_15 >= 1L) >= ((safe_rshift_func_uint16_t_u_s(((safe_sub_func_uint32_t_u_u(g_365[0], ((250UL | (5L || ((*l_877) = (safe_add_func_int32_t_s_s(((safe_add_func_int16_t_s_s((l_874 , p_15), l_875)) && l_876), 0xEBCEBD07L))))) == l_878))) , 65533UL), g_697)) < g_160[4][0])))) < p_19) , 0x16DEE5E3AB1EE715LL) , p_19) < p_19))
            { 
                return (*p_18);
            }
            else
            { 
                const union U4 l_887 = {0xF4CF23DCL};
                uint64_t *l_890 = &g_413.f3;
                const int32_t **l_894 = (void*)0;
                const int32_t *l_896[5];
                const int32_t **l_895 = &l_896[2];
                struct S1 *l_898 = &l_897;
                int32_t l_899 = 0xB30F2816L;
                int32_t l_901 = 0x8F25EB3AL;
                int32_t l_907 = 2L;
                int32_t l_909 = 0x32EA7048L;
                int32_t l_910 = (-2L);
                int i;
                for (i = 0; i < 5; i++)
                    l_896[i] = &g_413.f1;
                for (g_697 = 0; (g_697 <= 1); g_697 += 1)
                { 
                    int32_t **l_879 = &l_840[0];
                    uint64_t **l_891 = &l_890;
                    int64_t l_892 = 0x142FEAB3BDF125B6LL;
                    int i, j;
                    (*l_879) = l_840[0];
                    (**l_879) = (!((g_236[(g_697 + 2)][g_697] > g_236[(g_697 + 3)][g_697]) , (safe_add_func_int8_t_s_s((safe_sub_func_int64_t_s_s(3L, (safe_sub_func_int16_t_s_s(((l_887 , (safe_mod_func_uint32_t_u_u(g_236[(g_697 + 3)][g_697], ((**l_879) && (((*l_891) = l_890) == &g_58))))) > 4294967286UL), l_892)))), g_362[5]))));
                }
                (*l_895) = l_893;
                (*l_898) = l_897;
                ++l_911;
            }
            if (p_15)
                continue;
            for (l_874.f2 = (-11); (l_874.f2 == 26); l_874.f2 = safe_add_func_int16_t_s_s(l_874.f2, 8))
            { 
                uint8_t l_919 = 0x24L;
                uint16_t *l_920[5][3][2];
                int32_t **l_937 = &l_840[0];
                int32_t ***l_936 = &l_937;
                struct S1 *l_958 = &l_897;
                int i, j, k;
                for (i = 0; i < 5; i++)
                {
                    for (j = 0; j < 3; j++)
                    {
                        for (k = 0; k < 2; k++)
                            l_920[i][j][k] = &g_207;
                    }
                }
                if ((safe_unary_minus_func_int32_t_s((safe_add_func_int8_t_s_s(((*l_893) != ((l_874 , (l_900 &= l_919)) || 0x77FBL)), (p_19 = 0xD5L))))))
                { 
                    uint32_t l_938 = 0UL;
                    l_938 &= (((p_19--) , ((g_427 != g_427) <= l_925)) <= (((l_926 , (safe_sub_func_int8_t_s_s(g_241[4][0], (safe_mul_func_int16_t_s_s(((p_16 , (g_192 ^= ((((+(safe_lshift_func_uint16_t_u_s((--g_207), 8))) ^ p_15) , (void*)0) != l_936))) & 8UL), p_15))))) > p_16) < 0UL));
                }
                else
                { 
                    return l_939;
                }
                for (l_897.f0 = (-11); (l_897.f0 != 4); ++l_897.f0)
                { 
                    struct S1 *l_953 = (void*)0;
                    struct S1 **l_954 = &g_91;
                    struct S1 **l_955 = &g_91;
                    struct S1 **l_956[2][6] = {{&l_953,&l_953,&l_953,&l_953,&l_953,&l_953},{&l_953,&l_953,&l_953,&l_953,&l_953,&l_953}};
                    int i, j;
                    l_878 = (l_902 = ((***l_936) = (safe_rshift_func_int16_t_s_u(((safe_mul_func_int16_t_s_s(g_320, ((1L != g_361) > (safe_rshift_func_int8_t_s_s((l_948[0][3] < p_19), 3))))) , (0x91L > ((safe_add_func_int32_t_s_s((safe_lshift_func_int16_t_s_s((l_959[1][2] = ((l_957 = l_953) != l_958)), 6)), 4294967293UL)) & 0x1983C3DE3E989B70LL))), p_19))));
                    return (*p_18);
                }
                for (l_903 = 0; (l_903 > (-27)); l_903--)
                { 
                    return (*p_18);
                }
                if (l_897.f2)
                    continue;
                if (p_19)
                    continue;
            }
            return (***g_278);
        }
        g_47 |= ((l_962[2][5][0] != l_962[0][0][0]) ^ ((g_964[1][3] = l_963) == l_963));
        l_905 &= p_16;
    }
    else
    { 
        int32_t l_991 = 0x50A4B60EL;
        int64_t l_1007 = 1L;
        int32_t l_1008 = 0x26498263L;
        int32_t l_1009[4];
        int32_t l_1010 = 0x7BE5D211L;
        int32_t l_1012 = 1L;
        int32_t l_1017 = 0x687064FBL;
        int32_t l_1019 = 7L;
        int32_t l_1020 = (-4L);
        int32_t l_1022 = 0xFE727D29L;
        const uint16_t l_1027 = 0xC336L;
        union U4 *l_1028 = &g_4;
        union U3 l_1031[6][3] = {{{-1L},{-1L},{0x82L}},{{9L},{2L},{9L}},{{-1L},{0x82L},{0x82L}},{{0x8DL},{2L},{0x8DL}},{{-1L},{-1L},{0x82L}},{{9L},{2L},{9L}}};
        union U3 l_1082 = {0L};
        int32_t *l_1123 = &l_1019;
        struct S1 *l_1140 = (void*)0;
        struct S2 *l_1177 = &l_863;
        int64_t l_1230 = (-1L);
        struct S1 l_1273[7] = {{0xDD69F904276EC2CELL,0x7A32686785B8F466LL,-3L},{0xDD69F904276EC2CELL,0x7A32686785B8F466LL,-3L},{0xDD69F904276EC2CELL,0x7A32686785B8F466LL,-3L},{0xDD69F904276EC2CELL,0x7A32686785B8F466LL,-3L},{0xDD69F904276EC2CELL,0x7A32686785B8F466LL,-3L},{0xDD69F904276EC2CELL,0x7A32686785B8F466LL,-3L},{0xDD69F904276EC2CELL,0x7A32686785B8F466LL,-3L}};
        struct S1 *l_1304[6];
        struct S2 **l_1305[3][2] = {{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}};
        struct S1 ***l_1306 = &g_90;
        uint8_t * const *l_1324 = &l_837[0][1];
        int i, j;
        for (i = 0; i < 4; i++)
            l_1009[i] = 1L;
        for (i = 0; i < 6; i++)
            l_1304[i] = &l_1031[2][0].f1;
        for (g_47 = 0; (g_47 < (-27)); --g_47)
        { 
            uint32_t l_972 = 0x5B1CC0D1L;
            const int16_t l_993 = 0x3FEEL;
            struct S1 l_994[7] = {{0xDE80BAD8B529679ALL,0xAD5D10C5209F29FALL,0x429CC03D1BBE64BBLL},{0xDE80BAD8B529679ALL,0xAD5D10C5209F29FALL,0x429CC03D1BBE64BBLL},{0xDE80BAD8B529679ALL,0xAD5D10C5209F29FALL,0x429CC03D1BBE64BBLL},{0xDE80BAD8B529679ALL,0xAD5D10C5209F29FALL,0x429CC03D1BBE64BBLL},{0xDE80BAD8B529679ALL,0xAD5D10C5209F29FALL,0x429CC03D1BBE64BBLL},{0xDE80BAD8B529679ALL,0xAD5D10C5209F29FALL,0x429CC03D1BBE64BBLL},{0xDE80BAD8B529679ALL,0xAD5D10C5209F29FALL,0x429CC03D1BBE64BBLL}};
            int32_t *l_997 = &g_365[0];
            int32_t l_1000 = 0L;
            int32_t l_1002 = 1L;
            int32_t l_1003 = (-1L);
            int32_t l_1004[7];
            union U4 l_1029 = {0xE70C581FL};
            uint16_t l_1068 = 65530UL;
            union U3 ***l_1149 = (void*)0;
            struct S1 **l_1193 = &g_91;
            int i;
            for (i = 0; i < 7; i++)
                l_1004[i] = 0x6F1998E4L;
            if (((safe_div_func_uint8_t_u_u((l_969 , ((((((l_972 | (((safe_mod_func_int32_t_s_s(((~p_19) <= p_16), (((safe_lshift_func_uint8_t_u_s((safe_rshift_func_uint8_t_u_s((l_992 = (safe_mul_func_int8_t_s_s(((safe_div_func_int32_t_s_s((((safe_unary_minus_func_uint64_t_u(((((safe_unary_minus_func_int64_t_s(((safe_add_func_uint32_t_u_u((~(safe_add_func_int8_t_s_s(p_15, l_991))), g_413.f1)) > l_972))) , &p_15) != &p_16) , g_70.f2))) != g_261[4][5][0]) ^ 0xB0516D47F27D6FA2LL), l_972)) ^ (*l_893)), 0x51L))), g_160[4][0])), l_993)) && p_15) ^ l_972))) ^ l_972) <= 255UL)) == g_362[4]) == g_343) || l_991) & p_15) >= (-5L))), (-9L))) , l_972))
            { 
                struct S1 *l_995 = &l_969.f1;
                int32_t l_1001 = 1L;
                int32_t l_1006[4][6][5] = {{{0xCA7B57D5L,(-2L),5L,1L,1L},{0xCA7B57D5L,6L,0L,(-10L),0xA97881D3L},{(-2L),(-2L),0L,0x1B20163CL,0x1B20163CL},{5L,(-1L),5L,(-10L),0x1B20163CL},{0xCA39FF73L,0xB5ACC6CCL,0xD3A45586L,1L,0xA97881D3L},{5L,0xB5ACC6CCL,(-2L),0xA97881D3L,1L}},{{(-2L),(-1L),0xD3A45586L,0xA97881D3L,7L},{0xCA7B57D5L,(-2L),5L,1L,1L},{0xCA7B57D5L,6L,0L,(-10L),0xA97881D3L},{(-2L),(-2L),0L,0x1B20163CL,0x1B20163CL},{5L,(-1L),5L,(-10L),0x1B20163CL},{0xCA39FF73L,0xB5ACC6CCL,0xD3A45586L,1L,0xA97881D3L}},{{5L,0xB5ACC6CCL,(-2L),0xA97881D3L,1L},{(-2L),(-1L),0xD3A45586L,0xA97881D3L,7L},{0xCA7B57D5L,(-2L),5L,1L,1L},{0xCA7B57D5L,6L,0L,(-10L),0xA97881D3L},{(-2L),(-2L),0L,0x1B20163CL,0x1B20163CL},{5L,(-1L),5L,(-10L),0x1B20163CL}},{{0xCA39FF73L,0xB5ACC6CCL,0xD3A45586L,1L,0xA97881D3L},{5L,0xB5ACC6CCL,(-2L),0xA97881D3L,1L},{(-2L),(-1L),0xD3A45586L,0xA97881D3L,7L},{0xCA7B57D5L,(-2L),5L,1L,1L},{0xCA7B57D5L,6L,0L,(-10L),0xA97881D3L},{(-2L),(-2L),0L,0x1B20163CL,0x1B20163CL}}};
                int i, j, k;
                (*l_995) = l_994[5];
                l_997 = l_996;
                for (g_175.f3 = 15; (g_175.f3 == 21); g_175.f3 = safe_add_func_int64_t_s_s(g_175.f3, 5))
                { 
                    int16_t l_1005 = 0x623CL;
                    int32_t l_1013 = 0x336569E6L;
                    int32_t l_1014 = (-9L);
                    int32_t l_1015 = 0x025BA5F8L;
                    int32_t l_1016 = (-1L);
                    int32_t l_1018 = 7L;
                    int32_t l_1021 = 0xBE25A479L;
                    int32_t l_1023 = (-5L);
                    uint8_t l_1024 = 0xEDL;
                    --l_1024;
                    if (g_362[5])
                        break;
                    if (l_1027)
                        break;
                    return l_1028;
                }
            }
            else
            { 
                union U4 ***l_1030 = &g_142;
                const int32_t * const l_1037 = &g_38;
                const int32_t *l_1039[1];
                const int32_t **l_1038[2];
                const int32_t **l_1040[6][5] = {{&l_1039[0],&l_1039[0],&l_1039[0],&l_1039[0],&l_1039[0]},{&l_1039[0],(void*)0,(void*)0,&l_1039[0],(void*)0},{&l_1039[0],&l_1039[0],(void*)0,&l_1039[0],&l_1039[0]},{(void*)0,&l_1039[0],(void*)0,(void*)0,&l_1039[0]},{&l_1039[0],&l_1039[0],&l_1039[0],&l_1039[0],(void*)0},{(void*)0,(void*)0,&l_1039[0],(void*)0,(void*)0}};
                const int32_t **l_1041[1][2];
                const int32_t **l_1042 = &l_1039[0];
                int i, j;
                for (i = 0; i < 1; i++)
                    l_1039[i] = &l_1000;
                for (i = 0; i < 2; i++)
                    l_1038[i] = &l_1039[0];
                for (i = 0; i < 1; i++)
                {
                    for (j = 0; j < 2; j++)
                        l_1041[i][j] = &l_1039[0];
                }
                if ((l_1029 , (l_1030 != (void*)0)))
                { 
                    uint64_t l_1035 = 0x41759262154735CDLL;
                    int32_t l_1036 = 4L;
                    l_1036 &= ((g_413.f0 | (p_19 == (l_1031[2][0] , (p_16 >= (safe_add_func_uint64_t_u_u((((safe_unary_minus_func_int32_t_s(p_19)) , (p_19 < ((l_1020 || l_1035) < (-1L)))) & (*l_997)), (*l_997))))))) , 0x9DBB45ACL);
                }
                else
                { 
                    return (**l_1030);
                }
                (*l_1042) = l_1037;
                for (l_853 = 0; (l_853 <= 1); l_853 += 1)
                { 
                    uint64_t *l_1043 = &g_111.f3;
                    struct S0 **l_1062 = (void*)0;
                    struct S0 ***l_1061 = &l_1062;
                    int i;
                    g_1063 = (((((*l_1043)++) & (((((~(safe_sub_func_uint16_t_u_u(g_365[l_853], 65529UL))) >= ((*g_427) = (((safe_mul_func_int16_t_s_s((((safe_lshift_func_uint16_t_u_u((safe_mul_func_uint8_t_u_u(1UL, g_175.f2)), 14)) != p_15) >= (l_1055 != (g_1057[1][4] = g_1057[1][4]))), 0x7017L)) && 0x3C36A143EA4E6C57LL) && g_111.f1))) , 0L) && p_16) , p_16)) , 0x0F9C65842A54B7F9LL) , l_1061);
                    (*l_997) = ((void*)0 != &l_1031[1][2]);
                }
                (*l_996) = (safe_rshift_func_uint16_t_u_u((safe_rshift_func_uint8_t_u_u((l_1020 &= p_19), 3)), 12));
                if ((*l_997))
                { 
                    struct S1 * const l_1072 = &g_1073;
                    struct S1 * const *l_1071 = &l_1072;
                    (*l_996) &= (((*g_1060) = (--l_1068)) > (0xA7L || 0x91L));
                    (*l_997) = ((*g_830) == (l_1071 = &g_91));
                    return (*p_18);
                }
                else
                { 
                    union U3 *l_1083 = &l_969;
                    int32_t l_1088 = 0xC483E841L;
                    int64_t l_1102 = 0xE862CF5B5F95BBDELL;
                    uint16_t *l_1113 = (void*)0;
                    uint16_t *l_1114[7] = {&g_207,&g_207,&g_207,&g_207,&g_207,&g_207,&g_207};
                    uint32_t l_1117 = 4294967295UL;
                    int i;
                    (*l_997) = ((*l_996) = (safe_div_func_int16_t_s_s((safe_mod_func_uint8_t_u_u((safe_lshift_func_int16_t_s_s(((safe_add_func_uint64_t_u_u((((*l_1083) = l_1082) , (~0x59A2D25DL)), p_16)) | ((l_1088 |= (safe_mod_func_uint64_t_u_u((p_15 != g_241[4][4]), (l_1087 , p_15)))) || p_16)), (*l_1037))), p_19)), (-5L))));
                    (*l_997) = (safe_div_func_int32_t_s_s((safe_mod_func_int16_t_s_s((safe_div_func_uint32_t_u_u((!(safe_rshift_func_uint16_t_u_u(((((safe_mod_func_int32_t_s_s(1L, (safe_sub_func_int64_t_s_s(l_1102, (safe_div_func_int32_t_s_s((p_16 != (safe_mul_func_uint16_t_u_u((safe_rshift_func_int16_t_s_s((((safe_lshift_func_int16_t_s_s((g_413.f2 , ((safe_add_func_int32_t_s_s(((0L >= ((l_1088 = 0UL) | (((safe_rshift_func_uint16_t_u_s((p_15 | 0x4DL), 13)) ^ 1L) == p_16))) >= 0UL), (*l_997))) & g_111.f1)), l_1010)) < 0x4B2DL) != g_175.f0), 14)), g_160[3][0]))), 0x34F8FA47L)))))) || 0xE637L) > g_58) > p_15), g_70.f0))), 0x45DD713FL)), g_413.f2)), 0x09DE139FL));
                    l_1117++;
                }
            }
        }
        if ((*l_1123))
        { 
            uint64_t l_1207 = 18446744073709551615UL;
            uint8_t **** const l_1233 = &l_1056[1][0];
            int32_t l_1237 = (-1L);
            union U3 l_1256 = {0x96L};
            int32_t **l_1257[3][4][1];
            int i, j, k;
            for (i = 0; i < 3; i++)
            {
                for (j = 0; j < 4; j++)
                {
                    for (k = 0; k < 1; k++)
                        l_1257[i][j][k] = &l_1123;
                }
            }
            if (p_19)
            { 
                return (*p_18);
            }
            else
            { 
                const struct S0 l_1221 = {0x76D1D555L,-4L,0xCB64A96AL,0x72BE7F5493F25D73LL};
                struct S1 *l_1235[5];
                int i;
                for (i = 0; i < 5; i++)
                    l_1235[i] = &l_1173[0][0];
                for (g_111.f2 = 1; (g_111.f2 >= 50); g_111.f2 = safe_add_func_int16_t_s_s(g_111.f2, 5))
                { 
                    int32_t l_1218 = (-1L);
                    uint16_t *l_1234[4] = {&g_207,&g_207,&g_207,&g_207};
                    int i;
                    ++l_1207;
                    (*l_1123) = ((safe_sub_func_int16_t_s_s(0x0942L, (((p_19 && p_15) >= (safe_mod_func_int64_t_s_s((6UL == (safe_div_func_int64_t_s_s(g_236[0][0], (l_1184[0] , (safe_mul_func_int8_t_s_s(g_320, 0x01L)))))), p_15))) , l_1218))) >= p_15);
                    (*l_996) = (((((((((p_16 < ((l_1221 , (g_207 = (((safe_mul_func_uint16_t_u_u(((+(+(safe_mul_func_int16_t_s_s(((**p_18) , (((void*)0 == &p_19) ^ ((((safe_div_func_uint64_t_u_u(l_1230, (safe_add_func_uint8_t_u_u(0x81L, l_1207)))) && 0x935D8745C9C8CA9BLL) , &l_1056[4][0]) != l_1233))), g_413.f3)))) == p_16), g_67.f0)) , (*g_1060)) == p_15))) < g_236[4][0])) <= 0x9F83EFBDL) && p_16) < g_1179.f0) , l_1207) == 1L) ^ p_19) <= (*l_1123)) == g_70.f2);
                }
                if (l_1207)
                { 
                    struct S1 *l_1236[5];
                    int i;
                    for (i = 0; i < 5; i++)
                        l_1236[i] = (void*)0;
                    (*l_1123) &= (1L != 0x34L);
                    l_1236[4] = l_1235[2];
                }
                else
                { 
                    return (*p_18);
                }
            }
            l_1237 |= ((*l_1123) = ((*l_996) &= p_19));
            for (g_343 = (-13); (g_343 <= 31); ++g_343)
            { 
                int16_t l_1242[2][6] = {{(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)},{(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)}};
                uint64_t *l_1245 = &l_992;
                int i, j;
                (*l_996) &= (safe_sub_func_int64_t_s_s((l_1242[1][5] && p_15), (safe_rshift_func_uint16_t_u_s(((--(*l_1245)) >= ((safe_add_func_int32_t_s_s((*l_1123), ((safe_mul_func_uint8_t_u_u(((void*)0 != l_857[4]), ((*l_856) = (safe_div_func_int16_t_s_s((safe_mul_func_uint8_t_u_u(((l_1256 , (p_19 >= 1L)) & (*l_1123)), l_1207)), 1UL))))) , g_192))) || p_19)), 12))));
            }
            l_1123 = &g_47;
        }
        else
        { 
            struct S1 l_1260 = {2L,1L,0xE32A7241B48110E2LL};
            struct S1 *l_1274 = &g_1073;
            int32_t **l_1275[7] = {(void*)0,&l_840[0],&l_840[0],(void*)0,&l_840[0],&l_840[0],(void*)0};
            struct S2 **l_1276[5][2] = {{&l_1177,&l_1177},{&l_1177,&l_1177},{&l_1177,&l_1177},{&l_1177,&l_1177},{&l_1177,&l_1177}};
            union U3 *l_1277 = (void*)0;
            union U3 *l_1278[7][1] = {{&g_67},{&g_67},{&l_1082},{&g_67},{&g_67},{&l_1082},{&g_67}};
            uint64_t *l_1288 = &l_1262.f3;
            const struct S0 * const ***l_1296 = &l_1295[0];
            const struct S0 * const l_1300 = &g_1301[2][0][0];
            const struct S0 * const *l_1299 = &l_1300;
            const struct S0 * const **l_1298 = &l_1299;
            const struct S0 * const ***l_1297 = &l_1298;
            uint32_t l_1302 = 0x4DE18D1FL;
            int i, j;
            for (g_262 = (-25); (g_262 >= 60); g_262 = safe_add_func_int64_t_s_s(g_262, 5))
            { 
                struct S1 *l_1261 = &l_1173[0][0];
                (*l_1261) = l_1260;
            }
            l_1123 = (((((l_1262 , (p_16 != (safe_add_func_int8_t_s_s(((~p_19) <= (safe_add_func_uint8_t_u_u(((safe_add_func_int8_t_s_s((safe_sub_func_uint16_t_u_u((l_1272[0] <= (((*l_1274) = l_1273[6]) , 0x7D41L)), 0x99A6L)), g_4.f0)) <= p_19), g_175.f0))), p_16)))) <= 1UL) || l_1260.f0) , g_160[2][0]) , (void*)0);
            l_1177 = l_1177;
            (*l_1274) = func_61((l_1082 = l_969), l_1279, (((safe_mod_func_uint32_t_u_u((g_111.f3 <= ((*l_856) = ((safe_rshift_func_uint16_t_u_s(((safe_rshift_func_uint8_t_u_s(((safe_div_func_uint64_t_u_u(((*l_1288) = 0x7F1F62798A559418LL), ((p_19 |= (l_1289[0] , (safe_div_func_uint16_t_u_u((((g_236[4][0] = ((l_1292 == ((*l_1297) = ((*l_1296) = (g_70 , l_1295[0])))) >= (*l_893))) > p_16) | 0UL), 65527UL)))) | 0x72L))) && l_1302), g_1303[3])) , p_15), g_262)) | g_1301[2][0][0].f2))), g_111.f0)) || p_19) , &g_341), (*l_1177), &g_47);
        }
        l_1279.f1 = (g_1073 = func_61(l_1279, l_1087, &l_1272[0], (*l_1178), &l_1272[0]));
        l_1178 = &l_863;
        for (g_1073.f2 = 1; (g_1073.f2 >= 0); g_1073.f2 -= 1)
        { 
            struct S1 ****l_1307 = (void*)0;
            struct S1 ****l_1308 = &l_1306;
            int32_t l_1310 = 0xFAFF3354L;
            (*l_996) |= (((p_19 || (((*l_1308) = (((void*)0 == (*g_142)) , l_1306)) != l_1309)) != 0x3538L) >= ((((-3L) != 0xF80EF51916059D53LL) , (-2L)) || l_1310));
            for (l_1087.f1.f2 = 0; (l_1087.f1.f2 >= 0); l_1087.f1.f2 -= 1)
            { 
                uint64_t l_1311 = 0UL;
                --l_1311;
                for (g_322 = 0; (g_322 <= 0); g_322 += 1)
                { 
                    uint8_t * const ****l_1314 = &g_1057[1][4];
                    int32_t l_1315 = (-9L);
                    union U3 ****l_1317 = (void*)0;
                    int8_t l_1333 = (-1L);
                    uint16_t *l_1335 = &g_192;
                    int i, j, k;
                    (*l_1314) = &g_1058;
                    l_1310 &= (l_1017 &= ((((*l_1335) = (((l_1315 , (((l_1316 != (l_1318 = &g_131)) | (((safe_rshift_func_int16_t_s_s(g_1073.f1, (((~(safe_rshift_func_uint8_t_u_s(((void*)0 != l_1324), 0))) <= (safe_div_func_uint32_t_u_u((((+((safe_mul_func_uint16_t_u_u((((+((safe_div_func_uint16_t_u_u((p_15 == g_175.f2), l_1333)) == 0x96L)) < 4294967287UL) > p_19), l_1334[0])) || p_19)) <= g_160[5][0]) < p_16), 4294967289UL))) && l_1315))) & g_322) < p_15)) || 0xF865L)) != p_16) <= p_19)) >= (*l_893)) || g_111.f1));
                    return (*g_142);
                }
            }
        }
    }
    (*l_996) ^= ((0xF41E5B86L & p_15) >= (g_175.f0 | (*l_893)));
    return l_1336;
}



static int64_t  func_22(union U4 * const  p_23, uint16_t  p_24, struct S0  p_25, const union U4 * p_26)
{ 
    int32_t *l_767 = &g_731;
    int32_t l_781 = 0x76C1CD33L;
    int32_t l_783 = 0L;
    int32_t l_786 = (-7L);
    int32_t l_787 = (-1L);
    int32_t l_788[6] = {(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)};
    uint32_t l_790 = 5UL;
    union U3 l_806 = {0x81L};
    struct S2 l_807 = {0xA4F6A6AFL,0x03CDL,-4L};
    int i;
    for (g_322 = 1; (g_322 <= 5); g_322 += 1)
    { 
        uint16_t l_757[7][5] = {{0UL,2UL,0xD5EEL,2UL,0UL},{0UL,2UL,0xD5EEL,2UL,0UL},{0UL,2UL,0xD5EEL,2UL,0UL},{0UL,2UL,0xD5EEL,2UL,0UL},{0UL,2UL,0xD5EEL,2UL,0UL},{0UL,2UL,0xD5EEL,2UL,0UL},{0UL,2UL,0xD5EEL,2UL,0UL}};
        struct S1 l_760 = {0xA687F646D5632E8ELL,0x5D830787627400BFLL,0x10E0E2FB38577A0BLL};
        int32_t l_768 = 0xB99EA2AAL;
        int32_t l_784 = 0x70CF5819L;
        int32_t l_785[6];
        int32_t l_789 = 0L;
        union U3 * const *l_801 = &g_132[1][3][1];
        int i, j;
        for (i = 0; i < 6; i++)
            l_785[i] = 0x036A897DL;
        for (g_363 = 0; (g_363 <= 0); g_363 += 1)
        { 
            uint8_t l_772 = 255UL;
            int32_t *l_775 = (void*)0;
            int32_t *l_776 = &g_413.f1;
            int32_t *l_777 = &g_341;
            int32_t *l_778 = &g_365[1];
            int32_t *l_779 = &g_731;
            int32_t l_780 = (-5L);
            int32_t *l_782[1];
            int i;
            for (i = 0; i < 1; i++)
                l_782[i] = (void*)0;
            for (g_67.f1.f1 = 3; (g_67.f1.f1 >= 0); g_67.f1.f1 -= 1)
            { 
                uint8_t l_769 = 255UL;
                int i, j;
                if (g_241[(g_363 + 2)][(g_67.f1.f1 + 1)])
                    break;
                if (g_241[(g_67.f1.f1 + 1)][(g_363 + 2)])
                { 
                    struct S1 *l_761 = &l_760;
                    int i, j;
                    if (g_160[g_322][g_363])
                        break;
                    if (p_25.f3)
                        continue;
                    p_25.f1 = p_24;
                    l_757[3][1]++;
                    (*l_761) = l_760;
                }
                else
                { 
                    struct S0 **l_762 = (void*)0;
                    struct S0 *l_764 = &g_111;
                    struct S0 **l_763 = &l_764;
                    (*l_763) = &p_25;
                }
                if (p_24)
                    break;
                if (p_25.f0)
                    break;
                for (g_320 = 0; (g_320 <= 5); g_320 += 1)
                { 
                    int32_t *l_765[1][3][6];
                    int32_t **l_766[6][1][3] = {{{&g_372,&g_372,&g_372}},{{&g_372,&g_372,&g_372}},{{&g_372,&g_372,&g_372}},{{&g_372,&g_372,&g_372}},{{&g_372,&g_372,&g_372}},{{&g_372,&g_372,&g_372}}};
                    int i, j, k;
                    for (i = 0; i < 1; i++)
                    {
                        for (j = 0; j < 3; j++)
                        {
                            for (k = 0; k < 6; k++)
                                l_765[i][j][k] = (void*)0;
                        }
                    }
                    l_767 = l_765[0][2][1];
                    --l_769;
                    l_772++;
                    if (p_25.f0)
                        continue;
                }
            }
            if (p_25.f3)
                continue;
            ++l_790;
            return l_757[3][1];
        }
        for (p_25.f3 = 1; (p_25.f3 <= 4); p_25.f3 += 1)
        { 
            union U3 l_805 = {2L};
            uint8_t *l_824 = &g_343;
            uint8_t **l_823 = &l_824;
            uint8_t ***l_822[3][4] = {{&l_823,&l_823,&l_823,&l_823},{&l_823,&l_823,&l_823,&l_823},{&l_823,&l_823,&l_823,&l_823}};
            uint8_t ****l_821 = &l_822[1][2];
            int i, j;
            for (g_413.f2 = 1; (g_413.f2 <= 4); g_413.f2 += 1)
            { 
                union U3 * const **l_802 = &l_801;
                union U3 l_803 = {0xCCL};
                union U3 *l_804 = &l_803;
                uint16_t *l_808 = &g_192;
                int i, j;
                if (((safe_add_func_int64_t_s_s(((p_25.f1 = (safe_sub_func_uint16_t_u_u(((*l_808) &= (((g_241[g_322][g_413.f2] <= (((safe_mod_func_uint32_t_u_u((l_785[2] |= 0UL), g_241[(g_413.f2 + 1)][p_25.f3])) <= ((safe_rshift_func_int8_t_s_s((((*l_802) = l_801) == ((l_760 , p_25.f1) , &g_132[1][0][1])), 2)) | p_25.f0)) && l_805.f0)) , 0x62D9608A6E76C9CELL) ^ 0x077C2036DF940BBBLL)), g_318))) >= 0xBF6497F4L), 0xF71A7401E656B98BLL)) > p_25.f2))
                { 
                    uint32_t l_817 = 1UL;
                    uint8_t *****l_825 = &l_821;
                    g_38 = (safe_add_func_int32_t_s_s((((safe_add_func_int64_t_s_s((*g_427), (safe_sub_func_uint16_t_u_u(g_261[0][4][0], (safe_sub_func_uint16_t_u_u(((g_111.f2 > (l_817 == (((*l_825) = ((safe_unary_minus_func_uint32_t_u((p_25.f1 & (safe_mul_func_uint64_t_u_u((l_805.f0 | (g_70.f0 >= l_817)), 0L))))) , l_821)) != g_826))) , 0UL), g_111.f3)))))) != g_241[(g_413.f2 + 1)][p_25.f3]) , g_341), g_241[g_322][g_413.f2]));
                    if (g_413.f2)
                        break;
                }
                else
                { 
                    if (g_4.f2)
                        break;
                }
            }
            return (*g_427);
        }
    }
    for (g_67.f0 = (-22); (g_67.f0 < (-21)); ++g_67.f0)
    { 
        const struct S1 * const ***l_834 = &g_830;
        const struct S1 * const ****l_833 = &l_834;
        (*l_833) = g_829;
    }
    return l_786;
}



static union U4 * func_27(uint64_t  p_28, union U4 ** p_29, struct S0  p_30, union U4 ** const  p_31, int32_t  p_32)
{ 
    int32_t l_450 = 0x16C99245L;
    int32_t *l_453 = (void*)0;
    int32_t *l_454 = &g_365[0];
    int32_t *l_455[3];
    uint32_t l_456 = 0xD1BED2D7L;
    struct S1 l_473 = {0xEB19ADC55AE20D0FLL,0L,-1L};
    int32_t l_583 = 0x713B114CL;
    uint32_t l_592 = 0x90D3998EL;
    uint64_t l_606 = 0xB52B39CA8FA26031LL;
    const int64_t *l_609 = &g_70.f2;
    uint64_t l_620 = 0xC384EF6FB81D8130LL;
    const uint8_t *l_637 = &g_343;
    const uint8_t * const *l_636 = &l_637;
    const uint8_t * const **l_635 = &l_636;
    const uint8_t * const ***l_634 = &l_635;
    struct S2 l_665 = {4L,0x6A2AL,0x250F4ED5C908C8E7LL};
    uint8_t l_721 = 0UL;
    int64_t l_743 = 0xA8EF091C5A802424LL;
    uint16_t *l_744 = (void*)0;
    uint16_t *l_745 = &g_207;
    struct S1 *l_754 = &g_67.f1;
    uint8_t *l_755 = &l_721;
    union U4 *l_756[1];
    int i;
    for (i = 0; i < 3; i++)
        l_455[i] = (void*)0;
    for (i = 0; i < 1; i++)
        l_756[i] = &g_4;
    (*l_454) ^= (safe_add_func_uint64_t_u_u(((safe_mod_func_uint64_t_u_u(0xF15DCCE0515C32A6LL, l_450)) & 1UL), (safe_lshift_func_uint8_t_u_u(g_241[5][3], 2))));
    ++l_456;
    for (l_450 = 1; (l_450 < (-20)); --l_450)
    { 
        int32_t l_461 = 0x3E985698L;
        int32_t l_462 = 0x74C524F2L;
        int32_t l_483 = 1L;
        int32_t *l_523 = &g_413.f1;
        struct S2 l_528 = {0xA4A9BB5FL,1UL,1L};
        int64_t *l_531 = &l_473.f2;
        int8_t l_550[4];
        int32_t l_598 = 0x9DD61B1FL;
        int32_t l_599 = 0xA85D321FL;
        int32_t l_600 = 0x11B6551EL;
        uint32_t l_601 = 4294967290UL;
        union U3 l_675 = {0x53L};
        struct S1 l_716[2][4][5] = {{{{5L,0x9FA7DEAD4E5D1936LL,0x15089FF922532A27LL},{5L,0x9FA7DEAD4E5D1936LL,0x15089FF922532A27LL},{0x4146269CC0577D2ALL,0x05F054BA17D3BC30LL,0x58A8CEE3642F542ALL},{5L,0x9FA7DEAD4E5D1936LL,0x15089FF922532A27LL},{5L,0x9FA7DEAD4E5D1936LL,0x15089FF922532A27LL}},{{9L,0L,0x9842511A1793FA9ELL},{0xC883D79E6638E3FELL,0xA3D54F9CC4B92229LL,-8L},{9L,0L,0x9842511A1793FA9ELL},{0xC8ED6AD76DAA0823LL,0x3557E5EFEA8B2FBCLL,2L},{0x3A34C2ED97C8F478LL,0L,0xAADE27DFE5AC88ABLL}},{{5L,0x9FA7DEAD4E5D1936LL,0x15089FF922532A27LL},{0xB80B1B9680955439LL,0x9321D2689CBB481ALL,1L},{0xB80B1B9680955439LL,0x9321D2689CBB481ALL,1L},{5L,0x9FA7DEAD4E5D1936LL,0x15089FF922532A27LL},{0xB80B1B9680955439LL,0x9321D2689CBB481ALL,1L}},{{0x3A34C2ED97C8F478LL,0L,0xAADE27DFE5AC88ABLL},{0xC883D79E6638E3FELL,0xA3D54F9CC4B92229LL,-8L},{0x2532375E6F167450LL,0xF7B8A3C27231E8CELL,0xA165BD3B2C689F35LL},{0xC883D79E6638E3FELL,0xA3D54F9CC4B92229LL,-8L},{0x3A34C2ED97C8F478LL,0L,0xAADE27DFE5AC88ABLL}}},{{{0xB80B1B9680955439LL,0x9321D2689CBB481ALL,1L},{5L,0x9FA7DEAD4E5D1936LL,0x15089FF922532A27LL},{0xB80B1B9680955439LL,0x9321D2689CBB481ALL,1L},{0xB80B1B9680955439LL,0x9321D2689CBB481ALL,1L},{5L,0x9FA7DEAD4E5D1936LL,0x15089FF922532A27LL}},{{0x3A34C2ED97C8F478LL,0L,0xAADE27DFE5AC88ABLL},{0xC8ED6AD76DAA0823LL,0x3557E5EFEA8B2FBCLL,2L},{9L,0L,0x9842511A1793FA9ELL},{0xC883D79E6638E3FELL,0xA3D54F9CC4B92229LL,-8L},{9L,0L,0x9842511A1793FA9ELL}},{{5L,0x9FA7DEAD4E5D1936LL,0x15089FF922532A27LL},{5L,0x9FA7DEAD4E5D1936LL,0x15089FF922532A27LL},{0x4146269CC0577D2ALL,0x05F054BA17D3BC30LL,0x58A8CEE3642F542ALL},{5L,0x9FA7DEAD4E5D1936LL,0x15089FF922532A27LL},{5L,0x9FA7DEAD4E5D1936LL,0x15089FF922532A27LL}},{{9L,0L,0x9842511A1793FA9ELL},{0xC883D79E6638E3FELL,0xA3D54F9CC4B92229LL,-8L},{9L,0L,0x9842511A1793FA9ELL},{0xC8ED6AD76DAA0823LL,0x3557E5EFEA8B2FBCLL,2L},{0x3A34C2ED97C8F478LL,0L,0xAADE27DFE5AC88ABLL}}}};
        union U4 l_717 = {0UL};
        int i, j, k;
        for (i = 0; i < 4; i++)
            l_550[i] = 0x7EL;
    }
    g_38 |= ((safe_lshift_func_int16_t_s_u((p_30.f1 , ((safe_div_func_int64_t_s_s((safe_sub_func_int64_t_s_s(((+(((*l_745)--) >= g_160[0][0])) & p_32), (safe_mul_func_uint8_t_u_u(g_111.f3, ((safe_lshift_func_uint16_t_u_s((safe_div_func_uint64_t_u_u(((((*l_754) = l_473) , g_70) , (((*l_755) = g_731) == g_361)), 7L)), (*l_454))) , (*l_454)))))), 0xDBABF852652BFF7ELL)) , 0L)), 11)) && (*g_427));
    l_455[1] = (p_30.f3 , &g_365[0]);
    return l_756[0];
}



static union U4 ** func_33(uint64_t  p_34, union U3  p_35)
{ 
    int32_t *l_37 = &g_38;
    int32_t l_50 = 0x58698962L;
    struct S1 l_441[2] = {{0xFF8E7BD97CFE254ELL,1L,0L},{0xFF8E7BD97CFE254ELL,1L,0L}};
    union U4 **l_442 = &g_143;
    int i;
    l_37 = l_37;
    for (p_35.f1.f1 = 0; (p_35.f1.f1 < (-13)); p_35.f1.f1 = safe_sub_func_int32_t_s_s(p_35.f1.f1, 4))
    { 
        int32_t *l_71 = (void*)0;
        union U4 **l_443 = &g_143;
        g_38 &= (safe_unary_minus_func_int16_t_s(0x717CL));
        for (p_34 = 9; (p_34 != 59); p_34++)
        { 
            int32_t *l_68 = &g_38;
            for (g_38 = (-24); (g_38 == 0); g_38 = safe_add_func_int32_t_s_s(g_38, 1))
            { 
                int32_t *l_46 = &g_47;
                int32_t *l_48 = &g_47;
                int32_t *l_49 = &g_47;
                int32_t *l_51 = &l_50;
                int32_t *l_52 = &g_47;
                int32_t *l_53 = &l_50;
                int32_t *l_54 = &l_50;
                int32_t *l_55 = &g_47;
                int32_t *l_56 = (void*)0;
                int32_t *l_57 = &l_50;
                g_58++;
                if ((*l_52))
                { 
                    int32_t **l_69 = &l_55;
                    l_441[0] = func_61(p_35, g_67, ((*l_69) = l_68), g_70, l_71);
                }
                else
                { 
                    return l_442;
                }
                return l_443;
            }
        }
    }
    return l_442;
}



static struct S1  func_61(union U3  p_62, union U3  p_63, int32_t * p_64, struct S2  p_65, int32_t * p_66)
{ 
    struct S1 l_72 = {0x14E288A3D85AA7F7LL,0x4FC7BC07E7F6F8F6LL,0x3D9D76C132D45AB6LL};
    struct S1 *l_73 = (void*)0;
    struct S1 *l_74 = &g_67.f1;
    uint8_t l_75[4][5][5] = {{{0xC6L,0xC6L,1UL,0xA0L,0x85L},{0xF6L,0UL,255UL,0xF6L,255UL},{0xE5L,1UL,255UL,255UL,1UL},{255UL,0UL,247UL,0x22L,0x22L},{0UL,0xC6L,0UL,255UL,255UL}},{{1UL,0xA4L,0x63L,255UL,247UL},{1UL,0UL,0x85L,255UL,0x0DL},{0x52L,0x86L,0x63L,247UL,0xF6L},{0UL,0UL,0UL,0UL,6UL},{255UL,1UL,0x22L,255UL,1UL}},{{6UL,1UL,1UL,8UL,255UL},{0xE0L,0x52L,0x06L,255UL,0x63L},{255UL,0UL,0xC6L,0UL,255UL},{0x06L,255UL,0x52L,247UL,0x86L},{0x0DL,6UL,8UL,255UL,0x8AL}},{{255UL,0xE0L,9UL,255UL,0x86L},{0x8DL,255UL,1UL,1UL,255UL},{0x86L,0x06L,0UL,1UL,0x63L},{1UL,0x0DL,0xA0L,0x20L,255UL},{247UL,255UL,0x63L,0xA4L,1UL}}};
    uint64_t l_125 = 0x19B16196426D5D5ELL;
    int32_t l_133 = 0L;
    union U4 **l_176[2];
    int16_t l_190[4][3][4] = {{{0xC8BFL,0xC8BFL,0xC8BFL,0xC8BFL},{0xC8BFL,0xC8BFL,0xC8BFL,0xC8BFL},{0xC8BFL,0xC8BFL,0xC8BFL,0xC8BFL}},{{0xC8BFL,0xC8BFL,0xC8BFL,0xC8BFL},{0xC8BFL,0xC8BFL,0xC8BFL,0xC8BFL},{0xC8BFL,0xC8BFL,0xC8BFL,0xC8BFL}},{{0xC8BFL,0xC8BFL,0xC8BFL,0xC8BFL},{0xC8BFL,0xC8BFL,0xC8BFL,0xC8BFL},{0xC8BFL,0xC8BFL,0xC8BFL,0xC8BFL}},{{0xC8BFL,0xC8BFL,0xC8BFL,0xC8BFL},{0xC8BFL,0xC8BFL,0xC8BFL,0xC8BFL},{0xC8BFL,0xC8BFL,0xC8BFL,0xC8BFL}}};
    union U4 ***l_245[1][6];
    union U4 ****l_244 = &l_245[0][5];
    const struct S1 *l_306 = &l_72;
    const struct S1 **l_305 = &l_306;
    int64_t l_312 = 1L;
    int32_t l_321 = 0L;
    int32_t l_359 = 0x764AD00BL;
    int32_t l_360[7][1][2] = {{{(-1L),(-10L)}},{{(-1L),(-1L)}},{{(-10L),(-1L)}},{{(-1L),(-10L)}},{{(-1L),(-1L)}},{{(-10L),(-1L)}},{{(-1L),(-10L)}}};
    int32_t l_366[1];
    struct S1 *l_371 = &l_72;
    uint64_t l_407[7][5] = {{4UL,4UL,0UL,4UL,4UL},{0x04C0A7E6444ABEB6LL,4UL,0x04C0A7E6444ABEB6LL,0x04C0A7E6444ABEB6LL,4UL},{4UL,0x04C0A7E6444ABEB6LL,0x04C0A7E6444ABEB6LL,4UL,0x04C0A7E6444ABEB6LL},{4UL,4UL,0UL,4UL,4UL},{0x04C0A7E6444ABEB6LL,4UL,0x04C0A7E6444ABEB6LL,0x04C0A7E6444ABEB6LL,4UL},{4UL,0x04C0A7E6444ABEB6LL,0x04C0A7E6444ABEB6LL,4UL,0x04C0A7E6444ABEB6LL},{4UL,4UL,0UL,4UL,4UL}};
    struct S0 *l_412 = &g_413;
    int32_t l_428 = 0xDB1D9BC2L;
    uint32_t l_430 = 1UL;
    uint32_t *l_438 = &g_67.f3;
    int32_t *l_439[7][7][3] = {{{(void*)0,&g_365[0],(void*)0},{(void*)0,&l_321,&l_360[1][0][0]},{(void*)0,&l_360[0][0][1],(void*)0},{&g_365[1],&l_359,&g_365[0]},{&g_111.f1,&g_47,&g_47},{&l_321,&l_321,&g_413.f1},{(void*)0,&g_365[1],&g_111.f1}},{{&l_359,&g_365[0],&l_321},{(void*)0,&g_365[0],&g_47},{&l_359,&l_321,&l_359},{&l_321,&l_360[0][0][1],&g_111.f1},{&l_321,&l_321,&l_321},{&g_47,&g_365[0],&g_38},{&g_365[1],&g_365[0],&l_360[1][0][0]}},{{&g_47,&g_365[1],(void*)0},{&l_360[1][0][0],&g_365[1],&l_360[1][0][0]},{(void*)0,&g_365[0],&g_38},{&g_365[0],&l_321,&l_321},{&g_111.f1,(void*)0,&g_111.f1},{(void*)0,&l_359,&l_359},{&g_111.f1,&l_359,&g_47}},{{&g_365[0],&l_321,&l_321},{(void*)0,&g_365[0],&g_111.f1},{&l_360[1][0][0],&l_321,&l_321},{&g_47,&g_365[0],(void*)0},{&g_365[1],&l_321,&g_413.f1},{&g_47,&l_359,&l_321},{&l_321,&l_359,&l_321}},{{&l_321,(void*)0,&l_321},{&l_359,&l_321,&g_413.f1},{(void*)0,&g_365[0],(void*)0},{&l_359,&g_365[1],&l_321},{(void*)0,&g_365[1],&g_111.f1},{&l_359,&g_365[0],&l_321},{(void*)0,&g_365[0],&g_47}},{{&l_359,&l_321,&l_359},{&l_321,&l_360[0][0][1],&g_111.f1},{&l_321,&l_321,&l_321},{&g_47,&g_365[0],&g_38},{&g_365[1],&g_365[0],&l_360[1][0][0]},{&g_47,&g_365[1],(void*)0},{&l_360[1][0][0],&g_365[1],&l_360[1][0][0]}},{{(void*)0,&g_365[0],&g_38},{&g_365[0],&l_321,&l_321},{&g_111.f1,(void*)0,&g_111.f1},{(void*)0,&l_359,&l_359},{&g_111.f1,&l_359,&g_47},{&g_365[0],&l_321,&l_321},{(void*)0,&g_365[0],&g_111.f1}}};
    struct S1 l_440[5] = {{0x5CAC77EB58A76623LL,1L,0xA1C93ACC4F948275LL},{0x5CAC77EB58A76623LL,1L,0xA1C93ACC4F948275LL},{0x5CAC77EB58A76623LL,1L,0xA1C93ACC4F948275LL},{0x5CAC77EB58A76623LL,1L,0xA1C93ACC4F948275LL},{0x5CAC77EB58A76623LL,1L,0xA1C93ACC4F948275LL}};
    int i, j, k;
    for (i = 0; i < 2; i++)
        l_176[i] = &g_143;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 6; j++)
            l_245[i][j] = &l_176[0];
    }
    for (i = 0; i < 1; i++)
        l_366[i] = 2L;
    (*l_74) = l_72;
lbl_266:
    for (p_62.f1.f2 = 3; (p_62.f1.f2 >= 0); p_62.f1.f2 -= 1)
    { 
        union U4 l_88 = {0xF5E13573L};
        struct S1 *l_98 = (void*)0;
        int32_t *l_99 = &g_38;
        struct S1 * const *l_102 = &l_74;
        struct S1 * const **l_101 = &l_102;
        union U4 **l_144 = (void*)0;
        int32_t l_204 = (-6L);
        int32_t l_235 = 8L;
        int32_t l_239 = 0x09FF84D3L;
        union U4 *****l_246 = &l_244;
        int32_t *l_247 = (void*)0;
        int32_t *l_248 = &g_47;
        int32_t *l_249 = &l_239;
        int32_t *l_250 = (void*)0;
        int32_t *l_251 = &g_47;
        int32_t *l_252 = &l_204;
        int32_t *l_253 = &l_235;
        int32_t *l_254 = &l_239;
        int32_t *l_255 = &g_47;
        int32_t *l_256[3];
        uint64_t l_257 = 18446744073709551610UL;
        int i;
        for (i = 0; i < 3; i++)
            l_256[i] = (void*)0;
        for (g_67.f1.f2 = 3; (g_67.f1.f2 >= 0); g_67.f1.f2 -= 1)
        { 
            uint64_t *l_78 = (void*)0;
            uint64_t *l_79 = &g_58;
            const int32_t l_89 = 0xF9E473B9L;
            int32_t *l_100 = &g_47;
            union U4 **l_145[4];
            int32_t l_161 = 8L;
            struct S1 *l_224[4][4] = {{&g_67.f1,&g_67.f1,&g_67.f1,&g_67.f1},{&g_67.f1,&g_67.f1,&g_67.f1,&g_67.f1},{&g_67.f1,&g_67.f1,&g_67.f1,&g_67.f1},{&g_67.f1,&g_67.f1,&g_67.f1,&g_67.f1}};
            int32_t **l_227 = &l_100;
            int32_t l_228 = 3L;
            int32_t l_233 = 1L;
            int32_t l_234 = 0xD8287281L;
            int32_t l_237 = (-1L);
            int32_t l_238 = 0x893F3FD8L;
            int i, j;
            for (i = 0; i < 4; i++)
                l_145[i] = &g_143;
        }
        if ((*p_64))
            continue;
        if (l_72.f2)
            goto lbl_266;
        (*l_246) = l_244;
        ++l_257;
        for (l_72.f0 = 3; (l_72.f0 >= 0); l_72.f0 -= 1)
        { 
            int32_t **l_260 = &l_99;
            struct S1 l_265 = {0x168D3E8134282E36LL,-1L,1L};
            (*l_260) = p_64;
            if (l_257)
                goto lbl_266;
            for (g_207 = 0; (g_207 <= 3); g_207 += 1)
            { 
                ++g_262;
            }
            return l_265;
        }
    }
    for (p_63.f0 = 0; (p_63.f0 <= (-17)); p_63.f0 = safe_sub_func_int8_t_s_s(p_63.f0, 3))
    { 
        uint32_t l_292 = 4294967295UL;
        uint8_t l_313 = 0x84L;
        int32_t l_317 = 0L;
        int32_t l_319 = 0x5C46C033L;
        int32_t l_333 = (-1L);
        int32_t l_346[5];
        int32_t *l_347 = &l_333;
        int32_t *l_348 = &g_47;
        int32_t *l_349 = &g_47;
        int32_t *l_350 = (void*)0;
        int32_t *l_351 = &g_341;
        int32_t *l_352[5];
        uint8_t *l_357 = (void*)0;
        uint8_t **l_356 = &l_357;
        uint8_t ***l_358 = &l_356;
        uint64_t l_367 = 0xE11E62F85C31C414LL;
        uint16_t *l_370[7][3][6] = {{{&g_192,&g_192,&g_192,&g_207,&g_207,&g_192},{&g_207,&g_207,&g_207,&g_207,&g_207,&g_192},{&g_207,&g_192,&g_207,&g_207,&g_207,&g_207}},{{&g_207,&g_192,&g_207,&g_207,(void*)0,&g_192},{&g_192,&g_192,&g_207,&g_192,&g_207,&g_192},{&g_192,&g_192,&g_192,&g_207,&g_207,&g_192}},{{&g_207,&g_207,&g_207,&g_207,&g_207,&g_207},{(void*)0,&g_192,(void*)0,(void*)0,&g_207,&g_207},{&g_207,&g_192,(void*)0,&g_207,&g_207,&g_207}},{{(void*)0,&g_192,(void*)0,&g_192,&g_207,&g_192},{(void*)0,&g_192,(void*)0,&g_207,&g_192,&g_192},{&g_207,&g_207,(void*)0,(void*)0,&g_192,&g_207}},{{(void*)0,&g_192,(void*)0,(void*)0,&g_207,&g_207},{&g_207,&g_192,(void*)0,&g_207,&g_207,&g_207},{(void*)0,&g_192,(void*)0,&g_192,&g_207,&g_192}},{{(void*)0,&g_192,(void*)0,&g_207,&g_192,&g_192},{&g_207,&g_207,(void*)0,(void*)0,&g_192,&g_207},{(void*)0,&g_192,(void*)0,(void*)0,&g_207,&g_207}},{{&g_207,&g_192,(void*)0,&g_207,&g_207,&g_207},{(void*)0,&g_192,(void*)0,&g_192,&g_207,&g_192},{(void*)0,&g_192,(void*)0,&g_207,&g_192,&g_192}}};
        uint16_t l_401 = 0x2349L;
        int32_t l_406[4] = {2L,2L,2L,2L};
        int i, j, k;
        for (i = 0; i < 5; i++)
            l_346[i] = 0x0FE3B470L;
        for (i = 0; i < 5; i++)
            l_352[i] = &l_319;
        for (g_192 = 0; (g_192 < 55); g_192 = safe_add_func_int16_t_s_s(g_192, 2))
        { 
            int64_t l_273 = 2L;
            union U4 **** const l_280 = (void*)0;
            int16_t *l_281[2];
            uint32_t *l_282 = &g_67.f3;
            int8_t *l_283 = &g_261[0][4][0];
            const uint8_t l_288 = 0x10L;
            int8_t *l_291 = &g_67.f0;
            struct S1 **l_304 = &l_73;
            uint64_t l_314 = 18446744073709551615UL;
            int16_t l_315 = 0xA2C0L;
            int32_t l_342 = 0x5D6D75DEL;
            int i;
            for (i = 0; i < 2; i++)
                l_281[i] = &g_236[4][0];
            if (g_167[3][1])
                break;
        }
        g_353++;
        (*l_358) = l_356;
        --l_367;
        if (((void*)0 == l_370[1][0][2]))
        { 
            union U4 **l_376 = &g_143;
            int32_t l_385 = 1L;
            int16_t *l_386 = (void*)0;
            int16_t *l_387 = &l_190[0][1][2];
            (*g_90) = l_371;
            g_372 = &g_38;
            p_66 = ((g_4.f1 < ((((*l_387) = ((safe_rshift_func_int16_t_s_s(((~(0x7B53C0D5L | ((l_366[0] , ((void*)0 != l_376)) < (safe_div_func_uint16_t_u_u(p_62.f0, (safe_mod_func_int8_t_s_s((((((((safe_lshift_func_int16_t_s_s((safe_lshift_func_uint8_t_u_u((((void*)0 == &g_91) , 249UL), 0)), 14)) , 0UL) != 0x5CF390D4E87DCAFDLL) || l_385) , p_63.f0) && g_261[1][2][0]) == g_167[2][0]), 0x13L))))))) != l_366[0]), 1)) > g_111.f2)) ^ p_63.f0) == p_63.f0)) , (void*)0);
        }
        else
        { 
            int16_t l_394[1];
            int32_t l_404 = 0xD3E90253L;
            int32_t l_405[1];
            struct S0 *l_411[1];
            struct S0 **l_410[6] = {&l_411[0],&l_411[0],&l_411[0],&l_411[0],&l_411[0],&l_411[0]};
            uint32_t *l_429 = &g_262;
            int i;
            for (i = 0; i < 1; i++)
                l_394[i] = 1L;
            for (i = 0; i < 1; i++)
                l_405[i] = 0x5329830DL;
            for (i = 0; i < 1; i++)
                l_411[i] = &g_111;
            for (l_72.f2 = 0; (l_72.f2 <= 1); l_72.f2 += 1)
            { 
                int32_t **l_388 = &l_350;
                if ((*p_64))
                    break;
                (*l_388) = &g_341;
                for (g_262 = 0; (g_262 <= 1); g_262 += 1)
                { 
                    int8_t *l_393 = &g_362[4];
                    uint8_t **l_402 = &l_357;
                    int32_t l_403 = 0L;
                    (*l_348) ^= (safe_rshift_func_uint8_t_u_s(((safe_mod_func_uint32_t_u_u((((*l_393) = 0xB3L) , (l_394[0] , ((0x4EA3L <= (safe_mul_func_int16_t_s_s(((safe_div_func_uint16_t_u_u(p_62.f0, 1UL)) , (safe_add_func_uint16_t_u_u(((l_401 != (((*l_358) = l_402) != (void*)0)) || l_394[0]), 0xF734L))), l_403))) > p_63.f0))), (*p_64))) | p_65.f0), p_62.f0));
                    (*l_349) ^= (((*p_64) | (*p_64)) ^ 0UL);
                }
            }
            l_407[1][0]--;
            l_412 = &g_111;
            (*l_351) = (!(g_167[3][0] > ((*l_429) = ((0x42D54450L > 0x2A901A7BL) < ((l_405[0] &= (safe_lshift_func_uint16_t_u_u(((safe_mul_func_int8_t_s_s(l_394[0], ((safe_sub_func_uint32_t_u_u(((safe_lshift_func_uint8_t_u_s(((safe_div_func_uint8_t_u_u((((l_412 == &g_111) < (safe_lshift_func_uint8_t_u_s((((((((g_427 != &l_312) < (*l_351)) , l_428) & (*l_351)) , (*g_131)) == (void*)0) ^ l_133), 0))) || (*g_427)), 252UL)) <= (*l_349)), 2)) == p_62.f0), (*p_64))) , p_65.f1))) && (*g_427)), p_63.f0))) , (-9L))))));
            l_430++;
        }
    }
    g_365[0] = ((l_407[1][0] || (safe_sub_func_int8_t_s_s(((+(p_62 , (l_190[2][1][0] >= (safe_lshift_func_int8_t_s_u((p_65.f1 & g_67.f2), 4))))) && ((*l_438) = ((((l_72.f2 > 248UL) | 0x8817E3DAL) , l_72.f0) ^ l_407[3][3]))), 0x92L))) < 0xEB870A25L);
    g_413.f1 = (*p_64);
    return l_440[4];
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_4.f0, "g_4.f0", print_hash_value);
    transparent_crc(g_4.f1, "g_4.f1", print_hash_value);
    transparent_crc(g_4.f2, "g_4.f2", print_hash_value);
    transparent_crc(g_38, "g_38", print_hash_value);
    transparent_crc(g_47, "g_47", print_hash_value);
    transparent_crc(g_58, "g_58", print_hash_value);
    transparent_crc(g_67.f0, "g_67.f0", print_hash_value);
    transparent_crc(g_70.f0, "g_70.f0", print_hash_value);
    transparent_crc(g_70.f1, "g_70.f1", print_hash_value);
    transparent_crc(g_70.f2, "g_70.f2", print_hash_value);
    transparent_crc(g_111.f0, "g_111.f0", print_hash_value);
    transparent_crc(g_111.f1, "g_111.f1", print_hash_value);
    transparent_crc(g_111.f2, "g_111.f2", print_hash_value);
    transparent_crc(g_111.f3, "g_111.f3", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 1; j++)
        {
            transparent_crc(g_160[i][j], "g_160[i][j]", print_hash_value);

        }
    }
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transparent_crc(g_167[i][j], "g_167[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_175.f0, "g_175.f0", print_hash_value);
    transparent_crc(g_175.f1, "g_175.f1", print_hash_value);
    transparent_crc(g_175.f2, "g_175.f2", print_hash_value);
    transparent_crc(g_192, "g_192", print_hash_value);
    transparent_crc(g_207, "g_207", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(g_236[i][j], "g_236[i][j]", print_hash_value);

        }
    }
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 5; j++)
        {
            transparent_crc(g_241[i][j], "g_241[i][j]", print_hash_value);

        }
    }
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 7; j++)
        {
            for (k = 0; k < 1; k++)
            {
                transparent_crc(g_261[i][j][k], "g_261[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_262, "g_262", print_hash_value);
    transparent_crc(g_318, "g_318", print_hash_value);
    transparent_crc(g_320, "g_320", print_hash_value);
    transparent_crc(g_322, "g_322", print_hash_value);
    transparent_crc(g_341, "g_341", print_hash_value);
    transparent_crc(g_343, "g_343", print_hash_value);
    transparent_crc(g_353, "g_353", print_hash_value);
    transparent_crc(g_361, "g_361", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(g_362[i], "g_362[i]", print_hash_value);

    }
    transparent_crc(g_363, "g_363", print_hash_value);
    transparent_crc(g_364, "g_364", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_365[i], "g_365[i]", print_hash_value);

    }
    transparent_crc(g_413.f0, "g_413.f0", print_hash_value);
    transparent_crc(g_413.f1, "g_413.f1", print_hash_value);
    transparent_crc(g_413.f2, "g_413.f2", print_hash_value);
    transparent_crc(g_413.f3, "g_413.f3", print_hash_value);
    transparent_crc(g_697, "g_697", print_hash_value);
    transparent_crc(g_731, "g_731", print_hash_value);
    transparent_crc(g_852, "g_852", print_hash_value);
    transparent_crc(g_1073.f0, "g_1073.f0", print_hash_value);
    transparent_crc(g_1073.f1, "g_1073.f1", print_hash_value);
    transparent_crc(g_1073.f2, "g_1073.f2", print_hash_value);
    transparent_crc(g_1179.f0, "g_1179.f0", print_hash_value);
    transparent_crc(g_1179.f1, "g_1179.f1", print_hash_value);
    transparent_crc(g_1179.f2, "g_1179.f2", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 1; k++)
            {
                transparent_crc(g_1301[i][j][k].f0, "g_1301[i][j][k].f0", print_hash_value);
                transparent_crc(g_1301[i][j][k].f1, "g_1301[i][j][k].f1", print_hash_value);
                transparent_crc(g_1301[i][j][k].f2, "g_1301[i][j][k].f2", print_hash_value);
                transparent_crc(g_1301[i][j][k].f3, "g_1301[i][j][k].f3", print_hash_value);

            }
        }
    }
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_1303[i], "g_1303[i]", print_hash_value);

    }
    transparent_crc(g_1395, "g_1395", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 1; j++)
        {
            transparent_crc(g_1417[i][j], "g_1417[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_1446.f0, "g_1446.f0", print_hash_value);
    transparent_crc(g_1446.f1, "g_1446.f1", print_hash_value);
    transparent_crc(g_1446.f2, "g_1446.f2", print_hash_value);
    transparent_crc(g_1446.f3, "g_1446.f3", print_hash_value);
    transparent_crc(g_1577, "g_1577", print_hash_value);
    transparent_crc(g_1731, "g_1731", print_hash_value);
    transparent_crc(g_1822, "g_1822", print_hash_value);
    transparent_crc(g_1949.f0, "g_1949.f0", print_hash_value);
    transparent_crc(g_1949.f1, "g_1949.f1", print_hash_value);
    transparent_crc(g_1949.f2, "g_1949.f2", print_hash_value);
    transparent_crc(g_1972, "g_1972", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 1; k++)
            {
                transparent_crc(g_2002[i][j][k].f0, "g_2002[i][j][k].f0", print_hash_value);
                transparent_crc(g_2002[i][j][k].f1, "g_2002[i][j][k].f1", print_hash_value);
                transparent_crc(g_2002[i][j][k].f2, "g_2002[i][j][k].f2", print_hash_value);

            }
        }
    }
    transparent_crc(g_2096, "g_2096", print_hash_value);
    transparent_crc(g_2204, "g_2204", print_hash_value);
    transparent_crc(g_2377, "g_2377", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
