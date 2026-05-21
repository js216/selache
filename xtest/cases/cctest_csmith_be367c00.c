// SPDX-License-Identifier: MIT
// cctest_csmith_be367c00.c --- cctest case csmith_be367c00 (csmith seed 3191241728)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x49af99e0 */

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

// Options:   -s 3191241728 -o /tmp/csmith_gen_kmnlpvql/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


#pragma pack(push)
#pragma pack(1)
struct S0 {
   const int8_t  f0;
   int8_t  f1;
   uint32_t  f2;
};
#pragma pack(pop)

union U1 {
   uint32_t  f0;
   uint8_t  f1;
   int8_t  f2;
};

union U2 {
   const uint32_t  f0;
   struct S0  f1;
   struct S0  f2;
   const struct S0  f3;
};

union U3 {
   const struct S0  f0;
   struct S0  f1;
   const uint32_t  f2;
   uint16_t  f3;
};

union U4 {
   uint64_t  f0;
   struct S0  f1;
   uint64_t  f2;
   struct S0  f3;
};

union U5 {
   int32_t  f0;
};


static union U2 g_14 = {0xC8100C43L};
static uint32_t g_15[1][3] = {{0x9F3FAA32L,0x9F3FAA32L,0x9F3FAA32L}};
static uint64_t g_21[5] = {1UL,1UL,1UL,1UL,1UL};
static int64_t g_23[4] = {9L,9L,9L,9L};
static int16_t g_33 = 4L;
static int32_t g_34 = 0L;
static int64_t g_36 = 0x93F8DE905F4D0C65LL;
static uint64_t g_39 = 0x1F2059515ED761E7LL;
static int64_t g_61 = (-1L);
static union U3 g_76 = {{0x66L,0x43L,0x8B9E0795L}};
static uint64_t g_119[2][4][5] = {{{18446744073709551608UL,0xE5BAC90574D26467LL,18446744073709551608UL,18446744073709551608UL,0xE5BAC90574D26467LL},{0UL,18446744073709551615UL,4UL,0UL,4UL},{0xE5BAC90574D26467LL,0xE5BAC90574D26467LL,0x122FC4CEA799ADA3LL,0xE5BAC90574D26467LL,0xE5BAC90574D26467LL},{4UL,0UL,4UL,18446744073709551615UL,0UL}},{{0xE5BAC90574D26467LL,18446744073709551608UL,18446744073709551608UL,0xE5BAC90574D26467LL,18446744073709551608UL},{0UL,0UL,0xBB316AA2C9F03B65LL,0UL,0UL},{18446744073709551608UL,0xE5BAC90574D26467LL,18446744073709551608UL,18446744073709551608UL,18446744073709551608UL},{4UL,1UL,0xBB316AA2C9F03B65LL,18446744073709551615UL,0xBB316AA2C9F03B65LL}}};
static int32_t g_127 = (-2L);
static uint32_t g_151 = 0x4C9D4284L;
static const uint16_t g_168 = 0x350FL;
static int32_t g_226 = 4L;
static uint32_t g_229[3] = {18446744073709551615UL,18446744073709551615UL,18446744073709551615UL};
static uint64_t g_236 = 0x7BE276FF74A9DA08LL;
static int16_t g_256[3][1] = {{0x47ABL},{0x47ABL},{0x47ABL}};
static int16_t g_267[4][5] = {{0xE07CL,0xE07CL,(-1L),0xE07CL,0xE07CL},{1L,0L,1L,1L,0L},{0xE07CL,(-1L),(-1L),0xE07CL,(-1L)},{0L,0L,(-2L),0L,0L}};



static int32_t  func_1(void);
static uint32_t  func_4(int32_t  p_5, int8_t  p_6, union U5  p_7, uint32_t  p_8, const union U2  p_9);
static int32_t  func_10(int16_t  p_11, union U2  p_12);
static uint32_t  func_48(const int32_t  p_49);




