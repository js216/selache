// SPDX-License-Identifier: MIT
// cctest_csmith_bd8c1f78.c --- cctest case csmith_bd8c1f78 (csmith seed 3180076920)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x576b7783 */

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

// Options:   -s 3180076920 -o /tmp/csmith_gen_jd09jl3u/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


struct S0 {
   uint32_t  f0;
   int8_t  f1;
   uint8_t  f2;
};

#pragma pack(push)
#pragma pack(1)
struct S1 {
   const uint64_t  f0;
};
#pragma pack(pop)

union U2 {
   int32_t  f0;
   int64_t  f1;
   uint64_t  f2;
};


static uint8_t g_3 = 9UL;
static int32_t g_8 = 0xC3C39BA0L;
static int16_t g_12 = 1L;
static int8_t g_28 = 0L;
static uint32_t g_70 = 0UL;
static int8_t g_75[1] = {0xF1L};
static uint32_t g_76[2][2][1] = {{{0UL},{1UL}},{{0UL},{1UL}}};
static uint8_t g_92 = 246UL;
static uint16_t g_93 = 0UL;
static const struct S0 g_94 = {0x2F6E5819L,0x35L,0x3CL};
static struct S0 g_95 = {0x9AAE810FL,0xDDL,0x4EL};
static uint32_t g_99 = 18446744073709551615UL;
static union U2 g_136 = {-8L};
static int8_t g_152 = 0x79L;
static int64_t g_196 = (-2L);
static const struct S1 g_198 = {3UL};



static const struct S1  func_1(void);
static const struct S0  func_19(uint32_t  p_20, int32_t  p_21, uint32_t  p_22, int8_t  p_23, const int8_t  p_24);
static const struct S0  func_35(uint16_t  p_36, uint8_t  p_37);
static uint16_t  func_38(const int16_t  p_39, uint32_t  p_40, uint16_t  p_41);




static const struct S1  func_1(void)
{ 
    int16_t l_2[5] = {1L,1L,1L,1L,1L};
    int32_t l_17[2][4] = {{5L,5L,0xF5BFB66FL,5L},{5L,(-1L),(-1L),5L}};
    int32_t l_18[5][5] = {{0xC9B996A5L,(-1L),0xC9B996A5L,0xC9B996A5L,(-1L)},{7L,(-1L),1L,0x086335C0L,1L},{(-1L),(-1L),(-8L),(-1L),(-1L)},{1L,0x086335C0L,1L,(-1L),7L},{(-1L),0xC9B996A5L,0xC9B996A5L,(-1L),0xC9B996A5L}};
    int32_t l_195 = 0x9AD12C72L;
    const struct S1 l_197 = {1UL};
    int i, j;
    g_3++;
    for (g_3 = 19; (g_3 <= 11); g_3--)
    { 
        int16_t l_27 = 0L;
        for (g_8 = 0; (g_8 < 7); ++g_8)
        { 
            int32_t l_11 = 0L;
            uint64_t l_194 = 0xA597C7DC2514DC0ALL;
            g_12 = l_11;
            g_196 = (((l_195 &= (safe_mod_func_uint8_t_u_u((safe_mul_func_int8_t_s_s((l_17[1][2] ^= g_3), ((l_18[4][2] |= 0x9CL) || ((func_19((l_18[2][3] = (g_28 |= (0x2053L < (safe_div_func_uint64_t_u_u(g_3, l_27))))), l_27, g_3, l_2[2], l_11) , l_194) <= l_11)))), g_136.f0))) , 0x292EL) == g_8);
        }
        return l_197;
    }
    return g_198;
}



