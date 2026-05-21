// SPDX-License-Identifier: MIT
// cctest_csmith_84d544f5.c --- cctest case csmith_84d544f5 (csmith seed 2228569333)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x3ac5f93c */

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

// Options:   -s 2228569333 -o /tmp/csmith_gen_6_igwame/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


#pragma pack(push)
#pragma pack(1)
struct S0 {
   const int64_t  f0;
   uint64_t  f1;
   int32_t  f2;
   const uint64_t  f3;
};
#pragma pack(pop)

#pragma pack(push)
#pragma pack(1)
struct S1 {
   const uint16_t  f0;
};
#pragma pack(pop)

union U2 {
   uint64_t  f0;
};


static const uint32_t g_4[2] = {0xCCBAD86EL,0xCCBAD86EL};
static struct S1 g_15 = {1UL};
static int32_t g_16[5] = {1L,1L,1L,1L,1L};
static int64_t g_20 = 1L;
static uint8_t g_21 = 0x82L;
static union U2 g_38 = {1UL};
static int32_t g_44[2][1][4] = {{{0xFEDDD8D7L,0xFEDDD8D7L,(-5L),0xFEDDD8D7L}},{{0xFEDDD8D7L,(-4L),(-4L),0xFEDDD8D7L}}};
static int8_t g_55 = 0x62L;
static union U2 g_66[4] = {{0x6E24E13FEA38A5BFLL},{0x6E24E13FEA38A5BFLL},{0x6E24E13FEA38A5BFLL},{0x6E24E13FEA38A5BFLL}};
static int32_t g_67 = 0x0476CE52L;
static int32_t g_208 = 0xC2C015D2L;
static uint16_t g_218 = 0xE1A5L;



static uint32_t  func_1(void);
static uint64_t  func_8(const union U2  p_9, uint64_t  p_10);
static union U2  func_11(struct S1  p_12, uint32_t  p_13, union U2  p_14);
static union U2  func_24(struct S1  p_25, uint32_t  p_26);




static uint32_t  func_1(void)
{ 
    uint16_t l_7[1][3][3];
    int32_t l_17 = 0L;
    int32_t l_18 = 0x2BA29F58L;
    int32_t l_19[1];
    struct S1 l_27 = {0x99A5L};
    uint32_t l_234 = 0xC453E170L;
    int i, j, k;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 3; k++)
                l_7[i][j][k] = 0x5A80L;
        }
    }
    for (i = 0; i < 1; i++)
        l_19[i] = 0xB979CD32L;
    l_18 = (g_44[0][0][2] = (safe_div_func_int16_t_s_s(g_4[0], (safe_add_func_uint64_t_u_u(l_7[0][1][0], (((g_66[3].f0 = func_8(func_11(g_15, (++g_21), (g_38 = func_24(l_27, g_15.f0))), g_15.f0)) ^ l_7[0][0][0]) | g_4[0]))))));
    l_17 = l_234;
    return l_27.f0;
}