static int32_t  func_1(void)
{ 
    int8_t l_13[2];
    union U5 l_131[1][1] = {{{0L}}};
    const union U2 l_132[1][5] = {{{0xD7867E7CL},{0xD7867E7CL},{0xD7867E7CL},{0xD7867E7CL},{0xD7867E7CL}}};
    int8_t l_239[5];
    union U4 l_248 = {0x8359BE378BC908AELL};
    int32_t l_249[3][2][1];
    int32_t l_266 = 1L;
    int32_t l_268 = 0L;
    int i, j, k;
    for (i = 0; i < 2; i++)
        l_13[i] = 0x10L;
    for (i = 0; i < 5; i++)
        l_239[i] = 0x05L;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 1; k++)
                l_249[i][j][k] = 0xE8836BE3L;
        }
    }
    if (((safe_sub_func_uint32_t_u_u(func_4(func_10(l_13[0], g_14), g_76.f0.f1, l_131[0][0], l_13[0], l_132[0][4]), l_13[1])) , l_131[0][0].f0))
    { 
        uint16_t l_216 = 65529UL;
        int32_t l_225 = 0L;
        int32_t l_227 = 1L;
        int16_t l_232 = 0L;
        if ((~(l_13[0] <= l_216)))
        { 
            int32_t l_228 = 0x175B47ACL;
            int64_t l_233[2];
            int i;
            for (i = 0; i < 2; i++)
                l_233[i] = 0x39E2500355CF6CD2LL;
            g_34 = (((l_132[0][4].f0 <= g_14.f0) , (l_132[0][4].f0 > (g_61 ^= (safe_sub_func_int32_t_s_s(((safe_add_func_uint64_t_u_u(((safe_rshift_func_int8_t_s_s((safe_rshift_func_uint16_t_u_s((g_76.f3 = (((--g_229[1]) != ((0xFBL > g_36) ^ g_36)) >= l_13[0])), 3)), 4)) | l_232), l_233[0])) & g_15[0][2]), g_21[3]))))) && 0L);
        }
        else
        { 
            uint32_t l_240 = 4294967287UL;
            for (g_151 = 0; (g_151 >= 37); g_151 = safe_add_func_uint32_t_u_u(g_151, 2))
            { 
                ++g_236;
            }
            l_240++;
            for (g_36 = 0; (g_36 >= 14); g_36 = safe_add_func_int64_t_s_s(g_36, 6))
            { 
                uint32_t l_245 = 4294967288UL;
                return l_245;
            }
        }
    }
    else
    { 
        g_127 &= (safe_mod_func_int8_t_s_s((g_226 < ((l_248 , g_119[1][3][2]) & ((g_21[2] >= g_14.f0) & l_248.f2))), 0x9EL));
        return g_119[0][1][4];
    }
    if (l_248.f2)
        goto lbl_250;
lbl_250:
    l_249[0][0][0] = g_226;
    g_34 = (((l_268 &= ((((~((safe_div_func_uint64_t_u_u((safe_rshift_func_uint16_t_u_s((g_21[2] && (((g_256[0][0] = l_248.f3.f0) == (g_267[3][2] |= ((l_266 = (l_249[0][0][0] = ((safe_mul_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_u((+(safe_sub_func_int8_t_s_s(((((safe_lshift_func_int16_t_s_u((-1L), (l_248 , l_239[2]))) == g_15[0][2]) , g_39) != l_131[0][0].f0), 1L))), g_236)), 8L)) & 1L))) || l_249[0][0][0]))) ^ l_248.f3.f0)), 14)), (-9L))) ^ g_23[1])) > 0x7C6DL) ^ g_39) || 1UL)) || 0x452917B7L) && 0xD9L);
    return l_248.f3.f2;
}



