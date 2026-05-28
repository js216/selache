// SPDX-License-Identifier: MIT
// cctest_csmith_a6f4ce0e.c --- cctest case csmith_a6f4ce0e (csmith seed 2801061390)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0xf01bdb9e */
/* @exp_ticks 0x92aa */

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

// Options:   -s 2801061390 -o /tmp/csmith_gen_w4sv3oz8/csmith.c --concise --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 8 --max-block-size 5 --max-block-depth 4 --max-expr-complexity 8 --max-array-dim 3 --max-array-len-per-dim 7 --max-struct-fields 8 --max-union-fields 5

static long __undefined;


#pragma pack(push)
#pragma pack(1)
struct S0 {
   const int64_t  f0;
   int16_t  f1;
   int8_t  f2;
   const int16_t  f3;
   uint16_t  f4;
   uint16_t  f5;
   int64_t  f6;
   const int32_t  f7;
};
#pragma pack(pop)

#pragma pack(push)
#pragma pack(1)
struct S1 {
   uint32_t  f0;
};
#pragma pack(pop)

union U2 {
   int16_t  f0;
   const int32_t  f1;
   int32_t  f2;
   const uint32_t  f3;
};


static int32_t g_3 = 0x0389A9B8L;
static int16_t g_15[1] = {0xE294L};
static int32_t g_16 = 4L;
static uint16_t g_55 = 0x89EFL;
static int16_t g_85 = 0L;
static int32_t g_86 = (-1L);
static uint16_t *g_89 = &g_55;
static uint16_t **g_88 = &g_89;
static uint32_t g_92[3] = {0x7C0820F6L,0x7C0820F6L,0x7C0820F6L};
static struct S0 g_94 = {0L,0x2D94L,6L,2L,0x2F0DL,2UL,1L,0xDB2349D5L};
static int16_t g_99[6][4] = {{4L,1L,(-1L),0L},{4L,(-1L),4L,(-1L)},{1L,0L,(-1L),(-1L)},{(-1L),(-1L),0x494CL,0L},{0L,1L,0x494CL,1L},{(-1L),4L,(-1L),0x494CL}};
static int32_t g_107 = 1L;
static int16_t g_108 = 1L;
static uint32_t g_109 = 0x40678986L;
static uint32_t g_119 = 0x56C05CDAL;
static int32_t g_125 = 0xC62F16C9L;
static int32_t g_126[7][1] = {{(-1L)},{(-1L)},{(-1L)},{(-1L)},{(-1L)},{(-1L)},{(-1L)}};
static struct S1 g_136 = {1UL};
static struct S1 *g_135 = &g_136;
static uint8_t g_148 = 0xC9L;
static const struct S1 *g_156 = &g_136;
static const struct S1 **g_155 = &g_156;
static int64_t g_165 = 1L;
static union U2 g_231 = {0x1F5AL};
static int8_t *g_311 = &g_94.f2;
static uint8_t g_314 = 0x0CL;
static int32_t *g_319 = &g_86;
static struct S1 *** const g_361 = (void*)0;
static struct S1 *** const *g_360 = &g_361;
static struct S1 ** const *g_367 = (void*)0;
static struct S1 ** const **g_366 = &g_367;
static struct S1 ** const ***g_365[4] = {&g_366,&g_366,&g_366,&g_366};
static struct S1 ****g_371 = (void*)0;
static struct S1 *****g_370 = &g_371;
static int8_t * const g_512 = (void*)0;
static uint16_t g_552 = 65535UL;
static uint64_t g_572 = 18446744073709551606UL;
static int64_t *g_602[5][2] = {{(void*)0,&g_94.f6},{&g_94.f6,(void*)0},{&g_94.f6,&g_94.f6},{(void*)0,(void*)0},{(void*)0,&g_94.f6}};
static int64_t **g_601 = &g_602[1][1];
static int8_t g_663[2] = {0x92L,0x92L};
static int32_t g_665 = 0xFDB49C52L;
static uint8_t g_668 = 1UL;
static union U2 g_674 = {-1L};
static int16_t *g_705 = &g_674.f0;
static int16_t ** const g_704 = &g_705;
static uint64_t g_754 = 18446744073709551615UL;
static struct S1 g_765 = {0UL};
static int32_t **g_773[2] = {(void*)0,(void*)0};
static int32_t ***g_772 = &g_773[1];
static int32_t ****g_771 = &g_772;
static int32_t *****g_770 = &g_771;
static int8_t **g_809 = &g_311;
static struct S0 g_853 = {0x7D6B8E2118521392LL,1L,0L,0x223FL,65526UL,0UL,2L,0x2E87CC90L};
static uint16_t * const g_873 = (void*)0;
static uint16_t * const *g_872[6][7][3] = {{{&g_873,&g_873,&g_873},{&g_873,&g_873,&g_873},{(void*)0,(void*)0,&g_873},{(void*)0,&g_873,&g_873},{&g_873,&g_873,&g_873},{(void*)0,(void*)0,&g_873},{(void*)0,&g_873,&g_873}},{{(void*)0,&g_873,&g_873},{(void*)0,&g_873,&g_873},{&g_873,&g_873,&g_873},{(void*)0,&g_873,(void*)0},{(void*)0,&g_873,&g_873},{&g_873,&g_873,&g_873},{&g_873,&g_873,&g_873}},{{&g_873,&g_873,&g_873},{(void*)0,&g_873,&g_873},{(void*)0,&g_873,&g_873},{&g_873,&g_873,&g_873},{&g_873,&g_873,&g_873},{&g_873,(void*)0,&g_873},{&g_873,&g_873,&g_873}},{{(void*)0,&g_873,&g_873},{&g_873,(void*)0,&g_873},{&g_873,&g_873,&g_873},{(void*)0,&g_873,&g_873},{&g_873,&g_873,(void*)0},{&g_873,(void*)0,&g_873},{(void*)0,(void*)0,&g_873}},{{&g_873,&g_873,&g_873},{&g_873,&g_873,&g_873},{&g_873,&g_873,&g_873},{&g_873,&g_873,&g_873},{(void*)0,(void*)0,&g_873},{(void*)0,(void*)0,&g_873},{&g_873,&g_873,&g_873}},{{&g_873,&g_873,&g_873},{&g_873,&g_873,&g_873},{(void*)0,(void*)0,&g_873},{(void*)0,&g_873,&g_873},{&g_873,&g_873,&g_873},{(void*)0,(void*)0,&g_873},{(void*)0,&g_873,&g_873}}};
static uint16_t * const **g_871 = &g_872[3][4][2];
static uint16_t * const ***g_870 = &g_871;
static uint16_t * const ****g_869 = &g_870;
static const uint64_t g_1017 = 0x3E7A183510C7D955LL;
static struct S0 *g_1047 = &g_853;
static uint16_t ** const *g_1119 = &g_88;
static uint16_t ** const * const *g_1118 = &g_1119;
static int32_t * const ***g_1193 = (void*)0;
static int32_t * const ****g_1192 = &g_1193;
static int32_t *g_1208 = (void*)0;
static const int32_t g_1220 = 2L;
static const int32_t *g_1219 = &g_1220;
static struct S0 g_1273 = {0x2B5971B44CB00BE8LL,2L,0x5EL,1L,3UL,65535UL,0L,0x8C22868BL};
static union U2 g_1311 = {1L};
static union U2 *g_1310 = &g_1311;
static uint32_t *g_1418 = (void*)0;
static uint32_t **g_1417[2] = {&g_1418,&g_1418};
static int16_t **g_1458 = &g_705;
static int64_t ***g_1488 = &g_601;
static int64_t ****g_1487 = &g_1488;
static struct S0 g_1521 = {6L,0x6B1DL,5L,0x209CL,0xC6E0L,0xBD65L,0x04BA4187D927E52ALL,0x9693657FL};
static struct S0 *g_1520 = &g_1521;
static int32_t g_1526 = 5L;
static union U2 g_1578 = {0x4339L};
static uint32_t g_1657 = 0UL;
static int16_t g_1720 = 1L;
static uint8_t g_1721 = 250UL;
static int64_t g_1794 = 0xD259624E341CD631LL;
static int16_t g_1810 = (-8L);
static uint32_t g_1847 = 0x79ACB57BL;
static uint8_t g_1928[6][5][7] = {{{251UL,0x35L,251UL,0x35L,251UL,0x35L,251UL},{0xD3L,0x51L,0x51L,0xD3L,0xD3L,0x51L,0x51L},{0x68L,0x35L,0x68L,0x35L,0x68L,0x35L,0x68L},{0xD3L,0xD3L,0x51L,0x51L,0xD3L,0xD3L,0x51L},{251UL,0x35L,251UL,0x35L,251UL,0x35L,251UL}},{{0xD3L,0x51L,0x51L,0xD3L,0xD3L,0x51L,0x51L},{0x68L,0x35L,0x68L,0x35L,0x68L,0x35L,0x68L},{0xD3L,0xD3L,0x51L,0x51L,0xD3L,0xD3L,0x51L},{251UL,0x35L,251UL,0x35L,251UL,0x35L,251UL},{0xD3L,0x51L,0x51L,0xD3L,0xD3L,0x51L,0x51L}},{{0x68L,0x35L,0x68L,0x35L,0x68L,0x35L,0x68L},{0xD3L,0xD3L,0x51L,0x51L,0xD3L,0xD3L,0x51L},{251UL,0x35L,251UL,0x35L,251UL,0x35L,251UL},{0xD3L,0x51L,0x51L,0xD3L,0xD3L,0x51L,0x51L},{0x68L,0x35L,0x68L,0x35L,0x68L,0x35L,0x68L}},{{0xD3L,0xD3L,0x51L,0x51L,0xD3L,0xD3L,0x51L},{251UL,0x35L,251UL,0x35L,251UL,0x35L,251UL},{0xD3L,0x51L,0x51L,0xD3L,0xD3L,0x51L,0x51L},{0x68L,0x35L,0x68L,0x35L,0x68L,0x35L,0x68L},{0xD3L,0xD3L,0x51L,0x51L,0xD3L,0xD3L,0x51L}},{{251UL,0x35L,251UL,0x35L,251UL,0x35L,251UL},{0xD3L,0x51L,0x51L,0xD3L,0xD3L,0x51L,0x51L},{0x68L,0x35L,0x68L,0x35L,0x68L,0x35L,0x68L},{0xD3L,0xD3L,0x51L,0x51L,0xD3L,0xD3L,0x51L},{251UL,0x35L,251UL,0x35L,251UL,0x35L,251UL}},{{0xD3L,0x51L,0x51L,0xD3L,0xD3L,0x51L,0x51L},{0x68L,0x35L,0x68L,0x35L,0x68L,0x35L,0x68L},{0xD3L,0xD3L,0x51L,0x51L,0xD3L,0xD3L,0x51L},{251UL,0x35L,251UL,0x35L,251UL,0x35L,251UL},{0xD3L,0x51L,0x51L,0xD3L,0xD3L,0x51L,0x51L}}};
static int32_t g_1953[6][1][4] = {{{(-5L),0x42643578L,(-5L),0x42643578L}},{{(-5L),0x42643578L,(-5L),0x42643578L}},{{(-5L),0x42643578L,(-5L),0x42643578L}},{{(-5L),0x42643578L,(-5L),0x42643578L}},{{(-5L),0x42643578L,(-5L),0x42643578L}},{{(-5L),0x42643578L,(-5L),0x42643578L}}};
static int64_t g_1988 = 0L;
static uint8_t g_2047 = 0x56L;
static const uint64_t g_2271[2] = {18446744073709551612UL,18446744073709551612UL};
static uint64_t *g_2292 = (void*)0;
static uint64_t **g_2291 = &g_2292;
static uint64_t ***g_2290 = &g_2291;
static int64_t **g_2294 = &g_602[2][1];
static int32_t *g_2307 = (void*)0;
static int16_t *g_2350 = &g_108;
static int16_t ** const g_2349 = &g_2350;
static int16_t ** const *g_2348 = &g_2349;
static int16_t *g_2354 = &g_1521.f1;
static int16_t ** const g_2353 = &g_2354;
static int16_t ** const *g_2352 = &g_2353;
static const int64_t **g_2378 = (void*)0;
static const int64_t ***g_2377 = &g_2378;
static const int64_t ****g_2376 = &g_2377;
static const int64_t *****g_2375 = &g_2376;
static int32_t *g_2381 = &g_3;
static int16_t ***g_2394 = &g_1458;
static int16_t ****g_2393 = &g_2394;
static int16_t **** const *g_2392 = &g_2393;
static union U2 g_2397 = {0x55C2L};
static union U2 g_2400 = {-6L};
static uint8_t g_2445 = 0x38L;



