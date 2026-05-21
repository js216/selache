// SPDX-License-Identifier: MIT
// cctest_csmith_4db329cb.c --- cctest case csmith_4db329cb (csmith seed 1303587275)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0xcfa31cc1 */

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

// Options:   -s 1303587275 -o /tmp/csmith_gen_5dryvqmj/csmith.c --concise --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 8 --max-block-size 5 --max-block-depth 4 --max-expr-complexity 8 --max-array-dim 3 --max-array-len-per-dim 7 --max-struct-fields 8 --max-union-fields 5

static long __undefined;


struct S0 {
   uint32_t  f0;
   int32_t  f1;
   uint16_t  f2;
};

#pragma pack(push)
#pragma pack(1)
struct S1 {
   int32_t  f0;
   const int16_t  f1;
   uint8_t  f2;
   struct S0  f3;
   uint32_t  f4;
   int32_t  f5;
};
#pragma pack(pop)

#pragma pack(push)
#pragma pack(1)
struct S2 {
   const uint64_t  f0;
   const uint32_t  f1;
   int8_t  f2;
};
#pragma pack(pop)

union U3 {
   uint32_t  f0;
   uint64_t  f1;
   uint32_t  f2;
   uint64_t  f3;
};


static int32_t g_3 = 7L;
static int32_t g_4 = 0x2443AC46L;
static int8_t g_32 = 0x87L;
static int64_t g_63 = 7L;
static struct S1 g_69 = {-6L,0L,0xC1L,{0x7B4C73BEL,1L,65535UL},0xB7C5EFF0L,0L};
static uint64_t g_71 = 0xED6FA3C451EDC629LL;
static union U3 g_89 = {0x3CD9AAC9L};
static int8_t *g_91 = (void*)0;
static int8_t **g_90 = &g_91;
static int16_t g_110 = 0x94E2L;
static int8_t g_123 = 7L;
static int16_t g_124[1][3] = {{(-2L),(-2L),(-2L)}};
static int64_t g_129 = 4L;
static uint32_t g_130 = 4294967295UL;
static uint64_t g_182[3] = {18446744073709551609UL,18446744073709551609UL,18446744073709551609UL};
static struct S0 *g_188 = &g_69.f3;
static struct S0 **g_187 = &g_188;
static int64_t g_198 = 3L;
static uint32_t g_199[3][1] = {{1UL},{1UL},{1UL}};
static struct S0 ***g_230[7] = {&g_187,&g_187,&g_187,&g_187,&g_187,&g_187,&g_187};
static uint16_t g_263 = 1UL;
static struct S2 g_279 = {0x803F65F441561CB2LL,4294967295UL,0x24L};
static uint32_t g_291[6][1][4] = {{{0xB572109CL,0x41C3CD1DL,1UL,0x41C3CD1DL}},{{0x41C3CD1DL,0x16D0FEA9L,18446744073709551606UL,0x41C3CD1DL}},{{18446744073709551606UL,0x41C3CD1DL,18446744073709551607UL,18446744073709551607UL}},{{0x1CA3231BL,0x1CA3231BL,1UL,0xB572109CL}},{{0x1CA3231BL,0x16D0FEA9L,18446744073709551607UL,0x1CA3231BL}},{{18446744073709551606UL,0xB572109CL,18446744073709551606UL,18446744073709551607UL}}};
static int64_t g_296 = 0x2A6A57EF37E6150ELL;
static int32_t g_297 = (-10L);
static int32_t *g_305 = (void*)0;
static uint32_t g_314[7][7][5] = {{{0x435C6A73L,0UL,8UL,0xB616BFC2L,0UL},{1UL,2UL,0xFB55635CL,0x4ECB678FL,0x4888DD20L},{0x960F4A7EL,0UL,0x1B43B850L,0UL,1UL},{9UL,0x5755D46AL,3UL,0xED60ED67L,0x9D6338A6L},{4294967294UL,0xF4EC5D02L,0xCACAE96CL,0x1C00C681L,0x7356F173L},{0UL,8UL,4294967290UL,0x7356F173L,0xAD4369DBL},{1UL,0x68293861L,4UL,4294967287UL,0x7C001A6FL}},{{4294967293UL,0UL,0xADE35319L,0x48AC9722L,0x7C001A6FL},{4294967291UL,0xAD4369DBL,0xE9B4C6B0L,1UL,0xAD4369DBL},{4294967288UL,1UL,0x4B073F6DL,1UL,0x7356F173L},{0x48AC9722L,0xE5BC425BL,9UL,0xEF38B845L,0x9D6338A6L},{0xE5BC425BL,4294967294UL,8UL,0UL,1UL},{0x5755D46AL,0UL,0xA710C7E6L,7UL,0x4888DD20L},{0x657D5D05L,0x2EFE8A0EL,7UL,9UL,1UL}},{{4294967291UL,4294967286UL,4294967292UL,0x9D6338A6L,4294967295UL},{0xF4EC5D02L,0xF08412EBL,4294967288UL,0x4FE84DE2L,0x4FE84DE2L},{0UL,0x2EFE8A0EL,0UL,0x54657B57L,0UL},{0UL,0x1C00C681L,0xAD4369DBL,1UL,0x5531B2F3L},{0UL,7UL,0x703680E1L,1UL,4294967288UL},{1UL,0xE5BC425BL,0xAD4369DBL,0x5531B2F3L,1UL},{0x960F4A7EL,0xE9B4C6B0L,0UL,0x68293861L,4294967286UL}},{{0x7356F173L,0xED60ED67L,4294967288UL,0x4888DD20L,0x9E80098BL},{0xE9B4C6B0L,0UL,4294967292UL,0UL,0x5755D46AL},{1UL,0x1D8D233EL,7UL,0x68293861L,8UL},{1UL,1UL,0xA710C7E6L,0x2EFE8A0EL,0x08318B36L},{9UL,0xF4EC5D02L,8UL,0UL,7UL},{4294967295UL,0x48AC9722L,9UL,1UL,4294967294UL},{4294967295UL,1UL,0x4B073F6DL,0x83B8E746L,1UL}},{{4294967294UL,2UL,0xE9B4C6B0L,0x1B43B850L,0x5755D46AL},{1UL,4294967290UL,0xADE35319L,0x9D6338A6L,0xF994BD5DL},{1UL,4294967295UL,4UL,1UL,0xF08412EBL},{4294967294UL,0x08318B36L,4294967290UL,4294967294UL,1UL},{4294967295UL,1UL,0xCACAE96CL,0UL,0x657D5D05L},{4294967295UL,0x7356F173L,3UL,4294967295UL,0x2EFE8A0EL},{9UL,9UL,0x1B43B850L,0x089F5BDDL,0UL}},{{1UL,4294967294UL,0xFB55635CL,1UL,0x1B43B850L},{1UL,4294967295UL,0x2BBA75CAL,0x5755D46AL,4294967293UL},{0xE9B4C6B0L,0x3E0D10F8L,4294967294UL,0xADE35319L,1UL},{0x7356F173L,0xFB55635CL,0xFB55635CL,0x7356F173L,0UL},{0x960F4A7EL,1UL,4294967295UL,4294967295UL,0x5531B2F3L},{0xBD633C8CL,4294967286UL,0x5BCD7E6FL,0xDAED51D2L,9UL},{0xA164C548L,0x04CFCD98L,0xA97C905CL,4294967295UL,0x1190A5AFL}},{{0x1D8D233EL,4294967294UL,1UL,4294967290UL,0x48AC9722L},{4294967295UL,0xADE35319L,0x43EF79BDL,1UL,0x92EE6B79L},{0xCACAE96CL,0xB616BFC2L,1UL,4294967286UL,0x6E5B9C97L},{0UL,0x48AC9722L,0x7356F173L,0x4ECB678FL,0x48AC9722L},{0xA710C7E6L,0x4ECB678FL,0x2464D556L,4294967295UL,4294967290UL},{4294967286UL,0xAF19E724L,8UL,0UL,0xA97C905CL},{4294967293UL,0xF994BD5DL,0UL,0xA164C548L,0x5531B2F3L}}};
static struct S0 **g_329 = &g_188;
static uint64_t g_334 = 0x122B65A340AF4737LL;
static int64_t g_469 = 0x92D1332678CDC20FLL;
static uint8_t *g_492 = &g_69.f2;
static uint8_t **g_491 = &g_492;
static struct S1 *g_564 = &g_69;
static struct S1 **g_563 = &g_564;
static uint8_t g_577 = 0xE2L;
static uint16_t *g_581 = &g_69.f3.f2;
static uint16_t **g_580 = &g_581;
static uint32_t *g_632 = (void*)0;
static uint32_t **g_631 = &g_632;
static union U3 *g_642 = &g_89;
static union U3 * const *g_641 = &g_642;
static uint32_t g_694 = 1UL;
static int32_t g_705 = 0x4378CFA1L;
static uint8_t g_706[2][7][2] = {{{0UL,4UL},{249UL,0x38L},{5UL,5UL},{0UL,5UL},{5UL,0x38L},{249UL,4UL},{0UL,249UL}},{{4UL,0x38L},{4UL,249UL},{0UL,4UL},{249UL,0x38L},{5UL,5UL},{0UL,5UL},{5UL,0x38L}}};
static uint8_t g_751[4][2][2] = {{{0xA7L,0xA7L},{0xA7L,0xA7L}},{{0xA7L,0xA7L},{0xA7L,0xA7L}},{{0xA7L,0xA7L},{0xA7L,0xA7L}},{{0xA7L,0xA7L},{0xA7L,0xA7L}}};
static int64_t g_849 = 0xB0E009E80A9F5813LL;
static uint8_t g_850 = 254UL;
static int32_t g_894 = 1L;
static int32_t g_941 = 0L;
static int32_t g_942 = 0x035E7E4EL;
static uint8_t g_943 = 253UL;
static int64_t g_949 = 0x178830ADB666B6FBLL;
static int8_t g_950 = 0x79L;
static uint8_t g_951 = 246UL;
static struct S2 g_995[4][4] = {{{0xADB70E432E34D87FLL,0x097C9DBBL,-2L},{0xADB70E432E34D87FLL,0x097C9DBBL,-2L},{0xADB70E432E34D87FLL,0x097C9DBBL,-2L},{0xADB70E432E34D87FLL,0x097C9DBBL,-2L}},{{0xADB70E432E34D87FLL,0x097C9DBBL,-2L},{0xADB70E432E34D87FLL,0x097C9DBBL,-2L},{0xADB70E432E34D87FLL,0x097C9DBBL,-2L},{0xADB70E432E34D87FLL,0x097C9DBBL,-2L}},{{0xADB70E432E34D87FLL,0x097C9DBBL,-2L},{0xADB70E432E34D87FLL,0x097C9DBBL,-2L},{0xADB70E432E34D87FLL,0x097C9DBBL,-2L},{0xADB70E432E34D87FLL,0x097C9DBBL,-2L}},{{0xADB70E432E34D87FLL,0x097C9DBBL,-2L},{0xADB70E432E34D87FLL,0x097C9DBBL,-2L},{0xADB70E432E34D87FLL,0x097C9DBBL,-2L},{0xADB70E432E34D87FLL,0x097C9DBBL,-2L}}};
static union U3 **g_1029[3][2][2] = {{{&g_642,(void*)0},{&g_642,&g_642}},{{&g_642,&g_642},{&g_642,&g_642}},{{&g_642,(void*)0},{&g_642,(void*)0}}};
static union U3 ***g_1028 = &g_1029[1][1][1];
static int16_t g_1044 = 0x49E4L;
static const uint8_t g_1069 = 255UL;
static uint8_t g_1085 = 249UL;
static int8_t g_1195 = 0xEDL;
static uint32_t g_1196 = 0x762D2218L;
static uint16_t *g_1207 = (void*)0;
static const uint8_t **g_1215 = (void*)0;
static const uint8_t ***g_1214 = &g_1215;
static const uint8_t ****g_1213 = &g_1214;
static const uint8_t *****g_1212 = &g_1213;
static int32_t g_1301 = 0x428F7BB1L;
static int16_t g_1302 = 0x7706L;
static int32_t g_1304 = (-1L);
static int32_t g_1306[4] = {(-1L),(-1L),(-1L),(-1L)};
static int8_t g_1307 = 0x0DL;
static int16_t g_1373 = 0x20A1L;
static uint16_t g_1375[4][7][6] = {{{65535UL,65535UL,1UL,65535UL,65535UL,4UL},{0x922DL,65535UL,0x349AL,65535UL,0x922DL,4UL},{65535UL,65535UL,1UL,65535UL,65535UL,4UL},{0x922DL,65535UL,0x349AL,65535UL,0x922DL,4UL},{65535UL,65535UL,1UL,65535UL,65535UL,4UL},{0x922DL,65535UL,0x349AL,65535UL,0x922DL,4UL},{65535UL,65535UL,1UL,65535UL,65535UL,4UL}},{{0x922DL,65535UL,0x349AL,65535UL,0x922DL,4UL},{65535UL,65535UL,1UL,65535UL,65535UL,4UL},{0x922DL,65535UL,0x349AL,65535UL,0x922DL,4UL},{65535UL,65535UL,1UL,65535UL,65535UL,4UL},{65529UL,7UL,0x922DL,7UL,65529UL,65535UL},{1UL,7UL,65535UL,7UL,1UL,65535UL},{65529UL,7UL,0x922DL,7UL,65529UL,65535UL}},{{1UL,7UL,65535UL,7UL,1UL,65535UL},{65529UL,7UL,0x922DL,7UL,65529UL,65535UL},{1UL,7UL,65535UL,7UL,1UL,65535UL},{65529UL,7UL,0x922DL,7UL,65529UL,65535UL},{1UL,7UL,65535UL,7UL,1UL,65535UL},{65529UL,7UL,0x922DL,7UL,65529UL,65535UL},{1UL,7UL,65535UL,7UL,1UL,65535UL}},{{65529UL,7UL,0x922DL,7UL,65529UL,65535UL},{1UL,7UL,65535UL,7UL,1UL,65535UL},{65529UL,7UL,0x922DL,7UL,65529UL,65535UL},{1UL,7UL,65535UL,7UL,1UL,65535UL},{65529UL,7UL,0x922DL,7UL,65529UL,65535UL},{1UL,7UL,65535UL,7UL,1UL,65535UL},{65529UL,7UL,0x922DL,7UL,65529UL,65535UL}}};
static uint8_t g_1406 = 4UL;
static uint16_t ***g_1434 = &g_580;
static uint16_t ****g_1433 = &g_1434;
static uint32_t *g_1480 = (void*)0;
static int16_t g_1488 = 0xA966L;
static int32_t g_1489 = 5L;
static int8_t g_1490 = 6L;
static union U3 *g_1520 = &g_89;
static int64_t *g_1532 = &g_296;
static int64_t * const *g_1531 = &g_1532;
static int32_t g_1577 = (-8L);
static int8_t g_1578 = 7L;
static int32_t g_1579 = (-6L);
static uint8_t g_1580 = 0x62L;
static struct S0 g_1654 = {18446744073709551615UL,-7L,0x2DACL};
static int16_t g_1741 = 1L;
static struct S1 *** const g_1744 = &g_563;
static struct S1 *** const *g_1743 = &g_1744;
static struct S2 *g_1757 = (void*)0;
static int32_t g_1777 = 1L;
static uint64_t g_1778 = 0UL;
static int8_t g_1864 = 0x57L;
static uint16_t g_1919[1][4] = {{3UL,3UL,3UL,3UL}};
static uint32_t g_1930 = 4294967295UL;
static uint32_t * const g_1929 = &g_1930;
static uint32_t * const *g_1928 = &g_1929;
static const uint32_t *g_1932 = (void*)0;
static const uint32_t **g_1931 = &g_1932;
static int32_t *g_2001 = (void*)0;
static int64_t g_2056[5][3] = {{0x701D38D180946485LL,0x701D38D180946485LL,0x701D38D180946485LL},{0x701D38D180946485LL,0x701D38D180946485LL,0x701D38D180946485LL},{0x701D38D180946485LL,0x701D38D180946485LL,0x701D38D180946485LL},{0x701D38D180946485LL,0x701D38D180946485LL,0x701D38D180946485LL},{0x701D38D180946485LL,0x701D38D180946485LL,0x701D38D180946485LL}};
static uint64_t g_2059 = 0x930429E4B9650BA6LL;
static int8_t ***g_2075 = &g_90;
static int8_t ****g_2074 = &g_2075;
static int8_t ***** const g_2073 = &g_2074;
static int32_t g_2087 = 0xF79F9622L;
static uint8_t g_2092 = 0x01L;
static uint8_t g_2197 = 255UL;
static uint64_t g_2229 = 0xBC0F8BEAD20B9A94LL;
static const uint64_t g_2250 = 0xBC1A8BA8DC4EA8E5LL;
static const uint64_t *g_2249 = &g_2250;
static int32_t **g_2287[3] = {(void*)0,(void*)0,(void*)0};
static int32_t ***g_2286[7][7] = {{&g_2287[2],&g_2287[2],&g_2287[2],&g_2287[2],(void*)0,&g_2287[2],&g_2287[2]},{&g_2287[2],&g_2287[1],(void*)0,&g_2287[2],&g_2287[2],(void*)0,&g_2287[1]},{&g_2287[2],&g_2287[2],&g_2287[2],&g_2287[2],&g_2287[2],(void*)0,&g_2287[2]},{&g_2287[1],&g_2287[2],&g_2287[2],&g_2287[2],&g_2287[2],&g_2287[2],&g_2287[2]},{&g_2287[2],&g_2287[2],&g_2287[2],&g_2287[2],&g_2287[0],&g_2287[2],&g_2287[2]},{&g_2287[2],&g_2287[2],&g_2287[1],&g_2287[2],&g_2287[2],&g_2287[0],(void*)0},{&g_2287[2],&g_2287[2],&g_2287[2],&g_2287[2],&g_2287[2],&g_2287[2],&g_2287[2]}};
static struct S0 g_2300 = {0x9D8B997CL,0xFEE67272L,65527UL};



static int16_t  func_1(void);
static uint64_t  func_8(struct S0  p_9);
static struct S0  func_10(int32_t  p_11, uint8_t  p_12, const uint32_t  p_13);
static int8_t  func_19(int8_t  p_20, int32_t  p_21, struct S1  p_22, uint16_t  p_23);
static int32_t  func_37(struct S2  p_38, int32_t  p_39, int8_t * p_40, uint64_t  p_41);
static struct S2  func_42(int32_t  p_43, struct S0  p_44, int8_t * p_45, int8_t * const  p_46, int8_t * p_47);
static int32_t  func_48(struct S2  p_49, uint16_t  p_50, uint32_t  p_51);
static struct S2  func_53(int8_t * p_54, int8_t * const  p_55, int32_t  p_56, int8_t * p_57, int64_t  p_58);




