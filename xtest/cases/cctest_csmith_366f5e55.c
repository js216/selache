// SPDX-License-Identifier: MIT
// cctest_csmith_366f5e55.c --- cctest case csmith_366f5e55 (csmith seed 913268309)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x2c9c803f */
/* @exp_ticks 0x16ab9 */

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

// Options:   -s 913268309 -o /tmp/csmith_gen_mqrjt8i5/csmith.c --concise --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 8 --max-block-size 5 --max-block-depth 4 --max-expr-complexity 8 --max-array-dim 3 --max-array-len-per-dim 7 --max-struct-fields 8 --max-union-fields 5

static long __undefined;


#pragma pack(push)
#pragma pack(1)
struct S0 {
   uint8_t  f0;
   int8_t  f1;
   uint64_t  f2;
   uint32_t  f3;
   uint16_t  f4;
   const uint32_t  f5;
   const int16_t  f6;
   int8_t  f7;
};
#pragma pack(pop)

#pragma pack(push)
#pragma pack(1)
struct S1 {
   int32_t  f0;
};
#pragma pack(pop)

#pragma pack(push)
#pragma pack(1)
struct S2 {
   uint16_t  f0;
   uint64_t  f1;
   struct S0  f2;
   const int32_t  f3;
   const int8_t  f4;
   int64_t  f5;
   int32_t  f6;
   uint32_t  f7;
};
#pragma pack(pop)

union U3 {
   uint16_t  f0;
   int32_t  f1;
   uint8_t  f2;
   uint8_t  f3;
   uint32_t  f4;
};

union U4 {
   const uint32_t  f0;
   uint64_t  f1;
};


static int32_t g_3 = 1L;
static const union U4 g_10 = {0x6718E503L};
static const union U4 *g_9 = &g_10;
static union U4 g_22 = {7UL};
static int32_t g_25 = 0x61949F0DL;
static uint32_t g_33 = 0xDB9BEC7AL;
static union U4 g_42 = {18446744073709551608UL};
static uint8_t g_49 = 0UL;
static int16_t g_53 = 0x01FBL;
static struct S2 g_76 = {0x6DDDL,0x895A5D72DEFE8EB2LL,{0UL,6L,0UL,0xE7C99AE1L,0x59CDL,7UL,0x494CL,-1L},0x3672E3E3L,0xF4L,8L,0xB617F2E3L,0x6E24E13FL};
static int16_t g_79 = 0L;
static int16_t * const g_78 = &g_79;
static int32_t *g_85[2][5] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&g_3,&g_3,&g_3,&g_3,&g_3}};
static uint8_t *g_110 = &g_76.f2.f0;
static struct S1 g_159 = {1L};
static uint64_t g_212[6][5][1] = {{{0x1228030A8251E51DLL},{0x8289B81AA9FB025ALL},{0x04DF536845AF8849LL},{0x8289B81AA9FB025ALL},{0x1228030A8251E51DLL}},{{18446744073709551608UL},{0x1228030A8251E51DLL},{0x8289B81AA9FB025ALL},{0x04DF536845AF8849LL},{0x8289B81AA9FB025ALL}},{{0x1228030A8251E51DLL},{18446744073709551608UL},{0x1228030A8251E51DLL},{0x8289B81AA9FB025ALL},{0x04DF536845AF8849LL}},{{0x8289B81AA9FB025ALL},{0x1228030A8251E51DLL},{18446744073709551608UL},{0x1228030A8251E51DLL},{0x8289B81AA9FB025ALL}},{{0x04DF536845AF8849LL},{0x8289B81AA9FB025ALL},{0x1228030A8251E51DLL},{18446744073709551608UL},{0x1228030A8251E51DLL}},{{0x8289B81AA9FB025ALL},{0x04DF536845AF8849LL},{0x8289B81AA9FB025ALL},{0x1228030A8251E51DLL},{18446744073709551608UL}}};
static uint64_t g_219[2][5] = {{0xE40B48E6F06CA2D3LL,0x986623910730F0A0LL,18446744073709551615UL,18446744073709551615UL,0x986623910730F0A0LL},{0xE40B48E6F06CA2D3LL,0x2C76AACBF4508DB2LL,0x986623910730F0A0LL,0x986623910730F0A0LL,0x2C76AACBF4508DB2LL}};
static const union U3 g_250[1][7][3] = {{{{0x29D4L},{0x29D4L},{0x29D4L}},{{65535UL},{65535UL},{65535UL}},{{0x29D4L},{0x29D4L},{0x29D4L}},{{65535UL},{65535UL},{65535UL}},{{0x29D4L},{0x29D4L},{0x29D4L}},{{65535UL},{65535UL},{65535UL}},{{0x29D4L},{0x29D4L},{0x29D4L}}}};
static uint32_t g_330 = 4294967293UL;
static union U3 g_340 = {3UL};
static int32_t g_362[4][6] = {{0L,0x329E79F4L,0L,0x329E79F4L,0L,0x329E79F4L},{1L,0x329E79F4L,1L,0x329E79F4L,1L,0x329E79F4L},{0L,0x329E79F4L,0L,0x329E79F4L,0L,0x329E79F4L},{1L,0x329E79F4L,1L,0x329E79F4L,1L,0x329E79F4L}};
static union U4 ** const **g_454[6] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
static union U4 ** const ***g_453 = &g_454[4];
static union U4 *g_473 = &g_22;
static union U4 **g_472[1][4] = {{&g_473,&g_473,&g_473,&g_473}};
static union U4 ***g_471 = &g_472[0][1];
static uint32_t * const g_553[5] = {&g_76.f7,&g_76.f7,&g_76.f7,&g_76.f7,&g_76.f7};
static uint32_t * const *g_552 = &g_553[1];
static int32_t **g_573 = (void*)0;
static union U4 ****g_585 = &g_471;
static union U4 *****g_584 = &g_585;
static struct S0 g_635 = {254UL,0xEFL,0x0A4CA408C67D4C74LL,0x41EE286CL,5UL,7UL,0xD8F0L,0xD6L};
static uint16_t g_643[7] = {0x624FL,0x3EE7L,0x3EE7L,0x624FL,0x3EE7L,0x3EE7L,0x624FL};
static struct S2 g_668[2][3] = {{{0UL,18446744073709551610UL,{0x2EL,2L,0x1CD473C1B63284DFLL,0x3F6607F1L,1UL,4294967295UL,5L,8L},7L,0x7DL,0x2DF5CF061DE8F488LL,0xBA3A9017L,0UL},{0UL,18446744073709551610UL,{0x2EL,2L,0x1CD473C1B63284DFLL,0x3F6607F1L,1UL,4294967295UL,5L,8L},7L,0x7DL,0x2DF5CF061DE8F488LL,0xBA3A9017L,0UL},{0UL,18446744073709551610UL,{0x2EL,2L,0x1CD473C1B63284DFLL,0x3F6607F1L,1UL,4294967295UL,5L,8L},7L,0x7DL,0x2DF5CF061DE8F488LL,0xBA3A9017L,0UL}},{{0UL,18446744073709551610UL,{0x2EL,2L,0x1CD473C1B63284DFLL,0x3F6607F1L,1UL,4294967295UL,5L,8L},7L,0x7DL,0x2DF5CF061DE8F488LL,0xBA3A9017L,0UL},{0UL,18446744073709551610UL,{0x2EL,2L,0x1CD473C1B63284DFLL,0x3F6607F1L,1UL,4294967295UL,5L,8L},7L,0x7DL,0x2DF5CF061DE8F488LL,0xBA3A9017L,0UL},{0UL,18446744073709551610UL,{0x2EL,2L,0x1CD473C1B63284DFLL,0x3F6607F1L,1UL,4294967295UL,5L,8L},7L,0x7DL,0x2DF5CF061DE8F488LL,0xBA3A9017L,0UL}}};
static struct S1 *g_718 = &g_159;
static union U3 * const *g_802 = (void*)0;
static struct S0 g_836[7][6][1] = {{{{251UL,6L,0x9F83D534A9406DCDLL,0xDACE96ACL,1UL,0x6F05F026L,1L,0xCDL}},{{0xE3L,-7L,18446744073709551615UL,0xA958F22CL,0UL,1UL,0x34A1L,0xADL}},{{251UL,0xDDL,1UL,0x66AE5CFBL,0x1D24L,0x3500CCF5L,9L,1L}},{{255UL,0x51L,0UL,4294967295UL,65535UL,0x747975E5L,1L,0L}},{{251UL,0xDDL,1UL,0x66AE5CFBL,0x1D24L,0x3500CCF5L,9L,1L}},{{0xE3L,-7L,18446744073709551615UL,0xA958F22CL,0UL,1UL,0x34A1L,0xADL}}},{{{251UL,6L,0x9F83D534A9406DCDLL,0xDACE96ACL,1UL,0x6F05F026L,1L,0xCDL}},{{255UL,0x24L,0x17CFC2A1D04179E4LL,4294967295UL,1UL,1UL,-5L,0xB0L}},{{255UL,6L,1UL,0x3297E084L,0xBB2FL,4294967289UL,0x8B60L,0x41L}},{{255UL,6L,1UL,0x3297E084L,0xBB2FL,4294967289UL,0x8B60L,0x41L}},{{255UL,0x24L,0x17CFC2A1D04179E4LL,4294967295UL,1UL,1UL,-5L,0xB0L}},{{251UL,6L,0x9F83D534A9406DCDLL,0xDACE96ACL,1UL,0x6F05F026L,1L,0xCDL}}},{{{0xE3L,-7L,18446744073709551615UL,0xA958F22CL,0UL,1UL,0x34A1L,0xADL}},{{251UL,0xDDL,1UL,0x66AE5CFBL,0x1D24L,0x3500CCF5L,9L,1L}},{{255UL,0x51L,0UL,4294967295UL,65535UL,0x747975E5L,1L,0L}},{{251UL,0xDDL,1UL,0x66AE5CFBL,0x1D24L,0x3500CCF5L,9L,1L}},{{0xE3L,-7L,18446744073709551615UL,0xA958F22CL,0UL,1UL,0x34A1L,0xADL}},{{251UL,6L,0x9F83D534A9406DCDLL,0xDACE96ACL,1UL,0x6F05F026L,1L,0xCDL}}},{{{255UL,0x24L,0x17CFC2A1D04179E4LL,4294967295UL,1UL,1UL,-5L,0xB0L}},{{255UL,6L,1UL,0x3297E084L,0xBB2FL,4294967289UL,0x8B60L,0x41L}},{{255UL,6L,1UL,0x3297E084L,0xBB2FL,4294967289UL,0x8B60L,0x41L}},{{255UL,0x24L,0x17CFC2A1D04179E4LL,4294967295UL,1UL,1UL,-5L,0xB0L}},{{251UL,6L,0x9F83D534A9406DCDLL,0xDACE96ACL,1UL,0x6F05F026L,1L,0xCDL}},{{0xE3L,-7L,18446744073709551615UL,0xA958F22CL,0UL,1UL,0x34A1L,0xADL}}},{{{251UL,0xDDL,1UL,0x66AE5CFBL,0x1D24L,0x3500CCF5L,9L,1L}},{{255UL,0x51L,0UL,4294967295UL,65535UL,0x747975E5L,1L,0L}},{{251UL,0xDDL,1UL,0x66AE5CFBL,0x1D24L,0x3500CCF5L,9L,1L}},{{0xE3L,-7L,18446744073709551615UL,0xA958F22CL,0UL,1UL,0x34A1L,0xADL}},{{251UL,6L,0x9F83D534A9406DCDLL,0xDACE96ACL,1UL,0x6F05F026L,1L,0xCDL}},{{255UL,0x24L,0x17CFC2A1D04179E4LL,4294967295UL,1UL,1UL,-5L,0xB0L}}},{{{255UL,6L,1UL,0x3297E084L,0xBB2FL,4294967289UL,0x8B60L,0x41L}},{{255UL,6L,1UL,0x3297E084L,0xBB2FL,4294967289UL,0x8B60L,0x41L}},{{255UL,0x24L,0x17CFC2A1D04179E4LL,4294967295UL,1UL,1UL,-5L,0xB0L}},{{251UL,6L,0x9F83D534A9406DCDLL,0xDACE96ACL,1UL,0x6F05F026L,1L,0xCDL}},{{0xE3L,-7L,18446744073709551615UL,0xA958F22CL,0UL,1UL,0x34A1L,0xADL}},{{251UL,0xDDL,1UL,0x66AE5CFBL,0x1D24L,0x3500CCF5L,9L,1L}}},{{{255UL,0x51L,0UL,4294967295UL,65535UL,0x747975E5L,1L,0L}},{{251UL,0xDDL,1UL,0x66AE5CFBL,0x1D24L,0x3500CCF5L,9L,1L}},{{0xE3L,-7L,18446744073709551615UL,0xA958F22CL,0UL,1UL,0x34A1L,0xADL}},{{251UL,6L,0x9F83D534A9406DCDLL,0xDACE96ACL,1UL,0x6F05F026L,1L,0xCDL}},{{255UL,0x24L,0x17CFC2A1D04179E4LL,4294967295UL,1UL,1UL,-5L,0xB0L}},{{255UL,6L,1UL,0x3297E084L,0xBB2FL,4294967289UL,0x8B60L,0x41L}}}};
static struct S0 *g_835[4][1] = {{&g_76.f2},{&g_836[6][2][0]},{&g_76.f2},{&g_836[6][2][0]}};
static int32_t *g_860 = &g_362[0][1];
static int8_t g_895 = 0x2CL;
static struct S1 g_903 = {0xC63301FFL};
static uint8_t g_925 = 0UL;
static struct S2 g_942[7] = {{1UL,1UL,{1UL,0x99L,0UL,0UL,0xB92CL,0xC0C408E9L,0L,0xE3L},0x1A2A6FA1L,2L,-6L,0xD63850A3L,0xDB879EE8L},{1UL,1UL,{1UL,0x99L,0UL,0UL,0xB92CL,0xC0C408E9L,0L,0xE3L},0x1A2A6FA1L,2L,-6L,0xD63850A3L,0xDB879EE8L},{0UL,0x406FAB472F83CB40LL,{0x1EL,0x19L,18446744073709551615UL,0xBC33C930L,1UL,1UL,1L,0x79L},0L,-1L,0x900639DBD57EB021LL,0L,4294967295UL},{1UL,1UL,{1UL,0x99L,0UL,0UL,0xB92CL,0xC0C408E9L,0L,0xE3L},0x1A2A6FA1L,2L,-6L,0xD63850A3L,0xDB879EE8L},{1UL,1UL,{1UL,0x99L,0UL,0UL,0xB92CL,0xC0C408E9L,0L,0xE3L},0x1A2A6FA1L,2L,-6L,0xD63850A3L,0xDB879EE8L},{0UL,0x406FAB472F83CB40LL,{0x1EL,0x19L,18446744073709551615UL,0xBC33C930L,1UL,1UL,1L,0x79L},0L,-1L,0x900639DBD57EB021LL,0L,4294967295UL},{1UL,1UL,{1UL,0x99L,0UL,0UL,0xB92CL,0xC0C408E9L,0L,0xE3L},0x1A2A6FA1L,2L,-6L,0xD63850A3L,0xDB879EE8L}};
static struct S0 g_1017[2] = {{0xF9L,0x25L,0xC90F3EC42EBB5218LL,0UL,0x87CCL,0xB60FB25EL,0xCF6BL,0x53L},{0xF9L,0x25L,0xC90F3EC42EBB5218LL,0UL,0x87CCL,0xB60FB25EL,0xCF6BL,0x53L}};
static struct S0 **g_1020 = &g_835[0][0];
static struct S0 ***g_1019 = &g_1020;
static uint32_t g_1169 = 4294967288UL;
static struct S2 g_1181 = {0xCA75L,0xA3CA3FEECA7514E9LL,{0UL,0xEFL,0x1BC2C170449809A0LL,9UL,65535UL,0x6574A5B4L,0x4916L,-8L},-4L,0x15L,0x4754D309C651703ELL,6L,4294967288UL};
static uint32_t g_1197[1] = {0x10F3334EL};
static int64_t *g_1241 = &g_668[1][2].f5;
static uint16_t g_1255[3] = {0x75FAL,0x75FAL,0x75FAL};
static struct S0 g_1271[6][7] = {{{0xD0L,-1L,18446744073709551612UL,4294967286UL,0xCD5DL,4294967295UL,8L,0x09L},{0x72L,0x86L,0x7AEA552086FC0D15LL,0x6509397EL,1UL,4294967295UL,-10L,0x69L},{0xA3L,0xD3L,0x84BA06163AD40D87LL,0x7BDE50FBL,65528UL,0xAF898AE5L,9L,1L},{0xD0L,-1L,18446744073709551612UL,4294967286UL,0xCD5DL,4294967295UL,8L,0x09L},{0xF6L,0L,0UL,0xD66F7722L,0xC0A6L,0x9AAAA874L,0x1D92L,0L},{0xF6L,0L,0UL,0xD66F7722L,0xC0A6L,0x9AAAA874L,0x1D92L,0L},{0xD0L,-1L,18446744073709551612UL,4294967286UL,0xCD5DL,4294967295UL,8L,0x09L}},{{0xA3L,0xD3L,0x84BA06163AD40D87LL,0x7BDE50FBL,65528UL,0xAF898AE5L,9L,1L},{0UL,8L,18446744073709551611UL,0x18491736L,0UL,4294967290UL,0x36E3L,0x23L},{0xA3L,0xD3L,0x84BA06163AD40D87LL,0x7BDE50FBL,65528UL,0xAF898AE5L,9L,1L},{0xF6L,0L,0UL,0xD66F7722L,0xC0A6L,0x9AAAA874L,0x1D92L,0L},{0UL,8L,18446744073709551611UL,0x18491736L,0UL,4294967290UL,0x36E3L,0x23L},{0x72L,0x86L,0x7AEA552086FC0D15LL,0x6509397EL,1UL,4294967295UL,-10L,0x69L},{0x72L,0x86L,0x7AEA552086FC0D15LL,0x6509397EL,1UL,4294967295UL,-10L,0x69L}},{{0UL,8L,18446744073709551611UL,0x18491736L,0UL,4294967290UL,0x36E3L,0x23L},{0xD0L,-1L,18446744073709551612UL,4294967286UL,0xCD5DL,4294967295UL,8L,0x09L},{0x37L,0xF9L,0xFB442AC3F2B4C1DFLL,4294967295UL,1UL,0xABBADB09L,0xE4EFL,0xD3L},{0xD0L,-1L,18446744073709551612UL,4294967286UL,0xCD5DL,4294967295UL,8L,0x09L},{0UL,8L,18446744073709551611UL,0x18491736L,0UL,4294967290UL,0x36E3L,0x23L},{0x37L,0xF9L,0xFB442AC3F2B4C1DFLL,4294967295UL,1UL,0xABBADB09L,0xE4EFL,0xD3L},{247UL,0xD8L,1UL,0xD1D58551L,0x0140L,4294967295UL,-1L,0x77L}},{{247UL,0xD8L,1UL,0xD1D58551L,0x0140L,4294967295UL,-1L,0x77L},{0x72L,0x86L,0x7AEA552086FC0D15LL,0x6509397EL,1UL,4294967295UL,-10L,0x69L},{0xF6L,0L,0UL,0xD66F7722L,0xC0A6L,0x9AAAA874L,0x1D92L,0L},{247UL,0xD8L,1UL,0xD1D58551L,0x0140L,4294967295UL,-1L,0x77L},{0xF6L,0L,0UL,0xD66F7722L,0xC0A6L,0x9AAAA874L,0x1D92L,0L},{0x72L,0x86L,0x7AEA552086FC0D15LL,0x6509397EL,1UL,4294967295UL,-10L,0x69L},{247UL,0xD8L,1UL,0xD1D58551L,0x0140L,4294967295UL,-1L,0x77L}},{{0xA3L,0xD3L,0x84BA06163AD40D87LL,0x7BDE50FBL,65528UL,0xAF898AE5L,9L,1L},{247UL,0xD8L,1UL,0xD1D58551L,0x0140L,4294967295UL,-1L,0x77L},{0x72L,0x86L,0x7AEA552086FC0D15LL,0x6509397EL,1UL,4294967295UL,-10L,0x69L},{0xF6L,0L,0UL,0xD66F7722L,0xC0A6L,0x9AAAA874L,0x1D92L,0L},{247UL,0xD8L,1UL,0xD1D58551L,0x0140L,4294967295UL,-1L,0x77L},{0xF6L,0L,0UL,0xD66F7722L,0xC0A6L,0x9AAAA874L,0x1D92L,0L},{0x72L,0x86L,0x7AEA552086FC0D15LL,0x6509397EL,1UL,4294967295UL,-10L,0x69L}},{{247UL,0xD8L,1UL,0xD1D58551L,0x0140L,4294967295UL,-1L,0x77L},{247UL,0xD8L,1UL,0xD1D58551L,0x0140L,4294967295UL,-1L,0x77L},{0x37L,0xF9L,0xFB442AC3F2B4C1DFLL,4294967295UL,1UL,0xABBADB09L,0xE4EFL,0xD3L},{0UL,8L,18446744073709551611UL,0x18491736L,0UL,4294967290UL,0x36E3L,0x23L},{0xD0L,-1L,18446744073709551612UL,4294967286UL,0xCD5DL,4294967295UL,8L,0x09L},{0x37L,0xF9L,0xFB442AC3F2B4C1DFLL,4294967295UL,1UL,0xABBADB09L,0xE4EFL,0xD3L},{0xD0L,-1L,18446744073709551612UL,4294967286UL,0xCD5DL,4294967295UL,8L,0x09L}}};
static uint16_t g_1287 = 65535UL;
static int64_t g_1364 = 1L;
static uint32_t g_1380 = 6UL;
static int64_t g_1452[2] = {9L,9L};
static struct S2 ****g_1496 = (void*)0;
static uint16_t *g_1543 = &g_1287;
static uint16_t **g_1542 = &g_1543;
static int16_t g_1577 = 8L;
static uint32_t * const ****g_1607 = (void*)0;
static uint64_t *g_1622 = &g_212[2][3][0];
static uint64_t **g_1621[1][3][5] = {{{&g_1622,&g_1622,&g_1622,&g_1622,&g_1622},{&g_1622,&g_1622,&g_1622,&g_1622,&g_1622},{&g_1622,&g_1622,&g_1622,&g_1622,&g_1622}}};
static union U3 * const **g_1701[6][1][1] = {{{&g_802}},{{&g_802}},{{&g_802}},{{&g_802}},{{&g_802}},{{&g_802}}};
static union U3 * const ***g_1700[7][2] = {{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,&g_1701[2][0][0]},{(void*)0,&g_1701[2][0][0]},{(void*)0,(void*)0},{(void*)0,(void*)0}};
static union U3 g_1719 = {1UL};
static struct S1 ** const g_1731 = (void*)0;
static struct S1 ** const * const g_1730 = &g_1731;
static uint16_t g_1741 = 65526UL;
static uint32_t g_1744 = 1UL;
static uint16_t g_1797 = 0xA5CCL;
static int32_t ***g_1801 = &g_573;
static int32_t *** const *g_1800 = &g_1801;
static struct S1 *g_1810 = (void*)0;
static uint64_t g_1811 = 0x17E81689A5F6C06ALL;
static union U3 *g_1823 = (void*)0;
static int16_t g_1847[1] = {(-2L)};



