// SPDX-License-Identifier: MIT
// cctest_csmith_4623498e.c --- cctest case csmith_4623498e (csmith seed 1176717710)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x1c02f40f */
/* @exp_ticks 0x4977 */

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

// Options:   -s 1176717710 -o /tmp/csmith_gen_kj8lgb7m/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


#pragma pack(push)
#pragma pack(1)
struct S0 {
   uint64_t  f0;
   int32_t  f1;
   int32_t  f2;
   const uint32_t  f3;
};
#pragma pack(pop)

union U1 {
   struct S0  f0;
};

union U2 {
   const int32_t  f0;
};

union U3 {
   uint32_t  f0;
};


static int32_t g_3 = 0xD00585B7L;
static uint16_t g_19 = 0xB7B8L;
static int32_t g_41 = 0xF34D89BBL;
static const union U3 g_43[5] = {{0xDE082ADEL},{0xDE082ADEL},{0xDE082ADEL},{0xDE082ADEL},{0xDE082ADEL}};
static int32_t g_55 = 0x9E6264A0L;
static uint32_t g_58 = 0xF37D796EL;
static struct S0 g_79 = {0x73FCFB248F24B120LL,1L,0x9C35C0EDL,18446744073709551615UL};
static uint64_t g_86 = 1UL;
static uint32_t g_99[2][1] = {{0x86A19192L},{0x86A19192L}};
static uint32_t g_100 = 18446744073709551615UL;
static int8_t g_105 = 0xDBL;
static int32_t g_106 = 1L;
static uint16_t g_108 = 1UL;
static uint8_t g_187[4] = {255UL,255UL,255UL,255UL};
static uint64_t g_203 = 0x08CD4FB8BF2FC475LL;
static uint64_t g_241 = 0xB034DBD4EC956AC2LL;
static int16_t g_253 = 0x6D84L;
static int32_t g_271[4][3] = {{0x2A1E2604L,1L,0L},{0x2A1E2604L,0x2A1E2604L,1L},{(-6L),1L,1L},{1L,(-1L),0L}};
static uint8_t g_304 = 0x06L;
static uint32_t g_324 = 18446744073709551608UL;
static int32_t g_329 = 0x6C5116D4L;
static uint16_t g_330 = 0x4164L;



static uint64_t  func_1(void);
static uint32_t  func_4(struct S0  p_5, const uint64_t  p_6, int64_t  p_7);
static struct S0  func_9(int32_t  p_10, int16_t  p_11, int32_t  p_12, const union U3  p_13, int8_t  p_14);
static int16_t  func_15(uint64_t  p_16, uint8_t  p_17);




