// SPDX-License-Identifier: MIT
// cctest_csmith_4b8a815d.c --- cctest case csmith_4b8a815d (csmith seed 1267368285)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0xd7476947 */

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

// Options:   -s 1267368285 -o /tmp/csmith_gen_g0hit_ci/csmith.c --concise --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 8 --max-block-size 5 --max-block-depth 4 --max-expr-complexity 8 --max-array-dim 3 --max-array-len-per-dim 7 --max-struct-fields 8 --max-union-fields 5

static long __undefined;


#pragma pack(push)
#pragma pack(1)
struct S0 {
   uint32_t  f0;
   int32_t  f1;
   uint64_t  f2;
   uint8_t  f3;
};
#pragma pack(pop)

union U1 {
   struct S0  f0;
   const int8_t * f1;
   const int32_t  f2;
};


static uint32_t g_8 = 0x147B80BEL;
static int8_t *g_18 = (void*)0;
static uint32_t g_24[1] = {4294967290UL};
static int8_t g_28 = 0x4DL;
static int32_t g_33 = 0x791E6E40L;
static const union U1 g_34 = {{18446744073709551611UL,0x9B42C512L,18446744073709551612UL,1UL}};
static struct S0 g_72 = {18446744073709551606UL,-3L,0xCDBBF849EC59C4D3LL,255UL};
static uint16_t g_80 = 0x11F7L;
static struct S0 *g_87[7] = {&g_72,&g_72,&g_72,&g_72,&g_72,&g_72,&g_72};
static uint32_t g_101 = 0xC2B2271DL;
static int16_t g_111 = 0L;
static int16_t g_116 = 2L;
static int8_t g_118[5] = {0x2DL,0x2DL,0x2DL,0x2DL,0x2DL};
static uint32_t g_146[2][1] = {{4294967295UL},{4294967295UL}};
static uint32_t g_162 = 0x6F4719CEL;
static const int8_t g_166 = (-1L);
static uint64_t g_187 = 0x25F44ECFE5F79893LL;
static const union U1 *g_201 = (void*)0;
static const union U1 **g_200[2][4] = {{&g_201,(void*)0,&g_201,(void*)0},{&g_201,(void*)0,&g_201,(void*)0}};
static int16_t g_273[7][5][6] = {{{(-8L),0xDE7CL,1L,0x0D5CL,1L,0L},{0xABEEL,0L,5L,0xFA7CL,1L,0x0FD2L},{0L,0xDE7CL,0xC885L,0L,1L,(-1L)},{(-9L),0xDE7CL,1L,(-8L),1L,0x4ECEL},{1L,0L,(-1L),1L,0L,0x4741L}},{{0L,0x4ECEL,0L,0L,0x4741L,0L},{(-1L),0x4ECEL,(-5L),5L,0L,0x4081L},{1L,0L,0x305EL,0x0FD2L,0L,0L},{0xC885L,0x4ECEL,0x4ECEL,0xC885L,0x4741L,(-1L)},{0x0C1DL,0x4ECEL,0x4741L,(-1L),0L,0L}},{{0x0FD2L,0L,0L,1L,0L,(-5L)},{0xDE7CL,0x4ECEL,0x4081L,0xDE7CL,0x4741L,0x305EL},{5L,0x4ECEL,0L,0x0C1DL,0L,0x4ECEL},{1L,0L,(-1L),1L,0L,0x4741L},{0L,0x4ECEL,0L,0L,0x4741L,0L}},{{(-1L),0x4ECEL,(-5L),5L,0L,0x4081L},{1L,0L,0x305EL,0x0FD2L,0L,0L},{0xC885L,0x4ECEL,0x4ECEL,0xC885L,0x4741L,(-1L)},{0x0C1DL,0x4ECEL,0x4741L,(-1L),0L,0L},{0x0FD2L,0L,0L,1L,0L,(-5L)}},{{0xDE7CL,0x4ECEL,0x4081L,0xDE7CL,0x4741L,0x305EL},{5L,0x4ECEL,0L,0x0C1DL,0L,0x4ECEL},{1L,0L,(-1L),1L,0L,0x4741L},{0L,0x4ECEL,0L,0L,0x4741L,0L},{(-1L),0x4ECEL,(-5L),5L,0L,0x4081L}},{{1L,0L,0x305EL,0x0FD2L,0L,0L},{0xC885L,0x4ECEL,0x4ECEL,0xC885L,0x4741L,(-1L)},{0x0C1DL,0x4ECEL,0x4741L,(-1L),0L,0L},{0x0FD2L,0L,0L,1L,0L,(-5L)},{0xDE7CL,0x4ECEL,0x4081L,0xDE7CL,0x4741L,0x305EL}},{{5L,0x4ECEL,0L,0x0C1DL,0L,0x4ECEL},{1L,0L,(-1L),1L,0L,0x4741L},{0L,0x4ECEL,0L,0L,0x4741L,0L},{(-1L),0x4ECEL,(-5L),5L,0L,0x4081L},{1L,0L,0x305EL,0x0FD2L,0L,0L}}};
static int64_t g_280 = 0x42B42E006BCCA874LL;
static int32_t g_293[5] = {1L,1L,1L,1L,1L};
static int8_t g_296 = 0xCBL;
static int8_t * const g_295 = &g_296;
static int8_t * const *g_294 = &g_295;
static uint64_t g_304[1][7] = {{7UL,7UL,0xCA988B8C5FC2A831LL,7UL,7UL,0xCA988B8C5FC2A831LL,7UL}};
static union U1 **g_329 = (void*)0;
static union U1 ***g_328 = &g_329;
static uint16_t *g_398 = &g_80;
static uint16_t **g_397 = &g_398;
static int16_t g_421 = 0x770BL;
static int8_t g_467 = 9L;
static const uint16_t g_473 = 0UL;
static int32_t *g_480 = (void*)0;
static int32_t **g_479[7][2] = {{&g_480,&g_480},{&g_480,&g_480},{&g_480,&g_480},{&g_480,&g_480},{&g_480,&g_480},{&g_480,&g_480},{&g_480,&g_480}};
static int8_t **g_500 = &g_18;
static struct S0 **g_504[7][5] = {{&g_87[6],&g_87[6],&g_87[6],&g_87[6],(void*)0},{&g_87[5],(void*)0,&g_87[3],&g_87[3],(void*)0},{(void*)0,&g_87[6],(void*)0,&g_87[5],&g_87[5]},{(void*)0,&g_87[6],(void*)0,&g_87[3],&g_87[6]},{&g_87[6],&g_87[6],&g_87[5],&g_87[6],&g_87[6]},{(void*)0,&g_87[5],&g_87[6],(void*)0,&g_87[6]},{(void*)0,(void*)0,&g_87[5],&g_87[6],(void*)0}};
static int32_t *g_514 = &g_293[1];
static int32_t g_553 = (-1L);
static union U1 g_565 = {{0xA4B225E5L,0xB13FA39DL,18446744073709551608UL,0UL}};
static uint16_t g_575 = 0xB05EL;



