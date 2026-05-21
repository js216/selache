// SPDX-License-Identifier: MIT
// cctest_csmith_4c8f7bbc.c --- cctest case csmith_4c8f7bbc (csmith seed 1284471740)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x2c95c936 */

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

// Options:   -s 1284471740 -o /tmp/csmith_gen_3plqc_s3/csmith.c --concise --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 8 --max-block-size 5 --max-block-depth 4 --max-expr-complexity 8 --max-array-dim 3 --max-array-len-per-dim 7 --max-struct-fields 8 --max-union-fields 5

static long __undefined;


struct S0 {
   int8_t  f0;
   const uint32_t  f1;
   uint32_t  f2;
   int64_t  f3;
   uint8_t  f4;
   const int16_t  f5;
   uint8_t  f6;
};

union U1 {
   const int16_t  f0;
   const struct S0  f1;
   int16_t  f2;
   int32_t  f3;
   int64_t  f4;
};

union U2 {
   uint64_t  f0;
   const uint64_t  f1;
   int32_t  f2;
};


static int32_t g_3 = 1L;
static int16_t g_12 = 0x969AL;
static uint16_t g_14 = 0x5801L;
static uint8_t g_18 = 0UL;
static int32_t g_66 = 0x4E4A53E8L;
static int16_t g_68[2] = {1L,1L};
static int16_t *g_67 = &g_68[0];
static const int16_t g_83 = 0x1EB1L;
static const int16_t *g_82 = &g_83;
static uint64_t g_84 = 0x000C971708C9934BLL;
static union U1 g_86 = {0xB1B7L};
static int8_t g_111 = 0x34L;
static union U1 *g_124 = &g_86;
static uint32_t g_129 = 0x626D9AC2L;
static int16_t **g_146[6][4] = {{(void*)0,&g_67,&g_67,(void*)0},{&g_67,&g_67,&g_67,&g_67},{&g_67,&g_67,&g_67,&g_67},{&g_67,&g_67,&g_67,&g_67},{(void*)0,&g_67,(void*)0,&g_67},{(void*)0,&g_67,&g_67,(void*)0}};
static int32_t g_148 = (-3L);
static struct S0 g_164 = {0xF7L,0xD28A493CL,0xA845578DL,9L,255UL,1L,248UL};
static uint32_t g_179 = 4UL;
static uint32_t *g_178 = &g_179;
static struct S0 *g_189 = &g_164;
static struct S0 **g_188 = &g_189;
static struct S0 ***g_187 = &g_188;
static int16_t g_191 = 0x4739L;
static int8_t g_197 = 0xF9L;
static int64_t g_201 = (-5L);
static uint16_t g_202 = 65535UL;
static int32_t *g_208 = &g_148;
static struct S0 * const *g_366 = &g_189;
static struct S0 * const **g_365 = &g_366;
static const struct S0 g_376 = {1L,0xF40A6262L,18446744073709551609UL,0x96BA196C32E4B271LL,255UL,0x024EL,0UL};
static union U2 g_382 = {5UL};
static uint16_t g_392[5] = {0UL,0UL,0UL,0UL,0UL};
static int16_t ***g_443 = &g_146[1][0];
static int16_t ****g_442 = &g_443;
static int32_t g_447[6][4] = {{0x74CCC28DL,0x176A1526L,0xE8A465BDL,0x176A1526L},{0x176A1526L,0L,0xE8A465BDL,0xE8A465BDL},{0x74CCC28DL,0x74CCC28DL,0x176A1526L,0xE8A465BDL},{(-5L),0L,(-5L),(-5L)},{0xE8A465BDL,(-5L),(-5L),0xE8A465BDL},{0x176A1526L,(-5L),0L,(-5L)}};
static const uint32_t g_483 = 0x90A31A08L;
static uint32_t g_574 = 1UL;
static union U2 *g_692 = (void*)0;
static union U2 **g_691 = &g_692;
static union U2 ***g_690 = &g_691;
static uint16_t g_710 = 65532UL;
static const union U1 g_715 = {0x8795L};
static uint16_t g_842[7][6][6] = {{{0xF206L,0x9745L,0x87E5L,0x49FEL,0xEC01L,0x1433L},{65530UL,1UL,0xCCFAL,1UL,65530UL,0x1433L},{0xEC01L,0x49FEL,0x87E5L,0x9745L,0xF206L,0x1433L},{65535UL,0x9745L,0xCCFAL,0x49FEL,0x248EL,0x1433L},{65535UL,1UL,0x87E5L,1UL,65535UL,0x1433L},{0x248EL,0x49FEL,0xCCFAL,0x9745L,65535UL,0x1433L}},{{0xF206L,0x9745L,0x87E5L,0x49FEL,0xEC01L,0x1433L},{65530UL,1UL,0xCCFAL,1UL,65530UL,0x1433L},{0xEC01L,0x49FEL,0x87E5L,0x9745L,0xF206L,0x1433L},{65535UL,0x9745L,0xCCFAL,0x49FEL,0x248EL,0x1433L},{65535UL,1UL,0x87E5L,1UL,65535UL,0x1433L},{0x248EL,0x49FEL,0xCCFAL,0x9745L,65535UL,0x1433L}},{{0xF206L,0x9745L,0x87E5L,0x49FEL,0xEC01L,0x1433L},{65530UL,1UL,0xCCFAL,1UL,65530UL,0x1433L},{0xEC01L,0x49FEL,0x87E5L,0x9745L,0xF206L,0x1433L},{65535UL,0x9745L,0xCCFAL,0x49FEL,0x248EL,0x1433L},{65535UL,1UL,0x87E5L,1UL,65535UL,0x1433L},{0x248EL,0x49FEL,0xCCFAL,0x9745L,65535UL,0x1433L}},{{0xF206L,0x9745L,0x87E5L,0x49FEL,0xEC01L,0x1433L},{65530UL,1UL,0xCCFAL,1UL,65530UL,0x1433L},{0xEC01L,0x49FEL,0x87E5L,0x9745L,0xF206L,0x1433L},{65535UL,0x9745L,0xCCFAL,0x49FEL,0x248EL,0x1433L},{65535UL,1UL,0x87E5L,1UL,65535UL,0x1433L},{0x248EL,0x49FEL,0xCCFAL,0x9745L,65535UL,0x1433L}},{{0xF206L,0x9745L,0x87E5L,0x49FEL,0xEC01L,0x1433L},{65530UL,1UL,0xCCFAL,1UL,65530UL,0x1433L},{0xEC01L,0x49FEL,0x87E5L,0x9745L,0xF206L,0x1433L},{65535UL,0x9745L,0xCCFAL,0x49FEL,0x248EL,0x1433L},{65535UL,1UL,0x87E5L,1UL,65535UL,0x1433L},{0x248EL,0x49FEL,0xCCFAL,0x9745L,65535UL,0x1433L}},{{0xF206L,0x9745L,0xF206L,0xDB09L,1UL,0x9745L},{0xCE8DL,0xB110L,65535UL,0xB110L,0xCE8DL,0x9745L},{1UL,0xDB09L,0xF206L,0UL,0xDF5AL,0x9745L},{0x0142L,0UL,65535UL,0xDB09L,0xCBDBL,0x9745L},{0xEA08L,0xB110L,0xF206L,0xB110L,0xEA08L,0x9745L},{0xCBDBL,0xDB09L,65535UL,0UL,0x0142L,0x9745L}},{{0xDF5AL,0UL,0xF206L,0xDB09L,1UL,0x9745L},{0xCE8DL,0xB110L,65535UL,0xB110L,0xCE8DL,0x9745L},{1UL,0xDB09L,0xF206L,0UL,0xDF5AL,0x9745L},{0x0142L,0UL,65535UL,0xDB09L,0xCBDBL,0x9745L},{0xEA08L,0xB110L,0xF206L,0xB110L,0xEA08L,0x9745L},{0xCBDBL,0xDB09L,65535UL,0UL,0x0142L,0x9745L}}};
static union U2 g_862 = {2UL};
static uint32_t g_971 = 9UL;
static const int32_t g_984 = 8L;
static int32_t *g_996 = &g_66;
static int32_t g_1035 = 0xB5D9EF96L;
static const int32_t g_1088[3][4][2] = {{{0x583BF310L,0x583BF310L},{0x2067792EL,0x583BF310L},{0x583BF310L,1L},{0xB9B7449EL,0x26D9FC84L}},{{0x2067792EL,0xB9B7449EL},{0x26D9FC84L,1L},{0x26D9FC84L,0xB9B7449EL},{0x2067792EL,0x26D9FC84L}},{{0xB9B7449EL,1L},{0x583BF310L,0x583BF310L},{0x2067792EL,0x583BF310L},{0x583BF310L,1L}}};
static const int32_t g_1090 = 0L;
static int32_t *g_1113 = &g_862.f2;
static int32_t **g_1112 = &g_1113;
static int8_t g_1158 = (-1L);
static int16_t g_1268 = (-5L);
static int32_t g_1334 = 0L;
static union U2 g_1372[4] = {{0xCD41E0FCF1730D8FLL},{0xCD41E0FCF1730D8FLL},{0xCD41E0FCF1730D8FLL},{0xCD41E0FCF1730D8FLL}};
static struct S0 ****g_1392 = &g_187;
static struct S0 *****g_1391 = &g_1392;
static struct S0 * const ***g_1394[6][5] = {{&g_365,&g_365,&g_365,&g_365,&g_365},{&g_365,&g_365,&g_365,&g_365,&g_365},{&g_365,&g_365,&g_365,&g_365,&g_365},{&g_365,&g_365,&g_365,&g_365,&g_365},{&g_365,&g_365,&g_365,&g_365,&g_365},{&g_365,&g_365,&g_365,&g_365,&g_365}};
static struct S0 * const ****g_1393 = &g_1394[4][3];
static struct S0 *****g_1407 = &g_1392;
static int32_t g_1454 = (-1L);
static int32_t g_1494[2][2][2] = {{{(-5L),(-5L)},{(-5L),(-5L)}},{{(-5L),(-5L)},{(-5L),(-5L)}}};
static union U1 **g_1508 = &g_124;
static union U1 ***g_1507[4] = {&g_1508,&g_1508,&g_1508,&g_1508};
static union U1 ****g_1506 = &g_1507[1];
static int32_t **g_1560 = (void*)0;
static int32_t ***g_1559[3][6][5] = {{{&g_1560,&g_1560,&g_1560,&g_1560,&g_1560},{&g_1560,&g_1560,&g_1560,&g_1560,&g_1560},{(void*)0,&g_1560,&g_1560,&g_1560,(void*)0},{&g_1560,(void*)0,&g_1560,&g_1560,&g_1560},{(void*)0,&g_1560,&g_1560,&g_1560,&g_1560},{&g_1560,&g_1560,&g_1560,&g_1560,(void*)0}},{{(void*)0,&g_1560,&g_1560,&g_1560,&g_1560},{&g_1560,(void*)0,&g_1560,(void*)0,&g_1560},{&g_1560,&g_1560,&g_1560,&g_1560,&g_1560},{(void*)0,&g_1560,&g_1560,&g_1560,&g_1560},{&g_1560,&g_1560,(void*)0,&g_1560,&g_1560},{&g_1560,&g_1560,&g_1560,&g_1560,&g_1560}},{{&g_1560,&g_1560,&g_1560,&g_1560,&g_1560},{(void*)0,&g_1560,&g_1560,(void*)0,(void*)0},{&g_1560,&g_1560,&g_1560,&g_1560,&g_1560},{&g_1560,&g_1560,(void*)0,&g_1560,&g_1560},{&g_1560,&g_1560,&g_1560,&g_1560,(void*)0},{&g_1560,&g_1560,&g_1560,(void*)0,&g_1560}}};
static union U1 g_1562 = {0x2F6CL};
static uint32_t g_1569 = 0xE72617CEL;
static uint32_t * const *g_1610 = (void*)0;
static uint32_t * const **g_1609 = &g_1610;
static uint32_t * const ***g_1608 = &g_1609;
static int32_t g_1625 = 2L;
static int32_t *g_1772 = &g_148;
static union U2 ***g_1781 = (void*)0;
static int32_t g_1812 = 0x5871C0D7L;
static int64_t g_1813 = 0xD9B39363435FB560LL;
static uint32_t * const ****g_1819 = &g_1608;
static uint16_t g_1843[3][4][3] = {{{0xF879L,2UL,0x599EL},{0x5493L,0x598FL,0x5493L},{0x5493L,0xF879L,0x598FL},{0xF879L,0x5493L,0x5493L}},{{0x598FL,0x5493L,0x599EL},{2UL,0xF879L,65529UL},{0x598FL,0x598FL,65529UL},{0xF879L,2UL,0x599EL}},{{0x5493L,0x598FL,0x5493L},{0x5493L,0xF879L,0x598FL},{0xF879L,0x5493L,0x5493L},{0x598FL,0x5493L,0x599EL}}};
static uint16_t g_1923 = 0UL;
static union U1 *****g_1972[4] = {&g_1506,&g_1506,&g_1506,&g_1506};
static int64_t g_2006[6][5] = {{0L,0L,0L,0L,(-5L)},{0x357008A93087205ALL,0x85090766DC9ECF32LL,0x85090766DC9ECF32LL,0x357008A93087205ALL,0x2A6839D25EA40579LL},{0L,0L,0L,0L,(-5L)},{0x357008A93087205ALL,0x85090766DC9ECF32LL,0x85090766DC9ECF32LL,0x357008A93087205ALL,0x2A6839D25EA40579LL},{0L,0L,0L,0L,(-5L)},{0x357008A93087205ALL,0x85090766DC9ECF32LL,0x85090766DC9ECF32LL,0x357008A93087205ALL,0x2A6839D25EA40579LL}};
static const int64_t *g_2094 = &g_164.f3;
static const int64_t **g_2093[6] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
static uint32_t **g_2100[2][3] = {{&g_178,&g_178,&g_178},{&g_178,&g_178,&g_178}};
static uint32_t ** const *g_2099 = &g_2100[0][1];
static uint32_t ** const **g_2098 = &g_2099;
static const union U2 g_2111 = {0x77F2448687CD7BF6LL};
static const union U2 *g_2110 = &g_2111;
static uint32_t **g_2131 = &g_178;
static uint32_t *** const g_2130 = &g_2131;
static uint32_t *** const *g_2129 = &g_2130;
static uint32_t *** const **g_2128[3] = {&g_2129,&g_2129,&g_2129};
static int32_t *g_2173 = &g_447[4][0];
static uint64_t **g_2219 = (void*)0;
static uint64_t ***g_2218 = &g_2219;
static uint8_t *g_2231[5] = {&g_18,&g_18,&g_18,&g_18,&g_18};
static const int16_t **g_2311 = &g_82;



