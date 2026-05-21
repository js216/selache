// SPDX-License-Identifier: MIT
// cctest_csmith_5311a4f2.c --- cctest case csmith_5311a4f2 (csmith seed 1393665266)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x19ffb860 */

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

// Options:   -s 1393665266 -o /tmp/csmith_gen_tnfjqyh8/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


#pragma pack(push)
#pragma pack(1)
struct S1 {
   const uint64_t  f0;
   int32_t  f1;
   int16_t  f2;
};
#pragma pack(pop)

union U2 {
   uint64_t  f0;
   uint64_t  f1;
};

struct S0 {
   const int16_t  f0;
   int16_t  f1;
   int16_t  f2;
   uint32_t  f3;
   uint8_t  f4;
   const uint32_t  f5;
};

union U3 {
   uint8_t  f0;
   const uint64_t  f1;
   int16_t  f2;
   struct S0  f3;
};

union U4 {
   int32_t  f0;
   uint16_t  f1;
   struct S0  f2;
   uint32_t  f3;
};


static int32_t g_2 = 0x66E58D02L;
static int64_t g_17 = 0xA52B4B5A9CEA445ALL;
static int32_t g_26 = 0xBA9A9843L;
static int8_t g_28 = 0x67L;
static uint16_t g_29 = 0x52DDL;
static int8_t g_69[1][2][2] = {{{0x58L,0x58L},{0x58L,0x58L}}};
static int32_t g_106[3][2][1] = {{{0L},{(-6L)}},{{0L},{(-6L)}},{{0L},{(-6L)}}};
static uint64_t g_174 = 18446744073709551613UL;
static struct S1 g_176[2] = {{0x669DCB87100DB346LL,0L,0x59CFL},{0x669DCB87100DB346LL,0L,0x59CFL}};
static int16_t g_185 = (-1L);
static uint8_t g_203[2] = {8UL,8UL};
static union U3 g_209 = {0xFFL};
static union U4 g_229 = {-6L};
static int16_t g_252 = 2L;
static uint16_t g_295 = 3UL;
static union U2 g_347 = {0x81312F68C6C8EE47LL};



static uint16_t  func_1(void);
static int32_t  func_6(int32_t  p_7, struct S1  p_8, int8_t  p_9);
static struct S1  func_10(int8_t  p_11, uint32_t  p_12, int16_t  p_13, int32_t  p_14, const int32_t  p_15);
static int64_t  func_24(int32_t  p_25);




