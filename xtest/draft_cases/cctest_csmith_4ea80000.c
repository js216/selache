// SPDX-License-Identifier: MIT
// cctest_csmith_4ea80000.c --- cctest case csmith_4ea80000 (csmith seed 1319632896)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0xa37ac259 */

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

// Options:   -s 1319632896 -o /tmp/csmith_gen_rbj2ih2o/csmith.c --concise --no-volatiles --no-volatile-pointers --max-funcs 8 --max-block-size 5 --max-block-depth 4 --max-expr-complexity 8 --max-array-dim 3 --max-array-len-per-dim 7 --max-struct-fields 8 --max-union-fields 5

static long __undefined;


#pragma pack(push)
#pragma pack(1)
struct S0 {
   unsigned f0 : 14;
};
#pragma pack(pop)

#pragma pack(push)
#pragma pack(1)
struct S1 {
   uint32_t  f0;
};
#pragma pack(pop)

union U2 {
   int8_t  f0;
};


static uint64_t g_8 = 18446744073709551615UL;
static int32_t g_10 = (-2L);
static int32_t *g_9[6][3][4] = {{{&g_10,&g_10,&g_10,&g_10},{&g_10,&g_10,&g_10,&g_10},{&g_10,&g_10,&g_10,&g_10}},{{&g_10,&g_10,&g_10,&g_10},{&g_10,&g_10,&g_10,&g_10},{&g_10,&g_10,&g_10,&g_10}},{{&g_10,&g_10,&g_10,&g_10},{&g_10,&g_10,&g_10,&g_10},{&g_10,&g_10,&g_10,&g_10}},{{&g_10,&g_10,&g_10,&g_10},{&g_10,&g_10,&g_10,&g_10},{&g_10,&g_10,&g_10,&g_10}},{{(void*)0,&g_10,&g_10,(void*)0},{&g_10,&g_10,&g_10,&g_10},{&g_10,&g_10,(void*)0,&g_10}},{{(void*)0,&g_10,(void*)0,(void*)0},{&g_10,&g_10,&g_10,&g_10},{&g_10,&g_10,(void*)0,&g_10}}};
static struct S1 g_30 = {18446744073709551615UL};
static union U2 g_36 = {-8L};
static struct S0 g_45 = {110};
static struct S0 *g_44 = &g_45;
static int32_t *g_46 = &g_10;
static int32_t g_65 = 1L;
static uint32_t g_84 = 0UL;
static int64_t g_93 = (-1L);
static uint8_t g_95 = 0x92L;
static struct S1 *g_132 = (void*)0;
static struct S1 **g_131 = &g_132;
static int64_t g_180 = (-1L);
static int16_t g_203[3][7] = {{0x38AAL,0x38AAL,0x38AAL,0x38AAL,0x38AAL,0x38AAL,0x38AAL},{0x38AAL,0x38AAL,0x38AAL,0x38AAL,0x38AAL,0x38AAL,0x38AAL},{0x38AAL,0x38AAL,0x38AAL,0x38AAL,0x38AAL,0x38AAL,0x38AAL}};
static uint16_t g_230 = 1UL;
static uint16_t g_240 = 1UL;
static int64_t g_241 = 8L;
static uint32_t **g_291 = (void*)0;
static const struct S0 *g_314[1] = {(void*)0};
static const struct S0 **g_313 = &g_314[0];
static const struct S0 ***g_312 = &g_313;
static uint64_t *g_327[2][1] = {{&g_8},{&g_8}};
static uint64_t **g_326 = &g_327[0][0];
static struct S0 * const ****g_333 = (void*)0;
static struct S0 **g_397 = &g_44;
static struct S0 ***g_396 = &g_397;
static struct S0 ****g_395[4] = {&g_396,&g_396,&g_396,&g_396};
static int8_t g_441 = 0xD7L;
static int16_t g_452 = 7L;
static int16_t ** const *g_463 = (void*)0;
static uint8_t g_499 = 0x5DL;
static uint64_t g_508 = 18446744073709551615UL;
static uint16_t g_553 = 0x97BEL;
static const int32_t *g_560 = (void*)0;
static int8_t g_608[3] = {0x3CL,0x3CL,0x3CL};
static int32_t g_618 = 0x1942B34DL;
static int32_t g_652 = 0x444947A9L;
static int32_t g_670 = 0x0E4686E4L;