static uint32_t  func_1(void);
static int32_t  func_8(uint8_t  p_9, uint32_t  p_10);
static union U1  func_20(uint32_t  p_21, const uint8_t * p_22, uint8_t  p_23, int16_t * p_24, union U1  p_25);
static const uint8_t * func_26(const uint16_t * p_27);
static const uint16_t * func_28(int8_t  p_29, uint8_t * p_30);
static uint8_t * func_31(int64_t  p_32, int16_t * p_33, const int32_t  p_34, int16_t  p_35);
static int16_t * func_39(int16_t  p_40, int64_t  p_41, int16_t * p_42, int16_t  p_43, int8_t  p_44);
static int16_t  func_45(int16_t ** const  p_46, int16_t * p_47, uint16_t * p_48);




static uint32_t  func_1(void)
{ 
    const uint64_t l_2 = 0x2A3B3F365653D423LL;
    struct S0 l_1523 = {0x83L,0xB6B2F87EL,0x02AAFFD0L,0L,0x40L,0x63E9L,0UL};
    int32_t l_1584 = 0L;
    int32_t l_1585 = (-3L);
    int32_t l_1586 = 0L;
    int32_t l_1588 = 5L;
    int32_t l_1592 = 0xD2444333L;
    int16_t l_1638 = 0L;
    int32_t *l_1678[4] = {&g_447[4][0],&g_447[4][0],&g_447[4][0],&g_447[4][0]};
    uint64_t l_1685 = 0x7090E8216DF92DCFLL;
    const uint8_t *l_1722 = &g_376.f4;
    union U1 l_1723 = {0L};
    int32_t *l_1728 = (void*)0;
    const union U2 l_1750[3][2][5] = {{{{0x44CC85E875FE0385LL},{0x44CC85E875FE0385LL},{0x44CC85E875FE0385LL},{0x44CC85E875FE0385LL},{0x44CC85E875FE0385LL}},{{0x44CC85E875FE0385LL},{0x44CC85E875FE0385LL},{0x44CC85E875FE0385LL},{0x44CC85E875FE0385LL},{0x44CC85E875FE0385LL}}},{{{0x44CC85E875FE0385LL},{0x44CC85E875FE0385LL},{0x44CC85E875FE0385LL},{0x44CC85E875FE0385LL},{0x44CC85E875FE0385LL}},{{0x44CC85E875FE0385LL},{0x44CC85E875FE0385LL},{0x44CC85E875FE0385LL},{0x44CC85E875FE0385LL},{0x44CC85E875FE0385LL}}},{{{0x44CC85E875FE0385LL},{0x44CC85E875FE0385LL},{0x44CC85E875FE0385LL},{0x44CC85E875FE0385LL},{0x44CC85E875FE0385LL}},{{0x44CC85E875FE0385LL},{0x44CC85E875FE0385LL},{0x44CC85E875FE0385LL},{0x44CC85E875FE0385LL},{0x44CC85E875FE0385LL}}}};
    int32_t l_1770 = 5L;
    uint32_t *****l_1792 = (void*)0;
    uint8_t l_1832 = 0xE0L;
    int32_t l_1835 = 0x8C9D23AAL;
    int8_t l_1867[3];
    int64_t *l_1879 = (void*)0;
    int64_t **l_1878 = &l_1879;
    int32_t l_1880 = 9L;
    int16_t l_1882[5];
    int32_t l_1898 = 0xB03DDDF8L;
    const uint64_t l_1968 = 0x2B9DC870C6B67BA3LL;
    int32_t l_1977 = 0x83C3F5F0L;
    struct S0 *** const *l_1991[1];
    struct S0 *** const **l_1990 = &l_1991[0];
    int32_t l_2058[2];
    uint32_t l_2102 = 0x921228F8L;
    int32_t l_2103 = 4L;
    int8_t l_2104 = 0x0CL;
    uint8_t l_2105 = 0x77L;
    int8_t l_2121 = 0x36L;
    uint32_t ***l_2127 = &g_2100[0][1];
    uint32_t *** const *l_2126[7][6] = {{&l_2127,&l_2127,&l_2127,&l_2127,&l_2127,&l_2127},{(void*)0,&l_2127,(void*)0,&l_2127,(void*)0,&l_2127},{&l_2127,&l_2127,&l_2127,&l_2127,&l_2127,&l_2127},{(void*)0,&l_2127,(void*)0,&l_2127,(void*)0,&l_2127},{&l_2127,&l_2127,&l_2127,&l_2127,&l_2127,&l_2127},{(void*)0,&l_2127,(void*)0,&l_2127,(void*)0,&l_2127},{&l_2127,&l_2127,&l_2127,&l_2127,&l_2127,&l_2127}};
    uint32_t *** const **l_2125 = &l_2126[5][5];
    union U1 ****l_2150 = &g_1507[1];
    int64_t l_2160 = (-8L);
    uint64_t *l_2186 = &g_382.f0;
    uint64_t **l_2185 = &l_2186;
    int32_t *l_2220 = &g_447[1][2];
    int32_t l_2232 = 0xAEB4CD7CL;
    int16_t ****l_2301 = &g_443;
    const uint32_t l_2313[6] = {0x0CE47970L,0x0CE47970L,0x0CE47970L,0x0CE47970L,0x0CE47970L,0x0CE47970L};
    uint64_t l_2332[3];
    int i, j, k;
    for (i = 0; i < 3; i++)
        l_1867[i] = 0xFDL;
    for (i = 0; i < 5; i++)
        l_1882[i] = 2L;
    for (i = 0; i < 1; i++)
        l_1991[i] = &g_187;
    for (i = 0; i < 2; i++)
        l_2058[i] = (-1L);
    for (i = 0; i < 3; i++)
        l_2332[i] = 0UL;
    if ((l_2 , (l_2 , l_2)))
    { 
        uint16_t l_19 = 0x71B3L;
        int8_t *l_1514 = (void*)0;
        int8_t *l_1515[3][4] = {{(void*)0,&g_197,(void*)0,&g_197},{(void*)0,&g_197,(void*)0,&g_197},{(void*)0,&g_197,(void*)0,&g_197}};
        int32_t l_1516 = 0x5CCD7078L;
        int64_t *l_1522 = &g_86.f4;
        struct S0 **l_1528 = &g_189;
        union U2 **l_1535[7] = {&g_692,&g_692,&g_692,&g_692,&g_692,&g_692,&g_692};
        struct S0 *****l_1548 = &g_1392;
        struct S0 *****l_1549 = &g_1392;
        int32_t l_1574 = (-1L);
        int32_t l_1575 = (-1L);
        int32_t l_1576 = (-1L);
        int32_t l_1577 = 1L;
        int32_t l_1578 = 1L;
        int32_t l_1579 = 0xAEF37440L;
        int32_t l_1580 = 8L;
        int32_t l_1581 = 9L;
        int32_t l_1582 = 0xF4BCEA0EL;
        int32_t l_1583 = 0L;
        int32_t l_1587 = (-1L);
        int32_t l_1589 = 0xEFF06E30L;
        int32_t l_1590 = 0xBF83EE15L;
        int32_t l_1591 = 0xDED4D219L;
        int32_t l_1593 = 0L;
        uint8_t l_1599 = 0x7AL;
        int32_t l_1639 = 0xCDFC7A63L;
        int16_t *l_1646 = &g_191;
        int16_t *l_1647[2];
        int16_t *l_1648[2];
        int32_t *l_1679 = &l_1588;
        int32_t l_1702 = 0L;
        union U1 *l_1721 = &g_86;
        uint64_t l_1726 = 0UL;
        int i, j;
        for (i = 0; i < 2; i++)
            l_1647[i] = &l_1638;
        for (i = 0; i < 2; i++)
            l_1648[i] = (void*)0;
        for (g_3 = 26; (g_3 >= 0); --g_3)
        { 
            int16_t *l_11 = &g_12;
            uint16_t *l_13[1];
            uint8_t *l_17 = &g_18;
            uint32_t l_1510 = 18446744073709551615UL;
            int i;
            for (i = 0; i < 1; i++)
                l_13[i] = &g_14;
            (*g_208) |= ((func_8(((*l_17) = (((*l_11) ^= g_3) != (++g_14))), l_19) != (*g_178)) | (((l_1510 == ((((*g_178) >= l_19) & l_1510) , 0x91DE3490L)) , &g_201) == (void*)0));
        }
    }
    else
    { 
        uint32_t l_1751 = 0x58B9C606L;
        uint8_t l_1758 = 0xE8L;
        const union U2 l_1775 = {2UL};
        int64_t *l_1816 = &g_164.f3;
        union U2 ***l_1818[5][2] = {{&g_691,&g_691},{&g_691,&g_691},{&g_691,&g_691},{&g_691,&g_691},{&g_691,&g_691}};
        int32_t l_1820[2][6] = {{0x8EC05E41L,(-1L),0x8EC05E41L,(-10L),(-10L),0x8EC05E41L},{0xCF09CACAL,0xCF09CACAL,(-10L),0xB41A6841L,(-10L),0xCF09CACAL}};
        int32_t l_1821 = 0xFD5FD1F1L;
        int32_t l_1824[4];
        int32_t *l_1870[1][6] = {{&l_1592,&l_1592,&l_1592,&l_1592,&l_1592,&l_1592}};
        int32_t **l_1871 = &l_1678[3];
        uint8_t l_1881[7][7] = {{0UL,0UL,0xDFL,0UL,0UL,0UL,0UL},{0x5CL,9UL,0x5CL,9UL,9UL,0x5CL,9UL},{0UL,247UL,0xDFL,0xDFL,247UL,0UL,247UL},{0x5CL,9UL,9UL,0x5CL,9UL,0x5CL,9UL},{0UL,0UL,0UL,0xDFL,0UL,0UL,0UL},{0x46L,9UL,0x12L,9UL,0x46L,0x46L,9UL},{4UL,247UL,4UL,0UL,0UL,4UL,247UL}};
        int8_t l_1896 = 0xCEL;
        const int64_t l_1899 = 0xBB7221BB5517E250LL;
        int16_t *l_1903 = &l_1882[3];
        int8_t l_1959 = 1L;
        uint16_t l_2030 = 0UL;
        int16_t l_2072 = 0x8F88L;
        const int64_t **l_2097[1];
        int32_t l_2151 = 0x0F40B000L;
        uint32_t l_2165[1][1];
        int32_t *l_2166 = (void*)0;
        uint8_t l_2184 = 0x29L;
        int32_t l_2199 = (-9L);
        union U1 l_2228[5] = {{-9L},{-9L},{-9L},{-9L},{-9L}};
        uint32_t l_2244 = 0xD800CEE5L;
        int8_t l_2246 = 0xFAL;
        int16_t ****l_2271 = &g_443;
        int8_t l_2291[3];
        const int16_t **l_2310[4];
        union U2 l_2312[2] = {{1UL},{1UL}};
        int i, j;
        for (i = 0; i < 4; i++)
            l_1824[i] = 0xD59F6A5DL;
        for (i = 0; i < 1; i++)
            l_2097[i] = &g_2094;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 1; j++)
                l_2165[i][j] = 0xEE18DC4FL;
        }
        for (i = 0; i < 3; i++)
            l_2291[i] = (-1L);
        for (i = 0; i < 4; i++)
            l_2310[i] = &g_82;
        for (g_129 = 0; (g_129 <= 3); g_129 += 1)
        { 
            int8_t l_1752 = 3L;
            uint8_t *l_1771 = &l_1758;
            int16_t **** const *l_1817 = (void*)0;
            int32_t l_1822 = (-1L);
            int32_t l_1837[6] = {0L,0L,(-1L),0L,0L,(-1L)};
            union U2 l_1864 = {0x9092E1B1E83DFE2BLL};
            int i;
            for (l_1638 = 0; (l_1638 <= 3); l_1638 += 1)
            { 
                union U1 *****l_1735[7] = {&g_1506,&g_1506,&g_1506,&g_1506,&g_1506,&g_1506,&g_1506};
                union U1 ****l_1736 = (void*)0;
                int32_t l_1741[1][5][1];
                uint64_t *l_1753 = &g_84;
                int i, j, k;
                for (i = 0; i < 1; i++)
                {
                    for (j = 0; j < 5; j++)
                    {
                        for (k = 0; k < 1; k++)
                            l_1741[i][j][k] = 0x05031A63L;
                    }
                }
                if (((((safe_lshift_func_int16_t_s_u((*g_67), 12)) < ((safe_unary_minus_func_int16_t_s((safe_div_func_int64_t_s_s(((&g_1507[g_129] != (l_1736 = &g_1507[1])) , (((*l_1753) = (safe_mul_func_int8_t_s_s((((-10L) ^ (safe_div_func_int16_t_s_s(l_1741[0][2][0], (safe_div_func_int64_t_s_s((safe_lshift_func_uint8_t_u_u(255UL, (safe_div_func_int16_t_s_s(((safe_mod_func_int64_t_s_s(((l_1750[0][1][3] , l_1751) & 5L), 0x4C8C9E359770F553LL)) != (*g_67)), 0x2118L)))), l_1752))))) ^ 0x6373145EL), g_447[5][3]))) <= l_1752)), l_1752)))) < l_1752)) | g_376.f4) | 1UL))
                { 
                    return g_201;
                }
                else
                { 
                    int32_t **l_1754 = &g_208;
                    (*l_1754) = &l_1741[0][1][0];
                }
                for (l_1723.f2 = 0; (l_1723.f2 <= 5); l_1723.f2 += 1)
                { 
                    int i, j, k;
                    (****g_1391) = &l_1523;
                    return g_842[g_129][l_1723.f2][l_1723.f2];
                }
                for (g_191 = 3; (g_191 >= 0); g_191 -= 1)
                { 
                    int16_t l_1755 = 0x7B29L;
                    if (l_1755)
                        break;
                    return l_1755;
                }
                (*g_996) = (0x542AL < (safe_sub_func_uint32_t_u_u((*g_178), (((*g_67) > (*g_82)) && l_1758))));
            }
            for (l_1523.f2 = 0; (l_1523.f2 <= 3); l_1523.f2 += 1)
            { 
                return l_1751;
            }
            if ((safe_rshift_func_uint8_t_u_u(((*l_1771) = (safe_mod_func_int32_t_s_s(((~(((safe_sub_func_uint64_t_u_u((safe_mul_func_int16_t_s_s((safe_lshift_func_uint8_t_u_u((((*g_443) != (void*)0) || (l_1770 , g_971)), 1)), 65535UL)), (-8L))) >= (*g_82)) ^ g_984)) , 0xA7749357L), l_1752))), l_1752)))
            { 
                uint8_t l_1789 = 0UL;
                g_1772 = &l_1585;
                for (g_1562.f3 = 3; (g_1562.f3 >= 0); g_1562.f3 -= 1)
                { 
                    const union U1 l_1780 = {0L};
                    union U2 * const *l_1783 = &g_692;
                    union U2 * const **l_1782 = &l_1783;
                    uint16_t *l_1784 = &g_202;
                    int8_t *l_1787 = (void*)0;
                    int8_t *l_1788 = &g_111;
                    int i, j;
                    (*g_996) = ((safe_sub_func_int64_t_s_s((((*l_1788) |= (l_1775 , ((safe_lshift_func_uint8_t_u_s(((safe_div_func_int32_t_s_s((((*l_1784) = (l_1775 , (l_1780 , (g_1781 == (g_66 , l_1782))))) & (safe_mul_func_int16_t_s_s(((*g_67) , (*g_82)), g_86.f0))), (*g_178))) && g_376.f2), l_1780.f2)) <= g_1088[0][0][0]))) | l_1752), g_1372[0].f0)) <= 0xBB0ED9A1L);
                }
                (****g_1391) = (*g_366);
                (*g_996) = l_1789;
            }
            else
            { 
                uint32_t ****l_1791[7];
                uint32_t *****l_1790 = &l_1791[3];
                int32_t l_1793[3];
                int64_t *l_1814 = &g_164.f3;
                uint32_t l_1825 = 0x964A0D44L;
                int i;
                for (i = 0; i < 7; i++)
                    l_1791[i] = (void*)0;
                for (i = 0; i < 3; i++)
                    l_1793[i] = 0xD0210907L;
                l_1792 = l_1790;
                for (g_164.f0 = 2; (g_164.f0 >= 0); g_164.f0 -= 1)
                { 
                    if (l_1793[0])
                        break;
                }
                for (g_382.f0 = 0; (g_382.f0 <= 3); g_382.f0 += 1)
                { 
                    int64_t *l_1796 = (void*)0;
                    int32_t l_1802 = 0x1287A6B5L;
                    uint32_t *l_1803 = &l_1751;
                    int64_t **l_1815[1];
                    int i, j;
                    for (i = 0; i < 1; i++)
                        l_1815[i] = &l_1814;
                    (*g_996) &= (safe_mod_func_uint16_t_u_u((l_1796 == (l_1816 = (((((((safe_unary_minus_func_int16_t_s((safe_sub_func_uint32_t_u_u((((safe_sub_func_uint64_t_u_u(((++(*l_1803)) , (safe_mod_func_uint32_t_u_u((safe_mod_func_uint32_t_u_u((safe_add_func_int8_t_s_s(g_447[g_129][g_129], g_483)), l_1802)), g_1812))), 1L)) && g_197) > g_68[0]), l_1793[0])))) > l_1775.f0) <= (*g_1772)) != g_862.f0) > g_1813) > (*g_178)) , l_1814))), (*g_67)));
                    (*g_996) = 0L;
                }
                if (((l_1817 == &g_442) , (&g_691 != l_1818[0][0])))
                { 
                    int16_t l_1823 = 0xC010L;
                    g_1819 = &g_1608;
                    l_1825++;
                    (*g_1772) ^= l_1793[2];
                }
                else
                { 
                    l_1793[0] = ((void*)0 == (*g_691));
                    return g_1494[1][0][0];
                }
            }
            for (g_971 = (-27); (g_971 > 38); ++g_971)
            { 
                int32_t **l_1830 = &g_996;
                int32_t l_1836 = 0x9BB2EB13L;
                int32_t l_1838 = (-1L);
                int32_t l_1839 = 0x5470F82CL;
                int32_t l_1840 = (-1L);
                int32_t l_1841[7][5] = {{(-1L),0x905E15B9L,0x905E15B9L,(-1L),0x905E15B9L},{0L,0L,5L,0L,0L},{0x905E15B9L,(-1L),0x905E15B9L,0x905E15B9L,(-1L)},{0L,0xBCC54A65L,0xBCC54A65L,0L,0xBCC54A65L},{(-1L),(-1L),1L,(-1L),(-1L)},{0xBCC54A65L,0L,0xBCC54A65L,0xBCC54A65L,0L},{(-1L),0x905E15B9L,0x905E15B9L,(-1L),0x905E15B9L}};
                int32_t l_1842[4][1][4] = {{{0L,0L,0L,0L}},{{0L,0L,0L,0L}},{{0L,0L,0L,0L}},{{0L,0L,0L,0L}}};
                int i, j, k;
                (*l_1830) = &l_1584;
                (**l_1830) ^= (g_1088[0][1][1] > ((*l_1771) ^= g_1158));
                for (l_1592 = 2; (l_1592 >= 0); l_1592 -= 1)
                { 
                    int32_t l_1831[7][6][2] = {{{0xBDC29E7BL,0x78A0E8A6L},{0xBDC29E7BL,0L},{(-9L),0x78A0E8A6L},{0x78A0E8A6L,0x0C9850BBL},{0x78A0E8A6L,0x78A0E8A6L},{(-9L),0L}},{{0x78A0E8A6L,(-9L)},{0x78A0E8A6L,0L},{(-9L),0x78A0E8A6L},{0x78A0E8A6L,0x0C9850BBL},{0x78A0E8A6L,0x78A0E8A6L},{(-9L),0L}},{{0x78A0E8A6L,(-9L)},{0x78A0E8A6L,0L},{(-9L),0x78A0E8A6L},{0x78A0E8A6L,0x0C9850BBL},{0x78A0E8A6L,0x78A0E8A6L},{(-9L),0L}},{{0x78A0E8A6L,(-9L)},{0x78A0E8A6L,0L},{(-9L),0x78A0E8A6L},{0x78A0E8A6L,0x0C9850BBL},{0x78A0E8A6L,0x78A0E8A6L},{(-9L),0L}},{{0x78A0E8A6L,(-9L)},{0x78A0E8A6L,0L},{(-9L),0x78A0E8A6L},{0x78A0E8A6L,0x0C9850BBL},{0x78A0E8A6L,0x78A0E8A6L},{(-9L),0L}},{{0x78A0E8A6L,(-9L)},{0x78A0E8A6L,0L},{(-9L),0x78A0E8A6L},{0x78A0E8A6L,0x0C9850BBL},{0x78A0E8A6L,0x78A0E8A6L},{(-9L),0L}},{{0x78A0E8A6L,(-9L)},{0x78A0E8A6L,0L},{(-9L),0x78A0E8A6L},{0x78A0E8A6L,0x0C9850BBL},{0x78A0E8A6L,0x78A0E8A6L},{(-9L),0L}}};
                    int i, j, k;
                    (*g_1772) = ((**l_1830) & g_376.f6);
                    l_1832++;
                    g_1843[2][0][2]--;
                }
                for (l_1758 = 28; (l_1758 < 22); l_1758--)
                { 
                    uint8_t l_1849[3][5] = {{0x84L,0x84L,0x84L,0x84L,0x84L},{0xF0L,0xB0L,0xF0L,0xB0L,0xF0L},{0x84L,0x84L,0x84L,0x84L,0x84L}};
                    int8_t *l_1865 = &g_111;
                    uint8_t *l_1866[1];
                    int i, j;
                    for (i = 0; i < 1; i++)
                        l_1866[i] = (void*)0;
                    (**l_1830) = 0xB047625DL;
                    (*g_996) |= ((+g_1494[1][0][1]) ^ l_1820[1][2]);
                    l_1849[2][0]--;
                    l_1867[0] ^= (safe_add_func_uint64_t_u_u((safe_mod_func_int64_t_s_s(0xBB0C5AD4345840D5LL, (safe_div_func_int64_t_s_s(l_1752, (safe_lshift_func_uint8_t_u_s((safe_add_func_int32_t_s_s(((l_1750[0][1][3] , (**l_1830)) > ((g_18 ^= ((safe_mod_func_int8_t_s_s(((*l_1865) |= ((((*g_82) > ((*****g_1393) , (l_1864 , l_1849[2][0]))) & 4L) || 5UL)), 0x9AL)) >= l_1849[2][0])) , 0x57B0B959657E5424LL)), (*g_178))), g_1494[1][0][1])))))), g_483));
                }
            }
            (*g_996) |= (safe_mod_func_int8_t_s_s((&g_442 == &g_442), g_1088[0][0][0]));
        }
        (*l_1871) = (l_1870[0][3] = &l_1585);
    }
    return l_2332[0];
}