static uint64_t  func_1(void)
{ 
    union U3 l_2[2][1][3] = {{{{1UL},{0x5DE05DAEL},{0x5DE05DAEL}}},{{{1UL},{0x5DE05DAEL},{0x5DE05DAEL}}}};
    struct S0 l_8 = {0xF4FFCF33F23E93D0LL,0x5486B6FEL,0x9E9D60A2L,1UL};
    int32_t l_217 = 0xABF86FAEL;
    int32_t l_242 = (-1L);
    union U1 l_339 = {{0x0A02F6F45182DE7FLL,0x4FB6539BL,0L,0x65DFEDC4L}};
    int i, j, k;
    for (g_3 = 0; (g_3 >= 0); g_3 -= 1)
    { 
        uint8_t l_18 = 249UL;
        uint64_t l_233 = 0xD09A4D5CBF6C0B2DLL;
        int32_t l_234 = (-1L);
        int16_t l_240[1][1][4] = {{{0xCD73L,0xCD73L,0xCD73L,0xCD73L}}};
        int i, j, k;
        l_217 = (func_4((l_8 , func_9(g_3, func_15(((g_3 & l_18) & (-1L)), l_8.f1), g_3, g_43[1], l_8.f2)), l_8.f0, l_8.f3) , 0x9C605374L);
        l_242 |= (safe_mod_func_uint8_t_u_u((safe_sub_func_int16_t_s_s((g_241 = (safe_mul_func_uint16_t_u_u(1UL, ((((safe_lshift_func_int16_t_s_u(((((safe_rshift_func_int16_t_s_s((l_8.f1 = (safe_rshift_func_uint8_t_u_u((~((l_234 = l_233) && ((g_55 > ((((~(safe_rshift_func_int8_t_s_s((safe_sub_func_uint64_t_u_u((l_240[0][0][1] >= l_233), l_8.f3)), g_3))) > l_217) || l_240[0][0][1]) , 0xEFL)) <= g_41))), 1))), g_86)) != g_187[0]) || 0L) < l_8.f2), 15)) < 254UL) < g_106) && g_99[0][0])))), l_8.f3)), g_43[1].f0));
        g_106 = (safe_lshift_func_int8_t_s_s(l_8.f2, 0));
        for (g_106 = 0; (g_106 >= 0); g_106 -= 1)
        { 
            uint32_t l_247 = 0xA105D9FAL;
            int32_t l_248 = 0x82676FA9L;
            l_242 = ((safe_mod_func_int8_t_s_s((0UL > (4294967294UL == (((l_2[0][0][0] , (-4L)) < g_86) == l_18))), g_203)) & 7L);
            l_242 = g_19;
            l_248 = l_247;
            for (l_248 = 0; (l_248 >= 0); l_248 -= 1)
            { 
                int64_t l_255 = 0L;
                int32_t l_256 = 0xD55D0791L;
                g_41 = ((((l_234 = (l_242 = (safe_add_func_uint16_t_u_u((safe_lshift_func_int8_t_s_u((g_19 != (g_253 ^= 0x6F46DC24EEE4FC8BLL)), 3)), (safe_unary_minus_func_uint16_t_u(((++g_241) , (g_108 = (l_234 || (g_79.f1 > 0x72L)))))))))) || 0x894AC38EL) , l_18) && g_19);
            }
        }
    }
    if ((l_242 |= (safe_add_func_uint8_t_u_u((safe_mod_func_int64_t_s_s((l_8.f1 &= (g_253 > (g_271[2][0] = ((0x10L < (safe_mod_func_int32_t_s_s(((safe_lshift_func_uint8_t_u_u(((g_99[1][0] != (g_187[3]++)) | (((l_8.f0 < l_217) < g_99[1][0]) ^ g_19)), 2)) | l_217), g_108))) < l_217)))), g_86)), l_8.f2))))
    { 
        return g_86;
    }
    else
    { 
        uint32_t l_285 = 0xCBCB859EL;
        int32_t l_325 = 0x0FAD0A5AL;
        int32_t l_326 = 0xD8BFCD3BL;
        for (g_108 = 0; (g_108 >= 8); ++g_108)
        { 
            int32_t l_276[3];
            int i;
            for (i = 0; i < 3; i++)
                l_276[i] = 0x1731C75EL;
            g_41 = (safe_mul_func_int8_t_s_s((8L < g_108), l_217));
            return l_276[0];
        }
        l_242 = ((safe_mul_func_int16_t_s_s((safe_lshift_func_int8_t_s_s(g_79.f1, 0)), ((0UL >= ((safe_mod_func_uint64_t_u_u((((g_79.f1 ^ (safe_add_func_uint8_t_u_u(l_285, l_285))) >= g_271[2][2]) > 0x6B9C1FDE36D3BF16LL), g_79.f2)) <= l_8.f3)) & l_285))) | g_187[0]);
        if ((g_79.f1 &= 0x45598B16L))
        { 
            int16_t l_303 = (-1L);
            if ((safe_mul_func_int8_t_s_s((safe_add_func_int16_t_s_s(0xD80BL, ((safe_lshift_func_int16_t_s_u(((safe_rshift_func_int16_t_s_s((l_8.f1 = (safe_add_func_uint64_t_u_u((g_203 = (g_99[1][0] >= (safe_lshift_func_int16_t_s_u((g_304 &= (g_253 ^= (safe_add_func_int64_t_s_s((safe_add_func_uint64_t_u_u(((~(l_303 & (g_79.f0 <= 255UL))) ^ 0x73ABL), l_8.f1)), 5L)))), l_303)))), l_285))), g_187[3])) <= g_271[3][1]), g_41)) >= g_43[1].f0))), g_99[1][0])))
            { 
                return g_3;
            }
            else
            { 
                uint16_t l_319 = 65535UL;
                l_326 = (((-2L) > ((safe_rshift_func_int16_t_s_u(((safe_sub_func_uint32_t_u_u(6UL, (safe_sub_func_int64_t_s_s((safe_add_func_uint8_t_u_u(((safe_rshift_func_uint16_t_u_s((safe_mod_func_uint8_t_u_u((safe_mul_func_uint8_t_u_u(l_319, (safe_div_func_int8_t_s_s((safe_lshift_func_int8_t_s_u((g_105 &= (l_325 = ((g_324 &= (g_253 == l_217)) <= 1L))), g_55)), l_319)))), g_19)), g_271[2][0])) && g_99[1][0]), l_217)), g_79.f0)))) < l_242), 15)) <= 0UL)) >= l_319);
                return l_326;
            }
        }
        else
        { 
            g_41 = (safe_sub_func_int32_t_s_s((g_187[0] , ((++g_330) == ((g_58 || (((safe_rshift_func_uint8_t_u_u(l_8.f0, 2)) < ((safe_rshift_func_uint16_t_u_s((safe_sub_func_uint32_t_u_u(g_187[0], l_285)), 4)) > (-1L))) , 0x4528E02149DF2EAALL)) && g_203))), g_86));
        }
    }
    g_3 = (l_339 , (((safe_sub_func_uint32_t_u_u((l_242 &= ((g_187[0] = ((l_8.f1 = 0xA0L) <= (l_339.f0.f0 , ((l_2[0][0][2] , 1L) || l_339.f0.f1)))) | g_55)), 4294967295UL)) ^ 0xF9F8L) <= g_79.f0));
    return l_339.f0.f1;
}



