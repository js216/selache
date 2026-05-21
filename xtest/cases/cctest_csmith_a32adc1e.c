// SPDX-License-Identifier: MIT
// cctest_csmith_a32adc1e.c --- cctest case csmith_a32adc1e (csmith seed 2737495070)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x6a068b6e */

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

// Options:   -s 2737495070 -o /tmp/csmith_gen_bgor4_ho/csmith.c --concise --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 8 --max-block-size 5 --max-block-depth 4 --max-expr-complexity 8 --max-array-dim 3 --max-array-len-per-dim 7 --max-struct-fields 8 --max-union-fields 5

static long __undefined;


#pragma pack(push)
#pragma pack(1)
struct S0 {
   int16_t  f0;
   int32_t  f1;
   uint64_t  f2;
   int64_t  f3;
   uint32_t  f4;
   int64_t  f5;
   int16_t  f6;
   uint16_t  f7;
};
#pragma pack(pop)

#pragma pack(push)
#pragma pack(1)
struct S1 {
   int64_t  f0;
   const uint32_t  f1;
   const struct S0  f2;
   uint16_t  f3;
   uint16_t  f4;
   const int32_t  f5;
   const uint32_t  f6;
};
#pragma pack(pop)

union U2 {
   const uint32_t  f0;
   int8_t * f1;
   int8_t * const  f2;
   const int64_t  f3;
};


static int32_t g_2 = 5L;
static int32_t g_5 = (-1L);
static const int8_t *g_33[5] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
static int64_t g_38[7][7][3] = {{{(-1L),(-1L),0x4A3CE577E9FB133DLL},{9L,(-2L),0x2841C2FCEC4EE8FALL},{1L,0xC41425452E2CC7BCLL,0x4A3CE577E9FB133DLL},{0x9EFECF47A0CA4D24LL,1L,1L},{(-1L),0xC41425452E2CC7BCLL,(-1L)},{(-1L),(-2L),(-1L)},{(-1L),(-1L),(-10L)}},{{0x9EFECF47A0CA4D24LL,1L,(-1L)},{1L,(-10L),(-1L)},{9L,1L,1L},{(-1L),(-1L),0x4A3CE577E9FB133DLL},{9L,(-2L),0x2841C2FCEC4EE8FALL},{1L,0xC41425452E2CC7BCLL,0x4A3CE577E9FB133DLL},{0x9EFECF47A0CA4D24LL,1L,0x30E92F9E84EBF8C3LL}},{{0x4A3CE577E9FB133DLL,0x4F86FC3314648A57LL,0x003B9FE29F19B52DLL},{0x2841C2FCEC4EE8FALL,(-1L),0L},{0x4A3CE577E9FB133DLL,(-1L),1L},{1L,0x30E92F9E84EBF8C3LL,0L},{(-1L),0x06997B9FFBDD2A48LL,0x003B9FE29F19B52DLL},{(-1L),0x30E92F9E84EBF8C3LL,0x30E92F9E84EBF8C3LL},{(-10L),(-1L),1L}},{{(-1L),(-1L),1L},{(-1L),0x4F86FC3314648A57LL,1L},{1L,(-9L),0x30E92F9E84EBF8C3LL},{0x4A3CE577E9FB133DLL,0x4F86FC3314648A57LL,0x003B9FE29F19B52DLL},{0x2841C2FCEC4EE8FALL,(-1L),0L},{0x4A3CE577E9FB133DLL,(-1L),1L},{1L,0x30E92F9E84EBF8C3LL,0L}},{{(-1L),0x06997B9FFBDD2A48LL,0x003B9FE29F19B52DLL},{(-1L),0x30E92F9E84EBF8C3LL,0x30E92F9E84EBF8C3LL},{(-10L),(-1L),1L},{(-1L),(-1L),1L},{(-1L),0x4F86FC3314648A57LL,1L},{1L,(-9L),0x30E92F9E84EBF8C3LL},{0x4A3CE577E9FB133DLL,0x4F86FC3314648A57LL,0x003B9FE29F19B52DLL}},{{0x2841C2FCEC4EE8FALL,(-1L),0L},{0x4A3CE577E9FB133DLL,(-1L),1L},{1L,0x30E92F9E84EBF8C3LL,0L},{(-1L),0x06997B9FFBDD2A48LL,0x003B9FE29F19B52DLL},{(-1L),0x30E92F9E84EBF8C3LL,0x30E92F9E84EBF8C3LL},{(-10L),(-1L),1L},{(-1L),(-1L),1L}},{{(-1L),0x4F86FC3314648A57LL,1L},{1L,(-9L),0x30E92F9E84EBF8C3LL},{0x4A3CE577E9FB133DLL,0x4F86FC3314648A57LL,0x003B9FE29F19B52DLL},{0x2841C2FCEC4EE8FALL,(-1L),0L},{0x4A3CE577E9FB133DLL,(-1L),1L},{1L,0x30E92F9E84EBF8C3LL,0L},{(-1L),0x06997B9FFBDD2A48LL,0x003B9FE29F19B52DLL}}};
static uint32_t g_40[4] = {4294967295UL,4294967295UL,4294967295UL,4294967295UL};
static uint32_t g_62[1] = {0x62C3DCCDL};
static uint32_t *g_61 = &g_62[0];
static int16_t g_66 = 0x03F7L;
static struct S0 g_74 = {0x8F2AL,0xC61BC9EFL,0x5AD8B3B4CC26152DLL,-1L,18446744073709551615UL,-5L,1L,65535UL};
static struct S1 g_86 = {-1L,0x2E2BC135L,{7L,0xD9E4BB11L,0x40316972AE315533LL,0x8A3BAB64809F77A2LL,1UL,0x3262CCAF28F66BB0LL,1L,1UL},65527UL,0x3E15L,0x87F61242L,0xE0461AF4L};
static uint8_t g_91 = 0x2AL;
static uint16_t g_132 = 0xE047L;
static int8_t *g_143 = (void*)0;
static int8_t **g_142 = &g_143;
static int32_t *g_183 = (void*)0;
static int32_t **g_182 = &g_183;
static uint64_t g_194 = 0x95546736D523453ALL;
static uint32_t **g_197 = &g_61;
static uint32_t ***g_196 = &g_197;
static union U2 g_231[1][2] = {{{5UL},{5UL}}};
static int8_t g_240[4][7] = {{1L,1L,0x55L,0x55L,1L,1L,(-10L)},{0x85L,0xC8L,0x42L,0x42L,0xC8L,0x85L,1L},{1L,1L,0x55L,0x55L,1L,1L,(-10L)},{0x85L,0xC8L,0x42L,0x42L,0xC8L,0x85L,1L}};
static uint8_t g_243 = 0x83L;
static int16_t g_252 = (-1L);
static uint32_t g_296 = 4294967288UL;
static int32_t g_303 = (-1L);
static uint32_t g_312 = 0xFDD4135DL;
static uint32_t g_339 = 0x9852C722L;
static uint64_t *g_348 = &g_74.f2;
static uint64_t **g_347 = &g_348;
static uint32_t g_361 = 0x44600341L;
static uint32_t g_362 = 1UL;
static int64_t *g_434[4] = {&g_38[4][5][2],&g_38[4][5][2],&g_38[4][5][2],&g_38[4][5][2]};
static int64_t **g_433 = &g_434[0];
static int64_t ***g_469 = &g_433;
static int64_t ****g_468[5][2][6] = {{{&g_469,&g_469,(void*)0,&g_469,&g_469,&g_469},{&g_469,&g_469,(void*)0,&g_469,&g_469,&g_469}},{{&g_469,&g_469,&g_469,&g_469,&g_469,(void*)0},{(void*)0,&g_469,&g_469,&g_469,&g_469,(void*)0}},{{&g_469,&g_469,&g_469,&g_469,(void*)0,&g_469},{&g_469,&g_469,(void*)0,(void*)0,(void*)0,&g_469}},{{&g_469,&g_469,(void*)0,&g_469,&g_469,&g_469},{&g_469,(void*)0,&g_469,&g_469,&g_469,&g_469}},{{&g_469,&g_469,&g_469,&g_469,(void*)0,&g_469},{&g_469,&g_469,&g_469,&g_469,&g_469,&g_469}}};
static uint64_t g_472 = 0x12B69B4388ADB94ALL;
static union U2 g_493[6] = {{4294967295UL},{4294967295UL},{4294967295UL},{4294967295UL},{4294967295UL},{4294967295UL}};
static union U2 *g_492 = &g_493[4];
static const int16_t g_553 = 0x40DDL;
static const int32_t g_577 = (-1L);
static const uint8_t g_593[5][1] = {{0x78L},{254UL},{0x78L},{254UL},{0x78L}};
static uint32_t ****g_623 = &g_196;
static uint32_t *****g_622[5][4][4] = {{{&g_623,&g_623,&g_623,&g_623},{&g_623,&g_623,&g_623,&g_623},{(void*)0,&g_623,&g_623,&g_623},{&g_623,(void*)0,&g_623,&g_623}},{{(void*)0,&g_623,&g_623,&g_623},{(void*)0,&g_623,&g_623,&g_623},{&g_623,&g_623,&g_623,&g_623},{&g_623,&g_623,&g_623,(void*)0}},{{&g_623,&g_623,(void*)0,&g_623},{&g_623,&g_623,(void*)0,(void*)0},{&g_623,&g_623,&g_623,(void*)0},{&g_623,&g_623,&g_623,&g_623}},{{&g_623,&g_623,&g_623,&g_623},{(void*)0,&g_623,&g_623,&g_623},{(void*)0,(void*)0,&g_623,&g_623},{&g_623,(void*)0,&g_623,&g_623}},{{(void*)0,&g_623,&g_623,&g_623},{&g_623,&g_623,&g_623,&g_623},{&g_623,&g_623,&g_623,(void*)0},{&g_623,&g_623,&g_623,(void*)0}}};
static uint32_t g_643 = 0x54076ECEL;
static const int16_t g_651 = 0x051FL;
static const uint32_t *g_683 = &g_86.f6;
static const uint32_t **g_682 = &g_683;
static const uint32_t ***g_681 = &g_682;
static const uint32_t **** const g_680 = &g_681;
static const uint32_t **** const *g_679 = &g_680;
static uint32_t g_722 = 0x754A82B9L;
static uint32_t g_723 = 4294967295UL;
static const uint8_t g_745 = 248UL;
static uint8_t g_756 = 0xD8L;
static uint64_t g_809 = 0x14ACE872D86C31F5LL;
static int64_t *****g_814 = &g_468[2][0][5];
static int8_t ***g_820 = (void*)0;
static int8_t ****g_819[6][5][2] = {{{&g_820,(void*)0},{(void*)0,&g_820},{(void*)0,(void*)0},{&g_820,(void*)0},{(void*)0,&g_820}},{{(void*)0,(void*)0},{&g_820,(void*)0},{(void*)0,&g_820},{(void*)0,(void*)0},{&g_820,(void*)0}},{{(void*)0,&g_820},{(void*)0,(void*)0},{&g_820,(void*)0},{(void*)0,&g_820},{(void*)0,(void*)0}},{{&g_820,(void*)0},{(void*)0,&g_820},{(void*)0,(void*)0},{&g_820,(void*)0},{(void*)0,&g_820}},{{(void*)0,(void*)0},{&g_820,(void*)0},{(void*)0,&g_820},{(void*)0,(void*)0},{&g_820,(void*)0}},{{(void*)0,&g_820},{(void*)0,(void*)0},{&g_820,(void*)0},{(void*)0,&g_820},{(void*)0,(void*)0}}};
static uint64_t g_855 = 1UL;
static uint16_t g_874 = 0x86DAL;
static int16_t *g_915 = (void*)0;
static int16_t **g_914 = &g_915;
static int16_t ***g_913 = &g_914;
static uint8_t g_933 = 0xF7L;
static uint64_t g_987 = 0UL;
static int64_t g_1002 = 0L;
static int8_t *****g_1095[4][4][5] = {{{&g_819[1][3][0],&g_819[2][1][1],&g_819[1][3][0],&g_819[1][3][0],&g_819[2][1][1]},{&g_819[2][1][1],&g_819[1][3][0],&g_819[1][3][0],&g_819[2][1][1],&g_819[1][3][0]},{(void*)0,&g_819[2][1][1],&g_819[1][3][0],&g_819[2][1][1],(void*)0},{&g_819[1][3][0],&g_819[1][3][0],&g_819[1][3][0],&g_819[1][3][0],&g_819[1][3][0]}},{{(void*)0,&g_819[1][3][0],&g_819[1][3][0],(void*)0,&g_819[1][3][0]},{&g_819[1][3][0],&g_819[1][3][0],&g_819[1][3][0],&g_819[1][3][0],&g_819[1][3][0]},{&g_819[1][4][1],&g_819[1][3][0],&g_819[1][4][1],&g_819[1][3][0],&g_819[1][3][0]},{&g_819[1][3][0],&g_819[1][3][0],&g_819[1][3][0],&g_819[1][3][0],&g_819[1][3][0]}},{{&g_819[1][3][0],&g_819[1][3][0],&g_819[1][3][0],&g_819[1][3][0],&g_819[1][3][0]},{&g_819[1][4][1],&g_819[1][3][0],&g_819[1][3][0],&g_819[1][3][0],&g_819[1][3][0]},{&g_819[1][3][0],&g_819[1][3][0],&g_819[1][4][1],&g_819[1][3][0],&g_819[1][3][0]},{&g_819[1][3][0],&g_819[1][3][0],&g_819[1][3][0],&g_819[1][3][0],&g_819[1][3][0]}},{{&g_819[1][4][1],&g_819[1][3][0],&g_819[1][3][0],&g_819[1][3][0],&g_819[1][3][0]},{&g_819[1][3][0],&g_819[1][3][0],&g_819[1][3][0],&g_819[1][3][0],&g_819[1][3][0]},{&g_819[1][3][0],&g_819[1][3][0],&g_819[1][3][0],&g_819[1][3][0],&g_819[1][3][0]},{&g_819[1][4][1],&g_819[1][3][0],&g_819[1][4][1],&g_819[1][3][0],&g_819[1][3][0]}}};
static int32_t g_1121[7] = {(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)};
static int32_t g_1151 = 0x00B84A85L;
static struct S1 g_1197 = {0x849A8E0B6F5B754DLL,0xA84B1E25L,{0L,0xBD93F59AL,0UL,0L,0xE1B1F26EL,0x798500E0FB026264LL,-10L,0UL},65532UL,0x4EAFL,-2L,0x7744957BL};
static uint32_t g_1203[3][6] = {{3UL,18446744073709551610UL,18446744073709551615UL,18446744073709551610UL,18446744073709551610UL,18446744073709551610UL},{3UL,0UL,3UL,18446744073709551610UL,0UL,18446744073709551615UL},{3UL,18446744073709551612UL,18446744073709551610UL,18446744073709551610UL,18446744073709551612UL,3UL}};
static uint32_t *****g_1206 = (void*)0;
static struct S0 g_1217 = {0xE32EL,0L,0xFBA37A22F3173C33LL,-1L,0x2EDEA409L,0x642E82F9C7B25878LL,0xFC25L,0xC8BFL};
static struct S0 *g_1216 = &g_1217;
static const uint32_t g_1231 = 0x514DF23BL;
static uint32_t g_1263 = 0x22242042L;
static int32_t g_1288[5] = {9L,9L,9L,9L,9L};
static uint8_t **g_1323 = (void*)0;
static int64_t g_1415 = 0L;
static int16_t g_1421 = 0xC059L;



