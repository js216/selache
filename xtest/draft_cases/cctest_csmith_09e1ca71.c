// SPDX-License-Identifier: MIT
// cctest_csmith_09e1ca71.c --- cctest case csmith_09e1ca71 (csmith seed 165792369)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x29ad2b7f */

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

// Options:   -s 165792369 -o /tmp/csmith_gen_eusf1ynd/csmith.c --concise --no-volatiles --no-volatile-pointers --max-funcs 8 --max-block-size 5 --max-block-depth 4 --max-expr-complexity 8 --max-array-dim 3 --max-array-len-per-dim 7 --max-struct-fields 8 --max-union-fields 5

static long __undefined;


#pragma pack(push)
#pragma pack(1)
struct S0 {
   const int8_t  f0;
   const uint8_t  f1;
   unsigned f2 : 30;
   int8_t  f3;
   uint16_t  f4;
   uint32_t  f5;
};
#pragma pack(pop)

struct S1 {
   const int32_t  f0;
   unsigned f1 : 10;
   int8_t  f2;
   const int32_t  f3;
   int32_t  f4;
   uint32_t  f5;
};

union U2 {
   int32_t  f0;
   int16_t  f1;
   unsigned f2 : 10;
   int32_t  f3;
};

union U3 {
   const unsigned f0 : 14;
   uint16_t  f1;
   int8_t * f2;
   const uint32_t  f3;
};

union U4 {
   uint64_t  f0;
};

union U5 {
   uint32_t  f0;
   uint8_t  f1;
   int8_t  f2;
   uint16_t  f3;
};

union U6 {
   signed f0 : 24;
   uint32_t  f1;
};

union U7 {
   const uint32_t  f0;
   unsigned f1 : 18;
   uint32_t  f2;
};

union U8 {
   const int8_t  f0;
   int64_t  f1;
};

union U9 {
   const uint8_t  f0;
   const uint32_t  f1;
   const int16_t  f2;
};

union U10 {
   uint32_t  f0;
   signed f1 : 6;
   const int32_t  f2;
};

union U11 {
   int32_t  f0;
   signed : 0;
   uint32_t  f1;
   uint16_t  f2;
   uint32_t  f3;
};