static int16_t  func_1(void);
static uint64_t  func_4(uint32_t  p_5, int32_t  p_6, uint32_t  p_7);
static int32_t  func_12(int8_t * p_13, const union U1  p_14, int32_t  p_15, const int64_t  p_16, uint16_t  p_17);
static const union U1  func_19(int8_t * p_20, uint8_t  p_21, int8_t * p_22, int8_t  p_23);
static struct S0  func_35(int32_t * p_36, const int8_t * p_37, int8_t  p_38);
static int32_t * func_39(int16_t  p_40);
static int8_t  func_54(uint32_t  p_55, uint16_t  p_56, struct S0  p_57);
static struct S0  func_58(int8_t * p_59, int32_t  p_60, int32_t  p_61, int32_t * p_62);




static int16_t  func_1(void)
{ 
    uint64_t l_11 = 0xEC01E6E2BFBD3AEBLL;
    int8_t *l_27[6][1][7] = {{{&g_28,(void*)0,(void*)0,&g_28,&g_28,(void*)0,&g_28}},{{&g_28,(void*)0,(void*)0,&g_28,&g_28,(void*)0,&g_28}},{{&g_28,(void*)0,(void*)0,&g_28,&g_28,(void*)0,&g_28}},{{&g_28,(void*)0,(void*)0,&g_28,&g_28,(void*)0,&g_28}},{{&g_28,(void*)0,(void*)0,&g_28,&g_28,(void*)0,&g_28}},{{&g_28,(void*)0,(void*)0,&g_28,&g_28,(void*)0,&g_28}}};
    int32_t *l_619[3];
    int32_t **l_620 = &l_619[0];
    int i, j, k;
    for (i = 0; i < 3; i++)
        l_619[i] = &g_33;
    g_293[1] = ((((safe_sub_func_uint64_t_u_u((func_4(g_8, (safe_mod_func_uint16_t_u_u(((l_11 & (g_575 ^= func_12(g_18, func_19(g_18, (++g_24[0]), l_27[4][0][3], (l_11 <= (g_28 != g_8))), g_28, l_11, g_28))) > 0L), g_34.f0.f1)), g_34.f0.f2) <= 1UL), g_34.f0.f2)) == l_11) , 0x5DBC8201C832B4AELL) >= l_11);
    (*l_620) = &g_33;
    return g_34.f2;
}



static uint64_t  func_4(uint32_t  p_5, int32_t  p_6, uint32_t  p_7)
{ 
    const union U1 l_586 = {{0x5D7CE257L,0x3878884DL,18446744073709551606UL,255UL}};
    int32_t *l_615[1];
    int32_t **l_616 = &g_514;
    uint16_t l_618 = 65535UL;
    int i;
    for (i = 0; i < 1; i++)
        l_615[i] = &g_553;
lbl_595:
    (*g_514) |= (safe_unary_minus_func_int32_t_s(8L));
    for (g_296 = (-21); (g_296 >= 13); g_296++)
    { 
        const union U1 ***l_580[6][3] = {{&g_200[1][0],&g_200[1][1],&g_200[1][0]},{&g_200[1][0],&g_200[1][1],&g_200[1][0]},{&g_200[1][0],&g_200[1][1],&g_200[1][0]},{&g_200[1][0],&g_200[1][1],&g_200[1][0]},{&g_200[1][0],&g_200[1][1],&g_200[1][0]},{&g_200[1][0],&g_200[1][1],&g_200[1][0]}};
        const union U1 ****l_579 = &l_580[2][1];
        int32_t l_581 = 0x9B009DD5L;
        uint32_t *l_592 = &g_162;
        uint32_t **l_591 = &l_592;
        int i, j;
        (*l_579) = &g_200[1][0];
        if (l_581)
            break;
        for (p_6 = 0; p_6 < 1; p_6 += 1)
        {
            for (g_101 = 0; g_101 < 7; g_101 += 1)
            {
                g_304[p_6][g_101] = 4UL;
            }
        }
        if (((l_581 || (0UL && 1L)) && (((g_565.f2 , (safe_sub_func_int16_t_s_s(((void*)0 == &g_273[3][4][5]), ((l_586 , (void*)0) == &g_280)))) , 18446744073709551607UL) >= l_586.f0.f1)))
        { 
            uint32_t **l_594 = &l_592;
            for (g_111 = 0; g_111 < 7; g_111 += 1)
            {
                for (g_72.f2 = 0; g_72.f2 < 5; g_72.f2 += 1)
                {
                    g_504[g_111][g_72.f2] = &g_87[3];
                }
            }
            for (g_162 = 0; (g_162 <= 11); ++g_162)
            { 
                for (g_72.f1 = (-24); (g_72.f1 >= (-21)); g_72.f1++)
                { 
                    uint32_t ***l_593 = (void*)0;
                    l_594 = l_591;
                    if ((*g_514))
                        break;
                    if (g_162)
                        goto lbl_595;
                }
                return p_7;
            }
        }
        else
        { 
            uint16_t l_604 = 0xAE11L;
            int8_t *l_610 = &g_28;
            int32_t *l_613[1][5] = {{&g_293[3],&g_293[3],&g_293[3],&g_293[3],&g_293[3]}};
            int32_t **l_614 = &g_514;
            int i, j;
            (*g_514) = ((safe_mul_func_int16_t_s_s((safe_add_func_uint16_t_u_u(l_586.f0.f0, ((((((safe_lshift_func_int16_t_s_s((safe_mod_func_int16_t_s_s(((l_581 == g_72.f3) != (l_604 < (safe_rshift_func_int8_t_s_s(((safe_sub_func_uint8_t_u_u(0x39L, (+(func_19(l_610, ((safe_rshift_func_int16_t_s_u(0x06A0L, p_5)) >= p_7), &g_28, l_581) , 0x7E14L)))) < 1L), 2)))), g_80)), p_6)) & l_581) ^ p_7) | (**g_397)) >= g_166) || l_581))), 0UL)) < p_6);
            l_615[0] = ((*l_614) = l_613[0][2]);
            if (l_581)
                goto lbl_617;
        }
        l_615[0] = &p_6;
    }
lbl_617:
    (*l_616) = l_615[0];
    l_618 |= ((**l_616) = (**l_616));
    return g_273[1][1][4];
}



