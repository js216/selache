// SPDX-License-Identifier: MIT
// cctest_csmith_0ad4691a.c --- cctest case csmith_0ad4691a (csmith seed 181692698)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x3592c76c */

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

// Options:   -s 181692698 -o /tmp/csmith_gen_pt31ty08/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


#pragma pack(push)
#pragma pack(1)
struct S0 {
   const uint32_t  f0;
   uint32_t  f1;
   int32_t  f2;
   int32_t  f3;
};
#pragma pack(pop)

union U1 {
   const uint32_t  f0;
   struct S0  f1;
   uint32_t  f2;
};

union U2 {
   uint8_t  f0;
   struct S0  f1;
   int32_t  f2;
   const struct S0  f3;
};


static int8_t g_7 = 0x25L;
static int64_t g_8 = 1L;
static int32_t g_9 = 1L;
static int8_t g_13 = 0xF9L;
static uint8_t g_14 = 0x9EL;
static int64_t g_21[4][5][4] = {{{0L,0x0CE404D4644688D2LL,0x416C28CBD6CD5387LL,0x0CE404D4644688D2LL},{0xEA3DE81D534A2C93LL,0x5540FFF06982B357LL,0xD3624B6749EFEDEDLL,0xF9611CA4B38B4B72LL},{9L,6L,0L,9L},{0L,0x9BE99B96BC712BADLL,9L,9L},{0L,5L,0L,0L}},{{9L,9L,0xD3624B6749EFEDEDLL,0xB430688CDF2AB2BCLL},{0xEA3DE81D534A2C93LL,0xD3624B6749EFEDEDLL,0x416C28CBD6CD5387LL,0x5540FFF06982B357LL},{0L,0L,0L,0x416C28CBD6CD5387LL},{0x416C28CBD6CD5387LL,0L,9L,0x5540FFF06982B357LL},{0L,0xD3624B6749EFEDEDLL,0L,0xB430688CDF2AB2BCLL}},{{5L,9L,6L,0L},{0xF9611CA4B38B4B72LL,5L,5L,0x416C28CBD6CD5387LL},{0xF9611CA4B38B4B72LL,0L,5L,0L},{0xEA3DE81D534A2C93LL,0L,0L,0xEA3DE81D534A2C93LL},{6L,0xF9611CA4B38B4B72LL,0L,9L}},{{0L,9L,0x416C28CBD6CD5387LL,0L},{0x5540FFF06982B357LL,0x0CE404D4644688D2LL,9L,0L},{0L,9L,0x5540FFF06982B357LL,9L},{0xB430688CDF2AB2BCLL,0xF9611CA4B38B4B72LL,0x9BE99B96BC712BADLL,0xEA3DE81D534A2C93LL},{0x416C28CBD6CD5387LL,0L,0L,0L}}};
static uint16_t g_22 = 0xADE4L;
static int32_t g_29 = 9L;
static union U2 g_44 = {0x08L};
static int32_t g_73 = (-5L);
static uint8_t g_75 = 0x23L;
static int32_t g_81 = 0xB4341910L;
static uint16_t g_83 = 0x9C02L;
static uint32_t g_123 = 0x786D11A3L;
static struct S0 g_124 = {1UL,0UL,-1L,-6L};
static uint8_t g_140 = 0x26L;
static union U1 g_161 = {0UL};
static int32_t g_162[1] = {0xAD9904AAL};
static int16_t g_171 = 0L;
static int8_t g_268[3] = {0x52L,0x52L,0x52L};



static int8_t  func_1(void);
static int16_t  func_39(union U2  p_40, uint64_t  p_41, int16_t  p_42, struct S0  p_43);
static uint64_t  func_45(const int32_t  p_46);
static int16_t  func_52(uint32_t  p_53, int8_t  p_54);