static int32_t  func_1(void);
static const union U4 * const  func_4(const union U4 * p_5, uint32_t  p_6, struct S0  p_7, uint64_t  p_8);
static uint64_t  func_18(int8_t  p_19, uint32_t  p_20);
static struct S1  func_54(struct S1  p_55, uint32_t  p_56, int32_t * p_57, int64_t  p_58, union U3  p_59);
static struct S1  func_60(const int32_t  p_61, uint64_t * p_62, uint64_t * p_63, const union U4  p_64);
static union U4  func_67(struct S0  p_68, struct S1  p_69, const uint32_t  p_70);
static struct S0  func_71(int16_t * p_72, int32_t  p_73);
static uint64_t  func_81(int32_t * p_82);




static int32_t  func_1(void)
{ 
    uint64_t l_2[2];
    struct S0 l_1383[7][1] = {{{246UL,1L,0xBCF0DB455ED437A1LL,0UL,0UL,0x52DF7FE2L,0xA38AL,-1L}},{{246UL,1L,0xBCF0DB455ED437A1LL,0UL,0UL,0x52DF7FE2L,0xA38AL,-1L}},{{0x29L,0L,5UL,1UL,1UL,0x191378EFL,0xB95EL,0xD3L}},{{246UL,1L,0xBCF0DB455ED437A1LL,0UL,0UL,0x52DF7FE2L,0xA38AL,-1L}},{{246UL,1L,0xBCF0DB455ED437A1LL,0UL,0UL,0x52DF7FE2L,0xA38AL,-1L}},{{0x29L,0L,5UL,1UL,1UL,0x191378EFL,0xB95EL,0xD3L}},{{246UL,1L,0xBCF0DB455ED437A1LL,0UL,0UL,0x52DF7FE2L,0xA38AL,-1L}}};
    int32_t *l_1667 = &g_362[0][1];
    int16_t l_1670 = 0L;
    uint64_t *l_1682 = &g_942[1].f1;
    union U3 ***l_1699 = (void*)0;
    union U3 ****l_1698 = &l_1699;
    int32_t l_1708 = (-9L);
    int32_t l_1709 = 0x7E2B76B5L;
    uint16_t *l_1715[1];
    union U4 ****l_1750 = &g_471;
    const int16_t *l_1774 = &g_1577;
    const int16_t **l_1773 = &l_1774;
    uint64_t l_1788 = 0x85083BB4B4A46145LL;
    struct S1 *l_1808[7] = {&g_159,&g_159,&g_159,&g_159,&g_159,&g_159,&g_159};
    int32_t l_1818[5][5][3] = {{{4L,0x4E2ADFA4L,(-5L)},{1L,0L,0x8689F92CL},{4L,4L,0x8689F92CL},{0L,1L,(-5L)},{0x4E2ADFA4L,4L,0x4E2ADFA4L}},{{0x4E2ADFA4L,0L,4L},{0L,0x4E2ADFA4L,0x4E2ADFA4L},{4L,0x4E2ADFA4L,(-5L)},{1L,0L,0x8689F92CL},{4L,4L,0x8689F92CL}},{{0L,1L,(-5L)},{0x4E2ADFA4L,4L,0x4E2ADFA4L},{0x4E2ADFA4L,0L,4L},{0L,0x4E2ADFA4L,0x4E2ADFA4L},{4L,0x4E2ADFA4L,(-5L)}},{{1L,0L,0x8689F92CL},{4L,4L,0x8689F92CL},{0L,1L,(-5L)},{0x4E2ADFA4L,4L,0x4E2ADFA4L},{0x4E2ADFA4L,0L,4L}},{{0L,0x4E2ADFA4L,0x4E2ADFA4L},{4L,0x4E2ADFA4L,(-5L)},{1L,0L,0x8689F92CL},{4L,4L,0x8689F92CL},{0L,1L,(-5L)}}};
    union U3 *l_1822 = &g_340;
    int32_t l_1850 = 0x0DECAEE2L;
    uint32_t ***l_2000 = (void*)0;
    uint32_t ****l_1999 = &l_2000;
    uint32_t *****l_1998 = &l_1999;
    int i, j, k;
    for (i = 0; i < 2; i++)
        l_2[i] = 0x8B5131D8B9DBEA52LL;
    for (i = 0; i < 1; i++)
        l_1715[i] = &g_1181.f2.f4;
    for (g_3 = 0; g_3 < 2; g_3 += 1)
    {
        l_2[g_3] = 0x42CA8CDA2AE7B79FLL;
    }
    for (g_3 = 1; (g_3 >= 0); g_3 -= 1)
    { 
        uint16_t l_15 = 0xDA2AL;
        union U4 *l_21 = &g_22;
        int16_t *l_1381[3];
        int32_t l_1382[3];
        const union U4 **l_1635[3];
        const union U4 **l_1636 = (void*)0;
        const union U4 **l_1637 = &g_9;
        struct S0 l_1661 = {0x9FL,0x3EL,0x256169F88B23D1CALL,4294967288UL,0xA2E6L,1UL,0xFDD2L,0x91L};
        int32_t l_1666[7] = {0x9D9BDA23L,0x08E03789L,0x9D9BDA23L,0x9D9BDA23L,0x08E03789L,0x9D9BDA23L,0x9D9BDA23L};
        uint64_t *l_1685 = &g_1181.f2.f2;
        struct S1 l_1689 = {3L};
        const int32_t l_1703 = (-1L);
        struct S2 l_1727 = {0x0D9FL,18446744073709551615UL,{0xE2L,-2L,0x241AA2FFF37DBA77LL,4294967290UL,0xF4BBL,4294967291UL,0x8B5BL,-8L},1L,0x03L,4L,1L,0UL};
        union U4 ****l_1752 = &g_471;
        union U4 *****l_1751 = &l_1752;
        uint32_t l_1757 = 4294967292UL;
        int16_t l_1786 = 0L;
        int8_t l_1787 = (-7L);
        uint64_t l_1813[6][2][7] = {{{0x27A3562881E12C52LL,18446744073709551615UL,0x27A3562881E12C52LL,0xC4A4C1E6265DB02CLL,18446744073709551615UL,18446744073709551615UL,0xC4A4C1E6265DB02CLL},{0x27A3562881E12C52LL,18446744073709551615UL,0x27A3562881E12C52LL,0xC4A4C1E6265DB02CLL,18446744073709551615UL,18446744073709551615UL,0xC4A4C1E6265DB02CLL}},{{0x27A3562881E12C52LL,18446744073709551615UL,0x27A3562881E12C52LL,0xC4A4C1E6265DB02CLL,18446744073709551615UL,18446744073709551615UL,0xC4A4C1E6265DB02CLL},{0x27A3562881E12C52LL,18446744073709551615UL,0x27A3562881E12C52LL,0xC4A4C1E6265DB02CLL,18446744073709551615UL,18446744073709551615UL,0xC4A4C1E6265DB02CLL}},{{0x27A3562881E12C52LL,18446744073709551615UL,0x27A3562881E12C52LL,0xC4A4C1E6265DB02CLL,18446744073709551615UL,18446744073709551615UL,0xC4A4C1E6265DB02CLL},{0x27A3562881E12C52LL,18446744073709551615UL,0x27A3562881E12C52LL,0xC4A4C1E6265DB02CLL,18446744073709551615UL,18446744073709551615UL,0xC4A4C1E6265DB02CLL}},{{0x27A3562881E12C52LL,18446744073709551615UL,0x27A3562881E12C52LL,0xC4A4C1E6265DB02CLL,18446744073709551615UL,18446744073709551615UL,0xC4A4C1E6265DB02CLL},{0x27A3562881E12C52LL,18446744073709551615UL,0x27A3562881E12C52LL,0xC4A4C1E6265DB02CLL,18446744073709551615UL,18446744073709551615UL,0xC4A4C1E6265DB02CLL}},{{0x27A3562881E12C52LL,18446744073709551615UL,0x27A3562881E12C52LL,0xC4A4C1E6265DB02CLL,18446744073709551615UL,18446744073709551615UL,0xC4A4C1E6265DB02CLL},{0x27A3562881E12C52LL,18446744073709551615UL,0x27A3562881E12C52LL,0xC4A4C1E6265DB02CLL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL}},{{0x6B8D634B367DD573LL,6UL,0x6B8D634B367DD573LL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL},{0x6B8D634B367DD573LL,6UL,0x6B8D634B367DD573LL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL}}};
        uint32_t l_1819 = 0xFEA5EC51L;
        int8_t l_1824 = 0x17L;
        int i, j, k;
        for (i = 0; i < 3; i++)
            l_1381[i] = &g_53;
        for (i = 0; i < 3; i++)
            l_1382[i] = 1L;
        for (i = 0; i < 3; i++)
            l_1635[i] = &g_9;
    }
    for (g_76.f7 = 4; (g_76.f7 > 22); g_76.f7++)
    { 
        uint32_t l_1827 = 4294967295UL;
        int32_t l_1842 = 9L;
        int32_t l_1844 = 0x91EE62FEL;
        int32_t l_1845 = 0x3113CB5FL;
        int32_t l_1848 = 0x8F90E580L;
        int32_t l_1851[2][5][1] = {{{0L},{0L},{0x562B578BL},{0L},{0L}},{{0x562B578BL},{0L},{0L},{0x562B578BL},{0L}}};
        struct S0 l_1870 = {3UL,-2L,1UL,4294967295UL,65528UL,7UL,0x9B21L,0x92L};
        int32_t l_1872 = 5L;
        int32_t *l_1928[7];
        int32_t l_1937 = (-1L);
        union U3 *l_1945 = &g_340;
        const union U4 * const *l_1963 = &g_9;
        int8_t *l_1983 = &g_942[1].f2.f1;
        int8_t *l_1984 = &g_635.f1;
        uint32_t *l_1997[5] = {&g_76.f2.f3,&g_76.f2.f3,&g_76.f2.f3,&g_76.f2.f3,&g_76.f2.f3};
        uint32_t **l_1996 = &l_1997[1];
        uint32_t ***l_1995 = &l_1996;
        uint32_t ****l_1994 = &l_1995;
        uint32_t *****l_1993 = &l_1994;
        struct S1 *l_2027 = (void*)0;
        int i, j, k;
        for (i = 0; i < 7; i++)
            l_1928[i] = &g_3;
    }
    return g_1181.f3;
}