static int32_t  func_12(int8_t * p_13, const union U1  p_14, int32_t  p_15, const int64_t  p_16, uint16_t  p_17)
{ 
    uint64_t l_547 = 0x7FEFE46E73E34C17LL;
    int32_t *l_552 = &g_553;
    struct S0 *l_573 = &g_565.f0;
    int16_t l_574 = 0L;
    (*l_573) = func_35(func_39(g_34.f2), p_13, (safe_add_func_uint8_t_u_u(255UL, (l_547 != ((safe_div_func_int8_t_s_s((1L || (safe_div_func_int32_t_s_s(((*l_552) = (g_24[0] & l_547)), g_34.f2))), l_547)) != 0x84L)))));
    (*l_573) = p_14.f0;
    return l_574;
}



static const union U1  func_19(int8_t * p_20, uint8_t  p_21, int8_t * p_22, int8_t  p_23)
{ 
    int32_t *l_31 = (void*)0;
    int32_t *l_32 = &g_33;
    (*l_32) &= (-8L);
    return g_34;
}



static struct S0  func_35(int32_t * p_36, const int8_t * p_37, int8_t  p_38)
{ 
    int16_t l_556[6];
    int32_t l_559[1][6] = {{1L,1L,1L,1L,1L,1L}};
    union U1 *l_564 = &g_565;
    int64_t *l_569 = &g_280;
    int32_t *l_570[3][6][3] = {{{&l_559[0][0],&l_559[0][0],&l_559[0][0]},{&g_553,&g_553,&g_553},{(void*)0,&l_559[0][0],(void*)0},{&g_553,&g_553,&g_553},{&l_559[0][0],&l_559[0][0],&l_559[0][0]},{&g_553,&g_553,&g_553}},{{(void*)0,&l_559[0][0],(void*)0},{&g_553,&g_553,&g_553},{&l_559[0][0],&l_559[0][0],&l_559[0][0]},{&g_553,&g_553,&g_553},{(void*)0,&l_559[0][0],(void*)0},{&g_553,&g_553,&g_553}},{{&l_559[0][0],&l_559[0][0],&l_559[0][0]},{&g_553,&g_553,&g_553},{(void*)0,&l_559[0][0],(void*)0},{&g_553,&g_553,&g_553},{&l_559[0][0],&l_559[0][0],&l_559[0][0]},{&g_553,&g_553,&g_553}}};
    uint64_t l_571 = 18446744073709551615UL;
    struct S0 l_572 = {4UL,1L,1UL,0xB9L};
    int i, j, k;
    for (i = 0; i < 6; i++)
        l_556[i] = 0x2CABL;
    l_571 = ((*p_36) = (safe_sub_func_int64_t_s_s((l_556[1] |= 0x1D36FCAFE4F6DFAFLL), (safe_div_func_uint8_t_u_u((l_559[0][0] | (g_24[0] = (safe_sub_func_int8_t_s_s((safe_mul_func_uint16_t_u_u((((p_38 , l_564) == l_564) > (safe_div_func_uint8_t_u_u((!(l_569 != &g_280)), p_38))), 65534UL)), l_559[0][5])))), p_38)))));
    return l_572;
}