static uint64_t  func_8(const union U2  p_9, uint64_t  p_10)
{ 
    uint16_t l_176 = 0x5008L;
    int32_t l_178[4] = {(-5L),(-5L),(-5L),(-5L)};
    int16_t l_198 = (-1L);
    uint8_t l_199 = 3UL;
    const struct S1 l_209 = {0x55FCL};
    int32_t l_219 = 0xE90BC4DBL;
    int i;
    for (g_67 = 4; (g_67 >= 0); g_67 -= 1)
    { 
        int32_t l_177 = 0xBFE3058EL;
        int32_t l_186[2][4][1];
        int16_t l_193 = 1L;
        uint8_t l_224 = 1UL;
        int i, j, k;
        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 4; j++)
            {
                for (k = 0; k < 1; k++)
                    l_186[i][j][k] = 0L;
            }
        }
        if ((l_177 = (safe_div_func_uint16_t_u_u((safe_sub_func_int8_t_s_s(((0x5680L != (safe_mod_func_uint16_t_u_u(g_16[g_67], (safe_sub_func_int16_t_s_s(1L, l_176))))) , l_176), g_4[0])), g_16[1]))))
        { 
            int8_t l_182 = (-1L);
            int32_t l_183 = 0x445F3A4FL;
            int32_t l_187 = 0L;
            int32_t l_188 = 0xC8AC011AL;
            int32_t l_191 = 0x6677606EL;
            int32_t l_192[5] = {4L,4L,4L,4L,4L};
            int32_t l_197 = 0L;
            int i;
            if (g_16[g_67])
            { 
                int32_t l_179 = 1L;
                int32_t l_180 = 0x8C391F53L;
                int32_t l_181 = 0L;
                int32_t l_184 = (-1L);
                int32_t l_185 = 0x23AEECEFL;
                int8_t l_189 = 1L;
                int32_t l_190 = (-8L);
                int32_t l_194 = (-2L);
                int32_t l_195[2][1][5] = {{{0x66397461L,0x66397461L,0x66397461L,0x66397461L,0x66397461L}},{{(-1L),(-1L),(-1L),(-1L),(-1L)}}};
                int8_t l_196 = 0x30L;
                int i, j, k;
                l_199++;
                if (p_9.f0)
                    break;
                l_192[0] = (safe_mul_func_uint8_t_u_u((0x52209AA8L ^ (p_9.f0 != g_44[0][0][3])), (safe_mod_func_int8_t_s_s(g_44[0][0][1], p_9.f0))));
            }
            else
            { 
                g_44[0][0][2] = l_182;
                l_192[1] &= 0L;
                if (p_10)
                    break;
            }
            l_187 = (safe_div_func_uint64_t_u_u(((g_208 = p_9.f0) == 3L), ((l_209 , (l_219 |= (safe_rshift_func_uint8_t_u_s(((safe_mul_func_uint16_t_u_u((g_218 = ((((safe_rshift_func_uint8_t_u_s((safe_add_func_uint64_t_u_u(((g_16[g_67] >= 0xCC7FC44EL) || 0x3C1BL), l_178[3])), p_9.f0)) <= 0L) > p_9.f0) == l_177)), 0x2588L)) > g_66[3].f0), l_178[3])))) || p_10)));
        }
        else
        { 
            int32_t l_220 = 9L;
            int32_t l_221 = (-1L);
            int32_t l_222 = 0x94299CB9L;
            int32_t l_223 = 0xD9B6EF0CL;
            l_224++;
        }
        for (l_176 = 0; (l_176 <= 0); l_176 += 1)
        { 
            return g_66[3].f0;
        }
        for (l_176 = 0; (l_176 <= 0); l_176 += 1)
        { 
            uint8_t l_233 = 0x24L;
            if (g_66[3].f0)
                break;
            for (g_20 = 4; (g_20 >= 0); g_20 -= 1)
            { 
                int i, j, k;
                if (g_44[(l_176 + 1)][l_176][l_176])
                    break;
                g_44[l_176][l_176][(l_176 + 2)] = (safe_rshift_func_int8_t_s_u((g_55 = (safe_rshift_func_uint8_t_u_s(((safe_sub_func_uint64_t_u_u(18446744073709551611UL, (l_178[1] &= 1L))) && g_44[(l_176 + 1)][l_176][(l_176 + 3)]), (((1L | l_233) | l_233) <= p_9.f0)))), 3));
            }
        }
    }
    return l_209.f0;
}