static uint16_t  func_1(void)
{ 
    int16_t l_5 = 0xE1F6L;
    int32_t l_250[2];
    int32_t l_297 = (-1L);
    uint32_t l_299[1][5][5] = {{{0UL,18446744073709551609UL,18446744073709551609UL,0UL,18446744073709551609UL},{0UL,0UL,9UL,0UL,0UL},{18446744073709551609UL,0UL,18446744073709551609UL,18446744073709551609UL,0UL},{0UL,18446744073709551609UL,18446744073709551609UL,0UL,18446744073709551609UL},{0UL,0UL,9UL,0UL,0UL}}};
    uint32_t l_300 = 0x2DC1FB82L;
    uint16_t l_343 = 0xA4E5L;
    int i, j, k;
    for (i = 0; i < 2; i++)
        l_250[i] = 0x69E2DF59L;
    for (g_2 = (-3); (g_2 > (-13)); --g_2)
    { 
        int8_t l_231 = 0x7BL;
        int32_t l_251 = (-8L);
        uint32_t l_327 = 0UL;
        int32_t l_333 = 8L;
        int32_t l_334 = 0x5C3BC544L;
        union U2 l_346 = {2UL};
        if (g_2)
            break;
        if (l_5)
        { 
            const int32_t l_16 = 0x2314AF12L;
            int32_t l_18 = 7L;
            const int32_t l_246 = (-1L);
            if (func_6(l_5, func_10((l_16 & 0x3A0F0F5EBEC5EC62LL), (l_18 &= (g_17 > l_5)), g_2, g_2, l_16), g_2))
            { 
                int8_t l_232 = 0x23L;
                int32_t l_239 = 0xF0ED1FF2L;
                l_232 = l_231;
                l_239 ^= ((g_185 || g_17) <= (0UL & (safe_div_func_int8_t_s_s((safe_add_func_int64_t_s_s(((((safe_rshift_func_int16_t_s_u(((g_28 |= 0x15L) || g_106[1][0][0]), l_231)) == 0L) > l_18) != g_174), 0x541395CBCBC71E50LL)), (-1L)))));
            }
            else
            { 
                uint32_t l_243 = 0x60097F2BL;
                int32_t l_247 = 0x59240901L;
                g_106[0][0][0] = (l_247 ^= ((safe_div_func_uint16_t_u_u((g_203[1] > (((!((l_18 && (l_243++)) >= (-2L))) , g_29) <= g_17)), l_246)) | g_176[0].f2));
                l_250[1] = (safe_add_func_int8_t_s_s((1L || (0x8F6AL | l_18)), ((g_209.f0 != 1L) >= l_246)));
            }
        }
        else
        { 
            uint32_t l_253 = 1UL;
            l_253++;
            g_106[1][0][0] = ((((l_251 = ((safe_rshift_func_int8_t_s_s((safe_div_func_int8_t_s_s((safe_div_func_uint8_t_u_u(l_250[1], (safe_unary_minus_func_int64_t_s(((safe_div_func_int64_t_s_s((g_17 = (safe_sub_func_uint16_t_u_u((safe_rshift_func_uint8_t_u_u(l_5, 3)), (l_231 & l_231)))), g_229.f3)) || l_250[0]))))), l_251)), g_229.f3)) && 0xC8A69FFDL)) , 18446744073709551610UL) >= g_26) < g_176[0].f0);
        }
        for (g_29 = 0; (g_29 < 28); ++g_29)
        { 
            uint16_t l_293 = 0x7626L;
            uint8_t l_294 = 0xA1L;
            int64_t l_318 = 0x88BF6269E7D40DAFLL;
            int32_t l_319 = 0x16ACC421L;
            int32_t l_322 = 0xB6A7BBCEL;
            int32_t l_325 = (-1L);
            int32_t l_326 = 0xB05BCD61L;
            if ((safe_mod_func_int32_t_s_s(1L, g_176[0].f2)))
            { 
                int32_t l_288 = 1L;
                int32_t l_296 = 0L;
                int32_t l_298 = 0L;
                g_106[1][0][0] = ((((safe_add_func_int16_t_s_s((safe_mod_func_int8_t_s_s(((!((((((g_29 == (l_296 = (((safe_rshift_func_uint16_t_u_u(((safe_rshift_func_int16_t_s_s(((safe_sub_func_int64_t_s_s((safe_mul_func_int16_t_s_s((safe_mul_func_int8_t_s_s(l_288, (safe_mul_func_uint8_t_u_u((safe_mul_func_int16_t_s_s((g_26 >= g_29), l_293)), l_294)))), g_229.f1)), g_185)) <= g_69[0][0][0]), g_229.f3)) , g_176[0].f2), 5)) ^ g_295) & 1L))) || g_229.f0) <= l_297) <= l_298) >= g_203[0]) > g_229.f3)) & l_299[0][1][3]), g_69[0][0][0])), l_293)) | 0UL) , g_174) != l_300);
            }
            else
            { 
                g_106[1][0][0] ^= (g_229 , 0L);
                if (g_203[1])
                    continue;
            }
            if ((l_319 = ((g_106[1][0][0] && (safe_mod_func_int8_t_s_s(((safe_lshift_func_int16_t_s_u(((safe_add_func_int8_t_s_s((safe_add_func_int64_t_s_s((safe_add_func_int16_t_s_s((safe_sub_func_uint8_t_u_u(((safe_mul_func_int16_t_s_s(l_231, g_209.f0)) || (safe_mul_func_int16_t_s_s((!((l_251 &= ((249UL && l_294) == l_318)) <= 0xF1L)), 6L))), g_295)), (-1L))), g_229.f3)), 0xEAL)) , l_251), l_294)) && l_300), 247UL))) == g_69[0][0][0])))
            { 
                int32_t l_320 = 0x2ACE5422L;
                int32_t l_321 = 0L;
                int32_t l_323 = 0xD36743CCL;
                int32_t l_324 = 0x6399FE30L;
                int32_t l_332 = 0L;
                l_327++;
                l_333 ^= ((l_251 || l_318) >= (g_229.f3 ^ (safe_mod_func_uint32_t_u_u(l_332, g_174))));
            }
            else
            { 
                uint32_t l_335 = 0xC85C1D92L;
                l_335--;
                l_322 = (~g_229.f3);
                g_106[1][0][0] = l_335;
            }
            g_106[2][1][0] = (safe_mul_func_int16_t_s_s(((g_209 , (safe_rshift_func_uint16_t_u_u(l_343, ((((safe_add_func_int32_t_s_s(g_17, ((((g_347 = l_346) , 1UL) ^ g_176[0].f1) || 0xE95A3DFF51BFF649LL))) , 0xBA29A52E5F916052LL) & g_229.f0) > g_185)))) > g_203[1]), 0x2699L));
        }
    }
    return g_176[0].f2;
}