static int32_t g_3 = 0xB0B56CEFL;
static int8_t g_36 = 0x6BL;
static uint32_t g_37[6][5] = {{0xE3970C0FL,18446744073709551611UL,0x6E8D2CA8L,0x6E8D2CA8L,18446744073709551611UL},{18446744073709551611UL,0x1F916744L,18446744073709551615UL,18446744073709551615UL,0x1F916744L},{0xE3970C0FL,18446744073709551611UL,0x6E8D2CA8L,0x6E8D2CA8L,18446744073709551611UL},{18446744073709551611UL,0x1F916744L,18446744073709551615UL,18446744073709551615UL,0x1F916744L},{0xE3970C0FL,18446744073709551611UL,0x6E8D2CA8L,0x6E8D2CA8L,18446744073709551611UL},{18446744073709551611UL,0x1F916744L,18446744073709551615UL,18446744073709551615UL,0x1F916744L}};
static union U2 *g_54 = (void*)0;
static struct S0 g_57[3] = {{0x05L,0xD0L,23916,0x64L,0x5AD8L,6UL},{0x05L,0xD0L,23916,0x64L,0x5AD8L,6UL},{0x05L,0xD0L,23916,0x64L,0x5AD8L,6UL}};
static const struct S0 *g_56 = &g_57[1];
static int32_t g_61 = 6L;
static uint64_t g_75 = 0xB4D46498492E769ELL;
static uint64_t g_91 = 0UL;
static union U3 g_95 = {0xB8DD0D48L};
static union U4 g_100 = {0xD6C577B3F785D6CFLL};
static union U5 g_111 = {0xCA17A55EL};
static int16_t g_119 = 0x1A7AL;
static uint64_t g_134 = 18446744073709551615UL;
static union U9 g_141 = {1UL};
static union U9 g_143 = {8UL};
static int8_t *g_158 = &g_36;
static int8_t **g_157 = &g_158;
static int8_t ***g_156[4][5] = {{&g_157,(void*)0,&g_157,&g_157,&g_157},{&g_157,&g_157,&g_157,&g_157,&g_157},{&g_157,(void*)0,&g_157,&g_157,&g_157},{&g_157,&g_157,&g_157,&g_157,&g_157}};
static int8_t *** const *g_155[5] = {&g_156[1][2],&g_156[1][2],&g_156[1][2],&g_156[1][2],&g_156[1][2]};
static int64_t g_175 = (-2L);
static int32_t g_176 = 0x8CD90F72L;
static int32_t g_178 = 0xC7680494L;
static uint32_t g_179[1] = {4294967290UL};
static union U7 g_185 = {0x7A6114F9L};
static uint32_t g_207 = 0UL;
static uint32_t g_226 = 18446744073709551615UL;
static int16_t g_227 = 0L;
static int32_t *g_235 = &g_61;
static int32_t **g_234 = &g_235;
static union U6 g_244 = {0x721E7CADL};
static union U3 *g_248 = (void*)0;
static union U3 **g_247 = &g_248;
static int8_t *** const **g_251[6][4][1] = {{{&g_155[3]},{(void*)0},{&g_155[3]},{&g_155[3]}},{{(void*)0},{&g_155[3]},{&g_155[3]},{(void*)0}},{{&g_155[3]},{&g_155[3]},{(void*)0},{&g_155[3]}},{{&g_155[3]},{(void*)0},{&g_155[3]},{&g_155[3]}},{{(void*)0},{&g_155[3]},{&g_155[3]},{(void*)0}},{{&g_155[3]},{&g_155[3]},{(void*)0},{&g_155[3]}}};
static union U8 g_253 = {2L};
static union U8 *g_252 = &g_253;
static int8_t *****g_264 = (void*)0;
static uint16_t *g_292 = &g_57[1].f4;
static const union U2 ***g_298 = (void*)0;
static union U2 **g_300 = &g_54;
static union U2 *** const g_299 = &g_300;
static uint8_t g_334 = 253UL;
static union U11 g_345 = {-1L};
static const union U11 *g_344[7] = {&g_345,&g_345,&g_345,&g_345,&g_345,&g_345,&g_345};
static int64_t g_361 = 0L;
static uint16_t g_362[1][1] = {{6UL}};
static struct S1 g_365 = {-1L,0,9L,9L,0L,18446744073709551615UL};
static uint8_t **g_373 = (void*)0;
static union U8 g_402[2][4] = {{{0x8CL},{0x5EL},{0x8CL},{0x5EL}},{{0x8CL},{0x5EL},{0x8CL},{0x5EL}}};
static union U2 ***g_414 = (void*)0;
static uint8_t g_418[7][4] = {{7UL,0x5BL,7UL,0x21L},{0x83L,0x5BL,0xA3L,0x33L},{0x5BL,0xA2L,0xA2L,0x5BL},{7UL,0x33L,0xA2L,0x21L},{0x5BL,0x83L,0xA3L,0x83L},{0x83L,0xA2L,7UL,0x83L},{7UL,0x83L,0x21L,0x21L}};
static union U10 g_518 = {3UL};
static union U10 *g_517 = &g_518;
static int8_t g_523 = 0xADL;
static uint16_t g_525 = 0x8D5FL;
static int8_t ** const *g_544 = &g_157;
static int8_t ** const **g_543 = &g_544;
static int8_t ** const ***g_542 = &g_543;
static const int32_t *g_576 = (void*)0;
static uint64_t g_612 = 0x7152C9ED490B6340LL;
static uint8_t g_615[4] = {247UL,247UL,247UL,247UL};
static union U5 g_645 = {18446744073709551615UL};
static uint16_t g_656 = 0xE8D9L;
static int32_t g_661 = 1L;
static uint32_t g_662 = 5UL;
static uint32_t g_668 = 5UL;
static uint64_t g_723 = 0UL;
static int16_t g_732 = 6L;
static uint32_t g_733 = 0x8C618336L;
static int32_t g_759 = 0xB7ACE125L;
static int32_t g_760 = 1L;
static int8_t g_763 = 6L;
static int32_t g_765 = 8L;
static uint16_t g_766 = 0UL;
static uint64_t g_804 = 0x50203A1C7B38F0D4LL;
static union U7 g_827 = {0x9206E97CL};
static int64_t g_849 = 0xCA6ABE546A8452EELL;
static int32_t g_851 = 0xE5CBC2EBL;
static uint16_t g_852[2][1] = {{0xCFA7L},{0xCFA7L}};
static struct S1 g_869[6][2][1] = {{{{-8L,19,0xB8L,-10L,-1L,7UL}},{{-8L,19,0xB8L,-10L,-1L,7UL}}},{{{-9L,29,0xBCL,-1L,-4L,4UL}},{{-8L,19,0xB8L,-10L,-1L,7UL}}},{{{-8L,19,0xB8L,-10L,-1L,7UL}},{{-9L,29,0xBCL,-1L,-4L,4UL}}},{{{-8L,19,0xB8L,-10L,-1L,7UL}},{{-8L,19,0xB8L,-10L,-1L,7UL}}},{{{-9L,29,0xBCL,-1L,-4L,4UL}},{{-8L,19,0xB8L,-10L,-1L,7UL}}},{{{-8L,19,0xB8L,-10L,-1L,7UL}},{{-9L,29,0xBCL,-1L,-4L,4UL}}}};
static union U9 *g_878 = (void*)0;
static int64_t g_892 = 0x86C302105FA08457LL;
static uint16_t g_910 = 1UL;
static int32_t g_919 = 8L;
static uint32_t g_943 = 0x41ECD508L;
static union U8 **g_969 = (void*)0;
static union U8 ***g_968 = &g_969;
static int32_t g_1034 = 0xE5658657L;
static int32_t g_1035 = 0xEFA02B63L;
static struct S0 g_1056 = {1L,1UL,3663,-1L,5UL,0xD60EB0CCL};
static int16_t *g_1123[4] = {&g_227,&g_227,&g_227,&g_227};
static int16_t **g_1122[7][5] = {{(void*)0,&g_1123[1],(void*)0,(void*)0,(void*)0},{(void*)0,&g_1123[0],(void*)0,(void*)0,&g_1123[0]},{(void*)0,(void*)0,&g_1123[1],(void*)0,(void*)0},{&g_1123[0],(void*)0,(void*)0,&g_1123[0],(void*)0},{(void*)0,(void*)0,(void*)0,&g_1123[1],(void*)0},{&g_1123[0],&g_1123[0],&g_1123[0],(void*)0,(void*)0},{(void*)0,&g_1123[1],&g_1123[1],&g_1123[1],(void*)0}};
static struct S0 g_1145[4] = {{-9L,0x17L,13987,0L,0xFF73L,0x8BC8AC75L},{-9L,0x17L,13987,0L,0xFF73L,0x8BC8AC75L},{-9L,0x17L,13987,0L,0xFF73L,0x8BC8AC75L},{-9L,0x17L,13987,0L,0xFF73L,0x8BC8AC75L}};
static union U5 **g_1152[5] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
static uint16_t g_1169[1] = {0xAAEBL};
static union U9 g_1204[2][1][7] = {{{{0x78L},{0xBAL},{0xC0L},{0xC0L},{0xBAL},{0x78L},{0x92L}}},{{{0x78L},{0xBAL},{0xC0L},{0xC0L},{0xBAL},{0x78L},{0x92L}}}};
static union U7 g_1218 = {0x62048709L};
static union U4 *g_1277 = &g_100;