static union U2  func_11(struct S1  p_12, uint32_t  p_13, union U2  p_14)
{ 
    uint8_t l_39 = 0x58L;
    uint16_t l_43 = 0xC20BL;
    struct S1 l_78 = {65535UL};
    int32_t l_93 = 0L;
    int32_t l_144 = 0xFC704608L;
    int32_t l_146 = 4L;
    union U2 l_150 = {18446744073709551608UL};
    int32_t l_156 = 0x7CD9934EL;
    int32_t l_157[2];
    int64_t l_162 = 0x647370D034B6E5E7LL;
    int64_t l_163 = 0xEBA0929077F640A0LL;
    int32_t l_164 = 0L;
    uint8_t l_165 = 1UL;
    int i;
    for (i = 0; i < 2; i++)
        l_157[i] = 0x646FAD07L;
    if (((l_39 > 8L) || (safe_rshift_func_uint8_t_u_u((safe_unary_minus_func_int8_t_s(((l_39 | (p_13 | l_39)) , l_43))), l_39))))
    { 
        struct S0 l_52 = {3L,0xD064616E91F13110LL,-1L,0UL};
        int32_t l_53 = 4L;
        if ((g_21 > g_4[1]))
        { 
            uint8_t l_61 = 0xB4L;
            int32_t l_68 = (-7L);
            uint16_t l_92 = 0x30BFL;
            for (g_38.f0 = 0; (g_38.f0 <= 4); g_38.f0 += 1)
            { 
                int32_t l_51 = 1L;
                int32_t l_54 = 0xFEB45D95L;
                int i;
                g_55 = ((((((l_54 = ((g_44[0][0][2] = g_16[g_38.f0]) | ((l_53 ^= (safe_add_func_uint32_t_u_u((((safe_sub_func_int32_t_s_s(((l_51 = ((g_16[g_38.f0] == 0UL) & ((18446744073709551613UL || g_15.f0) > 0x653D3A1A91F101FBLL))) | l_39), 1UL)) , l_52) , p_12.f0), p_14.f0))) | g_38.f0))) != g_16[g_38.f0]) || l_52.f3) <= g_16[g_38.f0]) > p_14.f0) ^ l_52.f1);
                if (g_44[0][0][2])
                    break;
                l_51 = ((((safe_mul_func_int8_t_s_s((((l_68 = ((safe_mod_func_uint16_t_u_u((+(l_61 , ((l_53 >= (safe_add_func_uint64_t_u_u((((safe_rshift_func_uint16_t_u_s((0x494CL & (g_67 = (((g_66[3] = func_24(g_15, l_61)) , g_4[0]) , l_52.f2))), p_13)) != 0x9239C2B5L) && 0xAA7A400155102697LL), 0x99C48247AD075F43LL))) > l_53))), 0x658DL)) ^ 0xEBL)) == 0xE5B049C75CA1D1A2LL) ^ p_13), l_53)) && l_52.f2) ^ 1L) > p_13);
            }
            for (l_39 = 0; (l_39 <= 0); l_39 += 1)
            { 
                l_53 = (((safe_rshift_func_int8_t_s_u((safe_rshift_func_uint8_t_u_u((+((safe_add_func_uint32_t_u_u((0L == (safe_div_func_uint32_t_u_u(g_55, ((((g_66[3].f0 , l_78) , g_4[1]) > 0xF0L) || l_68)))), p_13)) && g_44[1][0][1])), 0)), 6)) > 0xA68F7E2F801B025BLL) , g_21);
            }
            for (l_43 = 0; (l_43 >= 38); l_43 = safe_add_func_int16_t_s_s(l_43, 6))
            { 
                const uint32_t l_81 = 0x5DA263B4L;
                struct S0 l_82 = {0x1FB1A5A204FE417BLL,1UL,0xD7233D1AL,0xC1EF8B30EBBFAC55LL};
                l_53 = (l_81 | ((l_82 , ((safe_add_func_uint8_t_u_u(((safe_mod_func_uint8_t_u_u((safe_sub_func_int16_t_s_s(((safe_mod_func_uint16_t_u_u((!l_82.f0), 6L)) >= l_92), 1UL)), l_53)) >= p_13), 0x3DL)) <= (-3L))) || p_14.f0));
            }
        }
        else
        { 
            l_93 = p_14.f0;
            g_44[0][0][2] = ((safe_rshift_func_uint16_t_u_s(0x9B0BL, p_12.f0)) & g_20);
        }
    }
    else
    { 
        int64_t l_104 = 0x3BA82727C9044C33LL;
        l_104 ^= (l_93 = (safe_lshift_func_int8_t_s_u((safe_lshift_func_int8_t_s_s((safe_mod_func_uint32_t_u_u(0x71DC5CD9L, 4294967295UL)), 1)), (safe_div_func_uint8_t_u_u((0xC8E115B8L < g_4[0]), p_14.f0)))));
        g_67 = (safe_add_func_uint16_t_u_u((g_44[0][0][2] , ((safe_sub_func_int16_t_s_s(p_14.f0, 65533UL)) ^ (((safe_mul_func_uint8_t_u_u((l_43 == l_93), p_14.f0)) && 4294967295UL) && l_93))), g_38.f0));
    }
    if (l_43)
    { 
        uint32_t l_113 = 0xE410D93EL;
        g_44[0][0][2] = (safe_lshift_func_int8_t_s_s(0x50L, ((l_113 == 0x80BE8948L) >= ((safe_mod_func_uint16_t_u_u(1UL, 0xF729L)) || g_44[0][0][2]))));
    }
    else
    { 
        uint32_t l_130 = 0UL;
        int32_t l_143 = (-1L);
        int32_t l_151 = 1L;
        int32_t l_154 = 0L;
        int32_t l_155[2];
        int i;
        for (i = 0; i < 2; i++)
            l_155[i] = 0x6A651014L;
        for (l_43 = 0; (l_43 == 60); l_43 = safe_add_func_int64_t_s_s(l_43, 9))
        { 
            const uint8_t l_126[1][1][2] = {{{0x54L,0x54L}}};
            uint32_t l_129 = 0xE19FA1A8L;
            int32_t l_152 = 9L;
            int32_t l_153[5] = {(-3L),(-3L),(-3L),(-3L),(-3L)};
            int16_t l_158 = 0x266FL;
            uint16_t l_159 = 0xC799L;
            int i, j, k;
            g_67 = (g_44[0][0][1] &= (safe_sub_func_int8_t_s_s((safe_div_func_uint32_t_u_u((safe_add_func_int64_t_s_s(((g_15.f0 <= (((safe_lshift_func_uint8_t_u_u(((l_126[0][0][1] , ((p_13 > ((safe_mod_func_uint8_t_u_u((((0x4C4C9405L >= l_129) > p_13) | p_14.f0), g_55)) < p_13)) < 0L)) & 0x7298L), 2)) | l_93) >= l_130)) , 4L), 18446744073709551613UL)), 0x49564AF7L)), 0x8BL)));
            if (((safe_add_func_int8_t_s_s((!l_43), 0xADL)) || ((safe_mul_func_int16_t_s_s(0L, 0x781FL)) && p_14.f0)))
            { 
                int64_t l_140[4][1][5] = {{{(-4L),0x1337086DD7F6879DLL,5L,(-4L),(-4L)}},{{0x1337086DD7F6879DLL,0L,0x1337086DD7F6879DLL,5L,(-4L)}},{{0L,0x8ED449775BFFDC48LL,(-4L),0x8ED449775BFFDC48LL,0L}},{{0x1337086DD7F6879DLL,0x8ED449775BFFDC48LL,0L,0L,0L}}};
                int32_t l_145 = 0x92C45C1CL;
                uint16_t l_147 = 4UL;
                int i, j, k;
                l_143 &= (safe_sub_func_int32_t_s_s(g_44[0][0][2], (safe_rshift_func_uint16_t_u_u(p_14.f0, ((l_140[2][0][4] , ((safe_add_func_int8_t_s_s(g_4[0], 0x4DL)) && 0x75L)) && (-8L))))));
                --l_147;
            }
            else
            { 
                return l_150;
            }
            --l_159;
        }
    }
    --l_165;
    return l_150;
}