static const struct S0  func_19(uint32_t  p_20, int32_t  p_21, uint32_t  p_22, int8_t  p_23, const int8_t  p_24)
{ 
    int8_t l_45[2];
    uint64_t l_50 = 18446744073709551615UL;
    int32_t l_51 = 4L;
    uint16_t l_52 = 0UL;
    int32_t l_59 = 0x014EFC71L;
    const union U2 l_96 = {0x993EB333L};
    int64_t l_117 = 0x960B3385642B86B6LL;
    uint16_t l_118 = 0xAEEFL;
    int32_t l_133 = 0x133FD707L;
    const struct S0 l_134 = {0x6DB6A2D9L,0x96L,0xD5L};
    const int64_t l_155 = 0x022D3B1C7E41B645LL;
    int64_t l_164 = 6L;
    int32_t l_179[2][1][5];
    int64_t l_192[4][3][3] = {{{0L,4L,0L},{3L,0x4F3720B211735A46LL,(-9L)},{0xAA86CCD6D71EDEFALL,0xAA86CCD6D71EDEFALL,0L}},{{0x820D8B5B86692AA9LL,0x4F3720B211735A46LL,0x4F3720B211735A46LL},{0L,(-1L),4L},{0x820D8B5B86692AA9LL,0x63A6EC57C8980EC6LL,0x820D8B5B86692AA9LL}},{{0xAA86CCD6D71EDEFALL,0L,4L},{3L,3L,0x4F3720B211735A46LL},{1L,0L,0L}},{{0x4F3720B211735A46LL,0x63A6EC57C8980EC6LL,(-9L)},{1L,(-1L),1L},{3L,0x4F3720B211735A46LL,(-9L)}}};
    int i, j, k;
    for (i = 0; i < 2; i++)
        l_45[i] = (-1L);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 5; k++)
                l_179[i][j][k] = 0x1CB2A3ABL;
        }
    }
    for (p_20 = 0; (p_20 <= 9); p_20 = safe_add_func_uint64_t_u_u(p_20, 6))
    { 
        const int8_t l_42 = 0x7AL;
        for (g_28 = 0; (g_28 >= (-24)); g_28 = safe_sub_func_uint64_t_u_u(g_28, 7))
        { 
            int64_t l_97 = 0xD8312ED8564F5E99LL;
            for (p_22 = 0; (p_22 == 56); p_22 = safe_add_func_uint64_t_u_u(p_22, 4))
            { 
                uint16_t l_98 = 0x8CEEL;
                g_95 = func_35((l_59 ^= func_38(l_42, (safe_lshift_func_int16_t_s_s(l_45[0], (safe_lshift_func_uint16_t_u_u(g_12, (safe_mod_func_uint8_t_u_u((((l_51 = (l_42 == l_50)) > p_24) | g_12), 0xEBL)))))), l_52)), l_52);
                l_97 = (l_96 , (-1L));
                l_98 = p_20;
            }
        }
    }
    l_51 &= (((g_99++) , 0x22B282FFL) , (+((safe_sub_func_int32_t_s_s((safe_sub_func_uint64_t_u_u((((l_59 ^ (safe_rshift_func_int16_t_s_s((p_24 != ((safe_add_func_int32_t_s_s((((safe_sub_func_uint32_t_u_u((safe_rshift_func_int8_t_s_s(((safe_mul_func_int16_t_s_s(((g_94.f0 > p_20) ^ g_28), 8UL)) <= g_75[0]), 2)), p_22)) < l_117) == 0x40L), 0xBFF0AA60L)) || g_75[0])), 9))) , g_3) , 0x0A8D4FF7D934358BLL), 0xC3227D8CF631B5FDLL)), 0x78982BF9L)) < l_118)));
    if (((l_59 = l_45[0]) != (safe_lshift_func_uint16_t_u_s((l_133 = (((safe_div_func_int32_t_s_s(((safe_sub_func_uint64_t_u_u((((l_51 = (safe_rshift_func_int16_t_s_s((safe_lshift_func_int8_t_s_u(p_21, (safe_rshift_func_uint8_t_u_s((safe_div_func_uint16_t_u_u(p_24, 0x5432L)), 3)))), 11))) , g_94.f1) == p_21), p_21)) ^ 0UL), 0xF3BE1296L)) & l_118) || g_8)), g_8))))
    { 
        return l_134;
    }
    else
    { 
        uint16_t l_135 = 0UL;
        int32_t l_178 = 0L;
        int32_t l_180 = 0L;
        if ((l_135 = (-1L)))
        { 
            return g_95;
        }
        else
        { 
            int8_t l_151[1][3][1];
            int32_t l_156 = 0x502840ACL;
            int i, j, k;
            for (i = 0; i < 1; i++)
            {
                for (j = 0; j < 3; j++)
                {
                    for (k = 0; k < 1; k++)
                        l_151[i][j][k] = 0xD5L;
                }
            }
            if (g_99)
            { 
                g_152 &= (g_136 , (g_136 , ((safe_mod_func_int64_t_s_s((safe_lshift_func_int16_t_s_s((safe_mod_func_int16_t_s_s(((safe_div_func_uint64_t_u_u(((((safe_div_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_u(p_21, 6)), (l_151[0][2][0] = (safe_div_func_uint64_t_u_u(0xD8C1B616B54986CBLL, 18446744073709551612UL))))) == g_3) ^ g_76[0][1][0]) || p_20), 3UL)) , (-9L)), g_8)), 7)), p_21)) && p_24)));
                l_156 &= ((l_155 && (g_76[0][1][0] != (g_92 == l_135))) | 0UL);
            }
            else
            { 
                int32_t l_165 = 0x35D9A7C6L;
                l_156 = (((safe_div_func_int64_t_s_s(l_135, (safe_add_func_uint16_t_u_u((((((((((!0x67F3A6B8L) >= (((g_93 > (safe_rshift_func_uint8_t_u_u(((l_164 = 1UL) && 0x5B91466E0B1FDE04LL), g_76[0][1][0]))) , l_135) | g_92)) & l_135) & 0L) && g_93) <= 0x7EL) > p_20) && p_24) >= g_94.f1), l_165)))) , (-10L)) && 0x16L);
                l_180 ^= (safe_sub_func_uint8_t_u_u((safe_add_func_uint8_t_u_u((l_178 = (safe_rshift_func_uint8_t_u_u((safe_add_func_int32_t_s_s((safe_add_func_int8_t_s_s((1L | l_135), (2UL == ((safe_mod_func_int64_t_s_s(0xD2C60FB40517B6AFLL, 0x89590F8BFC28CD2BLL)) == 65535UL)))), 0x92475546L)), 7))), l_179[0][0][0])), (-4L)));
            }
            for (g_95.f2 = 0; (g_95.f2 >= 36); g_95.f2 = safe_add_func_uint64_t_u_u(g_95.f2, 3))
            { 
                uint64_t l_193[1][1][2];
                int i, j, k;
                for (i = 0; i < 1; i++)
                {
                    for (j = 0; j < 1; j++)
                    {
                        for (k = 0; k < 2; k++)
                            l_193[i][j][k] = 0x05FBE3FE1AB33318LL;
                    }
                }
                l_156 |= ((safe_unary_minus_func_uint16_t_u((safe_unary_minus_func_uint32_t_u(((((((safe_mod_func_uint64_t_u_u(((safe_mul_func_uint16_t_u_u(p_23, ((l_151[0][0][0] & (((((+(g_95.f1 > ((l_51 ^= (safe_add_func_int32_t_s_s((-3L), g_76[0][1][0]))) , l_135))) && p_23) >= g_8) | g_75[0]) && g_75[0])) ^ 0xBAL))) , g_95.f0), 0xA45DBAEAE63DA663LL)) < l_192[1][0][0]) , l_193[0][0][1]) && 0x117FE557L) | 0x7FL) == p_21))))) || p_21);
                l_133 = g_94.f2;
            }
        }
    }
    return l_134;
}