static int32_t  func_8(uint8_t  p_9, uint32_t  p_10)
{ 
    int16_t *l_36 = &g_12;
    int16_t *l_38[5][6];
    int16_t **l_37 = &l_38[4][1];
    union U2 l_53 = {0x79116971DB956746LL};
    union U1 l_935[3] = {{0x0B19L},{0x0B19L},{0x0B19L}};
    int32_t **l_956 = &g_208;
    int32_t l_965 = 0xAE3F42E5L;
    int32_t l_997 = 6L;
    uint64_t l_1026 = 0x2287604A57B500DELL;
    union U2 ***l_1036 = &g_691;
    struct S0 ***l_1062[2];
    uint32_t l_1066 = 4294967295UL;
    int32_t l_1075 = 0xD4A3D455L;
    int32_t l_1076 = 0x98EB4F4AL;
    int32_t l_1077[5][6][6] = {{{0x79324007L,(-1L),0xBB14FFDBL,1L,1L,1L},{0L,1L,0x9D4C325CL,0x9D4C325CL,1L,0L},{0xC650C1F5L,0xD6A14909L,(-4L),0L,1L,0xBB14FFDBL},{0xAB4EB1DAL,0xDE06A0D0L,(-4L),(-1L),0xAB4EB1DAL,1L},{0xAB4EB1DAL,0x9D4C325CL,(-1L),0L,0xF69C8D6CL,1L},{0xC650C1F5L,1L,0x870BD004L,0x9D4C325CL,0x79324007L,0xF69C8D6CL}},{{0L,1L,(-1L),1L,0L,0xD6A14909L},{0x79324007L,0xD8B174A2L,(-4L),1L,0L,0xAB4EB1DAL},{0xDE06A0D0L,1L,(-4L),0x79324007L,0x79324007L,(-4L)},{1L,1L,0x9D4C325CL,(-4L),0xF69C8D6CL,0xD84D0481L},{0xDE06A0D0L,0x9D4C325CL,0xBB14FFDBL,0xD84D0481L,0xAB4EB1DAL,0x9D4C325CL},{0x79324007L,0xDE06A0D0L,0xBB14FFDBL,0xD6A14909L,1L,0xD84D0481L}},{{0L,0xD6A14909L,0x9D4C325CL,0xC650C1F5L,1L,(-4L)},{0xC650C1F5L,1L,(-4L),(-8L),1L,0xAB4EB1DAL},{0xAB4EB1DAL,(-1L),(-4L),0xDE06A0D0L,0xAB4EB1DAL,0xD6A14909L},{0xAB4EB1DAL,0xC650C1F5L,0L,1L,0xAB4EB1DAL,0xAB4EB1DAL},{1L,1L,1L,1L,1L,0xBB14FFDBL},{0x79324007L,0xAB4EB1DAL,0L,0x9D4C325CL,0xF69C8D6CL,0xC650C1F5L}},{{1L,(-8L),0xD6A14909L,0xDE06A0D0L,0xF69C8D6CL,(-4L)},{0xD8B174A2L,0xAB4EB1DAL,(-4L),0xD6A14909L,1L,0x79324007L},{0xD84D0481L,1L,0x870BD004L,1L,0xAB4EB1DAL,(-1L)},{0xD8B174A2L,1L,(-4L),(-1L),0L,1L},{1L,0L,(-4L),0xC650C1F5L,0xD84D0481L,(-1L)},{0x79324007L,0xC650C1F5L,0x870BD004L,0x870BD004L,0xC650C1F5L,0x79324007L}},{{1L,0x9D4C325CL,(-4L),0xF69C8D6CL,0xD84D0481L,(-4L)},{0L,0xD8B174A2L,0xD6A14909L,0L,0L,0xC650C1F5L},{0L,0x870BD004L,0L,0xF69C8D6CL,0xAB4EB1DAL,0xBB14FFDBL},{1L,0xD84D0481L,1L,0x870BD004L,1L,0xAB4EB1DAL},{0x79324007L,0xBB14FFDBL,0L,0xC650C1F5L,0xF69C8D6CL,0x9D4C325CL},{1L,0L,0xD6A14909L,(-1L),0xF69C8D6CL,0L}}};
    uint64_t l_1078 = 4UL;
    const int32_t *l_1089 = &g_1090;
    uint32_t l_1133 = 0x24EA492BL;
    uint32_t * const *l_1154 = &g_178;
    uint32_t * const **l_1153 = &l_1154;
    struct S0 ****l_1239 = &l_1062[0];
    int32_t l_1270 = (-3L);
    int32_t l_1271 = 0x30072C41L;
    int16_t *** const *l_1279 = &g_443;
    uint32_t ** const l_1298 = (void*)0;
    uint32_t ** const *l_1297 = &l_1298;
    uint16_t l_1337 = 0x542AL;
    int32_t l_1363 = 0xE5A6AF06L;
    int64_t l_1378 = (-1L);
    int32_t * const l_1388 = &l_1077[2][4][4];
    int16_t l_1400 = 0x04A5L;
    union U1 ***l_1469 = (void*)0;
    union U1 ****l_1468 = &l_1469;
    int i, j, k;
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 6; j++)
            l_38[i][j] = (void*)0;
    }
    for (i = 0; i < 2; i++)
        l_1062[i] = &g_188;
    return p_9;
}