static int16_t  func_1(void);
static int32_t * func_2(int16_t  p_3, int32_t * p_4, int16_t  p_5, int32_t  p_6, int8_t  p_7);
static struct S1  func_11(int32_t * p_12, const int32_t  p_13, int32_t * p_14);
static int32_t * func_15(int16_t  p_16, int32_t  p_17, uint32_t  p_18, struct S1  p_19);
static int16_t  func_23(union U2  p_24, int8_t  p_25, const uint32_t  p_26, int32_t * const  p_27, const uint32_t  p_28);
static struct S0 * func_31(const uint32_t  p_32, union U2  p_33, struct S0 * const  p_34, uint32_t  p_35);
static struct S0 * const  func_37(const uint32_t  p_38, const int32_t * p_39);
static int64_t  func_40(struct S0 * p_41, int32_t * p_42, int32_t * p_43);




static int16_t  func_1(void)
{ 
    uint8_t l_22 = 5UL;
    union U2 l_29[4] = {{0x07L},{0x07L},{0x07L},{0x07L}};
    int32_t **l_449 = &g_9[0][1][2];
    int32_t l_450 = 0x7D1D2AA1L;
    int16_t *l_451 = &g_452;
    int16_t **l_462 = &l_451;
    int16_t *** const l_461[3] = {&l_462,&l_462,&l_462};
    uint32_t *l_467[6] = {&g_84,&g_84,&g_84,&g_84,&g_84,&g_84};
    struct S1 l_468 = {0UL};
    int32_t **l_469 = &g_46;
    int32_t l_498 = 0xF2E56B59L;
    uint32_t l_501 = 18446744073709551615UL;
    struct S0 ****l_582[3];
    int32_t l_613[1][1];
    uint16_t l_615 = 0x628AL;
    uint8_t l_619 = 0xD5L;
    uint8_t l_654 = 248UL;
    uint64_t l_671 = 0x5FD459E581E60841LL;
    int32_t *l_684[1][7][4] = {{{(void*)0,&l_613[0][0],&l_613[0][0],(void*)0},{&l_613[0][0],(void*)0,&l_613[0][0],&l_613[0][0]},{(void*)0,(void*)0,&g_618,(void*)0},{(void*)0,&l_613[0][0],&l_613[0][0],(void*)0},{&l_613[0][0],(void*)0,&l_613[0][0],&l_613[0][0]},{(void*)0,(void*)0,&g_618,(void*)0},{(void*)0,&l_613[0][0],&l_613[0][0],(void*)0}}};
    int32_t l_685[7];
    int32_t l_686 = 0xAC6C685DL;
    int16_t l_687 = 0xC49AL;
    uint32_t l_688 = 0xE520A80AL;
    int i, j, k;
    for (i = 0; i < 3; i++)
        l_582[i] = &g_396;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 1; j++)
            l_613[i][j] = 0x6559F092L;
    }
    for (i = 0; i < 7; i++)
        l_685[i] = (-4L);
    (*l_449) = func_2(g_8, g_9[3][1][3], (&g_10 == (void*)0), (func_11(func_15((safe_mod_func_int16_t_s_s(l_22, func_23(l_29[1], g_10, g_8, &g_10, g_10))), l_22, g_10, g_30), l_22, g_9[4][1][3]) , l_29[1].f0), l_29[1].f0);
    (*l_469) = ((*l_449) = func_15(l_450, ((*g_46) = (((*l_451) = (g_203[1][3] ^= 0x942CL)) > (g_180 | (safe_mod_func_int64_t_s_s((safe_rshift_func_int16_t_s_s((safe_div_func_int16_t_s_s((safe_mul_func_uint16_t_u_u((l_461[2] != g_463), (safe_mod_func_int16_t_s_s((~((void*)0 == l_467[2])), g_84)))), 3UL)), 9)), l_450))))), g_45.f0, l_468));
    for (g_65 = 11; (g_65 > 28); g_65 = safe_add_func_uint64_t_u_u(g_65, 8))
    { 
        int64_t l_472 = 0xCD37360B372F9E3CLL;
        uint8_t *l_481 = &g_95;
        int32_t l_482 = 0x70620ECFL;
        l_482 &= (((g_36.f0 <= g_241) < l_472) ^ ((((((**g_326) = (safe_unary_minus_func_uint64_t_u((safe_mul_func_uint8_t_u_u(((*l_481) = (safe_add_func_int16_t_s_s((safe_mul_func_int8_t_s_s(((0xF0E9AA10C5DAC79ALL < (((safe_unary_minus_func_int8_t_s(0x58L)) || (((**l_469) ^ 0xA804D0E4L) && l_472)) > g_180)) | g_36.f0), g_45.f0)), g_84))), 0x92L))))) <= (**l_469)) > g_441) || (**l_469)) , g_230));
    }
    for (g_93 = 0; (g_93 >= 19); g_93 = safe_add_func_uint16_t_u_u(g_93, 1))
    { 
        uint32_t *l_490 = &g_30.f0;
        uint32_t **l_489 = &l_490;
        const int32_t l_500 = 0xF23521C5L;
        int32_t l_502 = 0x16A3F41CL;
        struct S0 l_540 = {99};
        int8_t l_564 = 1L;
        struct S0 ****l_578 = &g_396;
    }
    l_688++;
    return (**l_469);
}