static int16_t  func_1(void)
{ 
    uint8_t l_2[7] = {0x3FL,0xBDL,0x3FL,0x3FL,0xBDL,0x3FL,0x3FL};
    int32_t l_34 = 0x76492A41L;
    int32_t *l_1563 = (void*)0;
    int32_t *l_1564 = &g_4;
    int32_t *l_1565 = (void*)0;
    int32_t *l_1566 = &g_297;
    int32_t *l_1567 = &g_1301;
    int32_t *l_1568 = &g_1301;
    int32_t *l_1569 = (void*)0;
    int32_t *l_1570 = (void*)0;
    int32_t *l_1571 = &l_34;
    int32_t *l_1572 = &g_4;
    int32_t *l_1573 = &g_69.f0;
    int32_t *l_1574 = &g_941;
    int32_t *l_1575[3][6] = {{&g_3,&g_69.f0,&g_3,&g_69.f0,&g_3,&g_69.f0},{&g_3,&g_69.f0,&g_3,&g_69.f0,&g_3,&g_69.f0},{&g_3,&g_69.f0,&g_3,&g_69.f0,&g_3,&g_69.f0}};
    int64_t l_1576 = (-1L);
    const int32_t l_1583[6][7] = {{0xB62541A8L,(-3L),0x54A0FCF6L,0L,0L,0x54A0FCF6L,(-3L)},{0x42757832L,0x36BBCA51L,0x00422CD6L,0x42757832L,2L,2L,0x42757832L},{0x970C9A98L,(-3L),0x970C9A98L,(-10L),(-3L),(-1L),(-1L)},{0xE4C27AA7L,0x42757832L,0x6B12FED2L,0x42757832L,0xE4C27AA7L,0x6B12FED2L,8L},{0L,(-1L),(-10L),0L,(-10L),(-1L),0L},{0x00422CD6L,8L,0x36BBCA51L,2L,8L,2L,0x36BBCA51L}};
    uint64_t l_1601 = 0xD29C2F116247FD8DLL;
    int8_t l_1627 = 0xE6L;
    int8_t * const *l_1672 = &g_91;
    int8_t * const **l_1671 = &l_1672;
    uint64_t l_1694 = 0x483F602B128CA6FBLL;
    struct S0 **l_1750[2][2] = {{&g_188,&g_188},{&g_188,&g_188}};
    int8_t l_1765 = 0x9EL;
    int16_t *l_1816 = &g_1741;
    uint32_t l_1854 = 0xF45B578DL;
    uint16_t l_1889 = 0x72A0L;
    union U3 *l_1900 = &g_89;
    uint32_t l_1904 = 18446744073709551613UL;
    uint8_t **l_1916 = &g_492;
    int16_t l_1917 = 0xE5A5L;
    int16_t l_1918 = 4L;
    uint32_t * const *l_1926 = (void*)0;
    const uint32_t l_1998 = 18446744073709551614UL;
    uint32_t l_2034 = 0x00827BC0L;
    int32_t l_2053[1];
    int8_t ** const *l_2086 = &g_90;
    int8_t ** const * const *l_2085 = &l_2086;
    int8_t ** const * const **l_2084[5] = {&l_2085,&l_2085,&l_2085,&l_2085,&l_2085};
    int32_t **l_2124[5] = {&l_1563,&l_1563,&l_1563,&l_1563,&l_1563};
    uint32_t l_2134 = 0xCD57EAB0L;
    uint32_t l_2159 = 18446744073709551613UL;
    int32_t l_2192 = 0xC6558022L;
    uint16_t l_2204 = 0x74B9L;
    int16_t l_2208 = (-6L);
    int8_t l_2220 = 5L;
    int64_t l_2227 = 0xE2ACAF02EC67D933LL;
    struct S1 l_2284 = {1L,-5L,255UL,{0UL,0x1332D394L,8UL},0UL,0xE3561475L};
    uint32_t l_2332 = 0x5A8A5B37L;
    int i, j;
    for (i = 0; i < 1; i++)
        l_2053[i] = (-3L);
    for (g_3 = 6; (g_3 >= 0); g_3 -= 1)
    { 
        int64_t l_7 = 0x2D564C7B7F609B2BLL;
        int32_t l_35[5][1];
        uint16_t l_1560 = 0xA6AEL;
        int i, j;
        for (i = 0; i < 5; i++)
        {
            for (j = 0; j < 1; j++)
                l_35[i][j] = 1L;
        }
        for (g_4 = 0; (g_4 <= 6); g_4 += 1)
        { 
            int8_t *l_33[4];
            struct S1 l_36[3][2][1] = {{{{0x1837DEF5L,5L,0x4AL,{0xFC518F82L,-1L,0UL},0x83BE7680L,0xD333F0D2L}},{{-6L,-3L,8UL,{0xA4182467L,-2L,0x576DL},4294967294UL,0L}}},{{{0x1837DEF5L,5L,0x4AL,{0xFC518F82L,-1L,0UL},0x83BE7680L,0xD333F0D2L}},{{-6L,-3L,8UL,{0xA4182467L,-2L,0x576DL},4294967294UL,0L}}},{{{0x1837DEF5L,5L,0x4AL,{0xFC518F82L,-1L,0UL},0x83BE7680L,0xD333F0D2L}},{{-6L,-3L,8UL,{0xA4182467L,-2L,0x576DL},4294967294UL,0L}}}};
            int32_t *l_1555 = &g_1489;
            int32_t **l_1556 = &g_305;
            int32_t *l_1557 = &g_942;
            int32_t *l_1558 = &l_36[1][1][0].f3.f1;
            int32_t *l_1559[1][2][4];
            int i, j, k;
            for (i = 0; i < 4; i++)
                l_33[i] = &g_32;
            for (i = 0; i < 1; i++)
            {
                for (j = 0; j < 2; j++)
                {
                    for (k = 0; k < 4; k++)
                        l_1559[i][j][k] = &l_35[2][0];
                }
            }
        }
        return g_951;
    }
    g_1580++;
    if (l_1583[0][1])
    { 
        int8_t l_1589 = 0L;
        uint64_t *l_1600 = &g_71;
        int32_t *l_1603 = &g_1489;
        int16_t l_1626 = 0x95FAL;
        union U3 **l_1634 = &g_642;
        int8_t ***l_1673 = &g_90;
        int32_t l_1681 = 9L;
        uint64_t l_1708 = 6UL;
        int64_t l_1717 = 0xD2D10853CC54811CLL;
        uint8_t **l_1760 = &g_492;
        int32_t l_1767 = 0x20053296L;
        int32_t l_1775[5][6] = {{0xAD376BD4L,0x6CC27272L,0xAD376BD4L,0xAD376BD4L,0x6CC27272L,0xAD376BD4L},{0xAD376BD4L,0x6CC27272L,0xAD376BD4L,0xAD376BD4L,0x6CC27272L,0xAD376BD4L},{0xAD376BD4L,0x6CC27272L,0xAD376BD4L,0xAD376BD4L,0x6CC27272L,0xAD376BD4L},{0xAD376BD4L,0x6CC27272L,0xAD376BD4L,0xAD376BD4L,0x6CC27272L,0xAD376BD4L},{0xAD376BD4L,0x6CC27272L,0xAD376BD4L,0xAD376BD4L,0x6CC27272L,0xAD376BD4L}};
        struct S0 ****l_1810[3];
        union U3 ****l_1853 = &g_1028;
        int32_t l_1855 = 0L;
        int i, j;
        for (i = 0; i < 3; i++)
            l_1810[i] = &g_230[5];
    }
    else
    { 
        const uint8_t *l_1913 = (void*)0;
        const uint8_t **l_1912[1];
        const uint8_t ***l_1911 = &l_1912[0];
        const uint8_t **l_1914 = &l_1913;
        struct S1 l_1915 = {0x0B0B0A28L,5L,1UL,{0x8B3DCC47L,0xB03B5D73L,0x4281L},0x2E872E80L,0x57278EE5L};
        uint32_t * const **l_1927[7][3][6] = {{{(void*)0,&l_1926,(void*)0,&l_1926,&l_1926,&l_1926},{(void*)0,&l_1926,&l_1926,&l_1926,(void*)0,(void*)0},{&l_1926,&l_1926,(void*)0,&l_1926,(void*)0,&l_1926}},{{(void*)0,&l_1926,&l_1926,&l_1926,(void*)0,&l_1926},{(void*)0,(void*)0,(void*)0,&l_1926,&l_1926,(void*)0},{(void*)0,(void*)0,&l_1926,(void*)0,(void*)0,&l_1926}},{{&l_1926,&l_1926,(void*)0,(void*)0,(void*)0,&l_1926},{(void*)0,&l_1926,&l_1926,&l_1926,(void*)0,&l_1926},{(void*)0,&l_1926,(void*)0,&l_1926,&l_1926,&l_1926}},{{(void*)0,&l_1926,&l_1926,&l_1926,(void*)0,(void*)0},{&l_1926,&l_1926,(void*)0,&l_1926,(void*)0,&l_1926},{(void*)0,&l_1926,&l_1926,&l_1926,(void*)0,&l_1926}},{{(void*)0,(void*)0,(void*)0,&l_1926,&l_1926,(void*)0},{(void*)0,(void*)0,&l_1926,(void*)0,(void*)0,&l_1926},{&l_1926,&l_1926,(void*)0,(void*)0,(void*)0,&l_1926}},{{(void*)0,&l_1926,&l_1926,&l_1926,(void*)0,&l_1926},{(void*)0,&l_1926,(void*)0,&l_1926,&l_1926,&l_1926},{(void*)0,&l_1926,&l_1926,&l_1926,(void*)0,(void*)0}},{{&l_1926,&l_1926,(void*)0,&l_1926,(void*)0,&l_1926},{(void*)0,&l_1926,&l_1926,&l_1926,(void*)0,&l_1926},{(void*)0,(void*)0,(void*)0,&l_1926,&l_1926,(void*)0}}};
        const uint32_t ***l_1933[3];
        int32_t l_1961 = 0x5D2B35CCL;
        uint32_t l_2019 = 18446744073709551615UL;
        const uint8_t ****l_2022[1];
        int64_t l_2036 = (-2L);
        int32_t l_2058 = 0x6097FEB9L;
        int32_t l_2088 = (-1L);
        int32_t l_2089 = 1L;
        int32_t l_2090 = 1L;
        int32_t l_2091[2][1];
        int32_t l_2127 = (-4L);
        uint32_t l_2147[7][2][1] = {{{0xE102F924L},{0x0996304DL}},{{1UL},{0xB956CFB9L}},{{1UL},{0x0996304DL}},{{0xE102F924L},{0x0996304DL}},{{1UL},{0xB956CFB9L}},{{1UL},{0x0996304DL}},{{0xE102F924L},{0x0996304DL}}};
        struct S0 **l_2155 = (void*)0;
        int32_t l_2224 = 5L;
        const uint64_t *l_2247 = &l_1694;
        struct S0 l_2256 = {0x49A3F79DL,0x1D084B58L,0x3D83L};
        int32_t *l_2297 = &l_2256.f1;
        union U3 l_2323 = {0x5D59790CL};
        int32_t l_2331 = 9L;
        int i, j, k;
        for (i = 0; i < 1; i++)
            l_1912[i] = &l_1913;
        for (i = 0; i < 3; i++)
            l_1933[i] = &g_1931;
        for (i = 0; i < 1; i++)
            l_2022[i] = &l_1911;
        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 1; j++)
                l_2091[i][j] = 0x39C45B4AL;
        }
        (*l_1568) &= ((((*g_492) , (l_1914 = ((*l_1911) = ((***g_1212) = (*g_1214))))) == (l_1915 , l_1916)) >= l_1915.f2);
        --g_1919[0][0];
        if (((*l_1574) |= (safe_mul_func_uint8_t_u_u((((*l_1566) <= ((g_1928 = l_1926) != (g_1931 = g_1931))) != (*l_1571)), (((*g_1929) = 0xD69B9105L) , (*l_1564))))))
        { 
            struct S2 **l_1934 = (void*)0;
            int32_t l_1944 = (-1L);
            int16_t l_1953 = 0x05A2L;
            int32_t l_1962 = 0x970AAD9AL;
            g_1757 = (void*)0;
            for (g_1196 = 0; (g_1196 == 7); g_1196 = safe_add_func_uint32_t_u_u(g_1196, 4))
            { 
                int32_t l_1954 = 5L;
                uint16_t l_1963 = 2UL;
                if ((safe_mul_func_int16_t_s_s((((((~(0xA83C10E28822F311LL || (safe_div_func_int8_t_s_s(l_1944, (*g_492))))) >= (*l_1564)) | ((void*)0 == &g_1744)) < g_69.f3.f0) ^ l_1915.f5), l_1944)))
                { 
                    int8_t *l_1955 = &g_1864;
                    uint64_t *l_1958[6] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                    int i;
                    g_941 |= (l_1915.f3.f1 > (((((*l_1816) = ((safe_add_func_uint32_t_u_u((safe_div_func_uint8_t_u_u(l_1915.f1, l_1915.f3.f2)), g_751[0][1][1])) & (((*l_1955) = ((safe_sub_func_int64_t_s_s((safe_sub_func_uint32_t_u_u(l_1953, (l_1915.f3.f0 > (l_1954 ^= (*l_1567))))), (*g_1532))) | 0x26L)) < (-1L)))) & l_1915.f3.f1) || g_69.f1) ^ (-1L)));
                    (*l_1571) &= (safe_sub_func_uint64_t_u_u((g_1778++), l_1954));
                    if (g_1306[1])
                        continue;
                }
                else
                { 
                    l_1963--;
                }
            }
            for (l_1765 = 16; (l_1765 == 23); ++l_1765)
            { 
                uint16_t l_1968 = 65526UL;
                ++l_1968;
            }
            (*l_1572) = l_1962;
        }
        else
        { 
            uint8_t l_1979 = 0x60L;
            (**g_329) = l_1915.f3;
            for (g_849 = (-21); (g_849 >= (-29)); --g_849)
            { 
                uint32_t l_1976 = 4294967293UL;
                for (g_1302 = 5; (g_1302 >= (-18)); --g_1302)
                { 
                    struct S0 l_1975 = {0xAF9506C5L,0x0652196DL,0xA796L};
                    l_1975 = ((**g_187) = ((*g_1520) , l_1915.f3));
                    if (g_1375[3][2][5])
                        break;
                    l_1976--;
                    if ((*l_1574))
                        break;
                }
                if (l_1976)
                    continue;
                l_1979++;
            }
        }
        for (l_1627 = 0; (l_1627 <= 0); l_1627 += 1)
        { 
            int32_t **l_1992[7][3] = {{&l_1573,&l_1574,&l_1573},{&l_1575[2][2],&l_1571,&l_1570},{&l_1571,&l_1571,&g_305},{(void*)0,&l_1571,&l_1571},{&g_305,&l_1574,&l_1569},{(void*)0,(void*)0,(void*)0},{&l_1571,&g_305,&l_1569}};
            uint8_t l_2013 = 0x4FL;
            uint8_t l_2018 = 9UL;
            const struct S0 *l_2051 = &l_1915.f3;
            uint32_t l_2066 = 0x75DFFF23L;
            uint32_t l_2139 = 0x239E638EL;
            union U3 *l_2146 = &g_89;
            int i, j;
            for (g_297 = 6; (g_297 >= 0); g_297 -= 1)
            { 
                int8_t * const ***l_1983 = (void*)0;
                int8_t * const ****l_1982 = &l_1983;
                (*l_1982) = &l_1671;
            }
        }
        for (g_69.f3.f2 = 0; (g_69.f3.f2 <= 4); g_69.f3.f2 += 1)
        { 
            uint64_t *l_2207 = &g_2059;
            const int32_t l_2210 = 0xF83A8B05L;
            int32_t l_2211 = 0xF8254F19L;
            int64_t *l_2221 = &g_198;
            int32_t l_2225 = 0L;
            int32_t l_2226 = (-1L);
            int8_t ** const **l_2244 = &l_2086;
            int8_t ** const ***l_2243 = &l_2244;
            union U3 *l_2252 = &g_89;
            union U3 *l_2254 = &g_89;
            int8_t *****l_2272 = &g_2074;
            uint64_t l_2274 = 0x255BD7203DDD0EF0LL;
            struct S0 l_2296 = {0x6A113EF5L,-1L,0UL};
        }
    }
    return g_706[0][4][0];
}