static int32_t  func_6(int32_t  p_7, struct S1  p_8, int8_t  p_9)
{ 
    int16_t l_214 = 1L;
    int32_t l_215 = 0L;
    int64_t l_230[5] = {(-1L),(-1L),(-1L),(-1L),(-1L)};
    int i;
    l_215 = (safe_mul_func_int8_t_s_s((p_8 , ((g_209 , (safe_add_func_uint32_t_u_u((0x6CL | ((l_214 |= (p_9 = (safe_lshift_func_uint16_t_u_u(0x8522L, 9)))) <= g_174)), p_8.f0))) != 0x7F87ACA667C51289LL)), p_7));
    for (g_209.f0 = 0; (g_209.f0 >= 8); g_209.f0 = safe_add_func_int8_t_s_s(g_209.f0, 7))
    { 
        const int64_t l_228 = 0L;
        p_7 = (safe_div_func_uint16_t_u_u((((g_17 && (safe_add_func_uint64_t_u_u((safe_mod_func_int8_t_s_s(((safe_mul_func_int16_t_s_s(g_28, (safe_lshift_func_uint16_t_u_u(l_214, 9)))) , 0x66L), l_228)), p_8.f1))) ^ 0xCF1EF60FL) , l_215), 65535UL));
    }
    g_106[1][0][0] = (g_229 , g_176[0].f0);
    return l_230[1];
}