static const union U4 * const  func_4(const union U4 * p_5, uint32_t  p_6, struct S0  p_7, uint64_t  p_8)
{ 
    struct S1 **l_1386 = (void*)0;
    struct S0 *l_1387 = &g_836[6][2][0];
    int32_t *l_1388 = &g_362[0][1];
    int32_t l_1398 = 1L;
    const uint32_t *l_1403 = &g_1271[2][4].f3;
    const uint32_t **l_1402 = &l_1403;
    const uint32_t ** const *l_1401 = &l_1402;
    uint32_t l_1408 = 18446744073709551615UL;
    const struct S2 **l_1414 = (void*)0;
    const struct S2 *** const l_1413 = &l_1414;
    int32_t l_1467 = 6L;
    int32_t l_1468 = 0L;
    int32_t l_1469 = 0x53EC5D68L;
    int32_t l_1470 = 0L;
    int32_t l_1471 = 0x1259A665L;
    int32_t l_1472[5][7][2];
    int32_t l_1473 = 0x1EE21473L;
    int32_t l_1474 = 0x5DD6FDBAL;
    int32_t l_1475 = 0x15D0BFADL;
    int32_t l_1476 = 0L;
    uint32_t l_1477 = 0UL;
    const uint16_t *l_1484 = (void*)0;
    const union U4 * const l_1497 = &g_22;
    union U4 ***l_1503 = &g_472[0][1];
    int32_t l_1545 = 0x4C6E80F7L;
    int32_t l_1546 = 0x2EBB922DL;
    uint64_t *l_1620[6][3] = {{(void*)0,(void*)0,(void*)0},{&g_1271[2][4].f2,&g_1271[2][4].f2,&g_1271[2][4].f2},{(void*)0,(void*)0,(void*)0},{&g_1271[2][4].f2,&g_1271[2][4].f2,&g_1271[2][4].f2},{(void*)0,(void*)0,(void*)0},{&g_1271[2][4].f2,&g_1271[2][4].f2,&g_1271[2][4].f2}};
    uint64_t **l_1619 = &l_1620[1][0];
    int32_t *l_1633 = (void*)0;
    int32_t *l_1634 = &l_1473;
    int i, j, k;
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 7; j++)
        {
            for (k = 0; k < 2; k++)
                l_1472[i][j][k] = (-1L);
        }
    }
    (*l_1388) &= (safe_sub_func_int64_t_s_s(((*g_1241) = (*g_1241)), (g_76 , ((l_1386 == l_1386) | ((l_1387 != (p_7.f7 , &p_7)) > p_7.f5)))));
    for (g_76.f2.f4 = 0; (g_76.f2.f4 < 60); ++g_76.f2.f4)
    { 
        int32_t *l_1391 = &g_25;
        g_85[1][0] = l_1391;
        if ((*l_1391))
            continue;
    }
    if ((p_7 , (safe_sub_func_uint16_t_u_u((((*l_1387) , 0x5E7E335FDBA1D7F2LL) , (p_7.f4 = ((safe_mul_func_int16_t_s_s(p_7.f5, (*g_78))) && (*g_1241)))), ((*l_1387) , 9L)))))
    { 
        int8_t l_1396 = 2L;
        int32_t *l_1397[5][1][1];
        struct S2 *l_1411[5][1] = {{(void*)0},{&g_1181},{(void*)0},{&g_1181},{(void*)0}};
        struct S2 **l_1410 = &l_1411[4][0];
        struct S2 ***l_1409 = &l_1410;
        const struct S0 l_1420[4][7][4] = {{{{0x14L,0x9AL,0UL,0x9868452CL,0x7D61L,0xE16DC288L,1L,-1L},{255UL,0xE7L,0UL,0xC4802F90L,0x2931L,1UL,0x2C65L,-1L},{0x49L,1L,0xE4EAD96A673A7004LL,0xD8A06DEBL,1UL,4294967295UL,-4L,0xFCL},{0xCAL,0L,0xDBCAD461CC966DAFLL,0x10943ED2L,65535UL,0xF96942CDL,0x2F64L,0L}},{{0x0DL,3L,5UL,0x9266460AL,0xAD29L,0x7E8E9ADEL,-4L,1L},{0x14L,0x9AL,0UL,0x9868452CL,0x7D61L,0xE16DC288L,1L,-1L},{7UL,0L,18446744073709551609UL,0xFC1AAA2FL,0x72A2L,0x7D67AFC8L,3L,-1L},{251UL,-1L,18446744073709551610UL,0xC1C4DAD3L,0xD62EL,0x7386BA3FL,0xC2BDL,0xCDL}},{{0x05L,5L,5UL,0xCF3A581AL,0x6C52L,0xA9B16170L,-1L,0x44L},{1UL,-1L,9UL,0x649A83C6L,0x05FBL,1UL,2L,-1L},{0x05L,5L,5UL,0xCF3A581AL,0x6C52L,0xA9B16170L,-1L,0x44L},{251UL,-1L,18446744073709551610UL,0xC1C4DAD3L,0xD62EL,0x7386BA3FL,0xC2BDL,0xCDL}},{{7UL,0L,18446744073709551609UL,0xFC1AAA2FL,0x72A2L,0x7D67AFC8L,3L,-1L},{0x14L,0x9AL,0UL,0x9868452CL,0x7D61L,0xE16DC288L,1L,-1L},{0x0DL,3L,5UL,0x9266460AL,0xAD29L,0x7E8E9ADEL,-4L,1L},{0xCAL,0L,0xDBCAD461CC966DAFLL,0x10943ED2L,65535UL,0xF96942CDL,0x2F64L,0L}},{{0x49L,1L,0xE4EAD96A673A7004LL,0xD8A06DEBL,1UL,4294967295UL,-4L,0xFCL},{255UL,0xE7L,0UL,0xC4802F90L,0x2931L,1UL,0x2C65L,-1L},{0x14L,0x9AL,0UL,0x9868452CL,0x7D61L,0xE16DC288L,1L,-1L},{0x14L,0x9AL,0UL,0x9868452CL,0x7D61L,0xE16DC288L,1L,-1L}},{{1UL,0xFCL,18446744073709551615UL,0x42F495BFL,0xC1ABL,1UL,-5L,-7L},{1UL,0xFCL,18446744073709551615UL,0x42F495BFL,0xC1ABL,1UL,-5L,-7L},{0x14L,0x9AL,0UL,0x9868452CL,0x7D61L,0xE16DC288L,1L,-1L},{0x05L,5L,5UL,0xCF3A581AL,0x6C52L,0xA9B16170L,-1L,0x44L}},{{0x49L,1L,0xE4EAD96A673A7004LL,0xD8A06DEBL,1UL,4294967295UL,-4L,0xFCL},{0x9CL,-8L,0UL,5UL,0x6E95L,6UL,1L,0xB3L},{0x0DL,3L,5UL,0x9266460AL,0xAD29L,0x7E8E9ADEL,-4L,1L},{255UL,0xE7L,0UL,0xC4802F90L,0x2931L,1UL,0x2C65L,-1L}}},{{{7UL,0L,18446744073709551609UL,0xFC1AAA2FL,0x72A2L,0x7D67AFC8L,3L,-1L},{0x0DL,3L,5UL,0x9266460AL,0xAD29L,0x7E8E9ADEL,-4L,1L},{0x05L,5L,5UL,0xCF3A581AL,0x6C52L,0xA9B16170L,-1L,0x44L},{0x0DL,3L,5UL,0x9266460AL,0xAD29L,0x7E8E9ADEL,-4L,1L}},{{0x05L,5L,5UL,0xCF3A581AL,0x6C52L,0xA9B16170L,-1L,0x44L},{0x0DL,3L,5UL,0x9266460AL,0xAD29L,0x7E8E9ADEL,-4L,1L},{7UL,0L,18446744073709551609UL,0xFC1AAA2FL,0x72A2L,0x7D67AFC8L,3L,-1L},{255UL,0xE7L,0UL,0xC4802F90L,0x2931L,1UL,0x2C65L,-1L}},{{0x0DL,3L,5UL,0x9266460AL,0xAD29L,0x7E8E9ADEL,-4L,1L},{0x9CL,-8L,0UL,5UL,0x6E95L,6UL,1L,0xB3L},{0x49L,1L,0xE4EAD96A673A7004LL,0xD8A06DEBL,1UL,4294967295UL,-4L,0xFCL},{0x05L,5L,5UL,0xCF3A581AL,0x6C52L,0xA9B16170L,-1L,0x44L}},{{0x14L,0x9AL,0UL,0x9868452CL,0x7D61L,0xE16DC288L,1L,-1L},{1UL,0xFCL,18446744073709551615UL,0x42F495BFL,0xC1ABL,1UL,-5L,-7L},{1UL,0xFCL,18446744073709551615UL,0x42F495BFL,0xC1ABL,1UL,-5L,-7L},{0x14L,0x9AL,0UL,0x9868452CL,0x7D61L,0xE16DC288L,1L,-1L}},{{0x14L,0x9AL,0UL,0x9868452CL,0x7D61L,0xE16DC288L,1L,-1L},{255UL,0xE7L,0UL,0xC4802F90L,0x2931L,1UL,0x2C65L,-1L},{0x49L,1L,0xE4EAD96A673A7004LL,0xD8A06DEBL,1UL,4294967295UL,-4L,0xFCL},{0xCAL,0L,0xDBCAD461CC966DAFLL,0x10943ED2L,65535UL,0xF96942CDL,0x2F64L,0L}},{{0x0DL,3L,5UL,0x9266460AL,0xAD29L,0x7E8E9ADEL,-4L,1L},{0x14L,0x9AL,0UL,0x9868452CL,0x7D61L,0xE16DC288L,1L,-1L},{7UL,0L,18446744073709551609UL,0xFC1AAA2FL,0x72A2L,0x7D67AFC8L,3L,-1L},{251UL,-1L,18446744073709551610UL,0xC1C4DAD3L,0xD62EL,0x7386BA3FL,0xC2BDL,0xCDL}},{{0x05L,5L,5UL,0xCF3A581AL,0x6C52L,0xA9B16170L,-1L,0x44L},{1UL,-1L,9UL,0x649A83C6L,0x05FBL,1UL,2L,-1L},{0x05L,5L,5UL,0xCF3A581AL,0x6C52L,0xA9B16170L,-1L,0x44L},{251UL,-1L,18446744073709551610UL,0xC1C4DAD3L,0xD62EL,0x7386BA3FL,0xC2BDL,0xCDL}}},{{{7UL,0L,18446744073709551609UL,0xFC1AAA2FL,0x72A2L,0x7D67AFC8L,3L,-1L},{0x14L,0x9AL,0UL,0x9868452CL,0x7D61L,0xE16DC288L,1L,-1L},{0x0DL,3L,5UL,0x9266460AL,0xAD29L,0x7E8E9ADEL,-4L,1L},{0xCAL,0L,0xDBCAD461CC966DAFLL,0x10943ED2L,65535UL,0xF96942CDL,0x2F64L,0L}},{{0x49L,1L,0xE4EAD96A673A7004LL,0xD8A06DEBL,1UL,4294967295UL,-4L,0xFCL},{255UL,0xE7L,0UL,0xC4802F90L,0x2931L,1UL,0x2C65L,-1L},{0x14L,0x9AL,0UL,0x9868452CL,0x7D61L,0xE16DC288L,1L,-1L},{0x14L,0x9AL,0UL,0x9868452CL,0x7D61L,0xE16DC288L,1L,-1L}},{{1UL,0xFCL,18446744073709551615UL,0x42F495BFL,0xC1ABL,1UL,-5L,-7L},{1UL,0xFCL,18446744073709551615UL,0x42F495BFL,0xC1ABL,1UL,-5L,-7L},{0x14L,0x9AL,0UL,0x9868452CL,0x7D61L,0xE16DC288L,1L,-1L},{0x05L,5L,5UL,0xCF3A581AL,0x6C52L,0xA9B16170L,-1L,0x44L}},{{0x49L,1L,0xE4EAD96A673A7004LL,0xD8A06DEBL,1UL,4294967295UL,-4L,0xFCL},{0x9CL,-8L,0UL,5UL,0x6E95L,6UL,1L,0xB3L},{0x0DL,3L,5UL,0x9266460AL,0xAD29L,0x7E8E9ADEL,-4L,1L},{255UL,0xE7L,0UL,0xC4802F90L,0x2931L,1UL,0x2C65L,-1L}},{{7UL,0L,18446744073709551609UL,0xFC1AAA2FL,0x72A2L,0x7D67AFC8L,3L,-1L},{0x0DL,3L,5UL,0x9266460AL,0xAD29L,0x7E8E9ADEL,-4L,1L},{0x05L,5L,5UL,0xCF3A581AL,0x6C52L,0xA9B16170L,-1L,0x44L},{0x0DL,3L,5UL,0x9266460AL,0xAD29L,0x7E8E9ADEL,-4L,1L}},{{0x05L,5L,5UL,0xCF3A581AL,0x6C52L,0xA9B16170L,-1L,0x44L},{0x0DL,3L,5UL,0x9266460AL,0xAD29L,0x7E8E9ADEL,-4L,1L},{7UL,0L,18446744073709551609UL,0xFC1AAA2FL,0x72A2L,0x7D67AFC8L,3L,-1L},{255UL,0xE7L,0UL,0xC4802F90L,0x2931L,1UL,0x2C65L,-1L}},{{0x0DL,3L,5UL,0x9266460AL,0xAD29L,0x7E8E9ADEL,-4L,1L},{0x9CL,-8L,0UL,5UL,0x6E95L,6UL,1L,0xB3L},{0x49L,1L,0xE4EAD96A673A7004LL,0xD8A06DEBL,1UL,4294967295UL,-4L,0xFCL},{0x05L,5L,5UL,0xCF3A581AL,0x6C52L,0xA9B16170L,-1L,0x44L}}},{{{0x14L,0x9AL,0UL,0x9868452CL,0x7D61L,0xE16DC288L,1L,-1L},{1UL,0xFCL,18446744073709551615UL,0x42F495BFL,0xC1ABL,1UL,-5L,-7L},{1UL,0xFCL,18446744073709551615UL,0x42F495BFL,0xC1ABL,1UL,-5L,-7L},{0x14L,0x9AL,0UL,0x9868452CL,0x7D61L,0xE16DC288L,1L,-1L}},{{0x14L,0x9AL,0UL,0x9868452CL,0x7D61L,0xE16DC288L,1L,-1L},{255UL,0xE7L,0UL,0xC4802F90L,0x2931L,1UL,0x2C65L,-1L},{0x49L,1L,0xE4EAD96A673A7004LL,0xD8A06DEBL,1UL,4294967295UL,-4L,0xFCL},{0xCAL,0L,0xDBCAD461CC966DAFLL,0x10943ED2L,65535UL,0xF96942CDL,0x2F64L,0L}},{{0x0DL,3L,5UL,0x9266460AL,0xAD29L,0x7E8E9ADEL,-4L,1L},{0x14L,0x9AL,0UL,0x9868452CL,0x7D61L,0xE16DC288L,1L,-1L},{7UL,0L,18446744073709551609UL,0xFC1AAA2FL,0x72A2L,0x7D67AFC8L,3L,-1L},{251UL,-1L,18446744073709551610UL,0xC1C4DAD3L,0xD62EL,0x7386BA3FL,0xC2BDL,0xCDL}},{{0x05L,5L,5UL,0xCF3A581AL,0x6C52L,0xA9B16170L,-1L,0x44L},{1UL,-1L,9UL,0x649A83C6L,0x05FBL,1UL,2L,-1L},{0x05L,5L,5UL,0xCF3A581AL,0x6C52L,0xA9B16170L,-1L,0x44L},{251UL,-1L,18446744073709551610UL,0xC1C4DAD3L,0xD62EL,0x7386BA3FL,0xC2BDL,0xCDL}},{{7UL,0L,18446744073709551609UL,0xFC1AAA2FL,0x72A2L,0x7D67AFC8L,3L,-1L},{0x14L,0x9AL,0UL,0x9868452CL,0x7D61L,0xE16DC288L,1L,-1L},{0x0DL,3L,5UL,0x9266460AL,0xAD29L,0x7E8E9ADEL,-4L,1L},{0xCAL,0L,0xDBCAD461CC966DAFLL,0x10943ED2L,65535UL,0xF96942CDL,0x2F64L,0L}},{{0x49L,1L,0xE4EAD96A673A7004LL,0xD8A06DEBL,1UL,4294967295UL,-4L,0xFCL},{255UL,0xE7L,0UL,0xC4802F90L,0x2931L,1UL,0x2C65L,-1L},{0x14L,0x9AL,0UL,0x9868452CL,0x7D61L,0xE16DC288L,1L,-1L},{0x14L,0x9AL,0UL,0x9868452CL,0x7D61L,0xE16DC288L,1L,-1L}},{{1UL,0xFCL,18446744073709551615UL,0x42F495BFL,0xC1ABL,1UL,-5L,-7L},{1UL,0xFCL,18446744073709551615UL,0x42F495BFL,0xC1ABL,1UL,-5L,-7L},{0x14L,0x9AL,0UL,0x9868452CL,0x7D61L,0xE16DC288L,1L,-1L},{0x05L,5L,5UL,0xCF3A581AL,0x6C52L,0xA9B16170L,-1L,0x44L}}}};
        const union U4 **l_1425 = &g_9;
        const union U4 ***l_1424 = &l_1425;
        struct S0 ** const *l_1458 = &g_1020;
        uint32_t ** const l_1482 = (void*)0;
        uint32_t ** const *l_1481 = &l_1482;
        struct S1 l_1506 = {0xAB2ED3C2L};
        struct S1 *l_1523 = &g_903;
        const uint16_t **l_1541 = &l_1484;
        uint64_t *l_1566 = &g_76.f1;
        int i, j, k;
        for (i = 0; i < 5; i++)
        {
            for (j = 0; j < 1; j++)
            {
                for (k = 0; k < 1; k++)
                    l_1397[i][j][k] = &g_25;
            }
        }
        (*l_1388) &= (l_1396 = (-10L));
        l_1398 = ((*l_1388) = l_1396);
        for (g_1364 = 22; (g_1364 <= 16); g_1364--)
        { 
            int64_t l_1407 = 0x43A9620C6235B45CLL;
            l_1407 |= ((((void*)0 != l_1401) && ((((~g_159.f0) , (*p_5)) , 1UL) >= (((safe_unary_minus_func_uint8_t_u((p_7.f6 , ((*g_110) ^= (safe_unary_minus_func_uint64_t_u(18446744073709551611UL)))))) == p_8) | (*l_1388)))) >= 1L);
        }
        for (g_79 = 3; (g_79 >= 0); g_79 -= 1)
        { 
            struct S2 ****l_1412 = &l_1409;
            int32_t ***l_1427 = &g_573;
            int32_t l_1459 = (-1L);
            int32_t l_1461 = 1L;
            int32_t l_1462 = (-1L);
            int32_t l_1463 = 0xB90458B3L;
            int32_t l_1464 = 0x321A3D20L;
            int32_t l_1465 = (-2L);
            int32_t l_1466[3];
            uint32_t ***l_1480 = (void*)0;
            uint32_t ** const *l_1483 = (void*)0;
            const uint16_t **l_1485 = (void*)0;
            const uint16_t **l_1486 = &l_1484;
            uint16_t *l_1487 = &g_340.f0;
            uint32_t l_1505 = 18446744073709551615UL;
            uint32_t l_1608[4][6][4] = {{{9UL,1UL,0xB947CD43L,1UL},{1UL,0x1253E028L,0x543A0BACL,1UL},{0x543A0BACL,1UL,0UL,0UL},{18446744073709551612UL,18446744073709551612UL,0xB947CD43L,9UL},{18446744073709551612UL,0x1253E028L,0UL,18446744073709551612UL},{0x543A0BACL,9UL,0x543A0BACL,0UL}},{{1UL,9UL,18446744073709551612UL,0x543A0BACL},{0x1253E028L,0xB947CD43L,0xB947CD43L,0x1253E028L},{0x4E1E6981L,0x543A0BACL,0xB947CD43L,0xB8301BCFL},{0x1253E028L,0UL,18446744073709551612UL,0UL},{0UL,0xB947CD43L,0x4E1E6981L,0UL},{0x4E1E6981L,0UL,0xB8301BCFL,0xB8301BCFL}},{{0x543A0BACL,0x543A0BACL,18446744073709551612UL,0x1253E028L},{0x543A0BACL,0xB947CD43L,0xB8301BCFL,0x543A0BACL},{0x4E1E6981L,0x1253E028L,0x4E1E6981L,0xB8301BCFL},{0UL,0x1253E028L,18446744073709551612UL,0x543A0BACL},{0x1253E028L,0xB947CD43L,0xB947CD43L,0x1253E028L},{0x4E1E6981L,0x543A0BACL,0xB947CD43L,0xB8301BCFL}},{{0x1253E028L,0UL,18446744073709551612UL,0UL},{0UL,0xB947CD43L,0x4E1E6981L,0UL},{0x4E1E6981L,0UL,0xB8301BCFL,0xB8301BCFL},{0x543A0BACL,0x543A0BACL,18446744073709551612UL,0x1253E028L},{0x543A0BACL,0xB947CD43L,0xB8301BCFL,0x543A0BACL},{0x4E1E6981L,0x1253E028L,0x4E1E6981L,0xB8301BCFL}}};
            int i, j, k;
            for (i = 0; i < 3; i++)
                l_1466[i] = 0x7E6CFC5DL;
            l_1408 &= (*l_1388);
            if (((*l_1388) ^= (((*l_1412) = l_1409) != l_1413)))
            { 
                const uint8_t * const l_1421 = &g_635.f0;
                union U4 * const *l_1423 = (void*)0;
                union U4 * const **l_1422 = &l_1423;
                int32_t l_1426 = 0x53AD6BD3L;
                if (((safe_rshift_func_uint16_t_u_s((p_7 , ((safe_add_func_int16_t_s_s((((((**g_552) = ((safe_unary_minus_func_uint8_t_u((((l_1420[1][0][2] , &g_925) == l_1421) | (*g_78)))) != (*g_78))) , l_1422) != l_1424) < 255UL), p_7.f2)) && l_1426)), (*g_78))) ^ p_7.f1))
                { 
                    int32_t ****l_1428 = &l_1427;
                    (*l_1428) = l_1427;
                }
                else
                { 
                    uint32_t l_1442 = 4294967295UL;
                    (*l_1388) &= (g_942[1].f2.f5 | (safe_div_func_uint8_t_u_u((safe_sub_func_uint32_t_u_u((safe_add_func_uint16_t_u_u((safe_sub_func_int64_t_s_s((safe_add_func_int16_t_s_s((safe_mod_func_int64_t_s_s(p_7.f5, (p_7.f4 & (~(3UL == p_7.f1))))), ((&g_895 == &g_895) != 0x1FFB7691L))), l_1442)), 4UL)), 1UL)), g_33)));
                }
            }
            else
            { 
                uint16_t l_1443 = 0UL;
                int32_t l_1453[4][7][2] = {{{0x6B5A0D43L,0x39D4CCC4L},{(-7L),0x6B5A0D43L},{0x6B5A0D43L,(-7L)},{0x6B5A0D43L,0x6B5A0D43L},{(-7L),0x39D4CCC4L},{0x6B5A0D43L,(-7L)},{0x6B5A0D43L,0x39D4CCC4L}},{{(-7L),0x6B5A0D43L},{0x6B5A0D43L,(-7L)},{0x6B5A0D43L,0x6B5A0D43L},{(-7L),0x39D4CCC4L},{0x6B5A0D43L,(-7L)},{0x6B5A0D43L,0x39D4CCC4L},{(-7L),0x6B5A0D43L}},{{0x6B5A0D43L,(-7L)},{0x6B5A0D43L,0x6B5A0D43L},{(-7L),0x39D4CCC4L},{0x6B5A0D43L,(-7L)},{0x6B5A0D43L,0x39D4CCC4L},{(-7L),0x6B5A0D43L},{0x6B5A0D43L,(-7L)}},{{0x6B5A0D43L,0x6B5A0D43L},{(-7L),0x39D4CCC4L},{0x6B5A0D43L,(-7L)},{0x6B5A0D43L,0x39D4CCC4L},{(-7L),0x6B5A0D43L},{0x6B5A0D43L,(-7L)},{0x6B5A0D43L,0x6B5A0D43L}}};
                int8_t l_1460 = 0L;
                int i, j, k;
                --l_1443;
                if (l_1443)
                    continue;
                for (g_76.f2.f2 = 0; (g_76.f2.f2 <= 3); g_76.f2.f2 += 1)
                { 
                    union U3 *l_1456 = (void*)0;
                    union U3 **l_1455 = &l_1456;
                    union U3 *** const l_1454 = &l_1455;
                    uint32_t *l_1457 = &g_1197[0];
                    int i, j;
                    (*l_1388) = g_362[g_76.f2.f2][(g_79 + 1)];
                    g_362[g_76.f2.f2][(g_79 + 1)] = (safe_mod_func_uint16_t_u_u((p_7.f1 == ((((*l_1457) &= (safe_rshift_func_int16_t_s_s(0xA1AFL, (safe_sub_func_uint8_t_u_u((((g_1452[0] , (*l_1387)) , ((0x511A3CEA5287466BLL > ((l_1453[2][6][0] = p_8) & ((((void*)0 != l_1454) , (void*)0) != (void*)0))) || p_8)) | 0x36L), (*g_110)))))) , (void*)0) != l_1458)), g_1181.f2.f4));
                }
                for (g_895 = 0; (g_895 >= 0); g_895 -= 1)
                { 
                    if (p_7.f5)
                        break;
                }
                --l_1477;
            }
            (*l_1388) &= (-1L);
            if (((l_1480 == (l_1483 = l_1481)) & ((((*l_1486) = l_1484) == (l_1487 = &g_1287)) || ((*g_110) &= (safe_lshift_func_int16_t_s_u(((l_1412 != ((safe_mul_func_int8_t_s_s(p_6, (safe_div_func_uint32_t_u_u((safe_mod_func_uint64_t_u_u(18446744073709551615UL, (-1L))), (*l_1388))))) , g_1496)) && p_8), 11))))))
            { 
                for (g_1287 = 0; (g_1287 <= 0); g_1287 += 1)
                { 
                    return l_1497;
                }
            }
            else
            { 
                int32_t **l_1498 = (void*)0;
                int32_t **l_1499 = &g_85[1][1];
                struct S1 l_1508 = {0xE6EEABDEL};
                struct S1 l_1509 = {-5L};
                union U4 **l_1530 = &g_473;
                union U4 **l_1532 = &g_473;
                union U4 ***l_1531 = &l_1532;
                int16_t *l_1544 = &g_53;
                uint16_t *l_1547 = &g_1271[2][4].f4;
                uint16_t *l_1548 = &g_643[4];
                (*l_1499) = &g_25;
                for (p_8 = 0; (p_8 <= 0); p_8 += 1)
                { 
                    uint64_t *l_1500[4];
                    union U4 ***l_1504 = &g_472[0][1];
                    struct S1 *l_1507[1][7][3];
                    int32_t **l_1510 = (void*)0;
                    int32_t **l_1511 = &l_1388;
                    int i, j, k;
                    for (i = 0; i < 4; i++)
                        l_1500[i] = &g_635.f2;
                    for (i = 0; i < 1; i++)
                    {
                        for (j = 0; j < 7; j++)
                        {
                            for (k = 0; k < 3; k++)
                                l_1507[i][j][k] = &g_159;
                        }
                    }
                    l_1505 |= ((++p_7.f2) ^ ((l_1503 == l_1504) >= 0x15L));
                    (*l_1499) = &g_362[0][2];
                    l_1509 = (l_1508 = l_1506);
                    (*l_1511) = ((*l_1499) = (void*)0);
                    return p_5;
                }
                l_1466[2] ^= (safe_div_func_uint8_t_u_u((((safe_lshift_func_int8_t_s_u((safe_sub_func_uint32_t_u_u((~(safe_add_func_uint16_t_u_u(((*l_1548) &= ((*l_1547) |= (((~(~(l_1523 == ((((!((safe_mod_func_int64_t_s_s((!(safe_sub_func_int8_t_s_s(((((*l_1503) = l_1530) != ((*l_1531) = l_1530)) || (safe_rshift_func_int16_t_s_u((safe_sub_func_int16_t_s_s((safe_sub_func_int16_t_s_s((*g_78), (((safe_lshift_func_int16_t_s_s(((((*l_1544) = (0xC0L && ((*g_1241) < (l_1541 == g_1542)))) == l_1545) < 18446744073709551611UL), (*g_78))) & g_836[6][2][0].f5) <= p_6))), 0x6426L)), (**g_1542)))), l_1546))), (*g_1241))) || 0x40C9955C76F68E53LL)) | p_7.f7) != (*g_1241)) , (void*)0)))) | 255UL) == (*l_1388)))), p_7.f3))), (**g_552))), 4)) , (*g_1241)) > (*g_1241)), p_7.f7));
            }
            if ((((*l_1388) < p_7.f0) && (*g_110)))
            { 
                int16_t l_1553 = 8L;
                int32_t *l_1554 = (void*)0;
                int32_t **l_1555[7][1];
                const union U4 * const l_1556 = (void*)0;
                int i, j;
                for (i = 0; i < 7; i++)
                {
                    for (j = 0; j < 1; j++)
                        l_1555[i][j] = &l_1388;
                }
                g_860 = (((((void*)0 == &g_78) > 0x4209AB41B3248CB8LL) && (-1L)) , ((((safe_mod_func_uint32_t_u_u((((*l_1388) , (p_7.f6 | (safe_mod_func_uint16_t_u_u(p_7.f2, (**g_1542))))) > 0x67D1L), l_1553)) , p_8) == 7UL) , l_1554));
                return l_1556;
            }
            else
            { 
                const union U4 * const l_1568 = &g_10;
                int32_t l_1586 = 8L;
                for (l_1475 = 0; (l_1475 >= 0); l_1475 -= 1)
                { 
                    union U4 l_1559 = {0xEF2B693FL};
                    struct S0 l_1560 = {0x0CL,0xEBL,1UL,0xB7B286D5L,65535UL,0UL,0x9539L,0x59L};
                    int8_t *l_1561 = &l_1560.f7;
                    int32_t l_1567 = 0L;
                    l_1567 &= (((((**g_552) , ((safe_mod_func_int64_t_s_s(((l_1559 , (func_60((g_76.f5 != (((((*l_1561) = (l_1560 , g_1364)) != ((1L | (safe_div_func_uint16_t_u_u((safe_add_func_uint16_t_u_u((255UL | g_836[6][2][0].f4), (*g_78))), (*l_1388)))) == p_7.f1)) >= p_7.f7) && (**g_1542))), &g_219[1][2], l_1566, (*p_5)) , (*g_1241))) != l_1560.f0), (*g_1241))) >= g_668[1][2].f2.f0)) || 0x3461L) , 0xFA15L) <= p_7.f5);
                    return l_1568;
                }
                for (g_53 = 0; (g_53 >= 0); g_53 -= 1)
                { 
                    int32_t l_1575 = 0x694DFE6DL;
                    int16_t *l_1576 = &g_1577;
                    int8_t *l_1602 = &g_942[1].f2.f7;
                    uint32_t ****l_1606[7];
                    uint32_t *****l_1605 = &l_1606[6];
                    int i;
                    for (i = 0; i < 7; i++)
                        l_1606[i] = &l_1480;
                    (*l_1388) = (((safe_div_func_uint16_t_u_u((**g_1542), (safe_mod_func_uint16_t_u_u((**g_1542), (safe_add_func_uint16_t_u_u(l_1575, ((*l_1576) = (*g_78)))))))) , ((void*)0 == g_802)) | (((((safe_mod_func_int16_t_s_s(((safe_mod_func_uint8_t_u_u((((safe_mul_func_uint16_t_u_u((((((safe_lshift_func_uint8_t_u_u(((*g_110) = (*g_110)), 4)) || l_1586) == p_7.f6) , g_1017[0].f7) && 255UL), (*g_78))) > p_8) < 5UL), 0x59L)) && 0x5F9E5A63L), l_1586)) , l_1586) < p_7.f2) < p_7.f1) == l_1586));
                    (*l_1388) ^= ((safe_unary_minus_func_uint32_t_u(1UL)) == (safe_mod_func_int32_t_s_s((((*l_1487) = (safe_add_func_uint64_t_u_u(g_1181.f2.f1, (safe_mod_func_int16_t_s_s((((safe_lshift_func_int16_t_s_s(((safe_rshift_func_uint8_t_u_s(((*g_78) & (safe_rshift_func_int16_t_s_s((safe_lshift_func_int16_t_s_u((-1L), 14)), (*g_78)))), 0)) < ((*l_1602) = 0xFBL)), (((safe_rshift_func_uint16_t_u_s(((l_1608[0][3][3] &= ((*g_1241) = (l_1605 == g_1607))) < p_7.f4), 10)) , &g_1197[0]) == (void*)0))) , (void*)0) != (void*)0), p_7.f4))))) || (**g_1542)), p_7.f2)));
                }
                return p_5;
            }
        }
    }
    else
    { 
        struct S0 ****l_1610 = &g_1019;
        struct S0 *****l_1609 = &l_1610;
        int32_t *l_1611 = &l_1468;
        uint32_t *l_1625 = &g_1017[0].f3;
        uint32_t **l_1624 = &l_1625;
        uint32_t *** const l_1623 = &l_1624;
        struct S2 *l_1628 = &g_668[1][2];
        (*l_1609) = &g_1019;
        l_1611 = l_1611;
        if (p_7.f0)
        { 
            (*l_1611) = (safe_rshift_func_int16_t_s_u((safe_sub_func_uint16_t_u_u(8UL, (safe_mul_func_uint16_t_u_u((~(&g_552 != ((l_1619 != g_1621[0][0][4]) , l_1623))), (safe_sub_func_int32_t_s_s(p_7.f7, (-1L))))))), (*g_1543)));
            (*g_1020) = &p_7;
            l_1609 = &l_1610;
        }
        else
        { 
            struct S2 **l_1629 = (void*)0;
            struct S2 **l_1630 = &l_1628;
            (*l_1630) = l_1628;
        }
        (*l_1611) = ((*l_1388) = (-10L));
    }
    (*l_1634) |= (safe_rshift_func_int8_t_s_s(3L, (*l_1388)));
    return p_5;
}