static int16_t  func_1(void);
static int16_t  func_7(int8_t  p_8, int32_t * p_9, int16_t  p_10, union U2  p_11, int32_t  p_12);
static int8_t  func_13(int32_t * p_14);
static int32_t  func_17(int32_t * p_18, int32_t  p_19, struct S0  p_20);
static int32_t  func_30(int32_t * const  p_31, int32_t  p_32, int32_t  p_33, int32_t * p_34, struct S1  p_35);
static int32_t * const  func_36(struct S1  p_37, uint64_t  p_38, const int32_t * const  p_39);
static struct S1  func_40(int32_t * p_41, int16_t  p_42, union U2  p_43, union U2  p_44, uint64_t  p_45);
static union U2  func_48(uint16_t  p_49);




static int16_t  func_1(void)
{ 
    uint32_t l_2[5][5][4] = {{{0xB5486B6FL,0x6CDEAD9BL,0UL,0UL},{0x4891023FL,0x4891023FL,1UL,1UL},{1UL,0UL,1UL,0x09FA85F8L},{1UL,4294967292UL,4294967291UL,1UL},{0UL,4294967292UL,0UL,0x09FA85F8L}},{{4294967292UL,1UL,0UL,0UL},{3UL,0x7278FA8FL,1UL,1UL},{0xB5486B6FL,0xE24307A3L,4294967286UL,0xB5486B6FL},{0UL,4294967293UL,0UL,0UL},{0UL,0x256EE973L,0x0348F4A8L,0x26C7F05FL}},{{0UL,4294967293UL,1UL,4294967293UL},{0xE24307A3L,6UL,1UL,0UL},{6UL,0x09FA85F8L,0x26C7F05FL,0xCC5D9B4EL},{0x7278FA8FL,0xE24307A3L,0x6CDEAD9BL,4294967294UL},{0x7278FA8FL,1UL,0x26C7F05FL,0UL}},{{6UL,4294967294UL,1UL,4294967293UL},{0xE24307A3L,4294967292UL,1UL,0x7278FA8FL},{0UL,0UL,0x0348F4A8L,0x09FA85F8L},{0UL,4294967294UL,0UL,3UL},{0UL,0x7278FA8FL,4294967286UL,4294967294UL}},{{0xB5486B6FL,1UL,1UL,0xB5486B6FL},{3UL,0x09FA85F8L,0UL,0x0348F4A8L},{4294967292UL,0x256EE973L,0UL,4294967293UL},{0UL,0x26C7F05FL,4294967291UL,4294967293UL},{1UL,0x256EE973L,1UL,0x0348F4A8L}}};
    int32_t *l_2001 = (void*)0;
    struct S0 l_2015 = {0xFD726202D8B4EB52LL,-1L,-1L,0x3FF5L,1UL,65526UL,0L,0x9861742BL};
    int32_t l_2043[1][4][7];
    const uint32_t l_2080 = 18446744073709551615UL;
    uint8_t l_2082 = 6UL;
    int32_t *l_2083 = (void*)0;
    int32_t *l_2084 = &g_16;
    int32_t *l_2085 = &g_1578.f2;
    int32_t *l_2086 = &l_2043[0][1][6];
    int32_t *l_2087[4][3] = {{(void*)0,(void*)0,(void*)0},{&g_16,&g_16,&g_16},{(void*)0,(void*)0,(void*)0},{&g_16,&g_16,&g_16}};
    uint8_t l_2088[3];
    uint16_t ***l_2095 = &g_88;
    uint16_t *** const *l_2094 = &l_2095;
    uint16_t *** const *l_2096 = &l_2095;
    uint16_t ****l_2111 = (void*)0;
    uint16_t *****l_2110 = &l_2111;
    int16_t *l_2128 = &g_1720;
    uint32_t l_2152 = 8UL;
    int16_t ***l_2153 = &g_1458;
    uint16_t l_2158 = 0x854EL;
    const int32_t l_2159 = (-6L);
    struct S1 l_2160 = {0x5F9BE20CL};
    struct S1 **l_2208[5] = {&g_135,&g_135,&g_135,&g_135,&g_135};
    struct S1 **l_2209[1][4] = {{&g_135,&g_135,&g_135,&g_135}};
    int32_t l_2249 = 0xC012D87CL;
    uint64_t **l_2293 = &g_2292;
    uint32_t l_2311 = 4294967293UL;
    uint32_t l_2342 = 0x1602A050L;
    const struct S0 ** const l_2368[1][1] = {{(void*)0}};
    const int64_t *****l_2379[1];
    union U2 *l_2399 = &g_2400;
    uint32_t **l_2468 = (void*)0;
    int32_t *l_2475[6][6] = {{&g_3,&g_126[0][0],&g_126[0][0],&g_3,&g_3,&g_126[0][0]},{&g_3,&g_126[0][0],&g_3,&g_3,&g_3,&g_126[0][0]},{&g_86,&g_126[0][0],&g_126[0][0],&g_86,&g_3,&g_3},{&g_3,&g_126[0][0],&g_126[0][0],&g_3,&g_3,&g_126[0][0]},{&g_3,&g_126[0][0],&g_3,&g_3,&g_3,&g_126[0][0]},{&g_86,&g_126[0][0],&g_126[0][0],&g_86,&g_3,&g_3}};
    int32_t l_2479 = (-9L);
    int i, j, k;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 7; k++)
                l_2043[i][j][k] = (-1L);
        }
    }
    for (i = 0; i < 3; i++)
        l_2088[i] = 8UL;
    for (i = 0; i < 1; i++)
        l_2379[i] = (void*)0;
    for (g_3 = 3; (g_3 >= 0); g_3 -= 1)
    { 
        return l_2[3][2][3];
    }
    for (g_3 = 0; (g_3 != (-28)); g_3 = safe_sub_func_int64_t_s_s(g_3, 4))
    { 
        int32_t l_6 = 0xFB26C4F3L;
        int32_t *l_1896 = (void*)0;
        union U2 l_1897 = {0x9C26L};
        int16_t l_2028 = (-9L);
        uint32_t l_2035[4] = {18446744073709551608UL,18446744073709551608UL,18446744073709551608UL,18446744073709551608UL};
        int32_t l_2044[5] = {0x3ED53723L,0x3ED53723L,0x3ED53723L,0x3ED53723L,0x3ED53723L};
        uint16_t * const *l_2061 = &g_89;
        uint64_t l_2069 = 0xDFA637B32A2A3F31LL;
        int i;
    }
    --l_2088[0];