static union U1  func_20(uint32_t  p_21, const uint8_t * p_22, uint8_t  p_23, int16_t * p_24, union U1  p_25)
{ 
    int32_t *l_936 = &g_148;
    int32_t *l_937 = (void*)0;
    int32_t *l_938 = (void*)0;
    int32_t *l_939[4];
    int64_t l_940[1][6][6] = {{{0L,0L,0L,0L,0x152576F72D6C7655LL,(-1L)},{6L,0L,0x152576F72D6C7655LL,6L,0x152576F72D6C7655LL,0L},{0xF734B2272AF29377LL,0L,(-1L),0xF734B2272AF29377LL,0x152576F72D6C7655LL,0x152576F72D6C7655LL},{0L,0L,0L,0L,0x152576F72D6C7655LL,(-1L)},{6L,0L,0x152576F72D6C7655LL,6L,0x152576F72D6C7655LL,0L},{0xF734B2272AF29377LL,0L,(-1L),0xF734B2272AF29377LL,0x152576F72D6C7655LL,0x152576F72D6C7655LL}}};
    uint8_t l_941 = 0x85L;
    int i, j, k;
    for (i = 0; i < 4; i++)
        l_939[i] = (void*)0;
    l_941--;
    return (*g_124);
}



static const uint8_t * func_26(const uint16_t * p_27)
{ 
    const uint8_t *l_661 = &g_376.f6;
    int32_t l_664 = 0x77A4A058L;
    int32_t l_671 = (-3L);
    const union U1 *l_714 = &g_715;
    union U2 **l_721[2];
    uint32_t *l_741 = &g_179;
    uint32_t l_835[4] = {0UL,0UL,0UL,0UL};
    int32_t l_838 = 1L;
    int32_t l_839 = 2L;
    int32_t l_840 = 2L;
    int32_t l_841 = 0xC477384AL;
    uint16_t l_873 = 0x0251L;
    int32_t *l_876 = &l_841;
    int32_t *l_877 = (void*)0;
    int32_t *l_878 = (void*)0;
    int32_t *l_879 = &g_148;
    int32_t *l_880 = &g_447[1][2];
    int32_t *l_881 = &l_838;
    int32_t *l_882 = &l_841;
    int32_t *l_883 = &l_664;
    int32_t *l_884 = (void*)0;
    int32_t *l_885 = &g_447[4][1];
    int32_t *l_886 = &l_839;
    int32_t *l_887 = &l_839;
    int32_t *l_888 = &g_66;
    int32_t *l_889 = &g_66;
    uint64_t l_890 = 0xBA5DD5EF7EB05191LL;
    uint8_t l_905 = 4UL;
    struct S0 *l_910 = &g_164;
    uint8_t *l_911 = &g_164.f6;
    struct S0 ** const *l_916 = &g_188;
    struct S0 ** const **l_915 = &l_916;
    struct S0 * const ***l_917 = &g_365;
    int64_t *l_922 = &g_86.f4;
    uint16_t *l_923 = (void*)0;
    int16_t l_924 = 0L;
    union U2 *l_932 = &g_382;
    int i;
    for (i = 0; i < 2; i++)
        l_721[i] = (void*)0;
    for (g_164.f4 = (-26); (g_164.f4 < 46); ++g_164.f4)
    { 
        uint8_t l_672 = 1UL;
        union U2 ***l_693 = &g_691;
        struct S0 **l_700 = &g_189;
        int16_t *l_704 = &g_68[0];
        const union U1 *l_713 = &g_86;
        const union U1 **l_712[2];
        int32_t *l_726 = &g_66;
        int64_t l_793 = (-6L);
        union U1 l_801 = {-1L};
        int32_t l_833[5][3][4] = {{{1L,0L,(-10L),0xC21F0DBFL},{0xCC05716BL,0x8F3F6716L,(-7L),(-7L)},{0xCC05716BL,0xCC05716BL,(-10L),0xC479BDD6L}},{{1L,(-7L),0xCC05716BL,0L},{0x8F3F6716L,7L,6L,0xCC05716BL},{0xDDD0561DL,7L,0xDDD0561DL,0L}},{{7L,(-7L),0xB6943B49L,0xC479BDD6L},{0xC479BDD6L,0xCC05716BL,0x8F3F6716L,(-7L)},{0xC21F0DBFL,0x8F3F6716L,0x8F3F6716L,0xC21F0DBFL}},{{0xC479BDD6L,0L,0xB6943B49L,0xDDD0561DL},{7L,0x830F1EC4L,0xDDD0561DL,(-10L)},{0xDDD0561DL,(-10L),6L,(-10L)}},{{0x8F3F6716L,0x830F1EC4L,0xCC05716BL,0xDDD0561DL},{1L,0L,(-10L),0xC21F0DBFL},{0xCC05716BL,0x8F3F6716L,(-7L),(-7L)}}};
        union U2 *l_860 = &g_382;
        int i, j, k;
        for (i = 0; i < 2; i++)
            l_712[i] = &l_713;
        for (g_111 = (-22); (g_111 == 12); g_111 = safe_add_func_uint64_t_u_u(g_111, 1))
        { 
            return l_661;
        }
        for (g_84 = (-24); (g_84 >= 34); g_84 = safe_add_func_int16_t_s_s(g_84, 4))
        { 
            int32_t *l_665 = &g_148;
            int32_t *l_666 = &g_66;
            int32_t *l_667 = &g_447[1][2];
            int32_t *l_668 = &g_66;
            int32_t *l_669 = (void*)0;
            int32_t *l_670[2][6][2] = {{{&g_3,&g_447[1][2]},{&g_3,&g_148},{&g_3,&g_3},{&g_148,&g_3},{&g_3,&g_148},{&g_3,&g_3}},{{&g_148,&g_3},{&g_3,&g_148},{&g_3,&g_3},{&g_148,&g_3},{&g_3,&g_148},{&g_3,&g_3}}};
            uint8_t *l_679[2];
            struct S0 **l_701 = &g_189;
            int i, j, k;
            for (i = 0; i < 2; i++)
                l_679[i] = &g_18;
            l_672++;
            if ((8UL ^ (safe_sub_func_int64_t_s_s((-2L), (safe_mod_func_uint8_t_u_u((g_164.f6 &= (0x40L >= l_672)), (safe_rshift_func_int8_t_s_u(((((((safe_sub_func_int64_t_s_s(((safe_lshift_func_uint16_t_u_u((safe_lshift_func_int8_t_s_s((safe_add_func_uint32_t_u_u((((l_693 = g_690) == &g_691) <= (*l_667)), 0x6A843419L)), g_12)), (*p_27))) > l_672), l_664)) , 0xF207AABFL) ^ 1UL) , l_672) | 0xF6L) > g_164.f4), 1))))))))
            { 
                int32_t **l_694 = &l_666;
                int8_t * const l_705 = &g_111;
                uint16_t l_711[7] = {7UL,65533UL,7UL,7UL,65533UL,7UL,7UL};
                int i;
                (*l_694) = &g_447[1][2];
                if ((l_672 <= ((*l_665) = (g_382.f1 < g_3))))
                { 
                    union U1 l_699[3][1][5] = {{{{0x0E93L},{0x0E93L},{0x0E93L},{0x0E93L},{0x0E93L}}},{{{0x0E93L},{0x0E93L},{0x0E93L},{0x0E93L},{0x0E93L}}},{{{0x0E93L},{0x0E93L},{0x0E93L},{0x0E93L},{0x0E93L}}}};
                    uint16_t *l_706 = (void*)0;
                    uint16_t *l_707 = &g_14;
                    int i, j, k;
                    (*g_208) = (safe_sub_func_uint32_t_u_u(((safe_add_func_int64_t_s_s((l_671 <= (((*l_707) = (((((l_699[0][0][0] , (((*g_187) = l_700) != l_701)) != (g_376.f0 <= l_699[0][0][0].f0)) , func_31((safe_mul_func_int16_t_s_s(l_672, g_66)), l_704, l_672, l_664)) == l_705) | g_376.f5)) & 65534UL)), l_699[0][0][0].f0)) && (*l_667)), l_671));
                    return &g_18;
                }
                else
                { 
                    (*l_694) = (void*)0;
                }
                if ((*l_665))
                    continue;
                if ((safe_lshift_func_uint16_t_u_s(g_710, 15)))
                { 
                    if (l_672)
                        break;
                }
                else
                { 
                    if (l_711[4])
                        break;
                }
            }
            else
            { 
                (*l_668) |= 2L;
            }
        }
        l_714 = (void*)0;
        if ((l_671 == (!((((*l_726) = ((*g_208) = (safe_mul_func_uint16_t_u_u((safe_sub_func_int64_t_s_s(((((*l_693) != l_721[0]) > (safe_add_func_uint8_t_u_u((((0x7AED6EE6L ^ l_672) < (safe_mod_func_uint32_t_u_u(((**g_690) == (**g_690)), l_672))) < l_664), 0L))) >= 0x0974L), 0xB2F05CAFCC09FD67LL)), g_376.f6)))) & l_664) == 8UL))))
        { 
            union U1 *l_729 = &g_86;
            int32_t l_733 = (-9L);
            uint16_t *l_734 = &g_202;
            uint32_t **l_742 = &l_741;
            const uint32_t *l_743 = &g_574;
            union U2 *l_744 = &g_382;
            uint64_t l_763[3][2];
            const uint8_t *l_770 = &g_18;
            int i, j;
            for (i = 0; i < 3; i++)
            {
                for (j = 0; j < 2; j++)
                    l_763[i][j] = 18446744073709551611UL;
            }
            (*g_691) = ((safe_div_func_uint8_t_u_u(((void*)0 != l_729), ((((((safe_lshift_func_int8_t_s_u(((+0x628AL) > ((*l_734) = l_733)), ((safe_mul_func_int8_t_s_s((*l_726), (((safe_add_func_uint16_t_u_u(((safe_div_func_int8_t_s_s(((((*l_742) = l_741) != l_743) , l_733), l_733)) , 0x408DL), 5L)) | l_733) & l_671))) || g_86.f2))) , l_733) | (*l_726)) , 0x1B301C19L) , (***g_365)) , l_664))) , l_744);
            for (g_18 = 0; (g_18 == 5); ++g_18)
            { 
                union U1 *l_755[6] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                const union U1 *l_756 = (void*)0;
                int32_t l_759[2];
                int32_t *l_760 = &l_733;
                int32_t *l_761 = &g_447[0][1];
                int32_t *l_762[4][4] = {{&l_733,&g_447[5][2],&l_733,(void*)0},{(void*)0,&l_759[0],(void*)0,(void*)0},{&g_447[5][2],&g_447[5][2],&l_759[0],&l_759[0]},{&l_759[0],(void*)0,&l_759[0],(void*)0}};
                int i, j;
                for (i = 0; i < 2; i++)
                    l_759[i] = (-1L);
                for (l_733 = 0; (l_733 <= 1); l_733 += 1)
                { 
                    int64_t *l_757 = (void*)0;
                    uint32_t l_758[5] = {0UL,0UL,0UL,0UL,0UL};
                    int i, j;
                    if (g_447[(l_733 + 3)][l_733])
                        break;
                    g_447[(l_733 + 3)][(l_733 + 1)] = 0x92E5E096L;
                    (*l_726) = (safe_mul_func_uint16_t_u_u(((g_68[l_733] | (0xE916L && ((safe_sub_func_uint16_t_u_u(((((safe_rshift_func_uint16_t_u_s(((safe_rshift_func_uint16_t_u_u(0xA8C7L, ((l_661 == ((l_664 &= (g_68[l_733] , ((l_755[4] == (l_756 = l_729)) > 0L))) , &g_197)) == l_733))) , l_733), 7)) == g_376.f4) , l_758[3]) ^ 0x9A6AL), 65535UL)) , l_664))) & l_759[0]), 0x2C11L));
                }
                l_763[1][1]--;
                for (g_382.f0 = 0; (g_382.f0 == 9); g_382.f0++)
                { 
                    int32_t **l_768 = &g_208;
                    int32_t **l_769[5] = {&l_760,&l_760,&l_760,&l_760,&l_760};
                    int i;
                    l_762[1][0] = ((*l_768) = (l_733 , &g_447[1][0]));
                }
                return l_770;
            }
        }
        else
        { 
            const int32_t l_781 = 0x3BA6EF52L;
            int8_t *l_789 = &g_164.f0;
            int64_t *l_792 = &g_164.f3;
            int8_t *l_794 = &g_111;
            uint16_t *l_795 = &g_14;
            uint32_t *l_796[6][2] = {{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}};
            union U2 **l_802 = &g_692;
            int32_t l_826 = 0xC14F2D55L;
            int32_t l_834[6];
            int32_t *l_846[7][7] = {{(void*)0,&l_834[4],(void*)0,&g_447[1][3],&g_447[1][3],(void*)0,&l_834[4]},{&g_447[1][3],&l_834[4],&l_833[2][0][3],&l_833[2][0][3],&l_834[4],&g_447[1][3],&l_834[4]},{(void*)0,&g_447[1][3],&g_447[1][3],(void*)0,&l_834[4],(void*)0,&g_447[1][3]},{(void*)0,(void*)0,&g_447[1][3],&l_833[2][0][3],&g_447[1][3],(void*)0,(void*)0},{(void*)0,&g_447[1][3],&l_833[2][0][3],&g_447[1][3],(void*)0,(void*)0,&g_447[1][3]},{(void*)0,&l_834[4],(void*)0,&g_447[1][3],&g_447[1][3],(void*)0,&l_834[4]},{&g_447[1][3],&l_834[4],&l_833[2][0][3],&l_833[2][0][3],&l_834[4],&g_447[1][3],&l_834[4]}};
            uint32_t l_847 = 9UL;
            int8_t l_850 = 0L;
            union U2 l_863 = {0x6B3EF9D1A22BE762LL};
            int i, j;
            for (i = 0; i < 6; i++)
                l_834[i] = 0xBFE67035L;
            if ((safe_lshift_func_uint16_t_u_s((((safe_rshift_func_int16_t_s_u(((safe_lshift_func_int16_t_s_s((((l_671 = (((++(*g_178)) , (safe_mul_func_int8_t_s_s(l_781, 3UL))) ^ (safe_lshift_func_int16_t_s_u(((g_574 ^= (((*l_795) = ((safe_unary_minus_func_uint64_t_u((l_781 ^ ((*l_794) |= ((safe_unary_minus_func_int16_t_s((*l_726))) | ((safe_sub_func_int32_t_s_s((safe_unary_minus_func_int8_t_s(((*l_789) = l_781))), (((((((((*l_792) = (safe_mul_func_int8_t_s_s(g_715.f2, ((g_148 ^ 0xC9L) & 0x0D99L)))) , (*l_726)) | l_671) , (*l_726)) , 1UL) >= l_793) <= (*g_208)) < l_671))) || l_671)))))) ^ l_781)) , 0x3CC9A6FFL)) < g_12), (*p_27))))) , 0x2673E547L) && 0x5DA6A106L), 14)) || 65526UL), (*l_726))) | l_664) <= l_664), l_781)))
            { 
                if ((*l_726))
                    break;
            }
            else
            { 
                uint8_t l_809 = 0x49L;
                int32_t l_816[7] = {0x1B2CC3A3L,0x1B2CC3A3L,0x138B450AL,0x1B2CC3A3L,0x1B2CC3A3L,0x138B450AL,0x1B2CC3A3L};
                int i;
                if ((safe_rshift_func_uint16_t_u_u((safe_mod_func_int16_t_s_s((0x58L < (((l_801 , l_802) != (*l_693)) ^ ((0xDFL || (*l_726)) == (safe_add_func_uint64_t_u_u((safe_sub_func_int16_t_s_s((g_201 & 1L), l_671)), g_382.f2))))), l_781)), l_781)))
                { 
                    int16_t l_814[7];
                    int32_t *l_815 = (void*)0;
                    int32_t *l_817 = &l_816[1];
                    int32_t *l_818 = &l_671;
                    int32_t *l_819 = (void*)0;
                    int32_t *l_820 = &g_447[1][1];
                    int32_t *l_821 = &g_148;
                    int32_t *l_822 = &g_447[5][1];
                    int32_t *l_823 = &g_66;
                    int32_t *l_824 = &l_816[1];
                    int32_t *l_825 = &g_66;
                    int32_t *l_827 = &l_671;
                    int32_t *l_828 = &g_66;
                    int32_t *l_829 = &g_447[1][2];
                    int32_t *l_830 = &g_447[1][2];
                    int32_t *l_831 = &l_826;
                    int32_t *l_832[2][7] = {{&g_3,(void*)0,(void*)0,&g_3,(void*)0,(void*)0,&g_3},{(void*)0,&g_3,(void*)0,(void*)0,&g_3,(void*)0,(void*)0}};
                    int i, j;
                    for (i = 0; i < 7; i++)
                        l_814[i] = (-1L);
                    l_664 = ((*g_178) >= (safe_mul_func_int8_t_s_s((1L == l_809), ((safe_rshift_func_uint16_t_u_s((*p_27), 12)) , ((safe_mul_func_uint16_t_u_u((*p_27), ((l_781 ^ 0x26L) | l_781))) || g_12)))));
                    if ((*g_208))
                        continue;
                    (*g_208) = (&l_672 != &g_18);
                    --l_835[2];
                    ++g_842[0][3][5];
                }
                else
                { 
                    const uint8_t *l_845 = &g_164.f6;
                    return l_845;
                }
            }
            --l_847;
            if ((*l_726))
                break;
            if ((((*l_795) = 0x41C5L) ^ ((((void*)0 == (*g_691)) && ((*l_704) = l_850)) & (safe_div_func_uint8_t_u_u(((safe_div_func_int32_t_s_s((((((g_86.f2 > (safe_add_func_uint32_t_u_u(0x8FC86170L, (((safe_mod_func_uint32_t_u_u((((*g_208) || (*l_726)) | g_164.f6), 0x77A2E0CEL)) > l_840) && 18446744073709551615UL)))) >= (*l_726)) , 0x62L) != (*l_726)) && 5UL), (*g_178))) != g_376.f3), l_671)))))
            { 
                (*l_726) = (*l_726);
            }
            else
            { 
                union U2 *l_861 = &g_862;
                int8_t l_870[4][5];
                int32_t l_871 = 0x62C6E63AL;
                int i, j;
                for (i = 0; i < 4; i++)
                {
                    for (j = 0; j < 5; j++)
                        l_870[i][j] = 0x36L;
                }
                for (g_86.f2 = 1; (g_86.f2 >= 0); g_86.f2 -= 1)
                { 
                    union U2 **l_859 = &g_692;
                    int32_t *l_864 = &l_838;
                    int32_t **l_865 = &l_846[6][5];
                    int i;
                    l_859 = l_859;
                    if (l_835[(g_86.f2 + 2)])
                        break;
                    l_833[3][1][0] ^= (((((**g_690) = (void*)0) == (l_861 = l_860)) >= ((*l_795) = l_835[(g_86.f2 + 2)])) > (*l_726));
                    (*l_865) = (l_863 , l_864);
                    if ((*l_726))
                        continue;
                }
                for (g_201 = 0; (g_201 < 24); g_201 = safe_add_func_int8_t_s_s(g_201, 1))
                { 
                    int64_t l_868 = 5L;
                    int32_t l_869 = 9L;
                    int32_t l_872 = 0x5C35943CL;
                    --l_873;
                }
            }
        }
    }
    l_890--;
    (*l_885) |= ((safe_div_func_int32_t_s_s(0x4425C0B9L, ((((safe_div_func_int64_t_s_s((safe_add_func_int16_t_s_s((safe_sub_func_int64_t_s_s((safe_mod_func_uint64_t_u_u(((*l_881) , ((safe_unary_minus_func_uint64_t_u(((+l_905) | (safe_rshift_func_uint16_t_u_s((safe_add_func_uint64_t_u_u((((*g_208) ^ ((l_910 == l_910) == 0x3254L)) , 18446744073709551615UL), g_376.f2)), 10))))) != (*l_882))), g_376.f2)), g_129)), 1L)), (*l_881))) , (*l_887)) <= g_376.f4) | g_164.f2))) || g_83);
    l_924 ^= (((*l_880) = ((*l_876) || (((*l_911)--) , ((*l_882) == ((((*l_879) || (safe_unary_minus_func_uint16_t_u(((l_915 == l_917) , (safe_mul_func_int16_t_s_s((0xCA1FBD97286ACF5CLL == ((*l_922) = ((safe_rshift_func_int16_t_s_s((*l_881), 3)) | (*p_27)))), (-1L))))))) && (*l_881)) & 0xB413L))))) < g_164.f1);
    g_208 = ((safe_add_func_uint8_t_u_u((&g_392[1] == &l_873), (!3UL))) , ((((safe_rshift_func_uint8_t_u_u(((safe_mod_func_uint16_t_u_u(((((*g_691) = l_932) == &g_382) <= (*l_883)), (safe_mul_func_uint8_t_u_u(((*g_208) ^ (*g_208)), (*l_888))))) ^ (*g_178)), g_862.f0)) || (*l_887)) != 0x983D7437L) , (void*)0));
    return &g_18;
}