static uint64_t  func_18(int8_t  p_19, uint32_t  p_20)
{ 
    struct S1 l_23[2][7][4] = {{{{3L},{0L},{3L},{3L}},{{0L},{0L},{0x200D40A7L},{0L}},{{0L},{3L},{3L},{0L}},{{3L},{0L},{3L},{3L}},{{0L},{0L},{0x200D40A7L},{0L}},{{0L},{3L},{3L},{0L}},{{3L},{0L},{3L},{3L}}},{{{0L},{0L},{0x200D40A7L},{0L}},{{0L},{3L},{3L},{0L}},{{3L},{0L},{3L},{3L}},{{0L},{0L},{0x200D40A7L},{0L}},{{0L},{3L},{3L},{0L}},{{3L},{0L},{3L},{3L}},{{0L},{0L},{0x200D40A7L},{0L}}}};
    int32_t l_28 = 0xF3922CBDL;
    union U4 *l_41 = &g_42;
    uint64_t *l_65 = &g_22.f1;
    union U3 l_1021 = {0x19F0L};
    uint16_t l_1282[3];
    uint16_t * const *l_1293 = (void*)0;
    uint16_t **l_1294 = (void*)0;
    int32_t *l_1319 = &l_28;
    int16_t *l_1334[3][5] = {{&g_79,&g_79,&g_79,&g_79,&g_79},{&g_53,&g_53,&g_53,&g_53,&g_53},{&g_79,&g_79,&g_79,&g_79,&g_79}};
    int16_t **l_1333 = &l_1334[2][3];
    int8_t l_1336 = 0x63L;
    int8_t l_1348[2];
    struct S0 **l_1376 = &g_835[3][0];
    int i, j, k;
    for (i = 0; i < 3; i++)
        l_1282[i] = 6UL;
    for (i = 0; i < 2; i++)
        l_1348[i] = (-9L);
    for (p_19 = 1; (p_19 >= 0); p_19 -= 1)
    { 
        int32_t *l_24 = &g_25;
        int32_t l_26 = (-1L);
        int32_t *l_27 = &l_26;
        int32_t *l_29 = &l_28;
        int32_t *l_30 = (void*)0;
        int32_t *l_31 = &g_25;
        int32_t *l_32[1][1];
        uint64_t *l_66 = &g_22.f1;
        int16_t *l_74 = (void*)0;
        struct S2 *l_1328 = &g_76;
        struct S2 **l_1327 = &l_1328;
        uint8_t l_1339 = 254UL;
        uint32_t l_1367 = 18446744073709551615UL;
        struct S0 **l_1374 = &g_835[3][0];
        int i, j;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 1; j++)
                l_32[i][j] = &g_25;
        }
        g_33++;
        for (g_22.f1 = 0; (g_22.f1 <= 1); g_22.f1 += 1)
        { 
            union U4 *l_43[1][4];
            uint64_t *l_45 = (void*)0;
            uint64_t *l_46 = &g_42.f1;
            uint64_t *l_47 = (void*)0;
            uint64_t *l_48[5][3][4] = {{{&g_22.f1,&g_22.f1,&g_22.f1,&g_22.f1},{&g_22.f1,&g_22.f1,&g_22.f1,&g_22.f1},{&g_22.f1,&g_22.f1,(void*)0,&g_22.f1}},{{&g_22.f1,&g_22.f1,&g_22.f1,&g_22.f1},{&g_22.f1,&g_22.f1,&g_22.f1,&g_22.f1},{&g_22.f1,&g_22.f1,(void*)0,&g_22.f1}},{{&g_22.f1,&g_22.f1,&g_22.f1,&g_22.f1},{&g_22.f1,&g_22.f1,&g_22.f1,&g_22.f1},{&g_22.f1,&g_22.f1,(void*)0,&g_22.f1}},{{&g_22.f1,&g_22.f1,&g_22.f1,&g_22.f1},{&g_22.f1,&g_22.f1,&g_22.f1,&g_22.f1},{&g_22.f1,&g_22.f1,(void*)0,&g_22.f1}},{{&g_22.f1,&g_22.f1,&g_22.f1,&g_22.f1},{&g_22.f1,&g_22.f1,&g_22.f1,&g_22.f1},{&g_22.f1,&g_22.f1,(void*)0,&g_22.f1}}};
            int16_t *l_52 = &g_53;
            struct S0 l_1273 = {0x6DL,-1L,0x07D025E86B66FED6LL,4294967295UL,1UL,0x156EB260L,-1L,9L};
            const struct S2 * const l_1276 = &g_668[1][2];
            const struct S1 l_1280 = {0x803AC507L};
            int32_t *l_1290[5] = {&g_3,&g_3,&g_3,&g_3,&g_3};
            int32_t **l_1320[6] = {&l_1290[1],&l_1290[1],&l_1290[1],&l_1290[1],&l_1290[1],&l_1290[1]};
            const int16_t l_1372 = (-7L);
            int i, j, k;
            for (i = 0; i < 1; i++)
            {
                for (j = 0; j < 4; j++)
                    l_43[i][j] = &g_42;
            }
            if ((+(safe_div_func_int16_t_s_s(((*l_52) = (safe_div_func_uint64_t_u_u(((l_41 = (void*)0) == l_43[0][0]), (+(g_49--))))), (func_54(func_60(g_22.f0, l_65, l_66, func_67(func_71(l_74, ((p_20 && 0xA5L) , 0xC9657A47L)), g_903, p_20)), (*l_29), &l_28, p_19, l_1021) , p_19)))))
            { 
                struct S1 *l_1281 = &g_159;
                if ((l_1273 , (safe_mul_func_int8_t_s_s(g_836[6][2][0].f1, p_20))))
                { 
                    (*g_1020) = &l_1273;
                }
                else
                { 
                    const struct S2 *l_1278 = &g_942[1];
                    const struct S2 **l_1277[4][7][6] = {{{(void*)0,&l_1278,&l_1278,&l_1278,&l_1278,&l_1278},{&l_1278,&l_1278,&l_1278,&l_1278,&l_1278,&l_1278},{&l_1278,&l_1278,&l_1278,(void*)0,&l_1278,&l_1278},{&l_1278,&l_1278,&l_1278,&l_1278,&l_1278,&l_1278},{&l_1278,&l_1278,&l_1278,&l_1278,(void*)0,&l_1278},{&l_1278,(void*)0,&l_1278,&l_1278,&l_1278,&l_1278},{&l_1278,&l_1278,&l_1278,&l_1278,&l_1278,&l_1278}},{{&l_1278,&l_1278,&l_1278,&l_1278,&l_1278,&l_1278},{&l_1278,&l_1278,&l_1278,&l_1278,&l_1278,&l_1278},{(void*)0,&l_1278,&l_1278,&l_1278,&l_1278,&l_1278},{&l_1278,&l_1278,&l_1278,&l_1278,&l_1278,&l_1278},{&l_1278,&l_1278,&l_1278,(void*)0,&l_1278,&l_1278},{&l_1278,&l_1278,&l_1278,&l_1278,&l_1278,&l_1278},{&l_1278,&l_1278,&l_1278,&l_1278,(void*)0,&l_1278}},{{&l_1278,(void*)0,&l_1278,&l_1278,&l_1278,&l_1278},{&l_1278,&l_1278,&l_1278,&l_1278,&l_1278,&l_1278},{&l_1278,&l_1278,&l_1278,&l_1278,&l_1278,&l_1278},{&l_1278,&l_1278,&l_1278,&l_1278,&l_1278,&l_1278},{(void*)0,&l_1278,&l_1278,&l_1278,&l_1278,&l_1278},{&l_1278,&l_1278,&l_1278,&l_1278,&l_1278,&l_1278},{&l_1278,&l_1278,&l_1278,&l_1278,&l_1278,&l_1278}},{{&l_1278,&l_1278,&l_1278,&l_1278,&l_1278,&l_1278},{&l_1278,&l_1278,&l_1278,&l_1278,&l_1278,&l_1278},{&l_1278,&l_1278,&l_1278,&l_1278,&l_1278,&l_1278},{&l_1278,&l_1278,&l_1278,&l_1278,&l_1278,&l_1278},{&l_1278,&l_1278,&l_1278,&l_1278,&l_1278,&l_1278},{&l_1278,&l_1278,&l_1278,&l_1278,&l_1278,&l_1278},{&l_1278,&l_1278,&l_1278,&l_1278,&l_1278,&l_1278}}};
                    const struct S2 **l_1279 = &l_1278;
                    int i, j, k;
                    (*l_1279) = l_1276;
                }
                (*l_1281) = l_1280;
                l_1282[1]--;
            }
            else
            { 
                struct S1 l_1285 = {1L};
                struct S1 *l_1286[4];
                int i;
                for (i = 0; i < 4; i++)
                    l_1286[i] = &g_903;
                g_159 = l_1285;
                g_1287 ^= p_20;
            }
            for (g_1181.f2.f3 = 0; (g_1181.f2.f3 <= 1); g_1181.f2.f3 += 1)
            { 
                int32_t **l_1288 = (void*)0;
                int32_t **l_1289[2][7] = {{(void*)0,(void*)0,&l_24,&l_30,&l_24,(void*)0,(void*)0},{(void*)0,&l_24,&l_30,&l_24,(void*)0,(void*)0,&l_24}};
                int i, j;
                l_1290[1] = (g_85[1][0] = &g_362[0][1]);
                for (p_20 = 0; (p_20 <= 1); p_20 += 1)
                { 
                    return p_20;
                }
            }
            (*l_24) |= (safe_mod_func_int8_t_s_s((l_1293 == l_1294), (safe_mul_func_int8_t_s_s((safe_add_func_int32_t_s_s((safe_add_func_uint32_t_u_u(((safe_rshift_func_int8_t_s_s((safe_div_func_int64_t_s_s(0x78128959263E8D31LL, (safe_sub_func_int8_t_s_s((safe_div_func_uint16_t_u_u((safe_rshift_func_int16_t_s_s(((void*)0 == &g_85[0][2]), (safe_mul_func_int16_t_s_s((*g_78), (((safe_rshift_func_int8_t_s_s((safe_add_func_int8_t_s_s((safe_mul_func_int16_t_s_s(p_19, g_836[6][2][0].f7)), p_20)), p_19)) , p_19) , 65533UL))))), g_212[2][3][0])), 253UL)))), 7)) ^ (*g_1241)), 0UL)), l_1021.f2)), l_1282[1]))));
            g_85[1][0] = l_1319;
            if (p_20)
                continue;
            for (l_1273.f0 = 0; (l_1273.f0 <= 1); l_1273.f0 += 1)
            { 
                int8_t l_1323 = 0xFFL;
                int32_t l_1359 = (-1L);
                int32_t l_1361[2];
                int8_t l_1363 = 0L;
                int32_t *l_1373 = (void*)0;
                struct S0 ***l_1375[7];
                union U4 *****l_1377[3];
                int i;
                for (i = 0; i < 2; i++)
                    l_1361[i] = 0x56A79B73L;
                for (i = 0; i < 7; i++)
                    l_1375[i] = &l_1374;
                for (i = 0; i < 3; i++)
                    l_1377[i] = &g_585;
                if (((p_19 == p_19) , 0x6F41E566L))
                { 
                    const int8_t l_1324 = 0x23L;
                    const struct S2 *l_1330 = &g_668[0][0];
                    const struct S2 **l_1329[6] = {&l_1330,&l_1330,&l_1330,&l_1330,&l_1330,&l_1330};
                    int16_t ***l_1335 = &l_1333;
                    int i;
                    (*l_27) = ((*l_31) = ((((safe_rshift_func_int16_t_s_s(((p_20 && ((*l_1319) = ((*g_110) = (*g_110)))) > (*g_78)), ((*l_52) = (*g_78)))) < ((p_19 ^ (*l_31)) == l_1323)) & l_1324) == l_1282[1]));
                    g_85[1][0] = &l_26;
                    (*l_29) = ((((l_1327 == l_1329[0]) < (((l_1324 == p_20) , (safe_lshift_func_int16_t_s_s((((*l_1335) = l_1333) == &g_78), l_1336))) >= p_20)) >= g_942[1].f2.f0) , 0L);
                }
                else
                { 
                    uint16_t *l_1343 = &g_1181.f2.f4;
                    int32_t l_1357 = (-1L);
                    int32_t l_1358 = 0xF9CBE105L;
                    int32_t l_1360 = 0x3FE11756L;
                    int32_t l_1362 = 0x0C562963L;
                    int32_t l_1365 = 0xEFA82762L;
                    int32_t l_1366 = 0L;
                    (*l_29) = (safe_add_func_uint32_t_u_u((l_1339 = (*l_1319)), (!((((safe_rshift_func_uint16_t_u_u((--(*l_1343)), (((**g_552)++) ^ l_1348[1]))) , 0x95961AE2L) , ((safe_rshift_func_uint16_t_u_s((*l_27), (safe_mul_func_uint8_t_u_u(255UL, (safe_div_func_int16_t_s_s((g_942[1].f1 | ((safe_lshift_func_int16_t_s_u((l_1357 = 0x3A39L), g_76.f6)) && l_1323)), 0x5E47L)))))) == (*l_1319))) | p_20))));
                    l_1367++;
                    (*l_27) ^= (safe_mul_func_uint8_t_u_u(l_1372, (-1L)));
                    l_1373 = &g_3;
                }
                for (g_1181.f7 = 0; (g_1181.f7 <= 1); g_1181.f7 += 1)
                { 
                    return g_340.f3;
                }
                l_1376 = l_1374;
                g_584 = l_1377[2];
            }
        }
    }
    for (g_340.f1 = 0; (g_340.f1 <= 1); g_340.f1 += 1)
    { 
        uint64_t l_1378 = 0UL;
        return l_1378;
    }
    (*l_1319) = (safe_unary_minus_func_int64_t_s((*l_1319)));
    return p_20;
}