lbl_2099:
    for (g_231.f2 = 0; (g_231.f2 == (-30)); g_231.f2 = safe_sub_func_uint16_t_u_u(g_231.f2, 5))
    { 
        struct S1 l_2093 = {0xA4472519L};
        int32_t *l_2097 = &g_126[0][0];
        int32_t **l_2098 = &l_2087[2][2];
        (*g_135) = l_2093;
        l_2096 = l_2094;
        (*l_2098) = l_2097;
        if (g_231.f2)
            goto lbl_2099;
    }
    if ((safe_sub_func_int16_t_s_s((safe_sub_func_uint16_t_u_u((((((safe_rshift_func_uint8_t_u_s(((safe_mul_func_uint16_t_u_u((safe_lshift_func_uint8_t_u_s(((**g_1458) | ((l_2110 != (void*)0) , (+(*l_2086)))), 0)), (**g_88))) <= (*l_2084)), ((safe_mod_func_int64_t_s_s((0xB4B8L > (**g_704)), (*l_2086))) != 0UL))) ^ (*l_2086)) | 0x5DC5F2C1F00486D2LL) != (*l_2086)) , 2UL), (****g_1118))), 65531UL)))
    { 
        struct S1 l_2117 = {4294967295UL};
        int16_t l_2119 = 5L;
        int32_t l_2123 = (-8L);
        uint8_t *l_2135[1];
        struct S1 **l_2147 = (void*)0;
        struct S1 ***l_2146 = &l_2147;
        struct S1 ****l_2145 = &l_2146;
        int32_t **l_2161 = &g_1208;
        int i;
        for (i = 0; i < 1; i++)
            l_2135[i] = &g_148;
        for (g_314 = (-26); (g_314 >= 24); g_314 = safe_add_func_uint64_t_u_u(g_314, 5))
        { 
            struct S1 l_2118 = {0x8A17847CL};
            l_2118 = (l_2117 = (*g_156));
            if (g_231.f2)
                goto lbl_2120;
        }
lbl_2120:
        (*l_2084) |= l_2119;
        l_2123 ^= (safe_mod_func_int16_t_s_s((l_2119 >= 0x0E2AL), 0x560CL));
        (*g_319) = ((*l_2084) = (((*g_370) = ((((safe_mul_func_int16_t_s_s((safe_lshift_func_int8_t_s_s((1L < ((void*)0 != l_2128)), (safe_sub_func_uint16_t_u_u((g_125 , (safe_sub_func_uint8_t_u_u((safe_mul_func_uint8_t_u_u((--g_1928[1][4][3]), g_1953[5][0][2])), g_231.f0))), (safe_rshift_func_int16_t_s_s((safe_unary_minus_func_uint16_t_u((safe_rshift_func_uint8_t_u_u(((((*g_311) = (((safe_mod_func_uint32_t_u_u(l_2117.f0, (*g_1219))) && (**g_704)) ^ (*l_2086))) || g_231.f0) == (*l_2086)), l_2119)))), 8)))))), 0xFC9BL)) != g_94.f6) != (*l_2086)) , l_2145)) == &l_2146));
        (*l_2161) = func_36((*g_135), (safe_mul_func_int16_t_s_s((safe_lshift_func_uint8_t_u_s((l_2152 = 252UL), 0)), (-10L))), func_36(((((void*)0 != l_2153) >= (((*g_319) |= (*l_2084)) < ((((safe_add_func_int16_t_s_s((safe_div_func_int16_t_s_s(l_2158, l_2159)), l_2117.f0)) >= (****g_1118)) || 0xCEB43704L) >= 0xF6L))) , l_2160), g_2047, &l_2123));
    }
    else
    { 
        int64_t *****l_2166 = &g_1487;
        const int32_t l_2167 = (-4L);
        struct S1 l_2170[4] = {{4294967295UL},{4294967295UL},{4294967295UL},{4294967295UL}};
        int32_t l_2171 = (-3L);
        int8_t l_2198[1];
        struct S1 **l_2206 = &g_135;
        uint32_t l_2221[5];
        uint64_t l_2236 = 0UL;
        const uint64_t *l_2270 = &g_2271[0];
        uint32_t l_2276[3][6] = {{18446744073709551615UL,1UL,18446744073709551615UL,18446744073709551615UL,1UL,18446744073709551615UL},{18446744073709551615UL,1UL,18446744073709551615UL,18446744073709551615UL,1UL,18446744073709551615UL},{18446744073709551615UL,1UL,18446744073709551615UL,18446744073709551615UL,1UL,18446744073709551615UL}};
        int32_t *l_2308 = &g_126[0][0];
        const struct S1 l_2314 = {0UL};
        struct S0 *l_2390 = &g_1273;
        int32_t l_2430 = 0xDDD1E68DL;
        int32_t l_2456[4][1][4] = {{{2L,0x6548F5A9L,0x04FEC563L,0x6548F5A9L}},{{0x6548F5A9L,0x113D1583L,0x04FEC563L,0x04FEC563L}},{{2L,2L,0x6548F5A9L,0x04FEC563L}},{{0x04FEC563L,2L,0x04FEC563L,0x7A423BFDL}}};
        int16_t l_2461 = (-8L);
        uint32_t **l_2470[7] = {&g_1418,&g_1418,&g_1418,&g_1418,&g_1418,&g_1418,&g_1418};
        union U2 l_2476 = {6L};
        int i, j, k;
        for (i = 0; i < 1; i++)
            l_2198[i] = (-2L);
        for (i = 0; i < 5; i++)
            l_2221[i] = 0UL;
        if ((safe_add_func_uint32_t_u_u((safe_mul_func_uint8_t_u_u((((*l_2166) = &g_1488) != (void*)0), 0xD4L)), (l_2167 ^ (safe_add_func_uint8_t_u_u((1L > ((*g_311) < (l_2170[2] , l_2171))), (**g_809)))))))
        { 
            union U2 l_2173 = {0x04A9L};
            int64_t *l_2176 = &g_94.f6;
            int32_t l_2188 = 0x1A433722L;
            int32_t l_2189[3][7][7] = {{{0L,0x91D57D03L,0xF11211A3L,(-1L),1L,0L,(-5L)},{0L,(-10L),0xE7367817L,0x37DF8ADAL,0xE7367817L,(-10L),0L},{(-1L),8L,0xC4370E8EL,0xF11211A3L,0x6F514B54L,(-5L),(-1L)},{0xC99CF6F6L,1L,0x259689F6L,0x01EBC019L,6L,7L,7L},{0x89753C0BL,0L,0xC4370E8EL,0L,0x89753C0BL,0L,0x91D57D03L},{6L,0xDCB609BEL,0xE7367817L,0L,0x37DF8ADAL,0xF917D755L,6L},{0L,1L,0xF11211A3L,(-6L),0xC4370E8EL,0xC4370E8EL,(-6L)}},{{6L,0L,6L,0x2DD55702L,0xCF206747L,1L,0xFD33A57CL},{0x89753C0BL,1L,0x4AB6811FL,0L,(-6L),0x91D57D03L,(-1L)},{0xC99CF6F6L,6L,1L,(-10L),(-10L),1L,6L},{(-1L),0x6F514B54L,(-1L),1L,1L,0xC4370E8EL,1L},{0L,0x259689F6L,0x70195056L,0xE7367817L,0xFD33A57CL,0xF917D755L,0x01EBC019L},{0L,(-5L),1L,1L,(-5L),0L,8L},{0x70195056L,0x01EBC019L,0xC99CF6F6L,(-10L),0x2DD55702L,7L,0xCF206747L}},{{1L,(-6L),0x6F514B54L,0L,0xF11211A3L,(-5L),0xF11211A3L},{0x2DD55702L,0x01EBC019L,0x01EBC019L,0x2DD55702L,0x259689F6L,(-10L),0xF917D755L},{0xC4370E8EL,(-5L),1L,(-6L),(-1L),0L,1L},{7L,0x259689F6L,0xF917D755L,0L,0x70195056L,0L,0xF917D755L},{0x6F514B54L,0x6F514B54L,0x91D57D03L,0L,0L,8L,0xF11211A3L},{0x07FF4A3EL,6L,0x37DF8ADAL,0x01EBC019L,7L,0xE7367817L,0xCF206747L},{8L,1L,0L,0xF11211A3L,0L,1L,8L}}};
            struct S1 l_2214 = {0x219B410DL};
            uint32_t l_2218 = 4294967293UL;
            int i, j, k;
            if ((~(9L >= (l_2173 , ((safe_sub_func_uint32_t_u_u(4UL, 0xBD80CEA7L)) , ((((*l_2176) = ((*l_2084) |= 6L)) && (((safe_add_func_uint8_t_u_u((safe_div_func_uint8_t_u_u(((safe_mul_func_int8_t_s_s((l_2170[2].f0 , ((0xE24FL > (**g_704)) , 0L)), g_853.f1)) & l_2170[2].f0), g_314)), l_2173.f0)) != 18446744073709551608UL) | 0L)) , g_665))))))
            { 
                uint64_t l_2215[2];
                uint8_t l_2226[7][7] = {{0xFEL,0UL,8UL,246UL,2UL,0x68L,0xF6L},{0x60L,0xDBL,0x61L,0xF6L,0xFEL,255UL,255UL},{0x61L,0UL,8UL,0UL,0x61L,0xD8L,0xD2L},{0xD2L,0UL,255UL,0UL,246UL,1UL,0xFEL},{0UL,0xDBL,246UL,0x2CL,8UL,0xD2L,1UL},{0xFEL,0xDBL,0xFEL,0xD2L,0x2CL,0xD8L,1UL},{0UL,255UL,0UL,246UL,1UL,0xFEL,255UL}};
                struct S1 l_2232[5] = {{0x63B6EFB6L},{0x63B6EFB6L},{0x63B6EFB6L},{0x63B6EFB6L},{0x63B6EFB6L}};
                int32_t l_2246 = 1L;
                int i, j;
                for (i = 0; i < 2; i++)
                    l_2215[i] = 9UL;
lbl_2193:
                (*g_319) = ((*l_2084) = ((safe_unary_minus_func_uint8_t_u((safe_lshift_func_int8_t_s_u(((**g_809) = (**g_809)), 5)))) <= l_2167));
                if ((safe_rshift_func_int8_t_s_u((l_2170[2].f0 && (****g_1118)), 3)))
                { 
                    uint32_t l_2190 = 0x0169E9DCL;
                    struct S1 ***l_2207 = (void*)0;
                    --l_2190;
                    if (l_2171)
                        goto lbl_2193;
                    (*l_2086) = (safe_mod_func_int32_t_s_s(((*g_319) = (((l_2171 ^= (*g_319)) != ((((&g_1118 == &g_870) > ((*g_705) | (safe_rshift_func_uint8_t_u_u((7UL > l_2167), ((0x44L >= g_1526) > (*g_311)))))) , &g_1047) != (void*)0)) , l_2170[2].f0)), l_2198[0]));
                    (*g_319) |= ((safe_lshift_func_uint8_t_u_u(((~(safe_lshift_func_uint16_t_u_s(((****l_2094)--), (*g_705)))) , 0x9FL), ((l_2208[0] = l_2206) != (l_2209[0][1] = l_2209[0][1])))) , (l_2198[0] < ((**g_1118) == (**g_870))));
                }
                else
                { 
                    uint64_t l_2213 = 0x1296EA952B114562LL;
                    const int32_t * const l_2216 = &g_3;
                    int32_t **l_2217 = &l_2085;
                    l_2171 = (~l_2173.f0);
                    (*l_2217) = func_36((*g_135), (safe_add_func_int16_t_s_s(l_2213, (**g_704))), func_36(l_2214, l_2215[0], l_2216));
                    ++l_2218;
                    l_2221[3]--;
                }
                for (g_1657 = 7; (g_1657 >= 11); g_1657 = safe_add_func_uint64_t_u_u(g_1657, 2))
                { 
                    const int32_t **l_2229 = &g_1219;
                    l_2226[2][6]--;
                    (*g_319) = l_2171;
                    (*l_2229) = &l_2159;
                }
                for (g_1521.f2 = (-9); (g_1521.f2 >= (-7)); g_1521.f2++)
                { 
                    uint32_t l_2233 = 4294967287UL;
                    int32_t **l_2234[6] = {&l_2086,&l_2083,&l_2083,&l_2086,&l_2083,&l_2083};
                    int32_t **l_2235 = &l_2087[2][2];
                    union U2 l_2242[6][5][3] = {{{{0x67EFL},{-8L},{-8L}},{{0xF5B8L},{0x6D17L},{0xBD65L}},{{0x33C2L},{1L},{-8L}},{{6L},{0xF13BL},{6L}},{{0xA7B8L},{0L},{0L}}},{{{0xF5B8L},{0xF13BL},{1L}},{{1L},{1L},{-1L}},{{0x32F6L},{0x6D17L},{6L}},{{1L},{-8L},{0L}},{{0xF5B8L},{0L},{0xBD65L}}},{{{0xA7B8L},{1L},{0L}},{{6L},{-3L},{6L}},{{0x33C2L},{0L},{-1L}},{{0xF5B8L},{-3L},{1L}},{{0x67EFL},{1L},{0L}}},{{{0x32F6L},{0L},{6L}},{{0x67EFL},{-8L},{-8L}},{{0xF5B8L},{0x6D17L},{0xBD65L}},{{0x33C2L},{1L},{-8L}},{{6L},{0xF13BL},{6L}}},{{{0xA7B8L},{0L},{0L}},{{0xF5B8L},{0xF13BL},{1L}},{{1L},{1L},{-1L}},{{0x32F6L},{0x6D17L},{6L}},{{1L},{-8L},{0L}}},{{{0xF5B8L},{0L},{0xBD65L}},{{0xA7B8L},{1L},{0L}},{{6L},{-3L},{6L}},{{0x33C2L},{0L},{-1L}},{{0xF5B8L},{-3L},{1L}}}};
                    int i, j, k;
                    (*l_2235) = func_36(l_2232[0], l_2233, &l_2171);
                    if (l_2236)
                        break;
                    l_2171 |= ((((*l_2084) >= ((safe_rshift_func_int16_t_s_s((((!(*g_705)) || ((*g_311) = (0x190149DE5A1FFE95LL || ((l_2242[0][2][1] , (safe_mod_func_int64_t_s_s(((*l_2176) = (l_2246 |= (l_2170[2].f0 < ((*l_2086) &= (0x148210F1A0D8BC6FLL & (+(((**l_2094) = &g_89) == (void*)0))))))), 3UL))) < l_2215[1])))) & (*l_2084)), 11)) != l_2232[0].f0)) ^ (**g_704)) > g_1017);
                    (*l_2085) = (safe_add_func_int16_t_s_s(l_2215[0], ((*g_1520) , ((*l_2128) ^= (**g_704)))));
                    return l_2249;
                }
                (*l_2086) ^= ((*g_319) |= l_2167);
            }
            else
            { 
                int64_t l_2260 = 0xFB15FF64165A7107LL;
                int32_t l_2272 = 0L;
                int32_t l_2275 = (-10L);
                union U2 **l_2279 = &g_1310;
                for (g_665 = 23; (g_665 != 15); g_665 = safe_sub_func_uint64_t_u_u(g_665, 8))
                { 
                    int32_t *l_2252 = &l_2171;
                    int32_t **l_2253 = &l_2085;
                    uint64_t *l_2266[2][7] = {{&g_572,&g_572,&g_572,&g_572,&g_572,&g_572,&g_572},{&l_2236,&g_572,&l_2236,&g_572,&l_2236,&g_572,&l_2236}};
                    uint64_t **l_2265 = &l_2266[0][2];
                    const uint64_t **l_2267 = (void*)0;
                    const uint64_t *l_2269 = &g_1017;
                    const uint64_t **l_2268[3];
                    int32_t l_2273 = 0xB706C78AL;
                    int32_t l_2274 = 0x6A3E6090L;
                    int i, j;
                    for (i = 0; i < 3; i++)
                        l_2268[i] = &l_2269;
                    (*l_2253) = l_2252;
                    l_2272 ^= (l_2170[2].f0 < (safe_add_func_uint64_t_u_u((safe_rshift_func_uint16_t_u_u((((((safe_div_func_int16_t_s_s((**g_1458), 1L)) > (0xF086L >= ((l_2260 && (safe_lshift_func_uint16_t_u_u((safe_mod_func_int64_t_s_s((((*l_2265) = l_2176) != (l_2270 = l_2176)), (*l_2252))), l_2189[1][3][5]))) > (-8L)))) <= l_2260) >= 255UL) || 5UL), l_2167)), l_2170[2].f0)));
                    if ((*l_2084))
                        continue;
                    ++l_2276[2][5];
                    if ((*g_1219))
                        continue;
                }
                (*l_2279) = &g_231;
            }
            for (l_2173.f0 = (-11); (l_2173.f0 == 0); l_2173.f0 = safe_add_func_int64_t_s_s(l_2173.f0, 9))
            { 
                return (*g_705);
            }
        }
        else
        { 
            struct S1 l_2282 = {0x8D050E87L};
            uint8_t l_2283 = 247UL;
            (*g_135) = l_2282;
            for (g_1521.f5 = 0; (g_1521.f5 <= 0); g_1521.f5 += 1)
            { 
                ++l_2283;
                (*g_319) &= (&l_2282 == ((****g_1118) , (*l_2206)));
                return (**g_1458);
            }
        }
        for (g_1810 = (-8); (g_1810 <= (-6)); g_1810 = safe_add_func_int32_t_s_s(g_1810, 1))
        { 
            uint64_t ***l_2289 = (void*)0;
            (*l_2086) = ((~((g_2290 = l_2289) == &g_2291)) <= ((g_572 , l_2293) == &g_2292));
            g_2294 = ((**g_1487) = (**g_1487));
            for (g_572 = (-18); (g_572 >= 31); g_572 = safe_add_func_int32_t_s_s(g_572, 1))
            { 
                uint16_t l_2297 = 0x9028L;
                ++l_2297;
            }
        }
        for (g_2047 = 5; (g_2047 < 53); g_2047++)
        { 
            struct S1 l_2315 = {0xD8E6AEA1L};
            struct S1 * const **l_2323 = (void*)0;
            struct S1 * const ***l_2322[6] = {&l_2323,&l_2323,&l_2323,&l_2323,&l_2323,&l_2323};
            int32_t l_2324 = 0x660F7E73L;
            int i;
            for (g_85 = 0; (g_85 < (-15)); g_85--)
            { 
                int32_t **l_2306[3][3][6] = {{{(void*)0,&l_2083,&l_2086,&l_2001,(void*)0,&l_2084},{&l_2001,(void*)0,&l_2084,&l_2085,(void*)0,&l_2086},{(void*)0,&g_1208,&l_2084,&l_2083,&l_2083,&l_2084}},{{&l_2087[2][2],&l_2087[2][2],&l_2086,(void*)0,&l_2085,&l_2084},{(void*)0,&l_2085,&l_2084,(void*)0,&l_2001,&l_2086},{&l_2087[2][0],(void*)0,&l_2084,(void*)0,&l_2087[2][2],&l_2084}},{{&l_2083,(void*)0,&l_2086,&g_1208,&l_2087[2][0],&l_2084},{&g_1208,&l_2087[2][0],&l_2084,&l_2087[2][0],&g_1208,&l_2086},{&l_2085,&l_2001,&l_2084,&l_2087[2][2],(void*)0,&l_2084}}};
                struct S1 l_2309 = {0xEA685C83L};
                int32_t *l_2310 = &g_126[2][0];
                int i, j, k;
                if ((safe_sub_func_int8_t_s_s(0L, ((g_2307 = &l_2171) != (l_2308 = (void*)0)))))
                { 
                    (**l_2206) = l_2309;
                    l_2086 = l_2310;
                    --l_2311;
                }
                else
                { 
                    if ((*g_319))
                        break;
                }
                l_2315 = l_2314;
                for (g_1810 = 3; (g_1810 >= 0); g_1810 -= 1)
                { 
                    return (*g_705);
                }
                (*g_2307) |= ((safe_lshift_func_uint16_t_u_s((((*l_2128) = (safe_div_func_int8_t_s_s((*l_2084), (((safe_mod_func_int32_t_s_s(((l_2315.f0 , func_48((((void*)0 == l_2322[2]) > l_2315.f0))) , (((**g_88) >= l_2324) > 1UL)), 0xBFF44CACL)) && l_2315.f0) , (-7L))))) <= 0UL), (*l_2310))) ^ l_2324);
            }
            (*l_2086) &= ((*g_1047) , 0x1571C097L);
        }
        if (((*l_2084) &= 0xC257A10DL))
        { 
            int32_t l_2327 = 1L;
            int32_t l_2328[3][5] = {{1L,3L,1L,1L,3L},{1L,3L,1L,1L,3L},{1L,3L,1L,1L,3L}};
            uint64_t *l_2330[4][4] = {{&g_754,&g_754,&l_2236,&g_754},{&g_754,(void*)0,(void*)0,&g_754},{(void*)0,&g_754,(void*)0,(void*)0},{&g_754,&g_754,&l_2236,&g_754}};
            uint8_t *l_2341[7] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
            int16_t ** const *l_2347 = &g_1458;
            uint32_t l_2363 = 0UL;
            uint32_t l_2369[2];
            uint8_t l_2387 = 0UL;
            int i, j;
            for (i = 0; i < 2; i++)
                l_2369[i] = 1UL;
            (*g_319) &= ((l_2328[1][3] = (safe_div_func_int8_t_s_s(l_2327, 0xAEL))) , (((-4L) >= ((g_572 ^= (~(g_754--))) && (safe_rshift_func_uint16_t_u_s(((l_2015 , (safe_lshift_func_int16_t_s_u(l_2328[1][3], 2))) == (safe_sub_func_uint64_t_u_u((safe_add_func_int8_t_s_s(((**g_809) = ((**g_809) > (l_2342 = g_165))), l_2328[2][1])), g_94.f7))), 6)))) | 7UL));
            for (g_1521.f6 = 3; (g_1521.f6 >= (-20)); g_1521.f6--)
            { 
                int16_t ** const **l_2351[5];
                uint32_t *l_2366 = &g_109;
                const int32_t l_2367 = (-1L);
                int32_t l_2384 = 1L;
                int32_t l_2385[5];
                int16_t l_2386 = 0x2CDEL;
                struct S0 *l_2391 = (void*)0;
                union U2 **l_2398[1];
                int i;
                for (i = 0; i < 5; i++)
                    l_2351[i] = &l_2347;
                for (i = 0; i < 5; i++)
                    l_2385[i] = 9L;
                for (i = 0; i < 1; i++)
                    l_2398[i] = (void*)0;
                (*l_2086) |= (safe_add_func_uint8_t_u_u(((((g_2352 = (g_2348 = l_2347)) == (void*)0) , (safe_div_func_uint8_t_u_u(254UL, (safe_lshift_func_uint16_t_u_u((safe_div_func_int8_t_s_s(((((l_2363 ^ ((safe_add_func_uint32_t_u_u(((*g_1520) , ((*l_2366) = ((void*)0 == (**l_2347)))), l_2367)) <= 18446744073709551615UL)) , l_2368[0][0]) != &g_1047) && l_2367), 252UL)), l_2369[0]))))) && l_2221[3]), g_1017));
                for (g_1273.f2 = 19; (g_1273.f2 > (-12)); g_1273.f2 = safe_sub_func_int32_t_s_s(g_1273.f2, 6))
                { 
                    union U2 **l_2380 = &g_1310;
                    l_2171 &= (safe_mul_func_uint16_t_u_u((****g_1118), (0x219042FBL && ((~((l_2379[0] = g_2375) != &g_1487)) ^ 1L))));
                    (*l_2380) = (void*)0;
                    (*l_2086) ^= l_2367;
                    return (*g_2354);
                }
                if (((*l_2086) ^= (0UL == 1UL)))
                { 
                    int32_t **l_2382 = (void*)0;
                    int32_t **l_2383[2];
                    int i;
                    for (i = 0; i < 2; i++)
                        l_2383[i] = &l_2087[2][2];
                    l_2308 = g_2381;
                    ++l_2387;
                    if ((*g_319))
                        continue;
                }
                else
                { 
                    int16_t **** const *l_2395 = (void*)0;
                    union U2 *l_2396[4][5];
                    int i, j;
                    for (i = 0; i < 4; i++)
                    {
                        for (j = 0; j < 5; j++)
                            l_2396[i][j] = &g_2397;
                    }
                    l_2391 = l_2390;
                    l_2395 = g_2392;
                    l_2396[0][0] = &g_674;
                }
                l_2399 = &g_674;
            }
        }
        else
        { 
            int8_t l_2427[1];
            uint32_t l_2428 = 0x143C861CL;
            int32_t *l_2432[5] = {&g_2400.f2,&g_2400.f2,&g_2400.f2,&g_2400.f2,&g_2400.f2};
            int64_t *l_2435 = &g_165;
            int16_t *** const l_2465 = &g_1458;
            uint32_t l_2472 = 0UL;
            int32_t **l_2480[4][2] = {{&l_2087[2][2],&g_2381},{&l_2087[2][2],&g_2381},{&l_2087[2][2],&g_2381},{&l_2087[2][2],&g_2381}};
            int32_t **l_2481 = (void*)0;
            int32_t **l_2482 = &l_2432[0];
            int i, j;
            for (i = 0; i < 1; i++)
                l_2427[i] = 1L;
            for (g_109 = (-30); (g_109 == 35); ++g_109)
            { 
                uint32_t l_2414 = 0UL;
                const int32_t l_2429 = (-1L);
                int32_t *l_2431 = &l_2171;
                const uint64_t l_2462 = 0UL;
                int16_t l_2463[3];
                int8_t l_2469 = 0xA2L;
                int32_t l_2471 = 0x8422B37AL;
                int i;
                for (i = 0; i < 3; i++)
                    l_2463[i] = 0x3FF1L;
                if (((safe_mod_func_int32_t_s_s((safe_mod_func_int64_t_s_s((safe_mul_func_uint16_t_u_u((safe_rshift_func_int8_t_s_u((safe_add_func_uint16_t_u_u((***g_1119), ((safe_unary_minus_func_uint8_t_u((((*l_2086) = (g_126[0][0] & (248UL && (l_2414 , ((safe_rshift_func_int8_t_s_s(((safe_div_func_uint32_t_u_u((((safe_lshift_func_uint16_t_u_u((&g_1953[5][0][1] != (void*)0), (((safe_div_func_uint64_t_u_u((safe_sub_func_int32_t_s_s(((safe_sub_func_int64_t_s_s((l_2427[0] = (0x67L != (*g_311))), 0UL)) || l_2428), l_2428)), l_2429)) ^ 0xB1E5577DD4330F15LL) == (***g_1119)))) >= l_2414) , l_2414), 1L)) || (**g_809)), 0)) > 0xFE344F03L))))) > l_2428))) & 0x75698991L))), l_2428)), l_2428)), l_2428)), l_2428)) || l_2430))
                { 
                    uint64_t l_2442 = 0x5ED506CEEECAB0C5LL;
                    int32_t l_2443 = (-2L);
                    struct S1 l_2444 = {0x87AFFF8EL};
                    l_2308 = (l_2432[2] = l_2431);
                    (*l_2084) |= (l_2443 = (safe_add_func_int64_t_s_s((g_2397.f0 || ((((*g_1520) , ((*g_1047) , l_2435)) == ((**g_1488) = (**g_1488))) >= ((***g_1119) <= (safe_lshift_func_uint16_t_u_u((safe_lshift_func_uint16_t_u_u((safe_rshift_func_int8_t_s_u(((*l_2431) , (**g_809)), 6)), (*l_2308))), (*l_2308)))))), l_2442)));
                    l_2444 = (**g_155);
                    if (g_2445)
                        break;
                    if ((*l_2308))
                        break;
                }
                else
                { 
                    const int32_t l_2449[1][6] = {{0xDE5F6D2AL,0xDE5F6D2AL,0L,0xDE5F6D2AL,0xDE5F6D2AL,0L}};
                    uint64_t *l_2464 = &l_2236;
                    int i, j;
                    l_2456[0][0][3] ^= ((~(safe_add_func_uint16_t_u_u((((*g_1047) , l_2449[0][1]) >= 65531UL), ((safe_sub_func_int64_t_s_s(((*l_2435) = (safe_lshift_func_int8_t_s_s((*g_311), 5))), (0UL || ((safe_mod_func_int32_t_s_s(((l_2449[0][1] && (((*l_2431) ^ 65532UL) != 0L)) & (*g_319)), 0x86C3250CL)) , (*l_2431))))) | (*g_1219))))) != (**g_1458));
                    (*g_319) = ((safe_lshift_func_int8_t_s_u((safe_add_func_uint32_t_u_u((*l_2431), l_2461)), ((l_2462 , (((*l_2464) ^= l_2463[0]) != (((*g_89) && (((l_2465 != ((**g_2392) = (*g_2393))) < 1L) ^ (*l_2431))) != l_2449[0][4]))) <= l_2449[0][1]))) && 0x043E3545L);
                    (*g_319) = (safe_rshift_func_int16_t_s_s(1L, 12));
                    (*l_2431) = ((g_55 , l_2468) != (l_2469 , l_2470[5]));
                }
                l_2472++;
            }
            (*l_2482) = func_36(func_40(l_2475[3][1], (**g_1458), l_2476, ((safe_lshift_func_int16_t_s_s((**g_2349), 2)) , l_2476), (((l_2479 != ((void*)0 != &l_2427[0])) , (**g_88)) | 0xDAF9L)), l_2198[0], &l_2456[0][0][3]);
            for (g_1273.f1 = 0; g_1273.f1 < 6; g_1273.f1 += 1)
            {
                for (g_136.f0 = 0; g_136.f0 < 1; g_136.f0 += 1)
                {
                    for (g_853.f4 = 0; g_853.f4 < 4; g_853.f4 += 1)
                    {
                        g_1953[g_1273.f1][g_136.f0][g_853.f4] = 0xEF52D114L;
                    }
                }
            }
            (*l_2482) = &l_2456[0][0][3];
        }
    }
    return (***g_2348);
}