static union U2  func_1(void);
static int8_t ** func_9(int32_t  p_10, uint16_t  p_11, int8_t * const * p_12, int64_t  p_13, uint32_t  p_14);
static int8_t  func_16(uint8_t  p_17, int8_t ** p_18, uint64_t  p_19, uint16_t  p_20, int8_t * p_21);
static uint8_t  func_22(uint32_t  p_23, int8_t * p_24);
static int8_t  func_27(int64_t  p_28, struct S0  p_29, int8_t * p_30, union U2  p_31, const int8_t ** const  p_32);
static struct S0  func_34(uint8_t  p_35);
static int8_t  func_47(int8_t ** p_48, union U2  p_49, const uint32_t  p_50, uint32_t  p_51);
static int8_t ** func_52(uint32_t * p_53, int8_t ** p_54);




static union U2  func_1(void)
{ 
    union U2 l_8 = {0x7563FFAFL};
    const int8_t ** const l_773 = &g_33[2];
    int8_t *l_1385 = &g_240[1][4];
    int32_t l_1402 = 0L;
    for (g_2 = 9; (g_2 < 4); g_2--)
    { 
        int32_t l_1238 = (-7L);
        uint8_t *l_1381 = (void*)0;
        uint8_t *l_1382[6] = {&g_91,&g_91,&g_91,&g_91,&g_91,&g_91};
        int8_t **l_1383 = (void*)0;
        int32_t l_1384 = 0x859A1B7FL;
        int32_t l_1403[4][6] = {{0xBB0CF8E3L,0xF44E41BBL,0xBB0CF8E3L,0x85426721L,0x85426721L,0xBB0CF8E3L},{4L,4L,0x85426721L,0x2EF2B9BBL,0x85426721L,4L},{0x85426721L,0xF44E41BBL,0x2EF2B9BBL,0x2EF2B9BBL,0xF44E41BBL,0x85426721L},{4L,0x85426721L,0x2EF2B9BBL,0x85426721L,4L,4L}};
        int8_t ***l_1426 = (void*)0;
        int8_t ***l_1427 = &g_142;
        int i, j;
        for (g_5 = 0; (g_5 > (-3)); g_5 = safe_sub_func_int16_t_s_s(g_5, 3))
        { 
            return l_8;
        }
    }
    return (*g_492);
}



static int8_t ** func_9(int32_t  p_10, uint16_t  p_11, int8_t * const * p_12, int64_t  p_13, uint32_t  p_14)
{ 
    int8_t l_1406 = 0xC4L;
    int32_t *l_1416 = &g_1288[0];
    int32_t *l_1417 = &g_5;
    int32_t *l_1418[2];
    int64_t l_1419 = (-5L);
    int16_t l_1420 = 0x4767L;
    uint64_t l_1422 = 0xAEDB5DBF585252D3LL;
    int8_t **l_1425 = &g_143;
    int i;
    for (i = 0; i < 2; i++)
        l_1418[i] = (void*)0;
    (*l_1416) = ((((safe_sub_func_int16_t_s_s(l_1406, (3UL < ((safe_lshift_func_int8_t_s_s(0x3DL, (safe_rshift_func_uint16_t_u_u((safe_mod_func_uint8_t_u_u(((((((0xC8A8F7ADL != ((safe_sub_func_uint8_t_u_u(0xECL, 0UL)) < l_1406)) <= (*g_683)) != l_1406) == 0x4EL) && g_1415) <= (-1L)), l_1406)), g_1288[1])))) , 0xA666E5B4L)))) && p_11) > l_1406) <= p_14);
    ++l_1422;
    return l_1425;
}