static uint32_t  func_4(struct S0  p_5, const uint64_t  p_6, int64_t  p_7)
{ 
    uint32_t l_103[1];
    int32_t l_104 = 1L;
    int32_t l_107 = (-1L);
    union U2 l_111[1][5] = {{{0x699B53D0L},{0x699B53D0L},{0x699B53D0L},{0x699B53D0L},{0x699B53D0L}}};
    int64_t l_164 = 0x9A281D642D507010LL;
    int16_t l_199[1];
    int32_t l_202[2][5] = {{0x27BBEFFAL,0x27BBEFFAL,0x27BBEFFAL,0x27BBEFFAL,0x27BBEFFAL},{0x73B97F15L,0x73B97F15L,0x73B97F15L,0x73B97F15L,0x73B97F15L}};
    int i, j;
    for (i = 0; i < 1; i++)
        l_103[i] = 0xD0130CBDL;
    for (i = 0; i < 1; i++)
        l_199[i] = 9L;
    g_79.f2 = (g_55 ^= (!(l_103[0] || (p_7 = 0x4028A08A75D01A8FLL))));
    g_41 = ((0x52264B8EL && ((g_108++) < (l_111[0][2] , ((l_111[0][2].f0 && (g_86 , g_99[0][0])) == l_107)))) > g_55);
    for (p_7 = 27; (p_7 != (-7)); --p_7)
    { 
        const uint32_t l_136 = 0xE754454CL;
        int32_t l_137 = 9L;
        uint16_t l_156 = 0x1938L;
        int32_t l_198 = 0xA926A063L;
        int32_t l_200 = 0x9E06E0FAL;
        int32_t l_201[4][4] = {{5L,0xA1DE74A5L,5L,5L},{0xA1DE74A5L,0xA1DE74A5L,0x45A36995L,0xA1DE74A5L},{0xA1DE74A5L,5L,5L,0xA1DE74A5L},{5L,0xA1DE74A5L,5L,5L}};
        int i, j;
        for (g_58 = 27; (g_58 <= 3); g_58--)
        { 
            int8_t l_127 = (-1L);
            int32_t l_129 = 0x01F12A74L;
            int32_t l_158 = 1L;
            uint64_t l_197 = 0UL;
            for (g_55 = 1; (g_55 >= (-20)); g_55 = safe_sub_func_int32_t_s_s(g_55, 4))
            { 
                int32_t l_128 = (-1L);
                g_106 |= ((p_6 ^ (-1L)) ^ ((l_129 |= (safe_div_func_uint32_t_u_u((safe_sub_func_int32_t_s_s((+(-1L)), (((safe_rshift_func_int8_t_s_u((safe_mod_func_int16_t_s_s(l_127, 1L)), 7)) > 0x541C76BB48C356EDLL) , l_128))), (-1L)))) , g_79.f2));
                if (l_128)
                    continue;
            }
            if (((safe_mul_func_int16_t_s_s(((safe_sub_func_int8_t_s_s((l_137 = ((safe_rshift_func_uint16_t_u_u(p_5.f3, 4)) > (l_136 , 0xCCF9L))), ((safe_rshift_func_uint8_t_u_s(l_136, 6)) == 0x39L))) , 0x8AC1L), (-6L))) , l_137))
            { 
                const uint8_t l_157 = 0x1DL;
                int32_t l_159 = 0x4B39CDCEL;
                p_5.f2 = (safe_mod_func_int64_t_s_s(((safe_lshift_func_int16_t_s_s((p_6 || (p_5.f0 = ((65527UL ^ 65535UL) <= l_136))), 13)) & 0xB2L), l_111[0][2].f0));
                l_159 = ((safe_lshift_func_uint8_t_u_u(0x4FL, (safe_mod_func_uint8_t_u_u(g_100, ((safe_sub_func_uint32_t_u_u((l_103[0] != (safe_div_func_uint32_t_u_u((safe_mul_func_int16_t_s_s(((l_129 = (((((safe_rshift_func_int8_t_s_u(g_55, p_5.f1)) , l_136) | 0xFF29L) == l_156) <= l_157)) <= (-5L)), 0xB3DEL)), l_104))), l_158)) , 0x65L))))) ^ g_99[0][0]);
                l_107 = (safe_sub_func_int16_t_s_s(((safe_div_func_int8_t_s_s((l_159 = l_164), p_5.f0)) <= (safe_rshift_func_int8_t_s_u((((safe_lshift_func_int8_t_s_u((safe_lshift_func_uint16_t_u_u(g_55, (g_105 && g_43[1].f0))), 7)) || g_79.f1) ^ l_157), 7))), l_129));
            }
            else
            { 
                int8_t l_188 = 0x2CL;
                p_5.f2 = (l_136 ^ (safe_lshift_func_uint8_t_u_u((safe_sub_func_uint64_t_u_u(((safe_unary_minus_func_uint8_t_u((safe_mod_func_int16_t_s_s((g_187[0] = (safe_rshift_func_uint16_t_u_u(((g_79.f1 > (safe_unary_minus_func_int64_t_s(((safe_div_func_int32_t_s_s((1L < ((g_105 = ((safe_div_func_uint64_t_u_u((safe_mul_func_int8_t_s_s(0x70L, g_3)), g_79.f1)) , g_100)) >= l_129)), 7UL)) & g_3)))) ^ 0x2913F7DCL), p_7))), g_106)))) != l_129), l_188)), 1)));
            }
            l_197 = ((65527UL & (safe_lshift_func_int8_t_s_u((safe_lshift_func_int16_t_s_s((safe_rshift_func_int8_t_s_u(p_5.f1, (safe_sub_func_int16_t_s_s(((0xF7L == ((g_106 > l_129) < 9L)) != g_58), g_99[0][0])))), 2)), l_103[0]))) ^ 0xA2FA35CBL);
        }
        ++g_203;
        for (g_86 = (-2); (g_86 >= 36); g_86 = safe_add_func_uint8_t_u_u(g_86, 7))
        { 
            p_5.f1 = 0L;
            p_5.f2 = (((l_201[3][2] == ((l_201[3][2] <= (g_187[1]--)) ^ ((safe_mul_func_uint16_t_u_u(p_6, (safe_unary_minus_func_uint8_t_u((safe_div_func_uint8_t_u_u(((safe_mul_func_int8_t_s_s(((((l_103[0] , p_5.f0) > g_203) & 0x5DL) >= p_5.f0), g_41)) <= p_5.f3), p_5.f3)))))) || g_86))) && 0x807826B081F9AE06LL) ^ p_7);
        }
    }
    return p_7;
}