static int16_t  func_7(int8_t  p_8, int32_t * p_9, int16_t  p_10, union U2  p_11, int32_t  p_12)
{ 
    int32_t l_1923 = 4L;
    int32_t l_1924 = 0L;
    int32_t l_1925 = 0xE17339DAL;
    int32_t l_1926[1][5] = {{0xC4EDAFDCL,0xC4EDAFDCL,0xC4EDAFDCL,0xC4EDAFDCL,0xC4EDAFDCL}};
    struct S1 l_1966 = {0xEECCB5E6L};
    int32_t l_1984[3];
    union U2 l_1986 = {0xC161L};
    int64_t l_1997 = 0xB60C8035148EE44BLL;
    int32_t *l_2000 = &l_1926[0][3];
    int i, j;
    for (i = 0; i < 3; i++)
        l_1984[i] = 0x63E971B0L;
    for (g_1273.f2 = 0; (g_1273.f2 <= (-1)); g_1273.f2 = safe_sub_func_uint8_t_u_u(g_1273.f2, 9))
    { 
        int32_t *l_1904 = &g_674.f2;
        int32_t *l_1905 = &g_126[0][0];
        int32_t *l_1906 = &g_231.f2;
        int32_t *l_1907 = &g_126[6][0];
        int32_t *l_1908 = &g_231.f2;
        int32_t *l_1909 = &g_231.f2;
        int32_t *l_1910 = &g_86;
        int32_t *l_1911 = &g_126[0][0];
        int32_t *l_1912 = (void*)0;
        int32_t *l_1913 = &g_1311.f2;
        int32_t *l_1914 = &g_674.f2;
        int32_t *l_1915 = (void*)0;
        int32_t *l_1916 = &g_86;
        int32_t *l_1917 = &g_674.f2;
        int32_t *l_1918 = &g_126[3][0];
        int32_t *l_1919 = (void*)0;
        int32_t *l_1920 = (void*)0;
        int32_t *l_1921 = &g_231.f2;
        int32_t *l_1922[1][3][7] = {{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,&g_3,(void*)0,(void*)0,&g_3,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}}};
        int16_t l_1927 = 0x08D1L;
        struct S1 **** const *l_1935 = &g_371;
        const int32_t **l_1969[3][3];
        const int32_t ***l_1968 = &l_1969[1][2];
        const int32_t ****l_1967 = &l_1968;
        uint32_t l_1970 = 1UL;
        uint16_t l_1990 = 1UL;
        struct S1 l_1998[6] = {{0x6580431FL},{0x84752A69L},{0x6580431FL},{0x6580431FL},{0x84752A69L},{0x6580431FL}};
        int i, j, k;
        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 3; j++)
                l_1969[i][j] = &g_1219;
        }
        g_1928[1][4][3]--;
        (*l_1910) &= l_1925;
        for (g_1810 = (-7); (g_1810 >= (-16)); g_1810 = safe_sub_func_uint8_t_u_u(g_1810, 8))
        { 
            struct S1 l_1939[2] = {{0xFA143900L},{0xFA143900L}};
            int32_t l_1952[2];
            int i;
            for (i = 0; i < 2; i++)
                l_1952[i] = 0xAA6BD6E3L;
            (*l_1907) ^= (l_1926[0][3] = (safe_mod_func_uint64_t_u_u((&g_366 == l_1935), g_15[0])));
            if ((*g_1219))
            { 
                int32_t *l_1936 = &g_126[0][0];
                l_1936 = l_1936;
            }
            else
            { 
                uint8_t l_1937[1];
                int16_t l_1938 = (-2L);
                int i;
                for (i = 0; i < 1; i++)
                    l_1937[i] = 2UL;
                (*l_1908) = ((((*l_1918) > (l_1937[0] >= l_1938)) , (g_94.f5 , (p_11.f0 < ((func_48(p_10) , 0x6A127581DB23F980LL) && p_8)))) >= 0x5EL);
            }
            p_9 = func_36((l_1939[1] = l_1939[1]), (safe_mod_func_int8_t_s_s((0x628DC99A12B32A8CLL && ((safe_sub_func_uint64_t_u_u((((**g_704) ^ 0xF610L) <= g_1720), (((safe_div_func_uint16_t_u_u(((safe_div_func_uint8_t_u_u((safe_lshift_func_int16_t_s_u(0xD283L, 3)), (l_1923 = (safe_rshift_func_uint8_t_u_s(l_1952[1], l_1952[1]))))) > g_1953[5][0][2]), p_12)) ^ p_12) | 7L))) || 0UL)), p_12)), &l_1925);
        }
        if ((((*l_1911) = ((safe_sub_func_int64_t_s_s((safe_add_func_uint64_t_u_u((safe_mul_func_int8_t_s_s(((l_1925 ^= ((safe_lshift_func_uint16_t_u_u(((safe_rshift_func_uint8_t_u_u(((safe_sub_func_uint8_t_u_u((((l_1966 , (l_1926[0][3] = (((((*l_1967) = (void*)0) == (void*)0) , func_40(&p_12, (*g_705), func_48(p_12), p_11, p_12)) , l_1923))) && p_8) == g_94.f7), g_15[0])) < p_8), 7)) , 0xCA64L), 8)) >= p_8)) >= p_11.f0), 0xCAL)), 0x749799E531D8240ELL)), l_1923)) & l_1970)) | l_1966.f0))
        { 
            int64_t *l_1983 = &g_165;
            uint64_t l_1985[2];
            uint16_t l_1987 = 0x501FL;
            int32_t l_1989 = 0xBC44E2EFL;
            int i;
            for (i = 0; i < 2; i++)
                l_1985[i] = 0xDEB4A392C5F85AB4LL;
            (*l_1913) = (((safe_rshift_func_uint16_t_u_u((safe_div_func_int64_t_s_s((p_10 , (l_1984[1] ^= (safe_add_func_uint32_t_u_u((safe_lshift_func_uint8_t_u_u((((*l_1905) > 65535UL) <= ((*l_1916) ^ (safe_add_func_uint64_t_u_u(g_853.f3, (((safe_add_func_int16_t_s_s(0xEA7DL, ((((((*l_1983) = (-1L)) && 0xA0BE82FEC38397F7LL) , 0x132652A3L) , 0x11FCAB24L) || 0L))) , p_11.f0) >= p_12))))), 2)), p_11.f0)))), l_1924)), 1)) <= (*g_89)) > l_1985[0]);
            (*g_135) = func_40(&p_12, l_1924, (*g_1310), l_1986, l_1987);
            l_1990++;
            if (l_1987)
                continue;
            if (l_1924)
            { 
                int32_t *l_1993 = &g_1311.f2;
                for (g_1273.f6 = 0; (g_1273.f6 <= 0); g_1273.f6 += 1)
                { 
                    uint16_t **l_1995 = &g_89;
                    int32_t l_1996 = 0xE6871452L;
                    l_1993 = &p_12;
                    (*l_1921) = (*l_1993);
                    (***g_869) = ((~p_10) , l_1995);
                    if (l_1996)
                        continue;
                    (*g_319) ^= l_1997;
                }
                if (l_1925)
                    continue;
            }
            else
            { 
                int32_t **l_1999 = &l_1921;
                (*l_1999) = func_36(l_1998[0], (p_8 , g_765.f0), &p_12);
            }
        }
        else
        { 
            l_2000 = ((*g_705) , (void*)0);
        }
    }
    return p_8;
}