static int32_t * func_39(int16_t  p_40)
{ 
    uint64_t l_43 = 18446744073709551609UL;
    struct S0 *l_424 = &g_72;
    const int32_t *l_427 = &g_34.f2;
    const int32_t **l_426 = &l_427;
    const int32_t **l_428 = (void*)0;
    const int32_t *l_430 = &g_34.f2;
    const int32_t **l_429 = &l_430;
    const int32_t **l_431 = (void*)0;
    const int32_t *l_433 = &g_34.f2;
    const int32_t **l_432 = &l_433;
    int32_t *l_434 = &g_33;
    int32_t l_435 = (-1L);
    int32_t *l_436[7][1][1] = {{{(void*)0}},{{&l_435}},{{(void*)0}},{{&l_435}},{{(void*)0}},{{&l_435}},{{(void*)0}}};
    uint16_t l_437 = 0x3567L;
    int32_t *l_476 = &g_293[1];
    int32_t **l_481 = &g_480;
    struct S0 *l_497 = (void*)0;
    uint64_t l_535 = 0UL;
    const uint32_t l_540[2][4] = {{0x4A58D7FDL,0x4A58D7FDL,0x4A58D7FDL,0x4A58D7FDL},{0x4A58D7FDL,0x4A58D7FDL,0x4A58D7FDL,0x4A58D7FDL}};
    int i, j, k;
    g_421 &= (safe_rshift_func_int8_t_s_s(l_43, (safe_lshift_func_uint8_t_u_s((safe_lshift_func_int16_t_s_s((0xFB5CL >= 1UL), 11)), (p_40 ^ (safe_mod_func_int8_t_s_s((safe_mod_func_int16_t_s_s((0L ^ ((safe_mul_func_int16_t_s_s(((((func_54((((void*)0 == &g_28) == 0UL), g_24[0], g_34.f0) >= g_8) > g_24[0]) || g_273[5][3][0]) < l_43), p_40)) && l_43)), 0x011BL)), p_40)))))));
    for (g_101 = 0; (g_101 == 55); ++g_101)
    { 
        struct S0 **l_425 = &l_424;
        (*l_425) = l_424;
    }
    (*l_432) = ((*l_429) = ((*l_426) = (void*)0));
    l_437--;
    for (l_435 = 17; (l_435 > 4); l_435 = safe_sub_func_int16_t_s_s(l_435, 6))
    { 
        int64_t *l_457 = (void*)0;
        int64_t *l_458 = &g_280;
        const int32_t l_459[1][3] = {{0x5AC4D55FL,0x5AC4D55FL,0x5AC4D55FL}};
        struct S0 l_474 = {0xD97E6BE9L,0xCBB18AA3L,0xA3340E268C1AAC74LL,1UL};
        uint32_t l_510[4];
        int32_t *l_513 = &g_293[1];
        int i, j;
        for (i = 0; i < 4; i++)
            l_510[i] = 0x7B1CC5B0L;
        (*l_426) = (*l_429);
        if (((safe_lshift_func_int8_t_s_u((((*g_398) |= (!(-1L))) != (((*l_434) = ((safe_sub_func_int16_t_s_s(((((safe_mod_func_int32_t_s_s(1L, 4294967295UL)) , g_162) > g_293[1]) , (((safe_mod_func_uint8_t_u_u((safe_mul_func_uint32_t_u_u(0x59D5EC16L, (!(safe_lshift_func_int8_t_s_s((safe_unary_minus_func_int64_t_s(((*l_458) = g_293[1]))), (*g_295)))))), l_459[0][2])) & l_459[0][1]) , p_40)), p_40)) & p_40)) != p_40)), g_162)) <= p_40))
        { 
            struct S0 l_460 = {0xF115524FL,0L,18446744073709551612UL,252UL};
            uint32_t l_463 = 0x844EE3AAL;
            int32_t *l_475 = &l_435;
            (*l_424) = l_460;
            for (g_80 = (-13); (g_80 >= 34); g_80 = safe_add_func_int64_t_s_s(g_80, 6))
            { 
                int8_t *l_464 = &g_118[3];
                int32_t *l_465 = &g_72.f1;
                int32_t *l_466[4];
                const uint16_t *l_472 = &g_473;
                const uint16_t **l_471 = &l_472;
                const uint16_t ***l_470 = &l_471;
                int i;
                for (i = 0; i < 4; i++)
                    l_466[i] = &l_460.f1;
                l_474 = func_58((l_463 , l_464), (g_467 = ((*l_465) = g_146[0][0])), (safe_sub_func_uint64_t_u_u(((&g_398 != ((*l_470) = (void*)0)) < ((((g_146[1][0] <= ((0xE6CDL != 8L) > 1UL)) , 0L) <= l_460.f2) && p_40)), 0xE94B3B9A815CA367LL)), l_466[0]);
                return &g_293[1];
            }
            return l_476;
        }
        else
        { 
            const int32_t *l_526 = &g_293[1];
            int16_t *l_541[5] = {&g_421,&g_421,&g_421,&g_421,&g_421};
            int32_t l_542 = 0x87A4CCD8L;
            int i;
            (*l_426) = &g_293[2];
            for (g_111 = 0; (g_111 < (-4)); g_111--)
            { 
                int8_t l_505 = 0xC3L;
                int32_t l_507 = 0x3B7AA850L;
                int32_t l_508 = 0x25A4937AL;
                const int16_t *l_516 = (void*)0;
                const int16_t **l_515 = &l_516;
                int32_t ***l_525 = &l_481;
                for (l_474.f1 = 0; (l_474.f1 <= 0); l_474.f1 += 1)
                { 
                    struct S0 **l_488 = &l_424;
                    struct S0 **l_489 = (void*)0;
                    struct S0 *l_490 = &g_72;
                    struct S0 **l_491 = &g_87[2];
                    struct S0 **l_492 = &g_87[6];
                    struct S0 **l_493 = &g_87[6];
                    struct S0 **l_494 = &g_87[6];
                    struct S0 **l_495 = &g_87[4];
                    struct S0 **l_496 = &g_87[4];
                    uint32_t *l_501 = (void*)0;
                    uint32_t *l_502 = &l_474.f0;
                    struct S0 ***l_503[4][1][4] = {{{&l_493,&l_493,&l_491,&l_493}},{{&l_493,&l_496,&l_496,&l_493}},{{&l_496,&l_493,&l_496,&l_496}},{{&l_493,&l_493,&l_491,&l_493}}};
                    int8_t *l_506 = &g_118[3];
                    int32_t l_509 = 0x95975E14L;
                    int i, j, k;
                    l_481 = g_479[6][1];
                    (*l_476) = (safe_sub_func_int8_t_s_s(((*g_295) = g_146[(l_474.f1 + 1)][l_474.f1]), ((*l_506) = (0xC3L && ((safe_lshift_func_int8_t_s_u(((g_146[(l_474.f1 + 1)][l_474.f1] < ((safe_mod_func_int32_t_s_s(((((l_490 = ((*l_488) = &g_72)) == (l_497 = &g_72)) , &g_87[6]) == (g_504[1][1] = (((*l_502) = (safe_add_func_int16_t_s_s(((g_500 = (void*)0) != (void*)0), l_474.f3))) , &g_87[6]))), 2L)) | g_293[1])) , l_505), 0)) ^ (*l_476))))));
                    l_510[3]--;
                    g_514 = l_513;
                    (*l_513) = (*g_514);
                }
                (*l_434) = (((*l_515) = &p_40) == &g_273[4][3][2]);
                for (g_72.f1 = 0; (g_72.f1 <= 0); g_72.f1 += 1)
                { 
                    return &g_293[1];
                }
                (*l_476) |= ((safe_add_func_int32_t_s_s((safe_add_func_int64_t_s_s((safe_rshift_func_int8_t_s_s((((&g_87[6] != &g_87[6]) == (1UL & ((((*l_525) = &g_480) != (void*)0) , 0L))) ^ 18446744073709551609UL), 3)), p_40)), p_40)) , p_40);
                for (l_505 = 0; l_505 < 4; l_505 += 1)
                {
                    l_510[l_505] = 1UL;
                }
            }
            (*l_513) ^= 1L;
            l_526 = &l_459[0][2];
            (*g_514) = (safe_mul_func_int8_t_s_s((safe_rshift_func_int16_t_s_s((*l_513), (l_542 ^= (safe_sub_func_uint16_t_u_u(((l_535 & (((*l_513) >= (safe_mod_func_uint8_t_u_u(p_40, (((safe_div_func_int8_t_s_s((*g_295), p_40)) <= l_540[0][2]) | 0L)))) < g_166)) , (*g_398)), 5L))))), 1UL));
        }
    }
    return &g_293[3];
}