static uint64_t  func_8(struct S0  p_9)
{ 
    int8_t **l_984 = &g_91;
    uint16_t ***l_986 = &g_580;
    uint16_t ****l_985 = &l_986;
    uint16_t ***l_987 = &g_580;
    int32_t l_988 = 0x9BFB940AL;
    union U3 **l_1013 = &g_642;
    int16_t *l_1014 = &g_110;
    struct S1 *l_1076 = &g_69;
    int32_t l_1078[2];
    uint64_t l_1079 = 0x4C18DA9CC93628E5LL;
    int32_t **l_1142 = (void*)0;
    int32_t *l_1143 = &g_69.f0;
    int16_t l_1172 = 0L;
    uint16_t l_1217 = 65532UL;
    int16_t l_1254 = 0xC306L;
    int32_t l_1267[5][7] = {{3L,3L,3L,3L,3L,3L,3L},{(-2L),(-2L),(-2L),(-2L),(-2L),(-2L),(-2L)},{3L,3L,3L,3L,3L,3L,3L},{(-2L),(-2L),(-2L),(-2L),(-2L),(-2L),(-2L)},{3L,3L,3L,3L,3L,3L,3L}};
    struct S2 l_1339 = {0UL,0x5869EC17L,-10L};
    int8_t l_1374 = 0x56L;
    struct S0 l_1378 = {0UL,1L,65535UL};
    uint8_t *l_1420 = (void*)0;
    int8_t l_1424 = 1L;
    int8_t l_1486[5][1][6] = {{{(-6L),(-6L),(-9L),1L,(-9L),(-6L)}},{{(-9L),0L,1L,1L,0L,(-9L)}},{{(-6L),(-9L),1L,(-9L),(-6L),(-6L)}},{{0x2AL,(-9L),(-9L),0x2AL,0L,0x2AL}},{{0x2AL,0L,0x2AL,(-9L),(-9L),0x2AL}}};
    uint16_t l_1545 = 0x9AD9L;
    uint32_t l_1552 = 0xE3E9EE7FL;
    struct S0 *l_1553 = (void*)0;
    struct S0 *l_1554 = &l_1378;
    int i, j, k;
    for (i = 0; i < 2; i++)
        l_1078[i] = 1L;
    if (((safe_div_func_uint8_t_u_u((safe_mod_func_int64_t_s_s((((**g_491) &= (((void*)0 != l_984) < (((*l_985) = (void*)0) == (l_987 = &g_580)))) > (((l_988 || (safe_lshift_func_int16_t_s_u((-10L), l_988))) , g_69.f5) > l_988)), 0x9439D0E559B51105LL)), p_9.f1)) && p_9.f1))
    { 
        int32_t *l_996[6][2][6] = {{{&g_297,&g_297,&g_894,(void*)0,(void*)0,&g_942},{(void*)0,&g_69.f3.f1,&g_4,(void*)0,&g_69.f3.f1,&g_894}},{{&g_297,(void*)0,&g_4,(void*)0,&g_297,&g_942},{(void*)0,(void*)0,&g_894,(void*)0,&g_69.f3.f1,&g_4}},{{(void*)0,&g_69.f3.f1,&g_4,(void*)0,(void*)0,&g_4},{&g_297,&g_297,&g_894,(void*)0,(void*)0,&g_942}},{{(void*)0,&g_69.f3.f1,&g_4,(void*)0,&g_69.f3.f1,&g_894},{&g_297,(void*)0,&g_4,(void*)0,&g_297,&g_942}},{{(void*)0,(void*)0,&g_894,&g_4,&g_942,(void*)0},{&g_4,&g_942,(void*)0,&g_942,&g_942,(void*)0}},{{&g_69.f0,&g_69.f0,(void*)0,&g_69.f0,&g_942,(void*)0},{&g_942,&g_942,&g_69.f3.f1,&g_69.f0,&g_942,(void*)0}}};
        uint16_t *l_1019 = &g_263;
        union U3 ****l_1030 = &g_1028;
        int16_t l_1031 = 0x785FL;
        int64_t l_1058 = 0L;
        uint16_t l_1088 = 0x1D02L;
        int8_t **l_1123 = (void*)0;
        uint8_t *l_1137[3][7] = {{&g_751[0][1][1],&g_751[0][1][1],&g_706[0][5][1],&g_751[0][1][1],&g_751[0][1][1],&g_706[0][5][1],&g_751[0][1][1]},{&g_951,&g_850,&g_850,&g_951,&g_850,&g_850,&g_951},{(void*)0,&g_751[0][1][1],(void*)0,(void*)0,&g_751[0][1][1],(void*)0,(void*)0}};
        int32_t l_1138 = 0xD0E64448L;
        int32_t **l_1139 = &g_305;
        int i, j, k;
lbl_1050:
        l_988 &= (0x9233L ^ ((**g_187) , (p_9.f1 || (safe_mod_func_uint64_t_u_u((safe_unary_minus_func_uint32_t_u(p_9.f0)), ((((~(p_9.f2 > ((g_995[3][2] , 18446744073709551609UL) & p_9.f0))) <= g_577) , 9UL) & p_9.f0))))));
lbl_1126:
        for (g_123 = 7; (g_123 != (-5)); --g_123)
        { 
            uint64_t l_1010 = 0x9D6C2D9113F25217LL;
            union U3 **l_1012 = &g_642;
            union U3 ***l_1011 = &l_1012;
            uint32_t *l_1015 = &g_199[2][0];
            uint64_t *l_1016[6];
            int i;
            for (i = 0; i < 6; i++)
                l_1016[i] = &l_1010;
            g_69.f3.f1 &= ((g_89.f1 = (l_988 = (safe_div_func_uint32_t_u_u(p_9.f0, (safe_mul_func_int8_t_s_s(((!((*l_1014) = ((((**g_580) = ((((safe_mul_func_int16_t_s_s((safe_add_func_int32_t_s_s(((safe_div_func_uint32_t_u_u(((*l_1015) &= (l_1010 ^ (((((*g_581) && (((*l_1011) = (void*)0) == l_1013)) > (0xEF81B081563CD70ALL || ((void*)0 == l_1014))) , l_1010) || 7UL))), l_1010)) , 0x0746E9C8L), 1UL)), g_694)) <= l_988) | g_314[2][2][3]) , p_9.f1)) > (-1L)) ^ l_1010))) , l_988), l_988)))))) , p_9.f1);
        }
        if (((((((safe_mul_func_uint16_t_u_u(((*l_1019) = ((*g_581) = p_9.f0)), 0x0DBEL)) , (safe_sub_func_int16_t_s_s((safe_add_func_int64_t_s_s(p_9.f2, ((l_988 != l_988) || (safe_lshift_func_int8_t_s_s(0x4BL, (safe_mul_func_uint16_t_u_u((((((*l_1030) = g_1028) == &g_1029[1][1][1]) , g_705) >= p_9.f2), 0L))))))), 5L))) <= p_9.f0) > p_9.f2) == 0xCE83L) <= l_1031))
        { 
            struct S2 l_1043 = {1UL,1UL,0x31L};
            int32_t l_1045 = (-4L);
            int32_t *l_1049 = (void*)0;
            const uint8_t *l_1066 = (void*)0;
            struct S1 *l_1075 = (void*)0;
            union U3 l_1108 = {0xE288B002L};
            int8_t **l_1122 = &g_91;
            for (g_950 = 0; (g_950 < (-25)); g_950 = safe_sub_func_int32_t_s_s(g_950, 1))
            { 
                uint32_t l_1036 = 0UL;
                const uint8_t *l_1068 = &g_1069;
                uint8_t *l_1070[5][2];
                int32_t l_1077 = (-1L);
                int i, j;
                for (i = 0; i < 5; i++)
                {
                    for (j = 0; j < 2; j++)
                        l_1070[i][j] = &g_69.f2;
                }
                for (g_89.f1 = (-2); (g_89.f1 > 7); ++g_89.f1)
                { 
                    if (l_1036)
                        break;
                }
                l_1045 |= (safe_rshift_func_int16_t_s_u((((safe_div_func_uint8_t_u_u(((void*)0 != (*l_1013)), (safe_lshift_func_uint8_t_u_s((&g_71 == (l_1043 , (((g_1044 < p_9.f1) && 1UL) , (void*)0))), p_9.f1)))) | 0x0753AB8BL) < p_9.f2), p_9.f1));
                if (l_1043.f0)
                    break;
                for (g_89.f0 = 0; (g_89.f0 == 22); ++g_89.f0)
                { 
                    int32_t **l_1048[6] = {&l_996[0][0][4],&l_996[0][0][4],&l_996[0][0][4],&l_996[0][0][4],&l_996[0][0][4],&l_996[0][0][4]};
                    int i;
                    if (l_1043.f0)
                        break;
                    (**l_1030) = l_1013;
                    l_1049 = &l_1045;
                    p_9.f1 |= (-2L);
                }
                for (g_69.f3.f1 = 1; (g_69.f3.f1 <= 6); g_69.f3.f1 += 1)
                { 
                    uint64_t *l_1054 = (void*)0;
                    uint64_t **l_1053 = &l_1054;
                    int32_t l_1055 = (-1L);
                    int32_t **l_1061 = &l_996[3][1][5];
                    const uint8_t **l_1067[3][3];
                    int i, j;
                    for (i = 0; i < 3; i++)
                    {
                        for (j = 0; j < 3; j++)
                            l_1067[i][j] = &l_1066;
                    }
                    if (l_1036)
                        goto lbl_1050;
                    l_1058 = (g_941 = ((((safe_rshift_func_uint8_t_u_s(((g_71 < p_9.f2) || ((((void*)0 == l_1053) , ((p_9.f2 == l_1055) , (safe_sub_func_int64_t_s_s(g_469, g_279.f0)))) < g_279.f2)), p_9.f2)) , 2UL) >= g_1044) && p_9.f1));
                    g_69.f0 |= (safe_rshift_func_int16_t_s_u(l_1036, 11));
                    g_305 = ((*l_1061) = &l_1045);
                    l_1077 |= (safe_div_func_int64_t_s_s(p_9.f2, (l_988 = ((safe_sub_func_int8_t_s_s((((((l_1036 == ((((l_1068 = l_1066) == l_1070[2][1]) , (safe_mul_func_uint16_t_u_u(0x6A2EL, (safe_mul_func_uint8_t_u_u(4UL, (((((**g_491) , 2UL) <= p_9.f1) , l_1075) != l_1076)))))) || 0xD06793E8D1976D52LL)) != 0x88ED455F9E49BB09LL) > (*g_305)) >= g_942) && (*g_305)), p_9.f1)) || p_9.f1))));
                }
            }
            g_894 &= l_988;
            ++l_1079;
            for (g_69.f5 = 0; (g_69.f5 <= 1); g_69.f5 += 1)
            { 
                int8_t l_1082 = 0x2AL;
                int32_t l_1084 = 0x21E67A74L;
                for (g_941 = 0; (g_941 <= 1); g_941 += 1)
                { 
                    int32_t l_1083[6][4];
                    int i, j;
                    for (i = 0; i < 6; i++)
                    {
                        for (j = 0; j < 4; j++)
                            l_1083[i][j] = 0L;
                    }
                    ++g_1085;
                    (**g_329) = p_9;
                }
                return l_1088;
            }
            for (l_988 = 0; (l_988 <= (-19)); --l_988)
            { 
                uint8_t *l_1109 = &g_706[1][0][1];
                int64_t *l_1110 = &g_469;
                int32_t l_1111 = 0x356FF2E2L;
                int8_t *l_1112 = (void*)0;
                int8_t *l_1113 = &g_995[3][2].f2;
                uint8_t *l_1114 = &g_951;
                uint32_t *l_1117 = &g_69.f4;
                int8_t ***l_1124 = &g_90;
                int32_t l_1125[3][7][2] = {{{0x11E0298BL,0xDA19A392L},{0L,0xDA19A392L},{0x11E0298BL,0L},{0x5E597AAAL,0x5E597AAAL},{0x5E597AAAL,0L},{0x11E0298BL,0xDA19A392L},{0L,0xDA19A392L}},{{0x11E0298BL,0L},{0x5E597AAAL,0x5E597AAAL},{0x5E597AAAL,0L},{0x11E0298BL,0xDA19A392L},{0L,0xDA19A392L},{0x11E0298BL,0L},{0x5E597AAAL,0x5E597AAAL}},{{0x5E597AAAL,0L},{0x11E0298BL,0xDA19A392L},{0L,0xDA19A392L},{0x11E0298BL,0L},{0x5E597AAAL,0x5E597AAAL},{0x5E597AAAL,0L},{0x11E0298BL,0xDA19A392L}}};
                int i, j, k;
                g_69.f0 ^= ((*g_492) | ((*l_1114) = ((l_1078[1] > (((*l_1113) = (((g_124[0][1] = (2UL != (safe_mod_func_int8_t_s_s((safe_rshift_func_uint8_t_u_s((~(safe_sub_func_uint8_t_u_u((((safe_unary_minus_func_uint16_t_u((safe_add_func_uint32_t_u_u(p_9.f2, g_943)))) >= (safe_mul_func_int16_t_s_s((safe_add_func_uint16_t_u_u((((*l_1110) = (safe_unary_minus_func_int8_t_s((safe_mod_func_uint8_t_u_u(((*l_1109) = ((l_1108 , g_71) >= g_949)), p_9.f0))))) <= p_9.f1), p_9.f2)), p_9.f0))) , 0x85L), l_1111))), 6)), p_9.f0)))) , (void*)0) == (void*)0)) >= (**g_491))) | p_9.f0)));
                l_1045 ^= ((safe_add_func_uint16_t_u_u(((((*l_1117) = 0UL) ^ (p_9.f1 | ((l_1111 = (safe_div_func_uint8_t_u_u((((**g_580) < 0x0014L) ^ (safe_div_func_int64_t_s_s(((g_995[3][2].f1 , l_1122) != ((*l_1124) = l_1123)), g_1069))), l_1111))) ^ (**g_491)))) > l_1125[0][1][0]), (-1L))) == p_9.f1);
            }
        }
        else
        { 
lbl_1127:
            if (g_69.f3.f1)
                goto lbl_1126;
        }
        if (p_9.f2)
            goto lbl_1127;
        (*l_1139) = (((((safe_div_func_uint32_t_u_u(((p_9.f0 | ((**g_580) & g_850)) <= (+((*l_1014) |= (safe_div_func_int16_t_s_s(((safe_sub_func_uint8_t_u_u((safe_mul_func_uint8_t_u_u(((**g_491) = ((*g_563) == ((((0UL < (*g_492)) != (((l_1078[1] = l_1078[1]) == (**g_491)) | 0xD4DC873DL)) <= 0x81E0696E50AFCA77LL) , l_1076))), l_1138)), 0x3DL)) >= g_123), 0xA1C9L))))), 5UL)) & p_9.f0) == p_9.f1) , 1UL) , (void*)0);
    }
    else
    { 
        struct S0 *l_1140[2];
        int32_t l_1141 = 0xB78F5AE8L;
        int i;
        for (i = 0; i < 2; i++)
            l_1140[i] = &g_69.f3;
        (*g_329) = l_1140[0];
        return l_1141;
    }
    l_1143 = &g_297;
    if ((safe_rshift_func_int8_t_s_s(((*l_1143) & (safe_div_func_uint8_t_u_u((0x89B35A88L ^ ((p_9.f0 && 0x1C8F1E2CL) == (safe_add_func_uint16_t_u_u(((safe_rshift_func_int8_t_s_s(((g_69.f0 || g_69.f3.f1) , (safe_add_func_int64_t_s_s((((safe_lshift_func_int8_t_s_s(((safe_add_func_uint32_t_u_u(0xDEC0DE6AL, 0xAFAB2168L)) < g_334), (*l_1143))) , (*l_1143)) < 6L), 0UL))), (*l_1143))) & 0x3B382CAC2F4B7DCALL), g_4)))), p_9.f2))), 0)))
    { 
        union U3 l_1162 = {0xB227009FL};
        uint32_t l_1163 = 0x64F29173L;
        int8_t *l_1168 = &g_32;
        struct S2 l_1169 = {18446744073709551615UL,0UL,0x36L};
        int32_t *l_1170[5][6][3] = {{{&l_988,&l_988,&g_894},{(void*)0,&l_1078[0],&g_297},{&l_988,(void*)0,&g_894},{(void*)0,&l_1078[0],&g_4},{&l_988,&l_988,&g_894},{(void*)0,&l_1078[0],&g_297}},{{&l_988,(void*)0,&g_894},{(void*)0,&l_1078[0],&g_4},{&l_988,&l_988,&g_894},{(void*)0,&l_1078[0],&g_297},{&l_988,(void*)0,&g_894},{(void*)0,&l_1078[0],&g_4}},{{&l_988,&l_988,&g_894},{(void*)0,&l_1078[0],&g_297},{&l_988,(void*)0,&g_894},{(void*)0,&l_1078[0],&g_4},{&l_988,&l_988,&g_894},{(void*)0,&l_1078[0],&g_297}},{{&l_988,(void*)0,&g_894},{(void*)0,&l_1078[0],&g_4},{&l_988,&l_988,&g_894},{(void*)0,&l_1078[0],&g_297},{&l_988,(void*)0,&g_894},{(void*)0,&l_1078[0],&g_4}},{{&l_988,&l_988,&g_894},{(void*)0,&l_1078[0],&g_297},{&l_988,(void*)0,&g_894},{(void*)0,&l_1078[0],&g_4},{&l_988,&l_988,&g_894},{(void*)0,&l_1078[0],&g_297}}};
        int32_t l_1171 = 0x6B6BFFB3L;
        uint8_t l_1173 = 1UL;
        uint8_t ***l_1178 = (void*)0;
        uint8_t ****l_1177 = &l_1178;
        uint16_t l_1199 = 0x7D79L;
        int i, j, k;
        p_9.f1 = ((safe_mod_func_int32_t_s_s(((((safe_sub_func_int8_t_s_s(((((l_1162 , (l_1163 , ((**g_641) , l_1169))) , p_9.f2) ^ g_69.f1) , g_124[0][1]), 0xB8L)) > 0x3CAF271CL) & 0x0080L) , g_182[1]), (*l_1143))) || 0x33D8B0589F545D35LL);
        if (g_89.f2)
            goto lbl_1176;
lbl_1176:
        ++l_1173;
        (*l_1177) = (void*)0;
        for (g_941 = (-13); (g_941 > 24); g_941 = safe_add_func_uint8_t_u_u(g_941, 9))
        { 
            int64_t l_1190 = 0x35B2626660E3D658LL;
            int32_t l_1191 = (-1L);
            int32_t l_1192 = 0L;
            int32_t l_1193 = 0L;
            int32_t l_1194 = 0L;
            for (g_469 = 7; (g_469 < (-18)); g_469--)
            { 
                int64_t l_1189 = 0L;
                g_297 = (safe_add_func_uint8_t_u_u(p_9.f1, (((0x1E07L | (-2L)) != (0xF783B434L == ((((***l_987) = ((safe_sub_func_int16_t_s_s((0xE5526D52L ^ 0xEDFAF0CEL), (safe_rshift_func_int8_t_s_s(((l_1189 = 1L) && p_9.f0), 2)))) , 65531UL)) != 65535UL) == 0x064AL))) > p_9.f0)));
            }
            --g_1196;
        }
        ++l_1199;
    }
    else
    { 
        int32_t *l_1202 = (void*)0;
        int32_t *l_1203 = (void*)0;
        int32_t *l_1204 = &g_894;
        int32_t l_1231 = 0xE420482BL;
        int32_t l_1232 = 8L;
        int32_t l_1233 = 0xD83D53E2L;
        uint16_t l_1234 = 0xEB03L;
        int64_t *l_1284 = &g_63;
        uint64_t l_1285[1];
        int32_t l_1300[2][1];
        struct S0 l_1321 = {18446744073709551613UL,0x202404D6L,0x2938L};
        const uint8_t * const l_1419[2][7] = {{&g_69.f2,&g_69.f2,&g_69.f2,&g_69.f2,&g_69.f2,&g_69.f2,&g_69.f2},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
        union U3 l_1452 = {0x6E7E93B5L};
        int64_t l_1459 = 0xE34EED0015509741LL;
        uint32_t l_1491[4][4][7] = {{{0xF7A4151BL,0x02D6C85FL,0x1B1CAFFEL,8UL,0xEE91A8CAL,0xCE148553L,0UL},{0x27FD8CD3L,0UL,0x820BEAA2L,18446744073709551611UL,0xDEFF58C4L,0x13B1D6B4L,0x0C4A625FL},{18446744073709551611UL,0xE8C28752L,0xD801CC8BL,0x11EEB7E7L,0x11EEB7E7L,0xD801CC8BL,0xE8C28752L},{0UL,1UL,18446744073709551615UL,18446744073709551615UL,0x2B0905E6L,0UL,0xD1D281A2L}},{{7UL,0xEE91A8CAL,1UL,0xD801CC8BL,6UL,0UL,0x11EEB7E7L},{1UL,0xDEFF58C4L,0x0C4A625FL,18446744073709551615UL,18446744073709551611UL,0xB43F08D6L,0xB43F08D6L},{0x02D6C85FL,0x11EEB7E7L,6UL,0x11EEB7E7L,0x02D6C85FL,0UL,1UL},{0x1D3D75EFL,0x2B0905E6L,0x586A3A06L,18446744073709551611UL,0x0C4A625FL,0x7F702007L,0x2B0905E6L}},{{0xEE91A8CAL,6UL,6UL,8UL,0xE8998175L,0xEE91A8CAL,0UL},{0x1D3D75EFL,18446744073709551611UL,0UL,0x586A3A06L,0x81CBDD2DL,0x586A3A06L,0UL},{0x02D6C85FL,0x02D6C85FL,0xEE91A8CAL,0x3D73E9E2L,1UL,0xF7A4151BL,0UL},{1UL,0x0C4A625FL,0x49A31100L,18446744073709551612UL,0xDEFF58C4L,0x27FD8CD3L,18446744073709551611UL}},{{7UL,0xE8998175L,0xD801CC8BL,8UL,1UL,18446744073709551611UL,0xE8998175L},{0UL,0x81CBDD2DL,0xA8460221L,0xA8460221L,0x81CBDD2DL,0UL,18446744073709551614UL},{18446744073709551611UL,1UL,8UL,0xD801CC8BL,0xE8998175L,7UL,0x1B1CAFFEL},{0x27FD8CD3L,0xDEFF58C4L,18446744073709551612UL,0x49A31100L,0x0C4A625FL,1UL,0xB43F08D6L}}};
        int i, j, k;
        for (i = 0; i < 1; i++)
            l_1285[i] = 4UL;
        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 1; j++)
                l_1300[i][j] = 1L;
        }
        if (((*l_1204) = ((*l_1143) = p_9.f2)))
        { 
            uint16_t *l_1206[3];
            uint16_t **l_1205 = &l_1206[2];
            const uint8_t **l_1211 = (void*)0;
            const uint8_t ***l_1210 = &l_1211;
            const uint8_t ****l_1209 = &l_1210;
            const uint8_t *****l_1208[2][5];
            int32_t l_1230 = 8L;
            uint16_t ****l_1237 = &l_986;
            int8_t ** const *l_1264[2];
            struct S0 * const l_1286[3] = {(void*)0,(void*)0,(void*)0};
            struct S0 **l_1287 = &g_188;
            int i, j;
            for (i = 0; i < 3; i++)
                l_1206[i] = &g_263;
            for (i = 0; i < 2; i++)
            {
                for (j = 0; j < 5; j++)
                    l_1208[i][j] = &l_1209;
            }
            for (i = 0; i < 2; i++)
                l_1264[i] = &g_90;
            if ((((*l_1205) = ((**l_987) = (*g_580))) == g_1207))
            { 
                int32_t *l_1216[6] = {(void*)0,(void*)0,&l_1078[0],(void*)0,(void*)0,&l_1078[0]};
                int i;
                g_1212 = l_1208[1][0];
                l_1217--;
            }
            else
            { 
                int32_t *l_1220 = &l_988;
                int32_t *l_1221 = (void*)0;
                int32_t *l_1222 = &g_894;
                int32_t *l_1223 = &l_1078[0];
                int32_t *l_1224 = &g_894;
                int32_t *l_1225 = &g_941;
                int32_t *l_1226 = &g_69.f0;
                int32_t *l_1227 = (void*)0;
                int32_t *l_1228 = (void*)0;
                int32_t *l_1229[2][3][2] = {{{&g_69.f0,(void*)0},{&g_69.f0,(void*)0},{&g_69.f0,(void*)0}},{{&g_69.f0,(void*)0},{&g_69.f0,(void*)0},{&g_69.f0,(void*)0}}};
                uint32_t *l_1242 = (void*)0;
                uint32_t *l_1243[1];
                int32_t *l_1248 = &g_705;
                struct S0 l_1249[5][4][1] = {{{{0xD1128EEBL,3L,6UL}},{{7UL,0xBE72F742L,65535UL}},{{0x61F149BCL,0x39FD86BFL,0xD3D3L}},{{7UL,0xBE72F742L,65535UL}}},{{{0xD1128EEBL,3L,6UL}},{{0UL,0L,0x3170L}},{{0xD1128EEBL,3L,6UL}},{{7UL,0xBE72F742L,65535UL}}},{{{0x61F149BCL,0x39FD86BFL,0xD3D3L}},{{7UL,0xBE72F742L,65535UL}},{{0xD1128EEBL,3L,6UL}},{{0UL,0L,0x3170L}}},{{{0xD1128EEBL,3L,6UL}},{{7UL,0xBE72F742L,65535UL}},{{0x61F149BCL,0x39FD86BFL,0xD3D3L}},{{7UL,0xBE72F742L,65535UL}}},{{{0xD1128EEBL,3L,6UL}},{{0UL,0L,0x3170L}},{{0xD1128EEBL,3L,6UL}},{{7UL,0xBE72F742L,65535UL}}}};
                int i, j, k;
                for (i = 0; i < 1; i++)
                    l_1243[i] = &g_199[1][0];
                for (g_951 = 0; g_951 < 3; g_951 += 1)
                {
                    g_182[g_951] = 0xB2F23C6468B4E5B4LL;
                }
                --l_1234;
                (*l_1204) = ((l_1237 != (void*)0) || (safe_rshift_func_int16_t_s_s((safe_add_func_uint16_t_u_u(((-8L) & (g_69.f0 < (++g_89.f2))), (safe_mod_func_uint64_t_u_u((((*l_1248) = g_850) , ((l_1249[1][3][0] , (((safe_add_func_uint8_t_u_u(1UL, 0xF3L)) , p_9) , p_9.f0)) <= (*l_1225))), p_9.f2)))), g_110)));
                (*l_1225) = (p_9.f1 = ((*l_1220) = (safe_lshift_func_uint16_t_u_s(((**g_580) = (l_1254 , 65535UL)), (g_124[0][1] = (((*l_1224) |= ((((l_1267[3][4] ^= ((safe_mul_func_int8_t_s_s(p_9.f2, (safe_sub_func_int8_t_s_s((!((g_3 , (safe_div_func_uint16_t_u_u((((((((void*)0 == l_1264[1]) < (safe_div_func_int16_t_s_s(3L, 3L))) & 0x19AD02B8L) && 65526UL) , p_9.f1) & p_9.f1), g_1085))) || p_9.f2)), p_9.f2)))) , g_942)) != p_9.f0) == l_1230) , p_9.f2)) ^ 0UL))))));
            }
            if ((safe_add_func_int32_t_s_s((((*l_1210) = (***g_1212)) != (*g_1214)), (safe_mul_func_uint16_t_u_u((g_894 & (safe_mod_func_uint16_t_u_u(p_9.f2, (safe_div_func_int16_t_s_s((((safe_lshift_func_uint8_t_u_u(((*g_1212) == (*g_1212)), 3)) >= ((p_9.f0 , 5L) || 0L)) >= 247UL), 8UL))))), p_9.f1)))))
            { 
                (*l_1143) = (+(safe_unary_minus_func_uint32_t_u(((*g_1213) != (((*l_1204) = (0xBC897A65L ^ ((safe_sub_func_int64_t_s_s((safe_mod_func_int8_t_s_s((((p_9.f2 , 1L) ^ ((void*)0 != l_1284)) , (*l_1204)), p_9.f2)), l_1285[0])) && g_198))) , (*g_1213))))));
            }
            else
            { 
                (*g_188) = (**g_187);
            }
            (*l_1287) = l_1286[2];
        }
        else
        { 
            int16_t l_1303[7][5] = {{0x6204L,(-8L),0x6204L,0x6204L,(-8L)},{(-8L),0x6204L,0x6204L,(-8L),0x6204L},{(-8L),(-8L),0x6FE8L,(-8L),(-8L)},{0x6204L,(-8L),0x6204L,0x6204L,(-8L)},{(-8L),0x6204L,0x6204L,(-8L),0x6204L},{(-8L),(-8L),0x6FE8L,(-8L),(-8L)},{0x6204L,(-8L),0x6204L,0x6204L,0x6204L}};
            int32_t l_1305 = 0xE1EA8ABAL;
            int32_t l_1308 = (-6L);
            int32_t *l_1334 = &g_69.f3.f1;
            uint8_t *l_1348[4][2] = {{&g_751[2][1][0],&g_751[2][1][0]},{&g_751[2][1][0],&g_751[2][1][0]},{&g_751[2][1][0],&g_751[2][1][0]},{&g_751[2][1][0],&g_751[2][1][0]}};
            int i, j;
            for (g_32 = 0; (g_32 <= 1); g_32 += 1)
            { 
                uint32_t l_1292 = 18446744073709551615UL;
                int32_t *l_1293 = (void*)0;
                int32_t *l_1294 = &l_1078[0];
                int32_t *l_1295 = (void*)0;
                int32_t *l_1296 = &g_69.f3.f1;
                int32_t *l_1297 = &l_1267[1][4];
                int32_t *l_1298[3][2] = {{&l_1231,&l_1231},{&l_988,&l_1231},{&l_1231,&l_988}};
                int8_t l_1299 = 0x38L;
                uint32_t l_1309 = 18446744073709551615UL;
                int32_t l_1316[4] = {2L,2L,2L,2L};
                uint16_t l_1317 = 0x715FL;
                struct S0 *l_1320[5][2];
                int32_t **l_1333[4];
                int i, j;
                for (i = 0; i < 5; i++)
                {
                    for (j = 0; j < 2; j++)
                        l_1320[i][j] = (void*)0;
                }
                for (i = 0; i < 4; i++)
                    l_1333[i] = &l_1296;
                (*l_1143) = ((safe_mod_func_int8_t_s_s((safe_sub_func_int16_t_s_s((p_9.f0 <= ((((*g_581) ^= 0x6F29L) < p_9.f0) , p_9.f1)), ((((*l_1014) = ((void*)0 == &p_9)) || ((void*)0 == &g_230[0])) & l_1292))), (*l_1204))) & 1L);
                if (l_1292)
                    break;
                --l_1309;
                if ((safe_div_func_int32_t_s_s((g_577 , (((((safe_div_func_uint16_t_u_u(0x0615L, ((*l_1204) = l_1316[2]))) && ((((((((((-1L) == (((*l_1294) = (-5L)) > 8L)) ^ (p_9.f2 & (-1L))) == g_32) || 0L) ^ l_1303[4][3]) , (-3L)) || p_9.f2) , 18446744073709551610UL) , l_1317)) == 250UL) && 1UL) <= 0xB5EAL)), (*l_1296))))
                { 
                    int32_t **l_1318 = &l_1298[1][0];
                    (*l_1318) = &g_942;
                }
                else
                { 
                    struct S0 *l_1319[3][1][5] = {{{&g_69.f3,(void*)0,&g_69.f3,&g_69.f3,(void*)0}},{{&g_69.f3,(void*)0,&g_69.f3,&g_69.f3,(void*)0}},{{&g_69.f3,(void*)0,&g_69.f3,&g_69.f3,(void*)0}}};
                    int32_t l_1331[5][4] = {{9L,0L,0x4657F594L,0x4657F594L},{1L,1L,9L,0x4657F594L},{(-1L),0L,(-1L),9L},{(-1L),9L,9L,(-1L)},{1L,9L,0x4657F594L,9L}};
                    int32_t l_1332 = 1L;
                    int i, j, k;
                    (*l_1296) = p_9.f0;
                    l_1320[2][1] = l_1319[2][0][3];
                    (*g_188) = l_1321;
                    if (g_32)
                        goto lbl_1368;
                    (*l_1294) &= (p_9.f1 != (((safe_div_func_uint16_t_u_u(((*g_581) = (**g_580)), ((safe_div_func_int64_t_s_s(0xEE448F1C214F3DE8LL, (((!(4UL <= g_849)) , p_9.f1) , (safe_div_func_int8_t_s_s((safe_add_func_uint8_t_u_u((l_1331[3][0] = p_9.f1), p_9.f1)), p_9.f1))))) ^ 18446744073709551615UL))) >= (*l_1204)) | l_1332));
                }
                l_1334 = (g_305 = &l_1231);
                for (l_1217 = 0; (l_1217 <= 1); l_1217 += 1)
                { 
                    uint64_t l_1335[5];
                    uint64_t *l_1336 = &g_71;
                    int i;
                    for (i = 0; i < 5; i++)
                        l_1335[i] = 0x844CB864FDDFE7A1LL;
                    if (l_1335[0])
                        break;
                    if (p_9.f2)
                        continue;
                    (*g_305) = ((*l_1143) = (0xB548815D69C9511ELL | (p_9.f0 <= ((*l_1336)--))));
                }
            }
            p_9.f1 = (((*l_1334) ^= ((*l_1014) = p_9.f2)) ^ (l_1339 , p_9.f1));
            (*l_1334) = (((*l_1143) &= (safe_unary_minus_func_uint8_t_u(((safe_add_func_int16_t_s_s((safe_add_func_int64_t_s_s(0x710970C9FA4FDEF2LL, (~(**g_491)))), (safe_div_func_int8_t_s_s((*l_1334), (g_706[0][4][0]--))))) <= g_3)))) && ((((*l_1076) , (safe_rshift_func_int16_t_s_s(((**g_187) , (safe_add_func_uint32_t_u_u(0UL, g_69.f0))), 12))) < (*l_1204)) >= g_1304));
        }
        for (g_129 = 10; (g_129 != (-14)); --g_129)
        { 
            for (g_69.f3.f0 = (-2); (g_69.f3.f0 < 54); ++g_69.f3.f0)
            { 
                int32_t l_1363 = 0x52011B8FL;
                (*l_1143) = ((*l_1204) = (safe_lshift_func_int16_t_s_u(((*l_1014) = (safe_lshift_func_uint8_t_u_u((1UL <= l_1363), 4))), 12)));
                if (p_9.f2)
                    continue;
            }
        }
        for (g_849 = 0; (g_849 > 19); g_849 = safe_add_func_uint32_t_u_u(g_849, 2))
        { 
            (*l_1204) = 0x46CDE17AL;
        }
lbl_1368:
        (*l_1204) = (safe_rshift_func_int8_t_s_s(0xF4L, 3));
        for (g_89.f0 = 0; (g_89.f0 <= 0); g_89.f0 += 1)
        { 
            int32_t *l_1369 = &l_1078[0];
            int32_t *l_1370 = (void*)0;
            int32_t *l_1371 = (void*)0;
            int32_t *l_1372[2];
            uint64_t *l_1447 = &g_334;
            int32_t l_1455[4][3][1] = {{{0L},{(-10L)},{0x2927409BL}},{{0x2927409BL},{(-10L)},{0L}},{{(-10L)},{0x2927409BL},{0x2927409BL}},{{(-10L)},{0L},{(-10L)}}};
            uint16_t l_1460 = 0xCB67L;
            int32_t l_1487 = 0x596A452DL;
            int32_t *l_1505[3][2][1] = {{{&g_69.f5},{&g_69.f5}},{{(void*)0},{&g_69.f5}},{{&g_69.f5},{(void*)0}}};
            int32_t **l_1519 = &l_1143;
            struct S0 l_1521 = {0x0AA30F76L,0x46E3A08DL,1UL};
            int64_t ** const l_1530[4] = {&l_1284,&l_1284,&l_1284,&l_1284};
            int i, j, k;
            for (i = 0; i < 2; i++)
                l_1372[i] = &l_1321.f1;
            g_1375[3][4][1]--;
            for (g_263 = 0; (g_263 <= 0); g_263 += 1)
            { 
                const int8_t l_1398 = 0L;
                int32_t l_1400 = 0L;
                int32_t l_1402 = 1L;
                int32_t l_1404 = 0L;
                int8_t l_1405 = (-1L);
                int32_t **l_1409 = (void*)0;
                int32_t **l_1410[6][4][3] = {{{&g_305,&g_305,(void*)0},{&l_1372[1],(void*)0,&l_1143},{&l_1369,&g_305,&l_1143},{&g_305,&g_305,&l_1369}},{{&l_1203,(void*)0,&l_1202},{&l_1204,&g_305,&l_1202},{&l_1204,&g_305,&g_305},{&l_1143,(void*)0,&g_305}},{{(void*)0,&g_305,&l_1370},{&g_305,&g_305,(void*)0},{&l_1372[1],(void*)0,&l_1143},{&l_1369,&g_305,&l_1143}},{{&g_305,&g_305,&l_1369},{&l_1203,(void*)0,&l_1202},{&l_1204,&g_305,&l_1202},{&l_1204,&g_305,&g_305}},{{&l_1143,(void*)0,&g_305},{(void*)0,&g_305,&l_1370},{&g_305,&g_305,(void*)0},{&l_1372[1],(void*)0,&l_1143}},{{&l_1369,&g_305,&l_1143},{&g_305,&g_305,&l_1369},{&l_1203,(void*)0,&l_1202},{&l_1204,&g_305,&l_1202}}};
                uint64_t *l_1413 = &g_334;
                uint32_t *l_1423 = &g_130;
                struct S0 l_1494[2] = {{0xB027F87BL,-7L,0x2774L},{0xB027F87BL,-7L,0x2774L}};
                int i, j, k;
                for (l_1321.f1 = 0; (l_1321.f1 <= 0); l_1321.f1 += 1)
                { 
                    uint64_t l_1382 = 0xEAD8D17EEEA5BB1DLL;
                    const int32_t l_1391 = 0xC6511F4DL;
                    uint64_t *l_1396[5] = {&l_1285[0],&l_1285[0],&l_1285[0],&l_1285[0],&l_1285[0]};
                    int32_t l_1397 = (-7L);
                    uint32_t *l_1399 = &g_199[2][0];
                    int32_t l_1401 = (-1L);
                    int32_t l_1403[5][4][4] = {{{0x946BA7CCL,1L,0xBF9ACDBAL,(-1L)},{0xB5C0DB0CL,0xA3FB903CL,0x5F660E4CL,0xE0BB291EL},{(-1L),0x868E9A74L,9L,0xE0BB291EL},{0x399FCB3FL,0xA3FB903CL,(-1L),(-1L)}},{{(-1L),1L,0x4E236C26L,0xA3FB903CL},{(-4L),0x83AAE073L,0x946BA7CCL,(-1L)},{0xBF9ACDBAL,1L,(-1L),0x61856B2DL},{0xF1FD6FA0L,0xB5C0DB0CL,(-1L),0xB5C0DB0CL}},{{(-1L),(-1L),0x399FCB3FL,1L},{0x33294689L,0x399FCB3FL,(-1L),(-1L)},{0x83AAE073L,0x180F5BE7L,0xE0BB291EL,0x83AAE073L},{0x83AAE073L,0x4E236C26L,(-1L),1L}},{{0x33294689L,0x83AAE073L,1L,0xBE817E54L},{0x61856B2DL,(-1L),1L,(-1L)},{0xBF9ACDBAL,(-1L),0x33294689L,1L},{(-1L),0x946BA7CCL,(-1L),(-1L)}},{{0x180F5BE7L,0x180F5BE7L,(-4L),0x61856B2DL},{9L,0x5F660E4CL,0x33294689L,0x946BA7CCL},{1L,0x868E9A74L,(-1L),0x33294689L},{0x61856B2DL,0x868E9A74L,(-1L),0x946BA7CCL}}};
                    int i, j, k;
                    p_9 = l_1378;
                    (*l_1204) ^= ((safe_add_func_uint32_t_u_u((!(l_1382 && 0x9D07L)), ((*l_1369) &= (g_89.f2 || ((((*l_1399) = ((safe_mul_func_uint8_t_u_u((safe_mul_func_int16_t_s_s((((safe_lshift_func_int16_t_s_s(0xBCDCL, 10)) > l_1391) > ((safe_add_func_uint16_t_u_u((safe_mod_func_uint64_t_u_u(((g_71 = (l_1397 = 18446744073709551614UL)) | l_1391), 1L)), 0x110BL)) , (-1L))), 0xBF8CL)), p_9.f1)) && l_1398)) & g_69.f4) < p_9.f2))))) ^ p_9.f0);
                    g_1406++;
                    return g_334;
                }
                l_1203 = &l_988;
                g_69.f0 &= (safe_sub_func_int16_t_s_s(g_4, ((((((*l_1413) |= 0xE5DE93AEDFCC9E05LL) != ((safe_div_func_int32_t_s_s(((*l_1369) = (((*g_581) = ((8L != ((((safe_rshift_func_uint8_t_u_s((safe_unary_minus_func_uint8_t_u((l_1419[1][5] != l_1420))), 6)) ^ (g_129 ^= 4L)) ^ ((safe_mod_func_uint32_t_u_u(((*l_1423) &= p_9.f2), l_1424)) || g_894)) != 0x65236CD63E77C06ALL)) == p_9.f2)) & 0UL)), 0x312F15F0L)) | p_9.f1)) > p_9.f1) != g_296) < g_1406)));
                if (((safe_lshift_func_int16_t_s_u(((*l_1014) = (+0x09EC7961L)), 4)) || p_9.f0))
                { 
                    int64_t l_1428[1];
                    const uint16_t *l_1432 = &l_1378.f2;
                    const uint16_t **l_1431 = &l_1432;
                    const uint16_t ***l_1430 = &l_1431;
                    const uint16_t ****l_1429 = &l_1430;
                    uint16_t *****l_1435 = &g_1433;
                    int i;
                    for (i = 0; i < 1; i++)
                        l_1428[i] = 7L;
                    l_1202 = &g_942;
                    if (l_1428[0])
                        continue;
                    (*l_1369) = (l_1429 == ((*l_1435) = g_1433));
                }
                else
                { 
                    struct S0 l_1436 = {18446744073709551610UL,0x0C89463FL,65533UL};
                    if (p_9.f1)
                        break;
                    l_1378 = l_1436;
                    return g_849;
                }
            }
            for (l_1487 = 0; (l_1487 <= 0); l_1487 += 1)
            { 
                uint64_t l_1500 = 0x30C4CC0DCE3674C5LL;
                int32_t *l_1504 = &l_1487;
                int32_t **l_1503 = &l_1504;
                int32_t l_1517 = 4L;
                (*l_1204) |= ((((~p_9.f1) != ((***l_987)++)) != (safe_div_func_uint8_t_u_u(((*g_492) = l_1500), (safe_add_func_uint8_t_u_u((&g_1306[3] == (l_1505[1][1][0] = ((*l_1503) = &g_1306[1]))), ((safe_sub_func_int32_t_s_s(((-1L) >= (safe_mod_func_uint8_t_u_u(p_9.f2, (safe_div_func_uint8_t_u_u(((safe_mul_func_int16_t_s_s((safe_add_func_uint32_t_u_u((((((!(-8L)) <= (*l_1143)) < p_9.f2) <= 1L) && 6L), p_9.f1)), l_1517)) || g_314[5][3][2]), 0x44L))))), (*l_1369))) > l_1517)))))) , 0xD206EC03L);
                for (l_1079 = 0; (l_1079 <= 0); l_1079 += 1)
                { 
                    int32_t **l_1518 = &l_1372[1];
                    if (p_9.f1)
                        break;
                    (*l_1013) = (*g_641);
                    (*l_1518) = (void*)0;
                }
            }
            for (g_1488 = 0; (g_1488 <= 0); g_1488 += 1)
            { 
                (*l_1519) = ((p_9.f0 ^ ((g_279 , l_1519) != (void*)0)) , &g_1489);
                (*l_1013) = g_1520;
                l_1521 = p_9;
                return p_9.f1;
            }
            for (l_1231 = 0; (l_1231 >= 0); l_1231 -= 1)
            { 
                uint32_t l_1533 = 1UL;
                for (l_1254 = 0; (l_1254 >= 0); l_1254 -= 1)
                { 
                    struct S0 l_1525 = {0x1D556516L,0x8800FC18L,4UL};
                    p_9 = l_1521;
                    l_1533 |= (+((safe_mod_func_int8_t_s_s((l_1525 , (((safe_lshift_func_uint16_t_u_u(l_1525.f1, ((*l_1076) , ((**g_580) |= (l_1525.f2 | (safe_add_func_int32_t_s_s(((*l_1204) = 7L), 1UL))))))) || (l_1530[1] != g_1531)) == p_9.f2)), p_9.f2)) ^ (*l_1143)));
                    p_9.f1 = p_9.f0;
                }
                for (l_1452.f3 = 0; (l_1452.f3 <= 0); l_1452.f3 += 1)
                { 
                    if (p_9.f1)
                        break;
                }
            }
        }
    }
    (*l_1143) = (*l_1143);
    (*l_1554) = l_1378;
    return (*l_1143);
}