static union U4  func_1(void);
static int32_t  func_5(int8_t * p_6, int8_t * p_7, union U7  p_8);
static int8_t * func_9(uint32_t  p_10, int8_t * p_11, uint16_t  p_12);
static uint32_t  func_17(int8_t * p_18, int8_t * p_19, union U11  p_20);
static union U8  func_21(int8_t * p_22);
static int8_t * func_23(uint32_t  p_24, union U7  p_25, union U7  p_26);
static union U5  func_27(uint64_t  p_28, int32_t  p_29, int8_t * p_30);
static int8_t  func_47(int8_t * p_48, int8_t * p_49, int8_t * const  p_50, const int8_t * p_51);




static union U4  func_1(void)
{ 
    union U2 l_2[7][1][7] = {{{{0xE7B1B0CAL},{0x3C576436L},{0x3C576436L},{0xE7B1B0CAL},{0xE7B1B0CAL},{0x3C576436L},{0x3C576436L}}},{{{-4L},{-1L},{-4L},{-1L},{-4L},{-1L},{-4L}}},{{{0xE7B1B0CAL},{0xE7B1B0CAL},{0x3C576436L},{0x3C576436L},{0xE7B1B0CAL},{0xE7B1B0CAL},{0x3C576436L}}},{{{0x0811FC80L},{-1L},{0x0811FC80L},{-1L},{0x0811FC80L},{-1L},{0x0811FC80L}}},{{{0xE7B1B0CAL},{0x3C576436L},{0x3C576436L},{0xE7B1B0CAL},{0xE7B1B0CAL},{0x3C576436L},{0x3C576436L}}},{{{-4L},{-1L},{-4L},{-1L},{-4L},{-1L},{-4L}}},{{{0xE7B1B0CAL},{0xE7B1B0CAL},{0x3C576436L},{0x3C576436L},{0xE7B1B0CAL},{0xE7B1B0CAL},{0x3C576436L}}}};
    int8_t *l_35 = &g_36;
    int8_t l_1131 = 0x65L;
    union U7 l_1134 = {4294967295UL};
    int32_t l_1228 = (-4L);
    int16_t l_1229[3];
    int32_t l_1230[6];
    int16_t *l_1266 = &g_732;
    int i, j, k;
    for (i = 0; i < 3; i++)
        l_1229[i] = 0L;
    for (i = 0; i < 6; i++)
        l_1230[i] = 1L;
    for (g_3 = 0; (g_3 <= 0); g_3 += 1)
    { 
        int64_t l_4 = 0x3F36A5B5CF0ADC10LL;
        int8_t *l_183 = (void*)0;
        union U7 l_186 = {4294967295UL};
        union U11 l_619[1] = {{0xFBAC872AL}};
        const union U11 **l_1244 = &g_344[0];
        int32_t *l_1245 = &g_760;
        int16_t * const l_1265 = (void*)0;
        union U5 l_1275 = {18446744073709551614UL};
        uint32_t l_1282 = 0UL;
        int i;
        if (l_4)
            break;
        for (l_4 = 0; (l_4 <= 0); l_4 += 1)
        { 
            uint32_t l_13 = 4294967295UL;
            int8_t *l_184 = &g_111.f2;
            union U11 *l_1243 = &l_619[0];
            union U11 * const *l_1242[4][5] = {{&l_1243,&l_1243,&l_1243,&l_1243,&l_1243},{&l_1243,&l_1243,&l_1243,&l_1243,&l_1243},{&l_1243,&l_1243,&l_1243,&l_1243,&l_1243},{&l_1243,&l_1243,&l_1243,&l_1243,&l_1243}};
            int32_t *l_1279 = &g_919;
            int32_t *l_1280 = &l_1230[1];
            int32_t *l_1281[3];
            uint64_t *l_1286 = &g_804;
            uint64_t *l_1287 = &g_75;
            int i, j;
            for (i = 0; i < 3; i++)
                l_1281[i] = &l_1230[2];
        }
    }
    return (*g_1277);
}