static int8_t  func_54(uint32_t  p_55, uint16_t  p_56, struct S0  p_57)
{ 
    int8_t **l_63 = &g_18;
    int8_t l_67[1];
    int32_t *l_70 = &g_33;
    struct S0 *l_71 = &g_72;
    uint16_t *l_79 = &g_80;
    struct S0 *l_86 = (void*)0;
    struct S0 **l_85[2];
    int8_t *l_88[2];
    int32_t l_89 = (-5L);
    int32_t l_97 = 0L;
    int32_t l_145[3];
    uint16_t l_161[1][5] = {{65535UL,65535UL,65535UL,65535UL,65535UL}};
    const int64_t l_216 = 0x481397AC89E3CC8DLL;
    const uint16_t *l_241[5] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
    const uint16_t **l_240[5] = {&l_241[1],&l_241[1],&l_241[1],&l_241[1],&l_241[1]};
    int64_t l_332[1];
    int32_t l_337 = (-2L);
    int32_t l_339 = (-8L);
    int32_t l_343 = 1L;
    int32_t l_344 = (-1L);
    uint32_t l_345 = 0x5BCD1A03L;
    int16_t l_359[7][4] = {{(-1L),0x610CL,0x610CL,(-1L)},{0x610CL,(-1L),0x610CL,0x610CL},{(-1L),(-1L),(-3L),(-1L)},{(-1L),0x610CL,0x610CL,(-1L)},{0x610CL,(-1L),0x610CL,0x610CL},{(-1L),(-1L),(-3L),(-1L)},{(-1L),0x610CL,0x610CL,(-1L)}};
    int32_t l_360 = 1L;
    int32_t l_361[5][3][5] = {{{7L,1L,7L,6L,7L},{0x1F72470AL,1L,0L,0L,1L},{6L,6L,1L,6L,6L}},{{1L,0L,0L,1L,0x1F72470AL},{7L,6L,7L,1L,7L},{1L,1L,0xA1FBDADDL,0L,0x1F72470AL}},{{6L,1L,1L,1L,6L},{0x1F72470AL,0L,0xA1FBDADDL,1L,1L},{7L,1L,7L,6L,7L}},{{0x1F72470AL,1L,0L,0L,1L},{6L,6L,1L,6L,6L},{1L,0L,0L,1L,0x1F72470AL}},{{7L,6L,7L,1L,7L},{1L,1L,0xA1FBDADDL,0L,0x1F72470AL},{6L,1L,1L,1L,6L}}};
    int16_t l_362 = 0xF846L;
    int i, j, k;
    for (i = 0; i < 1; i++)
        l_67[i] = 1L;
    for (i = 0; i < 2; i++)
        l_85[i] = &l_86;
    for (i = 0; i < 2; i++)
        l_88[i] = &l_67[0];
    for (i = 0; i < 3; i++)
        l_145[i] = 1L;
    for (i = 0; i < 1; i++)
        l_332[i] = 0xF4E5084947FFBDC5LL;
lbl_168:
    (*l_71) = func_58(((*l_63) = (void*)0), (((!(safe_mul_func_uint16_t_u_u(0UL, (((((*l_70) ^= (l_67[0] >= ((p_57 , (((((safe_mul_func_uint16_t_u_u(0x639BL, 0xF4A9L)) && l_67[0]) , 0xBD72L) && l_67[0]) , 1UL)) == g_34.f0.f3))) != (-1L)) & g_34.f0.f3) ^ g_8)))) , 0x41L) ^ g_34.f0.f3), g_8, l_70);
    if ((safe_rshift_func_int8_t_s_u(((safe_lshift_func_uint16_t_u_u(((*l_79)--), 9)) || (((p_55 , 0UL) , p_57.f3) < (*l_70))), (((safe_add_func_int64_t_s_s((l_71 == (g_87[6] = &g_72)), ((l_89 = p_56) < (*l_70)))) , p_57.f0) ^ (*l_70)))))
    { 
        int8_t l_115[6][4] = {{0xD2L,0x1FL,0xD2L,0L},{(-7L),0x1FL,0x88L,0x9CL},{0x1FL,0xC1L,0xC1L,0x1FL},{0xD2L,0x9CL,0xC1L,0L},{0x1FL,(-7L),0x88L,(-7L)},{(-7L),0xC1L,0xD2L,(-7L)}};
        int32_t l_117 = (-3L);
        int32_t *l_123[5][4][1] = {{{(void*)0},{&l_89},{(void*)0},{&l_117}},{{&g_33},{&g_33},{&l_117},{(void*)0}},{{&l_89},{(void*)0},{&l_117},{&g_33}},{{&g_33},{&l_117},{(void*)0},{&l_89}},{{(void*)0},{&l_117},{(void*)0},{(void*)0}}};
        union U1 l_128 = {{0UL,1L,0x4953B525E98B5088LL,248UL}};
        struct S0 **l_133 = (void*)0;
        uint16_t *l_167 = (void*)0;
        union U1 *l_197 = &l_128;
        union U1 **l_196[4][3][1] = {{{&l_197},{&l_197},{&l_197}},{{&l_197},{&l_197},{&l_197}},{{&l_197},{&l_197},{&l_197}},{{&l_197},{&l_197},{&l_197}}};
        const union U1 *l_199 = &l_128;
        const union U1 **l_198 = &l_199;
        uint64_t l_208 = 0x15D4B14E1203BA36LL;
        uint16_t l_210 = 65535UL;
        int i, j, k;
        (*l_70) = (+p_57.f0);
        for (p_56 = 0; (p_56 != 54); p_56 = safe_add_func_uint16_t_u_u(p_56, 6))
        { 
            int32_t *l_122[4][2][2] = {{{(void*)0,&g_33},{(void*)0,(void*)0}},{{&g_33,(void*)0},{(void*)0,&g_33}},{{(void*)0,(void*)0},{&g_33,(void*)0}},{{(void*)0,&g_33},{(void*)0,(void*)0}}};
            int i, j, k;
            for (p_57.f0 = 28; (p_57.f0 == 58); p_57.f0++)
            { 
                for (l_89 = 0; (l_89 < 10); l_89++)
                { 
                    int32_t *l_98 = &g_33;
                    int32_t *l_99 = &g_33;
                    int32_t *l_100[4][4] = {{&g_33,&g_33,&g_33,&g_33},{&g_33,&g_33,&g_33,&g_33},{&g_33,&g_33,&g_33,&g_33},{&g_33,&g_33,&g_33,&g_33}};
                    int i, j;
                    (*l_71) = p_57;
                    g_101--;
                }
            }
            (*l_70) = 1L;
            for (p_57.f1 = 0; (p_57.f1 >= 0); p_57.f1 -= 1)
            { 
                int8_t l_110 = 0xDDL;
                for (g_80 = 0; (g_80 <= 0); g_80 += 1)
                { 
                    int32_t *l_104 = (void*)0;
                    int32_t *l_105 = &g_33;
                    int32_t *l_106 = &l_97;
                    int32_t *l_107 = &l_97;
                    int32_t *l_108 = (void*)0;
                    int32_t *l_109 = &l_89;
                    int32_t *l_112 = &l_97;
                    int32_t *l_113 = &g_33;
                    int32_t *l_114[3][1];
                    uint16_t l_119[2][6] = {{0xE052L,0xE052L,1UL,0xE052L,0xE052L,1UL},{0xE052L,0xE052L,1UL,0xE052L,0xE052L,1UL}};
                    int i, j;
                    for (i = 0; i < 3; i++)
                    {
                        for (j = 0; j < 1; j++)
                            l_114[i][j] = &l_97;
                    }
                    g_87[4] = g_87[(p_57.f1 + 4)];
                    ++l_119[0][4];
                    (*l_109) ^= g_24[g_80];
                    if (g_24[g_80])
                        break;
                    (*l_106) &= (1L <= (-8L));
                }
            }
            l_123[3][3][0] = l_122[2][0][0];
        }
        if (((((((safe_add_func_uint32_t_u_u((safe_lshift_func_int16_t_s_u((-6L), (l_128 , ((safe_rshift_func_uint16_t_u_s(65533UL, 0)) && 0xFF48D525L)))), (safe_lshift_func_uint8_t_u_u(g_72.f3, 0)))) , &l_71) != l_133) , p_57.f0) , 0xCAE20C25L) && p_57.f1))
        { 
            int64_t l_142 = 0x6844AA6C347B9C4FLL;
            int32_t l_147 = (-2L);
            (*l_70) = (*l_70);
            l_147 |= (g_146[1][0] = ((+(~(safe_div_func_int64_t_s_s(g_72.f0, ((safe_mod_func_uint8_t_u_u((safe_mul_func_int16_t_s_s(((l_142 >= ((safe_sub_func_int32_t_s_s((((void*)0 == &g_118[1]) || ((&g_72 != &g_72) & (((*l_70) |= l_145[2]) && g_34.f0.f1))), 4294967286UL)) , g_24[0])) , p_57.f0), 0x67A0L)), p_57.f3)) , 18446744073709551611UL))))) , l_142));
            return (*l_70);
        }
        else
        { 
            int8_t *l_175[4];
            int32_t l_186 = 1L;
            int i;
            for (i = 0; i < 4; i++)
                l_175[i] = &l_67[0];
            for (l_89 = 6; (l_89 >= 0); l_89 -= 1)
            { 
                const int8_t *l_165 = &g_166;
                const int8_t **l_164 = &l_165;
                int32_t l_169 = 0x33108C9EL;
                if (g_146[1][0])
                    break;
                g_162 |= (safe_add_func_uint8_t_u_u((*l_70), (((((safe_div_func_uint16_t_u_u(p_56, 0x68B9L)) > ((safe_mod_func_int64_t_s_s((safe_mul_func_int16_t_s_s(g_116, (safe_sub_func_uint8_t_u_u((((*l_70) || (safe_unary_minus_func_uint8_t_u(p_56))) , ((((safe_sub_func_uint64_t_u_u((0x9AE464C4L | l_161[0][2]), p_57.f3)) != g_33) && p_55) & (*l_70))), g_111)))), g_118[4])) , 1L)) >= g_34.f0.f3) || p_57.f2) || (*l_70))));
                if (((+g_101) & (g_111 , (((*l_63) = &l_115[2][0]) == ((*l_164) = &g_28)))))
                { 
                    uint64_t *l_172 = (void*)0;
                    uint64_t *l_173 = (void*)0;
                    uint64_t *l_174 = &g_72.f2;
                    int32_t l_176[5][4][4] = {{{0xA0BCAFD4L,0x09034FE3L,0x09034FE3L,0xA0BCAFD4L},{1L,0xD78287FBL,0x690FF0A8L,0L},{0x96A269F8L,0x2755BC84L,0x99CF72C5L,0x09034FE3L},{0x690FF0A8L,0x53605F43L,0xBB508EA8L,0x09034FE3L}},{{(-2L),0x2755BC84L,0x4BFD0F75L,0L},{(-5L),0xD78287FBL,1L,0xA0BCAFD4L},{(-6L),0x09034FE3L,(-6L),1L},{(-6L),0x690FF0A8L,0L,0x96A269F8L}},{{0xD78287FBL,0x99CF72C5L,0x96A269F8L,0x690FF0A8L},{0x4BFD0F75L,0xBB508EA8L,0x96A269F8L,(-2L)},{0xD78287FBL,0x4BFD0F75L,0L,(-5L)},{(-6L),1L,(-6L),(-6L)}},{{(-6L),(-6L),1L,(-6L)},{(-5L),0L,0x4BFD0F75L,0xD78287FBL},{(-2L),0x96A269F8L,0xBB508EA8L,0x4BFD0F75L},{0x690FF0A8L,0x96A269F8L,0x99CF72C5L,0xD78287FBL}},{{0x96A269F8L,0L,0x690FF0A8L,(-6L)},{1L,(-6L),0x09034FE3L,(-6L)},{0xA0BCAFD4L,1L,0xD78287FBL,(-5L)},{0L,0x4BFD0F75L,0x2755BC84L,(-2L)}}};
                    int i, j, k;
                    (*l_70) = (l_167 != (void*)0);
                    if (l_128.f0.f2)
                        goto lbl_168;
                    if (l_169)
                        break;
                    l_176[4][2][2] &= ((*l_70) = ((safe_div_func_uint64_t_u_u((p_56 && ((*l_79) = ((((*l_174) |= 18446744073709551612UL) | (g_87[l_89] == (func_19(&l_115[1][0], g_34.f0.f3, l_175[0], p_57.f0) , (void*)0))) == g_28))), 0xA49C8F8D30744347LL)) > p_57.f1));
                }
                else
                { 
                    uint16_t **l_177 = &l_167;
                    int16_t *l_184 = &g_116;
                    int32_t l_185 = 6L;
                    (*l_70) = ((((((*l_177) = (((void*)0 == (*l_63)) , l_167)) != &p_56) <= ((safe_rshift_func_int16_t_s_s((((*l_184) = ((safe_mul_func_int16_t_s_s(0x26C0L, ((safe_div_func_uint16_t_u_u(0x8F0BL, g_80)) , 5UL))) & p_57.f1)) > 0xAA03L), g_72.f1)) >= g_34.f0.f1)) < g_146[1][0]) > 65533UL);
                    l_169 |= 0xA0EAF5A0L;
                    g_187++;
                }
                for (l_186 = 0; (l_186 <= 3); l_186 += 1)
                { 
                    union U1 *l_190 = &l_128;
                    union U1 **l_191 = &l_190;
                    int i, j;
                    (*l_191) = l_190;
                    (*l_70) &= l_115[l_186][l_186];
                }
            }
            for (g_72.f2 = 0; (g_72.f2 == 23); g_72.f2 = safe_add_func_int8_t_s_s(g_72.f2, 7))
            { 
                return p_57.f3;
            }
        }
        if (((func_19(&l_115[3][2], p_57.f0, (*l_63), ((((safe_rshift_func_int16_t_s_u(1L, 10)) , (((l_196[2][1][0] = l_196[2][1][0]) != (g_200[1][0] = l_198)) && ((*l_70) || g_72.f2))) ^ (*l_70)) <= p_57.f2)) , 0x5262L) <= p_57.f0))
        { 
            (*l_71) = func_58((*l_63), p_57.f3, p_55, &g_33);
        }
        else
        { 
            const int8_t l_205 = 0xA8L;
            uint64_t *l_209 = &l_208;
            int32_t l_237 = 2L;
            int32_t l_242 = 0x90181276L;
            uint32_t l_255 = 18446744073709551615UL;
            int32_t l_264 = 0L;
            struct S0 l_267[3] = {{0x85A202CFL,0L,0x506045916E1E9FABLL,252UL},{0x85A202CFL,0L,0x506045916E1E9FABLL,252UL},{0x85A202CFL,0L,0x506045916E1E9FABLL,252UL}};
            union U1 **l_276 = &l_197;
            int32_t l_335 = (-1L);
            int32_t l_338 = 0x63D2776EL;
            int32_t l_340 = 0xE0D1BAC3L;
            int32_t l_341 = (-1L);
            int32_t l_342[3][6] = {{0x1BB2BDCBL,0x1BB2BDCBL,0x1BB2BDCBL,0x1BB2BDCBL,0x1BB2BDCBL,0x1BB2BDCBL},{0x1BB2BDCBL,0x1BB2BDCBL,0x1BB2BDCBL,0x1BB2BDCBL,0x1BB2BDCBL,0x1BB2BDCBL},{0x1BB2BDCBL,0x1BB2BDCBL,0x1BB2BDCBL,0x1BB2BDCBL,0x1BB2BDCBL,0x1BB2BDCBL}};
            int i, j;
            l_123[3][3][0] = ((0x4FL | (+(((*l_209) = (safe_lshift_func_uint8_t_u_s((((-3L) && ((l_205 <= ((((*l_71) = p_57) , (((safe_add_func_uint32_t_u_u(((g_34.f2 ^ g_34.f2) >= (g_8 == g_118[3])), g_72.f0)) == p_55) , l_208)) , p_57.f0)) <= p_56)) != g_187), 0))) > 2UL))) , &l_117);
            for (l_117 = 1; (l_117 >= 0); l_117 -= 1)
            { 
                return l_210;
            }
            for (p_55 = (-29); (p_55 <= 9); p_55 = safe_add_func_uint32_t_u_u(p_55, 4))
            { 
                int32_t **l_213 = &l_123[3][3][0];
                if (p_57.f3)
                    goto lbl_168;
                (*l_213) = (void*)0;
                if (g_101)
                    break;
            }
            for (g_116 = 1; (g_116 >= 0); g_116 -= 1)
            { 
                uint64_t l_233 = 0xAF4D0123A988937ELL;
                int32_t * const *l_235 = (void*)0;
                int32_t * const **l_234 = &l_235;
                uint32_t l_236 = 18446744073709551615UL;
                int32_t *l_238 = &l_145[2];
                int16_t *l_239 = &g_111;
                uint32_t *l_243 = (void*)0;
                uint32_t *l_244 = &g_101;
                uint16_t l_256 = 3UL;
                struct S0 **l_300 = &l_71;
                union U1 ***l_326 = &l_196[3][1][0];
                int32_t l_331 = 0L;
                int32_t l_333[2];
                int16_t l_334[3][6] = {{0x0EC5L,0x230AL,0x230AL,0x0EC5L,0x7505L,0x0EC5L},{0x0EC5L,0x7505L,0x0EC5L,0x230AL,0x230AL,0x0EC5L},{0x71CFL,0x71CFL,0x230AL,0x6C7FL,0x230AL,0x71CFL}};
                int i, j;
                for (i = 0; i < 2; i++)
                    l_333[i] = (-1L);
                l_242 &= ((((safe_add_func_int8_t_s_s((l_216 <= (safe_mul_func_int16_t_s_s((0x739FD564L | p_55), (0x4D3F9AC471EECA51LL != 0x3E5A116420D8647ELL)))), (safe_rshift_func_int16_t_s_u(((*l_239) &= (((*l_238) = (safe_rshift_func_int16_t_s_s((safe_rshift_func_int16_t_s_s((safe_add_func_uint64_t_u_u((l_237 = ((g_118[3] |= (safe_rshift_func_int16_t_s_u((((*l_234) = (((safe_mul_func_int8_t_s_s(6L, ((g_72.f3++) | l_233))) > 0xBD6A1D81L) , (void*)0)) != (void*)0), 7))) & l_236)), 0L)), 4)), (*l_70)))) , g_72.f2)), (*l_70))))) , (void*)0) == l_240[4]) | g_24[0]);
                if (g_34.f0.f0)
                    continue;
                if (((*l_70) = (((((*l_244) = (0x1F6BL > 0x471AL)) & (safe_mul_func_int8_t_s_s(1L, ((safe_rshift_func_int16_t_s_u(l_242, p_56)) , (((safe_add_func_int16_t_s_s(g_72.f1, ((safe_add_func_uint64_t_u_u(((l_242 = (safe_mod_func_uint16_t_u_u(((p_57.f0 , l_255) || g_80), g_34.f0.f2))) & p_57.f0), g_146[1][0])) != p_56))) && p_57.f2) , p_55))))) ^ p_56) && g_72.f2)))
                { 
                    uint64_t l_272 = 0UL;
                    int64_t *l_279 = &g_280;
                    uint64_t **l_283 = &l_209;
                    uint64_t *l_284 = &g_72.f2;
                    union U1 l_299[1] = {{{0xA826AD5AL,-1L,0x683604912DCD832BLL,0x48L}}};
                    int8_t * const *l_303[6];
                    int i;
                    for (i = 0; i < 6; i++)
                        l_303[i] = (void*)0;
                    ++l_256;
                    g_273[4][3][2] ^= ((~(safe_div_func_int64_t_s_s((safe_div_func_int32_t_s_s((((*l_244) = ((l_264 |= 0x2CF54E4AL) , ((g_87[4] = &p_57) != &p_57))) == (safe_mul_func_int8_t_s_s((l_267[2] , (((((safe_add_func_int32_t_s_s((safe_mod_func_uint8_t_u_u((l_244 == (((*l_79) ^= (((p_55 != (*l_70)) , (*l_70)) >= g_187)) , &g_24[0])), 0x70L)), p_57.f1)) == p_57.f1) , p_57.f2) >= l_272) <= l_237)), 6L))), (-1L))), p_57.f0))) != l_272);
                    g_33 &= (safe_rshift_func_int8_t_s_u((&g_201 == l_276), (safe_mod_func_uint64_t_u_u(l_267[2].f0, ((*l_279) = p_57.f2)))));
                    g_293[1] ^= ((safe_sub_func_uint8_t_u_u((((*l_284) = (((*l_283) = &l_272) != (void*)0)) , ((!(safe_add_func_int16_t_s_s((~5L), (l_267[2].f2 <= ((*l_70) = (safe_rshift_func_int8_t_s_s((safe_rshift_func_uint16_t_u_s(((1L || (((-1L) >= 0x492DA3F3L) | (-10L))) == l_237), 6)), g_8))))))) && p_56)), l_267[2].f2)) && p_57.f0);
                    (*l_71) = func_58(&l_115[1][3], ((g_294 = &l_88[0]) == (((safe_rshift_func_uint16_t_u_u(((l_299[0] , &l_86) == (l_267[2] , l_300)), 8)) != (safe_add_func_uint32_t_u_u(0UL, g_34.f0.f3))) , l_303[1])), l_299[0].f2, &g_293[1]);
                }
                else
                { 
                    int16_t l_316 = 0xFFACL;
                    ++g_304[0][6];
                    if (g_111)
                        continue;
                    (*l_70) = (safe_add_func_uint32_t_u_u((+(safe_rshift_func_int16_t_s_u((safe_sub_func_uint64_t_u_u((safe_rshift_func_uint8_t_u_s(0x73L, ((0UL & l_316) , p_57.f2))), (safe_mod_func_uint8_t_u_u((safe_add_func_uint32_t_u_u(((*l_244) = (p_57.f3 | ((safe_lshift_func_uint8_t_u_s((l_267[2].f3 != (0L < p_56)), 5)) > p_57.f3))), p_57.f2)), 0xFBL)))), 3))), g_8));
                    if (p_57.f0)
                        break;
                }
                for (g_187 = 0; (g_187 <= 1); g_187 += 1)
                { 
                    uint64_t l_323 = 3UL;
                    union U1 ****l_327 = &l_326;
                    if (l_89)
                        goto lbl_168;
                    l_323++;
                    g_328 = ((*l_327) = l_326);
                }
                for (g_296 = 0; (g_296 <= 1); g_296 += 1)
                { 
                    return p_57.f0;
                }
                for (g_162 = 0; (g_162 <= 1); g_162 += 1)
                { 
                    int32_t l_330 = 0x1AF4D414L;
                    int32_t l_336[3][2][5] = {{{0x0B2B0D8BL,0x0B2B0D8BL,0L,0x0B2B0D8BL,0x0B2B0D8BL},{0x3D4C7E90L,(-1L),0x3D4C7E90L,0x3D4C7E90L,(-1L)}},{{0x0B2B0D8BL,0x465AA627L,0x465AA627L,0x465AA627L,0L},{0x3D4C7E90L,0x3D4C7E90L,(-1L),0x3D4C7E90L,0x3D4C7E90L}},{{0L,0x465AA627L,0L,0L,0x465AA627L},{0x3D4C7E90L,0x0DDD1128L,0x0DDD1128L,0x3D4C7E90L,0x0DDD1128L}}};
                    int i, j, k;
                    --l_345;
                    if (p_56)
                        break;
                }
            }
        }
    }
    else
    { 
        uint64_t l_348 = 18446744073709551608UL;
        int8_t *l_349 = (void*)0;
        int32_t *l_350 = &l_344;
        int32_t *l_351 = &g_293[3];
        int32_t *l_352 = &g_33;
        int32_t *l_353 = &l_339;
        int32_t *l_354 = &l_97;
        int32_t *l_355 = &g_293[4];
        int32_t l_356[5] = {0xA2C516A1L,0xA2C516A1L,0xA2C516A1L,0xA2C516A1L,0xA2C516A1L};
        int32_t *l_357[1];
        int32_t l_358 = 0xDCED75A5L;
        uint32_t l_363 = 18446744073709551615UL;
        struct S0 *l_369 = &g_72;
        int8_t l_375 = (-6L);
        uint16_t **l_400[6] = {&g_398,&g_398,&g_398,&g_398,&g_398,&g_398};
        uint16_t **l_401 = (void*)0;
        uint32_t l_419 = 0x76F0093FL;
        int i;
        for (i = 0; i < 1; i++)
            l_357[i] = (void*)0;
        (*l_70) = (l_348 = (-10L));
        p_57 = func_58(((*l_70) , l_349), (*l_70), g_8, &g_293[4]);
        ++l_363;
        for (p_55 = 17; (p_55 <= 7); --p_55)
        { 
            struct S0 *l_368 = &g_72;
            int32_t l_374 = 0x278CBA59L;
            uint16_t ***l_399 = (void*)0;
            uint32_t *l_402 = (void*)0;
            uint32_t *l_403 = &g_146[0][0];
            int64_t *l_420 = &l_332[0];
            l_368 = l_368;
        }
        (*l_354) = p_57.f1;
    }
    return (*l_70);
}