static union U2  func_24(struct S1  p_25, uint32_t  p_26)
{ 
    uint8_t l_30 = 248UL;
    const uint8_t l_33[3] = {8UL,8UL,8UL};
    int8_t l_34[1][3];
    int32_t l_35 = 0x49F0DC4BL;
    int32_t l_36[4][1][5] = {{{0L,0x74F9AF39L,0x74F9AF39L,0L,0L}},{{1L,(-4L),1L,(-4L),1L}},{{0L,0L,0x74F9AF39L,0x74F9AF39L,0L}},{{0L,(-4L),0L,(-4L),0L}}};
    union U2 l_37[3] = {{0UL},{0UL},{0UL}};
    int i, j, k;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 3; j++)
            l_34[i][j] = 8L;
    }
    l_36[3][0][1] = (((l_35 = (((safe_div_func_uint64_t_u_u((l_30 ^ 0x5257L), (safe_div_func_int16_t_s_s(((((((g_4[0] || (0UL ^ g_16[1])) | g_15.f0) && g_4[1]) >= g_16[3]) > l_30) < l_33[2]), l_33[2])))) >= g_4[1]) || l_34[0][0])) < g_4[0]) && (-10L));
    return l_37[0];
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_4[i], "g_4[i]", print_hash_value);

    }
    transparent_crc(g_15.f0, "g_15.f0", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_16[i], "g_16[i]", print_hash_value);

    }
    transparent_crc(g_20, "g_20", print_hash_value);
    transparent_crc(g_21, "g_21", print_hash_value);
    transparent_crc(g_38.f0, "g_38.f0", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 4; k++)
            {
                transparent_crc(g_44[i][j][k], "g_44[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_55, "g_55", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_66[i].f0, "g_66[i].f0", print_hash_value);

    }
    transparent_crc(g_67, "g_67", print_hash_value);
    transparent_crc(g_208, "g_208", print_hash_value);
    transparent_crc(g_218, "g_218", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