static struct S1  func_10(int8_t  p_11, uint32_t  p_12, int16_t  p_13, int32_t  p_14, const int32_t  p_15)
{ 
    int8_t l_23 = 0x44L;
    int32_t l_27 = 0x8670FC24L;
    int32_t l_47 = 1L;
    int32_t l_48 = 0xBB6AF833L;
    int32_t l_49 = 0xA56CF6D7L;
    uint8_t l_161 = 1UL;
    uint32_t l_170 = 0x1F905A64L;
    union U2 l_173 = {0xCB9547BAECA1BBDALL};
    struct S1 l_206[3][5][1] = {{{{0x10CE32B38B3E4906LL,0x8F02CE6AL,9L}},{{0x10CE32B38B3E4906LL,0x8F02CE6AL,9L}},{{0x10CE32B38B3E4906LL,0x8F02CE6AL,9L}},{{0x10CE32B38B3E4906LL,0x8F02CE6AL,9L}},{{0x10CE32B38B3E4906LL,0x8F02CE6AL,9L}}},{{{0x10CE32B38B3E4906LL,0x8F02CE6AL,9L}},{{0x10CE32B38B3E4906LL,0x8F02CE6AL,9L}},{{0x10CE32B38B3E4906LL,0x8F02CE6AL,9L}},{{0x10CE32B38B3E4906LL,0x8F02CE6AL,9L}},{{0x10CE32B38B3E4906LL,0x8F02CE6AL,9L}}},{{{0x10CE32B38B3E4906LL,0x8F02CE6AL,9L}},{{0x10CE32B38B3E4906LL,0x8F02CE6AL,9L}},{{0x10CE32B38B3E4906LL,0x8F02CE6AL,9L}},{{0x10CE32B38B3E4906LL,0x8F02CE6AL,9L}},{{0x10CE32B38B3E4906LL,0x8F02CE6AL,9L}}}};
    int i, j, k;
    g_106[1][1][0] = ((safe_mul_func_uint16_t_u_u((safe_sub_func_uint16_t_u_u(g_17, l_23)), (func_24((l_49 = ((g_29++) < (safe_mul_func_int8_t_s_s(((l_27 = 0xF433C8A0C0902002LL) != (safe_sub_func_uint16_t_u_u(((p_13 = ((l_48 = (l_47 = (p_11 ^= (safe_mul_func_int16_t_s_s((safe_add_func_uint64_t_u_u((safe_add_func_uint16_t_u_u((safe_sub_func_int8_t_s_s((safe_rshift_func_int8_t_s_s(((!((0x3D58E56AL <= g_17) >= g_26)) != g_26), 1)), 0x77L)), 0xACC7L)), 0x5BDDDD5D57D38C46LL)), 0xD28BL))))) & p_12)) >= 0x2E31L), l_23))), g_28))))) < p_14))) >= p_14);
lbl_205:
    l_49 = (safe_mod_func_int8_t_s_s((safe_mul_func_uint16_t_u_u(l_161, (g_174 = (safe_mod_func_int16_t_s_s(((((safe_rshift_func_uint8_t_u_u((safe_div_func_uint64_t_u_u((safe_mod_func_int16_t_s_s((p_13 = p_11), (l_170 | ((safe_div_func_int8_t_s_s((l_173 , 0x28L), 0x55L)) && g_69[0][1][0])))), p_14)), 0)) , 0UL) && g_69[0][0][1]) ^ l_161), 4UL))))), p_14));
    for (l_27 = 0; (l_27 <= 0); l_27 += 1)
    { 
        union U4 l_175 = {0xB29A1D6AL};
        if ((l_175 , (g_176[0] , g_69[0][0][1])))
        { 
            uint64_t l_183 = 0x2703BF9ECD52D1B5LL;
            int32_t l_184 = (-7L);
            g_185 &= (g_26 >= (safe_div_func_int16_t_s_s((l_184 = ((safe_lshift_func_uint8_t_u_u(g_106[1][0][0], (safe_mul_func_int8_t_s_s(((-1L) ^ 1UL), l_183)))) == p_11)), l_49)));
            p_14 ^= ((safe_sub_func_uint8_t_u_u(l_183, g_176[0].f1)) || p_11);
        }
        else
        { 
            const int16_t l_202[1][5][1] = {{{1L},{1L},{1L},{1L},{1L}}};
            int i, j, k;
            for (g_174 = 0; (g_174 <= 0); g_174 += 1)
            { 
                int64_t l_188[4][1][4] = {{{0xEC0DFEC3DBCAAF73LL,1L,1L,0xEC0DFEC3DBCAAF73LL}},{{0xEC0DFEC3DBCAAF73LL,1L,1L,0xEC0DFEC3DBCAAF73LL}},{{0xEC0DFEC3DBCAAF73LL,1L,1L,0xEC0DFEC3DBCAAF73LL}},{{0xEC0DFEC3DBCAAF73LL,1L,1L,0xEC0DFEC3DBCAAF73LL}}};
                int32_t l_204 = (-7L);
                int i, j, k;
                g_106[2][1][0] = g_69[0][0][1];
                l_204 = ((g_203[1] = (l_188[2][0][1] & (((4294967293UL && ((safe_lshift_func_int8_t_s_u(((((safe_rshift_func_uint8_t_u_s((safe_mul_func_uint16_t_u_u((!(safe_rshift_func_int8_t_s_s((0x2F75L < (safe_mul_func_uint8_t_u_u((l_49 = ((((((safe_mul_func_uint8_t_u_u(l_173.f0, p_15)) | 1L) & p_15) || g_29) != 251UL) & 0x0A8829C2L)), 0x75L))), l_161))), (-10L))), l_202[0][4][0])) ^ p_12) >= p_11) > l_175.f0), 3)) & l_175.f3)) <= l_175.f3) >= l_175.f3))) <= 1L);
            }
        }
        for (l_175.f2.f4 = 0; (l_175.f2.f4 <= 0); l_175.f2.f4 += 1)
        { 
            if (l_161)
                goto lbl_205;
            g_106[1][0][0] = g_2;
            for (p_11 = 0; (p_11 >= 0); p_11 -= 1)
            { 
                return g_176[1];
            }
        }
    }
    return l_206[0][3][0];
}