static const uint16_t * func_28(int8_t  p_29, uint8_t * p_30)
{ 
    uint16_t l_637 = 65535UL;
    struct S0 **l_639[2];
    int i;
    for (i = 0; i < 2; i++)
        l_639[i] = &g_189;
    for (g_66 = 0; (g_66 == (-18)); g_66 = safe_sub_func_int16_t_s_s(g_66, 8))
    { 
        int32_t *l_632[1][4];
        int32_t **l_633 = &g_208;
        struct S0 **l_638 = &g_189;
        int i, j;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 4; j++)
                l_632[i][j] = &g_148;
        }
        (*l_633) = l_632[0][2];
        (*g_208) = (((!((safe_mul_func_uint16_t_u_u((l_637 = 1UL), (l_638 == ((*g_187) = l_639[1])))) , 248UL)) , ((safe_mod_func_uint16_t_u_u((safe_sub_func_int32_t_s_s(((safe_div_func_uint32_t_u_u((safe_add_func_int8_t_s_s((safe_unary_minus_func_int32_t_s((safe_mul_func_int16_t_s_s((safe_mod_func_uint64_t_u_u(6UL, (safe_sub_func_uint8_t_u_u(l_637, (safe_add_func_int32_t_s_s(((((((**l_633) > (*g_208)) > 0xF77AL) ^ g_376.f6) | p_29) && l_637), p_29)))))), g_83)))), l_637)), (*g_208))) , (*g_208)), 0x9E3087FEL)), 0x31A7L)) >= 1UL)) | g_447[4][0]);
    }
    return &g_392[0];
}