static int32_t  func_5(int8_t * p_6, int8_t * p_7, union U7  p_8)
{ 
    uint8_t *l_1148 = &g_615[2];
    uint8_t **l_1147[6][7] = {{(void*)0,&l_1148,&l_1148,(void*)0,&l_1148,&l_1148,&l_1148},{&l_1148,&l_1148,&l_1148,&l_1148,&l_1148,&l_1148,&l_1148},{(void*)0,(void*)0,&l_1148,(void*)0,&l_1148,&l_1148,(void*)0},{&l_1148,&l_1148,&l_1148,&l_1148,&l_1148,&l_1148,&l_1148},{&l_1148,(void*)0,&l_1148,&l_1148,&l_1148,&l_1148,&l_1148},{(void*)0,&l_1148,&l_1148,(void*)0,(void*)0,&l_1148,&l_1148}};
    int32_t l_1149 = 0xE5EE9930L;
    union U5 *l_1151[4] = {&g_111,&g_111,&g_111,&g_111};
    union U5 **l_1150[1][5][3] = {{{(void*)0,&l_1151[3],(void*)0},{&l_1151[3],&l_1151[3],&l_1151[3]},{(void*)0,&l_1151[3],(void*)0},{&l_1151[3],&l_1151[3],&l_1151[3]},{(void*)0,&l_1151[3],(void*)0}}};
    int32_t l_1166[6][4][2] = {{{0x8307C2F9L,3L},{0x4BCCF706L,0xE001ABECL},{0x4BCCF706L,3L},{0x8307C2F9L,0x8307C2F9L}},{{3L,0x4BCCF706L},{0xE001ABECL,0x4BCCF706L},{3L,0x8307C2F9L},{0x8307C2F9L,3L}},{{0x4BCCF706L,0xE001ABECL},{0x4BCCF706L,3L},{0x8307C2F9L,0x8307C2F9L},{3L,0x4BCCF706L}},{{0xE001ABECL,0x4BCCF706L},{3L,0x8307C2F9L},{0x8307C2F9L,3L},{0x4BCCF706L,0xE001ABECL}},{{0x4BCCF706L,3L},{0x8307C2F9L,0x8307C2F9L},{3L,0x4BCCF706L},{0xE001ABECL,0x4BCCF706L}},{{3L,0x8307C2F9L},{0x8307C2F9L,3L},{0x4BCCF706L,0xE001ABECL},{0x4BCCF706L,3L}}};
    int32_t *l_1190 = &g_760;
    uint32_t l_1205[2][1];
    union U10 l_1222 = {0x97A1D88BL};
    int32_t *l_1223 = &g_760;
    int i, j, k;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 1; j++)
            l_1205[i][j] = 4294967295UL;
    }
    for (g_207 = 0; (g_207 <= 59); g_207 = safe_add_func_int64_t_s_s(g_207, 3))
    { 
        struct S0 *l_1144 = &g_1145[0];
        int32_t l_1146 = 0L;
        int32_t l_1163 = 0L;
        int32_t l_1164 = 0x767311F8L;
        int32_t l_1165 = (-1L);
        int32_t l_1167 = 0x7477AA8DL;
        int32_t l_1168 = 0xABE41507L;
        union U3 *l_1214 = (void*)0;
        struct S1 l_1221 = {4L,30,0xEDL,4L,0xE9BF3C81L,1UL};
        for (g_345.f0 = (-21); (g_345.f0 != 3); g_345.f0 = safe_add_func_int64_t_s_s(g_345.f0, 8))
        { 
            int32_t *l_1154 = &l_1149;
            int32_t l_1161 = (-1L);
            int32_t l_1162 = (-2L);
            for (g_733 = 29; (g_733 <= 58); ++g_733)
            { 
                int32_t *l_1153 = &g_176;
                int32_t l_1160[6] = {4L,4L,4L,4L,4L,4L};
                int i;
                for (g_111.f0 = (-25); (g_111.f0 < 5); g_111.f0++)
                { 
                    union U10 **l_1143 = &g_517;
                    (*l_1143) = &g_518;
                    l_1144 = &g_57[1];
                    if (l_1146)
                        break;
                }
                (*l_1153) ^= (((((void*)0 != l_1147[0][0]) != 0UL) ^ (((*g_235) >= (p_8.f1 | l_1149)) != ((l_1150[0][3][0] != g_1152[0]) & l_1146))) == p_8.f2);
                (*g_234) = l_1154;
                for (g_766 = (-1); (g_766 <= 18); ++g_766)
                { 
                    int32_t *l_1157 = &g_851;
                    int32_t *l_1158 = (void*)0;
                    int32_t *l_1159[4] = {&g_61,&g_61,&g_61,&g_61};
                    int i;
                    (*g_234) = (*g_234);
                    --g_1169[0];
                    if ((**g_234))
                        continue;
                    (*l_1157) |= (safe_lshift_func_int16_t_s_u(((l_1146 = ((void*)0 != (*g_543))) || (l_1149 = (safe_rshift_func_uint8_t_u_u((safe_div_func_uint64_t_u_u(((safe_lshift_func_int16_t_s_u((0UL == ((((*g_299) = (*g_299)) != (void*)0) , ((**g_234) || (safe_div_func_int8_t_s_s(((safe_sub_func_uint16_t_u_u((safe_add_func_uint64_t_u_u((safe_sub_func_uint64_t_u_u((safe_sub_func_int64_t_s_s(0x1320017A0F2CC27BLL, p_8.f1)), p_8.f1)), 0xE436A4D04F5C2DD5LL)), (*g_292))) <= g_1056.f4), (-10L)))))), 8)) > (**g_157)), p_8.f0)), 5)))), 2));
                }
            }
            l_1166[4][0][0] &= (*l_1154);
        }
        for (g_766 = 0; (g_766 <= 0); g_766 += 1)
        { 
            int i;
            if (g_1169[g_766])
            { 
                int8_t l_1200 = (-3L);
                const int32_t l_1201 = (-1L);
                union U9 *l_1203 = &g_1204[1][0][4];
                l_1190 = (*g_234);
                for (g_91 = 0; (g_91 <= 4); g_91 += 1)
                { 
                    int32_t *l_1202 = &l_1167;
                    int i, j, k;
                    (*g_235) ^= g_1169[g_766];
                    (**g_234) = ((*l_1202) |= (safe_rshift_func_uint8_t_u_s((safe_mod_func_int64_t_s_s((((4294967295UL && l_1166[(g_766 + 5)][(g_766 + 3)][g_766]) | ((safe_rshift_func_uint8_t_u_s(255UL, (p_8.f2 > (((*l_1190) | ((!((((*l_1190) ^ ((l_1200 &= 247UL) ^ l_1201)) && 0x7502912DC70B0E10LL) , 0x275A732CL)) , p_8.f0)) <= p_8.f0)))) < g_766)) | (*p_6)), 0x1339207AECB2B4B0LL)), l_1165)));
                    if ((*l_1202))
                        break;
                    if ((*g_235))
                        continue;
                }
                (*g_234) = (*g_234);
                for (g_1056.f5 = 0; (g_1056.f5 <= 0); g_1056.f5 += 1)
                { 
                    int i;
                    l_1203 = &g_141;
                    (*l_1190) = g_1169[g_766];
                    if (p_8.f0)
                        break;
                    return l_1205[0][0];
                }
            }
            else
            { 
                return p_8.f0;
            }
        }
        (*l_1190) ^= (safe_add_func_uint64_t_u_u(((safe_rshift_func_int8_t_s_u((safe_mul_func_uint32_t_u_u(((safe_mul_func_int16_t_s_s((((*****g_542) , (*g_247)) != ((*g_517) , l_1214)), (+((safe_lshift_func_int8_t_s_s((g_1218 , (safe_add_func_int16_t_s_s(l_1163, (l_1221 , 0xCB5BL)))), l_1221.f1)) , 65535UL)))) >= l_1221.f5), 0L)), 0)) < p_8.f0), l_1163));
    }
    (*l_1223) &= (l_1222 , (**g_234));
    return p_8.f2;
}