static const struct S0  func_35(uint16_t  p_36, uint8_t  p_37)
{ 
    uint32_t l_71 = 6UL;
    uint64_t l_74 = 0x517D3E8228F8F04BLL;
    if ((safe_sub_func_uint16_t_u_u(0xE882L, (safe_mul_func_int16_t_s_s(((safe_sub_func_int16_t_s_s(((safe_add_func_int16_t_s_s((((g_3 && (safe_mod_func_int32_t_s_s((g_70 = 0xCA929EFCL), 0xF28ED335L))) > l_71) == 0x11L), 65534UL)) | 0L), p_36)) || 0xDAL), 1L)))))
    { 
        uint64_t l_73 = 0x0E6E27DFDEEAF792LL;
        g_75[0] ^= ((((safe_unary_minus_func_int32_t_s(((l_73 != (p_36 > ((g_12 >= (0x2AL & 0xDBL)) & l_73))) <= 0xC7B934CEL))) & 0L) | l_74) || g_3);
    }
    else
    { 
        struct S0 l_88 = {18446744073709551614UL,0xFAL,0x39L};
        uint32_t l_90 = 0xAF746A6EL;
        for (l_71 = 0; (l_71 <= 0); l_71 += 1)
        { 
            const uint16_t l_91 = 0xA3D9L;
            ++g_76[0][1][0];
            g_93 = (g_92 = (safe_rshift_func_int16_t_s_u(((g_12 == (safe_add_func_int64_t_s_s((((safe_unary_minus_func_int8_t_s(((p_36 <= (safe_lshift_func_uint8_t_u_u(((safe_lshift_func_int8_t_s_u((l_88 , (((safe_unary_minus_func_uint64_t_u(p_36)) != g_70) && l_90)), 4)) > 4294967295UL), g_75[0]))) ^ l_91))) ^ p_37) <= l_91), l_91))) & 0x6CD47B9DA0115B50LL), g_70)));
        }
    }
    return g_94;
}



static uint16_t  func_38(const int16_t  p_39, uint32_t  p_40, uint16_t  p_41)
{ 
    int16_t l_53 = 0L;
    int32_t l_58[3][4];
    int i, j;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
            l_58[i][j] = 0x493A50EBL;
    }
    l_58[0][3] = ((l_53 != g_12) , (safe_sub_func_int8_t_s_s(0L, (safe_lshift_func_int8_t_s_u(0L, g_12)))));
    return l_58[1][1];
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_3, "g_3", print_hash_value);
    transparent_crc(g_8, "g_8", print_hash_value);
    transparent_crc(g_12, "g_12", print_hash_value);
    transparent_crc(g_28, "g_28", print_hash_value);
    transparent_crc(g_70, "g_70", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_75[i], "g_75[i]", print_hash_value);

    }
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 1; k++)
            {
                transparent_crc(g_76[i][j][k], "g_76[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_92, "g_92", print_hash_value);
    transparent_crc(g_93, "g_93", print_hash_value);
    transparent_crc(g_94.f0, "g_94.f0", print_hash_value);
    transparent_crc(g_94.f1, "g_94.f1", print_hash_value);
    transparent_crc(g_94.f2, "g_94.f2", print_hash_value);
    transparent_crc(g_95.f0, "g_95.f0", print_hash_value);
    transparent_crc(g_95.f1, "g_95.f1", print_hash_value);
    transparent_crc(g_95.f2, "g_95.f2", print_hash_value);
    transparent_crc(g_99, "g_99", print_hash_value);
    transparent_crc(g_136.f0, "g_136.f0", print_hash_value);
    transparent_crc(g_152, "g_152", print_hash_value);
    transparent_crc(g_196, "g_196", print_hash_value);
    transparent_crc(g_198.f0, "g_198.f0", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