static uint8_t * func_31(int64_t  p_32, int16_t * p_33, const int32_t  p_34, int16_t  p_35)
{ 
    uint64_t l_319 = 0x99C13443893D39C3LL;
    uint16_t l_326 = 65535UL;
    int8_t l_327 = 0x7DL;
    int16_t ***l_331 = &g_146[1][1];
    int16_t ****l_332 = &l_331;
    int16_t ***l_333[4][1];
    uint64_t l_342 = 0x9B6D24C9DFCBD086LL;
    int32_t l_343[2][5] = {{(-6L),(-6L),(-6L),(-6L),(-6L)},{0L,0x9E89F55EL,0L,0x9E89F55EL,0L}};
    uint8_t *l_350 = (void*)0;
    struct S0 l_353 = {1L,0UL,0UL,0x0B68734B30178618LL,0x0AL,-1L,255UL};
    union U1 **l_358 = &g_124;
    struct S0 * const **l_368[2][3] = {{&g_366,&g_366,&g_366},{&g_366,&g_366,&g_366}};
    uint16_t l_491[2];
    int32_t *l_496 = &g_447[5][1];
    union U1 ***l_510 = (void*)0;
    union U1 ****l_509 = &l_510;
    union U2 *l_546 = &g_382;
    union U2 **l_545 = &l_546;
    union U2 ***l_544 = &l_545;
    uint64_t l_612[2][4][7] = {{{0x9237A1D1F9464C1BLL,0xAE343D10D8582995LL,0x14F5442B9C000E51LL,18446744073709551610UL,0x14F5442B9C000E51LL,0xAE343D10D8582995LL,0x9237A1D1F9464C1BLL},{0xAE343D10D8582995LL,0UL,0x17A5AEE221962451LL,0x0EBC2062805EB407LL,0x834A723A6A72D3CBLL,0x14F5442B9C000E51LL,0x834A723A6A72D3CBLL},{0xAE343D10D8582995LL,0x834A723A6A72D3CBLL,0x834A723A6A72D3CBLL,0x834A723A6A72D3CBLL,0UL,0x14F5442B9C000E51LL,0x9237A1D1F9464C1BLL},{18446744073709551615UL,0x14F5442B9C000E51LL,0x27398F5DBDE20E00LL,0UL,0UL,0x27398F5DBDE20E00LL,0x14F5442B9C000E51LL}},{{0UL,18446744073709551615UL,0x17A5AEE221962451LL,0xAE343D10D8582995LL,18446744073709551610UL,0x9237A1D1F9464C1BLL,0x9237A1D1F9464C1BLL},{0x17A5AEE221962451LL,18446744073709551615UL,0UL,18446744073709551615UL,0x17A5AEE221962451LL,0xAE343D10D8582995LL,18446744073709551610UL},{0x27398F5DBDE20E00LL,0x14F5442B9C000E51LL,18446744073709551615UL,0xAE343D10D8582995LL,18446744073709551607UL,0xAE343D10D8582995LL,18446744073709551615UL},{18446744073709551610UL,18446744073709551610UL,0x834A723A6A72D3CBLL,0UL,0x14F5442B9C000E51LL,0x9237A1D1F9464C1BLL,0x27398F5DBDE20E00LL}}};
    int i, j, k;
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 1; j++)
            l_333[i][j] = (void*)0;
    }
    for (i = 0; i < 2; i++)
        l_491[i] = 65535UL;
    (*g_208) ^= (((*g_124) , (safe_sub_func_uint8_t_u_u((safe_sub_func_int64_t_s_s((safe_lshift_func_uint8_t_u_u(251UL, (safe_sub_func_uint8_t_u_u(254UL, g_129)))), (((*g_67) = (((l_319 == (safe_lshift_func_int16_t_s_s(((p_32 || ((safe_div_func_uint32_t_u_u((safe_rshift_func_uint16_t_u_u(g_179, 6)), p_34)) <= p_35)) && l_326), (*p_33)))) || 1UL) != 0x5E05B46385D5EC73LL)) < 0x3719L))), p_35))) , l_327);
    return l_350;
}