static int8_t  func_13(int32_t * p_14)
{ 
    struct S0 *l_1564 = &g_853;
    int32_t l_1565 = 0x7A2FDFDCL;
    union U2 * const l_1566 = &g_231;
    union U2 *l_1573 = (void*)0;
    uint64_t *l_1586 = &g_754;
    uint64_t **l_1585 = &l_1586;
    uint64_t l_1594 = 0x46B525096EDA0F4CLL;
    int64_t l_1595 = 1L;
    int32_t l_1676 = 0xBB3273B9L;
    int32_t l_1691 = 0x830BC864L;
    int32_t l_1692[1];
    uint16_t l_1701 = 65535UL;
    int8_t ***l_1773 = &g_809;
    int64_t l_1796[1][7];
    int64_t l_1809[5];
    int32_t *l_1849[2][2][5] = {{{&l_1691,&l_1692[0],&l_1565,&l_1691,(void*)0},{&l_1676,&l_1691,&l_1692[0],&l_1691,&l_1676}},{{&l_1565,&g_126[1][0],&l_1692[0],(void*)0,&g_126[1][0]},{&l_1676,&l_1692[0],&l_1692[0],&l_1676,(void*)0}}};
    uint64_t l_1854 = 0UL;
    uint64_t l_1856 = 0x70596E36C5F48C7ELL;
    struct S1 l_1880 = {0xC6F2E435L};
    int i, j, k;
    for (i = 0; i < 1; i++)
        l_1692[i] = (-5L);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 7; j++)
            l_1796[i][j] = 0xBD85AEB9AF916989LL;
    }
    for (i = 0; i < 5; i++)
        l_1809[i] = 0x93B47CF18E6930E6LL;
    for (g_16 = 0; (g_16 <= 0); g_16 += 1)
    { 
        struct S0 l_21 = {0x826422F8DC70E74BLL,0x9CECL,0x2DL,4L,0UL,65535UL,0x883FAA058A13C444LL,0x9CADCDA6L};
        uint16_t ***l_1546 = &g_88;
        uint16_t ****l_1545 = &l_1546;
        uint16_t ****l_1548 = &l_1546;
        union U2 *l_1577 = &g_1578;
        int32_t l_1583 = (-1L);
        uint64_t **l_1584[2];
        struct S0 ** const l_1604 = (void*)0;
        int32_t *l_1680 = (void*)0;
        int32_t l_1693 = 0x41951802L;
        int32_t l_1694 = 0x524C7FF4L;
        int32_t l_1695 = 0x5FB1CEFAL;
        int32_t l_1696 = 0x55FC3E2EL;
        int32_t l_1697 = (-1L);
        int32_t l_1698 = 0xD44552CEL;
        int32_t l_1699 = (-1L);
        uint64_t l_1704 = 18446744073709551615UL;
        struct S1 ***** const l_1735 = &g_371;
        uint32_t l_1747 = 0x4F323905L;
        uint32_t l_1771 = 0xDD1F13A3L;
        int64_t * const *l_1825[2];
        int64_t * const **l_1824[5] = {&l_1825[1],&l_1825[1],&l_1825[1],&l_1825[1],&l_1825[1]};
        int64_t * const ***l_1823[1];
        uint32_t l_1840 = 0x9801E7ABL;
        uint8_t l_1845 = 252UL;
        uint16_t l_1855 = 1UL;
        int64_t l_1887[3];
        int32_t l_1888 = (-1L);
        int32_t l_1889 = 0x5BDAFC9FL;
        int8_t l_1890 = 0xEFL;
        int32_t l_1891 = 0x0C4AFADCL;
        int32_t l_1892 = 0L;
        int i;
        for (i = 0; i < 2; i++)
            l_1584[i] = (void*)0;
        for (i = 0; i < 2; i++)
            l_1825[i] = (void*)0;
        for (i = 0; i < 1; i++)
            l_1823[i] = &l_1824[3];
        for (i = 0; i < 3; i++)
            l_1887[i] = 1L;
    }
    return (*g_311);
}