static int8_t * func_9(uint32_t  p_10, int8_t * p_11, uint16_t  p_12)
{ 
    for (g_733 = 16; (g_733 < 52); g_733 = safe_add_func_int64_t_s_s(g_733, 6))
    { 
        (*g_234) = (*g_234);
    }
    return (****g_542);
}



static uint32_t  func_17(int8_t * p_18, int8_t * p_19, union U11  p_20)
{ 
    union U3 l_620[2] = {{0UL},{0UL}};
    int32_t * const l_636[1] = {&g_365.f4};
    int32_t l_637 = 1L;
    union U5 *l_644 = &g_645;
    union U5 *l_646 = &g_645;
    int64_t l_648 = 1L;
    const union U2 **l_714 = (void*)0;
    uint16_t *l_741 = (void*)0;
    int32_t l_762 = 0L;
    int32_t l_803 = (-6L);
    union U7 *l_826 = &g_827;
    const union U11 l_830 = {0x3D962015L};
    struct S1 *l_866 = &g_365;
    int32_t l_888 = 0x00121A37L;
    uint32_t l_889[4][3][4] = {{{0xE481B5A1L,0xFCBABA69L,0xE481B5A1L,0xE3BE5811L},{0xBB8480AFL,0x29FF1F9EL,0xF15CA4E8L,0x1818D4B9L},{0UL,18446744073709551615UL,0x29FF1F9EL,0x29FF1F9EL}},{{0xA5EFA5CCL,0xA5EFA5CCL,0x29FF1F9EL,0xE481B5A1L},{0UL,0UL,0xF15CA4E8L,18446744073709551615UL},{0xBB8480AFL,0xF15CA4E8L,0xE481B5A1L,0xF15CA4E8L}},{{0xE481B5A1L,0xF15CA4E8L,0xBB8480AFL,0x29FF1F9EL},{0xFCBABA69L,0xBB8480AFL,0xE481B5A1L,18446744073709551615UL},{0xA5EFA5CCL,0xE3BE5811L,0xE3BE5811L,0xA5EFA5CCL}},{{0xA5EFA5CCL,0x29FF1F9EL,0xE481B5A1L,0UL},{0xFCBABA69L,0xA5EFA5CCL,0UL,0xF15CA4E8L},{18446744073709551615UL,0x1818D4B9L,18446744073709551615UL,0xF15CA4E8L}}};
    int8_t *l_965 = &g_111.f2;
    uint16_t l_1022 = 0xD458L;
    struct S0 *l_1055[3];
    int16_t *l_1121[5][3][7] = {{{(void*)0,(void*)0,&g_732,(void*)0,(void*)0,&g_732,(void*)0},{(void*)0,&g_119,&g_227,&g_732,&g_227,&g_119,(void*)0},{&g_119,(void*)0,&g_119,&g_119,(void*)0,&g_119,&g_119}},{{(void*)0,&g_732,&g_732,&g_732,(void*)0,&g_732,(void*)0},{(void*)0,&g_119,&g_119,(void*)0,&g_119,&g_119,(void*)0},{&g_227,&g_732,&g_227,&g_119,(void*)0,&g_119,&g_227}},{{(void*)0,(void*)0,&g_732,(void*)0,(void*)0,&g_732,(void*)0},{(void*)0,&g_119,&g_227,&g_732,&g_227,&g_119,(void*)0},{&g_119,(void*)0,&g_119,&g_119,(void*)0,&g_119,&g_119}},{{(void*)0,&g_732,&g_732,&g_732,(void*)0,&g_732,(void*)0},{(void*)0,&g_119,&g_119,(void*)0,&g_119,&g_119,(void*)0},{&g_227,&g_732,&g_227,&g_119,(void*)0,&g_119,&g_227}},{{(void*)0,(void*)0,&g_732,(void*)0,(void*)0,&g_732,(void*)0},{(void*)0,&g_119,&g_227,&g_732,&g_227,&g_119,(void*)0},{&g_119,(void*)0,&g_119,&g_119,(void*)0,&g_119,&g_119}}};
    int16_t **l_1120 = &l_1121[4][0][6];
    const union U11 *l_1125 = &g_345;
    int i, j, k;
    for (i = 0; i < 3; i++)
        l_1055[i] = &g_1056;
    return p_20.f1;
}