static struct S0  func_10(int32_t  p_11, uint8_t  p_12, const uint32_t  p_13)
{ 
    uint8_t l_52[5];
    int8_t *l_59 = &g_32;
    int8_t *l_60 = &g_32;
    int64_t *l_61 = (void*)0;
    int64_t *l_62 = &g_63;
    struct S0 l_535 = {0x392314B8L,-1L,1UL};
    int32_t *l_892 = (void*)0;
    int32_t *l_893 = &g_894;
    uint8_t l_912 = 0xB3L;
    int16_t l_928 = 8L;
    int32_t l_935 = 0xDCF8351DL;
    int32_t l_936 = 0x8D0F41BAL;
    int32_t l_937 = 0x0B8C5C89L;
    int32_t l_938 = 0x5702A702L;
    int32_t l_939 = 0L;
    int32_t l_940[7][1][5] = {{{0x306DDD6AL,3L,3L,0x306DDD6AL,3L}},{{0x306DDD6AL,0x306DDD6AL,(-1L),0x306DDD6AL,0x306DDD6AL}},{{3L,0x306DDD6AL,3L,3L,0x306DDD6AL}},{{0x306DDD6AL,3L,3L,0x306DDD6AL,3L}},{{0x306DDD6AL,0x306DDD6AL,(-1L),0x306DDD6AL,0x306DDD6AL}},{{3L,0x306DDD6AL,3L,3L,0x306DDD6AL}},{{0x306DDD6AL,3L,3L,0x306DDD6AL,3L}}};
    int i, j, k;
    for (i = 0; i < 5; i++)
        l_52[i] = 254UL;
    (*l_893) &= func_37(func_42(func_48((l_52[1] , func_53(l_59, (l_60 = l_59), g_4, &g_32, ((*l_62) |= p_13))), g_296, p_13), l_535, l_59, l_59, l_59), g_279.f0, g_492, p_12);
    if ((0x4AFEF80FL && (safe_div_func_uint64_t_u_u((l_535 , (safe_lshift_func_int8_t_s_u((((safe_rshift_func_int8_t_s_s((*l_893), 5)) & ((((p_11 | (*l_893)) && (safe_rshift_func_int16_t_s_s((((&g_580 != ((*l_893) , (void*)0)) < (-1L)) | g_199[2][0]), p_12))) < p_11) & 0xEBE6L)) || p_12), (*g_492)))), g_849))))
    { 
        struct S2 l_907[3][4] = {{{0xDAD9982DB7443620LL,0x69FDABE5L,0x15L},{18446744073709551610UL,0x9FEA9034L,0x77L},{0xDAD9982DB7443620LL,0x69FDABE5L,0x15L},{18446744073709551610UL,0x9FEA9034L,0x77L}},{{0xDAD9982DB7443620LL,0x69FDABE5L,0x15L},{18446744073709551610UL,0x9FEA9034L,0x77L},{0xDAD9982DB7443620LL,0x69FDABE5L,0x15L},{18446744073709551610UL,0x9FEA9034L,0x77L}},{{0xDAD9982DB7443620LL,0x69FDABE5L,0x15L},{18446744073709551610UL,0x9FEA9034L,0x77L},{0xDAD9982DB7443620LL,0x69FDABE5L,0x15L},{18446744073709551610UL,0x9FEA9034L,0x77L}}};
        int32_t l_921[7][5][1] = {{{0x1F7E3D93L},{0x1F7E3D93L},{0L},{(-4L)},{0x03DAFA15L}},{{0L},{0x03DAFA15L},{(-4L)},{0L},{0x1F7E3D93L}},{{0x1F7E3D93L},{0L},{(-4L)},{0x03DAFA15L},{0L}},{{0x03DAFA15L},{(-4L)},{0L},{0x1F7E3D93L},{0x1F7E3D93L}},{{0L},{(-4L)},{0x03DAFA15L},{0L},{0x03DAFA15L}},{{(-4L)},{0L},{0x1F7E3D93L},{0x1F7E3D93L},{0L}},{{(-4L)},{0x03DAFA15L},{0L},{0x03DAFA15L},{(-4L)}}};
        struct S0 *l_926 = &g_69.f3;
        int16_t *l_927[1];
        int32_t *l_929 = &l_535.f1;
        int32_t *l_930 = &l_535.f1;
        int32_t *l_931 = &g_894;
        int32_t *l_932 = (void*)0;
        int32_t *l_933 = &l_535.f1;
        int32_t *l_934[1][1][6];
        int i, j, k;
        for (i = 0; i < 1; i++)
            l_927[i] = &g_110;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 1; j++)
            {
                for (k = 0; k < 6; k++)
                    l_934[i][j][k] = &g_69.f3.f1;
            }
        }
        p_11 = (((safe_sub_func_int32_t_s_s(((*l_893) , (((*l_60) = ((safe_rshift_func_int16_t_s_u((*l_893), 9)) , 0x40L)) ^ (l_907[1][2] , ((*g_564) , (0x6EC54C19AE93DF24LL != ((*l_62) &= (((safe_mul_func_uint8_t_u_u((safe_mul_func_uint16_t_u_u((**g_580), (-1L))), 0x90L)) < l_907[1][2].f1) , 0L))))))), g_69.f3.f1)) && 0x67C4L) ^ l_912);
        (*l_893) = ((!(l_907[1][2].f0 > (((+(safe_mul_func_uint16_t_u_u((safe_rshift_func_int16_t_s_s((l_928 = (((g_279.f1 ^ ((safe_rshift_func_int16_t_s_u((((((l_921[1][4][0] , (safe_mod_func_int8_t_s_s(p_11, (((((--(**g_491)) , l_926) == (void*)0) == l_907[1][2].f1) && l_921[0][1][0])))) != 0x4FFD4187L) && (*l_893)) && p_11) != 0x29B32C1476206FFALL), (*g_581))) ^ g_89.f2)) && (*g_581)) || 7UL)), p_11)), p_12))) | p_11) < g_894))) <= 0xB5L);
        g_943--;
    }
    else
    { 
        int32_t *l_946 = &g_297;
        int32_t *l_947 = &g_297;
        int32_t *l_948[7][4] = {{&g_3,&g_942,&g_3,&g_3},{&g_942,&g_942,&g_69.f0,&g_942},{&g_942,&g_3,&g_3,&g_942},{&g_3,&g_942,&g_3,&g_3},{&g_942,&g_942,&g_69.f0,&g_942},{&g_942,&g_3,&g_3,&g_942},{&g_3,&g_942,&g_3,&g_3}};
        int i, j;
        g_951--;
    }
    for (p_11 = 0; (p_11 >= (-26)); --p_11)
    { 
        struct S0 l_956 = {0x13B0386FL,-1L,0UL};
        int32_t l_957 = 0x6D71D210L;
        uint16_t l_966 = 0x4B4BL;
        int32_t l_977 = 0x7808D62FL;
        int32_t **l_978 = (void*)0;
        int32_t **l_979 = &l_892;
        l_977 |= ((**g_580) >= ((l_956 , ((*l_893) = l_957)) >= (((safe_rshift_func_int16_t_s_s((safe_sub_func_int8_t_s_s(((*l_60) = (((safe_lshift_func_int8_t_s_u((safe_div_func_uint16_t_u_u((l_966 && (safe_sub_func_uint32_t_u_u((safe_add_func_uint32_t_u_u(((safe_sub_func_uint32_t_u_u((((safe_add_func_int32_t_s_s(((p_12 <= (l_956.f0 | (safe_lshift_func_int16_t_s_u(g_263, (*g_581))))) < p_12), p_13)) ^ 0x954AE4995C9C2AF4LL) ^ p_13), 0xBB81BC1AL)) < g_850), p_13)), p_12))), (**g_580))), 4)) , g_110) ^ g_69.f3.f0)), g_291[0][0][0])), 8)) == g_314[4][1][1]) , p_11)));
        (*l_979) = ((*l_893) , (void*)0);
        if (g_69.f3.f0)
            break;
    }
    return l_535;
}