static int64_t  func_24(int32_t  p_25)
{ 
    uint8_t l_59[4];
    int32_t l_62[1];
    struct S1 l_67 = {0x80CDE216D7279364LL,0L,0x9103L};
    int32_t l_68 = 1L;
    uint32_t l_114 = 0xE873F636L;
    uint8_t l_131 = 0UL;
    union U4 l_156 = {1L};
    int i;
    for (i = 0; i < 4; i++)
        l_59[i] = 0UL;
    for (i = 0; i < 1; i++)
        l_62[i] = 0xE89BE308L;
    if ((safe_div_func_int16_t_s_s(((safe_lshift_func_uint16_t_u_s(((!(safe_add_func_uint16_t_u_u(((safe_mul_func_uint8_t_u_u((l_59[1]++), ((((((g_2 && (l_62[0] = 0xAB81002A9564FCBDLL)) , ((l_68 = (safe_div_func_uint16_t_u_u((((safe_div_func_uint64_t_u_u((l_62[0] = ((l_67 , g_2) & 2L)), 0x8CAFACA8A51D4F00LL)) , 8UL) | 0x6CA2L), g_28))) , p_25)) == g_2) | l_67.f1) > p_25) != l_67.f2))) >= p_25), 9UL))) != p_25), 5)) || g_28), g_17)))
    { 
        uint32_t l_88 = 0x7B06E2AFL;
        int32_t l_94 = (-9L);
        union U3 l_121 = {0xA4L};
        if ((g_69[0][0][1] = 9L))
        { 
            l_62[0] = g_29;
        }
        else
        { 
            uint8_t l_90 = 0x98L;
            int32_t l_91[5];
            int32_t l_93 = (-1L);
            int8_t l_107[1][2];
            int i, j;
            for (i = 0; i < 5; i++)
                l_91[i] = 0x304F1BCDL;
            for (i = 0; i < 1; i++)
            {
                for (j = 0; j < 2; j++)
                    l_107[i][j] = 0x70L;
            }
            for (l_68 = (-4); (l_68 < (-9)); l_68--)
            { 
                union U2 l_77 = {0UL};
                int32_t l_89 = 0L;
                int32_t l_92 = 0xFEA07040L;
                int32_t l_95 = 0x5EB5CE3AL;
                l_95 &= (l_94 = (l_93 ^= (l_92 &= (((+(safe_lshift_func_uint8_t_u_s((safe_mod_func_uint8_t_u_u((l_77 , ((((((safe_mul_func_int16_t_s_s((((l_90 ^= (safe_mul_func_uint8_t_u_u(((1L != ((safe_lshift_func_uint16_t_u_u((l_89 = (safe_mod_func_uint64_t_u_u((safe_mul_func_uint8_t_u_u(l_77.f0, ((0x82FBL | g_69[0][0][0]) ^ l_88))), l_88))), g_28)) != 0x6BL)) , 0xCCL), g_28))) || 0xE924L) < p_25), p_25)) >= l_91[2]) != l_77.f1) || l_91[2]) != g_17) && g_2)), g_29)), g_29))) < g_69[0][1][1]) != l_91[2]))));
            }
            g_106[1][0][0] = ((safe_add_func_uint8_t_u_u(((safe_add_func_int8_t_s_s((l_90 != (safe_mul_func_int16_t_s_s(l_90, (safe_add_func_int64_t_s_s(((safe_sub_func_uint64_t_u_u(6UL, (g_69[0][0][1] || g_17))) >= 0x7967B2D6F4160CA1LL), g_29))))), l_90)) ^ g_69[0][0][1]), l_94)) ^ 0x65E09581L);
            l_107[0][1] |= 0xF186BE7BL;
        }
        for (l_67.f1 = 0; (l_67.f1 >= 0); l_67.f1 -= 1)
        { 
            uint8_t l_111 = 0UL;
            int32_t l_113 = (-1L);
            uint8_t l_125 = 0UL;
            for (g_26 = 0; (g_26 <= 0); g_26 += 1)
            { 
                int i;
                l_94 |= l_59[(l_67.f1 + 3)];
                return p_25;
            }
            if ((((safe_lshift_func_uint8_t_u_u(((p_25 == (((+(l_62[0] = l_111)) <= (+g_106[1][0][0])) && g_2)) == g_26), 2)) == 1UL) , g_69[0][0][0]))
            { 
                union U3 l_124[3] = {{252UL},{252UL},{252UL}};
                int32_t l_126 = 0xFA6F56A4L;
                int64_t l_127 = 0xF4C6C2C3437DEDC8LL;
                int i;
                --l_114;
                l_126 = (((((safe_div_func_uint8_t_u_u(((((safe_rshift_func_uint8_t_u_u(1UL, 0)) == ((l_121 , ((safe_div_func_uint32_t_u_u((l_62[0] = ((l_124[1] , (g_106[1][0][0] = (l_94 = l_121.f0))) != g_2)), 0x4487636FL)) , 0x0E3AL)) , l_94)) < l_113) ^ l_113), l_124[1].f0)) != l_59[1]) , p_25) < p_25) || l_125);
                l_113 = ((l_121 , (-4L)) > (((g_29 = 0xC406L) < p_25) != l_127));
            }
            else
            { 
                uint16_t l_130 = 0x80B3L;
                l_130 = (safe_lshift_func_uint8_t_u_s(g_2, 6));
                if (p_25)
                    break;
            }
            for (l_111 = 0; (l_111 <= 0); l_111 += 1)
            { 
                --l_131;
            }
        }
    }
    else
    { 
        uint64_t l_144 = 0xF57036DBD5D31C88LL;
        int32_t l_146 = 0x6215D644L;
        for (g_29 = 0; (g_29 <= 3); g_29 += 1)
        { 
            int32_t l_145 = 0xE3690D56L;
            int i;
            l_145 = ((safe_sub_func_int32_t_s_s(((~0xD4F983824F8FB3CFLL) , (l_59[g_29] & l_59[g_29])), (~(safe_mul_func_int8_t_s_s((safe_div_func_uint16_t_u_u((((safe_div_func_int64_t_s_s((-8L), l_59[g_29])) , g_29) >= g_69[0][0][1]), p_25)), l_144))))) == p_25);
            for (p_25 = 0; (p_25 <= 3); p_25 += 1)
            { 
                l_68 = g_69[0][0][1];
            }
        }
        for (l_68 = 0; (l_68 >= 0); l_68 -= 1)
        { 
            uint64_t l_149[4];
            int i;
            for (i = 0; i < 4; i++)
                l_149[i] = 0UL;
            if (l_144)
                break;
            for (g_26 = 0; (g_26 <= 0); g_26 += 1)
            { 
                int8_t l_147 = 0x63L;
                int32_t l_148 = 0L;
                p_25 = p_25;
                l_146 = (l_62[0] = g_29);
                --l_149[1];
            }
        }
        l_62[0] = ((safe_mul_func_uint16_t_u_u(0x572EL, (safe_div_func_uint8_t_u_u(0x8DL, (l_156 , (l_68 ^ l_144)))))) && (-4L));
    }
    return l_156.f3;
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    transparent_crc(g_17, "g_17", print_hash_value);
    transparent_crc(g_26, "g_26", print_hash_value);
    transparent_crc(g_28, "g_28", print_hash_value);
    transparent_crc(g_29, "g_29", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 2; k++)
            {
                transparent_crc(g_69[i][j][k], "g_69[i][j][k]", print_hash_value);

            }
        }
    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 1; k++)
            {
                transparent_crc(g_106[i][j][k], "g_106[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_174, "g_174", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_176[i].f0, "g_176[i].f0", print_hash_value);
        transparent_crc(g_176[i].f1, "g_176[i].f1", print_hash_value);
        transparent_crc(g_176[i].f2, "g_176[i].f2", print_hash_value);

    }
    transparent_crc(g_185, "g_185", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_203[i], "g_203[i]", print_hash_value);

    }
    transparent_crc(g_209.f0, "g_209.f0", print_hash_value);
    transparent_crc(g_229.f0, "g_229.f0", print_hash_value);
    transparent_crc(g_229.f1, "g_229.f1", print_hash_value);
    transparent_crc(g_229.f3, "g_229.f3", print_hash_value);
    transparent_crc(g_252, "g_252", print_hash_value);
    transparent_crc(g_295, "g_295", print_hash_value);
    transparent_crc(g_347.f0, "g_347.f0", print_hash_value);
    transparent_crc(g_347.f1, "g_347.f1", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