static union U8  func_21(int8_t * p_22)
{ 
    int32_t *l_195 = &g_176;
    int32_t *l_196 = &g_176;
    int32_t *l_197 = &g_61;
    int32_t l_198 = 0xA38379FBL;
    int32_t l_199 = 1L;
    int32_t *l_200 = &g_61;
    int32_t *l_201 = &g_61;
    int32_t *l_202 = &g_61;
    int32_t *l_203 = &l_198;
    int32_t *l_204[6];
    int8_t l_205[4] = {(-3L),(-3L),(-3L),(-3L)};
    int8_t l_206 = 4L;
    uint16_t *l_216 = &g_111.f3;
    uint16_t *l_217[3];
    int32_t l_218 = (-1L);
    uint32_t l_225 = 18446744073709551615UL;
    union U8 l_240 = {-9L};
    uint16_t l_241 = 0xDA36L;
    union U3 **l_250 = &g_248;
    uint8_t *l_278 = &g_111.f1;
    int8_t ** const l_287 = &g_158;
    union U2 ***l_302 = &g_300;
    union U4 l_312 = {0x78ED14C34745287BLL};
    int8_t * const ****l_330 = (void*)0;
    union U10 l_350 = {3UL};
    uint32_t l_391 = 0xD240A8BBL;
    union U8 *l_401 = &g_402[1][2];
    uint32_t l_411 = 0xCDC9DE39L;
    union U2 l_412 = {0x021F9A67L};
    int64_t l_469 = 0x39D849D0B793383DLL;
    int64_t l_496 = (-1L);
    union U5 *l_500 = &g_111;
    union U6 *l_505 = &g_244;
    struct S0 *l_510[4];
    struct S0 **l_509[7];
    union U10 **l_538 = &g_517;
    int32_t l_564[3][6][6] = {{{0L,1L,0xDFB3A13EL,0xED671C62L,0xDFB3A13EL,1L},{0xDFB3A13EL,0L,0L,9L,9L,0L},{0xDFB3A13EL,0xDFB3A13EL,9L,0xED671C62L,0xE0C22A59L,0xED671C62L},{0L,0xDFB3A13EL,0L,0L,9L,9L},{1L,0L,0L,1L,0xDFB3A13EL,0xED671C62L},{0xED671C62L,1L,9L,1L,0xED671C62L,0L}},{{1L,0xED671C62L,0L,0L,0xED671C62L,1L},{0L,1L,0xDFB3A13EL,0xED671C62L,0xDFB3A13EL,1L},{0xDFB3A13EL,0L,0L,9L,9L,0L},{0xDFB3A13EL,0xDFB3A13EL,9L,0xED671C62L,0xE0C22A59L,0xED671C62L},{0L,0xE0C22A59L,0xED671C62L,9L,0xDFB3A13EL,0xDFB3A13EL},{0L,0xED671C62L,0xED671C62L,0L,0xE0C22A59L,0L}},{{0L,0L,0xDFB3A13EL,0L,0L,9L},{0L,0L,9L,9L,0L,0L},{0xED671C62L,0L,0xE0C22A59L,0L,0xE0C22A59L,0L},{0xE0C22A59L,0xED671C62L,9L,0xDFB3A13EL,0xDFB3A13EL,9L},{0xE0C22A59L,0xE0C22A59L,0xDFB3A13EL,0L,1L,0L},{0xED671C62L,0xE0C22A59L,0xED671C62L,9L,0xDFB3A13EL,0xDFB3A13EL}}};
    int i, j, k;
    for (i = 0; i < 6; i++)
        l_204[i] = &l_199;
    for (i = 0; i < 3; i++)
        l_217[i] = (void*)0;
    for (i = 0; i < 4; i++)
        l_510[i] = &g_57[1];
    for (i = 0; i < 7; i++)
        l_509[i] = &l_510[3];
    ++g_207;
    return (*g_252);
}



static int8_t * func_23(uint32_t  p_24, union U7  p_25, union U7  p_26)
{ 
    union U3 *l_189 = &g_95;
    uint8_t *l_190 = &g_111.f1;
    int32_t l_193 = 3L;
    int32_t *l_194 = &g_61;
    (*l_194) = (((((**g_157) = ((safe_rshift_func_uint8_t_u_s(0xCFL, (0xFAL ^ ((void*)0 != l_189)))) & ((*l_190) = 0x67L))) <= (g_185.f0 != ((0UL <= l_193) <= l_193))) <= p_25.f0) | l_193);
    return l_190;
}