static int8_t  func_19(int8_t  p_20, int32_t  p_21, struct S1  p_22, uint16_t  p_23)
{ 
    return p_22.f0;
}



static int32_t  func_37(struct S2  p_38, int32_t  p_39, int8_t * p_40, uint64_t  p_41)
{ 
    int32_t *l_816 = &g_69.f3.f1;
    int16_t *l_818 = &g_124[0][1];
    struct S0 l_840[1][2][7] = {{{{0x40CF1970L,-1L,0x1BBEL},{0x40CF1970L,-1L,0x1BBEL},{0x40CF1970L,-1L,0x1BBEL},{0x40CF1970L,-1L,0x1BBEL},{0x40CF1970L,-1L,0x1BBEL},{0x40CF1970L,-1L,0x1BBEL},{0x40CF1970L,-1L,0x1BBEL}},{{0x40CF1970L,-1L,0x1BBEL},{0x40CF1970L,-1L,0x1BBEL},{0x40CF1970L,-1L,0x1BBEL},{0x40CF1970L,-1L,0x1BBEL},{0x40CF1970L,-1L,0x1BBEL},{0x40CF1970L,-1L,0x1BBEL},{0x40CF1970L,-1L,0x1BBEL}}}};
    int i, j, k;
    (*l_816) = p_41;
    (*l_816) &= (safe_unary_minus_func_int64_t_s((g_69.f4 >= ((*l_818) |= (g_279.f0 > g_123)))));
    for (g_69.f3.f1 = 0; (g_69.f3.f1 != 9); ++g_69.f3.f1)
    { 
        int64_t *l_824 = &g_63;
        const int8_t l_841 = 0x39L;
        int32_t *l_842[1];
        struct S0 l_854[6] = {{0x63F372E0L,0xB6B368BDL,3UL},{0x52181F7BL,0L,0xF838L},{0x63F372E0L,0xB6B368BDL,3UL},{0x63F372E0L,0xB6B368BDL,3UL},{0x52181F7BL,0L,0xF838L},{0x63F372E0L,0xB6B368BDL,3UL}};
        int16_t l_872[7] = {1L,8L,1L,1L,8L,1L,1L};
        uint32_t *l_881 = &g_314[2][0][4];
        struct S0 ***l_887 = &g_329;
        struct S0 ***l_888 = &g_187;
        uint32_t *l_889[6] = {&g_199[0][0],&g_199[0][0],&g_199[2][0],&g_199[0][0],&g_199[0][0],&g_199[2][0]};
        int8_t *l_890[4];
        int8_t l_891[2][1][7] = {{{0x0EL,0x0EL,(-7L),0xF2L,(-1L),(-7L),(-7L)}},{{(-7L),(-1L),0xF2L,(-1L),(-7L),(-7L),(-1L)}}};
        int i, j, k;
        for (i = 0; i < 1; i++)
            l_842[i] = &g_297;
        for (i = 0; i < 4; i++)
            l_890[i] = &g_32;
        l_840[0][0][0].f1 = ((((g_706[0][4][0] == (*l_816)) <= ((!(safe_sub_func_int64_t_s_s(((*l_824) = 0xBB5DA3B731A7CB83LL), (safe_sub_func_int32_t_s_s(((safe_rshift_func_int8_t_s_s((safe_div_func_int16_t_s_s((safe_mod_func_int32_t_s_s(p_38.f1, ((safe_add_func_int8_t_s_s((0x8871L != p_39), (safe_rshift_func_uint8_t_u_u((safe_add_func_int16_t_s_s(((+(l_840[0][0][0] , 0xBC62L)) >= p_38.f2), (*l_816))), p_39)))) || (*l_816)))), (-1L))), l_841)) == l_841), (*l_816)))))) < l_841)) ^ 1UL) || 3UL);
        for (g_297 = 29; (g_297 < (-10)); g_297--)
        { 
            struct S0 l_847 = {0UL,0xBC35DE91L,0UL};
            struct S0 *l_853[1];
            uint32_t l_860[7] = {3UL,3UL,3UL,3UL,3UL,3UL,3UL};
            int i;
            for (i = 0; i < 1; i++)
                l_853[i] = &l_840[0][0][0];
            for (g_63 = (-10); (g_63 != (-4)); g_63 = safe_add_func_uint32_t_u_u(g_63, 3))
            { 
                struct S0 *l_848 = &l_840[0][0][0];
                g_305 = &g_297;
                (*l_848) = l_847;
            }
            g_850--;
            l_840[0][0][3] = (l_854[3] = (**g_329));
            p_39 = (+((*g_492) != (1L != (safe_mod_func_uint32_t_u_u(0UL, (l_860[6] || ((p_39 == ((0x031EF99EB753F1FFLL | ((safe_lshift_func_int16_t_s_s((((((safe_add_func_int16_t_s_s(0L, p_41)) & p_38.f2) && (*g_492)) ^ 0x151E4484L) == p_38.f0), p_39)) <= g_69.f3.f2)) == 246UL)) > g_123)))))));
        }
        p_39 = ((l_891[0][0][2] = (safe_mul_func_uint8_t_u_u((((*l_818) = (*l_816)) < (safe_lshift_func_uint8_t_u_s(((safe_mod_func_int64_t_s_s(p_38.f0, ((*l_824) ^= (+(g_297 = p_38.f0))))) ^ l_872[0]), (safe_mod_func_uint64_t_u_u(((g_89.f2 = ((safe_unary_minus_func_uint16_t_u(((((((safe_lshift_func_int16_t_s_u((safe_add_func_uint32_t_u_u((((!(++(*l_881))) | ((*p_40) = (safe_rshift_func_uint8_t_u_u((g_198 < (g_199[2][0] = (~(l_887 == l_888)))), p_39)))) && 1UL), g_849)), (**g_580))) <= 4294967295UL) ^ p_38.f2) || 1L) >= (*l_816)) , (**g_580)))) , (*l_816))) , p_38.f2), p_38.f0))))), (*l_816)))) == 4L);
    }
    return (*l_816);
}