static int8_t  func_16(uint8_t  p_17, int8_t ** p_18, uint64_t  p_19, uint16_t  p_20, int8_t * p_21)
{ 
    struct S1 l_1388 = {-7L,7UL,{0xE38FL,0L,18446744073709551611UL,2L,1UL,1L,0x029FL,0xA73CL},9UL,0xAE15L,4L,0x5EC2724CL};
    int32_t l_1395 = (-6L);
    int32_t l_1396 = 0xB43FE7A1L;
    int64_t l_1397 = 0xA759EC6CD1F19703LL;
    int32_t *l_1398 = &g_303;
    const struct S1 *****l_1399 = (void*)0;
    int32_t l_1401 = 0x81682458L;
lbl_1400:
    (*l_1398) &= (safe_rshift_func_int16_t_s_u((l_1388 , (l_1396 |= (p_17 || ((safe_mul_func_int8_t_s_s(l_1388.f2.f7, (l_1395 = (safe_mod_func_int64_t_s_s(l_1388.f6, (*g_348)))))) >= 0xF35EA46DECB097F9LL)))), ((((((**g_347) | l_1397) , 0xAD072951104EB027LL) <= p_19) <= l_1388.f2.f7) == 3UL)));
    l_1399 = l_1399;
    if (l_1388.f2.f6)
        goto lbl_1400;
    return l_1401;
}



static uint8_t  func_22(uint32_t  p_23, int8_t * p_24)
{ 
    int8_t l_1241 = (-8L);
    uint32_t *l_1242 = (void*)0;
    uint8_t *l_1243 = &g_91;
    int64_t ****l_1244 = &g_469;
    const union U2 l_1246 = {0UL};
    int32_t l_1249 = 0L;
    int32_t l_1256 = (-5L);
    int64_t *l_1257 = &g_74.f3;
    int32_t l_1258 = (-5L);
    int32_t l_1299 = (-1L);
    struct S0 l_1316 = {0x2E73L,-1L,0x44360A5CE89F53DBLL,-1L,18446744073709551615UL,0xEAC8CD68782D558FLL,0L,7UL};
    uint32_t *****l_1321 = &g_623;
    const int16_t l_1332 = 0x3230L;
    const int32_t *l_1363 = (void*)0;
    const int32_t ** const l_1362 = &l_1363;
    const int32_t ** const *l_1361 = &l_1362;
    (*g_1216) = func_34((((safe_rshift_func_uint8_t_u_s(((*l_1243) = ((0UL || (l_1241 != (l_1242 == (*g_682)))) || (&g_913 == (void*)0))), 3)) || (l_1244 != (*g_814))) >= 1UL));
    if ((safe_unary_minus_func_uint32_t_u(((l_1249 = (l_1246 , ((**g_197)--))) , ((safe_div_func_int32_t_s_s(((l_1258 |= ((*l_1257) = ((****l_1244) = ((l_1256 &= (safe_rshift_func_uint8_t_u_s(((safe_lshift_func_int16_t_s_s((l_1249 = (l_1249 < p_23)), p_23)) ^ l_1241), 4))) < ((g_1231 ^ 0x0EL) , 9UL))))) ^ 3UL), l_1241)) & 65529UL)))))
    { 
        int32_t *l_1259 = &l_1256;
        int32_t l_1260 = 9L;
        int32_t *l_1261 = &l_1260;
        int32_t *l_1262[7] = {&l_1249,(void*)0,(void*)0,&l_1249,(void*)0,(void*)0,&l_1249};
        int i;
        g_1263--;
        (*l_1259) ^= 6L;
        (*g_1216) = (*g_1216);
    }
    else
    { 
        int32_t *l_1267 = &l_1249;
        int32_t l_1286 = 0xEFBBBE62L;
        int32_t l_1293 = 0x692B94DCL;
        int32_t l_1294 = 0x74D91F28L;
        int32_t l_1296 = 0xC73687DDL;
        int32_t l_1298[1];
        uint16_t l_1325 = 65535UL;
        int64_t l_1353 = 0L;
        const int32_t *l_1359 = (void*)0;
        const int32_t **l_1358 = &l_1359;
        const int32_t ** const *l_1357[1][6] = {{&l_1358,&l_1358,&l_1358,&l_1358,&l_1358,&l_1358}};
        int8_t l_1374 = 2L;
        int i, j;
        for (i = 0; i < 1; i++)
            l_1298[i] = 1L;
        (*l_1267) = (+p_23);
        if ((safe_lshift_func_int16_t_s_s((&l_1267 != &l_1267), (((*l_1257) &= p_23) && (safe_mul_func_int16_t_s_s(((*l_1267) = ((safe_lshift_func_uint8_t_u_s(((safe_sub_func_uint8_t_u_u((6UL > l_1256), (safe_lshift_func_int16_t_s_s(0xF426L, l_1258)))) >= 4L), 1)) && 18446744073709551613UL)), 0UL))))))
        { 
            int32_t *l_1278 = &g_5;
            int32_t l_1287 = 1L;
            int32_t l_1289 = 0xAC2031F4L;
            int32_t l_1291 = 0x54B811CDL;
            int32_t l_1297 = 0x4FB73360L;
            int32_t l_1301 = 1L;
            const union U2 l_1306 = {0x1EFE7237L};
            (*g_182) = l_1278;
            for (g_362 = 0; (g_362 >= 38); g_362 = safe_add_func_int32_t_s_s(g_362, 4))
            { 
                int32_t l_1290 = (-8L);
                int32_t l_1292 = 0L;
                int32_t l_1295 = 5L;
                int32_t l_1300 = (-10L);
                int32_t l_1302[1];
                uint8_t ***l_1324 = &g_1323;
                int i;
                for (i = 0; i < 1; i++)
                    l_1302[i] = 0x4CEA3162L;
                for (g_74.f4 = 22; (g_74.f4 < 6); --g_74.f4)
                { 
                    int32_t *l_1283 = &g_5;
                    int32_t *l_1284 = &l_1258;
                    int32_t *l_1285[1][2][6] = {{{&g_303,(void*)0,&g_303,&g_303,(void*)0,&g_303},{&g_303,(void*)0,&g_303,&g_303,(void*)0,&g_303}}};
                    uint16_t l_1303[1];
                    uint16_t *l_1312[5];
                    struct S0 **l_1322 = &g_1216;
                    int i, j, k;
                    for (i = 0; i < 1; i++)
                        l_1303[i] = 0x6355L;
                    for (i = 0; i < 5; i++)
                        l_1312[i] = &g_874;
                    ++l_1303[0];
                    (*l_1284) = (l_1306 , ((0x815A6C8589708395LL >= (!((safe_sub_func_int32_t_s_s(p_23, 4294967295UL)) && ((g_86.f4 = (safe_add_func_int16_t_s_s(p_23, ((*l_1267) = (*l_1267))))) & ((((((safe_unary_minus_func_int16_t_s((safe_mul_func_uint16_t_u_u((g_1197.f3 = p_23), g_132)))) ^ 0xE03F9278L) , (**g_182)) > (***g_681)) , l_1316) , l_1292))))) || 0xA053635C8614626FLL));
                    (*g_183) = (safe_rshift_func_int16_t_s_s((safe_rshift_func_int8_t_s_s((&g_623 == l_1321), (*l_1278))), 3));
                    (*l_1284) |= (**g_182);
                    (*l_1322) = &g_1217;
                }
                (*g_182) = &l_1291;
                (*l_1324) = g_1323;
                (*g_182) = (*g_182);
            }
            return l_1325;
        }
        else
        { 
            int64_t l_1352 = 1L;
            uint8_t l_1369 = 0xBDL;
            int32_t l_1379 = 0x54CB7AE8L;
            struct S0 l_1380[3] = {{1L,0L,0UL,-3L,18446744073709551615UL,1L,9L,9UL},{1L,0L,0UL,-3L,18446744073709551615UL,1L,9L,9UL},{1L,0L,0UL,-3L,18446744073709551615UL,1L,9L,9UL}};
            int i;
            for (g_1002 = (-17); (g_1002 == 3); g_1002 = safe_add_func_int16_t_s_s(g_1002, 5))
            { 
                uint8_t l_1340[2][6][6] = {{{0xFDL,1UL,7UL,0xAEL,0x61L,253UL},{0xE9L,0UL,0xFDL,253UL,0xD1L,1UL},{0xE9L,9UL,0xAEL,0xAEL,9UL,0xE9L},{0xFDL,0x61L,0xCDL,0xAEL,1UL,0x61L},{0xE9L,255UL,0x46L,253UL,0UL,7UL},{0xE9L,0x70L,253UL,0xAEL,0x70L,0xFDL}},{{0xFDL,1UL,1UL,0xAEL,1UL,0xAEL},{0xE9L,0xD1L,0xE9L,253UL,255UL,0xCDL},{0xF1L,0xAEL,255UL,0UL,0xAEL,0UL},{1UL,0xFDL,0UL,0UL,0xE9L,0x1CL},{0xF1L,7UL,1UL,0x1CL,0xCDL,0xAFL},{0xF1L,0x61L,0UL,0UL,0x61L,0xF1L}}};
                int16_t l_1351 = 0x7962L;
                int32_t *l_1354[7][1][7] = {{{(void*)0,&l_1293,&g_5,&l_1294,&l_1256,&l_1296,&l_1286}},{{&l_1256,(void*)0,&g_5,(void*)0,(void*)0,&g_5,(void*)0}},{{&l_1256,&l_1258,&g_5,&l_1296,(void*)0,(void*)0,&l_1298[0]}},{{&l_1286,&l_1256,&g_5,&l_1258,&l_1294,&g_1288[0],&l_1294}},{{&g_5,&l_1258,&l_1298[0],&l_1296,&g_5,&g_5,&l_1296}},{{&l_1294,&l_1294,&l_1294,(void*)0,&g_5,&l_1256,&l_1256}},{{&l_1256,&g_1288[0],&g_1288[1],&l_1294,&l_1294,&l_1258,&l_1296}}};
                int i, j, k;
                l_1298[0] |= ((*l_1267) = (((l_1299 = (safe_add_func_uint64_t_u_u(l_1316.f0, l_1256))) > l_1332) >= (safe_mul_func_int32_t_s_s((((safe_mul_func_int8_t_s_s(1L, (+((+((~l_1340[0][4][0]) || (safe_sub_func_int64_t_s_s((safe_div_func_int16_t_s_s(((((*g_492) , ((safe_mod_func_int64_t_s_s((safe_mod_func_uint64_t_u_u(((safe_mul_func_uint16_t_u_u((0xA1EB293EL != 4294967286UL), 0x89A8L)) ^ (*l_1267)), l_1351)), l_1352)) & l_1340[0][5][4])) , p_23) , 0x781EL), l_1352)), p_23)))) , l_1353)))) != p_23) && p_23), 0UL))));
            }
            for (g_252 = 0; (g_252 <= 0); g_252 += 1)
            { 
                uint64_t l_1366 = 0xDF0770FEF256DBF1LL;
                uint8_t **l_1367[1];
                int32_t l_1371 = (-1L);
                int i;
                for (i = 0; i < 1; i++)
                    l_1367[i] = &l_1243;
                for (g_643 = 0; (g_643 <= 0); g_643 += 1)
                { 
                    int i;
                    return g_62[g_643];
                }
                for (g_86.f0 = 3; (g_86.f0 >= 0); g_86.f0 -= 1)
                { 
                    const int32_t ** const **l_1360[4][2] = {{&l_1357[0][4],&l_1357[0][4]},{&l_1357[0][4],&l_1357[0][4]},{&l_1357[0][4],&l_1357[0][4]},{&l_1357[0][4],&l_1357[0][4]}};
                    int32_t ***l_1365[1];
                    int32_t ****l_1364 = &l_1365[0];
                    uint16_t *l_1368[5] = {&g_874,&g_874,&g_874,&g_874,&g_874};
                    int8_t *l_1370[6][4] = {{&g_240[1][4],&g_240[1][4],&g_240[1][4],&g_240[1][4]},{&g_240[1][4],&g_240[1][4],&g_240[1][4],&g_240[1][4]},{&g_240[1][4],&g_240[1][4],&g_240[1][4],&g_240[1][4]},{&g_240[1][4],&g_240[1][4],&g_240[1][4],&g_240[1][4]},{&g_240[1][4],&g_240[1][4],&g_240[1][4],&g_240[1][4]},{&g_240[1][4],&g_240[1][4],&g_240[1][4],&g_240[1][4]}};
                    int i, j;
                    for (i = 0; i < 1; i++)
                        l_1365[i] = (void*)0;
                    l_1299 ^= (l_1298[g_252] = (((l_1371 ^= ((safe_div_func_int16_t_s_s((g_296 == (l_1369 &= (18446744073709551615UL & (((l_1361 = l_1357[0][4]) != ((*l_1364) = &g_182)) < (((l_1366 > (((((0x8750469D4B9ACE12LL >= (((((p_23 != 0x3DF6L) , p_23) , (**g_182)) <= (**g_182)) | 4L)) > p_23) , l_1367[0]) != (void*)0) | p_23)) <= 0xE23FL) , l_1366))))), g_1203[1][4])) ^ (****g_623))) != l_1352) < 0x58L));
                    return l_1369;
                }
            }
            l_1379 = ((g_86 , (18446744073709551615UL <= ((*l_1267) &= (safe_mod_func_int32_t_s_s((((**g_182) < l_1374) < ((safe_lshift_func_int16_t_s_s((-6L), p_23)) , ((((safe_lshift_func_int8_t_s_s((p_23 , p_23), p_23)) , (**g_347)) , (**g_182)) != 0xDC8C7AD7L))), l_1369))))) , (*g_183));
            (*g_1216) = l_1380[1];
        }
        return g_1197.f2.f3;
    }
    for (g_132 = 0; (g_132 <= 3); g_132 += 1)
    { 
        return p_23;
    }
    return p_23;
}