static struct S0  func_9(int32_t  p_10, int16_t  p_11, int32_t  p_12, const union U3  p_13, int8_t  p_14)
{ 
    const uint64_t l_52 = 1UL;
    int32_t l_53 = 0xA1B5826CL;
    int32_t l_54 = 0x3A871D1BL;
    int32_t l_56 = 1L;
    int32_t l_57 = 0xB46DFF61L;
    int16_t l_61[5][4][3] = {{{0x0729L,0L,1L},{1L,0xFBA2L,(-6L)},{0x0603L,0L,0x0603L},{(-6L),0xFBA2L,1L}},{{1L,0L,0x0729L},{0x6125L,(-1L),1L},{0L,0L,(-2L)},{0x6125L,(-6L),(-1L)}},{{1L,(-2L),0L},{(-6L),0x64C6L,0x64C6L},{0x0603L,1L,0L},{1L,0xB2C1L,(-1L)}},{{0x0729L,0x84F7L,(-2L)},{1L,1L,1L},{(-2L),0x84F7L,0x0729L},{(-1L),0xB2C1L,1L}},{{0L,1L,0x0603L},{0x64C6L,0x64C6L,(-6L)},{0L,(-2L),1L},{(-1L),(-6L),0x6125L}}};
    int32_t l_84[4][4][5] = {{{0xBCDAFCE2L,0xBCDAFCE2L,0xA205A567L,0x5B5FE41CL,0xA205A567L},{8L,8L,0x2E21EF5CL,0x34EF3EF0L,0x2E21EF5CL},{0xBCDAFCE2L,0xBCDAFCE2L,0xA205A567L,0x5B5FE41CL,0xA205A567L},{8L,8L,0x2E21EF5CL,0x34EF3EF0L,0x2E21EF5CL}},{{0xBCDAFCE2L,0xBCDAFCE2L,0xA205A567L,0x5B5FE41CL,0xA205A567L},{8L,8L,0x2E21EF5CL,0x34EF3EF0L,0x2E21EF5CL},{0xBCDAFCE2L,0xBCDAFCE2L,0xA205A567L,0x5B5FE41CL,0xA205A567L},{8L,8L,0x2E21EF5CL,0x34EF3EF0L,0x2E21EF5CL}},{{0xBCDAFCE2L,0xBCDAFCE2L,0xA205A567L,0x5B5FE41CL,0xA205A567L},{8L,8L,0x2E21EF5CL,0x34EF3EF0L,0x2E21EF5CL},{0xBCDAFCE2L,0xBCDAFCE2L,0xA205A567L,0x5B5FE41CL,0xA205A567L},{8L,8L,0x2E21EF5CL,0x34EF3EF0L,0x2E21EF5CL}},{{0xBCDAFCE2L,0xBCDAFCE2L,0xA205A567L,0x5B5FE41CL,0xA205A567L},{8L,8L,0x2E21EF5CL,0x34EF3EF0L,0x2E21EF5CL},{0xBCDAFCE2L,0xBCDAFCE2L,0xA205A567L,0x5B5FE41CL,0xA205A567L},{8L,8L,0x2E21EF5CL,0x34EF3EF0L,0x2E21EF5CL}}};
    struct S0 l_101[2][3] = {{{0x502624D59534E3A6LL,6L,0L,18446744073709551609UL},{0x502624D59534E3A6LL,6L,0L,18446744073709551609UL},{0x502624D59534E3A6LL,6L,0L,18446744073709551609UL}},{{4UL,0x7010A815L,-8L,0x0A2812A6L},{4UL,0x7010A815L,-8L,0x0A2812A6L},{4UL,0x7010A815L,-8L,0x0A2812A6L}}};
    int i, j, k;
    l_54 = ((safe_sub_func_int8_t_s_s((safe_div_func_int32_t_s_s((l_53 = (g_41 = (safe_div_func_int8_t_s_s((((((((safe_mul_func_int8_t_s_s((g_41 & (0x77355A2C03FDDA78LL || (l_52 > p_12))), 5L)) ^ g_41) >= g_19) & l_52) , g_43[1].f0) == p_10) < 0xB358L), l_52)))), l_52)), p_10)) | 0xB2L);
    g_58++;
    for (g_58 = 0; (g_58 <= 2); g_58 += 1)
    { 
        uint16_t l_68 = 65527UL;
        int32_t l_73[2][2];
        int i, j;
        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 2; j++)
                l_73[i][j] = 1L;
        }
        g_55 &= (safe_mul_func_int8_t_s_s((safe_lshift_func_int16_t_s_u((l_53 = (p_12 && ((safe_mod_func_uint8_t_u_u((p_11 < (((l_68 = (l_57 == p_12)) != 255UL) , 0xC796D631L)), l_61[3][1][1])) < 8L))), l_54)), p_11));
        for (l_54 = 2; (l_54 >= 0); l_54 -= 1)
        { 
            int32_t l_69[3];
            uint32_t l_70 = 0xB7B7A4FDL;
            int i;
            for (i = 0; i < 3; i++)
                l_69[i] = 0xAE8E356DL;
            g_55 = ((l_56 = (l_70 ^= (g_58 >= l_69[2]))) , ((((safe_add_func_uint16_t_u_u((g_19--), (safe_div_func_int16_t_s_s((safe_unary_minus_func_uint8_t_u((((l_56 == (((p_11 == 0x20L) , 0x61C1CA36320CFA82LL) | (-4L))) & p_11) > l_70))), 65531UL)))) & g_43[1].f0) , 8UL) != 1L));
            if (p_10)
                continue;
            return g_79;
        }
        for (p_10 = 2; (p_10 >= 0); p_10 -= 1)
        { 
            int8_t l_80 = 1L;
            int32_t l_81 = 0x5FDE22B7L;
            int32_t l_83 = 0x4AC225C5L;
            int32_t l_85[5][3] = {{0L,0L,0L},{0L,0L,0L},{0L,0L,0L},{0L,0L,0L},{0L,0L,0L}};
            int i, j;
            for (l_54 = 0; (l_54 <= 2); l_54 += 1)
            { 
                int16_t l_82 = 0x58AAL;
                --g_86;
            }
            for (l_56 = 0; (l_56 <= 2); l_56 += 1)
            { 
                uint32_t l_89 = 1UL;
                int i, j, k;
                l_89++;
                p_12 = (l_61[(p_10 + 1)][p_10][g_58] <= (safe_rshift_func_int8_t_s_u((g_100 = ((g_99[0][0] = (((safe_sub_func_uint16_t_u_u(0x08E2L, (l_57 ^= (safe_unary_minus_func_int16_t_s((-4L)))))) & (p_14 = (safe_add_func_uint16_t_u_u(l_61[(l_56 + 1)][(g_58 + 1)][l_56], 0x2894L)))) >= l_89)) > p_13.f0)), g_79.f0)));
            }
        }
    }
    return l_101[1][1];
}