static struct S1  func_54(struct S1  p_55, uint32_t  p_56, int32_t * p_57, int64_t  p_58, union U3  p_59)
{ 
    uint8_t l_1022 = 0xFFL;
    int16_t *l_1029[3][3][7] = {{{&g_79,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&g_79,&g_79,(void*)0,(void*)0,(void*)0,(void*)0,&g_79},{&g_79,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{&g_79,&g_79,(void*)0,(void*)0,(void*)0,(void*)0,&g_79},{&g_79,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&g_79,&g_79,(void*)0,(void*)0,(void*)0,(void*)0,&g_79}},{{&g_79,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&g_79,&g_79,(void*)0,(void*)0,(void*)0,(void*)0,&g_79},{&g_79,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}}};
    int32_t *l_1031 = &g_25;
    int32_t l_1103 = (-10L);
    int32_t l_1106 = 1L;
    int32_t l_1110[5][3] = {{0x46164B00L,1L,0x46164B00L},{0x6A0C1F32L,2L,0x6A0C1F32L},{0x46164B00L,1L,0x46164B00L},{0x6A0C1F32L,2L,0x6A0C1F32L},{0x46164B00L,1L,0x46164B00L}};
    int8_t l_1129 = 0x01L;
    const uint32_t l_1147 = 0x72ABEDF8L;
    struct S0 l_1200 = {251UL,-1L,18446744073709551607UL,4294967295UL,0x783DL,4UL,0x9147L,0x7CL};
    union U4 *****l_1258[5][3][6] = {{{&g_585,&g_585,&g_585,&g_585,(void*)0,&g_585},{&g_585,(void*)0,&g_585,&g_585,&g_585,&g_585},{&g_585,&g_585,&g_585,(void*)0,&g_585,&g_585}},{{&g_585,(void*)0,(void*)0,(void*)0,(void*)0,&g_585},{&g_585,&g_585,(void*)0,&g_585,&g_585,&g_585},{&g_585,&g_585,&g_585,&g_585,(void*)0,&g_585}},{{&g_585,(void*)0,(void*)0,&g_585,&g_585,(void*)0},{&g_585,&g_585,&g_585,(void*)0,&g_585,&g_585},{&g_585,&g_585,(void*)0,(void*)0,&g_585,&g_585}},{{&g_585,&g_585,(void*)0,&g_585,&g_585,&g_585},{(void*)0,&g_585,&g_585,(void*)0,&g_585,(void*)0},{(void*)0,&g_585,(void*)0,&g_585,&g_585,(void*)0}},{{&g_585,&g_585,&g_585,(void*)0,&g_585,&g_585},{&g_585,&g_585,(void*)0,(void*)0,&g_585,&g_585},{&g_585,&g_585,(void*)0,&g_585,&g_585,&g_585}}};
    struct S0 *l_1270 = &g_1271[2][4];
    struct S1 l_1272 = {1L};
    int i, j, k;
    --l_1022;
    for (g_635.f2 = 0; (g_635.f2 >= 59); g_635.f2 = safe_add_func_uint32_t_u_u(g_635.f2, 1))
    { 
        int32_t *l_1027 = (void*)0;
        int32_t l_1028 = 0x0E6222F9L;
        union U3 *l_1037[5][2] = {{(void*)0,&g_340},{&g_340,(void*)0},{&g_340,&g_340},{(void*)0,&g_340},{&g_340,(void*)0}};
        union U3 **l_1036 = &l_1037[4][1];
        int32_t l_1119 = (-3L);
        int32_t l_1122 = 0x9FE73155L;
        int32_t l_1123 = 0x1BB03579L;
        int32_t l_1125 = 0xC7DDF1C6L;
        int32_t l_1126 = (-1L);
        int32_t l_1127 = 0xF622456DL;
        int32_t l_1128[6] = {1L,1L,1L,1L,1L,1L};
        int64_t l_1130[5][3][7] = {{{0x52C38063638C137BLL,(-1L),0x788B6E5278ED8246LL,0L,0L,0x788B6E5278ED8246LL,(-1L)},{0xAA79BEE69E19B9ABLL,(-1L),0x01FF205372BF36C6LL,(-3L),1L,0xAA79BEE69E19B9ABLL,0xE26909E23F462060LL},{0x516FC04864193EE0LL,0xAA79BEE69E19B9ABLL,1L,0x788B6E5278ED8246LL,0xE26909E23F462060LL,(-10L),0L}},{{0x9DF3567895430C6FLL,0L,0xAB904C27B6BB21A0LL,(-3L),0xE8653A02D80E2148LL,1L,1L},{0L,0L,0xF312F5B8D0A00759LL,0L,0L,1L,1L},{(-10L),1L,0x788B6E5278ED8246LL,0xE8653A02D80E2148LL,0xAB904C27B6BB21A0LL,(-10L),1L}},{{0xAA79BEE69E19B9ABLL,0xE26909E23F462060LL,7L,4L,0x2F1A010F3D8058D1LL,0xAA79BEE69E19B9ABLL,(-8L)},{(-10L),0xE8653A02D80E2148LL,0xAA79BEE69E19B9ABLL,0x788B6E5278ED8246LL,(-8L),0x788B6E5278ED8246LL,0xAA79BEE69E19B9ABLL},{0L,0L,0xAA79BEE69E19B9ABLL,0x01FF205372BF36C6LL,1L,(-9L),1L}},{{0x9DF3567895430C6FLL,0xAB904C27B6BB21A0LL,7L,1L,0L,4L,0xE8653A02D80E2148LL},{0x516FC04864193EE0LL,0x2F1A010F3D8058D1LL,0x788B6E5278ED8246LL,0xAB904C27B6BB21A0LL,1L,0x52C38063638C137BLL,0x2F1A010F3D8058D1LL},{0xAA79BEE69E19B9ABLL,(-8L),0xF312F5B8D0A00759LL,0xF312F5B8D0A00759LL,(-8L),0xAA79BEE69E19B9ABLL,0x2F1A010F3D8058D1LL}},{{0x52C38063638C137BLL,1L,0xAB904C27B6BB21A0LL,0x788B6E5278ED8246LL,0x2F1A010F3D8058D1LL,0x516FC04864193EE0LL,0xE8653A02D80E2148LL},{4L,0L,1L,7L,0xAB904C27B6BB21A0LL,0x9DF3567895430C6FLL,1L},{(-9L),1L,0x01FF205372BF36C6LL,0xAA79BEE69E19B9ABLL,0L,0L,0xAA79BEE69E19B9ABLL}}};
        struct S2 *l_1180[4][3][6] = {{{&g_668[1][2],&g_668[1][2],(void*)0,&g_668[1][2],&g_668[1][2],(void*)0},{&g_668[1][2],&g_668[1][2],(void*)0,&g_668[1][2],&g_668[1][2],(void*)0},{&g_668[1][2],&g_668[1][2],(void*)0,&g_668[1][2],&g_668[1][2],(void*)0}},{{&g_942[1],&g_942[1],&g_668[1][2],&g_942[1],&g_942[1],&g_668[1][2]},{&g_942[1],&g_942[1],&g_668[1][2],&g_942[1],&g_942[1],&g_668[1][2]},{&g_942[1],&g_942[1],&g_668[1][2],&g_942[1],&g_942[1],&g_668[1][2]}},{{&g_942[1],&g_942[1],&g_668[1][2],&g_942[1],&g_942[1],&g_668[1][2]},{&g_942[1],&g_942[1],&g_668[1][2],&g_942[1],&g_942[1],&g_668[1][2]},{&g_942[1],&g_942[1],&g_668[1][2],&g_942[1],&g_942[1],&g_668[1][2]}},{{&g_942[1],&g_942[1],&g_668[1][2],&g_942[1],&g_942[1],&g_668[1][2]},{&g_942[1],&g_942[1],&g_668[1][2],&g_942[1],&g_942[1],&g_668[1][2]},{&g_942[1],&g_942[1],&g_668[1][2],&g_942[1],&g_942[1],&g_668[1][2]}}};
        struct S1 l_1182 = {0xB084CCD7L};
        struct S0 l_1188 = {1UL,0L,0UL,0x17F19526L,6UL,7UL,0xA54BL,1L};
        uint64_t *l_1254 = &g_668[1][2].f1;
        int i, j, k;
        g_85[1][0] = l_1027;
        for (g_340.f1 = 5; (g_340.f1 >= 1); g_340.f1 -= 1)
        { 
            if (l_1028)
                break;
            return g_903;
        }
    }
    return l_1272;
}



static struct S1  func_60(const int32_t  p_61, uint64_t * p_62, uint64_t * p_63, const union U4  p_64)
{ 
    struct S0 *l_968[3][5] = {{&g_76.f2,&g_76.f2,(void*)0,&g_76.f2,&g_76.f2},{&g_836[1][4][0],&g_76.f2,&g_836[1][4][0],&g_836[1][4][0],&g_76.f2},{&g_76.f2,&g_836[1][4][0],&g_836[1][4][0],&g_76.f2,&g_836[1][4][0]}};
    struct S0 **l_969 = (void*)0;
    struct S0 **l_970[2];
    int32_t l_974[1];
    uint16_t l_996 = 0x97A1L;
    struct S1 l_997[3] = {{0xEDDEE285L},{0xEDDEE285L},{0xEDDEE285L}};
    int i, j;
    for (i = 0; i < 2; i++)
        l_970[i] = &g_835[3][0];
    for (i = 0; i < 1; i++)
        l_974[i] = 0xF239105DL;
    g_835[1][0] = l_968[2][0];
    for (g_340.f0 = 3; (g_340.f0 < 30); g_340.f0++)
    { 
        int64_t l_973 = 1L;
        int32_t l_975 = (-4L);
        struct S0 l_980 = {0x35L,1L,18446744073709551615UL,8UL,1UL,4294967295UL,0x3F6CL,0L};
        const union U4 l_990 = {1UL};
        int32_t l_1009 = 0L;
        struct S0 *l_1016 = &g_1017[0];
        if (l_973)
            break;
        l_975 ^= l_974[0];
        for (l_973 = (-1); (l_973 <= (-17)); l_973--)
        { 
            union U3 *l_994 = &g_340;
            union U3 ** const l_993 = &l_994;
            union U4 l_1001 = {18446744073709551615UL};
            union U4 **l_1006 = &g_473;
            int8_t *l_1007[1];
            int32_t l_1008 = 1L;
            struct S0 *l_1015 = &g_836[3][4][0];
            int32_t *l_1018 = &g_362[0][1];
            int i;
            for (i = 0; i < 1; i++)
                l_1007[i] = (void*)0;
            for (g_895 = 0; (g_895 > 25); g_895 = safe_add_func_int16_t_s_s(g_895, 2))
            { 
                int64_t l_995 = 1L;
                struct S1 *l_998 = &l_997[1];
                for (g_33 = 0; (g_33 <= 2); g_33 += 1)
                { 
                    const struct S1 l_981 = {0xA17C2041L};
                    struct S1 *l_982 = &g_159;
                    uint32_t l_985 = 0x695ADD38L;
                    int i, j;
                    (*l_982) = (l_980 , l_981);
                    l_996 ^= (safe_add_func_int16_t_s_s(l_985, (safe_sub_func_int64_t_s_s(((1L || (0UL & (((safe_mod_func_uint32_t_u_u(0x693D7AB1L, (g_942[1].f2.f2 , (l_990 , ((safe_sub_func_uint32_t_u_u(((void*)0 != l_993), p_61)) , 1L))))) , (*g_78)) || (*g_78)))) && l_981.f0), l_995))));
                    return l_997[2];
                }
                (*l_998) = l_997[1];
            }
            l_1009 = (safe_div_func_uint8_t_u_u((*g_110), (l_1008 ^= (l_974[0] = ((l_975 = (p_61 == (l_1001 , ((safe_rshift_func_uint16_t_u_s(((0xC3B9L ^ ((*g_78) < (safe_lshift_func_int16_t_s_u(((void*)0 != l_1006), 4)))) > 0x7A11C809L), 2)) == l_997[2].f0)))) == l_1001.f0)))));
            (*l_1018) |= (g_76.f2.f4 && ((g_942[1].f6 , ((((safe_mod_func_int8_t_s_s(9L, (safe_rshift_func_int16_t_s_u((~(0x1A0856FD7D298442LL != ((((l_1016 = l_1015) != (void*)0) < 5L) || p_64.f0))), 12)))) < 0x0526CFB1L) <= l_974[0]) < p_61)) | (*g_110)));
        }
        g_1019 = &l_969;
    }
    return g_159;
}



static union U4  func_67(struct S0  p_68, struct S1  p_69, const uint32_t  p_70)
{ 
    int64_t l_916 = 1L;
    int32_t l_922 = 0xFD1E43EDL;
    int32_t l_923 = 0x07575C0EL;
    int32_t l_924[3];
    int16_t l_934[7] = {(-1L),(-1L),0xEAB2L,(-1L),(-1L),0xEAB2L,(-1L)};
    struct S0 *l_953[1];
    const struct S1 l_956 = {0x6D503C3BL};
    int8_t *l_964 = &g_836[6][2][0].f7;
    int16_t l_965 = 0x7660L;
    int32_t ***l_966 = &g_573;
    union U4 l_967 = {0x5D46160BL};
    int i;
    for (i = 0; i < 3; i++)
        l_924[i] = 0xBC693FCEL;
    for (i = 0; i < 1; i++)
        l_953[i] = (void*)0;
    for (g_340.f0 = 0; (g_340.f0 != 21); g_340.f0 = safe_add_func_uint16_t_u_u(g_340.f0, 7))
    { 
        uint16_t l_906 = 0xA7E1L;
        int32_t *l_909 = &g_362[0][1];
        int32_t *l_910 = &g_362[1][0];
        int32_t *l_911 = &g_362[0][1];
        int32_t *l_912 = &g_362[3][1];
        int32_t *l_913 = &g_25;
        int32_t *l_914 = &g_362[0][1];
        int32_t *l_915 = &g_362[0][1];
        int32_t *l_917 = &g_362[0][1];
        int32_t *l_918 = &g_362[0][1];
        int32_t *l_919 = &g_362[1][4];
        int32_t *l_920 = (void*)0;
        int32_t *l_921[3];
        int32_t l_932 = (-9L);
        struct S2 *l_941 = &g_942[1];
        uint64_t *l_947 = (void*)0;
        int i;
        for (i = 0; i < 3; i++)
            l_921[i] = &g_25;
        --l_906;
        --g_925;
        for (l_923 = 0; (l_923 > (-9)); l_923 = safe_sub_func_uint8_t_u_u(l_923, 5))
        { 
            struct S2 *l_939 = (void*)0;
            (*l_918) = (safe_lshift_func_int16_t_s_u(l_932, 1));
            if (l_923)
                continue;
            for (g_79 = 0; (g_79 <= 1); g_79 += 1)
            { 
                int32_t l_933 = 6L;
                int8_t l_935 = 0x0CL;
                uint32_t l_936 = 0xE3D8A8FEL;
                ++l_936;
                for (g_76.f2.f7 = 0; (g_76.f2.f7 >= 0); g_76.f2.f7 -= 1)
                { 
                    struct S2 **l_940[1][6][7] = {{{&l_939,&l_939,(void*)0,&l_939,(void*)0,&l_939,&l_939},{&l_939,&l_939,(void*)0,&l_939,(void*)0,&l_939,&l_939},{&l_939,&l_939,&l_939,&l_939,(void*)0,&l_939,&l_939},{&l_939,&l_939,(void*)0,&l_939,(void*)0,&l_939,&l_939},{&l_939,&l_939,(void*)0,&l_939,(void*)0,&l_939,&l_939},{&l_939,&l_939,&l_939,&l_939,(void*)0,&l_939,&l_939}}};
                    uint64_t **l_948[1][2];
                    int i, j, k;
                    for (i = 0; i < 1; i++)
                    {
                        for (j = 0; j < 2; j++)
                            l_948[i][j] = &l_947;
                    }
                    l_941 = (l_939 = l_939);
                    l_922 ^= ((*l_912) ^= (safe_mod_func_uint8_t_u_u((((safe_add_func_uint8_t_u_u(((l_947 = l_947) == &g_212[(g_76.f2.f7 + 5)][(g_79 + 2)][g_76.f2.f7]), g_219[(g_76.f2.f7 + 1)][(g_79 + 2)])) || p_68.f6) , (~(*l_913))), (*g_110))));
                    if (l_916)
                        continue;
                    if (p_69.f0)
                        continue;
                }
                for (g_76.f1 = 0; (g_76.f1 <= 1); g_76.f1 += 1)
                { 
                    union U4 l_950 = {2UL};
                    return l_950;
                }
            }
        }
        for (g_76.f0 = (-3); (g_76.f0 == 44); ++g_76.f0)
        { 
            struct S0 **l_954 = &l_953[0];
            (*l_954) = l_953[0];
        }
    }
    l_922 &= ((l_923 < (~(l_956 , (((l_924[2] | (safe_div_func_uint64_t_u_u((safe_rshift_func_uint8_t_u_u(((safe_sub_func_int64_t_s_s((p_69.f0 <= ((safe_unary_minus_func_int8_t_s(((*l_964) = p_68.f6))) & (p_68 , (l_924[2] , p_68.f0)))), 0x8AF476AC5B0CD840LL)) >= p_68.f7), 0)), 0x2B3A94A2BC11BC0ELL))) & l_934[4]) >= g_942[1].f2.f0)))) ^ l_965);
    (*l_966) = &g_860;
    return l_967;
}



static struct S0  func_71(int16_t * p_72, int32_t  p_73)
{ 
    int32_t l_75 = 0xCB2CC256L;
    struct S0 l_77[1] = {{0xF9L,0xE7L,18446744073709551615UL,0UL,0xA587L,4294967293UL,0xA7FAL,1L}};
    int32_t l_80 = 0L;
    int32_t *l_84 = (void*)0;
    int32_t **l_83[3];
    uint32_t l_293 = 0xEF9D2DDEL;
    uint32_t l_311 = 0x3186D76BL;
    struct S1 l_332 = {0xE0C87FF6L};
    int32_t *l_335[5];
    union U4 * const l_379[3][7] = {{&g_22,&g_22,&g_22,&g_42,&g_42,&g_22,&g_22},{&g_22,(void*)0,&g_42,&g_42,(void*)0,&g_22,(void*)0},{&g_22,&g_42,&g_42,&g_22,&g_22,&g_22,&g_42}};
    union U4 * const *l_378[3][4][1] = {{{(void*)0},{&l_379[1][5]},{(void*)0},{&l_379[1][4]}},{{(void*)0},{&l_379[1][5]},{(void*)0},{&l_379[1][5]}},{{(void*)0},{&l_379[1][4]},{(void*)0},{&l_379[1][5]}}};
    union U4 * const **l_377 = &l_378[2][0][0];
    union U4 * const ***l_376 = &l_377;
    union U4 * const ****l_375 = &l_376;
    struct S2 l_390 = {4UL,0xC69FB1676A14793BLL,{1UL,-1L,0x48990E4EEFF9F136LL,0x071BA42BL,0UL,0xFAF08C80L,0xB57EL,0x70L},0L,0xA0L,2L,0L,4294967293UL};
    uint64_t l_436 = 1UL;
    int16_t *l_517 = &g_79;
    int8_t l_519 = 0x4FL;
    int32_t l_592 = 0xA0122B15L;
    int8_t l_593 = 0x77L;
    uint32_t l_594 = 0xAE7C080AL;
    union U3 l_612 = {65535UL};
    uint32_t *l_614[5];
    uint32_t ** const l_613 = &l_614[4];
    int8_t l_637 = 0x1CL;
    uint32_t l_683[6];
    int32_t *l_719 = &l_80;
    struct S0 l_732[6][5] = {{{255UL,0x12L,0x4E6EFE7C0CA36DA2LL,6UL,1UL,0x169A7D5CL,1L,0x4CL},{0xCCL,0x3AL,0x47ECEFB369B08170LL,0x66729101L,8UL,0xC2FE0C6EL,0xF8FAL,0L},{6UL,1L,0x2079A7D98C05E737LL,4294967295UL,0x2FAAL,0x0825601CL,-1L,0x6EL},{0xCCL,0x3AL,0x47ECEFB369B08170LL,0x66729101L,8UL,0xC2FE0C6EL,0xF8FAL,0L},{255UL,0x12L,0x4E6EFE7C0CA36DA2LL,6UL,1UL,0x169A7D5CL,1L,0x4CL}},{{255UL,0x12L,0x4E6EFE7C0CA36DA2LL,6UL,1UL,0x169A7D5CL,1L,0x4CL},{0xCCL,0x3AL,0x47ECEFB369B08170LL,0x66729101L,8UL,0xC2FE0C6EL,0xF8FAL,0L},{6UL,1L,0x2079A7D98C05E737LL,4294967295UL,0x2FAAL,0x0825601CL,-1L,0x6EL},{0xCCL,0x3AL,0x47ECEFB369B08170LL,0x66729101L,8UL,0xC2FE0C6EL,0xF8FAL,0L},{255UL,0x12L,0x4E6EFE7C0CA36DA2LL,6UL,1UL,0x169A7D5CL,1L,0x4CL}},{{255UL,0x12L,0x4E6EFE7C0CA36DA2LL,6UL,1UL,0x169A7D5CL,1L,0x4CL},{0xCCL,0x3AL,0x47ECEFB369B08170LL,0x66729101L,8UL,0xC2FE0C6EL,0xF8FAL,0L},{6UL,1L,0x2079A7D98C05E737LL,4294967295UL,0x2FAAL,0x0825601CL,-1L,0x6EL},{0xCCL,0x3AL,0x47ECEFB369B08170LL,0x66729101L,8UL,0xC2FE0C6EL,0xF8FAL,0L},{255UL,0x12L,0x4E6EFE7C0CA36DA2LL,6UL,1UL,0x169A7D5CL,1L,0x4CL}},{{255UL,0x12L,0x4E6EFE7C0CA36DA2LL,6UL,1UL,0x169A7D5CL,1L,0x4CL},{0xCCL,0x3AL,0x47ECEFB369B08170LL,0x66729101L,8UL,0xC2FE0C6EL,0xF8FAL,0L},{6UL,1L,0x2079A7D98C05E737LL,4294967295UL,0x2FAAL,0x0825601CL,-1L,0x6EL},{0xCCL,0x3AL,0x47ECEFB369B08170LL,0x66729101L,8UL,0xC2FE0C6EL,0xF8FAL,0L},{255UL,0x12L,0x4E6EFE7C0CA36DA2LL,6UL,1UL,0x169A7D5CL,1L,0x4CL}},{{255UL,0x12L,0x4E6EFE7C0CA36DA2LL,6UL,1UL,0x169A7D5CL,1L,0x4CL},{0xCCL,0x3AL,0x47ECEFB369B08170LL,0x66729101L,8UL,0xC2FE0C6EL,0xF8FAL,0L},{6UL,1L,0x2079A7D98C05E737LL,4294967295UL,0x2FAAL,0x0825601CL,-1L,0x6EL},{0xCCL,0x3AL,0x47ECEFB369B08170LL,0x66729101L,8UL,0xC2FE0C6EL,0xF8FAL,0L},{255UL,0x12L,0x4E6EFE7C0CA36DA2LL,6UL,1UL,0x169A7D5CL,1L,0x4CL}},{{255UL,0x12L,0x4E6EFE7C0CA36DA2LL,6UL,1UL,0x169A7D5CL,1L,0x4CL},{0xCCL,0x3AL,0x47ECEFB369B08170LL,0x66729101L,8UL,0xC2FE0C6EL,0xF8FAL,0L},{6UL,1L,0x2079A7D98C05E737LL,4294967295UL,0x2FAAL,0x0825601CL,-1L,0x6EL},{0xCCL,0x3AL,0x47ECEFB369B08170LL,0x66729101L,8UL,0xC2FE0C6EL,0xF8FAL,0L},{255UL,0x12L,0x4E6EFE7C0CA36DA2LL,6UL,1UL,0x169A7D5CL,1L,0x4CL}}};
    int32_t *l_734 = &g_362[1][4];
    int64_t l_748 = (-1L);
    int32_t l_749 = 0x84982A0CL;
    uint64_t l_753[7][7][5] = {{{0x4695563D729EA392LL,0x6E779A56FDE2C51FLL,0x35599B9F5C06E851LL,0x2D9887730BEA8D6ALL,0x2D9887730BEA8D6ALL},{18446744073709551615UL,0x2D31383FDBD76135LL,0x35B2BDA5E70AA556LL,18446744073709551615UL,18446744073709551613UL},{0x60AFD35E331471B4LL,0x59BBC247BD426DFDLL,18446744073709551615UL,0x35599B9F5C06E851LL,0x4695563D729EA392LL},{1UL,0xCD3406EC1F9A09D3LL,0x23B37663AF03C292LL,0xE829B96D1C884951LL,0x9CFEB7337F72757ELL},{0x35599B9F5C06E851LL,0xEA64DC09FC73FF69LL,18446744073709551615UL,0x4695563D729EA392LL,18446744073709551615UL},{0UL,0UL,0x35B2BDA5E70AA556LL,0xC8E1DF1B796049F2LL,18446744073709551615UL},{0x6E779A56FDE2C51FLL,0xDC4059798B199B2FLL,0xC18B6F24A9A15EC5LL,18446744073709551613UL,0x2D9887730BEA8D6ALL}},{{4UL,0x40B7EF9DAC08F878LL,0UL,0UL,0x873DAF8C17EBE195LL},{0x1F79BB8BE7914025LL,0xDC4059798B199B2FLL,0x31D1B08DF978D800LL,0x31D1B08DF978D800LL,0xDC4059798B199B2FLL},{0x9CFEB7337F72757ELL,0UL,0xE829B96D1C884951LL,1UL,18446744073709551609UL},{0xF9AF612A1F70E7C5LL,0xEA64DC09FC73FF69LL,0x7726264C9BD0B9E5LL,0x1F79BB8BE7914025LL,18446744073709551613UL},{0xC8E1DF1B796049F2LL,0xCD3406EC1F9A09D3LL,0x873DAF8C17EBE195LL,0x40B7EF9DAC08F878LL,18446744073709551615UL},{0xF9AF612A1F70E7C5LL,0x59BBC247BD426DFDLL,0x6E779A56FDE2C51FLL,0x59BBC247BD426DFDLL,0xF9AF612A1F70E7C5LL},{0x9CFEB7337F72757ELL,0x2D31383FDBD76135LL,18446744073709551615UL,0x873DAF8C17EBE195LL,0UL}},{{0x1F79BB8BE7914025LL,0x60AFD35E331471B4LL,0x4695563D729EA392LL,18446744073709551609UL,0x1417B1473D5E94E5LL},{4UL,0x23B37663AF03C292LL,0x524EF5EB974E930CLL,0x2D31383FDBD76135LL,0UL},{0x6E779A56FDE2C51FLL,18446744073709551609UL,18446744073709551609UL,0x6E779A56FDE2C51FLL,0xF9AF612A1F70E7C5LL},{0UL,0xE829B96D1C884951LL,1UL,18446744073709551609UL,18446744073709551615UL},{0x35599B9F5C06E851LL,0xF9AF612A1F70E7C5LL,1UL,18446744073709551615UL,18446744073709551613UL},{1UL,0x35B2BDA5E70AA556LL,0xCD3406EC1F9A09D3LL,18446744073709551609UL,18446744073709551609UL},{0x60AFD35E331471B4LL,0x35599B9F5C06E851LL,0x60AFD35E331471B4LL,0x6E779A56FDE2C51FLL,0xDC4059798B199B2FLL}},{{0x35B2BDA5E70AA556LL,0xC8E1DF1B796049F2LL,18446744073709551615UL,0x2D31383FDBD76135LL,0x873DAF8C17EBE195LL},{0x31D1B08DF978D800LL,0xC18B6F24A9A15EC5LL,0xF9AF612A1F70E7C5LL,18446744073709551609UL,0x2D9887730BEA8D6ALL},{0x2D31383FDBD76135LL,18446744073709551609UL,18446744073709551615UL,0x873DAF8C17EBE195LL,18446744073709551615UL},{1UL,1UL,0x60AFD35E331471B4LL,0x59BBC247BD426DFDLL,18446744073709551615UL},{18446744073709551615UL,18446744073709551613UL,0xCD3406EC1F9A09D3LL,0x40B7EF9DAC08F878LL,0x9CFEB7337F72757ELL},{0x1417B1473D5E94E5LL,18446744073709551613UL,1UL,0x1F79BB8BE7914025LL,0x4695563D729EA392LL},{0UL,18446744073709551613UL,1UL,1UL,18446744073709551613UL}},{{0x2D9887730BEA8D6ALL,1UL,18446744073709551609UL,0x31D1B08DF978D800LL,0xEA64DC09FC73FF69LL},{0x23B37663AF03C292LL,18446744073709551609UL,0x524EF5EB974E930CLL,0UL,0x40B7EF9DAC08F878LL},{0x59BBC247BD426DFDLL,0xC18B6F24A9A15EC5LL,0x4695563D729EA392LL,18446744073709551613UL,0x6E779A56FDE2C51FLL},{0x23B37663AF03C292LL,0xC8E1DF1B796049F2LL,18446744073709551615UL,0xC8E1DF1B796049F2LL,0x23B37663AF03C292LL},{0x2D9887730BEA8D6ALL,0x35599B9F5C06E851LL,0x6E779A56FDE2C51FLL,0x4695563D729EA392LL,1UL},{0UL,0x35B2BDA5E70AA556LL,0x873DAF8C17EBE195LL,0xE829B96D1C884951LL,4UL},{0x1417B1473D5E94E5LL,0xF9AF612A1F70E7C5LL,0x7726264C9BD0B9E5LL,0x35599B9F5C06E851LL,1UL}},{{18446744073709551615UL,0xE829B96D1C884951LL,0xE829B96D1C884951LL,18446744073709551615UL,0x23B37663AF03C292LL},{1UL,18446744073709551609UL,0x31D1B08DF978D800LL,0xEA64DC09FC73FF69LL,0x6E779A56FDE2C51FLL},{0x2D31383FDBD76135LL,0x23B37663AF03C292LL,0UL,18446744073709551615UL,0x40B7EF9DAC08F878LL},{0x31D1B08DF978D800LL,0x60AFD35E331471B4LL,0xC18B6F24A9A15EC5LL,0xEA64DC09FC73FF69LL,0xEA64DC09FC73FF69LL},{0x35B2BDA5E70AA556LL,0xCD3406EC1F9A09D3LL,0x9CFEB7337F72757ELL,0x35B2BDA5E70AA556LL,0x40B7EF9DAC08F878LL},{0x2D9887730BEA8D6ALL,18446744073709551609UL,0xF9AF612A1F70E7C5LL,0xC18B6F24A9A15EC5LL,0x31D1B08DF978D800LL},{18446744073709551615UL,0UL,0xC8E1DF1B796049F2LL,0UL,18446744073709551609UL}},{{0xC18B6F24A9A15EC5LL,18446744073709551615UL,0xF9AF612A1F70E7C5LL,0x31D1B08DF978D800LL,0xF9AF612A1F70E7C5LL},{4UL,4UL,0x9CFEB7337F72757ELL,0xE829B96D1C884951LL,0x23B37663AF03C292LL},{0x60AFD35E331471B4LL,18446744073709551613UL,0x1F79BB8BE7914025LL,0x7726264C9BD0B9E5LL,0xEA64DC09FC73FF69LL},{0xE274AF2A2EF16B74LL,0x524EF5EB974E930CLL,4UL,0x873DAF8C17EBE195LL,1UL},{0x4695563D729EA392LL,18446744073709551613UL,0x6E779A56FDE2C51FLL,0x6E779A56FDE2C51FLL,18446744073709551613UL},{18446744073709551609UL,4UL,0UL,18446744073709551615UL,18446744073709551615UL},{0x59BBC247BD426DFDLL,18446744073709551615UL,0x35599B9F5C06E851LL,0x4695563D729EA392LL,0x7726264C9BD0B9E5LL}}};
    struct S0 l_756 = {0x62L,1L,0x928D9D001B8BE8F1LL,9UL,0xF657L,6UL,0x566AL,0xF2L};
    union U4 *****l_771[2];
    int64_t l_789 = 0L;
    union U3 *l_813[6][1] = {{&l_612},{&g_340},{&l_612},{&l_612},{&g_340},{&l_612}};
    union U3 **l_812 = &l_813[0][0];
    union U3 ***l_811 = &l_812;
    uint8_t l_833 = 4UL;
    uint16_t l_869 = 0x35DBL;
    uint32_t l_896 = 0x10BFCCABL;
    int32_t l_899 = (-9L);
    int i, j, k;
    for (i = 0; i < 3; i++)
        l_83[i] = &l_84;
    for (i = 0; i < 5; i++)
        l_335[i] = &l_80;
    for (i = 0; i < 5; i++)
        l_614[i] = (void*)0;
    for (i = 0; i < 6; i++)
        l_683[i] = 0xDC51CE2AL;
    for (i = 0; i < 2; i++)
        l_771[i] = &g_585;
    l_80 = ((1L != l_75) , ((((g_76 , (&g_3 != (l_77[0] , (void*)0))) || (g_78 != (void*)0)) || p_73) , p_73));
lbl_540:
    if ((l_77[0].f2 <= (p_73 && func_81((g_85[1][0] = &g_3)))))
    { 
        return l_77[0];
    }
    else
    { 
        int32_t *l_249 = &g_25;
        int32_t l_255 = 0xD105BBACL;
        int32_t l_261 = 0x7B3FF0BAL;
        uint64_t l_264 = 0x64C15202C7B18381LL;
        struct S0 l_278 = {0x47L,-9L,0xD5B88223CB447274LL,1UL,0x50E5L,4294967295UL,0xC02AL,0xA9L};
        uint8_t l_288[3][3][7] = {{{247UL,8UL,255UL,247UL,254UL,255UL,0x77L},{255UL,7UL,0x26L,0x26L,7UL,255UL,0xACL},{2UL,1UL,0x23L,0x39L,0x51L,0x23L,247UL}},{{7UL,0xACL,247UL,1UL,0x26L,0UL,1UL},{255UL,1UL,1UL,254UL,0x77L,8UL,8UL},{0x77L,7UL,0x23L,7UL,0x77L,0x96L,0x51L}},{{0xBAL,8UL,254UL,0x51L,0x26L,0xACL,0xBAL},{1UL,0xBAL,0xACL,0x26L,0x51L,254UL,8UL},{0xBAL,0x51L,0x96L,0x77L,7UL,0x23L,7UL}}};
        int32_t l_290 = 0x6C29B101L;
        int32_t l_291 = (-3L);
        int32_t l_292[2][5] = {{0xDCAF8491L,7L,7L,0xDCAF8491L,7L},{0xDCAF8491L,0xDCAF8491L,1L,0xDCAF8491L,0xDCAF8491L}};
        int i, j, k;
lbl_289:
        for (g_79 = (-6); (g_79 == 24); g_79 = safe_add_func_uint16_t_u_u(g_79, 2))
        { 
            int64_t l_258 = 0x05030D3ADD637942LL;
            int32_t l_259 = (-8L);
            int32_t l_260 = 0x81752C86L;
            struct S2 l_279[6][2] = {{{0xB923L,0xB674E5CEED9E4B0ALL,{0x91L,5L,0xCFAED529686D66B3LL,4294967295UL,0x5F75L,5UL,0x96EAL,1L},-5L,-1L,0x4836C24D6B090D04LL,0x31A60633L,0xDE38A64BL},{0xD69FL,18446744073709551606UL,{2UL,0x9AL,0xFAE2F85012209801LL,0xBB9A0AD2L,0xAF20L,0x50932039L,0x02B8L,1L},0L,0x35L,1L,0x7408596DL,0xA4D03323L}},{{65526UL,1UL,{2UL,0x12L,6UL,1UL,0x36F9L,4294967290UL,0L,0x9FL},0xF34EBE37L,5L,0xE1C824B754639A99LL,-1L,6UL},{0xB923L,0xB674E5CEED9E4B0ALL,{0x91L,5L,0xCFAED529686D66B3LL,4294967295UL,0x5F75L,5UL,0x96EAL,1L},-5L,-1L,0x4836C24D6B090D04LL,0x31A60633L,0xDE38A64BL}},{{0xF075L,18446744073709551608UL,{251UL,0xF9L,0x83A5C4C7E7C9473CLL,0x99DDE4B0L,0UL,0x2E38B1C7L,1L,0xDFL},-5L,-1L,0xA7378F87C41504BFLL,1L,0x18410EFEL},{0xF075L,18446744073709551608UL,{251UL,0xF9L,0x83A5C4C7E7C9473CLL,0x99DDE4B0L,0UL,0x2E38B1C7L,1L,0xDFL},-5L,-1L,0xA7378F87C41504BFLL,1L,0x18410EFEL}},{{0xF075L,18446744073709551608UL,{251UL,0xF9L,0x83A5C4C7E7C9473CLL,0x99DDE4B0L,0UL,0x2E38B1C7L,1L,0xDFL},-5L,-1L,0xA7378F87C41504BFLL,1L,0x18410EFEL},{0xB923L,0xB674E5CEED9E4B0ALL,{0x91L,5L,0xCFAED529686D66B3LL,4294967295UL,0x5F75L,5UL,0x96EAL,1L},-5L,-1L,0x4836C24D6B090D04LL,0x31A60633L,0xDE38A64BL}},{{65526UL,1UL,{2UL,0x12L,6UL,1UL,0x36F9L,4294967290UL,0L,0x9FL},0xF34EBE37L,5L,0xE1C824B754639A99LL,-1L,6UL},{0xD69FL,18446744073709551606UL,{2UL,0x9AL,0xFAE2F85012209801LL,0xBB9A0AD2L,0xAF20L,0x50932039L,0x02B8L,1L},0L,0x35L,1L,0x7408596DL,0xA4D03323L}},{{0xB923L,0xB674E5CEED9E4B0ALL,{0x91L,5L,0xCFAED529686D66B3LL,4294967295UL,0x5F75L,5UL,0x96EAL,1L},-5L,-1L,0x4836C24D6B090D04LL,0x31A60633L,0xDE38A64BL},{0xD69FL,18446744073709551606UL,{2UL,0x9AL,0xFAE2F85012209801LL,0xBB9A0AD2L,0xAF20L,0x50932039L,0x02B8L,1L},0L,0x35L,1L,0x7408596DL,0xA4D03323L}}};
            int i, j;
            l_249 = (void*)0;
            if (g_76.f2.f3)
                goto lbl_289;
            if ((g_250[0][1][0] , (((-3L) ^ 0x1C03A7F7B843D4B9LL) < ((safe_div_func_uint32_t_u_u(((((-1L) ^ (-1L)) && g_76.f2.f5) < g_250[0][1][0].f0), l_255)) || 0UL))))
            { 
                int32_t l_256 = 0x8B976E15L;
                int32_t l_257 = 0L;
                int32_t l_262 = 0L;
                int32_t l_263[4] = {0x98654474L,0x98654474L,0x98654474L,0x98654474L};
                int i;
                --l_264;
                for (g_76.f0 = 0; (g_76.f0 <= 2); g_76.f0 += 1)
                { 
                    struct S0 l_267 = {249UL,-5L,0UL,4294967295UL,0UL,4294967295UL,0xB682L,0x43L};
                    return l_267;
                }
                return g_76.f2;
            }
            else
            { 
                int32_t l_273 = 1L;
                uint16_t *l_283[1][4];
                int i, j;
                for (i = 0; i < 1; i++)
                {
                    for (j = 0; j < 4; j++)
                        l_283[i][j] = &g_76.f0;
                }
                l_259 |= (((safe_rshift_func_int16_t_s_s((!(safe_sub_func_int16_t_s_s(l_273, l_273))), 6)) , (safe_add_func_int8_t_s_s((safe_lshift_func_uint8_t_u_u(((l_278 , l_279[5][0]) , ((safe_rshift_func_uint16_t_u_u((g_76.f0 = (+g_76.f0)), 5)) , (safe_sub_func_int16_t_s_s((*g_78), (safe_div_func_int64_t_s_s(p_73, g_219[1][3])))))), p_73)), g_76.f2.f1))) , l_288[2][0][6]);
                return g_76.f2;
            }
        }
        l_293++;
    }
    if (p_73)
    { 
        uint16_t *l_309[3][5][4] = {{{&g_76.f0,&l_77[0].f4,&g_76.f0,&l_77[0].f4},{&l_77[0].f4,&g_76.f2.f4,&g_76.f0,&g_76.f0},{&g_76.f0,&g_76.f0,&l_77[0].f4,&g_76.f0},{&l_77[0].f4,&g_76.f2.f4,&l_77[0].f4,&l_77[0].f4},{&l_77[0].f4,&l_77[0].f4,&l_77[0].f4,&l_77[0].f4}},{{&g_76.f0,&l_77[0].f4,&g_76.f0,&l_77[0].f4},{&l_77[0].f4,&g_76.f2.f4,&g_76.f0,&g_76.f0},{&g_76.f0,&g_76.f0,&l_77[0].f4,&g_76.f0},{&l_77[0].f4,&g_76.f2.f4,&l_77[0].f4,&l_77[0].f4},{&l_77[0].f4,&l_77[0].f4,&l_77[0].f4,&l_77[0].f4}},{{&g_76.f0,&l_77[0].f4,&g_76.f0,&l_77[0].f4},{&l_77[0].f4,&g_76.f2.f4,&g_76.f0,&g_76.f2.f4},{&l_77[0].f4,&l_77[0].f4,&l_77[0].f4,&g_76.f2.f4},{&g_76.f0,&g_76.f0,&g_76.f0,&l_77[0].f4},{&g_76.f0,&l_77[0].f4,&l_77[0].f4,&g_76.f0}}};
        uint32_t *l_310 = &l_77[0].f3;
        int32_t l_312 = 0xDBA36E81L;
        uint8_t *l_333 = (void*)0;
        struct S1 *l_338[1];
        int32_t l_353 = 6L;
        int32_t l_355 = 0x6D8C6B1FL;
        int32_t l_359[4] = {(-1L),(-1L),(-1L),(-1L)};
        uint32_t l_363 = 1UL;
        uint32_t l_370 = 4294967295UL;
        union U4 *l_386[2][1][7] = {{{&g_42,(void*)0,(void*)0,&g_42,(void*)0,(void*)0,&g_42}},{{(void*)0,&g_42,(void*)0,(void*)0,&g_42,(void*)0,(void*)0}}};
        union U4 **l_385 = &l_386[0][0][4];
        union U4 ***l_384[6][3][2] = {{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}}};
        union U4 ****l_383[3];
        union U4 *****l_382[1][5][3] = {{{&l_383[2],&l_383[2],(void*)0},{&l_383[2],&l_383[2],(void*)0},{&l_383[2],&l_383[2],(void*)0},{&l_383[2],&l_383[2],(void*)0},{&l_383[2],&l_383[2],(void*)0}}};
        struct S2 l_391 = {0x03F9L,1UL,{0xC9L,3L,0x7FC3194414366F28LL,0xE19E708AL,0xC820L,0xFC49E5D6L,-1L,0x93L},2L,0x6EL,0x4AAA26E0781368C2LL,-1L,0xEEB6E970L};
        uint8_t l_398 = 0x04L;
        int32_t l_434 = 0x857A0A7BL;
        uint8_t l_452 = 0xDFL;
        int16_t *l_518 = (void*)0;
        int64_t l_556 = 1L;
        int64_t l_591 = (-1L);
        union U4 **l_632 = &l_386[0][0][4];
        int16_t **l_655 = &l_518;
        uint32_t l_678 = 0x447269ABL;
        int32_t *l_680 = &l_359[1];
        uint32_t l_691 = 1UL;
        uint32_t l_713[5][2] = {{0xC69F537DL,0xC69F537DL},{0xC69F537DL,0xC69F537DL},{0xC69F537DL,0xC69F537DL},{0xC69F537DL,0xC69F537DL},{0xC69F537DL,0xC69F537DL}};
        int i, j, k;
        for (i = 0; i < 1; i++)
            l_338[i] = (void*)0;
        for (i = 0; i < 3; i++)
            l_383[i] = &l_384[3][0][1];
        if ((((safe_sub_func_int16_t_s_s(((0UL != ((safe_unary_minus_func_int8_t_s((((~(+((*l_310) ^= ((safe_add_func_uint16_t_u_u((safe_sub_func_int16_t_s_s(0xC617L, ((safe_rshift_func_uint8_t_u_s(((l_309[2][1][0] != g_78) != (&l_293 == l_310)), p_73)) | p_73))), l_311)) <= p_73)))) , 0x7A52L) & g_250[0][1][0].f3))) & p_73)) | p_73), l_312)) && 0xD149L) | (*g_110)))
        { 
            int8_t l_331[5] = {(-1L),(-1L),(-1L),(-1L),(-1L)};
            int32_t l_347 = 1L;
            int32_t l_351[5][4];
            int i, j;
            for (i = 0; i < 5; i++)
            {
                for (j = 0; j < 4; j++)
                    l_351[i][j] = 1L;
            }
            for (g_76.f2.f2 = 0; (g_76.f2.f2 >= 37); g_76.f2.f2 = safe_add_func_uint64_t_u_u(g_76.f2.f2, 1))
            { 
                uint64_t l_325 = 0UL;
                int32_t l_329 = 1L;
                p_73 = (safe_div_func_int32_t_s_s((((void*)0 == p_72) || g_76.f5), (safe_rshift_func_int16_t_s_u((safe_mul_func_int8_t_s_s(g_250[0][1][0].f3, (safe_sub_func_int32_t_s_s(0x29FC0734L, ((g_330 = (safe_add_func_uint8_t_u_u(((l_329 = ((l_325 <= (safe_mod_func_uint32_t_u_u((safe_unary_minus_func_int8_t_s(0x1CL)), l_312))) & l_325)) >= (*g_78)), 6L))) != 18446744073709551615UL))))), 15))));
            }
            if (l_331[4])
            { 
                uint16_t l_334 = 4UL;
                g_159 = l_332;
                for (g_76.f1 = 0; (g_76.f1 <= 2); g_76.f1 += 1)
                { 
                    l_334 = (l_333 != (void*)0);
                }
            }
            else
            { 
                struct S1 *l_336 = &g_159;
                struct S1 **l_337[1];
                union U3 *l_339 = &g_340;
                union U3 **l_341 = &l_339;
                int i;
                for (i = 0; i < 1; i++)
                    l_337[i] = &l_336;
                g_85[1][4] = (l_335[1] = &l_312);
                l_338[0] = l_336;
                (*l_341) = l_339;
            }
            for (g_76.f6 = 21; (g_76.f6 < 18); g_76.f6--)
            { 
                int64_t l_345[5] = {0L,0L,0L,0L,0L};
                int32_t l_348 = 0x394039B8L;
                int32_t l_356 = 0x187C855BL;
                int32_t l_358 = 0L;
                int32_t l_360 = 7L;
                int32_t l_361 = 0xE154DD45L;
                int i;
                for (g_33 = 0; (g_33 <= 0); g_33 += 1)
                { 
                    int32_t l_344 = 0xEC7DC168L;
                    int32_t l_346 = 1L;
                    int32_t l_349 = 4L;
                    int32_t l_350 = 0L;
                    int32_t l_352 = 0x2964D2C5L;
                    int32_t l_354 = 0xC76BCCA9L;
                    int32_t l_357[3];
                    struct S0 l_366 = {0x50L,0xFEL,1UL,3UL,65535UL,4294967295UL,0x850BL,1L};
                    int i, j;
                    for (i = 0; i < 3; i++)
                        l_357[i] = 1L;
                    p_73 = ((g_219[(g_33 + 1)][(g_33 + 3)] == g_219[(g_33 + 1)][(g_33 + 3)]) | 0xE58FC6E82A49DD96LL);
                    if (p_73)
                        continue;
                    ++l_363;
                    return l_366;
                }
            }
        }
        else
        { 
            uint32_t l_367 = 1UL;
            union U4 ****l_381 = (void*)0;
            union U4 *****l_380[7] = {&l_381,&l_381,&l_381,&l_381,&l_381,&l_381,&l_381};
            int16_t l_388 = (-2L);
            int32_t l_401 = (-6L);
            int32_t l_403 = 2L;
            int32_t l_406 = 0x4C34F011L;
            int32_t l_407 = 0xEE1A507FL;
            int32_t l_412 = 9L;
            int32_t l_414 = 0L;
            int32_t l_420 = 0x7772E6E4L;
            int32_t l_423 = 0xA5E5EBDBL;
            int32_t l_425 = 0x39A8C8BEL;
            int32_t l_427 = (-2L);
            int32_t l_432[3][2] = {{0x7807EFA8L,0x7807EFA8L},{0x7807EFA8L,0x7807EFA8L},{0x7807EFA8L,0x7807EFA8L}};
            int i, j;
            l_367++;
            if (((l_359[2] |= l_370) && (--(*l_310))))
            { 
                uint16_t l_387 = 0x5DE3L;
                int8_t *l_389 = &l_77[0].f1;
                int32_t l_402 = 6L;
                int32_t l_404 = (-4L);
                int32_t l_405 = 0L;
                int32_t l_408 = 0x666BA44FL;
                int32_t l_409 = (-5L);
                int32_t l_410 = 0L;
                int32_t l_411 = 0x62D1C109L;
                int32_t l_413 = 0x5D51006FL;
                int32_t l_415 = 0x0AF0D376L;
                int32_t l_416 = 0L;
                int32_t l_417 = 0x649A8D38L;
                int32_t l_418 = 0x798F3C67L;
                int32_t l_419 = 9L;
                int32_t l_421 = (-1L);
                int32_t l_422 = 0xA240EC63L;
                int64_t l_424 = 0x4FC591ABFA571F97LL;
                int32_t l_426 = 0xFFB24360L;
                int32_t l_428 = 0xC3BABA02L;
                int32_t l_429 = (-5L);
                int32_t l_430 = 0xFB23636DL;
                int32_t l_431 = (-1L);
                int32_t l_433[7][4][4] = {{{0xABB9614CL,0L,0L,0xABB9614CL},{(-2L),0x47DFB6F5L,(-6L),0xABB9614CL},{0L,0L,0x47DFB6F5L,0xABB9614CL},{9L,0x47DFB6F5L,0x163A10BEL,0xABB9614CL}},{{0xABB9614CL,0L,0L,0xABB9614CL},{(-2L),0x47DFB6F5L,(-6L),0xABB9614CL},{0L,0L,0x47DFB6F5L,0xABB9614CL},{9L,0x47DFB6F5L,0x163A10BEL,0xABB9614CL}},{{0xABB9614CL,0L,0L,0xABB9614CL},{(-2L),0x47DFB6F5L,(-6L),0xABB9614CL},{0L,0L,0x47DFB6F5L,0xABB9614CL},{9L,0x47DFB6F5L,0x163A10BEL,0xABB9614CL}},{{0xABB9614CL,0L,0L,0xABB9614CL},{(-2L),0x47DFB6F5L,(-6L),0xABB9614CL},{0L,0L,0x47DFB6F5L,0xABB9614CL},{9L,0x47DFB6F5L,0x163A10BEL,0xABB9614CL}},{{0xABB9614CL,0L,0L,0xABB9614CL},{(-2L),0x47DFB6F5L,(-6L),0xABB9614CL},{0L,0L,0x47DFB6F5L,0xABB9614CL},{9L,0x47DFB6F5L,0x163A10BEL,0xABB9614CL}},{{0xABB9614CL,0L,0L,0xABB9614CL},{(-2L),0x47DFB6F5L,(-6L),0xABB9614CL},{0L,0L,0x47DFB6F5L,0xABB9614CL},{9L,0x47DFB6F5L,0x163A10BEL,0xABB9614CL}},{{0xABB9614CL,0L,0L,0xABB9614CL},{(-2L),0x47DFB6F5L,(-6L),0xABB9614CL},{0L,0L,0x47DFB6F5L,0xABB9614CL},{9L,0x47DFB6F5L,0x163A10BEL,0xABB9614CL}}};
                int16_t l_435[5][1][7] = {{{0xAEA0L,0xCB64L,0xB197L,0xD84FL,0xCC36L,(-8L),0xCC36L}},{{0x0C40L,(-1L),(-1L),0x0C40L,0x6732L,0xD84FL,0xAEA0L}},{{0xAEA0L,0xD84FL,0x6732L,0x0C40L,(-1L),(-1L),0x0C40L}},{{0xCC36L,(-8L),0xCC36L,0xD84FL,0xB197L,0xCB64L,0xAEA0L}},{{(-8L),0x5A17L,0xCC36L,0x6732L,0L,0x6732L,0xCC36L}}};
                int i, j, k;
                l_312 |= (((((safe_div_func_int64_t_s_s((l_375 != (l_382[0][2][1] = l_380[5])), l_387)) , p_73) ^ ((l_355 = ((void*)0 == (*l_375))) | ((*l_389) = (((l_309[2][1][0] != g_78) == l_388) , p_73)))) ^ (-2L)) < 0xE6L);
                for (g_79 = 2; (g_79 >= 0); g_79 -= 1)
                { 
                    int64_t *l_395 = (void*)0;
                    int64_t *l_396 = (void*)0;
                    int64_t *l_397[1];
                    uint8_t *l_399[3];
                    int32_t l_400[5] = {0xE8944E07L,0xE8944E07L,0xE8944E07L,0xE8944E07L,0xE8944E07L};
                    int i;
                    for (i = 0; i < 1; i++)
                        l_397[i] = &l_391.f5;
                    for (i = 0; i < 3; i++)
                        l_399[i] = &l_77[0].f0;
                    p_73 = ((&g_22 != (l_390 , &g_22)) > (((l_391 , (((((l_400[3] = (safe_sub_func_uint64_t_u_u((((*g_110) = ((((((l_398 = (g_76.f5 = (((+1UL) , (void*)0) != p_72))) > (-1L)) & 0x7492L) , g_79) , 0x6AL) ^ 0x22L)) || p_73), l_388))) , p_72) == (void*)0) || l_391.f2.f6) != g_212[0][2][0])) > 1UL) > 0x2DC14466L));
                }
                --l_436;
                l_420 = 0x7E1B0926L;
            }
            else
            { 
                uint16_t l_444 = 65527UL;
                union U4 ***l_449[3];
                int i;
                for (i = 0; i < 3; i++)
                    l_449[i] = &l_385;
                for (l_390.f6 = 0; (l_390.f6 <= (-20)); l_390.f6 = safe_sub_func_int16_t_s_s(l_390.f6, 7))
                { 
                    int16_t *l_450[3][3] = {{&l_388,&l_388,&l_388},{&l_388,&l_388,&l_388},{&l_388,&l_388,&l_388}};
                    int32_t l_451[1];
                    int i, j;
                    for (i = 0; i < 1; i++)
                        l_451[i] = 1L;
                    p_73 = (l_452 |= (~((*g_78) | (safe_rshift_func_int16_t_s_u((l_451[0] &= ((l_432[2][1] = (l_444 & p_73)) | (((safe_mul_func_int16_t_s_s((safe_mod_func_uint16_t_u_u(((void*)0 != l_449[0]), l_391.f2.f4)), 0UL)) , (void*)0) == (void*)0))), 6)))));
                    p_73 = (g_453 != (void*)0);
                    if (p_73)
                        continue;
                    l_407 = (l_451[0] ^= (!(l_432[1][0] = g_362[0][1])));
                    g_159 = g_159;
                }
                return l_77[0];
            }
            for (l_390.f2.f0 = 0; (l_390.f2.f0 <= 1); l_390.f2.f0 += 1)
            { 
                uint64_t l_458 = 0x005E585245A9724FLL;
                struct S1 l_467[1] = {{0xA88D4619L}};
                union U4 ***l_470 = &l_385;
                int64_t *l_489 = &l_391.f5;
                int i;
                l_458 ^= (((*g_110) & 0xF2L) > (((l_423 , l_391.f2.f6) == (8L && (l_412 || (safe_lshift_func_int16_t_s_u(0x5A85L, 0))))) < g_76.f2.f0));
                l_434 &= (safe_lshift_func_uint8_t_u_u((((~(((~(safe_div_func_uint32_t_u_u(((void*)0 == p_72), ((l_467[0] , ((g_362[1][2] > (safe_sub_func_int32_t_s_s(p_73, (l_355 = ((*l_376) != (g_471 = l_470)))))) && l_406)) & p_73)))) & l_427) > 0UL)) <= p_73) || p_73), 3));
                l_420 ^= ((((((safe_unary_minus_func_int64_t_s((safe_lshift_func_int16_t_s_s(((g_85[1][0] = &g_3) == (void*)0), ((safe_lshift_func_uint16_t_u_s((safe_lshift_func_int8_t_s_u((safe_mul_func_int8_t_s_s(g_76.f2.f3, (safe_add_func_uint8_t_u_u(5UL, (((*l_489) = (safe_add_func_int8_t_s_s((g_330 , (safe_sub_func_int8_t_s_s(p_73, 1L))), g_212[2][3][0]))) ^ g_79))))), 3)), 5)) == 1L))))) <= (*g_78)) < 1UL) == p_73) , 0L) < 1L);
                p_73 = (safe_unary_minus_func_int16_t_s((*g_78)));
                return g_76.f2;
            }
        }
        for (g_42.f1 = 0; (g_42.f1 <= 36); ++g_42.f1)
        { 
            int16_t l_509 = 8L;
            int32_t l_510 = 0xEB1615A4L;
            uint32_t **l_551 = &l_310;
            int8_t l_554 = 0xE4L;
            int16_t **l_555 = &l_517;
            union U4 *****l_583 = &l_383[1];
            int32_t l_589 = 0x645AD8C0L;
            int32_t l_590[7] = {0x3733F6E5L,0x3733F6E5L,0x3733F6E5L,0x3733F6E5L,0x3733F6E5L,0x3733F6E5L,0x3733F6E5L};
            union U3 l_626 = {0xAEB4L};
            int i;
            for (g_76.f2.f0 = 0; (g_76.f2.f0 < 30); g_76.f2.f0 = safe_add_func_int8_t_s_s(g_76.f2.f0, 1))
            { 
                uint64_t *l_499[2];
                struct S1 l_507 = {0xF13DA9F5L};
                int32_t l_511 = 2L;
                struct S1 **l_512 = &l_338[0];
                uint64_t **l_513 = &l_499[0];
                int16_t *l_516[3];
                int16_t **l_515[2];
                int i;
                for (i = 0; i < 2; i++)
                    l_499[i] = &l_390.f2.f2;
                for (i = 0; i < 3; i++)
                    l_516[i] = &g_79;
                for (i = 0; i < 2; i++)
                    l_515[i] = &l_516[1];
                for (l_80 = 0; (l_80 <= (-21)); l_80--)
                { 
                    uint64_t *l_503 = &g_212[3][3][0];
                    uint64_t **l_502 = &l_503;
                    struct S1 l_506 = {1L};
                    int32_t l_508 = (-1L);
                    p_73 &= (safe_mul_func_uint8_t_u_u((*g_110), ((l_499[0] == ((0xCE24F441L <= (safe_mul_func_uint16_t_u_u(0x8365L, (-3L)))) , ((*l_502) = &g_212[2][3][0]))) == (safe_add_func_int64_t_s_s(g_340.f3, 0xA09E46FCE11C32D8LL)))));
                    l_507 = l_506;
                    l_508 ^= (l_507.f0 > p_73);
                    l_509 &= l_508;
                    l_511 ^= (l_510 = p_73);
                }
                if (l_519)
                    goto lbl_717;
                (*l_512) = l_338[0];
                if ((l_507.f0 & ((((*l_513) = &l_436) != (void*)0) & (((*l_517) = (!(((((g_76.f2 , (p_72 = p_72)) == (l_518 = l_517)) <= 0xF944L) ^ l_510) | l_519))) & 65532UL))))
                { 
                    int8_t *l_536 = (void*)0;
                    int8_t *l_537 = &l_390.f2.f1;
                    int32_t l_538 = 0L;
                    l_312 ^= p_73;
                    if (l_391.f2.f3)
                        break;
                    p_73 = (((safe_rshift_func_uint8_t_u_s(0x8EL, (safe_lshift_func_int8_t_s_s((l_370 > (safe_div_func_int32_t_s_s((safe_add_func_int16_t_s_s(((g_76.f7 || g_362[0][1]) ^ (g_340.f0 = (safe_mul_func_int16_t_s_s(l_509, (safe_mod_func_uint16_t_u_u((safe_div_func_int8_t_s_s(((*l_537) = ((safe_add_func_uint8_t_u_u((g_76 , ((g_219[1][3] <= p_73) != g_76.f7)), 249UL)) ^ 65535UL)), l_538)), g_76.f4)))))), p_73)), p_73))), 4)))) <= l_538) != l_510);
                    l_359[3] |= l_538;
                }
                else
                { 
                    int32_t *l_539 = &l_434;
                    l_539 = &g_362[0][1];
                    if (l_390.f4)
                        goto lbl_540;
                }
                for (l_452 = 24; (l_452 <= 5); l_452--)
                { 
                    uint16_t l_543[6] = {0x9477L,0x9477L,0x9477L,0x9477L,0x9477L,0x9477L};
                    struct S0 l_546[3] = {{7UL,0x3BL,0x24787286917365A1LL,4294967291UL,0xABB9L,0x79C2FA4DL,0x66F3L,9L},{7UL,0x3BL,0x24787286917365A1LL,4294967291UL,0xABB9L,0x79C2FA4DL,0x66F3L,9L},{7UL,0x3BL,0x24787286917365A1LL,4294967291UL,0xABB9L,0x79C2FA4DL,0x66F3L,9L}};
                    int i;
                    l_543[4]--;
                    return l_546[1];
                }
            }
            l_554 = (0x2AL <= ((+0UL) > ((safe_sub_func_uint64_t_u_u((safe_unary_minus_func_uint64_t_u((g_22.f0 <= 0xABE4BC399F141239LL))), (l_551 == g_552))) < (*g_110))));
            l_556 &= (p_73 = (((((g_76.f2.f7 < (l_555 != &l_518)) >= g_33) && p_73) || ((void*)0 != &l_519)) || p_73));
        }
        p_73 ^= ((~l_391.f2.f1) > ((safe_lshift_func_int8_t_s_u((&l_335[0] != &g_85[1][0]), 2)) != (g_635.f0 ^ (l_309[1][2][1] == ((*l_655) = p_72)))));
        for (l_612.f3 = 0; (l_612.f3 <= 48); l_612.f3 = safe_add_func_int16_t_s_s(l_612.f3, 4))
        { 
            union U3 *l_669 = &g_340;
            int32_t l_676 = 1L;
            uint32_t l_677[2];
            int32_t l_686 = (-1L);
            int32_t l_688 = 0xE8425B41L;
            uint32_t ***l_695 = (void*)0;
            uint32_t ****l_694[2];
            int64_t l_701 = 0x26420BA8F733FF33LL;
            uint32_t l_712[1][7][7] = {{{4294967293UL,8UL,0x07F089E1L,8UL,4294967293UL,0x17950DDDL,0x17950DDDL},{4294967293UL,8UL,0x07F089E1L,8UL,4294967293UL,0x17950DDDL,0x17950DDDL},{4294967293UL,8UL,0x07F089E1L,8UL,4294967293UL,0x17950DDDL,0x17950DDDL},{4294967293UL,8UL,0x07F089E1L,8UL,4294967293UL,0x17950DDDL,0x17950DDDL},{4294967293UL,8UL,0x07F089E1L,8UL,4294967293UL,0x17950DDDL,0x17950DDDL},{4294967293UL,8UL,0x07F089E1L,8UL,4294967293UL,0x17950DDDL,0x17950DDDL},{4294967293UL,8UL,0x07F089E1L,8UL,4294967293UL,0x17950DDDL,0x17950DDDL}}};
            struct S0 l_715[4] = {{0x74L,-1L,0x57D12D639A81B63BLL,0x1A4C46E1L,0x8407L,4294967295UL,6L,0x89L},{0x74L,-1L,0x57D12D639A81B63BLL,0x1A4C46E1L,0x8407L,4294967295UL,6L,0x89L},{0x74L,-1L,0x57D12D639A81B63BLL,0x1A4C46E1L,0x8407L,4294967295UL,6L,0x89L},{0x74L,-1L,0x57D12D639A81B63BLL,0x1A4C46E1L,0x8407L,4294967295UL,6L,0x89L}};
            int i, j, k;
            for (i = 0; i < 2; i++)
                l_677[i] = 4294967295UL;
            for (i = 0; i < 2; i++)
                l_694[i] = &l_695;
            if (((safe_mod_func_int16_t_s_s((0xC8D082E9DB15983CLL || (safe_lshift_func_int8_t_s_u(g_76.f2.f3, ((*g_110) = (safe_lshift_func_int16_t_s_u(((***l_375) != (*l_377)), 6)))))), (safe_mul_func_uint16_t_u_u(((safe_mul_func_uint16_t_u_u(((g_668[1][2] , ((*l_669) = l_612)) , (((l_678 = ((((safe_rshift_func_uint8_t_u_u((safe_mul_func_int16_t_s_s((safe_mod_func_uint16_t_u_u((l_677[0] = l_676), g_668[1][2].f2.f2)), (*g_78))), p_73)) > g_362[1][4]) <= g_362[0][1]) & 0x081F16F7L)) , (-1L)) & g_10.f0)), l_676)) , 0xBCD9L), 0x9B0EL)))) < 0x1CEE847AL))
            { 
                int32_t *l_679 = &l_359[3];
                l_680 = l_679;
                for (g_76.f7 = 16; (g_76.f7 <= 12); --g_76.f7)
                { 
                    (*l_680) = l_683[4];
                }
                for (g_159.f0 = 21; (g_159.f0 >= 9); --g_159.f0)
                { 
                    int16_t l_687 = 0xF89FL;
                    int32_t l_689 = 0x36072CC9L;
                    int32_t l_690 = 0x75066D8EL;
                    uint32_t *****l_696 = (void*)0;
                    uint32_t *****l_697 = &l_694[1];
                    l_691++;
                    (*l_697) = l_694[0];
                }
            }
            else
            { 
                int32_t l_698 = 0xEBDD9192L;
                int8_t *l_710 = (void*)0;
                int8_t *l_711 = &l_390.f2.f1;
                int32_t l_714[1][4][5] = {{{0x4E4B564DL,0xC7D1B259L,(-5L),0x4D2856B3L,0x4D2856B3L},{0x11B4EC7AL,0xC7D1B259L,0x11B4EC7AL,0x2CB135DDL,0xC7D1B259L},{0x4D2856B3L,0x76492CBCL,0x2CB135DDL,0x4D2856B3L,0x2CB135DDL},{0x4D2856B3L,0x4D2856B3L,(-5L),0xC7D1B259L,0x4E4B564DL}}};
                struct S0 l_716 = {5UL,0xD1L,18446744073709551615UL,1UL,65535UL,0xD6CACE6DL,0xAA93L,0x22L};
                int i, j, k;
                (*l_680) ^= (l_698 && ((l_714[0][0][1] = ((((*g_110) = (safe_div_func_uint16_t_u_u(g_362[0][1], (0x4898L & l_701)))) < (safe_div_func_int32_t_s_s((l_713[1][0] ^= (safe_lshift_func_uint8_t_u_s(((p_73 , ((safe_add_func_int64_t_s_s(p_73, (safe_rshift_func_uint16_t_u_s((((*l_711) = (4294967295UL >= 0xD2701AAFL)) != p_73), l_712[0][2][2])))) <= 0xA9L)) < 0UL), p_73))), 0xFC6DA2DFL))) ^ 0x9213789C3F31A26CLL)) <= g_159.f0));
                if ((l_701 | ((4294967295UL & 4294967295UL) >= p_73)))
                { 
                    return l_715[0];
                }
                else
                { 
                    return l_716;
                }
            }
        }
    }
    else
    { 
lbl_717:
        g_85[0][3] = (void*)0;
        g_718 = &l_332;
lbl_856:
        if (p_73)
        { 
            int32_t *l_720 = &l_592;
            if (l_519)
                goto lbl_717;
            l_720 = l_719;
        }
        else
        { 
            int32_t l_721 = 1L;
            const struct S2 l_724[2] = {{3UL,0x7F0D294881601AA4LL,{246UL,0x0FL,0x1D0A1FF3B0B55FA6LL,0UL,0xB5D9L,1UL,-7L,-2L},1L,0xD2L,0x1ACCA1C224459FCBLL,-8L,3UL},{3UL,0x7F0D294881601AA4LL,{246UL,0x0FL,0x1D0A1FF3B0B55FA6LL,0UL,0xB5D9L,1UL,-7L,-2L},1L,0xD2L,0x1ACCA1C224459FCBLL,-8L,3UL}};
            int i;
            if (l_721)
            { 
                uint32_t **l_730 = &l_614[1];
                for (g_635.f4 = (-30); (g_635.f4 > 8); g_635.f4++)
                { 
                    int64_t l_731 = 5L;
                    l_731 ^= (4294967295UL > (((l_724[1] , (safe_rshift_func_int8_t_s_u((!g_219[1][2]), 2))) && (safe_rshift_func_int16_t_s_s(((void*)0 == l_730), 15))) && g_668[1][2].f4));
                }
                return l_732[1][1];
            }
            else
            { 
                uint8_t l_750 = 0x6EL;
                for (g_76.f5 = 0; (g_76.f5 <= 1); g_76.f5 += 1)
                { 
                    int32_t *l_733 = &g_25;
                    union U4 ***l_735 = &g_472[0][1];
                    const struct S1 l_743 = {0x6B29DD77L};
                    l_734 = l_733;
                    (*l_734) |= ((l_735 != (void*)0) < ((*g_110) = (p_73 || ((safe_mul_func_uint8_t_u_u((safe_add_func_uint32_t_u_u((((safe_unary_minus_func_uint8_t_u(((l_743 , ((safe_lshift_func_int8_t_s_s((*l_719), 1)) ^ p_73)) < 0L))) ^ p_73) < g_76.f2.f0), 7L)), 246UL)) && 0L))));
                }
                for (l_612.f3 = 0; (l_612.f3 == 22); l_612.f3 = safe_add_func_int64_t_s_s(l_612.f3, 6))
                { 
                    if (p_73)
                        break;
                }
                l_750++;
            }
            l_753[0][2][3]++;
        }
        return l_756;
    }
    for (l_612.f0 = 0; (l_612.f0 <= 4); l_612.f0 += 1)
    { 
        uint32_t *l_761 = (void*)0;
        uint32_t **l_762 = &l_761;
        uint16_t *l_763 = &g_643[6];
        int32_t l_765 = 9L;
        struct S0 l_788 = {1UL,0x76L,0xD5CC564691E67BF5LL,4294967295UL,0x28DBL,0x0B9DE675L,-1L,-10L};
        union U4 *l_793 = (void*)0;
        uint16_t l_816 = 0x34D8L;
        union U4 ****l_843 = (void*)0;
        uint16_t l_853 = 65535UL;
        int16_t l_859 = 1L;
        int32_t l_862 = 1L;
        int32_t l_863 = 0x28C90494L;
        uint32_t l_864 = 0xE49CB5B7L;
        uint16_t l_881 = 0x7393L;
        int i;
        if (((safe_mul_func_int8_t_s_s((safe_div_func_uint16_t_u_u(((*l_763) = (((*l_613) = l_614[l_612.f0]) != ((*l_762) = l_761))), (*l_734))), (g_250[0][1][0].f0 <= (safe_unary_minus_func_int16_t_s((p_73 <= p_73)))))) & p_73))
        { 
            union U4 l_772[7][4] = {{{0xA9C92640L},{1UL},{0xA9C92640L},{1UL}},{{0xA9C92640L},{1UL},{0xA9C92640L},{1UL}},{{0xA9C92640L},{1UL},{0xA9C92640L},{1UL}},{{0xA9C92640L},{1UL},{0xA9C92640L},{1UL}},{{0xA9C92640L},{1UL},{0xA9C92640L},{1UL}},{{0xA9C92640L},{1UL},{0xA9C92640L},{1UL}},{{0xA9C92640L},{1UL},{0xA9C92640L},{1UL}}};
            int32_t l_777 = 0x8FE36399L;
            uint32_t l_785 = 4294967295UL;
            union U3 ***l_815 = &l_812;
            union U4 ****l_842 = &g_471;
            int i, j;
            for (l_390.f2.f3 = 0; (l_390.f2.f3 <= 1); l_390.f2.f3 += 1)
            { 
                uint16_t l_766 = 0x566FL;
                --l_766;
                return g_635;
            }
            (*l_719) |= (((safe_sub_func_int64_t_s_s(((((g_584 = l_771[1]) == &l_376) , (l_772[3][2] , 0x1E0928BFL)) & (p_73 , (l_777 = ((**g_552) |= (safe_sub_func_uint64_t_u_u((safe_mul_func_int8_t_s_s(g_362[0][1], (p_73 != 0L))), 0xBEC1886ED4CC404BLL)))))), (-9L))) | p_73) , p_73);
            for (l_390.f0 = 0; (l_390.f0 <= 1); l_390.f0 += 1)
            { 
                int8_t l_780 = 0x63L;
                int32_t l_781 = 0L;
                int32_t l_782[4];
                int32_t l_794 = 0xD3E60510L;
                union U3 **l_804 = (void*)0;
                int64_t l_822 = 1L;
                int i;
                for (i = 0; i < 4; i++)
                    l_782[i] = 0x6D392A12L;
            }
            for (g_635.f7 = 1; (g_635.f7 >= 0); g_635.f7 -= 1)
            { 
                return l_732[0][0];
            }
            (*l_734) = ((safe_lshift_func_int8_t_s_u(g_76.f2.f7, ((safe_lshift_func_int16_t_s_u((l_785 , (g_836[6][2][0].f3 , (g_340 , (safe_div_func_uint8_t_u_u(((~l_853) & (safe_div_func_uint32_t_u_u(4294967295UL, (4294967287UL ^ l_777)))), (*l_734)))))), p_73)) | p_73))) && 18446744073709551615UL);
        }
        else
        { 
            int16_t l_882 = 0xF02BL;
            if (l_390.f0)
                goto lbl_856;
            for (g_33 = 0; (g_33 <= 1); g_33 += 1)
            { 
                int32_t l_861 = (-6L);
                int8_t l_880 = 4L;
                if ((safe_lshift_func_int8_t_s_s(l_859, g_668[1][2].f2.f5)))
                { 
                    (*l_734) &= p_73;
                }
                else
                { 
                    union U3 *l_876[2][3] = {{&l_612,(void*)0,&l_612},{&l_612,(void*)0,&l_612}};
                    int32_t l_877 = 0x06128E68L;
                    int i, j;
                    g_860 = (void*)0;
                    ++l_864;
                    (*l_734) = (safe_div_func_uint32_t_u_u(((--l_869) == (safe_mul_func_uint16_t_u_u(((((*l_812) = (*l_812)) == l_876[1][0]) > ((*g_78) , (((0x245BE7D7530FFC0DLL | ((l_877 , (-1L)) , (safe_mul_func_int8_t_s_s((-1L), (*g_110))))) ^ g_79) > 0xD3BA2958DFA3FE8DLL))), l_880))), l_881));
                    if (p_73)
                        continue;
                    return l_77[0];
                }
            }
            if (l_882)
                continue;
        }
        l_335[l_612.f0] = &g_3;
        for (l_756.f4 = 0; (l_756.f4 <= 1); l_756.f4 += 1)
        { 
            struct S0 l_886 = {0xEEL,0xA6L,0xA234608EFD896B50LL,4294967288UL,65528UL,0UL,2L,0L};
            for (l_390.f1 = 0; (l_390.f1 <= 1); l_390.f1 += 1)
            { 
                for (l_519 = 0; (l_519 >= 0); l_519 -= 1)
                { 
                    g_85[1][0] = &p_73;
                }
                for (g_25 = 1; (g_25 >= 0); g_25 -= 1)
                { 
                    return l_732[5][1];
                }
                for (l_749 = 1; (l_749 >= 0); l_749 -= 1)
                { 
                    uint8_t l_883 = 0x59L;
                    struct S2 *l_885 = (void*)0;
                    struct S2 **l_884 = &l_885;
                    if (l_883)
                        break;
                    (*l_884) = &g_668[1][0];
                }
                return l_788;
            }
            g_860 = &p_73;
            return l_886;
        }
    }
    for (l_869 = (-21); (l_869 == 59); l_869 = safe_add_func_int16_t_s_s(l_869, 4))
    { 
        int32_t l_889 = (-1L);
        int32_t l_890 = 0x204F4E47L;
        int32_t l_891 = 6L;
        int32_t l_892 = 0x3E3F8C0AL;
        int32_t l_893 = 0xE1117759L;
        int32_t l_894[4];
        uint64_t l_900 = 0x5CBAA7C8797019DDLL;
        int i;
        for (i = 0; i < 4; i++)
            l_894[i] = (-3L);
        l_896--;
        l_900++;
    }
    return l_77[0];
}