static int8_t  func_27(int64_t  p_28, struct S0  p_29, int8_t * p_30, union U2  p_31, const int8_t ** const  p_32)
{ 
    struct S0 l_774 = {0x801EL,-5L,0x64075F3531D67725LL,0L,0xFF15C188L,0x98D5458658451A80LL,-4L,0xEFD5L};
    int32_t *l_775 = &g_2;
    union U2 l_791 = {0UL};
    struct S1 l_818[6][6][2] = {{{{-7L,4294967291UL,{0x240DL,1L,0xC4C778AF803E8BB6LL,0L,0x893BA438L,4L,0L,65535UL},0xCFF4L,0x25CDL,0L,0UL},{0x465B90653D47435FLL,0UL,{0x5BB3L,0L,18446744073709551613UL,0x7A3595B05B2B5B3FLL,0UL,1L,3L,0xA892L},0xC3BCL,1UL,8L,0xC3D51A7DL}},{{0x754F2311ED752170LL,0xB7FCBE4DL,{0xCAFCL,0x9587553DL,18446744073709551615UL,0x11DBD79411E81D7CLL,0xD984FA33L,-1L,0xC0C6L,0x457CL},0x5D05L,0UL,0x5532DEC1L,1UL},{0x7EBB75A2245F9AC5LL,0x489A73E0L,{1L,6L,0x4F1B80FC906C43DELL,-1L,0xFC1D3198L,-1L,1L,0x9E8DL},0x7778L,0x1C3FL,0xF62F3984L,8UL}},{{0L,0x856D8168L,{1L,0xDE69B26AL,0xCCC3F5A6D4BEBA08LL,0xE952C462A32858A1LL,0x04E0A3C3L,0L,4L,0xB50CL},65535UL,0xCD05L,-1L,0xF9B036B9L},{0xF439157658664E74LL,0x3A930A2FL,{-10L,1L,8UL,0xBD710EC1CC3C4890LL,0x0853DAF9L,0x9FBE1C306A062521LL,0xC482L,65535UL},0UL,0xB230L,-5L,0UL}},{{0xACBD2DFBC76B8EEFLL,0xAD46A5C8L,{0x2A20L,-1L,0x23FE2F0A4686636CLL,0xA1BD9E7BAB1E5B1FLL,0xFFCDD252L,-1L,0L,0UL},65535UL,0x20C5L,0x90DC6D44L,0x762C41E8L},{-10L,4294967293UL,{0xF093L,0L,0x63C9C8A6BFD7E7EFLL,0x7992EA4AA6B87824LL,1UL,3L,1L,3UL},65535UL,65535UL,0xE7B1D411L,1UL}},{{-10L,4294967293UL,{0xF093L,0L,0x63C9C8A6BFD7E7EFLL,0x7992EA4AA6B87824LL,1UL,3L,1L,3UL},65535UL,65535UL,0xE7B1D411L,1UL},{0x43653B8815307A8BLL,4294967290UL,{0xC245L,-10L,8UL,-9L,0x75469111L,0x232F0284BD7C02A2LL,-1L,0UL},0x22A6L,65531UL,-1L,0xFFAE1F4EL}},{{0xAACC8D6409BBAFADLL,0xEA65B04CL,{0x082FL,0x6370C30AL,0x817151903AA7E987LL,0x2B011F9AB3F63CAALL,9UL,-9L,0xDF4DL,0x98AEL},0x3DFDL,65533UL,6L,4294967289UL},{0x9DA168DFB56D0EBALL,0x7F79BDE1L,{0x205FL,1L,0x4C2DCB4940767DB2LL,-1L,18446744073709551615UL,0x8FCD5B30CA9FDED9LL,0x46E2L,0x8AAFL},0x1464L,0UL,3L,1UL}}},{{{0x754F2311ED752170LL,0xB7FCBE4DL,{0xCAFCL,0x9587553DL,18446744073709551615UL,0x11DBD79411E81D7CLL,0xD984FA33L,-1L,0xC0C6L,0x457CL},0x5D05L,0UL,0x5532DEC1L,1UL},{0x15E6D11CAE4B90FALL,0xCF91B22DL,{0xBA57L,0x664DBCA3L,0UL,0L,0UL,0x6471EB54B67379A2LL,0x5C28L,0xCC47L},0xB28AL,65535UL,0x17B71F2BL,0UL}},{{1L,0xBFE5A6DBL,{0xF328L,0L,1UL,0x366BC2346FF56056LL,0UL,0x32F5E306A990DA9BLL,0xAE2AL,1UL},0xAAB7L,0x28B5L,-10L,0xFA60F441L},{0xDFD7C31A2FCDDD67LL,0UL,{1L,0x487C4DF3L,0x6FA1282A4D860B26LL,-1L,0UL,4L,8L,0xB20DL},3UL,0xAADBL,9L,0x72195FE1L}},{{0x791019CE760EB847LL,0x7745A93CL,{7L,1L,0x0E8730783C897F0ALL,-3L,0x755CF863L,0x489AA6CB13A3A3CDLL,-9L,0xFF8AL},0xDF13L,0x89E4L,9L,0x5E037C26L},{-10L,4294967293UL,{0xF093L,0L,0x63C9C8A6BFD7E7EFLL,0x7992EA4AA6B87824LL,1UL,3L,1L,3UL},65535UL,65535UL,0xE7B1D411L,1UL}},{{8L,0x6AE8C872L,{0xE6D6L,0x34798A01L,0x7190236DDB5A8B84LL,-8L,0x36E70F03L,-6L,1L,65535UL},0x0ABFL,1UL,0xB49F041EL,4294967295UL},{0x6616F402976C73E5LL,0x67B39BEAL,{-1L,1L,0x5BB9CB7144193D2DLL,7L,0x42368F9EL,0x29AA1AF67DAA3D12LL,0x2803L,0x0C24L},0UL,0x8C6BL,0xBC3B2C61L,2UL}},{{-4L,0UL,{0x02DAL,0xEFE6D830L,0xBC24870DE4BDA1F2LL,0x387D346333B2BC07LL,0xAAAF3F43L,0x3B28E970BBFDF512LL,-1L,65532UL},0x39C4L,65529UL,0L,0UL},{0L,4294967295UL,{0L,0L,0xC3831FAA2C6299D3LL,0x9DB1F427528DCFABLL,0x639FDFE2L,-8L,0x38C3L,0xF183L},0xA3C0L,0x58B7L,-7L,0UL}},{{0x754F2311ED752170LL,0xB7FCBE4DL,{0xCAFCL,0x9587553DL,18446744073709551615UL,0x11DBD79411E81D7CLL,0xD984FA33L,-1L,0xC0C6L,0x457CL},0x5D05L,0UL,0x5532DEC1L,1UL},{0L,4294967295UL,{0L,0L,0xC3831FAA2C6299D3LL,0x9DB1F427528DCFABLL,0x639FDFE2L,-8L,0x38C3L,0xF183L},0xA3C0L,0x58B7L,-7L,0UL}}},{{{-4L,0UL,{0x02DAL,0xEFE6D830L,0xBC24870DE4BDA1F2LL,0x387D346333B2BC07LL,0xAAAF3F43L,0x3B28E970BBFDF512LL,-1L,65532UL},0x39C4L,65529UL,0L,0UL},{0x6616F402976C73E5LL,0x67B39BEAL,{-1L,1L,0x5BB9CB7144193D2DLL,7L,0x42368F9EL,0x29AA1AF67DAA3D12LL,0x2803L,0x0C24L},0UL,0x8C6BL,0xBC3B2C61L,2UL}},{{8L,0x6AE8C872L,{0xE6D6L,0x34798A01L,0x7190236DDB5A8B84LL,-8L,0x36E70F03L,-6L,1L,65535UL},0x0ABFL,1UL,0xB49F041EL,4294967295UL},{-10L,4294967293UL,{0xF093L,0L,0x63C9C8A6BFD7E7EFLL,0x7992EA4AA6B87824LL,1UL,3L,1L,3UL},65535UL,65535UL,0xE7B1D411L,1UL}},{{0x791019CE760EB847LL,0x7745A93CL,{7L,1L,0x0E8730783C897F0ALL,-3L,0x755CF863L,0x489AA6CB13A3A3CDLL,-9L,0xFF8AL},0xDF13L,0x89E4L,9L,0x5E037C26L},{0xDFD7C31A2FCDDD67LL,0UL,{1L,0x487C4DF3L,0x6FA1282A4D860B26LL,-1L,0UL,4L,8L,0xB20DL},3UL,0xAADBL,9L,0x72195FE1L}},{{1L,0xBFE5A6DBL,{0xF328L,0L,1UL,0x366BC2346FF56056LL,0UL,0x32F5E306A990DA9BLL,0xAE2AL,1UL},0xAAB7L,0x28B5L,-10L,0xFA60F441L},{0x15E6D11CAE4B90FALL,0xCF91B22DL,{0xBA57L,0x664DBCA3L,0UL,0L,0UL,0x6471EB54B67379A2LL,0x5C28L,0xCC47L},0xB28AL,65535UL,0x17B71F2BL,0UL}},{{0x754F2311ED752170LL,0xB7FCBE4DL,{0xCAFCL,0x9587553DL,18446744073709551615UL,0x11DBD79411E81D7CLL,0xD984FA33L,-1L,0xC0C6L,0x457CL},0x5D05L,0UL,0x5532DEC1L,1UL},{0x9DA168DFB56D0EBALL,0x7F79BDE1L,{0x205FL,1L,0x4C2DCB4940767DB2LL,-1L,18446744073709551615UL,0x8FCD5B30CA9FDED9LL,0x46E2L,0x8AAFL},0x1464L,0UL,3L,1UL}},{{0xAACC8D6409BBAFADLL,0xEA65B04CL,{0x082FL,0x6370C30AL,0x817151903AA7E987LL,0x2B011F9AB3F63CAALL,9UL,-9L,0xDF4DL,0x98AEL},0x3DFDL,65533UL,6L,4294967289UL},{0x43653B8815307A8BLL,4294967290UL,{0xC245L,-10L,8UL,-9L,0x75469111L,0x232F0284BD7C02A2LL,-1L,0UL},0x22A6L,65531UL,-1L,0xFFAE1F4EL}}},{{{-10L,4294967293UL,{0xF093L,0L,0x63C9C8A6BFD7E7EFLL,0x7992EA4AA6B87824LL,1UL,3L,1L,3UL},65535UL,65535UL,0xE7B1D411L,1UL},{-10L,4294967293UL,{0xF093L,0L,0x63C9C8A6BFD7E7EFLL,0x7992EA4AA6B87824LL,1UL,3L,1L,3UL},65535UL,65535UL,0xE7B1D411L,1UL}},{{0xACBD2DFBC76B8EEFLL,0xAD46A5C8L,{0x2A20L,-1L,0x23FE2F0A4686636CLL,0xA1BD9E7BAB1E5B1FLL,0xFFCDD252L,-1L,0L,0UL},65535UL,0x20C5L,0x90DC6D44L,0x762C41E8L},{0xF439157658664E74LL,0x3A930A2FL,{-10L,1L,8UL,0xBD710EC1CC3C4890LL,0x0853DAF9L,0x9FBE1C306A062521LL,0xC482L,65535UL},0UL,0xB230L,-5L,0UL}},{{0L,0x856D8168L,{1L,0xDE69B26AL,0xCCC3F5A6D4BEBA08LL,0xE952C462A32858A1LL,0x04E0A3C3L,0L,4L,0xB50CL},65535UL,0xCD05L,-1L,0xF9B036B9L},{0x7EBB75A2245F9AC5LL,0x489A73E0L,{1L,6L,0x4F1B80FC906C43DELL,-1L,0xFC1D3198L,-1L,1L,0x9E8DL},0x7778L,0x1C3FL,0xF62F3984L,8UL}},{{0x754F2311ED752170LL,0xB7FCBE4DL,{0xCAFCL,0x9587553DL,18446744073709551615UL,0x11DBD79411E81D7CLL,0xD984FA33L,-1L,0xC0C6L,0x457CL},0x5D05L,0UL,0x5532DEC1L,1UL},{0x465B90653D47435FLL,0UL,{0x5BB3L,0L,18446744073709551613UL,0x7A3595B05B2B5B3FLL,0UL,1L,3L,0xA892L},0xC3BCL,1UL,8L,0xC3D51A7DL}},{{-7L,4294967291UL,{0x240DL,1L,0xC4C778AF803E8BB6LL,0L,0x893BA438L,4L,0L,65535UL},0xCFF4L,0x25CDL,0L,0UL},{0x754F2311ED752170LL,0xB7FCBE4DL,{0xCAFCL,0x9587553DL,18446744073709551615UL,0x11DBD79411E81D7CLL,0xD984FA33L,-1L,0xC0C6L,0x457CL},0x5D05L,0UL,0x5532DEC1L,1UL}},{{0L,0xD3BCFEEDL,{1L,0x5838453DL,18446744073709551615UL,5L,0x96037B96L,-1L,0x80BFL,0xA78AL},0x9C3DL,65530UL,0x5490E48BL,0UL},{-10L,4294967293UL,{0xF093L,0L,0x63C9C8A6BFD7E7EFLL,0x7992EA4AA6B87824LL,1UL,3L,1L,3UL},65535UL,65535UL,0xE7B1D411L,1UL}}},{{{0L,0xD3BCFEEDL,{1L,0x5838453DL,18446744073709551615UL,5L,0x96037B96L,-1L,0x80BFL,0xA78AL},0x9C3DL,65530UL,0x5490E48BL,0UL},{0x754F2311ED752170LL,0xB7FCBE4DL,{0xCAFCL,0x9587553DL,18446744073709551615UL,0x11DBD79411E81D7CLL,0xD984FA33L,-1L,0xC0C6L,0x457CL},0x5D05L,0UL,0x5532DEC1L,1UL}},{{-7L,4294967291UL,{0x240DL,1L,0xC4C778AF803E8BB6LL,0L,0x893BA438L,4L,0L,65535UL},0xCFF4L,0x25CDL,0L,0UL},{0x465B90653D47435FLL,0UL,{0x5BB3L,0L,18446744073709551613UL,0x7A3595B05B2B5B3FLL,0UL,1L,3L,0xA892L},0xC3BCL,1UL,8L,0xC3D51A7DL}},{{0x754F2311ED752170LL,0xB7FCBE4DL,{0xCAFCL,0x9587553DL,18446744073709551615UL,0x11DBD79411E81D7CLL,0xD984FA33L,-1L,0xC0C6L,0x457CL},0x5D05L,0UL,0x5532DEC1L,1UL},{0x7EBB75A2245F9AC5LL,0x489A73E0L,{1L,6L,0x4F1B80FC906C43DELL,-1L,0xFC1D3198L,-1L,1L,0x9E8DL},0x7778L,0x1C3FL,0xF62F3984L,8UL}},{{0L,0x856D8168L,{1L,0xDE69B26AL,0xCCC3F5A6D4BEBA08LL,0xE952C462A32858A1LL,0x04E0A3C3L,0L,4L,0xB50CL},65535UL,0xCD05L,-1L,0xF9B036B9L},{0xF439157658664E74LL,0x3A930A2FL,{-10L,1L,8UL,0xBD710EC1CC3C4890LL,0x0853DAF9L,0x9FBE1C306A062521LL,0xC482L,65535UL},0UL,0xB230L,-5L,0UL}},{{0xACBD2DFBC76B8EEFLL,0xAD46A5C8L,{0x2A20L,-1L,0x23FE2F0A4686636CLL,0xA1BD9E7BAB1E5B1FLL,0xFFCDD252L,-1L,0L,0UL},65535UL,0x20C5L,0x90DC6D44L,0x762C41E8L},{-10L,4294967293UL,{0xF093L,0L,0x63C9C8A6BFD7E7EFLL,0x7992EA4AA6B87824LL,1UL,3L,1L,3UL},65535UL,65535UL,0xE7B1D411L,1UL}},{{-10L,4294967293UL,{0xF093L,0L,0x63C9C8A6BFD7E7EFLL,0x7992EA4AA6B87824LL,1UL,3L,1L,3UL},65535UL,65535UL,0xE7B1D411L,1UL},{0x43653B8815307A8BLL,4294967290UL,{0xC245L,-10L,8UL,-9L,0x75469111L,0x232F0284BD7C02A2LL,-1L,0UL},0x22A6L,65531UL,-1L,0xFFAE1F4EL}}},{{{0xAACC8D6409BBAFADLL,0xEA65B04CL,{0x082FL,0x6370C30AL,0x817151903AA7E987LL,0x2B011F9AB3F63CAALL,9UL,-9L,0xDF4DL,0x98AEL},0x3DFDL,65533UL,6L,4294967289UL},{0x9DA168DFB56D0EBALL,0x7F79BDE1L,{0x205FL,1L,0x4C2DCB4940767DB2LL,-1L,18446744073709551615UL,0x8FCD5B30CA9FDED9LL,0x46E2L,0x8AAFL},0x1464L,0UL,3L,1UL}},{{0x754F2311ED752170LL,0xB7FCBE4DL,{0xCAFCL,0x9587553DL,18446744073709551615UL,0x11DBD79411E81D7CLL,0xD984FA33L,-1L,0xC0C6L,0x457CL},0x5D05L,0UL,0x5532DEC1L,1UL},{0x15E6D11CAE4B90FALL,0xCF91B22DL,{0xBA57L,0x664DBCA3L,0UL,0L,0UL,0x6471EB54B67379A2LL,0x5C28L,0xCC47L},0xB28AL,65535UL,0x17B71F2BL,0UL}},{{1L,0xBFE5A6DBL,{0xF328L,0L,1UL,0x366BC2346FF56056LL,0UL,0x32F5E306A990DA9BLL,0xAE2AL,1UL},0xAAB7L,0x28B5L,-10L,0xFA60F441L},{0xDFD7C31A2FCDDD67LL,0UL,{1L,0x487C4DF3L,0x6FA1282A4D860B26LL,-1L,0UL,4L,8L,0xB20DL},3UL,0xAADBL,9L,0x72195FE1L}},{{0x791019CE760EB847LL,0x7745A93CL,{7L,1L,0x0E8730783C897F0ALL,-3L,0x755CF863L,0x489AA6CB13A3A3CDLL,-9L,0xFF8AL},0xDF13L,0x89E4L,9L,0x5E037C26L},{-10L,4294967293UL,{0xF093L,0L,0x63C9C8A6BFD7E7EFLL,0x7992EA4AA6B87824LL,1UL,3L,1L,3UL},65535UL,65535UL,0xE7B1D411L,1UL}},{{8L,0x6AE8C872L,{0xE6D6L,0x34798A01L,0x7190236DDB5A8B84LL,-8L,0x36E70F03L,-6L,1L,65535UL},0x0ABFL,1UL,0xB49F041EL,4294967295UL},{0x6616F402976C73E5LL,0x67B39BEAL,{-1L,1L,0x5BB9CB7144193D2DLL,7L,0x42368F9EL,0x29AA1AF67DAA3D12LL,0x2803L,0x0C24L},0UL,0x8C6BL,0xBC3B2C61L,2UL}},{{-4L,0UL,{0x02DAL,0xEFE6D830L,0xBC24870DE4BDA1F2LL,0x387D346333B2BC07LL,0xAAAF3F43L,0x3B28E970BBFDF512LL,-1L,65532UL},0x39C4L,65529UL,0L,0UL},{0L,4294967295UL,{0L,0L,0xC3831FAA2C6299D3LL,0x9DB1F427528DCFABLL,0x639FDFE2L,-8L,0x38C3L,0xF183L},0xA3C0L,0x58B7L,-7L,0UL}}}};
    int32_t l_848 = 0x6720D644L;
    int32_t l_873 = 0x9CC97850L;
    uint8_t l_1041 = 0x21L;
    uint16_t *l_1056 = &l_818[2][5][1].f3;
    uint8_t l_1167 = 0xECL;
    int8_t **l_1170 = &g_143;
    int32_t l_1209 = 0L;
    int16_t *** const l_1215 = &g_914;
    uint32_t ***l_1236 = (void*)0;
    uint32_t l_1237[7][2] = {{4294967295UL,0x49E9D94FL},{4294967295UL,4294967295UL},{0x49E9D94FL,4294967295UL},{4294967295UL,0x49E9D94FL},{4294967295UL,0x49E9D94FL},{4294967295UL,0x49E9D94FL},{0x49E9D94FL,4294967295UL}};
    int i, j, k;
    l_774 = func_34(g_86.f2.f6);
    (*g_182) = l_775;
    for (p_28 = 29; (p_28 != 29); p_28 = safe_add_func_uint64_t_u_u(p_28, 7))
    { 
        uint32_t l_785 = 0x98F99F11L;
        struct S1 l_817 = {-1L,0x90DC84F6L,{0x87B3L,0L,0x56D4B28A20CDEDAALL,0x62B773E41E477918LL,0xF70E4AD1L,1L,0x078AL,0UL},1UL,0x4AD1L,-1L,0UL};
        int32_t l_844 = 0L;
        int32_t l_846 = 0x1F84D456L;
        int32_t l_847 = 0xB1A8AF38L;
        int64_t *l_858[4];
        uint32_t l_922 = 0x8F11D9E7L;
        int16_t ***l_937 = &g_914;
        uint16_t l_977 = 1UL;
        int64_t ****l_1012[6][1];
        int32_t * const *l_1021[4][6][1] = {{{&l_775},{(void*)0},{&l_775},{&l_775},{&l_775},{(void*)0}},{{&l_775},{&l_775},{&l_775},{(void*)0},{&l_775},{&l_775}},{{&l_775},{(void*)0},{&l_775},{&l_775},{&l_775},{(void*)0}},{{&l_775},{&l_775},{&l_775},{(void*)0},{&l_775},{&l_775}}};
        const int8_t **l_1090 = &g_33[2];
        const int8_t ***l_1089[4] = {&l_1090,&l_1090,&l_1090,&l_1090};
        const int8_t ****l_1088 = &l_1089[2];
        struct S1 *l_1196 = &g_1197;
        int16_t l_1226 = (-9L);
        uint8_t *l_1227[4] = {&l_1041,&l_1041,&l_1041,&l_1041};
        struct S0 *l_1228 = &l_774;
        int16_t *l_1229 = (void*)0;
        int16_t *l_1230 = &l_774.f0;
        int i, j, k;
        for (i = 0; i < 4; i++)
            l_858[i] = (void*)0;
        for (i = 0; i < 6; i++)
        {
            for (j = 0; j < 1; j++)
                l_1012[i][j] = &g_469;
        }
        for (l_774.f7 = 0; (l_774.f7 == 47); ++l_774.f7)
        { 
            uint8_t l_782 = 0xA3L;
            uint32_t ***l_808 = &g_197;
            int64_t *****l_813[3];
            uint32_t l_837 = 1UL;
            int32_t l_842 = (-6L);
            uint32_t l_849 = 18446744073709551606UL;
            int32_t l_931 = (-1L);
            int32_t l_932 = 0L;
            int16_t ***l_936 = &g_914;
            int i;
            for (i = 0; i < 3; i++)
                l_813[i] = &g_468[0][1][4];
            for (g_472 = 0; (g_472 == 4); ++g_472)
            { 
                uint8_t *l_794 = &g_756;
                int32_t l_797 = 0xB64DB99BL;
                const uint16_t l_805 = 0UL;
                int16_t *l_810 = (void*)0;
                int16_t *l_811 = &g_66;
                int32_t *l_812[6];
                int i;
                for (i = 0; i < 6; i++)
                    l_812[i] = &l_797;
                --l_782;
                if (l_785)
                    continue;
                g_303 = (safe_rshift_func_uint16_t_u_u(((+(p_29.f5 != ((safe_add_func_int16_t_s_s(((*l_811) = (((l_791 , p_29.f1) ^ ((safe_rshift_func_uint8_t_u_s((--(*l_794)), l_797)) , (safe_add_func_uint32_t_u_u((((safe_mod_func_int64_t_s_s((safe_lshift_func_int8_t_s_s((l_785 > (safe_unary_minus_func_int64_t_s(((l_805 ^ (safe_mod_func_uint32_t_u_u((((*g_623) = l_808) != (**g_679)), (*l_775)))) <= 1L)))), (*l_775))), p_31.f0)) > 0L) & l_805), g_809)))) != (*g_348))), l_785)) < (*l_775)))) && l_782), 2));
                g_303 = p_28;
                for (g_5 = 3; (g_5 >= 0); g_5 -= 1)
                { 
                    uint16_t *l_835 = &g_86.f4;
                    int32_t l_836 = 0xAB4F74CEL;
                    int i, j;
                    g_814 = l_813[1];
                    l_836 ^= (safe_mul_func_int8_t_s_s((((l_817 , l_818[2][5][1]) , g_819[1][3][0]) == (void*)0), ((g_240[g_5][(g_5 + 3)] , ((safe_div_func_int8_t_s_s((safe_rshift_func_uint8_t_u_u((((safe_mod_func_uint64_t_u_u(((safe_add_func_uint8_t_u_u((safe_add_func_int16_t_s_s(((-8L) | ((*l_835) ^= ((safe_lshift_func_int8_t_s_s(((((safe_mul_func_uint16_t_u_u(g_40[3], g_240[g_5][(g_5 + 3)])) , 1UL) > 1L) , l_817.f4), 6)) != 8L))), p_29.f1)), 0x0CL)) , p_29.f2), 0x4A6321599174D527LL)) || (*l_775)) , p_29.f7), 4)), (*l_775))) > g_593[4][0])) | (**g_197))));
                    return l_817.f4;
                }
            }
        }
    }
    return (*l_775);
}