static int32_t  func_17(int32_t * p_18, int32_t  p_19, struct S0  p_20)
{ 
    int32_t *l_46 = &g_16;
    struct S1 l_801 = {0xE0FBB513L};
    uint32_t l_812 = 18446744073709551615UL;
    int32_t l_824 = (-9L);
    int32_t l_827[5];
    int32_t l_868[1];
    struct S1 **l_924 = &g_135;
    struct S1 ***l_923 = &l_924;
    struct S1 ****l_922 = &l_923;
    uint64_t *l_1018 = &g_572;
    int32_t *l_1067 = &g_3;
    int64_t ***l_1104 = &g_601;
    uint16_t *l_1107 = (void*)0;
    uint16_t ****l_1121 = (void*)0;
    uint8_t l_1170[1][4] = {{0UL,0UL,0UL,0UL}};
    int8_t ***l_1195 = &g_809;
    uint16_t ** const *l_1240[5] = {&g_88,&g_88,&g_88,&g_88,&g_88};
    union U2 *l_1241[4] = {&g_231,&g_231,&g_231,&g_231};
    int64_t l_1246 = 0xD777149F52CD28C4LL;
    int16_t l_1255[2];
    uint8_t l_1256 = 0x67L;
    struct S0 *l_1272 = &g_1273;
    uint8_t l_1297 = 0x7EL;
    int32_t l_1307 = 1L;
    int32_t ***** const l_1329[7] = {&g_771,&g_771,&g_771,&g_771,&g_771,&g_771,&g_771};
    int32_t l_1340 = 0x98C35430L;
    int8_t l_1344 = 0xD5L;
    uint16_t l_1355 = 0UL;
    uint8_t l_1384 = 0xF5L;
    int8_t *l_1404 = &l_1344;
    int16_t **l_1455 = &g_705;
    const int32_t * const l_1462 = &g_126[0][0];
    uint64_t **l_1467 = (void*)0;
    uint64_t ***l_1466 = &l_1467;
    int32_t l_1518 = (-1L);
    uint32_t l_1533 = 9UL;
    uint8_t l_1537 = 7UL;
    struct S1 *l_1540 = &g_765;
    int i, j;
    for (i = 0; i < 5; i++)
        l_827[i] = 0x123B7EB4L;
    for (i = 0; i < 1; i++)
        l_868[i] = 0x022EE39EL;
    for (i = 0; i < 2; i++)
        l_1255[i] = (-7L);
    for (p_20.f6 = (-11); (p_20.f6 != 24); p_20.f6 = safe_add_func_uint8_t_u_u(p_20.f6, 5))
    { 
        union U2 l_47 = {-5L};
        int32_t *l_52 = &g_3;
        uint16_t *l_53 = (void*)0;
        uint16_t *l_54 = &g_55;
        struct S0 l_815 = {0x8BE31AC2966F3A8DLL,0L,1L,0xF3B5L,0xB845L,65531UL,0xFDCF1EB54E6E36AFLL,0x494832DEL};
        int32_t *l_832 = (void*)0;
        uint64_t l_861 = 0x43F9CC91B5A5FBDBLL;
        int32_t *****l_862 = &g_771;
        uint16_t * const ****l_874[3];
        struct S0 *l_879 = (void*)0;
        struct S1 **l_929 = &g_135;
        struct S1 **l_930 = (void*)0;
        struct S1 **l_931 = &g_135;
        struct S1 **l_932 = &g_135;
        struct S1 **l_933 = &g_135;
        struct S1 **l_934 = (void*)0;
        struct S1 **l_935[7];
        struct S1 **l_936 = &g_135;
        struct S1 **l_937 = &g_135;
        struct S1 **l_938 = &g_135;
        struct S1 **l_939[3];
        struct S1 **l_940[3];
        struct S1 **l_941 = &g_135;
        struct S1 **l_942 = (void*)0;
        struct S1 **l_943 = &g_135;
        struct S1 **l_944 = &g_135;
        struct S1 **l_945 = &g_135;
        struct S1 **l_946 = &g_135;
        struct S1 **l_947 = &g_135;
        struct S1 **l_948[6][2] = {{&g_135,&g_135},{&g_135,&g_135},{&g_135,&g_135},{&g_135,&g_135},{&g_135,&g_135},{&g_135,&g_135}};
        struct S1 **l_949 = (void*)0;
        struct S1 **l_950 = &g_135;
        struct S1 **l_951[4] = {(void*)0,(void*)0,(void*)0,(void*)0};
        struct S1 **l_952 = &g_135;
        struct S1 **l_953 = &g_135;
        struct S1 **l_954 = &g_135;
        struct S1 **l_955 = &g_135;
        struct S1 **l_956 = &g_135;
        struct S1 **l_957 = &g_135;
        struct S1 **l_958 = &g_135;
        struct S1 **l_959 = &g_135;
        struct S1 **l_960 = (void*)0;
        struct S1 **l_961 = &g_135;
        struct S1 **l_962 = &g_135;
        struct S1 **l_963 = &g_135;
        struct S1 **l_964 = &g_135;
        struct S1 **l_965 = &g_135;
        struct S1 **l_966 = &g_135;
        struct S1 **l_967 = (void*)0;
        struct S1 **l_968 = &g_135;
        struct S1 *** const l_928[7][3][6] = {{{&l_940[0],&l_959,&l_936,&l_957,&l_936,&l_959},{(void*)0,&l_967,&l_950,&l_930,&l_955,&l_938},{&l_929,&l_954,&l_937,(void*)0,&l_949,&l_932}},{{&l_967,&l_954,&l_940[0],(void*)0,&l_955,&l_944},{&l_941,&l_967,&l_958,&l_948[1][0],&l_936,&l_966},{&l_966,&l_959,(void*)0,&l_941,&l_932,(void*)0}},{{&l_968,(void*)0,&l_937,&l_930,(void*)0,&l_963},{&l_966,&l_963,&l_960,&l_956,(void*)0,&l_952},{&l_960,&l_957,&l_955,&l_954,&l_954,&l_955}},{{&l_964,&l_964,&l_965,(void*)0,&l_968,&l_931},{&l_946,&l_949,&l_951[3],&l_955,(void*)0,&l_965},{&l_940[0],&l_946,&l_951[3],&l_958,&l_964,&l_931}},{{&l_950,&l_958,&l_965,&l_933,&l_945,&l_955},{&l_933,&l_945,&l_955,(void*)0,&l_938,&l_952},{&l_932,&l_947,&l_960,&l_931,&l_949,&l_963}},{{&l_949,(void*)0,&l_937,&l_954,&l_929,(void*)0},{&l_935[4],(void*)0,&l_929,&l_950,&l_968,&l_950},{&l_939[0],&l_960,&l_939[0],&l_961,&l_943,&l_965}},{{&l_958,&l_939[0],(void*)0,&l_947,(void*)0,&l_956},{&l_950,&l_933,(void*)0,&l_947,&l_931,&l_961},{&l_958,&l_945,&l_930,&l_961,&l_950,&l_940[0]}}};
        struct S1 *** const *l_927 = &l_928[0][1][4];
        int16_t ** const l_984 = &g_705;
        int32_t *l_1003 = &g_86;
        uint32_t l_1006 = 4294967288UL;
        int8_t **l_1023 = &g_311;
        int32_t l_1033 = 0x8E9A35A9L;
        const uint8_t *l_1045 = (void*)0;
        int32_t l_1059 = 0x7329D332L;
        uint32_t l_1100 = 1UL;
        int64_t ***l_1103 = (void*)0;
        const uint16_t *l_1108 = (void*)0;
        int64_t *l_1109 = (void*)0;
        int64_t *l_1110 = &l_815.f6;
        int64_t *l_1111 = &g_165;
        int i, j, k;
        for (i = 0; i < 3; i++)
            l_874[i] = &g_870;
        for (i = 0; i < 7; i++)
            l_935[i] = &g_135;
        for (i = 0; i < 3; i++)
            l_939[i] = (void*)0;
        for (i = 0; i < 3; i++)
            l_940[i] = &g_135;
    }
    for (g_136.f0 = 3; (g_136.f0 < 2); --g_136.f0)
    { 
        uint16_t ** const * const **l_1120 = &g_1118;
        uint16_t *****l_1122 = &l_1121;
        int32_t **l_1129[3][2] = {{&l_46,&l_1067},{&l_1067,&l_46},{&l_1067,&l_1067}};
        uint32_t *l_1168 = (void*)0;
        union U2 l_1259 = {0x7383L};
        uint32_t *l_1295[1][5][7] = {{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&g_92[0],&l_801.f0,&g_92[0],(void*)0,(void*)0,&g_92[0],&l_801.f0},{(void*)0,&l_801.f0,(void*)0,(void*)0,&l_801.f0,(void*)0,&l_801.f0},{&g_92[0],(void*)0,(void*)0,&g_92[0],&l_801.f0,&g_92[0],(void*)0}}};
        int64_t *l_1296[4];
        struct S1 l_1298 = {4294967293UL};
        uint16_t ***l_1301 = &g_88;
        int32_t **l_1303 = (void*)0;
        int32_t **l_1304 = &l_1067;
        int64_t l_1318 = 0xF6B2FE371BC6F299LL;
        int i, j, k;
        for (i = 0; i < 4; i++)
            l_1296[i] = (void*)0;
    }
    for (g_94.f4 = 3; (g_94.f4 >= 59); g_94.f4 = safe_add_func_int64_t_s_s(g_94.f4, 2))
    { 
        int64_t ***l_1323 = (void*)0;
        int64_t ****l_1324 = (void*)0;
        uint32_t *l_1327 = &g_136.f0;
        int32_t l_1328 = 0x9EAB1CA7L;
        int32_t *****l_1330 = &g_771;
        int16_t *l_1331[3];
        uint64_t *l_1339[1];
        int32_t l_1341 = 1L;
        int32_t l_1345 = (-1L);
        int32_t l_1346[6][7][3] = {{{0x7B191167L,1L,1L},{0xC5E589ADL,0x54525251L,0x54525251L},{(-2L),0xF0EFE29DL,0x4FBE0F55L},{0xC5E589ADL,0xAA0AAC4DL,8L},{0x7B191167L,0L,0x4FBE0F55L},{0xFB4FD10BL,0x396DC050L,0x54525251L},{6L,0L,1L}},{{(-1L),0xAA0AAC4DL,6L},{6L,0xF0EFE29DL,0xE62EC945L},{0xFB4FD10BL,0x54525251L,6L},{0x7B191167L,1L,1L},{0xC5E589ADL,0x54525251L,0x54525251L},{(-2L),0xF0EFE29DL,0x4FBE0F55L},{0xC5E589ADL,0xAA0AAC4DL,8L}},{{0x7B191167L,0L,0x4FBE0F55L},{0xFB4FD10BL,0x396DC050L,0x54525251L},{6L,0L,1L},{(-1L),0xAA0AAC4DL,6L},{6L,0xF0EFE29DL,0xE62EC945L},{0xFB4FD10BL,0x54525251L,6L},{0x7B191167L,1L,(-6L)}},{{6L,0xA2F58739L,0xA2F58739L},{0xE62EC945L,4L,0xE3F06F29L},{6L,2L,9L},{1L,9L,0xE3F06F29L},{0x54525251L,(-3L),0xA2F58739L},{0x4FBE0F55L,9L,(-6L)},{8L,2L,0x9F58741EL}},{{0x4FBE0F55L,4L,0xB96B3585L},{0x54525251L,0xA2F58739L,0x9F58741EL},{1L,0L,(-6L)},{6L,0xA2F58739L,0xA2F58739L},{0xE62EC945L,4L,0xE3F06F29L},{6L,2L,9L},{1L,9L,0xE3F06F29L}},{{0x54525251L,(-3L),0xA2F58739L},{0x4FBE0F55L,9L,(-6L)},{8L,2L,0x9F58741EL},{0x4FBE0F55L,4L,0xB96B3585L},{0x54525251L,0xA2F58739L,0x9F58741EL},{1L,0L,(-6L)},{6L,0xA2F58739L,0xA2F58739L}}};
        int32_t **l_1352 = (void*)0;
        struct S1 l_1414 = {0x1ECDB0E1L};
        int16_t **l_1457 = &l_1331[1];
        int64_t l_1496 = 9L;
        uint16_t ***l_1501[4] = {&g_88,&g_88,&g_88,&g_88};
        int64_t l_1522 = 0x1149CC7227E79F48LL;
        int16_t l_1536 = 0xA86FL;
        int i, j, k;
        for (i = 0; i < 3; i++)
            l_1331[i] = &g_108;
        for (i = 0; i < 1; i++)
            l_1339[i] = &g_754;
        l_1323 = l_1323;
        l_1346[3][1][1] ^= ((*g_319) &= (l_1345 = ((safe_mod_func_int8_t_s_s(((((*l_1327) = ((*l_1104) != &g_602[1][0])) == l_1328) , (0x7229A31DL && ((l_1328 = ((**g_704) = (l_1329[3] != l_1330))) >= (safe_mod_func_int32_t_s_s((((safe_sub_func_int32_t_s_s((l_1341 = (+(l_1340 = (++(*l_1018))))), (safe_mul_func_uint8_t_u_u(((*g_1310) , p_20.f5), p_20.f1)))) <= p_20.f5) != (*l_1067)), 0xFF6365B6L))))), g_99[1][1])) < l_1344)));
    }
    for (g_1273.f6 = 0; (g_1273.f6 < 2); g_1273.f6++)
    { 
        uint8_t l_1543 = 0xD4L;
        int32_t l_1544 = 0x3980BB34L;
        l_1544 &= (((l_1543 = 0xEE87L) , &l_1170[0][3]) == (void*)0);
        if ((*l_46))
            break;
    }
    return (*p_18);
}