static union U5  func_27(uint64_t  p_28, int32_t  p_29, int8_t * p_30)
{ 
    int8_t *l_53[2];
    int8_t **l_52 = &l_53[0];
    int32_t l_59 = 4L;
    int32_t *l_60 = &g_61;
    union U4 l_70 = {0x828A5DA0DE902BA9LL};
    int32_t l_107 = 0xE39F7431L;
    uint64_t l_108[2];
    union U5 l_139 = {0x64999BD3L};
    int32_t l_177 = 0xFCA2756FL;
    int i;
    for (i = 0; i < 2; i++)
        l_53[i] = &g_36;
    for (i = 0; i < 2; i++)
        l_108[i] = 0x193220CCB0868ECCLL;
    --g_37[3][2];
    (*l_60) |= (safe_unary_minus_func_uint8_t_u(((safe_add_func_int32_t_s_s((p_28 && g_36), (safe_add_func_int8_t_s_s((safe_mod_func_int8_t_s_s(func_47(&g_36, ((*l_52) = p_30), p_30, &g_36), 1L)), g_57[1].f4)))) == l_59)));
    for (p_28 = 0; (p_28 < 47); p_28++)
    { 
        const int64_t l_64 = 1L;
        const int32_t *l_71 = &g_61;
        union U2 **l_74 = &g_54;
        int32_t l_78 = 0x7094D041L;
        int32_t l_84 = 0xB6F817EAL;
        struct S1 l_150[7][2][4] = {{{{0x849BC54FL,10,1L,7L,-7L,18446744073709551613UL},{0xC32A7D5BL,9,0xD3L,-1L,6L,18446744073709551609UL},{0xC32A7D5BL,9,0xD3L,-1L,6L,18446744073709551609UL},{0x849BC54FL,10,1L,7L,-7L,18446744073709551613UL}},{{0xC32A7D5BL,9,0xD3L,-1L,6L,18446744073709551609UL},{0x849BC54FL,10,1L,7L,-7L,18446744073709551613UL},{0xC32A7D5BL,9,0xD3L,-1L,6L,18446744073709551609UL},{0xC32A7D5BL,9,0xD3L,-1L,6L,18446744073709551609UL}}},{{{0x849BC54FL,10,1L,7L,-7L,18446744073709551613UL},{0x849BC54FL,10,1L,7L,-7L,18446744073709551613UL},{1L,20,-8L,0xE66B6A13L,0x3FB5FCD5L,0x05CCE5ABL},{0x849BC54FL,10,1L,7L,-7L,18446744073709551613UL}},{{0x849BC54FL,10,1L,7L,-7L,18446744073709551613UL},{0xC32A7D5BL,9,0xD3L,-1L,6L,18446744073709551609UL},{0xC32A7D5BL,9,0xD3L,-1L,6L,18446744073709551609UL},{0x849BC54FL,10,1L,7L,-7L,18446744073709551613UL}}},{{{0xC32A7D5BL,9,0xD3L,-1L,6L,18446744073709551609UL},{0x849BC54FL,10,1L,7L,-7L,18446744073709551613UL},{0xC32A7D5BL,9,0xD3L,-1L,6L,18446744073709551609UL},{0xC32A7D5BL,9,0xD3L,-1L,6L,18446744073709551609UL}},{{0x849BC54FL,10,1L,7L,-7L,18446744073709551613UL},{0x849BC54FL,10,1L,7L,-7L,18446744073709551613UL},{1L,20,-8L,0xE66B6A13L,0x3FB5FCD5L,0x05CCE5ABL},{0x849BC54FL,10,1L,7L,-7L,18446744073709551613UL}}},{{{0x849BC54FL,10,1L,7L,-7L,18446744073709551613UL},{0xC32A7D5BL,9,0xD3L,-1L,6L,18446744073709551609UL},{0xC32A7D5BL,9,0xD3L,-1L,6L,18446744073709551609UL},{0x849BC54FL,10,1L,7L,-7L,18446744073709551613UL}},{{0xC32A7D5BL,9,0xD3L,-1L,6L,18446744073709551609UL},{0x849BC54FL,10,1L,7L,-7L,18446744073709551613UL},{0xC32A7D5BL,9,0xD3L,-1L,6L,18446744073709551609UL},{0xC32A7D5BL,9,0xD3L,-1L,6L,18446744073709551609UL}}},{{{0x849BC54FL,10,1L,7L,-7L,18446744073709551613UL},{0x849BC54FL,10,1L,7L,-7L,18446744073709551613UL},{1L,20,-8L,0xE66B6A13L,0x3FB5FCD5L,0x05CCE5ABL},{0x849BC54FL,10,1L,7L,-7L,18446744073709551613UL}},{{0x849BC54FL,10,1L,7L,-7L,18446744073709551613UL},{0xC32A7D5BL,9,0xD3L,-1L,6L,18446744073709551609UL},{0xC32A7D5BL,9,0xD3L,-1L,6L,18446744073709551609UL},{0x849BC54FL,10,1L,7L,-7L,18446744073709551613UL}}},{{{0xC32A7D5BL,9,0xD3L,-1L,6L,18446744073709551609UL},{0x849BC54FL,10,1L,7L,-7L,18446744073709551613UL},{0xC32A7D5BL,9,0xD3L,-1L,6L,18446744073709551609UL},{0xC32A7D5BL,9,0xD3L,-1L,6L,18446744073709551609UL}},{{0x849BC54FL,10,1L,7L,-7L,18446744073709551613UL},{0x849BC54FL,10,1L,7L,-7L,18446744073709551613UL},{1L,20,-8L,0xE66B6A13L,0x3FB5FCD5L,0x05CCE5ABL},{0x849BC54FL,10,1L,7L,-7L,18446744073709551613UL}}},{{{0x849BC54FL,10,1L,7L,-7L,18446744073709551613UL},{0xC32A7D5BL,9,0xD3L,-1L,6L,18446744073709551609UL},{0xC32A7D5BL,9,0xD3L,-1L,6L,18446744073709551609UL},{0x849BC54FL,10,1L,7L,-7L,18446744073709551613UL}},{{0xC32A7D5BL,9,0xD3L,-1L,6L,18446744073709551609UL},{0x849BC54FL,10,1L,7L,-7L,18446744073709551613UL},{0xC32A7D5BL,9,0xD3L,-1L,6L,18446744073709551609UL},{0xC32A7D5BL,9,0xD3L,-1L,6L,18446744073709551609UL}}}};
        int64_t l_162 = 0x263B0CC831229358LL;
        int i, j, k;
    }
    return l_139;
}