static int16_t  func_15(uint64_t  p_16, uint8_t  p_17)
{ 
    --g_19;
    for (p_16 = 0; (p_16 != 55); p_16 = safe_add_func_int16_t_s_s(p_16, 5))
    { 
        uint32_t l_26 = 0xD8C65816L;
        uint64_t l_40[1][1][2];
        int32_t l_42 = 0xF438361CL;
        int i, j, k;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 1; j++)
            {
                for (k = 0; k < 2; k++)
                    l_40[i][j][k] = 1UL;
            }
        }
        l_42 = (g_41 = ((safe_lshift_func_int16_t_s_s(l_26, ((safe_sub_func_int32_t_s_s(g_3, (safe_add_func_uint64_t_u_u((0xB03BE465L > (safe_add_func_int8_t_s_s((safe_rshift_func_uint16_t_u_u((!(safe_lshift_func_int8_t_s_s(((safe_mod_func_uint16_t_u_u(0x03B5L, g_3)) | 0x5D482642L), l_40[0][0][0]))), 0)), p_17))), g_3)))) || 6L))) ^ 1L));
    }
    return p_17;
}





int test_main(void)
{
    int i, j;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_3, "g_3", print_hash_value);
    transparent_crc(g_19, "g_19", print_hash_value);
    transparent_crc(g_41, "g_41", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_43[i].f0, "g_43[i].f0", print_hash_value);

    }
    transparent_crc(g_55, "g_55", print_hash_value);
    transparent_crc(g_58, "g_58", print_hash_value);
    transparent_crc(g_79.f0, "g_79.f0", print_hash_value);
    transparent_crc(g_79.f1, "g_79.f1", print_hash_value);
    transparent_crc(g_79.f2, "g_79.f2", print_hash_value);
    transparent_crc(g_79.f3, "g_79.f3", print_hash_value);
    transparent_crc(g_86, "g_86", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 1; j++)
        {
            transparent_crc(g_99[i][j], "g_99[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_100, "g_100", print_hash_value);
    transparent_crc(g_105, "g_105", print_hash_value);
    transparent_crc(g_106, "g_106", print_hash_value);
    transparent_crc(g_108, "g_108", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_187[i], "g_187[i]", print_hash_value);

    }
    transparent_crc(g_203, "g_203", print_hash_value);
    transparent_crc(g_241, "g_241", print_hash_value);
    transparent_crc(g_253, "g_253", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transparent_crc(g_271[i][j], "g_271[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_304, "g_304", print_hash_value);
    transparent_crc(g_324, "g_324", print_hash_value);
    transparent_crc(g_329, "g_329", print_hash_value);
    transparent_crc(g_330, "g_330", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