static struct S0  func_34(uint8_t  p_35)
{ 
    uint32_t *l_39 = &g_40[3];
    int8_t **l_55 = (void*)0;
    union U2 l_724 = {1UL};
    struct S1 *l_764 = (void*)0;
    struct S1 **l_763[4][3];
    struct S0 l_771[5] = {{1L,1L,18446744073709551607UL,6L,0x3709586AL,0x70FCFBD62E39DAC8LL,0xDDB1L,0x18B1L},{1L,1L,18446744073709551607UL,6L,0x3709586AL,0x70FCFBD62E39DAC8LL,0xDDB1L,0x18B1L},{1L,1L,18446744073709551607UL,6L,0x3709586AL,0x70FCFBD62E39DAC8LL,0xDDB1L,0x18B1L},{1L,1L,18446744073709551607UL,6L,0x3709586AL,0x70FCFBD62E39DAC8LL,0xDDB1L,0x18B1L},{1L,1L,18446744073709551607UL,6L,0x3709586AL,0x70FCFBD62E39DAC8LL,0xDDB1L,0x18B1L}};
    int i, j;
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 3; j++)
            l_763[i][j] = &l_764;
    }
    if ((safe_mod_func_uint64_t_u_u(((((--(*l_39)) >= ((safe_add_func_uint64_t_u_u((g_5 ^ ((safe_div_func_uint8_t_u_u(g_2, func_47(func_52(l_39, l_55), l_724, ((safe_mod_func_uint16_t_u_u(((safe_mod_func_int8_t_s_s((safe_sub_func_uint8_t_u_u((p_35 || p_35), 0xECL)), l_724.f0)) && l_724.f0), g_86.f6)) <= 0L), l_724.f0))) && p_35)), p_35)) ^ 4294967287UL)) ^ g_303) < 0x05DFL), l_724.f0)))
    { 
        uint8_t l_738 = 251UL;
        struct S1 ***l_770 = (void*)0;
        struct S0 l_772 = {0xB14DL,-1L,0x6298F3CB98A3DC7DLL,0xBC81C5D5B8CF2645LL,0x9FA5D898L,0xAB60689D0A387DEFLL,0x20CDL,6UL};
        for (g_303 = 0; (g_303 < (-12)); g_303--)
        { 
            uint32_t l_743[6][1][1] = {{{0x45378914L}},{{4UL}},{{0x45378914L}},{{0x45378914L}},{{4UL}},{{0x45378914L}}};
            struct S0 l_761 = {-2L,-1L,18446744073709551615UL,0x5F46243B202912FELL,0x4A4194FCL,0x432E30CC7B8DCACALL,0xB7F4L,65535UL};
            int32_t l_767[4] = {1L,1L,1L,1L};
            struct S1 ***l_768 = &l_763[0][1];
            int i, j, k;
            for (g_312 = 0; (g_312 <= 3); g_312 += 1)
            { 
                for (g_66 = 3; (g_66 >= 0); g_66 -= 1)
                { 
                    struct S0 *l_734 = &g_74;
                    int32_t l_744 = 0xEC5257DCL;
                    if (p_35)
                        break;
                    (*g_182) = l_39;
                    (*l_734) = g_86.f2;
                    (**g_182) ^= (l_55 == (((+((safe_mul_func_int16_t_s_s(l_724.f0, (l_738 | ((safe_rshift_func_int16_t_s_u(((**g_347) > ((((((safe_lshift_func_uint16_t_u_u(l_724.f0, p_35)) , l_743[0][0][0]) || l_724.f0) & (*g_61)) < l_744) == p_35)), p_35)) <= 0x3DL)))) <= g_745)) & 0x2605B9D9DF8FDD1CLL) , (void*)0));
                    if ((**g_182))
                        break;
                }
                for (g_722 = 0; (g_722 <= 3); g_722 += 1)
                { 
                    g_5 &= (((**g_347) = 9UL) > l_738);
                    return g_74;
                }
                if (p_35)
                    break;
            }
            for (g_643 = (-4); (g_643 < 24); g_643 = safe_add_func_uint8_t_u_u(g_643, 2))
            { 
                uint32_t l_748 = 1UL;
                --l_748;
                if (p_35)
                    continue;
                for (g_86.f4 = (-10); (g_86.f4 < 17); g_86.f4++)
                { 
                    uint8_t l_753[6][5] = {{1UL,1UL,1UL,1UL,1UL},{248UL,248UL,255UL,255UL,248UL},{252UL,1UL,252UL,1UL,252UL},{248UL,255UL,255UL,248UL,248UL},{1UL,1UL,1UL,1UL,1UL},{248UL,248UL,255UL,255UL,248UL}};
                    int32_t *l_754 = &g_5;
                    int32_t *l_755[6];
                    int i, j;
                    for (i = 0; i < 6; i++)
                        l_755[i] = &g_5;
                    (*l_754) = l_753[4][2];
                    g_756--;
                    (*g_182) = (*g_182);
                }
                for (g_74.f4 = 0; (g_74.f4 >= 40); ++g_74.f4)
                { 
                    struct S0 *l_762 = &l_761;
                    struct S1 ***l_765 = &l_763[2][1];
                    uint16_t l_766 = 0UL;
                    if (l_724.f0)
                        break;
                    (*l_762) = l_761;
                    l_767[2] ^= ((p_35 == ((l_761.f2 , 3UL) , (((*l_765) = l_763[1][1]) != &l_764))) != ((0L >= (l_766 , 0L)) < l_738));
                    if (p_35)
                        continue;
                    if (p_35)
                        continue;
                }
            }
            for (l_761.f0 = 0; (l_761.f0 <= 3); l_761.f0 += 1)
            { 
                struct S1 ****l_769 = &l_768;
                int i, j;
                if (g_240[l_761.f0][(l_761.f0 + 2)])
                    break;
                (*g_182) = l_39;
                (*g_183) = (((*l_769) = l_768) != l_770);
            }
            return l_771[3];
        }
        return l_772;
    }
    else
    { 
        return g_86.f2;
    }
}