static int8_t  func_47(int8_t * p_48, int8_t * p_49, int8_t * const  p_50, const int8_t * p_51)
{ 
    union U2 **l_55 = &g_54;
    const struct S0 **l_58 = &g_56;
    (*l_55) = g_54;
    (*l_58) = g_56;
    return (*p_51);
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_3, "g_3", print_hash_value);
    transparent_crc(g_36, "g_36", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 5; j++)
        {
            transparent_crc(g_37[i][j], "g_37[i][j]", print_hash_value);

        }
    }
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_57[i].f0, "g_57[i].f0", print_hash_value);
        transparent_crc(g_57[i].f1, "g_57[i].f1", print_hash_value);
        transparent_crc(g_57[i].f2, "g_57[i].f2", print_hash_value);
        transparent_crc(g_57[i].f3, "g_57[i].f3", print_hash_value);
        transparent_crc(g_57[i].f4, "g_57[i].f4", print_hash_value);
        transparent_crc(g_57[i].f5, "g_57[i].f5", print_hash_value);

    }
    transparent_crc(g_61, "g_61", print_hash_value);
    transparent_crc(g_75, "g_75", print_hash_value);
    transparent_crc(g_91, "g_91", print_hash_value);
    transparent_crc(g_95.f0, "g_95.f0", print_hash_value);
    transparent_crc(g_100.f0, "g_100.f0", print_hash_value);
    transparent_crc(g_111.f0, "g_111.f0", print_hash_value);
    transparent_crc(g_111.f1, "g_111.f1", print_hash_value);
    transparent_crc(g_111.f2, "g_111.f2", print_hash_value);
    transparent_crc(g_111.f3, "g_111.f3", print_hash_value);
    transparent_crc(g_119, "g_119", print_hash_value);
    transparent_crc(g_134, "g_134", print_hash_value);
    transparent_crc(g_141.f0, "g_141.f0", print_hash_value);
    transparent_crc(g_143.f0, "g_143.f0", print_hash_value);
    transparent_crc(g_175, "g_175", print_hash_value);
    transparent_crc(g_176, "g_176", print_hash_value);
    transparent_crc(g_178, "g_178", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_179[i], "g_179[i]", print_hash_value);

    }
    transparent_crc(g_185.f0, "g_185.f0", print_hash_value);
    transparent_crc(g_185.f1, "g_185.f1", print_hash_value);
    transparent_crc(g_185.f2, "g_185.f2", print_hash_value);
    transparent_crc(g_207, "g_207", print_hash_value);
    transparent_crc(g_226, "g_226", print_hash_value);
    transparent_crc(g_227, "g_227", print_hash_value);
    transparent_crc(g_244.f0, "g_244.f0", print_hash_value);
    transparent_crc(g_253.f0, "g_253.f0", print_hash_value);
    transparent_crc(g_334, "g_334", print_hash_value);
    transparent_crc(g_345.f0, "g_345.f0", print_hash_value);
    transparent_crc(g_345.f1, "g_345.f1", print_hash_value);
    transparent_crc(g_345.f2, "g_345.f2", print_hash_value);
    transparent_crc(g_345.f3, "g_345.f3", print_hash_value);
    transparent_crc(g_361, "g_361", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 1; j++)
        {
            transparent_crc(g_362[i][j], "g_362[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_365.f0, "g_365.f0", print_hash_value);
    transparent_crc(g_365.f1, "g_365.f1", print_hash_value);
    transparent_crc(g_365.f2, "g_365.f2", print_hash_value);
    transparent_crc(g_365.f3, "g_365.f3", print_hash_value);
    transparent_crc(g_365.f4, "g_365.f4", print_hash_value);
    transparent_crc(g_365.f5, "g_365.f5", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 4; j++)
        {
            transparent_crc(g_402[i][j].f0, "g_402[i][j].f0", print_hash_value);

        }
    }
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 4; j++)
        {
            transparent_crc(g_418[i][j], "g_418[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_518.f0, "g_518.f0", print_hash_value);
    transparent_crc(g_518.f1, "g_518.f1", print_hash_value);
    transparent_crc(g_518.f2, "g_518.f2", print_hash_value);
    transparent_crc(g_523, "g_523", print_hash_value);
    transparent_crc(g_525, "g_525", print_hash_value);
    transparent_crc(g_612, "g_612", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_615[i], "g_615[i]", print_hash_value);

    }
    transparent_crc(g_645.f0, "g_645.f0", print_hash_value);
    transparent_crc(g_645.f1, "g_645.f1", print_hash_value);
    transparent_crc(g_645.f2, "g_645.f2", print_hash_value);
    transparent_crc(g_645.f3, "g_645.f3", print_hash_value);
    transparent_crc(g_656, "g_656", print_hash_value);
    transparent_crc(g_661, "g_661", print_hash_value);
    transparent_crc(g_662, "g_662", print_hash_value);
    transparent_crc(g_668, "g_668", print_hash_value);
    transparent_crc(g_723, "g_723", print_hash_value);
    transparent_crc(g_732, "g_732", print_hash_value);
    transparent_crc(g_733, "g_733", print_hash_value);
    transparent_crc(g_759, "g_759", print_hash_value);
    transparent_crc(g_760, "g_760", print_hash_value);
    transparent_crc(g_763, "g_763", print_hash_value);
    transparent_crc(g_765, "g_765", print_hash_value);
    transparent_crc(g_766, "g_766", print_hash_value);
    transparent_crc(g_804, "g_804", print_hash_value);
    transparent_crc(g_827.f0, "g_827.f0", print_hash_value);
    transparent_crc(g_827.f1, "g_827.f1", print_hash_value);
    transparent_crc(g_827.f2, "g_827.f2", print_hash_value);
    transparent_crc(g_849, "g_849", print_hash_value);
    transparent_crc(g_851, "g_851", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 1; j++)
        {
            transparent_crc(g_852[i][j], "g_852[i][j]", print_hash_value);

        }
    }
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 1; k++)
            {
                transparent_crc(g_869[i][j][k].f0, "g_869[i][j][k].f0", print_hash_value);
                transparent_crc(g_869[i][j][k].f1, "g_869[i][j][k].f1", print_hash_value);
                transparent_crc(g_869[i][j][k].f2, "g_869[i][j][k].f2", print_hash_value);
                transparent_crc(g_869[i][j][k].f3, "g_869[i][j][k].f3", print_hash_value);
                transparent_crc(g_869[i][j][k].f4, "g_869[i][j][k].f4", print_hash_value);
                transparent_crc(g_869[i][j][k].f5, "g_869[i][j][k].f5", print_hash_value);

            }
        }
    }
    transparent_crc(g_892, "g_892", print_hash_value);
    transparent_crc(g_910, "g_910", print_hash_value);
    transparent_crc(g_919, "g_919", print_hash_value);
    transparent_crc(g_943, "g_943", print_hash_value);
    transparent_crc(g_1034, "g_1034", print_hash_value);
    transparent_crc(g_1035, "g_1035", print_hash_value);
    transparent_crc(g_1056.f0, "g_1056.f0", print_hash_value);
    transparent_crc(g_1056.f1, "g_1056.f1", print_hash_value);
    transparent_crc(g_1056.f2, "g_1056.f2", print_hash_value);
    transparent_crc(g_1056.f3, "g_1056.f3", print_hash_value);
    transparent_crc(g_1056.f4, "g_1056.f4", print_hash_value);
    transparent_crc(g_1056.f5, "g_1056.f5", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_1145[i].f0, "g_1145[i].f0", print_hash_value);
        transparent_crc(g_1145[i].f1, "g_1145[i].f1", print_hash_value);
        transparent_crc(g_1145[i].f2, "g_1145[i].f2", print_hash_value);
        transparent_crc(g_1145[i].f3, "g_1145[i].f3", print_hash_value);
        transparent_crc(g_1145[i].f4, "g_1145[i].f4", print_hash_value);
        transparent_crc(g_1145[i].f5, "g_1145[i].f5", print_hash_value);

    }
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_1169[i], "g_1169[i]", print_hash_value);

    }
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 7; k++)
            {
                transparent_crc(g_1204[i][j][k].f0, "g_1204[i][j][k].f0", print_hash_value);

            }
        }
    }
    transparent_crc(g_1218.f0, "g_1218.f0", print_hash_value);
    transparent_crc(g_1218.f1, "g_1218.f1", print_hash_value);
    transparent_crc(g_1218.f2, "g_1218.f2", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