static uint32_t  func_4(int32_t  p_5, int8_t  p_6, union U5  p_7, uint32_t  p_8, const union U2  p_9)
{ 
    int16_t l_133 = 6L;
    int32_t l_134[3][3] = {{0L,0L,0L},{3L,3L,3L},{0L,0L,0L}};
    int32_t l_139 = 0x1EE9290BL;
    union U1 l_154 = {0UL};
    uint32_t l_213[1];
    int i, j;
    for (i = 0; i < 1; i++)
        l_213[i] = 0xA3E397D9L;
    l_134[2][1] &= l_133;
    if ((l_134[2][1] = (l_139 &= ((safe_div_func_uint32_t_u_u((((p_5 <= (safe_add_func_int32_t_s_s(((((p_7 = p_7) , l_134[2][1]) < (l_133 >= g_119[1][3][2])) == g_119[0][1][3]), l_134[0][1]))) == l_133) && 18446744073709551615UL), p_8)) || g_23[3]))))
    { 
        int64_t l_146 = (-1L);
        uint16_t l_182 = 0xF273L;
        struct S0 l_186 = {0xD0L,0x72L,18446744073709551615UL};
        int32_t l_194 = 0x767B0238L;
        int32_t l_204 = 4L;
        if (((safe_mul_func_int16_t_s_s((((g_76.f1.f0 & (g_76.f1.f2 || (safe_mul_func_uint8_t_u_u(l_139, (safe_lshift_func_int16_t_s_s((l_134[2][1] && l_139), p_7.f0)))))) <= g_76.f0.f0) , g_76.f2), 0x914DL)) || l_146))
        { 
            int32_t l_147 = 0xB87D1E39L;
            int32_t l_148 = 6L;
            int32_t l_149 = 1L;
            int32_t l_150 = (-1L);
            ++g_151;
        }
        else
        { 
            int8_t l_157 = 0L;
            int32_t l_169 = 0x86A01D58L;
            union U2 l_189 = {18446744073709551615UL};
            struct S0 l_193 = {0L,0xEAL,1UL};
            if ((l_157 = ((l_154 , (g_76.f3--)) && 0xF71AL)))
            { 
                g_34 |= (safe_mul_func_uint16_t_u_u(g_151, (((g_15[0][2] , (safe_mod_func_int8_t_s_s((((safe_mul_func_int16_t_s_s(0xCC0BL, (safe_div_func_int64_t_s_s(((((safe_mul_func_int8_t_s_s((-2L), 252UL)) <= 0L) == 0L) ^ 1L), 0x8B998A83C5579058LL)))) >= g_168) != p_7.f0), p_7.f0))) != l_169) | l_146)));
            }
            else
            { 
                int64_t l_190 = 0x9DB0B106958104EELL;
                l_134[2][1] = (((safe_lshift_func_uint16_t_u_u((g_119[1][3][2] == (((((g_127 >= (safe_mul_func_uint8_t_u_u((((safe_mul_func_uint16_t_u_u((((safe_div_func_uint16_t_u_u(p_5, l_134[2][2])) , g_34) >= p_9.f0), 0x00D0L)) & 0x759984D6A5DCCCDCLL) && 0xCE41FC7E891FE2E2LL), 1UL))) != g_119[0][1][3]) & 65532UL) >= g_119[1][3][2]) >= g_15[0][0])), 14)) || g_23[3]) != g_168);
                l_134[2][2] = (((((((safe_sub_func_uint16_t_u_u(((safe_rshift_func_int16_t_s_u(l_182, (~(((safe_lshift_func_int16_t_s_u((l_186 , (safe_add_func_int64_t_s_s(((l_189 , l_186.f1) == g_151), l_190))), g_15[0][1])) ^ 1L) , p_5)))) == g_119[1][3][2]), 0x1569L)) , p_7.f0) && g_21[2]) ^ p_5) , p_5) >= l_146) & p_9.f0);
                g_127 &= (l_157 >= (l_190 >= (safe_div_func_uint16_t_u_u((((l_194 = (l_193 , l_193.f0)) >= 0x9325L) , g_21[2]), 1L))));
            }
        }
        l_204 = (safe_add_func_uint8_t_u_u((l_194 |= (9UL && (~(safe_add_func_int8_t_s_s((safe_add_func_uint32_t_u_u((l_186.f0 != ((l_134[2][1] = l_154.f2) == (safe_lshift_func_uint8_t_u_s(252UL, 1)))), p_5)), l_186.f0))))), g_36));
    }
    else
    { 
        int8_t l_208[5][2] = {{(-8L),1L},{1L,(-8L)},{1L,1L},{(-8L),1L},{1L,(-8L)}};
        int32_t l_214 = 0x5614CE61L;
        int i, j;
        l_139 = (l_214 = (safe_unary_minus_func_int16_t_s((safe_div_func_uint8_t_u_u(l_208[4][0], (safe_mod_func_uint8_t_u_u((4L & 0xF7L), ((safe_div_func_int64_t_s_s(p_5, l_213[0])) & g_15[0][2]))))))));
    }
    return g_21[2];
}