static int32_t  func_30(int32_t * const  p_31, int32_t  p_32, int32_t  p_33, int32_t * p_34, struct S1  p_35)
{ 
    uint32_t l_802[7] = {0xEA035837L,0xEA035837L,0xEA035837L,0xEA035837L,0xEA035837L,0xEA035837L,0xEA035837L};
    uint32_t *l_805[3][5];
    int32_t l_806 = 0x656EF2CCL;
    int8_t **l_807 = (void*)0;
    int8_t ***l_808[4][7] = {{&l_807,(void*)0,&l_807,(void*)0,&l_807,&l_807,(void*)0},{&l_807,&l_807,&l_807,&l_807,&l_807,&l_807,&l_807},{(void*)0,&l_807,&l_807,&l_807,&l_807,(void*)0,&l_807},{&l_807,&l_807,&l_807,&l_807,&l_807,&l_807,&l_807}};
    int32_t l_810 = 0x9F918ABEL;
    int i, j;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 5; j++)
            l_805[i][j] = &g_92[1];
    }
    l_802[3]--;
    l_810 = ((*p_31) = (((((l_806 |= 5UL) >= l_802[3]) | 0x0D40E97CL) | (func_48(((g_809 = l_807) != &g_512)) , l_802[3])) >= p_35.f0));
    return (*p_34);
}



static int32_t * const  func_36(struct S1  p_37, uint64_t  p_38, const int32_t * const  p_39)
{ 
    int32_t *l_796[2];
    int64_t l_797[4];
    uint32_t l_798 = 0xA367B649L;
    int i;
    for (i = 0; i < 2; i++)
        l_796[i] = &g_674.f2;
    for (i = 0; i < 4; i++)
        l_797[i] = 8L;
    l_798++;
    (*g_319) ^= (-1L);
    return l_796[1];
}



static struct S1  func_40(int32_t * p_41, int16_t  p_42, union U2  p_43, union U2  p_44, uint64_t  p_45)
{ 
    uint32_t l_683 = 0x595539CDL;
    uint8_t *l_689 = &g_668;
    int8_t * const *l_690 = (void*)0;
    int64_t *l_691 = &g_165;
    uint16_t ***l_692 = &g_88;
    struct S1 **l_710[4][6][7] = {{{&g_135,&g_135,&g_135,&g_135,&g_135,&g_135,(void*)0},{&g_135,(void*)0,(void*)0,&g_135,(void*)0,&g_135,(void*)0},{(void*)0,&g_135,&g_135,&g_135,&g_135,&g_135,&g_135},{&g_135,(void*)0,&g_135,(void*)0,&g_135,&g_135,(void*)0},{&g_135,(void*)0,&g_135,(void*)0,&g_135,(void*)0,&g_135},{&g_135,&g_135,&g_135,&g_135,&g_135,&g_135,&g_135}},{{&g_135,&g_135,&g_135,&g_135,&g_135,&g_135,&g_135},{&g_135,(void*)0,&g_135,&g_135,&g_135,&g_135,&g_135},{(void*)0,&g_135,&g_135,&g_135,&g_135,&g_135,(void*)0},{(void*)0,&g_135,&g_135,&g_135,&g_135,&g_135,&g_135},{&g_135,&g_135,&g_135,&g_135,&g_135,&g_135,(void*)0},{(void*)0,&g_135,&g_135,(void*)0,(void*)0,&g_135,(void*)0}},{{&g_135,(void*)0,&g_135,&g_135,&g_135,&g_135,&g_135},{&g_135,(void*)0,&g_135,&g_135,&g_135,&g_135,&g_135},{&g_135,&g_135,&g_135,&g_135,(void*)0,&g_135,&g_135},{&g_135,&g_135,&g_135,&g_135,&g_135,&g_135,&g_135},{(void*)0,&g_135,&g_135,(void*)0,(void*)0,(void*)0,&g_135},{&g_135,&g_135,&g_135,(void*)0,&g_135,&g_135,&g_135}},{{(void*)0,&g_135,&g_135,(void*)0,(void*)0,&g_135,&g_135},{&g_135,&g_135,(void*)0,(void*)0,&g_135,&g_135,&g_135},{&g_135,&g_135,&g_135,&g_135,&g_135,(void*)0,(void*)0},{(void*)0,&g_135,&g_135,&g_135,(void*)0,(void*)0,&g_135},{&g_135,(void*)0,&g_135,&g_135,&g_135,&g_135,&g_135},{&g_135,(void*)0,&g_135,&g_135,&g_135,&g_135,&g_135}}};
    struct S1 ***l_709 = &l_710[1][1][3];
    uint16_t *l_714 = &g_94.f5;
    uint32_t l_753 = 0x0718F7F0L;
    struct S1 *** const **l_784[3];
    struct S1 ****l_785 = &l_709;
    const int32_t *l_790 = &g_16;
    const int32_t **l_789 = &l_790;
    const int32_t ***l_788 = &l_789;
    const int32_t ****l_787 = &l_788;
    const int32_t *****l_786 = &l_787;
    int i, j, k;
    for (i = 0; i < 3; i++)
        l_784[i] = &g_360;
lbl_761:
    (*g_319) = ((*g_319) , (safe_lshift_func_uint8_t_u_s(1UL, ((safe_mul_func_uint8_t_u_u((safe_mod_func_int8_t_s_s(((*g_311) = 0x27L), (0xB50BFF2D563EE798LL ^ (safe_rshift_func_int8_t_s_s((g_663[1] = l_683), (((safe_sub_func_uint32_t_u_u((~(l_683 , (safe_sub_func_uint8_t_u_u(((*l_689) = (((*p_41) != (-1L)) || l_683)), p_45)))), (*g_319))) > 1L) >= l_683)))))), l_683)) , (-1L)))));
    (*g_319) &= (((l_690 == (void*)0) == (l_691 != l_691)) < ((void*)0 != l_692));
    for (g_94.f4 = 0; (g_94.f4 <= 1); g_94.f4 += 1)
    { 
        int32_t l_699 = 0xF517A737L;
        int16_t *l_703 = &g_99[3][3];
        int16_t **l_702[6] = {&l_703,&l_703,&l_703,&l_703,&l_703,&l_703};
        struct S1 ** const l_708 = &g_135;
        struct S1 ** const *l_707 = &l_708;
        int32_t *l_711[4][6][7] = {{{&g_126[0][0],&g_3,&g_86,&g_3,&g_126[3][0],&g_126[3][0],&g_3},{&g_16,&g_3,&g_16,&g_16,&g_3,(void*)0,&g_3},{&g_86,&g_126[6][0],&g_126[3][0],&g_3,&g_126[0][0],&g_126[3][0],&g_86},{&g_126[6][0],&g_86,&g_3,&g_3,&g_16,(void*)0,(void*)0},{&g_3,(void*)0,&g_16,&g_3,&g_231.f2,&g_126[3][0],&g_16},{&g_86,(void*)0,(void*)0,&g_231.f2,&g_231.f2,(void*)0,(void*)0}},{{&g_231.f2,&g_86,(void*)0,&g_3,&g_16,&g_16,&g_3},{(void*)0,&g_86,&g_16,&g_86,&g_126[0][0],&g_86,&g_16},{&g_126[0][0],(void*)0,&g_126[0][0],&g_3,&g_3,(void*)0,&g_86},{(void*)0,&g_16,&g_3,&g_231.f2,&g_126[3][0],&g_16,&g_126[0][0]},{&g_3,&g_3,&g_3,&g_3,&g_3,&g_3,(void*)0},{&g_126[0][0],&g_126[6][0],&g_126[0][0],&g_3,(void*)0,&g_86,&g_3}},{{&g_231.f2,&g_3,&g_16,&g_3,(void*)0,(void*)0,&g_126[0][0]},{&g_86,&g_126[6][0],(void*)0,&g_16,&g_126[0][0],&g_3,&g_86},{&g_126[6][0],&g_3,(void*)0,&g_3,(void*)0,&g_126[3][0],&g_16},{&g_16,&g_126[0][0],&g_126[0][0],&g_16,(void*)0,&g_126[3][0],&g_86},{&g_126[0][0],(void*)0,&g_126[0][0],(void*)0,&g_86,&g_126[0][0],&g_126[3][0]},{&g_86,&g_3,&g_126[0][0],&g_3,&g_16,&g_86,&g_86}},{{&g_3,&g_126[0][0],(void*)0,&g_3,(void*)0,&g_126[3][0],&g_16},{&g_126[0][0],(void*)0,&g_126[0][0],&g_126[3][0],&g_126[3][0],&g_126[3][0],&g_126[0][0]},{&g_16,&g_16,(void*)0,&g_86,(void*)0,&g_86,&g_16},{&g_16,&g_126[3][0],&g_126[0][0],&g_16,&g_126[3][0],&g_126[0][0],&g_126[3][0]},{(void*)0,&g_16,&g_126[0][0],&g_86,(void*)0,&g_126[3][0],&g_86},{&g_86,(void*)0,&g_3,&g_86,&g_126[3][0],&g_126[0][0],&g_16}}};
        int32_t **l_712 = &l_711[1][4][2];
        int i, j, k;
        (*g_319) ^= (l_683 || (safe_sub_func_uint8_t_u_u(246UL, (p_45 < 0xB29851EC7923C077LL))));
        g_126[2][0] |= (safe_add_func_int8_t_s_s((((safe_sub_func_uint64_t_u_u(l_699, l_699)) <= (((safe_add_func_uint64_t_u_u((((l_702[0] == g_704) , ((*g_319) , (safe_unary_minus_func_uint32_t_u(((void*)0 == l_703))))) | l_683), p_43.f0)) , l_707) == l_709)) == 0x83L), p_45));
        (*l_712) = l_711[0][0][2];
        for (g_314 = 0; (g_314 <= 0); g_314 += 1)
        { 
            uint16_t *l_713 = &g_94.f4;
            int32_t l_715[6];
            int64_t * const * const l_719 = &g_602[3][1];
            int64_t * const * const *l_718 = &l_719;
            int i;
            for (i = 0; i < 6; i++)
                l_715[i] = 0x9F17F60AL;
            for (g_86 = 0; (g_86 >= 0); g_86 -= 1)
            { 
                struct S1 l_726 = {0xD4DFFD82L};
                int32_t l_746 = 0x0AFDE37BL;
                int64_t *l_759 = &g_165;
                int i, j;
                l_715[3] &= (g_126[3][0] = (((**l_692) = ((**l_708) , (g_126[g_94.f4][g_314] , (**l_692)))) == (l_714 = l_713)));
                if (((((safe_add_func_uint8_t_u_u(((*l_689) |= l_715[4]), l_683)) ^ (l_718 == (void*)0)) & (**g_704)) < ((&g_705 == &g_705) && (**g_704))))
                { 
                    const int32_t l_727 = 0x5770FA33L;
                    uint64_t *l_743 = &g_572;
                    int i, j;
                    p_44.f2 = (g_126[1][0] = (0x95L || ((((**g_704) = 0L) > (**g_88)) == ((safe_div_func_int64_t_s_s(p_45, p_45)) || (((g_136.f0 , ((safe_mod_func_uint64_t_u_u((((l_726 , p_43.f0) && l_727) != p_44.f0), l_726.f0)) , 1L)) | (-9L)) , 65534UL)))));
                    g_754 &= (((safe_mul_func_int16_t_s_s(((safe_mul_func_int8_t_s_s((safe_div_func_int64_t_s_s((safe_mul_func_uint16_t_u_u(1UL, g_126[g_94.f4][g_314])), ((safe_rshift_func_uint8_t_u_s(((*l_689)--), 5)) , (+(safe_mul_func_uint16_t_u_u((*g_89), ((func_48(((((*l_743)++) || (g_99[5][2] & (l_746 ^= (p_44.f3 < ((*g_311) ^= 0x0FL))))) , (safe_rshift_func_uint16_t_u_s((safe_mod_func_int32_t_s_s(((safe_lshift_func_int16_t_s_u((l_746 == (**g_704)), p_44.f3)) >= (**g_88)), 0xFDC20A31L)), 0)))) , 0x50FA0B01F97FBF10LL) , 0xC060L))))))), p_42)) , 0x5FD2L), 65529UL)) <= l_753) != (*g_319));
                    p_43.f2 = (((((((((((safe_rshift_func_int16_t_s_u((((**g_704) != (((safe_lshift_func_int16_t_s_u((*g_705), 13)) <= p_42) >= (*g_319))) > ((**g_88) == ((g_674 , l_759) != (*g_601)))), (*g_89))) || (**g_88)) || p_44.f0) ^ 0L) <= g_663[1]) < p_45) == g_665) & p_44.f3) != l_715[4]) && g_165) | p_44.f3);
                }
                else
                { 
                    struct S1 l_760 = {0x6F564DADL};
                    return l_760;
                }
            }
            if (g_165)
                goto lbl_761;
        }
        for (p_43.f0 = 1; (p_43.f0 >= 0); p_43.f0 -= 1)
        { 
            uint32_t l_764 = 0x33024F3FL;
            (*g_319) ^= (safe_sub_func_uint32_t_u_u((&g_602[1][1] == &g_602[1][1]), l_764));
            if ((*g_319))
                break;
            if (l_753)
                goto lbl_761;
            if ((*p_41))
                break;
        }
        for (g_754 = 0; (g_754 <= 1); g_754 += 1)
        { 
            uint16_t ****l_777 = &l_692;
            uint16_t *****l_776 = &l_777;
            (*g_319) ^= (g_765 , ((safe_sub_func_int8_t_s_s(((safe_mul_func_int16_t_s_s(((void*)0 != g_770), 0x2EFFL)) >= 4294967295UL), (*g_311))) & (**g_704)));
            p_41 = p_41;
            (*l_776) = ((((*g_370) != (void*)0) , (safe_mul_func_int8_t_s_s(((p_43.f0 , p_41) == (void*)0), g_663[1]))) , &l_692);
        }
    }
    if ((((g_770 = &g_771) != ((((safe_add_func_uint8_t_u_u(p_44.f0, ((p_42 < (((safe_mod_func_int32_t_s_s((safe_mul_func_uint64_t_u_u((l_753 , 1UL), (((((*g_311) = ((((*l_785) = (((***l_692) = (((((l_784[2] = &g_360) == &g_371) == (*p_41)) ^ (-2L)) > 0x7C86767FDD2E6EECLL)) , (void*)0)) == (void*)0) <= p_45)) , 0L) || (*g_311)) >= l_683))), 0x64FD20A7L)) || (-1L)) == p_42)) & g_92[0]))) != 0x1683842EE2B75CBALL) & (-7L)) , l_786)) >= p_42))
    { 
        (*g_319) |= (safe_rshift_func_uint16_t_u_s((**l_789), 5));
    }
    else
    { 
        struct S1 l_793 = {0x6EADF563L};
        l_793 = (*g_156);
    }
    (*g_319) ^= ((safe_rshift_func_uint16_t_u_u(((*l_714) = 7UL), 10)) & 0xDBL);
    return (*g_135);
}