static struct S2  func_42(int32_t  p_43, struct S0  p_44, int8_t * p_45, int8_t * const  p_46, int8_t * p_47)
{ 
    uint32_t l_541 = 4294967295UL;
    struct S0 l_553 = {18446744073709551615UL,6L,0x463AL};
    int32_t l_576[5] = {0x3B281C6CL,0x3B281C6CL,0x3B281C6CL,0x3B281C6CL,0x3B281C6CL};
    uint32_t *l_599 = &g_89.f0;
    uint64_t *l_618 = &g_71;
    uint32_t **l_633 = &l_599;
    union U3 *l_651 = &g_89;
    int64_t l_704[2][4] = {{0x2A5EFCA0324D0C36LL,0x2A5EFCA0324D0C36LL,0x2A5EFCA0324D0C36LL,0x2A5EFCA0324D0C36LL},{0x2A5EFCA0324D0C36LL,0x2A5EFCA0324D0C36LL,0x2A5EFCA0324D0C36LL,0x2A5EFCA0324D0C36LL}};
    int64_t l_750[4] = {0L,0L,0L,0L};
    struct S1 l_784 = {0x5098ABDFL,0x3352L,0UL,{0UL,0x26172A01L,0xC1E5L},0x6881461FL,0xA24F7AC4L};
    int i, j;
lbl_583:
    if (g_69.f1)
    { 
        int8_t l_543 = (-2L);
        int16_t l_547 = (-1L);
        struct S1 ***l_565 = &g_563;
        for (p_44.f2 = 0; (p_44.f2 <= 6); p_44.f2 += 1)
        { 
            struct S0 l_555 = {0x86E688A5L,0x55902905L,0UL};
            int64_t *l_560 = (void*)0;
            p_43 |= (safe_lshift_func_int8_t_s_u(((*p_45) = (*p_45)), 3));
            for (g_89.f1 = 1; (g_89.f1 <= 6); g_89.f1 += 1)
            { 
                int8_t l_540[4];
                uint64_t *l_542 = &g_182[1];
                uint32_t *l_546[7][3] = {{&g_89.f2,&g_199[2][0],&g_199[2][0]},{&g_199[2][0],&g_89.f2,&g_130},{&g_89.f2,&g_89.f2,&g_89.f2},{(void*)0,&g_199[2][0],&g_130},{(void*)0,(void*)0,&g_199[2][0]},{&g_89.f2,&g_199[2][0],&g_199[2][0]},{&g_199[2][0],&g_89.f2,&g_130}};
                int32_t *l_548 = &g_69.f3.f1;
                uint32_t l_557 = 1UL;
                int i, j;
                for (i = 0; i < 4; i++)
                    l_540[i] = 3L;
                (*l_548) = ((l_547 |= (&g_90 == ((safe_div_func_uint64_t_u_u((((l_540[0] != ((g_130 & (l_541 <= ((*l_542) = 8UL))) & ((l_543 && (safe_mul_func_int16_t_s_s(p_44.f0, g_89.f3))) == 0xBAL))) | l_541) | 0xCA20L), g_314[2][2][3])) , (void*)0))) & l_543);
                if (g_123)
                { 
                    int32_t l_556[7][1] = {{0x3A62D447L},{0xE7019040L},{0xE7019040L},{0x3A62D447L},{0xE7019040L},{0xE7019040L},{0x3A62D447L}};
                    int32_t *l_558 = &l_556[3][0];
                    int i, j;
                    (*l_558) = (safe_rshift_func_int16_t_s_u((safe_rshift_func_int8_t_s_s(0x24L, ((((**g_187) = l_553) , ((*p_47) = (~((((((l_555 , 0xAFL) < l_556[3][0]) , p_44.f1) ^ g_71) < l_557) , l_556[0][0])))) | (**g_491)))), 2));
                    if (p_44.f0)
                        goto lbl_583;
                }
                else
                { 
                    int64_t *l_559 = &g_63;
                    (*l_548) = ((((&g_199[2][0] == &g_199[2][0]) , &g_296) == (l_560 = l_559)) | (((safe_mod_func_uint8_t_u_u(((g_63 , 0xD9L) | (**g_491)), p_44.f2)) , (-6L)) >= (*l_548)));
                }
                return g_279;
            }
        }
        (*l_565) = g_563;
    }
    else
    { 
        int32_t *l_566 = &g_297;
        int32_t *l_567 = &g_69.f0;
        int32_t *l_568 = &g_69.f3.f1;
        int32_t *l_569 = (void*)0;
        int32_t *l_570 = (void*)0;
        int32_t *l_571 = &g_69.f3.f1;
        int32_t *l_572 = &l_553.f1;
        int32_t *l_573 = (void*)0;
        int32_t *l_574 = &g_297;
        int32_t *l_575[1][7];
        uint16_t ***l_582 = &g_580;
        int i, j;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 7; j++)
                l_575[i][j] = &g_69.f0;
        }
        --g_577;
        (*l_582) = g_580;
    }