static int32_t  func_10(int16_t  p_11, union U2  p_12)
{ 
    uint16_t l_25 = 1UL;
    int32_t l_32 = 1L;
    int32_t l_124 = 0x6A99605DL;
    int32_t l_126[1][3][2] = {{{(-3L),(-3L)},{0L,(-3L)},{(-3L),0L}}};
    int i, j, k;
    g_15[0][2] = 0x611BC383L;
    if (g_15[0][0])
    { 
        uint8_t l_26 = 0UL;
        for (p_12.f1.f2 = 0; (p_12.f1.f2 != 52); p_12.f1.f2 = safe_add_func_int8_t_s_s(p_12.f1.f2, 1))
        { 
            uint32_t l_24 = 0x5CC7C44DL;
            for (g_14.f2.f2 = 0; (g_14.f2.f2 != 14); g_14.f2.f2 = safe_add_func_uint32_t_u_u(g_14.f2.f2, 1))
            { 
                int8_t l_20 = (-1L);
                int32_t l_22 = 5L;
                l_22 = ((g_21[2] = l_20) ^ 0x894FF5452FA814B1LL);
                g_23[0] = g_15[0][2];
                if (l_20)
                    goto lbl_27;
            }
            l_24 = g_15[0][1];
        }
lbl_27:
        l_26 = l_25;
        for (l_26 = 0; (l_26 > 14); l_26++)
        { 
            for (g_14.f1.f1 = 0; (g_14.f1.f1 != 19); g_14.f1.f1++)
            { 
                return g_15[0][1];
            }
            if (l_26)
                break;
        }
    }
    else
    { 
        int8_t l_35 = 0xE6L;
        int32_t l_37 = (-3L);
        int32_t l_38 = 7L;
        uint32_t l_128 = 4294967295UL;
        l_32 = 0L;
        g_33 &= g_23[1];
        for (p_12.f1.f2 = 0; (p_12.f1.f2 <= 3); p_12.f1.f2 += 1)
        { 
            int16_t l_123 = 7L;
            for (l_32 = 3; (l_32 >= 1); l_32 -= 1)
            { 
                int16_t l_46 = 0x520AL;
                union U1 l_47 = {0x54C5F6B4L};
                int i;
                g_39++;
                g_34 |= (safe_mul_func_uint16_t_u_u((safe_sub_func_uint8_t_u_u(((l_46 = 0xA7L) & ((l_47 , func_48(g_21[4])) < g_15[0][2])), (-2L))), p_12.f0));
            }
            g_34 = (l_32 = p_12.f0);
            for (g_14.f1.f2 = 0; (g_14.f1.f2 <= 0); g_14.f1.f2 += 1)
            { 
                int32_t l_122 = 0x1B4BD6B4L;
                int32_t l_125[3];
                int i, j;
                for (i = 0; i < 3; i++)
                    l_125[i] = (-1L);
                l_123 = (g_34 = (l_32 &= l_122));
                --l_128;
                l_125[0] = g_119[0][1][3];
            }
        }
    }
    return l_126[0][0][1];
}



static uint32_t  func_48(const int32_t  p_49)
{ 
    uint64_t l_60 = 0x4BFCE9347A64A0F0LL;
    int32_t l_66 = 1L;
    struct S0 l_85 = {0L,0xE3L,18446744073709551615UL};
    for (g_14.f2.f1 = 0; (g_14.f2.f1 != (-8)); g_14.f2.f1 = safe_sub_func_uint32_t_u_u(g_14.f2.f1, 8))
    { 
        uint16_t l_62 = 0x3236L;
        int32_t l_65 = 2L;
        int16_t l_67[5];
        const int32_t l_95 = 0x34A9CADDL;
        int32_t l_116 = (-7L);
        int32_t l_117[3];
        int i;
        for (i = 0; i < 5; i++)
            l_67[i] = 0x24CEL;
        for (i = 0; i < 3; i++)
            l_117[i] = 1L;
    }
    return g_39;
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_14.f0, "g_14.f0", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transparent_crc(g_15[i][j], "g_15[i][j]", print_hash_value);

        }
    }
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_21[i], "g_21[i]", print_hash_value);

    }
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_23[i], "g_23[i]", print_hash_value);

    }
    transparent_crc(g_33, "g_33", print_hash_value);
    transparent_crc(g_34, "g_34", print_hash_value);
    transparent_crc(g_36, "g_36", print_hash_value);
    transparent_crc(g_39, "g_39", print_hash_value);
    transparent_crc(g_61, "g_61", print_hash_value);
    transparent_crc(g_76.f3, "g_76.f3", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 5; k++)
            {
                transparent_crc(g_119[i][j][k], "g_119[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_127, "g_127", print_hash_value);
    transparent_crc(g_151, "g_151", print_hash_value);
    transparent_crc(g_168, "g_168", print_hash_value);
    transparent_crc(g_226, "g_226", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_229[i], "g_229[i]", print_hash_value);

    }
    transparent_crc(g_236, "g_236", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 1; j++)
        {
            transparent_crc(g_256[i][j], "g_256[i][j]", print_hash_value);

        }
    }
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 5; j++)
        {
            transparent_crc(g_267[i][j], "g_267[i][j]", print_hash_value);

        }
    }
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