static union U2  func_48(uint16_t  p_49)
{ 
    int32_t **l_56 = (void*)0;
    int32_t *l_58 = &g_16;
    int32_t **l_57 = &l_58;
    int32_t l_95 = 0x8C5D2922L;
    int32_t l_130 = 0xE5225B6AL;
    int32_t *l_162 = (void*)0;
    int32_t l_177[5];
    struct S1 l_182 = {0x0EF4BC92L};
    struct S0 l_205[3][2] = {{{0L,0x8EDBL,-9L,1L,0x9948L,0x5011L,0x36F43DDE750D66DCLL,1L},{7L,-9L,6L,1L,8UL,0x7A45L,-8L,0x9C3CA289L}},{{0L,0x8EDBL,-9L,1L,0x9948L,0x5011L,0x36F43DDE750D66DCLL,1L},{0L,0x8EDBL,-9L,1L,0x9948L,0x5011L,0x36F43DDE750D66DCLL,1L}},{{7L,-9L,6L,1L,8UL,0x7A45L,-8L,0x9C3CA289L},{0L,0x8EDBL,-9L,1L,0x9948L,0x5011L,0x36F43DDE750D66DCLL,1L}}};
    int8_t l_221[4];
    uint32_t l_224 = 0UL;
    struct S1 ** const l_288 = &g_135;
    struct S1 ** const *l_287 = &l_288;
    struct S1 ** const ** const l_286 = &l_287;
    struct S1 ** const ** const *l_285 = &l_286;
    int16_t *l_332 = &g_94.f1;
    union U2 l_338 = {1L};
    struct S1 ***l_359 = (void*)0;
    struct S1 *** const *l_358 = &l_359;
    uint8_t l_469 = 0x5BL;
    int8_t l_472 = 0x47L;
    const int64_t *l_490 = &g_165;
    int16_t l_636 = 0x8020L;
    union U2 *l_673 = &g_674;
    int i, j;
    for (i = 0; i < 5; i++)
        l_177[i] = 0xF6A1B494L;
    for (i = 0; i < 4; i++)
        l_221[i] = (-2L);
    (*l_57) = &g_3;
    return (*l_673);
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_3, "g_3", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_15[i], "g_15[i]", print_hash_value);

    }
    transparent_crc(g_16, "g_16", print_hash_value);
    transparent_crc(g_55, "g_55", print_hash_value);
    transparent_crc(g_85, "g_85", print_hash_value);
    transparent_crc(g_86, "g_86", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_92[i], "g_92[i]", print_hash_value);

    }
    transparent_crc(g_94.f0, "g_94.f0", print_hash_value);
    transparent_crc(g_94.f1, "g_94.f1", print_hash_value);
    transparent_crc(g_94.f2, "g_94.f2", print_hash_value);
    transparent_crc(g_94.f3, "g_94.f3", print_hash_value);
    transparent_crc(g_94.f4, "g_94.f4", print_hash_value);
    transparent_crc(g_94.f5, "g_94.f5", print_hash_value);
    transparent_crc(g_94.f6, "g_94.f6", print_hash_value);
    transparent_crc(g_94.f7, "g_94.f7", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 4; j++)
        {
            transparent_crc(g_99[i][j], "g_99[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_107, "g_107", print_hash_value);
    transparent_crc(g_108, "g_108", print_hash_value);
    transparent_crc(g_109, "g_109", print_hash_value);
    transparent_crc(g_119, "g_119", print_hash_value);
    transparent_crc(g_125, "g_125", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 1; j++)
        {
            transparent_crc(g_126[i][j], "g_126[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_136.f0, "g_136.f0", print_hash_value);
    transparent_crc(g_148, "g_148", print_hash_value);
    transparent_crc(g_165, "g_165", print_hash_value);
    transparent_crc(g_231.f0, "g_231.f0", print_hash_value);
    transparent_crc(g_314, "g_314", print_hash_value);
    transparent_crc(g_552, "g_552", print_hash_value);
    transparent_crc(g_572, "g_572", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_663[i], "g_663[i]", print_hash_value);

    }
    transparent_crc(g_665, "g_665", print_hash_value);
    transparent_crc(g_668, "g_668", print_hash_value);
    transparent_crc(g_754, "g_754", print_hash_value);
    transparent_crc(g_765.f0, "g_765.f0", print_hash_value);
    transparent_crc(g_853.f0, "g_853.f0", print_hash_value);
    transparent_crc(g_853.f1, "g_853.f1", print_hash_value);
    transparent_crc(g_853.f2, "g_853.f2", print_hash_value);
    transparent_crc(g_853.f3, "g_853.f3", print_hash_value);
    transparent_crc(g_853.f4, "g_853.f4", print_hash_value);
    transparent_crc(g_853.f5, "g_853.f5", print_hash_value);
    transparent_crc(g_853.f6, "g_853.f6", print_hash_value);
    transparent_crc(g_853.f7, "g_853.f7", print_hash_value);
    transparent_crc(g_1017, "g_1017", print_hash_value);
    transparent_crc(g_1220, "g_1220", print_hash_value);
    transparent_crc(g_1273.f0, "g_1273.f0", print_hash_value);
    transparent_crc(g_1273.f1, "g_1273.f1", print_hash_value);
    transparent_crc(g_1273.f2, "g_1273.f2", print_hash_value);
    transparent_crc(g_1273.f3, "g_1273.f3", print_hash_value);
    transparent_crc(g_1273.f4, "g_1273.f4", print_hash_value);
    transparent_crc(g_1273.f5, "g_1273.f5", print_hash_value);
    transparent_crc(g_1273.f6, "g_1273.f6", print_hash_value);
    transparent_crc(g_1273.f7, "g_1273.f7", print_hash_value);
    transparent_crc(g_1311.f0, "g_1311.f0", print_hash_value);
    transparent_crc(g_1521.f0, "g_1521.f0", print_hash_value);
    transparent_crc(g_1521.f1, "g_1521.f1", print_hash_value);
    transparent_crc(g_1521.f2, "g_1521.f2", print_hash_value);
    transparent_crc(g_1521.f3, "g_1521.f3", print_hash_value);
    transparent_crc(g_1521.f4, "g_1521.f4", print_hash_value);
    transparent_crc(g_1521.f5, "g_1521.f5", print_hash_value);
    transparent_crc(g_1521.f6, "g_1521.f6", print_hash_value);
    transparent_crc(g_1521.f7, "g_1521.f7", print_hash_value);
    transparent_crc(g_1526, "g_1526", print_hash_value);
    transparent_crc(g_1657, "g_1657", print_hash_value);
    transparent_crc(g_1720, "g_1720", print_hash_value);
    transparent_crc(g_1721, "g_1721", print_hash_value);
    transparent_crc(g_1794, "g_1794", print_hash_value);
    transparent_crc(g_1810, "g_1810", print_hash_value);
    transparent_crc(g_1847, "g_1847", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 5; j++)
        {
            for (k = 0; k < 7; k++)
            {
                transparent_crc(g_1928[i][j][k], "g_1928[i][j][k]", print_hash_value);

            }
        }
    }
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 4; k++)
            {
                transparent_crc(g_1953[i][j][k], "g_1953[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_1988, "g_1988", print_hash_value);
    transparent_crc(g_2047, "g_2047", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_2271[i], "g_2271[i]", print_hash_value);

    }
    transparent_crc(g_2397.f0, "g_2397.f0", print_hash_value);
    transparent_crc(g_2400.f0, "g_2400.f0", print_hash_value);
    transparent_crc(g_2445, "g_2445", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