static int32_t * func_2(int16_t  p_3, int32_t * p_4, int16_t  p_5, int32_t  p_6, int8_t  p_7)
{ 
    int32_t *l_176 = &g_65;
    uint64_t *l_177[1];
    uint64_t l_178[5][5] = {{18446744073709551612UL,0x3788430C37579580LL,18446744073709551612UL,18446744073709551612UL,0x3788430C37579580LL},{18446744073709551609UL,0x09EDA30AC000487FLL,0x09EDA30AC000487FLL,18446744073709551609UL,0x09EDA30AC000487FLL},{0x3788430C37579580LL,0x3788430C37579580LL,18446744073709551613UL,0x3788430C37579580LL,0x3788430C37579580LL},{0x09EDA30AC000487FLL,18446744073709551609UL,0x09EDA30AC000487FLL,0x09EDA30AC000487FLL,18446744073709551609UL},{0x3788430C37579580LL,18446744073709551612UL,18446744073709551612UL,0x3788430C37579580LL,18446744073709551612UL}};
    int64_t *l_179 = &g_180;
    uint64_t l_181 = 1UL;
    struct S1 l_182 = {18446744073709551611UL};
    struct S1 *l_183 = &g_30;
    uint32_t *l_219 = &g_84;
    uint32_t **l_218 = &l_219;
    int32_t l_306 = 0x3FE90797L;
    int16_t *l_344 = (void*)0;
    uint32_t l_345 = 18446744073709551609UL;
    const int32_t l_354[2] = {0L,0L};
    int16_t l_371 = 0xE643L;
    int32_t l_375 = (-2L);
    int32_t l_376 = 1L;
    int16_t **l_402 = &l_344;
    int16_t ***l_401 = &l_402;
    int32_t l_410 = 0xDEE4A86CL;
    int32_t l_411 = 0xBF8B169AL;
    int32_t l_418[2];
    int32_t *l_448[6] = {&l_418[1],&l_418[1],&l_418[1],&l_418[1],&l_418[1],&l_418[1]};
    int i, j;
    for (i = 0; i < 1; i++)
        l_177[i] = &g_8;
    for (i = 0; i < 2; i++)
        l_418[i] = (-6L);
    (*l_183) = l_182;
    for (g_10 = (-15); (g_10 <= 27); ++g_10)
    { 
        int16_t *l_202 = &g_203[2][4];
        int32_t l_204 = 0x814D1708L;
        int16_t l_233 = 0x959AL;
        uint64_t *l_258 = &l_178[4][4];
        int32_t l_280 = 0L;
        const struct S1 l_286 = {8UL};
        const union U2 l_346 = {7L};
        int32_t l_367 = 0x578F9897L;
        int32_t l_368 = 0L;
        int32_t l_369 = 3L;
        int32_t l_370 = (-1L);
        int32_t l_372 = 0x291F7142L;
        uint8_t l_377 = 247UL;
        int32_t l_423 = 6L;
        uint64_t l_428 = 18446744073709551610UL;
        uint32_t l_444 = 0x11309857L;
        l_204 = (safe_sub_func_uint64_t_u_u((safe_unary_minus_func_uint16_t_u((((safe_sub_func_uint8_t_u_u(g_8, p_3)) , (0x28L && (safe_mul_func_int16_t_s_s((0x788A37CDL || (g_30.f0 | ((((safe_div_func_uint64_t_u_u(((((*l_202) = (+((safe_div_func_uint16_t_u_u((*l_176), (safe_sub_func_int8_t_s_s((((safe_rshift_func_uint16_t_u_u((*l_176), 14)) && g_36.f0) , g_10), 0L)))) <= 65535UL))) ^ (*l_176)) != l_204), (*l_176))) < l_204) && 1L) == g_65))), l_204)))) && p_3))), p_3));
    }
    return &g_65;
}