static int8_t  func_1(void)
{ 
    int32_t l_4 = (-1L);
    int32_t l_5 = (-2L);
    int32_t l_6 = 0x4837182AL;
    int32_t l_10 = 0x40F2FDADL;
    int64_t l_11[2][5][4] = {{{(-6L),1L,1L,(-6L)},{1L,(-6L),0xE434392F20920A6FLL,0x1A652065C829ED89LL},{1L,0xE434392F20920A6FLL,1L,0x807383CC47D1AFD0LL},{(-6L),0x1A652065C829ED89LL,0x807383CC47D1AFD0LL,0x807383CC47D1AFD0LL},{0xE434392F20920A6FLL,0xE434392F20920A6FLL,0x479B69B2E4145C17LL,0x1A652065C829ED89LL}},{{0x1A652065C829ED89LL,(-6L),0x479B69B2E4145C17LL,(-6L)},{0xE434392F20920A6FLL,1L,0x807383CC47D1AFD0LL,0x479B69B2E4145C17LL},{(-6L),1L,1L,(-6L)},{1L,(-6L),0xE434392F20920A6FLL,0x1A652065C829ED89LL},{1L,0xE434392F20920A6FLL,1L,0x807383CC47D1AFD0LL}}};
    int32_t l_12 = 0xDD635290L;
    int i, j, k;
    l_5 = (l_4 = (safe_lshift_func_uint8_t_u_u(l_4, 5)));
    ++g_14;
    for (l_5 = (-3); (l_5 >= (-15)); l_5 = safe_sub_func_int16_t_s_s(l_5, 4))
    { 
        const uint32_t l_47 = 18446744073709551615UL;
        const int32_t l_297 = 0xDE3C59E3L;
        for (l_4 = (-4); (l_4 >= (-1)); l_4++)
        { 
            uint32_t l_30 = 0UL;
            int32_t l_298 = 0L;
            --g_22;
            l_6 = (safe_div_func_uint8_t_u_u((safe_add_func_uint32_t_u_u((l_30--), (safe_lshift_func_int16_t_s_s((((safe_sub_func_uint32_t_u_u(((0x1111919B17C08A59LL == ((safe_rshift_func_uint16_t_u_s(l_11[1][3][0], func_39(g_44, (func_45(l_47) , l_11[1][2][3]), l_10, g_124))) & l_297)) & l_298), 4294967288UL)) , l_297) <= 1L), l_297)))), g_124.f1));
        }
        l_6 = ((g_22 = 0xC5C2L) & 6UL);
    }
    return g_124.f1;
}



static int16_t  func_39(union U2  p_40, uint64_t  p_41, int16_t  p_42, struct S0  p_43)
{ 
    uint32_t l_269[3];
    int32_t l_278[3];
    uint32_t l_292 = 0xC9FA7D3CL;
    int32_t l_293[2];
    int32_t l_294 = 0x0B53C1BFL;
    int i;
    for (i = 0; i < 3; i++)
        l_269[i] = 0x2462F065L;
    for (i = 0; i < 3; i++)
        l_278[i] = 3L;
    for (i = 0; i < 2; i++)
        l_293[i] = 0x1646E610L;
    for (p_40.f2 = 0; (p_40.f2 >= 0); p_40.f2 -= 1)
    { 
        int i;
        l_269[2]--;
        p_43.f2 |= ((((safe_mod_func_int16_t_s_s(((((-5L) && ((safe_div_func_int32_t_s_s((safe_mod_func_uint8_t_u_u(((g_162[p_40.f2] & (((-4L) != 0x3E400F40L) > g_162[p_40.f2])) | g_162[p_40.f2]), g_162[p_40.f2])), g_268[(p_40.f2 + 1)])) == 0xE2L)) ^ g_8) < 0x6AAEAA36L), g_162[p_40.f2])) > l_269[2]) <= p_41) | g_7);
        l_278[2] = p_43.f0;
    }
    l_294 = (l_293[0] |= (safe_lshift_func_int8_t_s_u((l_278[2] = (~(p_40.f2 = ((safe_add_func_int32_t_s_s(((p_43.f2 = ((safe_add_func_int16_t_s_s(0xEB36L, l_278[0])) >= (safe_div_func_int64_t_s_s((safe_mul_func_uint8_t_u_u(((safe_sub_func_uint64_t_u_u(((g_83 |= l_292) & (p_42 = (0xAEE3016BB01C63E1LL == g_124.f1))), g_8)) , l_278[2]), 255UL)), p_43.f2)))) == g_171), g_268[1])) == 0xA043L)))), l_269[2])));
    for (p_40.f1.f1 = 24; (p_40.f1.f1 == 10); p_40.f1.f1 = safe_sub_func_int32_t_s_s(p_40.f1.f1, 3))
    { 
        if (p_43.f1)
            break;
        p_43.f2 = l_293[1];
        if (g_162[0])
            continue;
    }
    return p_43.f1;
}