lbl_687:
    g_297 = 0x981F2788L;
    for (g_69.f0 = 0; (g_69.f0 != 18); g_69.f0 = safe_add_func_uint16_t_u_u(g_69.f0, 3))
    { 
        struct S2 l_588 = {18446744073709551615UL,4294967288UL,0x4BL};
        int8_t ***l_603 = &g_90;
        union U3 *l_650 = &g_89;
        uint32_t l_678 = 18446744073709551615UL;
        int16_t l_681 = 0xBDE1L;
        int32_t l_693 = (-2L);
        uint16_t l_776 = 0xCEEFL;
        union U3 l_786 = {0x70F7136BL};
        struct S1 *l_795 = (void*)0;
        int32_t *l_805 = (void*)0;
        int32_t *l_806 = &l_784.f3.f1;
        int32_t *l_807 = &g_297;
        int32_t *l_808 = &l_576[1];
        int32_t *l_809 = &l_784.f0;
        int32_t *l_810 = (void*)0;
        int32_t *l_811 = &l_576[1];
        int32_t *l_812[7][1][3] = {{{&g_69.f0,(void*)0,&g_69.f0}},{{&l_576[1],(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0}},{{&l_576[1],&l_576[1],(void*)0}},{{&g_69.f0,(void*)0,&g_69.f0}},{{&l_576[1],(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0}}};
        uint32_t l_813 = 18446744073709551615UL;
        int i, j, k;
        for (p_44.f2 = (-21); (p_44.f2 < 35); p_44.f2 = safe_add_func_uint8_t_u_u(p_44.f2, 1))
        { 
            int16_t l_589[5];
            union U3 l_594 = {1UL};
            uint32_t *l_598 = &g_69.f3.f0;
            uint32_t **l_597[6];
            int32_t *l_600 = &g_69.f3.f1;
            int i;
            for (i = 0; i < 5; i++)
                l_589[i] = 0x8A24L;
            for (i = 0; i < 6; i++)
                l_597[i] = &l_598;
            for (g_123 = 0; (g_123 >= 0); g_123 -= 1)
            { 
                return l_588;
            }
            if (l_589[4])
                break;
            (*l_600) = (safe_rshift_func_uint8_t_u_s((p_43 <= (safe_rshift_func_uint8_t_u_u((*g_492), ((l_594 , &g_291[2][0][1]) != (l_599 = ((((g_296 = g_469) , ((safe_lshift_func_int16_t_s_u(p_44.f0, 15)) ^ l_589[4])) != l_553.f1) , &g_291[4][0][3])))))), 6));
            if (p_44.f2)
                break;
            return g_279;
        }
        if (((safe_sub_func_int64_t_s_s(l_588.f1, ((((*g_581) = (((**g_563) , &p_46) != ((*l_603) = &g_91))) ^ (((p_44 , (safe_sub_func_uint32_t_u_u((safe_rshift_func_uint16_t_u_s(7UL, 4)), (&g_580 != (void*)0)))) >= l_553.f1) , g_69.f4)) , g_69.f2))) >= g_199[1][0]))
        { 
            int8_t l_613 = 0x89L;
            struct S0 l_637 = {0xF7A51B92L,0x68468160L,0x32DDL};
            uint64_t l_663[2][6] = {{1UL,1UL,0UL,1UL,1UL,0UL},{1UL,1UL,0UL,1UL,1UL,0UL}};
            int64_t *l_710 = &g_296;
            uint16_t *l_734 = &l_553.f2;
            struct S1 l_743[2][1] = {{{0L,0x8C6CL,1UL,{18446744073709551610UL,0xF41DDB16L,65531UL},0x5495ECE0L,-1L}},{{0L,0x8C6CL,1UL,{18446744073709551610UL,0xF41DDB16L,65531UL},0x5495ECE0L,-1L}}};
            int i, j;
            for (g_198 = 0; g_198 < 7; g_198 += 1)
            {
                g_230[g_198] = &g_187;
            }
            for (g_577 = 25; (g_577 > 49); g_577 = safe_add_func_uint8_t_u_u(g_577, 6))
            { 
                uint64_t *l_610 = &g_71;
                int8_t * const l_638 = (void*)0;
                int32_t l_662 = 0L;
                const uint8_t l_682 = 0xDFL;
                p_43 ^= (((*l_610)--) == l_613);
                for (g_334 = 7; (g_334 < 18); g_334++)
                { 
                    int32_t *l_616 = (void*)0;
                    int32_t *l_617 = &l_576[0];
                    p_44.f1 = ((*l_617) = 0xCC0BB5B2L);
                }
                if ((l_618 != ((safe_unary_minus_func_uint32_t_u((safe_div_func_int16_t_s_s(((((safe_unary_minus_func_uint16_t_u((&g_291[1][0][0] == ((safe_lshift_func_uint8_t_u_u(l_553.f2, ((((safe_mul_func_uint8_t_u_u((safe_mod_func_int8_t_s_s(0xDCL, (safe_mul_func_uint8_t_u_u(((g_199[2][0] != (((void*)0 != g_631) != (**g_491))) <= l_588.f1), l_576[1])))), 0x3BL)) || 0xA4L) < (**g_580)) | g_69.f1))) , (*g_631))))) < 2UL) == l_553.f0) || (-1L)), 0xC59CL)))) , l_610)))
                { 
                    int32_t *l_639 = &l_553.f1;
                    (*l_639) = (((l_633 = &g_632) != (void*)0) > (safe_mod_func_uint64_t_u_u((0x1C3EAAE346E91FF2LL >= 7L), (((**g_580) = (!p_44.f2)) ^ (((((*g_90) = p_45) == (l_637 , l_638)) & 0UL) & p_44.f1)))));
                    return g_279;
                }
                else
                { 
                    int8_t l_640 = 0x9BL;
                    int32_t *l_643 = &l_637.f1;
                    int32_t **l_664[1][5];
                    uint16_t *l_683 = &l_637.f2;
                    uint16_t *l_684 = &l_553.f2;
                    int i, j;
                    for (i = 0; i < 1; i++)
                    {
                        for (j = 0; j < 5; j++)
                            l_664[i][j] = &l_643;
                    }
                    (*l_643) &= (l_640 | ((void*)0 == g_641));
                    (*l_643) |= (safe_mul_func_uint8_t_u_u(((safe_mul_func_int8_t_s_s(l_553.f0, (safe_mul_func_int8_t_s_s(l_588.f1, (l_650 == l_651))))) , (safe_div_func_int8_t_s_s((((safe_sub_func_int32_t_s_s(((~0x7EF4L) , ((safe_add_func_uint32_t_u_u((~(safe_mul_func_uint16_t_u_u(((l_662 , ((void*)0 != &p_44)) && l_663[0][3]), p_44.f0))), 0xD6717460L)) == (-1L))), l_662)) < 0xA546DE4EL) | (*p_47)), (-4L)))), 0UL));
                    g_305 = (void*)0;
                    if (l_576[1])
                        break;
                    l_553.f1 ^= ((safe_mul_func_uint16_t_u_u(((((*l_684) |= ((safe_div_func_int32_t_s_s(g_263, l_576[1])) , ((*l_683) &= (((((safe_sub_func_int16_t_s_s(((((~p_44.f2) == 0xD3FEB64B9C2C9F82LL) <= ((safe_lshift_func_uint16_t_u_s(((*g_581)++), 8)) | (safe_rshift_func_int16_t_s_u(g_63, 10)))) || ((*g_581) |= (l_678 < ((*p_46) = (safe_mod_func_uint8_t_u_u(p_44.f2, l_681)))))), p_44.f0)) && 0UL) & l_682) != p_43) ^ 0x32030F19206706E8LL)))) <= 0x5BEEL) || p_44.f0), p_43)) , p_44.f1);
                }
                if (l_663[1][4])
                    continue;
                return g_279;
            }
            if (((*g_90) != (*g_90)))
            { 
                int32_t *l_688 = &g_69.f3.f1;
                int32_t *l_689 = &l_576[1];
                int32_t *l_690 = &l_576[1];
                int32_t *l_691 = &l_637.f1;
                int32_t *l_692[6][6] = {{(void*)0,(void*)0,&g_69.f3.f1,&g_69.f3.f1,(void*)0,(void*)0},{&l_576[0],(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,&l_576[0],&g_69.f3.f1,&g_4,&g_4,&g_69.f3.f1},{(void*)0,(void*)0,&g_4,(void*)0,&l_553.f1,(void*)0},{&l_576[0],(void*)0,&l_576[0],&g_69.f3.f1,&g_4,&g_4},{(void*)0,&l_576[0],&l_576[0],(void*)0,(void*)0,(void*)0}};
                int i, j;
                for (g_110 = 7; (g_110 <= 5); --g_110)
                { 
                    if (p_44.f2)
                        goto lbl_687;
                }
                --g_694;
                for (g_296 = 12; (g_296 >= 4); g_296 = safe_sub_func_int8_t_s_s(g_296, 5))
                { 
                    (*l_688) = ((*g_642) , (*l_688));
                }
                if (p_44.f0)
                    break;
            }
            else
            { 
                uint64_t l_720 = 0UL;
                struct S0 l_721 = {0UL,0x9D4F8DD2L,0UL};
                union U3 l_733 = {1UL};
                for (g_69.f3.f2 = (-19); (g_69.f3.f2 < 47); g_69.f3.f2 = safe_add_func_int32_t_s_s(g_69.f3.f2, 9))
                { 
                    return l_588;
                }
                if (l_693)
                { 
                    g_305 = &p_43;
                }
                else
                { 
                    int32_t *l_701 = &l_553.f1;
                    int32_t *l_702 = &g_69.f3.f1;
                    int32_t *l_703[3][1];
                    int8_t l_709 = 0x5AL;
                    int16_t *l_719 = &g_124[0][1];
                    int i, j;
                    for (i = 0; i < 3; i++)
                    {
                        for (j = 0; j < 1; j++)
                            l_703[i][j] = (void*)0;
                    }
                    --g_706[0][4][0];
                    (*l_701) = (l_709 , p_44.f2);
                    (*l_701) |= (((void*)0 != &p_44) | ((p_44.f0 , ((l_710 == &l_704[0][0]) && ((safe_div_func_uint8_t_u_u((((safe_add_func_uint8_t_u_u((safe_div_func_int64_t_s_s(0xEB98B1D9C7E77792LL, (safe_div_func_uint8_t_u_u((((*l_719) = ((0x30L > (-1L)) != 1UL)) != (**g_580)), l_720)))), l_637.f0)) , 18446744073709551611UL) | p_43), l_681)) == g_279.f2))) , p_44.f2));
                    g_297 = (l_721 , ((*l_701) = ((*l_702) = (safe_div_func_uint32_t_u_u((safe_sub_func_int32_t_s_s((safe_rshift_func_uint16_t_u_s((+(safe_add_func_int64_t_s_s(((p_43 == p_44.f1) || ((void*)0 != &g_90)), (safe_mod_func_int8_t_s_s(((l_733 , g_123) && g_199[2][0]), 1L))))), 9)), 1UL)), l_553.f0)))));
                    if (l_693)
                        continue;
                }
                if (l_704[1][1])
                    continue;
            }
            if (((4294967292UL || (l_734 != ((*g_580) = (*g_580)))) != ((7UL || (safe_rshift_func_int8_t_s_s((safe_sub_func_uint64_t_u_u((safe_div_func_int64_t_s_s(((void*)0 == &g_90), (safe_add_func_uint8_t_u_u(255UL, l_637.f1)))), l_553.f1)), 3))) && 0UL)))
            { 
                int32_t l_754 = 0x712B0E81L;
                struct S0 l_779 = {0x9C9258D5L,0xE0B51A0EL,65535UL};
                g_297 = (l_743[1][0] , 0L);
                l_743[1][0].f0 = 0x544956E5L;
                if (g_89.f2)
                    continue;
                for (p_44.f1 = 0; (p_44.f1 >= 0); p_44.f1 -= 1)
                { 
                    int32_t *l_744 = (void*)0;
                    int32_t *l_745 = &l_693;
                    int32_t *l_746 = &l_693;
                    int32_t *l_747 = &g_69.f3.f1;
                    int32_t *l_748 = (void*)0;
                    int32_t *l_749[5];
                    struct S2 l_755 = {0x1715E201F50FF313LL,4UL,-1L};
                    int i;
                    for (i = 0; i < 5; i++)
                        l_749[i] = &l_637.f1;
                    g_751[2][1][0]++;
                    g_69.f3.f1 = l_754;
                    if (l_681)
                        break;
                    return l_755;
                }
                for (g_334 = 0; (g_334 <= 1); g_334 += 1)
                { 
                    int8_t l_766[1];
                    int16_t *l_767 = &g_110;
                    int32_t *l_768 = &g_69.f3.f1;
                    int32_t *l_769 = &l_576[1];
                    int32_t *l_770 = &l_743[1][0].f0;
                    int32_t *l_771 = &l_576[1];
                    int32_t *l_772 = &l_693;
                    int32_t *l_773 = &l_693;
                    int32_t *l_774 = &l_754;
                    int32_t *l_775[5] = {&l_754,&l_754,&l_754,&l_754,&l_754};
                    int i;
                    for (i = 0; i < 1; i++)
                        l_766[i] = 0x36L;
                    l_576[(g_334 + 3)] = (safe_add_func_int32_t_s_s(((~l_754) > ((safe_add_func_int64_t_s_s((safe_mod_func_int32_t_s_s(((((*l_767) = ((safe_mod_func_int16_t_s_s((p_43 >= ((*l_633) == (*l_633))), (~(((**g_187) = p_44) , (((void*)0 != &g_492) ^ l_704[0][0]))))) , l_766[0])) <= g_32) & l_766[0]), p_44.f1)), 1UL)) <= (*p_45))), p_44.f2));
                    if (g_279.f0)
                        goto lbl_583;
                    ++l_776;
                    (**g_187) = l_779;
                }
            }
            else
            { 
                int32_t *l_780 = &l_553.f1;
                int32_t *l_781 = &l_576[3];
                int64_t *l_785[2][2][3] = {{{&g_63,(void*)0,&g_63},{&g_469,&g_469,&g_469}},{{&g_63,(void*)0,&g_63},{&g_469,&g_469,&g_469}}};
                uint32_t *l_793 = (void*)0;
                uint32_t *l_794 = &l_743[1][0].f4;
                int i, j, k;
                (*l_781) |= ((*l_780) = 0x3257EECDL);
                (*l_780) = 0x79CF6AC8L;
                l_795 = ((((*p_45) = (safe_mod_func_uint32_t_u_u((0xAD79L != (((((l_784 , l_785[0][1][1]) == ((g_279 , l_786) , &g_63)) <= ((safe_rshift_func_int16_t_s_s((safe_sub_func_uint16_t_u_u(((((((*l_794) = l_743[1][0].f4) >= 0UL) && (*p_47)) < 0x20EABAD93B6698D3LL) || (*p_46)), p_44.f1)), 6)) == 7UL)) == g_69.f3.f0) > l_784.f3.f1)), p_44.f1))) , g_69.f3.f0) , (void*)0);
            }
            if (l_637.f2)
                break;
        }
        else
        { 
            int32_t *l_804 = &l_784.f0;
            (*l_804) ^= (safe_div_func_int8_t_s_s(((g_130 != (safe_mul_func_uint8_t_u_u((g_279.f0 == ((l_784.f4 , ((safe_add_func_uint16_t_u_u((safe_add_func_int64_t_s_s(0x41937A6568FED5F0LL, 18446744073709551614UL)), (*g_581))) , ((**g_329) , &p_47))) != (void*)0)), l_784.f5))) ^ g_694), (*p_47)));
            if (p_44.f1)
                continue;
        }
        ++l_813;
    }
    return g_279;
}



static int32_t  func_48(struct S2  p_49, uint16_t  p_50, uint32_t  p_51)
{ 
    uint8_t l_361 = 2UL;
    struct S0 **l_365 = &g_188;
    int32_t *l_371 = &g_297;
    uint32_t l_428[2][5][7] = {{{0xD121DCEBL,6UL,0UL,0xD121DCEBL,0UL,6UL,0xD121DCEBL},{0xE5B3D8C4L,18446744073709551609UL,0x3130AB70L,0x1134B46BL,18446744073709551609UL,0x1134B46BL,0x3130AB70L},{0xD121DCEBL,0xD121DCEBL,0x84DA7399L,18446744073709551615UL,18446744073709551615UL,0x84DA7399L,18446744073709551615UL},{18446744073709551606UL,0x3130AB70L,0x3130AB70L,18446744073709551606UL,0x1134B46BL,0xE5B3D8C4L,18446744073709551606UL},{0UL,18446744073709551615UL,0UL,0UL,18446744073709551615UL,0UL,6UL}},{{5UL,18446744073709551606UL,0x13F3AAF6L,18446744073709551609UL,18446744073709551609UL,18446744073709551609UL,0x3130AB70L},{0UL,0x84DA7399L,0x15195B6BL,0UL,18446744073709551607UL,18446744073709551607UL,0UL},{6UL,0x3130AB70L,6UL,0x5D89427FL,0x3130AB70L,0x13F3AAF6L,0x13F3AAF6L},{6UL,0UL,0xD121DCEBL,0UL,6UL,0xD121DCEBL,0UL},{0xE5B3D8C4L,0x13F3AAF6L,0x5D89427FL,0xE5B3D8C4L,0x5D89427FL,0x13F3AAF6L,0xE5B3D8C4L}}};
    const uint8_t l_455 = 1UL;
    uint32_t l_501 = 0x14C09FC8L;
    union U3 *l_508 = (void*)0;
    union U3 **l_507 = &l_508;
    int i, j, k;
lbl_534:
    for (g_89.f1 = 0; (g_89.f1 < 4); g_89.f1 = safe_add_func_uint8_t_u_u(g_89.f1, 3))
    { 
        uint64_t *l_376[3];
        struct S0 *l_379 = &g_69.f3;
        int32_t l_382 = 7L;
        const int32_t l_383 = 1L;
        struct S1 l_394 = {1L,-1L,0x63L,{0UL,-7L,0x1262L},0xE38BD596L,0xF9C3E5F6L};
        struct S0 l_498 = {0UL,0x9AA4C556L,65527UL};
        union U3 *l_505[4][6] = {{&g_89,&g_89,&g_89,&g_89,&g_89,&g_89},{&g_89,&g_89,&g_89,&g_89,&g_89,&g_89},{&g_89,&g_89,&g_89,&g_89,&g_89,&g_89},{&g_89,&g_89,&g_89,&g_89,&g_89,&g_89}};
        union U3 **l_504 = &l_505[3][1];
        int i, j;
        for (i = 0; i < 3; i++)
            l_376[i] = &g_182[0];
        if (l_361)
        { 
            for (g_69.f5 = 0; g_69.f5 < 6; g_69.f5 += 1)
            {
                for (g_263 = 0; g_263 < 1; g_263 += 1)
                {
                    for (g_297 = 0; g_297 < 4; g_297 += 1)
                    {
                        g_291[g_69.f5][g_263][g_297] = 0UL;
                    }
                }
            }
        }
        else
        { 
            for (g_71 = 0; (g_71 <= 2); g_71 += 1)
            { 
                int32_t l_370 = (-1L);
                int i;
                if (g_182[g_71])
                    break;
                if (p_51)
                    continue;
                for (g_69.f2 = 0; (g_69.f2 <= 0); g_69.f2 += 1)
                { 
                    uint16_t *l_362 = (void*)0;
                    uint16_t *l_363 = &g_263;
                    int32_t *l_364 = &g_297;
                    struct S0 ***l_366 = (void*)0;
                    struct S0 ***l_367 = &g_329;
                    struct S0 ***l_368 = (void*)0;
                    struct S0 ***l_369 = &l_365;
                    (*l_364) = (((*l_363) = (g_69.f3.f2 = 65535UL)) , 0x6A21A4FCL);
                    (*l_369) = ((*l_367) = l_365);
                }
                if (p_49.f2)
                    break;
                l_370 &= 1L;
                for (p_50 = 0; (p_50 <= 0); p_50 += 1)
                { 
                    int32_t **l_372 = &l_371;
                    (*l_372) = l_371;
                }
            }
        }
    }
    for (g_69.f3.f1 = 14; (g_69.f3.f1 <= 12); g_69.f3.f1 = safe_sub_func_int8_t_s_s(g_69.f3.f1, 5))
    { 
        const int32_t *l_532[4] = {&g_4,&g_4,&g_4,&g_4};
        const int32_t **l_533 = &l_532[1];
        int i;
        (*l_533) = l_532[3];
        (*l_371) &= g_69.f2;
        if (g_297)
            goto lbl_534;
        return (*l_371);
    }
    return p_49.f2;
}



static struct S2  func_53(int8_t * p_54, int8_t * const  p_55, int32_t  p_56, int8_t * p_57, int64_t  p_58)
{ 
    int8_t *l_66[3];
    int8_t **l_65 = &l_66[0];
    int8_t ***l_64 = &l_65;
    uint64_t *l_70 = &g_71;
    int8_t l_76 = 1L;
    int32_t l_107 = (-1L);
    int32_t l_117 = 1L;
    int32_t l_118 = 0xA1F43B5DL;
    int32_t l_126 = 0x14F3CE24L;
    const union U3 l_155 = {0x0EB0543BL};
    int8_t ****l_173[2];
    struct S0 *l_176[3][5] = {{&g_69.f3,&g_69.f3,&g_69.f3,&g_69.f3,&g_69.f3},{&g_69.f3,&g_69.f3,&g_69.f3,&g_69.f3,&g_69.f3},{&g_69.f3,&g_69.f3,&g_69.f3,&g_69.f3,&g_69.f3}};
    struct S2 l_191 = {0x295248D46CA458FBLL,0UL,1L};
    struct S0 ***l_228 = &g_187;
    int64_t l_250 = 0x57B5D56E283C5324LL;
    int32_t l_309 = 0xFE78748EL;
    int32_t l_310 = 1L;
    int32_t l_311 = 1L;
    int32_t *l_346 = &g_69.f3.f1;
    int32_t *l_347[6] = {&l_309,&l_309,(void*)0,&l_309,&l_309,(void*)0};
    int i, j;
    for (i = 0; i < 3; i++)
        l_66[i] = &g_32;
    for (i = 0; i < 2; i++)
        l_173[i] = &l_64;
    (*l_64) = &p_54;
    if (((g_4 > g_32) , (safe_div_func_int16_t_s_s(((g_69 , ((*l_70) = 0xC4B0B4C8B43F6205LL)) == (safe_lshift_func_uint16_t_u_u(p_56, ((safe_rshift_func_uint8_t_u_u((l_76 > ((p_56 < p_58) , g_69.f0)), l_76)) ^ g_63)))), l_76))))
    { 
        struct S2 l_77[3] = {{18446744073709551615UL,4294967287UL,0x85L},{18446744073709551615UL,4294967287UL,0x85L},{18446744073709551615UL,4294967287UL,0x85L}};
        int i;
        return l_77[0];
    }
    else
    { 
        int16_t l_87 = 0x2D20L;
        int32_t *l_88 = &g_69.f5;
        uint64_t *l_106 = &g_71;
        int64_t *l_108[4][7] = {{&g_63,&g_63,&g_63,&g_63,&g_63,&g_63,&g_63},{&g_63,(void*)0,(void*)0,&g_63,(void*)0,(void*)0,&g_63},{(void*)0,&g_63,(void*)0,(void*)0,&g_63,(void*)0,(void*)0},{&g_63,&g_63,&g_63,&g_63,&g_63,&g_63,&g_63}};
        int16_t l_114 = 0x6077L;
        int32_t l_115 = 0x3224D420L;
        int32_t l_116 = (-3L);
        int32_t l_119 = 0xF38EC915L;
        int32_t l_121 = 0L;
        int32_t l_122 = (-7L);
        int32_t l_125[6] = {(-8L),(-8L),(-8L),(-8L),(-8L),(-8L)};
        struct S2 l_133 = {1UL,4294967295UL,0x64L};
        uint8_t *l_186 = (void*)0;
        int8_t **l_343 = &g_91;
        uint16_t *l_344 = &g_263;
        int32_t **l_345[5][4][7] = {{{&g_305,&g_305,&g_305,&g_305,&g_305,&g_305,&g_305},{&g_305,&g_305,&g_305,&g_305,&g_305,(void*)0,&g_305},{&g_305,&g_305,(void*)0,(void*)0,&g_305,&g_305,&g_305},{&g_305,&g_305,&g_305,&g_305,&g_305,&g_305,&g_305}},{{&g_305,&g_305,&g_305,&g_305,&g_305,&g_305,&g_305},{&g_305,(void*)0,&g_305,&g_305,&g_305,(void*)0,&g_305},{&g_305,&g_305,(void*)0,(void*)0,&g_305,&g_305,&g_305},{(void*)0,&g_305,(void*)0,&g_305,&g_305,&g_305,&g_305}},{{&g_305,&g_305,(void*)0,&g_305,&g_305,&g_305,&g_305},{(void*)0,&g_305,&g_305,&g_305,&g_305,&g_305,&g_305},{&g_305,&g_305,&g_305,&g_305,&g_305,&g_305,(void*)0},{&g_305,(void*)0,&g_305,&g_305,&g_305,&g_305,&g_305}},{{&g_305,&g_305,&g_305,&g_305,&g_305,&g_305,&g_305},{&g_305,&g_305,&g_305,&g_305,&g_305,(void*)0,&g_305},{&g_305,&g_305,&g_305,(void*)0,&g_305,&g_305,&g_305},{&g_305,&g_305,&g_305,&g_305,&g_305,&g_305,&g_305}},{{(void*)0,&g_305,&g_305,&g_305,(void*)0,&g_305,&g_305},{&g_305,&g_305,(void*)0,&g_305,&g_305,&g_305,&g_305},{&g_305,&g_305,&g_305,&g_305,&g_305,&g_305,&g_305},{&g_305,(void*)0,&g_305,&g_305,&g_305,&g_305,&g_305}}};
        int i, j, k;
        if ((((~(((safe_lshift_func_int16_t_s_u(p_56, g_69.f2)) && (safe_div_func_uint16_t_u_u((safe_mul_func_int16_t_s_s(g_69.f3.f2, 0xE285L)), 0x9BCDL))) , ((((safe_lshift_func_uint16_t_u_u((((*l_88) = l_87) , ((((g_69.f3 , g_89) , g_90) == (void*)0) && 248UL)), 6)) && l_87) , l_70) != &g_71))) || l_76) >= p_56))
        { 
            int16_t *l_109 = &g_110;
            int64_t **l_111 = &l_108[1][5];
            int32_t l_120 = 0x91112FB1L;
            int32_t l_127 = (-10L);
            int32_t l_128 = 0x98E270A0L;
            struct S0 l_170 = {0xE8F313B9L,-9L,0x9EB3L};
            int32_t *l_180 = &l_126;
            int32_t *l_181[5];
            uint8_t *l_185 = (void*)0;
            union U3 l_227 = {0UL};
            int i;
            for (i = 0; i < 5; i++)
                l_181[i] = &l_118;
            if ((safe_add_func_uint16_t_u_u((safe_sub_func_int64_t_s_s(g_32, ((((*l_111) = ((safe_div_func_uint8_t_u_u((safe_rshift_func_int16_t_s_u(((*l_109) |= ((&g_63 == (((safe_add_func_int8_t_s_s((l_87 | (-1L)), ((((((g_63 && ((safe_sub_func_uint64_t_u_u((((((safe_sub_func_int32_t_s_s(((g_63 == p_58) | l_76), l_87)) , (void*)0) != l_106) < p_56) | g_89.f2), p_56)) && g_69.f3.f0)) & 2UL) && g_89.f2) < 0xCBL) , 0x57498DD0L) >= l_107))) < g_69.f3.f0) , l_108[3][5])) == l_87)), 0)), (*p_55))) , (void*)0)) == (void*)0) == p_58))), 65526UL)))
            { 
                int32_t *l_112 = &g_69.f0;
                int32_t *l_113[3][6][2] = {{{&g_3,&g_4},{&g_4,&g_4},{&g_69.f0,&g_4},{&g_4,&g_4},{&g_3,(void*)0},{&g_69.f3.f1,(void*)0}},{{&g_4,&g_69.f0},{&g_4,&g_4},{&g_69.f0,&g_69.f3.f1},{&g_69.f0,&g_4},{&g_4,&g_69.f0},{&g_4,(void*)0}},{{&g_69.f3.f1,(void*)0},{&g_3,&g_4},{&g_4,&g_4},{&g_69.f0,&g_4},{&g_4,&g_4},{&g_3,(void*)0}}};
                int i, j, k;
                ++g_130;
                return l_133;
            }
            else
            { 
                struct S1 l_153 = {0xE04B2EDBL,-1L,0x8AL,{0UL,1L,0x5524L},0xCE975681L,9L};
                uint8_t *l_154 = &l_153.f2;
                int64_t * const *l_168[2][3][4] = {{{(void*)0,&l_108[3][5],&l_108[2][6],&l_108[2][6]},{&l_108[3][5],&l_108[3][5],(void*)0,&l_108[2][6]},{&l_108[3][5],&l_108[3][5],&l_108[3][5],(void*)0}},{{&l_108[3][5],(void*)0,(void*)0,&l_108[3][5]},{&l_108[3][5],(void*)0,&l_108[2][6],(void*)0},{(void*)0,&l_108[3][5],&l_108[2][6],&l_108[2][6]}}};
                int8_t ****l_172 = &l_64;
                int i, j, k;
                if ((safe_sub_func_uint64_t_u_u((safe_div_func_uint8_t_u_u((+((((safe_sub_func_uint8_t_u_u(0xC2L, ((safe_mod_func_int8_t_s_s((safe_rshift_func_int16_t_s_u((p_56 < 0x7704L), 13)), (safe_add_func_uint32_t_u_u(((safe_sub_func_uint8_t_u_u(0x24L, (((*l_154) = ((safe_mul_func_uint8_t_u_u(((safe_rshift_func_int8_t_s_s(((l_153 , p_58) >= 7UL), 5)) & l_153.f0), 251UL)) && 0xAFE7L)) < l_153.f3.f0))) & l_116), l_120)))) < g_71))) , p_56) , l_155) , 18446744073709551615UL)), l_128)), g_69.f5)))
                { 
                    int32_t *l_165 = &l_116;
                    int32_t *l_169[2][6][5] = {{{&l_120,&l_120,&l_117,&l_120,&l_120},{&l_115,&l_153.f0,&l_115,&l_115,&l_153.f0},{&l_120,&g_69.f3.f1,(void*)0,&l_120,(void*)0},{&l_153.f0,&l_153.f0,&l_115,&l_153.f0,&l_153.f0},{(void*)0,&l_120,(void*)0,&g_69.f3.f1,&l_120},{&l_153.f0,&l_115,&l_115,&l_153.f0,&l_115}},{{&l_120,&l_120,&l_117,&l_120,&l_120},{&l_115,&l_153.f0,&l_115,&l_115,&l_153.f0},{&l_120,&g_69.f3.f1,(void*)0,&l_120,(void*)0},{&l_153.f0,&l_153.f0,&l_115,&l_153.f0,&l_153.f0},{(void*)0,&l_120,(void*)0,&g_69.f3.f1,&l_120},{&l_153.f0,&l_115,&l_115,&l_153.f0,&l_115}}};
                    struct S0 *l_171 = &l_153.f3;
                    int i, j, k;
                    g_69.f0 ^= (safe_sub_func_uint32_t_u_u(((((((*l_165) = (safe_rshift_func_int16_t_s_s(((*l_109) &= (safe_rshift_func_int8_t_s_u(((g_69.f3.f2 <= (((*l_154)--) <= (safe_unary_minus_func_int8_t_s(0x19L)))) && (l_128 > l_153.f2)), 6))), 6))) && ((safe_div_func_int32_t_s_s(((void*)0 != l_168[1][1][3]), (((void*)0 != l_111) , 0x757E1CA6L))) || 0x4D1492C190A5E154LL)) >= (*p_55)) != p_58) , 4294967295UL), p_58));
                    (*l_171) = l_170;
                    g_69.f3.f1 |= 0x75717668L;
                    l_173[1] = l_172;
                }
                else
                { 
                    struct S0 l_174 = {0UL,-9L,65529UL};
                    struct S0 *l_175 = &l_153.f3;
                    int32_t *l_177 = (void*)0;
                    int32_t *l_178 = &l_125[5];
                    int32_t **l_179 = &l_178;
                    (*l_175) = l_174;
                    l_117 = ((void*)0 == l_176[1][0]);
                    (*l_178) ^= 6L;
                    (*l_179) = &l_125[0];
                }
            }
            g_182[1]--;
            if (p_58)
            { 
                struct S2 l_190[1][3][2] = {{{{8UL,0xA53BE8B1L,2L},{8UL,0xA53BE8B1L,2L}},{{8UL,0xA53BE8B1L,2L},{8UL,0xA53BE8B1L,2L}},{{8UL,0xA53BE8B1L,2L},{8UL,0xA53BE8B1L,2L}}}};
                int32_t l_196 = 1L;
                int32_t l_197[1][7];
                int i, j, k;
                for (i = 0; i < 1; i++)
                {
                    for (j = 0; j < 7; j++)
                        l_197[i][j] = 1L;
                }
                if ((g_69.f0 |= g_69.f3.f1))
                { 
                    (*l_180) &= (0xC17DL & (l_185 == l_186));
                }
                else
                { 
                    struct S0 ***l_189 = &g_187;
                    (*l_189) = g_187;
                    return l_190[0][0][0];
                }
                for (g_89.f1 = 0; (g_89.f1 <= 5); g_89.f1 += 1)
                { 
                    return l_191;
                }
                for (g_89.f3 = 0; (g_89.f3 <= 0); g_89.f3 += 1)
                { 
                    struct S2 *l_193 = &l_191;
                    struct S2 **l_192 = &l_193;
                    int32_t l_194 = 0x81A7BB41L;
                    int32_t l_195 = (-1L);
                    (*l_192) = &l_191;
                    if (l_194)
                        break;
                    ++g_199[2][0];
                }
            }
            else
            { 
                uint32_t l_202[3];
                int64_t ** const l_215[3] = {&l_108[1][0],&l_108[1][0],&l_108[1][0]};
                uint32_t *l_216 = &g_69.f4;
                int i;
                for (i = 0; i < 3; i++)
                    l_202[i] = 0xE4635A5DL;
                if ((l_122 &= ((g_69.f2 = l_202[2]) , ((safe_unary_minus_func_uint64_t_u((safe_sub_func_int8_t_s_s(((safe_mul_func_uint16_t_u_u((((((*l_216) ^= (((safe_mul_func_int8_t_s_s((*p_55), (~p_56))) > (safe_add_func_int8_t_s_s(((l_202[0] & (p_58 >= (((void*)0 == l_215[2]) < l_115))) == 0x1BD9829634F4FC1ALL), 0x8AL))) >= 0x8F6A0003599E8472LL)) , l_186) != g_91) >= (*p_57)), p_56)) && 0x8AL), l_133.f2)))) < l_202[0]))))
                { 
                    struct S2 l_223 = {18446744073709551612UL,0x6B0B3541L,1L};
                    int32_t **l_226 = &l_180;
                    (*l_226) = ((((safe_mod_func_uint16_t_u_u(((*p_54) > (safe_div_func_int32_t_s_s(((safe_mul_func_int16_t_s_s((l_223 , ((*l_109) |= ((((safe_mul_func_uint16_t_u_u(p_56, ((0xB5C9B739L < (p_58 != ((-8L) & l_115))) , l_202[2]))) && 0xF8228610EFDCEB63LL) >= l_202[0]) , p_58))), l_223.f2)) == l_119), (-1L)))), g_69.f5)) != 0xE15FF329L) == l_223.f2) , (void*)0);
                    (*l_226) = (l_227 , (*l_226));
                    (*l_226) = &l_127;
                    l_117 = ((**l_226) = p_58);
                }
                else
                { 
                    (*l_180) = ((void*)0 != &l_120);
                    return l_133;
                }
            }
            return l_133;
        }
        else
        { 
            struct S0 ****l_229[7][6][3] = {{{&l_228,&l_228,&l_228},{&l_228,(void*)0,&l_228},{&l_228,&l_228,&l_228},{&l_228,&l_228,&l_228},{&l_228,&l_228,(void*)0},{&l_228,(void*)0,&l_228}},{{&l_228,(void*)0,&l_228},{&l_228,&l_228,&l_228},{&l_228,(void*)0,&l_228},{&l_228,(void*)0,&l_228},{(void*)0,&l_228,&l_228},{&l_228,&l_228,&l_228}},{{&l_228,&l_228,&l_228},{&l_228,(void*)0,&l_228},{&l_228,&l_228,&l_228},{&l_228,&l_228,(void*)0},{(void*)0,&l_228,&l_228},{&l_228,&l_228,&l_228}},{{&l_228,(void*)0,&l_228},{&l_228,&l_228,&l_228},{&l_228,&l_228,&l_228},{&l_228,&l_228,(void*)0},{&l_228,(void*)0,&l_228},{&l_228,(void*)0,&l_228}},{{&l_228,&l_228,&l_228},{&l_228,(void*)0,&l_228},{&l_228,(void*)0,&l_228},{(void*)0,&l_228,&l_228},{&l_228,&l_228,&l_228},{&l_228,&l_228,&l_228}},{{&l_228,(void*)0,&l_228},{&l_228,&l_228,&l_228},{&l_228,&l_228,(void*)0},{(void*)0,&l_228,&l_228},{&l_228,&l_228,&l_228},{&l_228,(void*)0,&l_228}},{{&l_228,&l_228,&l_228},{&l_228,&l_228,&l_228},{&l_228,&l_228,(void*)0},{&l_228,(void*)0,&l_228},{&l_228,(void*)0,&l_228},{&l_228,&l_228,&l_228}}};
            const int32_t l_237 = (-5L);
            int8_t l_261 = (-1L);
            int32_t l_262 = 1L;
            uint32_t *l_271 = &g_69.f4;
            struct S2 *l_278 = &g_279;
            int64_t l_294 = (-5L);
            uint32_t l_298[1];
            int32_t l_308 = 1L;
            int i, j, k;
            for (i = 0; i < 1; i++)
                l_298[i] = 0xB12C148FL;
            g_230[0] = l_228;
            if (((safe_rshift_func_int16_t_s_u((safe_lshift_func_uint8_t_u_u(((-7L) == (safe_mod_func_uint64_t_u_u((l_237 , ((safe_add_func_uint64_t_u_u(0x365363CA09B53E80LL, ((safe_mul_func_int16_t_s_s(g_89.f0, (safe_mod_func_int64_t_s_s(l_133.f2, (~(safe_unary_minus_func_uint16_t_u(p_56))))))) && g_32))) != 0L)), l_122))), 3)), 3)) != g_32))
            { 
                int16_t *l_251 = &g_124[0][1];
                int32_t l_252[1][5];
                int16_t *l_253 = &l_87;
                struct S2 *l_280 = &l_191;
                struct S0 l_286[3] = {{0UL,0xBA30C083L,0x092EL},{0UL,0xBA30C083L,0x092EL},{0UL,0xBA30C083L,0x092EL}};
                int32_t *l_289[5] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                const int32_t *l_302[5];
                const int32_t **l_301 = &l_302[4];
                int i, j;
                for (i = 0; i < 1; i++)
                {
                    for (j = 0; j < 5; j++)
                        l_252[i][j] = 0x36AB41BAL;
                }
                for (i = 0; i < 5; i++)
                    l_302[i] = &l_286[0].f1;
                if ((safe_div_func_int16_t_s_s((safe_lshift_func_int16_t_s_s((l_250 , 0xF184L), ((*l_251) &= p_58))), ((*l_253) = l_252[0][2]))))
                { 
                    int32_t *l_254 = &l_122;
                    int32_t *l_255 = &l_117;
                    int32_t *l_256 = &l_252[0][2];
                    int32_t *l_257 = &l_126;
                    int32_t *l_258 = (void*)0;
                    int32_t *l_259 = &l_125[5];
                    int32_t *l_260[4];
                    int i;
                    for (i = 0; i < 4; i++)
                        l_260[i] = (void*)0;
                    (***l_228) = (**g_187);
                    ++g_263;
                }
                else
                { 
                    int32_t *l_275 = &l_116;
                    struct S2 *l_277 = (void*)0;
                    struct S2 **l_276[5];
                    struct S1 l_285[4] = {{0x19184DCAL,-9L,0x29L,{0xF8498B0FL,4L,0xF7F7L},0xD238EB0DL,0xB8EA2144L},{0x19184DCAL,-9L,0x29L,{0xF8498B0FL,4L,0xF7F7L},0xD238EB0DL,0xB8EA2144L},{0x19184DCAL,-9L,0x29L,{0xF8498B0FL,4L,0xF7F7L},0xD238EB0DL,0xB8EA2144L},{0x19184DCAL,-9L,0x29L,{0xF8498B0FL,4L,0xF7F7L},0xD238EB0DL,0xB8EA2144L}};
                    int i;
                    for (i = 0; i < 5; i++)
                        l_276[i] = &l_277;
                    (*l_275) = ((safe_div_func_int32_t_s_s((safe_unary_minus_func_uint16_t_u((safe_mul_func_uint8_t_u_u((g_32 , ((void*)0 == l_271)), 0x12L)))), (++g_89.f2))) <= (+(g_199[1][0] = l_252[0][0])));
                    (***l_228) = ((((((l_278 = &l_133) == l_280) != l_250) <= (safe_mod_func_uint64_t_u_u(((&g_198 == (void*)0) == (((*p_54) = (l_285[0] , ((((***l_228) , (-5L)) || l_261) || 0L))) <= 8UL)), l_133.f0))) ^ l_155.f2) , l_286[0]);
                }
                l_126 ^= (g_63 && (l_121 > (safe_rshift_func_int8_t_s_u(0xADL, 0))));
                for (l_191.f2 = 0; (l_191.f2 <= 2); l_191.f2 += 1)
                { 
                    int32_t l_290 = 0xE2028FAFL;
                    int32_t l_295[3];
                    int i;
                    for (i = 0; i < 3; i++)
                        l_295[i] = (-1L);
                    ++g_291[2][0][1];
                    --l_298[0];
                    return g_279;
                }
                (*l_301) = &l_237;
            }
            else
            { 
                int32_t *l_304[4];
                int i;
                for (i = 0; i < 4; i++)
                    l_304[i] = &l_125[4];
                for (g_63 = 2; (g_63 >= 0); g_63 -= 1)
                { 
                    int32_t *l_303 = &l_125[5];
                    int32_t l_306 = 0x75C585E5L;
                    int32_t l_307 = 0xE983FBA5L;
                    int32_t l_312 = 0x16949AE5L;
                    int32_t l_313[7][4] = {{5L,1L,0x254F27D1L,1L},{1L,7L,0x254F27D1L,0x254F27D1L},{5L,5L,1L,0x254F27D1L},{0x9C8A9460L,7L,0x9C8A9460L,1L},{0x9C8A9460L,1L,1L,0x9C8A9460L},{5L,1L,0x254F27D1L,1L},{1L,7L,0x254F27D1L,0x254F27D1L}};
                    int i, j;
                    (*l_303) = (l_133 , g_182[g_63]);
                    if (l_262)
                        break;
                    g_305 = l_304[3];
                    --g_314[2][2][3];
                }
            }
            if (((void*)0 == p_55))
            { 
                int32_t *l_330 = &l_309;
                int32_t *l_331 = &l_121;
                int32_t *l_332 = &g_69.f0;
                int32_t *l_333[6] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                int i;
                g_297 |= (safe_mul_func_int16_t_s_s(((safe_sub_func_uint64_t_u_u((safe_add_func_int16_t_s_s(l_298[0], (safe_add_func_int8_t_s_s(0L, (+g_89.f0))))), (safe_lshift_func_uint8_t_u_u(l_118, ((((safe_unary_minus_func_int8_t_s(l_87)) , g_329) == (g_69.f0 , (*l_228))) , p_58))))) || l_298[0]), 0x6039L));
                ++g_334;
            }
            else
            { 
                return l_191;
            }
        }
        l_115 = (safe_rshift_func_int8_t_s_s((safe_rshift_func_int16_t_s_u((0xD7B04C0DBBB14142LL >= g_4), ((*l_344) |= (safe_lshift_func_uint16_t_u_u(((l_343 != ((*l_64) = &g_91)) <= l_107), 12))))), 2));
        l_346 = &l_126;
        l_347[1] = &g_3;
    }
    g_297 &= ((((+(safe_mod_func_int8_t_s_s((((*l_70) &= (((safe_add_func_int64_t_s_s(p_56, g_129)) && (((safe_add_func_int32_t_s_s(((((((((safe_sub_func_int32_t_s_s((g_279 , (-1L)), (g_334 , p_56))) <= (safe_div_func_uint8_t_u_u(g_110, (*l_346)))) , 18446744073709551607UL) > 0xB18DAE7BCCAAA314LL) ^ p_58) == p_56) && p_58) , (*l_346)), p_58)) || p_56) || 0UL)) == p_56)) == g_199[2][0]), 0x26L))) || p_56) == g_69.f5) , 0x2BA41123L);
    return g_279;
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_3, "g_3", print_hash_value);
    transparent_crc(g_4, "g_4", print_hash_value);
    transparent_crc(g_32, "g_32", print_hash_value);
    transparent_crc(g_63, "g_63", print_hash_value);
    transparent_crc(g_69.f0, "g_69.f0", print_hash_value);
    transparent_crc(g_69.f1, "g_69.f1", print_hash_value);
    transparent_crc(g_69.f2, "g_69.f2", print_hash_value);
    transparent_crc(g_69.f3.f0, "g_69.f3.f0", print_hash_value);
    transparent_crc(g_69.f3.f1, "g_69.f3.f1", print_hash_value);
    transparent_crc(g_69.f3.f2, "g_69.f3.f2", print_hash_value);
    transparent_crc(g_69.f4, "g_69.f4", print_hash_value);
    transparent_crc(g_69.f5, "g_69.f5", print_hash_value);
    transparent_crc(g_71, "g_71", print_hash_value);
    transparent_crc(g_89.f0, "g_89.f0", print_hash_value);
    transparent_crc(g_89.f2, "g_89.f2", print_hash_value);
    transparent_crc(g_110, "g_110", print_hash_value);
    transparent_crc(g_123, "g_123", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transparent_crc(g_124[i][j], "g_124[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_129, "g_129", print_hash_value);
    transparent_crc(g_130, "g_130", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_182[i], "g_182[i]", print_hash_value);

    }
    transparent_crc(g_198, "g_198", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 1; j++)
        {
            transparent_crc(g_199[i][j], "g_199[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_263, "g_263", print_hash_value);
    transparent_crc(g_279.f0, "g_279.f0", print_hash_value);
    transparent_crc(g_279.f1, "g_279.f1", print_hash_value);
    transparent_crc(g_279.f2, "g_279.f2", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 4; k++)
            {
                transparent_crc(g_291[i][j][k], "g_291[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_296, "g_296", print_hash_value);
    transparent_crc(g_297, "g_297", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 7; j++)
        {
            for (k = 0; k < 5; k++)
            {
                transparent_crc(g_314[i][j][k], "g_314[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_334, "g_334", print_hash_value);
    transparent_crc(g_469, "g_469", print_hash_value);
    transparent_crc(g_577, "g_577", print_hash_value);
    transparent_crc(g_694, "g_694", print_hash_value);
    transparent_crc(g_705, "g_705", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 7; j++)
        {
            for (k = 0; k < 2; k++)
            {
                transparent_crc(g_706[i][j][k], "g_706[i][j][k]", print_hash_value);

            }
        }
    }
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 2; k++)
            {
                transparent_crc(g_751[i][j][k], "g_751[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_849, "g_849", print_hash_value);
    transparent_crc(g_850, "g_850", print_hash_value);
    transparent_crc(g_894, "g_894", print_hash_value);
    transparent_crc(g_941, "g_941", print_hash_value);
    transparent_crc(g_942, "g_942", print_hash_value);
    transparent_crc(g_943, "g_943", print_hash_value);
    transparent_crc(g_949, "g_949", print_hash_value);
    transparent_crc(g_950, "g_950", print_hash_value);
    transparent_crc(g_951, "g_951", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            transparent_crc(g_995[i][j].f0, "g_995[i][j].f0", print_hash_value);
            transparent_crc(g_995[i][j].f1, "g_995[i][j].f1", print_hash_value);
            transparent_crc(g_995[i][j].f2, "g_995[i][j].f2", print_hash_value);

        }
    }
    transparent_crc(g_1044, "g_1044", print_hash_value);
    transparent_crc(g_1069, "g_1069", print_hash_value);
    transparent_crc(g_1085, "g_1085", print_hash_value);
    transparent_crc(g_1195, "g_1195", print_hash_value);
    transparent_crc(g_1196, "g_1196", print_hash_value);
    transparent_crc(g_1301, "g_1301", print_hash_value);
    transparent_crc(g_1302, "g_1302", print_hash_value);
    transparent_crc(g_1304, "g_1304", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_1306[i], "g_1306[i]", print_hash_value);

    }
    transparent_crc(g_1307, "g_1307", print_hash_value);
    transparent_crc(g_1373, "g_1373", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 7; j++)
        {
            for (k = 0; k < 6; k++)
            {
                transparent_crc(g_1375[i][j][k], "g_1375[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_1406, "g_1406", print_hash_value);
    transparent_crc(g_1488, "g_1488", print_hash_value);
    transparent_crc(g_1489, "g_1489", print_hash_value);
    transparent_crc(g_1490, "g_1490", print_hash_value);
    transparent_crc(g_1577, "g_1577", print_hash_value);
    transparent_crc(g_1578, "g_1578", print_hash_value);
    transparent_crc(g_1579, "g_1579", print_hash_value);
    transparent_crc(g_1580, "g_1580", print_hash_value);
    transparent_crc(g_1654.f0, "g_1654.f0", print_hash_value);
    transparent_crc(g_1654.f1, "g_1654.f1", print_hash_value);
    transparent_crc(g_1654.f2, "g_1654.f2", print_hash_value);
    transparent_crc(g_1741, "g_1741", print_hash_value);
    transparent_crc(g_1777, "g_1777", print_hash_value);
    transparent_crc(g_1778, "g_1778", print_hash_value);
    transparent_crc(g_1864, "g_1864", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 4; j++)
        {
            transparent_crc(g_1919[i][j], "g_1919[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_1930, "g_1930", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transparent_crc(g_2056[i][j], "g_2056[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_2059, "g_2059", print_hash_value);
    transparent_crc(g_2087, "g_2087", print_hash_value);
    transparent_crc(g_2092, "g_2092", print_hash_value);
    transparent_crc(g_2197, "g_2197", print_hash_value);
    transparent_crc(g_2229, "g_2229", print_hash_value);
    transparent_crc(g_2250, "g_2250", print_hash_value);
    transparent_crc(g_2300.f0, "g_2300.f0", print_hash_value);
    transparent_crc(g_2300.f1, "g_2300.f1", print_hash_value);
    transparent_crc(g_2300.f2, "g_2300.f2", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