static struct S1  func_11(int32_t * p_12, const int32_t  p_13, int32_t * p_14)
{ 
    const int32_t l_165 = 0x4E9DB0B1L;
    struct S1 l_166 = {0xEED90807L};
    for (g_10 = 19; (g_10 > (-3)); g_10--)
    { 
        (*p_12) |= ((g_93 |= g_8) != l_165);
    }
    return l_166;
}



static int32_t * func_15(int16_t  p_16, int32_t  p_17, uint32_t  p_18, struct S1  p_19)
{ 
    uint32_t l_63 = 0x13236C21L;
    const int32_t *l_64 = &g_65;
    struct S0 **l_161[7][3][2] = {{{&g_44,&g_44},{&g_44,&g_44},{&g_44,&g_44}},{{&g_44,&g_44},{&g_44,&g_44},{&g_44,&g_44}},{{&g_44,&g_44},{&g_44,&g_44},{&g_44,&g_44}},{{&g_44,&g_44},{&g_44,&g_44},{&g_44,&g_44}},{{&g_44,&g_44},{&g_44,&g_44},{&g_44,&g_44}},{{&g_44,&g_44},{&g_44,&g_44},{&g_44,&g_44}},{{&g_44,&g_44},{&g_44,&g_44},{&g_44,&g_44}}};
    struct S0 *l_162 = &g_45;
    int i, j, k;
    l_162 = func_31(p_19.f0, g_36, func_37((func_40(g_44, (g_46 = &p_17), &g_10) , (l_63 > p_19.f0)), l_64), g_30.f0);
    return &g_65;
}



static int16_t  func_23(union U2  p_24, int8_t  p_25, const uint32_t  p_26, int32_t * const  p_27, const uint32_t  p_28)
{ 
    return g_8;
}



static struct S0 * func_31(const uint32_t  p_32, union U2  p_33, struct S0 * const  p_34, uint32_t  p_35)
{ 
    int32_t * const l_148 = &g_10;
    int32_t **l_149 = &g_46;
    struct S0 **l_151[1][7];
    struct S0 *** const l_150 = &l_151[0][3];
    uint16_t l_156 = 0xC7E8L;
    uint16_t *l_157 = (void*)0;
    uint16_t *l_158 = &l_156;
    int i, j;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 7; j++)
            l_151[i][j] = (void*)0;
    }
    (*l_149) = l_148;
    (*g_46) = (0x60L != (l_150 == ((((safe_div_func_uint8_t_u_u((++g_95), l_156)) , (&l_150 == (void*)0)) , (g_36.f0 , ((*l_158)--))) , &l_151[0][0])));
    (*p_34) = (*p_34);
    return &g_45;
}