static uint64_t  func_45(const int32_t  p_46)
{ 
    uint32_t l_48[3][5] = {{4294967295UL,4294967295UL,4294967295UL,4294967295UL,4294967295UL},{0UL,0UL,0UL,0UL,0UL},{4294967295UL,4294967295UL,4294967295UL,4294967295UL,4294967295UL}};
    int32_t l_49 = 0xC9F93B76L;
    int i, j;
    l_48[2][0] |= p_46;
    l_49 |= 0xD6AEAB66L;
    g_268[2] &= (safe_sub_func_uint8_t_u_u((((func_52((safe_mul_func_uint8_t_u_u((((safe_div_func_int16_t_s_s(0x5EA9L, (safe_mod_func_uint16_t_u_u(p_46, (safe_sub_func_int32_t_s_s((safe_div_func_uint8_t_u_u(((safe_mul_func_uint8_t_u_u(g_7, (safe_mod_func_uint16_t_u_u(((+(0xD953L | g_8)) > g_8), g_29)))) < 0xC0L), p_46)), 0xCE951834L)))))) >= p_46) & 0xA0E68526L), 0xE2L)), p_46) && l_48[1][1]) < 0xCDA13B45L) && l_48[2][0]), 1UL));
    return l_48[2][0];
}



static int16_t  func_52(uint32_t  p_53, int8_t  p_54)
{ 
    int8_t l_72 = (-9L);
    int32_t l_74 = (-1L);
    int32_t l_80[5][5] = {{0x4C01D5BCL,0x4C01D5BCL,0x68DE677DL,0x4C01D5BCL,0x4C01D5BCL},{(-1L),0x4C01D5BCL,(-1L),(-1L),0x4C01D5BCL},{0x4C01D5BCL,(-1L),(-1L),0x4C01D5BCL,(-1L)},{0x4C01D5BCL,0x4C01D5BCL,0x68DE677DL,0x4C01D5BCL,0x4C01D5BCL},{(-1L),0x4C01D5BCL,(-1L),(-1L),0x4C01D5BCL}};
    uint8_t l_98 = 9UL;
    uint64_t l_156[4][3] = {{0x7F9DC645B2A3AAEDLL,0x7F9DC645B2A3AAEDLL,0x7F9DC645B2A3AAEDLL},{18446744073709551610UL,18446744073709551610UL,18446744073709551610UL},{0x7F9DC645B2A3AAEDLL,0x7F9DC645B2A3AAEDLL,0x7F9DC645B2A3AAEDLL},{18446744073709551610UL,18446744073709551610UL,18446744073709551610UL}};
    int64_t l_200 = 0L;
    union U2 l_209[5] = {{1UL},{1UL},{1UL},{1UL},{1UL}};
    int64_t l_211 = (-10L);
    int i, j;
    if ((safe_rshift_func_int16_t_s_s(((++g_75) | ((l_74 || (p_54 > p_54)) <= (((((g_13 , 0xAEFFL) != g_9) || p_54) , 0x6CL) , 3UL))), g_44.f0)))
    { 
        uint32_t l_78 = 0xFA8ABF26L;
        int32_t l_79 = (-7L);
        int32_t l_82 = 0x1515025BL;
        uint64_t l_139 = 0xC3F70368F862678ALL;
        if ((g_8 , l_78))
        { 
            uint32_t l_99[3];
            int32_t l_100 = 5L;
            struct S0 l_101 = {6UL,4UL,0x8613E184L,0x182F7292L};
            int i;
            for (i = 0; i < 3; i++)
                l_99[i] = 18446744073709551615UL;
            g_83++;
            l_74 |= (((safe_sub_func_uint16_t_u_u((safe_div_func_int32_t_s_s((safe_div_func_uint32_t_u_u((safe_div_func_int64_t_s_s((p_54 != (l_99[1] &= (safe_rshift_func_uint16_t_u_s((safe_rshift_func_int8_t_s_u(g_9, (0UL ^ p_54))), l_98)))), p_54)), l_100)), g_44.f0)), 5L)) , g_9) , l_78);
            l_79 &= (l_101.f2 = ((18446744073709551615UL <= (0x21F8E690L | (l_101 , (l_74 = l_101.f3)))) > l_78));
        }
        else
        { 
            uint8_t l_111 = 1UL;
            l_111 ^= ((p_54 <= (safe_lshift_func_int16_t_s_s(((l_79 = ((((p_54 ^ (0L != (safe_sub_func_uint8_t_u_u((((safe_add_func_int32_t_s_s((safe_unary_minus_func_int16_t_s((safe_mul_func_int8_t_s_s(0x8EL, l_80[4][1])))), 0x135CAF2BL)) , 1L) , l_82), l_98)))) != 0x5AE12EA524B17E4CLL) < p_54) || 0x0B7D5E36264D6F6CLL)) == p_54), 3))) >= 6UL);
        }
        if ((((safe_lshift_func_int16_t_s_u(((safe_lshift_func_int16_t_s_u(0x690CL, 2)) , (0L & (3UL != g_73))), l_72)) == g_14) && 0xEEL))
        { 
            uint64_t l_122 = 0xB92564D233DB8BB0LL;
            if (((((safe_lshift_func_uint8_t_u_s((safe_sub_func_int16_t_s_s((g_123 = l_122), (p_54 <= (g_9 , (g_124 , 5UL))))), 7)) || g_7) ^ l_82) >= l_122))
            { 
                uint64_t l_129 = 0x716A1B7C33EA39AELL;
                g_29 = (0x48D7L | (safe_add_func_uint16_t_u_u(l_122, (l_74 = p_53))));
                g_9 = ((safe_add_func_int32_t_s_s(l_72, l_129)) | g_14);
            }
            else
            { 
                struct S0 l_138[3] = {{0UL,0xBDA4C5B4L,-2L,1L},{0UL,0xBDA4C5B4L,-2L,1L},{0UL,0xBDA4C5B4L,-2L,1L}};
                int i;
                l_82 ^= ((l_74 && ((g_14 != (((safe_mul_func_int16_t_s_s((safe_rshift_func_int8_t_s_s((safe_div_func_int16_t_s_s((safe_rshift_func_int8_t_s_u((l_138[1] , g_29), g_81)), p_54)), 3)), p_53)) , l_122) != g_22)) || 0x37D706139C8B3FF4LL)) > l_139);
                return p_54;
            }
            g_140++;
        }
        else
        { 
            if (l_74)
            { 
                g_29 ^= g_44.f0;
                return l_78;
            }
            else
            { 
                return g_8;
            }
        }
    }
    else
    { 
        int64_t l_145 = 1L;
        uint32_t l_182 = 0xEEA5D277L;
        int32_t l_189 = 0x6BE4A3EBL;
        int64_t l_190 = 1L;
        uint8_t l_197 = 0x50L;
        int32_t l_212 = 0L;
        const uint32_t l_213 = 0xBA217E51L;
        int32_t l_227 = 0x29261D21L;
        int32_t l_230 = 4L;
        int32_t l_231 = 1L;
        int32_t l_232 = 0x81A398CDL;
        int32_t l_233 = 1L;
        if ((safe_div_func_int16_t_s_s(5L, l_145)))
        { 
            uint32_t l_150[5];
            union U1 l_155 = {9UL};
            int64_t l_163 = (-1L);
            int32_t l_172[4] = {0xE86D8666L,0xE86D8666L,0xE86D8666L,0xE86D8666L};
            int i;
            for (i = 0; i < 5; i++)
                l_150[i] = 0xE3867A30L;
            g_29 ^= (safe_div_func_int8_t_s_s((0L <= (safe_mul_func_uint16_t_u_u(0x4B64L, l_150[4]))), (safe_mul_func_int16_t_s_s((safe_mul_func_uint16_t_u_u((l_155 , 0x62BCL), 0xB8CCL)), l_156[2][0]))));
            l_163 ^= (safe_mod_func_uint16_t_u_u(((g_162[0] = ((safe_div_func_uint16_t_u_u((((9L >= (l_145 > (g_9 == ((((g_161 , g_14) >= 0x1C975FB2L) | g_124.f0) != 0xA569L)))) || p_53) != 0x13D9L), l_145)) && (-10L))) , 65527UL), g_124.f2));
            for (g_81 = (-4); (g_81 <= 17); g_81 = safe_add_func_uint8_t_u_u(g_81, 5))
            { 
                l_172[1] = (0xDCC57996L >= (safe_sub_func_int32_t_s_s((+(safe_add_func_uint64_t_u_u((g_171 |= (0x6BD7L || 0x3CA1L)), g_29))), 0x8BFE20E5L)));
                if (g_8)
                    break;
                l_155.f1.f2 = ((255UL != (safe_add_func_uint64_t_u_u((((safe_mul_func_int8_t_s_s(((safe_lshift_func_uint8_t_u_u((+p_54), 5)) , ((safe_lshift_func_int16_t_s_u(g_14, 15)) , l_150[2])), l_172[1])) && l_172[2]) , 0UL), l_80[2][3]))) && g_162[0]);
            }
        }
        else
        { 
            return g_124.f0;
        }
        if ((g_124.f3 <= ((l_182 | ((0x792C5CF5L >= (safe_sub_func_int64_t_s_s(((safe_div_func_uint32_t_u_u((((safe_div_func_uint8_t_u_u((l_74 &= ((((l_189 = g_8) | l_145) || 1UL) > l_190)), g_29)) | p_54) != l_182), g_124.f3)) == g_124.f0), g_124.f1))) ^ l_182)) < g_29)))
        { 
            const uint64_t l_214 = 0x28DDFECA67439DE1LL;
            int32_t l_215[3][5] = {{(-7L),(-7L),(-7L),(-7L),(-7L)},{(-3L),(-3L),(-3L),(-3L),(-3L)},{(-7L),(-7L),(-7L),(-7L),(-7L)}};
            int32_t l_225[5];
            uint32_t l_234 = 5UL;
            int i, j;
            for (i = 0; i < 5; i++)
                l_225[i] = 9L;
            if ((safe_div_func_uint64_t_u_u(g_162[0], (safe_mul_func_int16_t_s_s((safe_sub_func_int8_t_s_s(p_54, l_197)), ((g_140 = (l_189 = (safe_rshift_func_uint16_t_u_u(l_200, 2)))) != 248UL))))))
            { 
                int32_t l_210[5];
                int i;
                for (i = 0; i < 5; i++)
                    l_210[i] = 0L;
                g_161.f1.f2 = (l_215[2][1] ^= (safe_sub_func_uint32_t_u_u((((((p_54 || ((safe_mul_func_uint8_t_u_u((0x3CL < (((l_212 = (((((l_189 = (safe_div_func_uint8_t_u_u((l_210[4] = (safe_add_func_uint64_t_u_u((l_209[4] , l_182), g_124.f1))), l_156[0][2]))) > l_211) | p_53) && p_54) & p_54)) >= g_124.f1) <= g_73)), p_53)) & 0x7DD7L)) && 0xCCD91B382BD8845DLL) , p_54) > l_213) , l_214), 0UL)));
            }
            else
            { 
                uint8_t l_217 = 0xBFL;
                int32_t l_226 = 0L;
                int32_t l_228 = 0x90F008C3L;
                int32_t l_229[4][5] = {{0L,0xA9D1D7C4L,1L,0L,1L},{0L,0L,(-1L),0x0A6EAA2CL,0x9542E103L},{0x1FD32157L,0x9542E103L,1L,1L,0x9542E103L},{0x9542E103L,0xA9D1D7C4L,0x1FD32157L,0x9542E103L,1L}};
                int i, j;
                l_209[4].f1.f2 = (0xD2L > (p_54 < (((+((l_212 = l_217) >= (safe_rshift_func_int8_t_s_u((0xAFCDL != 0xA41DL), 0)))) , l_212) && 0xD92CAEC0E49BB206LL)));
                l_225[3] = (l_215[2][1] = ((safe_unary_minus_func_uint64_t_u((safe_add_func_uint8_t_u_u((safe_sub_func_int64_t_s_s(p_54, 18446744073709551615UL)), g_124.f3)))) , ((p_54 >= g_14) <= p_54)));
                --l_234;
            }
        }
        else
        { 
            int16_t l_256 = 0x7139L;
            int32_t l_267[3][3][2] = {{{(-1L),0xAC0D8A3BL},{(-1L),(-1L)},{0xAC0D8A3BL,0x52A3D07EL}},{{0xAC0D8A3BL,(-1L)},{(-1L),0xAC0D8A3BL},{(-1L),0x52A3D07EL}},{{(-7L),(-7L)},{(-7L),(-1L)},{(-1L),0x52146C8CL}}};
            int i, j, k;
            for (g_29 = 0; (g_29 > 13); g_29 = safe_add_func_int16_t_s_s(g_29, 8))
            { 
                g_9 ^= ((~((safe_add_func_uint16_t_u_u((safe_mul_func_uint16_t_u_u((g_83++), (p_53 > (l_189 &= ((p_54 ^ ((((l_232 = (p_53 ^ ((((safe_rshift_func_uint16_t_u_u(65535UL, 0)) && 0xF6C5L) < 0UL) == g_124.f2))) & g_81) || 0x77L) == l_80[4][1])) || g_124.f1))))), 5L)) , 0xC75B22A6EC6CEE44LL)) > 0x14L);
            }
            for (l_233 = 0; (l_233 < (-3)); l_233--)
            { 
                int32_t l_257 = (-1L);
                l_257 = (safe_div_func_uint32_t_u_u((safe_add_func_int8_t_s_s((l_74 = ((safe_rshift_func_uint16_t_u_s(g_9, 10)) & l_256)), (-2L))), g_14));
                g_161.f1.f2 = 0L;
                l_267[1][2][1] = (safe_lshift_func_uint16_t_u_s(p_53, ((~g_9) || (safe_mod_func_int8_t_s_s((g_13 = (p_54 = (safe_add_func_uint32_t_u_u(((safe_rshift_func_uint16_t_u_u(0UL, l_256)) != 0xBAL), p_53)))), 0x40L)))));
            }
        }
    }
    l_74 = l_156[2][1];
    return p_54;
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_7, "g_7", print_hash_value);
    transparent_crc(g_8, "g_8", print_hash_value);
    transparent_crc(g_9, "g_9", print_hash_value);
    transparent_crc(g_13, "g_13", print_hash_value);
    transparent_crc(g_14, "g_14", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 5; j++)
        {
            for (k = 0; k < 4; k++)
            {
                transparent_crc(g_21[i][j][k], "g_21[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_22, "g_22", print_hash_value);
    transparent_crc(g_29, "g_29", print_hash_value);
    transparent_crc(g_44.f0, "g_44.f0", print_hash_value);
    transparent_crc(g_73, "g_73", print_hash_value);
    transparent_crc(g_75, "g_75", print_hash_value);
    transparent_crc(g_81, "g_81", print_hash_value);
    transparent_crc(g_83, "g_83", print_hash_value);
    transparent_crc(g_123, "g_123", print_hash_value);
    transparent_crc(g_124.f0, "g_124.f0", print_hash_value);
    transparent_crc(g_124.f1, "g_124.f1", print_hash_value);
    transparent_crc(g_124.f2, "g_124.f2", print_hash_value);
    transparent_crc(g_124.f3, "g_124.f3", print_hash_value);
    transparent_crc(g_140, "g_140", print_hash_value);
    transparent_crc(g_161.f0, "g_161.f0", print_hash_value);
    transparent_crc(g_161.f2, "g_161.f2", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_162[i], "g_162[i]", print_hash_value);

    }
    transparent_crc(g_171, "g_171", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_268[i], "g_268[i]", print_hash_value);

    }
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