static int16_t * func_39(int16_t  p_40, int64_t  p_41, int16_t * p_42, int16_t  p_43, int8_t  p_44)
{ 
    int32_t *l_70[1][2];
    int32_t **l_69 = &l_70[0][1];
    union U1 l_125 = {0xF8E4L};
    int16_t l_198 = 0L;
    uint8_t l_213 = 0x50L;
    struct S0 l_265 = {-8L,0x8C6A7EAEL,0x1AE5059AL,0L,255UL,5L,0x0DL};
    uint32_t l_306 = 0x90AB5DB3L;
    int16_t *l_310 = &g_68[0];
    int i, j;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 2; j++)
            l_70[i][j] = &g_66;
    }
    (*l_69) = (void*)0;
lbl_309:
    for (g_66 = 0; (g_66 == (-13)); g_66 = safe_sub_func_int8_t_s_s(g_66, 2))
    { 
        int32_t l_73 = 0x4A86D6A6L;
        uint32_t *l_128 = &g_129;
        uint16_t *l_130 = &g_14;
        int64_t *l_131 = &l_125.f4;
        int32_t l_134 = 0x3D59F121L;
        uint64_t l_155 = 9UL;
        union U1 **l_158 = &g_124;
        uint64_t l_184 = 0xA7CF2F2AFFB97BFFLL;
        int32_t l_192 = (-3L);
        int32_t l_193 = (-1L);
        uint8_t *l_216 = &g_18;
        int8_t l_278 = 0xC3L;
        const struct S0 *l_282 = &l_265;
        const struct S0 **l_281[7][1][5] = {{{&l_282,&l_282,&l_282,&l_282,&l_282}},{{&l_282,(void*)0,&l_282,&l_282,(void*)0}},{{&l_282,&l_282,&l_282,&l_282,&l_282}},{{&l_282,&l_282,&l_282,(void*)0,(void*)0}},{{&l_282,&l_282,&l_282,&l_282,&l_282}},{{(void*)0,&l_282,&l_282,(void*)0,&l_282}},{{(void*)0,(void*)0,&l_282,&l_282,&l_282}}};
        const struct S0 ***l_280 = &l_281[6][0][4];
        const struct S0 ****l_279 = &l_280;
        int i, j, k;
        l_73 |= (((g_18 && g_3) && 0xEAC691C6C8ECDCC2LL) , g_12);
        for (p_40 = 17; (p_40 != 2); p_40--)
        { 
            uint64_t l_96 = 1UL;
            int32_t l_98 = 0xE742402BL;
            int16_t *l_103 = (void*)0;
            int32_t l_109 = 0xC07AF8E1L;
            for (g_18 = 6; (g_18 >= 44); g_18++)
            { 
                uint64_t l_100 = 0xA549BDA14E7E3198LL;
                for (g_12 = (-26); (g_12 < (-3)); g_12 = safe_add_func_uint32_t_u_u(g_12, 1))
                { 
                    const int16_t *l_81 = (void*)0;
                    const int16_t **l_80[3][5] = {{(void*)0,&l_81,&l_81,&l_81,(void*)0},{&l_81,&l_81,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,&l_81,(void*)0,&l_81}};
                    union U1 *l_85 = &g_86;
                    union U1 **l_87 = &l_85;
                    int16_t *l_88 = &g_86.f2;
                    union U2 l_95 = {0x9DA5D7A232894124LL};
                    uint16_t l_97 = 0xD184L;
                    int32_t l_99 = 0x86FE95B7L;
                    int i, j;
                    if (g_14)
                        break;
                    g_84 |= ((g_82 = (void*)0) == (void*)0);
                    (*l_87) = l_85;
                    l_97 = (((0xB650F83943CDC182LL && ((-1L) <= ((*l_88) = ((*p_42) = 8L)))) > (((l_73 ^= p_40) , &g_14) != (void*)0)) , ((((safe_sub_func_int16_t_s_s((((safe_lshift_func_uint8_t_u_u((safe_sub_func_int8_t_s_s((l_95 , g_86.f2), 0x3AL)), 0)) , l_96) < 0x48480AD74ECB9A7BLL), 0x5807L)) || p_43) & g_3) & 4UL));
                    l_100++;
                }
            }
            for (p_44 = 0; (p_44 >= 0); p_44 -= 1)
            { 
                int32_t l_108 = 0xFE1A8FA0L;
                uint16_t *l_110 = &g_14;
                int i, j;
                g_111 ^= ((g_86 , l_103) != (((l_98 >= (safe_sub_func_int32_t_s_s((safe_mod_func_int32_t_s_s(l_108, (((*l_110) = (l_109 = 0x4BADL)) || g_86.f0))), l_73))) ^ p_41) , &g_83));
            }
        }
    }
    l_306++;
    if (l_306)
        goto lbl_309;
    return l_310;
}