static struct S0  func_58(int8_t * p_59, int32_t  p_60, int32_t  p_61, int32_t * p_62)
{ 
    return g_34.f0;
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_8, "g_8", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_24[i], "g_24[i]", print_hash_value);

    }
    transparent_crc(g_28, "g_28", print_hash_value);
    transparent_crc(g_33, "g_33", print_hash_value);
    transparent_crc(g_34.f0.f0, "g_34.f0.f0", print_hash_value);
    transparent_crc(g_34.f0.f1, "g_34.f0.f1", print_hash_value);
    transparent_crc(g_34.f0.f2, "g_34.f0.f2", print_hash_value);
    transparent_crc(g_34.f0.f3, "g_34.f0.f3", print_hash_value);
    transparent_crc(g_34.f2, "g_34.f2", print_hash_value);
    transparent_crc(g_72.f0, "g_72.f0", print_hash_value);
    transparent_crc(g_72.f1, "g_72.f1", print_hash_value);
    transparent_crc(g_72.f2, "g_72.f2", print_hash_value);
    transparent_crc(g_72.f3, "g_72.f3", print_hash_value);
    transparent_crc(g_80, "g_80", print_hash_value);
    transparent_crc(g_101, "g_101", print_hash_value);
    transparent_crc(g_111, "g_111", print_hash_value);
    transparent_crc(g_116, "g_116", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_118[i], "g_118[i]", print_hash_value);

    }
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 1; j++)
        {
            transparent_crc(g_146[i][j], "g_146[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_162, "g_162", print_hash_value);
    transparent_crc(g_166, "g_166", print_hash_value);
    transparent_crc(g_187, "g_187", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 5; j++)
        {
            for (k = 0; k < 6; k++)
            {
                transparent_crc(g_273[i][j][k], "g_273[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_280, "g_280", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_293[i], "g_293[i]", print_hash_value);

    }
    transparent_crc(g_296, "g_296", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 7; j++)
        {
            transparent_crc(g_304[i][j], "g_304[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_421, "g_421", print_hash_value);
    transparent_crc(g_467, "g_467", print_hash_value);
    transparent_crc(g_473, "g_473", print_hash_value);
    transparent_crc(g_553, "g_553", print_hash_value);
    transparent_crc(g_565.f0.f0, "g_565.f0.f0", print_hash_value);
    transparent_crc(g_565.f0.f1, "g_565.f0.f1", print_hash_value);
    transparent_crc(g_565.f0.f2, "g_565.f0.f2", print_hash_value);
    transparent_crc(g_565.f0.f3, "g_565.f0.f3", print_hash_value);
    transparent_crc(g_565.f2, "g_565.f2", print_hash_value);
    transparent_crc(g_575, "g_575", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