static int8_t  func_47(int8_t ** p_48, union U2  p_49, const uint32_t  p_50, uint32_t  p_51)
{ 
    uint32_t l_731 = 0x7C342005L;
    return l_731;
}



static int8_t ** func_52(uint32_t * p_53, int8_t ** p_54)
{ 
    int8_t l_58[2][6][6] = {{{(-1L),(-4L),(-1L),(-4L),(-1L),(-4L)},{0L,(-4L),0L,(-4L),0L,(-4L)},{(-1L),(-4L),(-1L),(-4L),(-1L),(-4L)},{0L,(-4L),0L,(-4L),0L,(-4L)},{(-1L),(-4L),(-1L),(-4L),(-1L),(-4L)},{0L,(-4L),0L,(-4L),0L,(-4L)}},{{(-1L),(-4L),(-1L),(-4L),(-1L),(-4L)},{0L,(-4L),0L,(-4L),0L,(-4L)},{(-1L),(-4L),(-1L),(-4L),(-1L),(-4L)},{0L,(-4L),0L,(-4L),0L,(-4L)},{(-1L),(-4L),(-1L),(-4L),(-1L),(-4L)},{0L,(-4L),0L,(-4L),0L,(-4L)}}};
    uint32_t *l_63[5];
    uint32_t **l_64 = &l_63[2];
    int16_t *l_65 = &g_66;
    int32_t l_71 = (-10L);
    struct S0 l_72 = {1L,2L,18446744073709551609UL,-1L,0UL,0xAC07AC39A8832714LL,2L,0x6562L};
    struct S0 *l_73 = (void*)0;
    int32_t *l_90 = (void*)0;
    int32_t *l_92 = &l_71;
    int8_t **l_145[6] = {&g_143,&g_143,&g_143,&g_143,&g_143,&g_143};
    uint8_t l_161 = 248UL;
    int8_t ***l_189 = &g_142;
    int8_t ****l_188 = &l_189;
    int16_t l_203 = (-1L);
    uint32_t l_226[6];
    uint64_t *l_236 = &l_72.f2;
    uint64_t * const *l_235 = &l_236;
    struct S0 l_265 = {-4L,-8L,18446744073709551615UL,0x9FF50BC355EAF381LL,0x3D7D083FL,-1L,0L,0x6280L};
    const struct S1 l_293[4] = {{5L,0UL,{0x5264L,0x1130A6FCL,0xD8D492CE9E5505F3LL,0xDA1CE3F2E614814FLL,0x1EB0C2D3L,0L,0x00E4L,0xEF05L},0xEE6EL,65535UL,-1L,1UL},{5L,0UL,{0x5264L,0x1130A6FCL,0xD8D492CE9E5505F3LL,0xDA1CE3F2E614814FLL,0x1EB0C2D3L,0L,0x00E4L,0xEF05L},0xEE6EL,65535UL,-1L,1UL},{5L,0UL,{0x5264L,0x1130A6FCL,0xD8D492CE9E5505F3LL,0xDA1CE3F2E614814FLL,0x1EB0C2D3L,0L,0x00E4L,0xEF05L},0xEE6EL,65535UL,-1L,1UL},{5L,0UL,{0x5264L,0x1130A6FCL,0xD8D492CE9E5505F3LL,0xDA1CE3F2E614814FLL,0x1EB0C2D3L,0L,0x00E4L,0xEF05L},0xEE6EL,65535UL,-1L,1UL}};
    int32_t **l_329[1][4][1];
    int64_t l_360 = 0xAD91B2CF21AB68B3LL;
    uint32_t **** const l_379 = (void*)0;
    int32_t l_388 = (-8L);
    union U2 *l_494 = &g_231[0][0];
    int16_t l_582[1][1];
    const int16_t *l_650 = &g_651;
    int64_t **l_657 = &g_434[0];
    int i, j, k;
    for (i = 0; i < 5; i++)
        l_63[i] = &g_62[0];
    for (i = 0; i < 6; i++)
        l_226[i] = 0UL;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 1; k++)
                l_329[i][j][k] = &l_90;
        }
    }
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 1; j++)
            l_582[i][j] = 1L;
    }
    l_71 = (((safe_mod_func_uint8_t_u_u(l_58[0][3][4], (safe_add_func_uint32_t_u_u((g_61 != ((*l_64) = l_63[2])), 4294967290UL)))) > ((*l_65) ^= l_58[0][3][4])) >= (7UL >= ((safe_rshift_func_int16_t_s_s((((safe_mod_func_uint32_t_u_u((0x7EL >= 0xF2L), g_2)) == g_62[0]) & (*g_61)), l_58[0][3][4])) , 0x41L)));
    g_74 = l_72;
    return &g_143;
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    transparent_crc(g_5, "g_5", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 7; j++)
        {
            for (k = 0; k < 3; k++)
            {
                transparent_crc(g_38[i][j][k], "g_38[i][j][k]", print_hash_value);

            }
        }
    }
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_40[i], "g_40[i]", print_hash_value);

    }
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_62[i], "g_62[i]", print_hash_value);

    }
    transparent_crc(g_66, "g_66", print_hash_value);
    transparent_crc(g_74.f0, "g_74.f0", print_hash_value);
    transparent_crc(g_74.f1, "g_74.f1", print_hash_value);
    transparent_crc(g_74.f2, "g_74.f2", print_hash_value);
    transparent_crc(g_74.f3, "g_74.f3", print_hash_value);
    transparent_crc(g_74.f4, "g_74.f4", print_hash_value);
    transparent_crc(g_74.f5, "g_74.f5", print_hash_value);
    transparent_crc(g_74.f6, "g_74.f6", print_hash_value);
    transparent_crc(g_74.f7, "g_74.f7", print_hash_value);
    transparent_crc(g_86.f0, "g_86.f0", print_hash_value);
    transparent_crc(g_86.f1, "g_86.f1", print_hash_value);
    transparent_crc(g_86.f2.f0, "g_86.f2.f0", print_hash_value);
    transparent_crc(g_86.f2.f1, "g_86.f2.f1", print_hash_value);
    transparent_crc(g_86.f2.f2, "g_86.f2.f2", print_hash_value);
    transparent_crc(g_86.f2.f3, "g_86.f2.f3", print_hash_value);
    transparent_crc(g_86.f2.f4, "g_86.f2.f4", print_hash_value);
    transparent_crc(g_86.f2.f5, "g_86.f2.f5", print_hash_value);
    transparent_crc(g_86.f2.f6, "g_86.f2.f6", print_hash_value);
    transparent_crc(g_86.f2.f7, "g_86.f2.f7", print_hash_value);
    transparent_crc(g_86.f3, "g_86.f3", print_hash_value);
    transparent_crc(g_86.f4, "g_86.f4", print_hash_value);
    transparent_crc(g_86.f5, "g_86.f5", print_hash_value);
    transparent_crc(g_86.f6, "g_86.f6", print_hash_value);
    transparent_crc(g_91, "g_91", print_hash_value);
    transparent_crc(g_132, "g_132", print_hash_value);
    transparent_crc(g_194, "g_194", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(g_231[i][j].f0, "g_231[i][j].f0", print_hash_value);

        }
    }
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 7; j++)
        {
            transparent_crc(g_240[i][j], "g_240[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_243, "g_243", print_hash_value);
    transparent_crc(g_252, "g_252", print_hash_value);
    transparent_crc(g_296, "g_296", print_hash_value);
    transparent_crc(g_303, "g_303", print_hash_value);
    transparent_crc(g_312, "g_312", print_hash_value);
    transparent_crc(g_339, "g_339", print_hash_value);
    transparent_crc(g_361, "g_361", print_hash_value);
    transparent_crc(g_362, "g_362", print_hash_value);
    transparent_crc(g_472, "g_472", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(g_493[i].f0, "g_493[i].f0", print_hash_value);

    }
    transparent_crc(g_553, "g_553", print_hash_value);
    transparent_crc(g_577, "g_577", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 1; j++)
        {
            transparent_crc(g_593[i][j], "g_593[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_643, "g_643", print_hash_value);
    transparent_crc(g_651, "g_651", print_hash_value);
    transparent_crc(g_722, "g_722", print_hash_value);
    transparent_crc(g_723, "g_723", print_hash_value);
    transparent_crc(g_745, "g_745", print_hash_value);
    transparent_crc(g_756, "g_756", print_hash_value);
    transparent_crc(g_809, "g_809", print_hash_value);
    transparent_crc(g_855, "g_855", print_hash_value);
    transparent_crc(g_874, "g_874", print_hash_value);
    transparent_crc(g_933, "g_933", print_hash_value);
    transparent_crc(g_987, "g_987", print_hash_value);
    transparent_crc(g_1002, "g_1002", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(g_1121[i], "g_1121[i]", print_hash_value);

    }
    transparent_crc(g_1151, "g_1151", print_hash_value);
    transparent_crc(g_1197.f0, "g_1197.f0", print_hash_value);
    transparent_crc(g_1197.f1, "g_1197.f1", print_hash_value);
    transparent_crc(g_1197.f2.f0, "g_1197.f2.f0", print_hash_value);
    transparent_crc(g_1197.f2.f1, "g_1197.f2.f1", print_hash_value);
    transparent_crc(g_1197.f2.f2, "g_1197.f2.f2", print_hash_value);
    transparent_crc(g_1197.f2.f3, "g_1197.f2.f3", print_hash_value);
    transparent_crc(g_1197.f2.f4, "g_1197.f2.f4", print_hash_value);
    transparent_crc(g_1197.f2.f5, "g_1197.f2.f5", print_hash_value);
    transparent_crc(g_1197.f2.f6, "g_1197.f2.f6", print_hash_value);
    transparent_crc(g_1197.f2.f7, "g_1197.f2.f7", print_hash_value);
    transparent_crc(g_1197.f3, "g_1197.f3", print_hash_value);
    transparent_crc(g_1197.f4, "g_1197.f4", print_hash_value);
    transparent_crc(g_1197.f5, "g_1197.f5", print_hash_value);
    transparent_crc(g_1197.f6, "g_1197.f6", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 6; j++)
        {
            transparent_crc(g_1203[i][j], "g_1203[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_1217.f0, "g_1217.f0", print_hash_value);
    transparent_crc(g_1217.f1, "g_1217.f1", print_hash_value);
    transparent_crc(g_1217.f2, "g_1217.f2", print_hash_value);
    transparent_crc(g_1217.f3, "g_1217.f3", print_hash_value);
    transparent_crc(g_1217.f4, "g_1217.f4", print_hash_value);
    transparent_crc(g_1217.f5, "g_1217.f5", print_hash_value);
    transparent_crc(g_1217.f6, "g_1217.f6", print_hash_value);
    transparent_crc(g_1217.f7, "g_1217.f7", print_hash_value);
    transparent_crc(g_1231, "g_1231", print_hash_value);
    transparent_crc(g_1263, "g_1263", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_1288[i], "g_1288[i]", print_hash_value);

    }
    transparent_crc(g_1415, "g_1415", print_hash_value);
    transparent_crc(g_1421, "g_1421", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