static struct S0 * const  func_37(const uint32_t  p_38, const int32_t * p_39)
{ 
    int64_t l_66 = 0x9FA237FF9BDEFAB7LL;
    uint8_t l_77 = 255UL;
    const int32_t *l_82[2];
    uint32_t *l_83 = &g_84;
    int32_t **l_85 = &g_46;
    int32_t *l_86[1];
    int64_t l_87 = 0x3D349FFB2EF76CAFLL;
    int32_t l_94 = 0x38E951F2L;
    struct S0 **l_98 = (void*)0;
    struct S1 *l_100 = (void*)0;
    struct S0 *l_116 = &g_45;
    int i;
    for (i = 0; i < 2; i++)
        l_82[i] = &g_65;
    for (i = 0; i < 1; i++)
        l_86[i] = &g_65;
    (*g_46) = ((l_66 <= p_38) & (((g_8 <= (1UL < (safe_add_func_uint32_t_u_u(((safe_div_func_uint64_t_u_u(g_10, ((safe_add_func_int64_t_s_s(p_38, (safe_lshift_func_int16_t_s_u(((safe_add_func_uint16_t_u_u((((g_10 == (*g_46)) | g_45.f0) || (-1L)), g_8)) < l_66), l_66)))) ^ l_77))) >= (*p_39)), 0L)))) ^ 5L) && l_66));
    l_87 &= ((g_45.f0 ^ (safe_div_func_uint16_t_u_u((((((*l_83) = (l_82[0] != p_39)) || (p_38 | p_38)) ^ (-4L)) | (((*l_85) = (void*)0) != &g_10)), g_8))) == 0xECL);
    if ((safe_rshift_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_s(g_84, g_45.f0)), 5)))
    { 
        int32_t l_92[1][2];
        struct S0 ***l_99[1];
        int i, j;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 2; j++)
                l_92[i][j] = (-3L);
        }
        for (i = 0; i < 1; i++)
            l_99[i] = &l_98;
        ++g_95;
        l_98 = l_98;
        return &g_45;
    }
    else
    { 
        uint8_t l_105[6] = {253UL,0xA2L,253UL,253UL,0xA2L,253UL};
        uint8_t l_128 = 255UL;
        int32_t l_139 = 8L;
        int i;
        l_100 = &g_30;
        for (g_95 = 0; (g_95 >= 20); g_95++)
        { 
            int32_t l_103 = 1L;
            int32_t l_104[7][7] = {{0xEDA81942L,0xCBC2B75FL,0xEDA81942L,1L,0x14D024A4L,4L,1L},{0x33B60433L,0xCBC2B75FL,0xC9157731L,0L,0x14D024A4L,0xCBC2B75FL,4L},{(-10L),0x99605DBDL,1L,4L,0x9EBDDF90L,0x9EBDDF90L,4L},{1L,0xB0F311A8L,1L,0x5B3CABD6L,0xD1F82652L,0x9EBDDF90L,0x5B3CABD6L},{(-10L),0xB0F311A8L,(-1L),4L,0xD1F82652L,0xCBC2B75FL,4L},{(-10L),0x99605DBDL,1L,4L,0x9EBDDF90L,0x9EBDDF90L,4L},{1L,0xB0F311A8L,1L,0x5B3CABD6L,0xD1F82652L,0x9EBDDF90L,0x5B3CABD6L}};
            struct S0 l_121 = {29};
            int64_t l_138 = 0xC0B3D1FD5F48091CLL;
            int i, j;
            for (g_65 = 0; (g_65 <= 0); g_65 += 1)
            { 
                int i;
                l_86[g_65] = l_86[g_65];
            }
            l_105[1]--;
        }
    }
    return &g_45;
}



static int64_t  func_40(struct S0 * p_41, int32_t * p_42, int32_t * p_43)
{ 
    int32_t *l_47 = (void*)0;
    int32_t *l_48[5] = {&g_10,&g_10,&g_10,&g_10,&g_10};
    uint32_t l_49 = 9UL;
    struct S0 * const l_52[3] = {&g_45,&g_45,&g_45};
    struct S0 **l_53 = &g_44;
    uint8_t l_54 = 0UL;
    struct S1 *l_57[6];
    struct S1 **l_58 = &l_57[1];
    int i;
    for (i = 0; i < 6; i++)
        l_57[i] = &g_30;
    ++l_49;
    (*l_53) = l_52[0];
    ++l_54;
    (*l_58) = l_57[0];
    for (g_10 = 18; (g_10 != 17); g_10--)
    { 
        int32_t l_61 = 0L;
        (*p_42) &= ((l_61 != l_61) , (p_43 != p_42));
        (*p_42) = (!((void*)0 != &g_45));
    }
    return g_36.f0;
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_8, "g_8", print_hash_value);
    transparent_crc(g_10, "g_10", print_hash_value);
    transparent_crc(g_30.f0, "g_30.f0", print_hash_value);
    transparent_crc(g_36.f0, "g_36.f0", print_hash_value);
    transparent_crc(g_45.f0, "g_45.f0", print_hash_value);
    transparent_crc(g_65, "g_65", print_hash_value);
    transparent_crc(g_84, "g_84", print_hash_value);
    transparent_crc(g_93, "g_93", print_hash_value);
    transparent_crc(g_95, "g_95", print_hash_value);
    transparent_crc(g_180, "g_180", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 7; j++)
        {
            transparent_crc(g_203[i][j], "g_203[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_230, "g_230", print_hash_value);
    transparent_crc(g_240, "g_240", print_hash_value);
    transparent_crc(g_241, "g_241", print_hash_value);
    transparent_crc(g_441, "g_441", print_hash_value);
    transparent_crc(g_452, "g_452", print_hash_value);
    transparent_crc(g_499, "g_499", print_hash_value);
    transparent_crc(g_508, "g_508", print_hash_value);
    transparent_crc(g_553, "g_553", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_608[i], "g_608[i]", print_hash_value);

    }
    transparent_crc(g_618, "g_618", print_hash_value);
    transparent_crc(g_652, "g_652", print_hash_value);
    transparent_crc(g_670, "g_670", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