static int16_t  func_45(int16_t ** const  p_46, int16_t * p_47, uint16_t * p_48)
{ 
    uint8_t l_60[6] = {0x38L,0x38L,0x38L,0x38L,0x38L,0x38L};
    int32_t *l_65 = &g_66;
    int i;
    (*l_65) ^= (safe_div_func_uint64_t_u_u(((((safe_rshift_func_uint16_t_u_u(0UL, 14)) == (safe_mod_func_uint16_t_u_u(g_18, l_60[4]))) == (safe_lshift_func_uint16_t_u_s(g_12, (safe_mod_func_int32_t_s_s((l_60[4] != (g_3 || g_18)), 1L))))) != l_60[3]), l_60[5]));
    return (*l_65);
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_3, "g_3", print_hash_value);
    transparent_crc(g_12, "g_12", print_hash_value);
    transparent_crc(g_14, "g_14", print_hash_value);
    transparent_crc(g_18, "g_18", print_hash_value);
    transparent_crc(g_66, "g_66", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_68[i], "g_68[i]", print_hash_value);

    }
    transparent_crc(g_83, "g_83", print_hash_value);
    transparent_crc(g_84, "g_84", print_hash_value);
    transparent_crc(g_86.f0, "g_86.f0", print_hash_value);
    transparent_crc(g_86.f2, "g_86.f2", print_hash_value);
    transparent_crc(g_111, "g_111", print_hash_value);
    transparent_crc(g_129, "g_129", print_hash_value);
    transparent_crc(g_148, "g_148", print_hash_value);
    transparent_crc(g_164.f0, "g_164.f0", print_hash_value);
    transparent_crc(g_164.f1, "g_164.f1", print_hash_value);
    transparent_crc(g_164.f2, "g_164.f2", print_hash_value);
    transparent_crc(g_164.f3, "g_164.f3", print_hash_value);
    transparent_crc(g_164.f4, "g_164.f4", print_hash_value);
    transparent_crc(g_164.f5, "g_164.f5", print_hash_value);
    transparent_crc(g_164.f6, "g_164.f6", print_hash_value);
    transparent_crc(g_179, "g_179", print_hash_value);
    transparent_crc(g_191, "g_191", print_hash_value);
    transparent_crc(g_197, "g_197", print_hash_value);
    transparent_crc(g_201, "g_201", print_hash_value);
    transparent_crc(g_202, "g_202", print_hash_value);
    transparent_crc(g_376.f0, "g_376.f0", print_hash_value);
    transparent_crc(g_376.f1, "g_376.f1", print_hash_value);
    transparent_crc(g_376.f2, "g_376.f2", print_hash_value);
    transparent_crc(g_376.f3, "g_376.f3", print_hash_value);
    transparent_crc(g_376.f4, "g_376.f4", print_hash_value);
    transparent_crc(g_376.f5, "g_376.f5", print_hash_value);
    transparent_crc(g_376.f6, "g_376.f6", print_hash_value);
    transparent_crc(g_382.f0, "g_382.f0", print_hash_value);
    transparent_crc(g_382.f1, "g_382.f1", print_hash_value);
    transparent_crc(g_382.f2, "g_382.f2", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_392[i], "g_392[i]", print_hash_value);

    }
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 4; j++)
        {
            transparent_crc(g_447[i][j], "g_447[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_483, "g_483", print_hash_value);
    transparent_crc(g_574, "g_574", print_hash_value);
    transparent_crc(g_710, "g_710", print_hash_value);
    transparent_crc(g_715.f0, "g_715.f0", print_hash_value);
    transparent_crc(g_715.f2, "g_715.f2", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 6; j++)
        {
            for (k = 0; k < 6; k++)
            {
                transparent_crc(g_842[i][j][k], "g_842[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_862.f0, "g_862.f0", print_hash_value);
    transparent_crc(g_862.f1, "g_862.f1", print_hash_value);
    transparent_crc(g_862.f2, "g_862.f2", print_hash_value);
    transparent_crc(g_971, "g_971", print_hash_value);
    transparent_crc(g_984, "g_984", print_hash_value);
    transparent_crc(g_1035, "g_1035", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 2; k++)
            {
                transparent_crc(g_1088[i][j][k], "g_1088[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_1090, "g_1090", print_hash_value);
    transparent_crc(g_1158, "g_1158", print_hash_value);
    transparent_crc(g_1268, "g_1268", print_hash_value);
    transparent_crc(g_1334, "g_1334", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_1372[i].f0, "g_1372[i].f0", print_hash_value);
        transparent_crc(g_1372[i].f1, "g_1372[i].f1", print_hash_value);
        transparent_crc(g_1372[i].f2, "g_1372[i].f2", print_hash_value);

    }
    transparent_crc(g_1454, "g_1454", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 2; k++)
            {
                transparent_crc(g_1494[i][j][k], "g_1494[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_1562.f0, "g_1562.f0", print_hash_value);
    transparent_crc(g_1562.f2, "g_1562.f2", print_hash_value);
    transparent_crc(g_1569, "g_1569", print_hash_value);
    transparent_crc(g_1625, "g_1625", print_hash_value);
    transparent_crc(g_1812, "g_1812", print_hash_value);
    transparent_crc(g_1813, "g_1813", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 3; k++)
            {
                transparent_crc(g_1843[i][j][k], "g_1843[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_1923, "g_1923", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 5; j++)
        {
            transparent_crc(g_2006[i][j], "g_2006[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_2111.f0, "g_2111.f0", print_hash_value);
    transparent_crc(g_2111.f1, "g_2111.f1", print_hash_value);
    transparent_crc(g_2111.f2, "g_2111.f2", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