static uint64_t  func_81(int32_t * p_82)
{ 
    uint64_t l_88[5] = {0x7A8D5DA263B4A820LL,0x7A8D5DA263B4A820LL,0x7A8D5DA263B4A820LL,0x7A8D5DA263B4A820LL,0x7A8D5DA263B4A820LL};
    int32_t l_102[2];
    int32_t l_104 = 0xD9A1771DL;
    union U4 *l_120 = (void*)0;
    union U4 **l_190[5][5][7];
    union U4 ***l_189 = &l_190[0][0][2];
    union U4 ****l_188 = &l_189;
    int32_t *l_196[4][6][2] = {{{&g_3,&g_3},{&g_3,&l_104},{&l_102[1],&g_3},{&l_104,&g_3},{&g_3,&g_3},{&l_102[1],&g_3}},{{&g_3,&g_3},{&l_104,&g_3},{&l_102[1],&l_104},{&g_3,&g_3},{&g_3,&l_104},{&l_102[1],&g_3}},{{&l_104,&g_3},{&g_3,&g_3},{&l_102[1],&g_3},{&g_3,&g_3},{&l_104,&g_3},{&l_102[1],&l_104}},{{&g_3,&g_3},{&g_3,&l_104},{&l_102[1],&g_3},{&l_104,&g_3},{&g_3,&g_3},{&l_102[1],&g_3}}};
    struct S1 l_208 = {-4L};
    int i, j, k;
    for (i = 0; i < 2; i++)
        l_102[i] = (-1L);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            for (k = 0; k < 7; k++)
                l_190[i][j][k] = &l_120;
        }
    }
    for (g_76.f1 = (-29); (g_76.f1 <= 51); g_76.f1 = safe_add_func_uint32_t_u_u(g_76.f1, 4))
    { 
        int64_t l_98 = (-1L);
        uint64_t l_99 = 0x3D13968748FAD171LL;
        uint64_t *l_100 = (void*)0;
        uint64_t *l_101 = (void*)0;
        uint8_t *l_103[3];
        int32_t l_105 = 8L;
        uint32_t l_143 = 4294967295UL;
        union U4 l_160 = {1UL};
        const union U4 **l_167 = &g_9;
        const union U4 ***l_166 = &l_167;
        uint32_t l_209[5] = {0UL,0UL,0UL,0UL,0UL};
        struct S1 l_242 = {0L};
        union U3 l_243 = {0x0327L};
        int i;
        for (i = 0; i < 3; i++)
            l_103[i] = &g_76.f2.f0;
        l_105 ^= (l_88[1] >= (l_104 = (safe_div_func_uint64_t_u_u((l_102[1] = ((*g_78) && (safe_mul_func_uint16_t_u_u((((((l_88[1] >= (~g_76.f4)) || (((l_88[3] < (safe_mul_func_int16_t_s_s(((g_76.f2.f6 < ((((safe_rshift_func_int8_t_s_u(0x1DL, 0)) != 0x33L) <= l_98) >= l_98)) >= l_99), 1UL))) , l_98) || l_99)) & g_76.f3) != g_42.f0) , l_88[1]), (*g_78))))), l_88[1]))));
        for (g_76.f6 = 0; (g_76.f6 <= 1); g_76.f6 += 1)
        { 
            int32_t *l_117 = &g_25;
            const union U4 **l_134 = &g_9;
            union U4 * const *l_136 = &l_120;
            int i;
            if (l_102[g_76.f6])
                break;
            if ((safe_mod_func_int32_t_s_s((safe_div_func_uint16_t_u_u((l_103[2] != g_110), l_102[g_76.f6])), ((*l_117) = (safe_add_func_uint16_t_u_u((safe_sub_func_int64_t_s_s((safe_add_func_uint8_t_u_u(((g_76.f1 , (void*)0) == (void*)0), (l_102[g_76.f6] ^ l_88[1]))), 1UL)), 0x265AL))))))
            { 
                for (l_104 = 2; (l_104 >= 0); l_104 -= 1)
                { 
                    return g_76.f2.f4;
                }
                (*l_117) = ((p_82 = p_82) == (g_85[1][0] = (void*)0));
                return l_88[1];
            }
            else
            { 
                union U4 **l_121 = &l_120;
                union U4 *l_122[5][4][4] = {{{&g_42,&g_42,&g_42,&g_42},{&g_42,&g_42,&g_42,&g_42},{&g_42,&g_42,&g_42,&g_42},{&g_42,&g_42,&g_42,&g_42}},{{&g_42,&g_42,&g_42,&g_42},{&g_42,&g_42,&g_42,&g_42},{&g_42,&g_42,&g_42,&g_42},{&g_42,&g_42,&g_42,&g_42}},{{&g_42,&g_42,&g_42,&g_42},{&g_42,&g_42,&g_42,&g_42},{&g_42,&g_42,&g_42,&g_42},{&g_42,&g_42,&g_42,&g_42}},{{&g_42,&g_42,&g_42,&g_42},{&g_42,&g_42,&g_42,&g_42},{&g_42,&g_42,&g_42,&g_42},{&g_42,&g_42,&g_42,&g_42}},{{&g_42,&g_42,&g_42,&g_42},{&g_42,&g_42,&g_42,&g_42},{&g_42,&g_42,&g_42,&g_42},{&g_42,&g_42,&g_42,&g_42}}};
                int32_t l_129 = (-1L);
                const union U4 ***l_135 = &l_134;
                int32_t **l_137 = &g_85[1][0];
                int32_t *l_142 = &l_129;
                struct S1 l_168 = {0x56C786B9L};
                struct S1 *l_169 = &g_159;
                int i, j, k;
                (*l_117) = (((safe_lshift_func_uint16_t_u_u(((((*l_121) = l_120) != l_122[3][2][2]) <= (((*p_82) ^ 1L) | (safe_lshift_func_uint16_t_u_s((safe_sub_func_uint16_t_u_u((safe_mod_func_int32_t_s_s(l_98, ((*g_9) , 4294967287UL))), (*g_78))), 1)))), g_76.f0)) ^ l_129) | (*p_82));
                (*l_142) |= (((safe_add_func_uint8_t_u_u(((safe_mul_func_uint16_t_u_u((((*l_135) = ((l_105 = l_88[1]) , l_134)) != l_136), (l_137 == &p_82))) > (*g_110)), ((((safe_mod_func_uint8_t_u_u((safe_rshift_func_int16_t_s_s(((g_22.f0 > 0x7EL) ^ l_98), 15)), (*g_110))) & (-1L)) == (*l_117)) < 0xB6AF0722L))) | (*p_82)) <= g_22.f1);
                ++l_143;
                for (g_76.f0 = 0; (g_76.f0 <= 2); g_76.f0 += 1)
                { 
                    int8_t l_154 = 7L;
                    uint64_t *l_163[5][1][6] = {{{&g_76.f2.f2,&l_88[1],&g_76.f2.f2,&g_76.f1,&g_76.f1,&g_76.f2.f2}},{{(void*)0,(void*)0,&g_76.f1,(void*)0,&g_76.f1,(void*)0}},{{&g_76.f1,&l_88[1],(void*)0,(void*)0,&l_88[1],&g_76.f1}},{{(void*)0,&g_76.f1,(void*)0,&g_76.f1,(void*)0,(void*)0}},{{&g_76.f2.f2,&g_76.f1,&g_76.f1,&g_76.f2.f2,&l_88[1],&g_76.f2.f2}}};
                    int64_t *l_164 = &g_76.f5;
                    int64_t *l_165 = &l_98;
                    int i, j, k;
                    (*l_142) |= ((((safe_rshift_func_uint16_t_u_u(g_22.f1, 7)) <= (((((*l_165) = ((*l_164) ^= ((safe_mul_func_uint16_t_u_u((safe_div_func_uint64_t_u_u((l_105 = ((safe_lshift_func_int16_t_s_s(l_154, 8)) != (safe_add_func_int32_t_s_s((safe_add_func_uint16_t_u_u((g_159 , ((l_98 != ((((*l_117) = (l_160 , 0x70E5BB39L)) & (safe_mod_func_uint8_t_u_u(255UL, l_154))) & l_104)) != 0xB705L)), l_154)), l_104)))), 18446744073709551615UL)), l_154)) != (*p_82)))) <= l_154) && l_104) && (*l_117))) , l_166) == &l_121);
                }
                (*l_169) = l_168;
            }
            (*l_117) &= l_104;
            if (l_88[3])
                continue;
        }
        if (l_143)
        { 
            int32_t **l_170[2][1][3] = {{{(void*)0,&g_85[1][3],&g_85[1][0]}},{{&g_85[1][0],(void*)0,&g_85[1][0]}}};
            int i, j, k;
            g_85[1][2] = (void*)0;
        }
        else
        { 
            int32_t l_171 = 1L;
            int32_t *l_172 = &l_102[0];
            uint8_t l_187 = 1UL;
            struct S1 l_202 = {1L};
            int32_t l_226 = 0x606A619FL;
            if ((l_171 > ((((*l_172) = (0x6F7AE06B29CEE28CLL || l_88[1])) | (safe_lshift_func_int16_t_s_s(0x5F3CL, 6))) && (safe_mod_func_uint8_t_u_u((safe_div_func_uint32_t_u_u((safe_mul_func_uint16_t_u_u(((+(+((0x0CD3L > (((safe_add_func_int8_t_s_s((safe_rshift_func_uint16_t_u_s(l_98, ((l_187 = ((l_99 | 0xB63D32DCL) > 0x9DL)) || 0L))), 5UL)) & l_102[1]) && (-7L))) < (*l_172)))) , 0x1185L), l_99)), (*p_82))), 6L)))))
            { 
                union U4 *****l_191 = (void*)0;
                union U4 *****l_192 = &l_188;
                struct S1 *l_193 = &g_159;
                int32_t *l_194 = &l_171;
                (*l_192) = l_188;
                (*l_193) = g_159;
                for (l_98 = 1; (l_98 >= 0); l_98 -= 1)
                { 
                    int32_t **l_195[1][6][5] = {{{&l_172,&g_85[0][4],&l_172,&l_172,&g_85[0][4]},{&g_85[0][1],&g_85[1][4],&g_85[1][4],&g_85[0][1],&g_85[1][4]},{&g_85[0][4],&g_85[0][4],&l_194,&g_85[0][4],&g_85[0][4]},{&g_85[1][4],&g_85[0][1],&g_85[1][4],&g_85[1][4],&g_85[0][1]},{&g_85[0][4],&l_172,&l_172,&g_85[0][4],&l_172},{&g_85[0][1],&g_85[0][1],&l_194,&g_85[0][1],&g_85[0][1]}}};
                    int i, j, k;
                    l_196[1][4][1] = ((***l_166) , l_194);
                    return g_159.f0;
                }
                if ((*l_172))
                    continue;
            }
            else
            { 
                struct S1 *l_201[3];
                uint32_t *l_203[3][1];
                uint32_t **l_206 = &l_203[1][0];
                int32_t l_207[6] = {(-5L),0x0D8D9258L,(-5L),(-5L),0x0D8D9258L,(-5L)};
                int i, j;
                for (i = 0; i < 3; i++)
                    l_201[i] = &g_159;
                for (i = 0; i < 3; i++)
                {
                    for (j = 0; j < 1; j++)
                        l_203[i][j] = &g_76.f7;
                }
                l_105 |= (safe_sub_func_int32_t_s_s((safe_sub_func_uint64_t_u_u((*l_172), ((l_202 = g_159) , ((&l_99 == ((*g_9) , &l_99)) , (*l_172))))), 0x9E92CC73L));
                l_207[4] &= ((*l_172) = (((g_76.f7--) >= (*p_82)) , (((*l_206) = l_203[0][0]) == &l_143)));
                l_208 = g_159;
                (*l_172) = l_209[4];
                if (l_105)
                    break;
            }
            for (g_76.f2.f0 = 0; (g_76.f2.f0 < 21); g_76.f2.f0 = safe_add_func_int16_t_s_s(g_76.f2.f0, 6))
            { 
                if (g_212[2][3][0])
                    break;
                if ((*p_82))
                    break;
                return l_143;
            }
            l_105 ^= (safe_rshift_func_int16_t_s_s(((((*g_78) , (0x59L | l_160.f0)) || (((g_212[2][3][0] = 0xE34EDFC4183E401CLL) > (((*g_110) | 8UL) && (safe_mul_func_uint8_t_u_u((safe_mul_func_int16_t_s_s(7L, (*g_78))), g_42.f0)))) >= l_98)) >= (*l_172)), 4));
            ++g_219[1][4];
            for (l_104 = 0; (l_104 >= (-4)); l_104--)
            { 
                uint16_t l_227 = 0x5C68L;
                const int32_t l_236 = 0x917A761DL;
                union U4 l_241 = {0x529A5E11L};
                int32_t **l_244[3][4][7] = {{{&g_85[1][0],&l_196[0][0][1],(void*)0,&g_85[1][0],&g_85[0][3],&g_85[1][0],(void*)0},{&l_196[1][4][1],&g_85[1][0],(void*)0,&l_172,(void*)0,&g_85[1][0],&l_172},{&g_85[1][0],(void*)0,&l_172,&g_85[1][0],(void*)0,(void*)0,(void*)0},{(void*)0,&l_172,&l_172,&l_172,(void*)0,(void*)0,(void*)0}},{{(void*)0,&g_85[0][3],&l_172,(void*)0,&l_172,&g_85[1][0],&g_85[0][3]},{&g_85[1][0],(void*)0,&g_85[1][0],&l_196[1][2][1],&l_196[1][4][1],&g_85[1][0],&g_85[1][1]},{(void*)0,(void*)0,&g_85[1][0],&l_172,&g_85[1][1],&l_172,&g_85[1][0]},{(void*)0,(void*)0,&g_85[1][0],(void*)0,(void*)0,(void*)0,(void*)0}},{{&g_85[1][0],&l_172,&g_85[1][0],(void*)0,(void*)0,&g_85[1][0],(void*)0},{&l_196[1][4][1],&l_196[1][4][1],&l_172,&l_172,(void*)0,&g_85[1][0],&l_196[1][4][1]},{&g_85[1][0],&g_85[1][1],&l_172,&l_172,&g_85[1][1],&g_85[1][0],&l_196[1][4][1]},{&g_85[1][0],(void*)0,&l_172,&l_172,&l_196[1][4][1],&l_196[1][4][1],(void*)0}}};
                int i, j, k;
                for (g_76.f2.f7 = 9; (g_76.f2.f7 == (-10)); g_76.f2.f7 = safe_sub_func_int32_t_s_s(g_76.f2.f7, 7))
                { 
                    (*l_172) = (*l_172);
                }
                for (g_76.f2.f0 = 1; (g_76.f2.f0 <= 4); g_76.f2.f0 += 1)
                { 
                    int32_t l_230[6] = {(-8L),0x879C3BEDL,(-8L),(-8L),0x879C3BEDL,(-8L)};
                    uint32_t l_231 = 4294967295UL;
                    int i;
                    ++l_227;
                    if (l_209[g_76.f2.f0])
                        break;
                    ++l_231;
                    (*l_172) ^= (((safe_div_func_int8_t_s_s(l_236, (g_76.f1 ^ (safe_mul_func_uint8_t_u_u((((0x0819047CL & (safe_add_func_uint8_t_u_u(1UL, (l_241 , (((l_242 = g_159) , l_243) , (*g_110)))))) && 0UL) && l_230[4]), l_227))))) <= g_76.f2.f3) < (*g_78));
                    if ((*p_82))
                        break;
                }
                l_196[0][2][1] = (void*)0;
            }
        }
        for (g_76.f2.f4 = 0; (g_76.f2.f4 == 1); ++g_76.f2.f4)
        { 
            return l_99;
        }
    }
    return g_76.f5;
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_3, "g_3", print_hash_value);
    transparent_crc(g_10.f0, "g_10.f0", print_hash_value);
    transparent_crc(g_22.f0, "g_22.f0", print_hash_value);
    transparent_crc(g_25, "g_25", print_hash_value);
    transparent_crc(g_33, "g_33", print_hash_value);
    transparent_crc(g_42.f0, "g_42.f0", print_hash_value);
    transparent_crc(g_49, "g_49", print_hash_value);
    transparent_crc(g_53, "g_53", print_hash_value);
    transparent_crc(g_76.f0, "g_76.f0", print_hash_value);
    transparent_crc(g_76.f1, "g_76.f1", print_hash_value);
    transparent_crc(g_76.f2.f0, "g_76.f2.f0", print_hash_value);
    transparent_crc(g_76.f2.f1, "g_76.f2.f1", print_hash_value);
    transparent_crc(g_76.f2.f2, "g_76.f2.f2", print_hash_value);
    transparent_crc(g_76.f2.f3, "g_76.f2.f3", print_hash_value);
    transparent_crc(g_76.f2.f4, "g_76.f2.f4", print_hash_value);
    transparent_crc(g_76.f2.f5, "g_76.f2.f5", print_hash_value);
    transparent_crc(g_76.f2.f6, "g_76.f2.f6", print_hash_value);
    transparent_crc(g_76.f2.f7, "g_76.f2.f7", print_hash_value);
    transparent_crc(g_76.f3, "g_76.f3", print_hash_value);
    transparent_crc(g_76.f4, "g_76.f4", print_hash_value);
    transparent_crc(g_76.f5, "g_76.f5", print_hash_value);
    transparent_crc(g_76.f6, "g_76.f6", print_hash_value);
    transparent_crc(g_76.f7, "g_76.f7", print_hash_value);
    transparent_crc(g_79, "g_79", print_hash_value);
    transparent_crc(g_159.f0, "g_159.f0", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 5; j++)
        {
            for (k = 0; k < 1; k++)
            {
                transparent_crc(g_212[i][j][k], "g_212[i][j][k]", print_hash_value);

            }
        }
    }
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 5; j++)
        {
            transparent_crc(g_219[i][j], "g_219[i][j]", print_hash_value);

        }
    }
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 7; j++)
        {
            for (k = 0; k < 3; k++)
            {
                transparent_crc(g_250[i][j][k].f0, "g_250[i][j][k].f0", print_hash_value);
                transparent_crc(g_250[i][j][k].f2, "g_250[i][j][k].f2", print_hash_value);
                transparent_crc(g_250[i][j][k].f3, "g_250[i][j][k].f3", print_hash_value);

            }
        }
    }
    transparent_crc(g_330, "g_330", print_hash_value);
    transparent_crc(g_340.f0, "g_340.f0", print_hash_value);
    transparent_crc(g_340.f2, "g_340.f2", print_hash_value);
    transparent_crc(g_340.f3, "g_340.f3", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 6; j++)
        {
            transparent_crc(g_362[i][j], "g_362[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_635.f0, "g_635.f0", print_hash_value);
    transparent_crc(g_635.f1, "g_635.f1", print_hash_value);
    transparent_crc(g_635.f2, "g_635.f2", print_hash_value);
    transparent_crc(g_635.f3, "g_635.f3", print_hash_value);
    transparent_crc(g_635.f4, "g_635.f4", print_hash_value);
    transparent_crc(g_635.f5, "g_635.f5", print_hash_value);
    transparent_crc(g_635.f6, "g_635.f6", print_hash_value);
    transparent_crc(g_635.f7, "g_635.f7", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(g_643[i], "g_643[i]", print_hash_value);

    }
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transparent_crc(g_668[i][j].f0, "g_668[i][j].f0", print_hash_value);
            transparent_crc(g_668[i][j].f1, "g_668[i][j].f1", print_hash_value);
            transparent_crc(g_668[i][j].f2.f0, "g_668[i][j].f2.f0", print_hash_value);
            transparent_crc(g_668[i][j].f2.f1, "g_668[i][j].f2.f1", print_hash_value);
            transparent_crc(g_668[i][j].f2.f2, "g_668[i][j].f2.f2", print_hash_value);
            transparent_crc(g_668[i][j].f2.f3, "g_668[i][j].f2.f3", print_hash_value);
            transparent_crc(g_668[i][j].f2.f4, "g_668[i][j].f2.f4", print_hash_value);
            transparent_crc(g_668[i][j].f2.f5, "g_668[i][j].f2.f5", print_hash_value);
            transparent_crc(g_668[i][j].f2.f6, "g_668[i][j].f2.f6", print_hash_value);
            transparent_crc(g_668[i][j].f2.f7, "g_668[i][j].f2.f7", print_hash_value);
            transparent_crc(g_668[i][j].f3, "g_668[i][j].f3", print_hash_value);
            transparent_crc(g_668[i][j].f4, "g_668[i][j].f4", print_hash_value);
            transparent_crc(g_668[i][j].f5, "g_668[i][j].f5", print_hash_value);
            transparent_crc(g_668[i][j].f6, "g_668[i][j].f6", print_hash_value);
            transparent_crc(g_668[i][j].f7, "g_668[i][j].f7", print_hash_value);

        }
    }
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 6; j++)
        {
            for (k = 0; k < 1; k++)
            {
                transparent_crc(g_836[i][j][k].f0, "g_836[i][j][k].f0", print_hash_value);
                transparent_crc(g_836[i][j][k].f1, "g_836[i][j][k].f1", print_hash_value);
                transparent_crc(g_836[i][j][k].f2, "g_836[i][j][k].f2", print_hash_value);
                transparent_crc(g_836[i][j][k].f3, "g_836[i][j][k].f3", print_hash_value);
                transparent_crc(g_836[i][j][k].f4, "g_836[i][j][k].f4", print_hash_value);
                transparent_crc(g_836[i][j][k].f5, "g_836[i][j][k].f5", print_hash_value);
                transparent_crc(g_836[i][j][k].f6, "g_836[i][j][k].f6", print_hash_value);
                transparent_crc(g_836[i][j][k].f7, "g_836[i][j][k].f7", print_hash_value);

            }
        }
    }
    transparent_crc(g_895, "g_895", print_hash_value);
    transparent_crc(g_903.f0, "g_903.f0", print_hash_value);
    transparent_crc(g_925, "g_925", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(g_942[i].f0, "g_942[i].f0", print_hash_value);
        transparent_crc(g_942[i].f1, "g_942[i].f1", print_hash_value);
        transparent_crc(g_942[i].f2.f0, "g_942[i].f2.f0", print_hash_value);
        transparent_crc(g_942[i].f2.f1, "g_942[i].f2.f1", print_hash_value);
        transparent_crc(g_942[i].f2.f2, "g_942[i].f2.f2", print_hash_value);
        transparent_crc(g_942[i].f2.f3, "g_942[i].f2.f3", print_hash_value);
        transparent_crc(g_942[i].f2.f4, "g_942[i].f2.f4", print_hash_value);
        transparent_crc(g_942[i].f2.f5, "g_942[i].f2.f5", print_hash_value);
        transparent_crc(g_942[i].f2.f6, "g_942[i].f2.f6", print_hash_value);
        transparent_crc(g_942[i].f2.f7, "g_942[i].f2.f7", print_hash_value);
        transparent_crc(g_942[i].f3, "g_942[i].f3", print_hash_value);
        transparent_crc(g_942[i].f4, "g_942[i].f4", print_hash_value);
        transparent_crc(g_942[i].f5, "g_942[i].f5", print_hash_value);
        transparent_crc(g_942[i].f6, "g_942[i].f6", print_hash_value);
        transparent_crc(g_942[i].f7, "g_942[i].f7", print_hash_value);

    }
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_1017[i].f0, "g_1017[i].f0", print_hash_value);
        transparent_crc(g_1017[i].f1, "g_1017[i].f1", print_hash_value);
        transparent_crc(g_1017[i].f2, "g_1017[i].f2", print_hash_value);
        transparent_crc(g_1017[i].f3, "g_1017[i].f3", print_hash_value);
        transparent_crc(g_1017[i].f4, "g_1017[i].f4", print_hash_value);
        transparent_crc(g_1017[i].f5, "g_1017[i].f5", print_hash_value);
        transparent_crc(g_1017[i].f6, "g_1017[i].f6", print_hash_value);
        transparent_crc(g_1017[i].f7, "g_1017[i].f7", print_hash_value);

    }
    transparent_crc(g_1169, "g_1169", print_hash_value);
    transparent_crc(g_1181.f0, "g_1181.f0", print_hash_value);
    transparent_crc(g_1181.f1, "g_1181.f1", print_hash_value);
    transparent_crc(g_1181.f2.f0, "g_1181.f2.f0", print_hash_value);
    transparent_crc(g_1181.f2.f1, "g_1181.f2.f1", print_hash_value);
    transparent_crc(g_1181.f2.f2, "g_1181.f2.f2", print_hash_value);
    transparent_crc(g_1181.f2.f3, "g_1181.f2.f3", print_hash_value);
    transparent_crc(g_1181.f2.f4, "g_1181.f2.f4", print_hash_value);
    transparent_crc(g_1181.f2.f5, "g_1181.f2.f5", print_hash_value);
    transparent_crc(g_1181.f2.f6, "g_1181.f2.f6", print_hash_value);
    transparent_crc(g_1181.f2.f7, "g_1181.f2.f7", print_hash_value);
    transparent_crc(g_1181.f3, "g_1181.f3", print_hash_value);
    transparent_crc(g_1181.f4, "g_1181.f4", print_hash_value);
    transparent_crc(g_1181.f5, "g_1181.f5", print_hash_value);
    transparent_crc(g_1181.f6, "g_1181.f6", print_hash_value);
    transparent_crc(g_1181.f7, "g_1181.f7", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_1197[i], "g_1197[i]", print_hash_value);

    }
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_1255[i], "g_1255[i]", print_hash_value);

    }
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 7; j++)
        {
            transparent_crc(g_1271[i][j].f0, "g_1271[i][j].f0", print_hash_value);
            transparent_crc(g_1271[i][j].f1, "g_1271[i][j].f1", print_hash_value);
            transparent_crc(g_1271[i][j].f2, "g_1271[i][j].f2", print_hash_value);
            transparent_crc(g_1271[i][j].f3, "g_1271[i][j].f3", print_hash_value);
            transparent_crc(g_1271[i][j].f4, "g_1271[i][j].f4", print_hash_value);
            transparent_crc(g_1271[i][j].f5, "g_1271[i][j].f5", print_hash_value);
            transparent_crc(g_1271[i][j].f6, "g_1271[i][j].f6", print_hash_value);
            transparent_crc(g_1271[i][j].f7, "g_1271[i][j].f7", print_hash_value);

        }
    }
    transparent_crc(g_1287, "g_1287", print_hash_value);
    transparent_crc(g_1364, "g_1364", print_hash_value);
    transparent_crc(g_1380, "g_1380", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_1452[i], "g_1452[i]", print_hash_value);

    }
    transparent_crc(g_1577, "g_1577", print_hash_value);
    transparent_crc(g_1719.f0, "g_1719.f0", print_hash_value);
    transparent_crc(g_1719.f2, "g_1719.f2", print_hash_value);
    transparent_crc(g_1719.f3, "g_1719.f3", print_hash_value);
    transparent_crc(g_1741, "g_1741", print_hash_value);
    transparent_crc(g_1744, "g_1744", print_hash_value);
    transparent_crc(g_1797, "g_1797", print_hash_value);
    transparent_crc(g_1811, "g_1811", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_1847[i], "g_1847[i]", print_hash_value);

    }
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
