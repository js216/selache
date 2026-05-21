// SPDX-License-Identifier: MIT
// cctest_csmith_2ec71203.c --- cctest case csmith_2ec71203 (csmith seed 784798211)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x4655a851 */

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

// Options:   -s 784798211 -o /tmp/csmith_gen_g_dwqj10/csmith.c --concise --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 8 --max-block-size 5 --max-block-depth 4 --max-expr-complexity 8 --max-array-dim 3 --max-array-len-per-dim 7 --max-struct-fields 8 --max-union-fields 5

static long __undefined;


struct S0 {
   int64_t  f0;
   uint32_t  f1;
   uint32_t  f2;
   uint8_t  f3;
   int16_t  f4;
   uint8_t  f5;
   const uint64_t  f6;
};

#pragma pack(push)
#pragma pack(1)
struct S1 {
   int16_t  f0;
   const uint64_t  f1;
   uint32_t  f2;
};
#pragma pack(pop)

union U2 {
   int32_t  f0;
};

union U3 {
   int64_t  f0;
};

union U4 {
   const uint64_t  f0;
   uint32_t  f1;
   uint32_t  f2;
   struct S0  f3;
};

union U5 {
   uint16_t  f0;
   int32_t  f1;
   uint32_t  f2;
   struct S0  f3;
};


static uint16_t g_22[5][3][3] = {{{0x0635L,0x5616L,0x51BBL},{0x5616L,0x877EL,0x877EL},{0x3EAAL,0x0635L,0x51BBL}},{{65535UL,0x507AL,0x0635L},{65535UL,0x0054L,0x5616L},{0x3EAAL,65533UL,0x3EAAL}},{{0x5616L,0x0054L,65535UL},{0x0635L,0x507AL,65535UL},{0x51BBL,0x0635L,0x3EAAL}},{{0x877EL,0x877EL,0x5616L},{0x51BBL,0x5616L,0x0635L},{0x0635L,0x5616L,0x51BBL}},{{0x5616L,0x877EL,0x877EL},{0x3EAAL,0x0635L,0x51BBL},{65535UL,0x507AL,0x0635L}}};
static union U4 g_23[2] = {{0UL},{0UL}};
static int32_t g_27 = (-5L);
static int32_t g_50 = 0x84F7A324L;
static int32_t g_55 = 1L;
static struct S1 g_59 = {0x0E64L,0x7C59AE0A12E6C494LL,5UL};
static struct S1 g_61 = {-1L,0xBA2848AA25E9F1F6LL,0x35EB2538L};
static struct S1 *g_60[2][6] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
static uint8_t g_67 = 0x6DL;
static uint64_t g_82 = 0x09A65E11ED7A4D75LL;
static int8_t g_90[6] = {0x40L,0x40L,0x40L,0x40L,0x40L,0x40L};
static int32_t *g_92 = &g_50;
static struct S0 g_99[5] = {{0xC0B84261728A6F30LL,0xCE90FC20L,18446744073709551615UL,0xF2L,-8L,0xC4L,2UL},{0xC0B84261728A6F30LL,0xCE90FC20L,18446744073709551615UL,0xF2L,-8L,0xC4L,2UL},{0xC0B84261728A6F30LL,0xCE90FC20L,18446744073709551615UL,0xF2L,-8L,0xC4L,2UL},{0xC0B84261728A6F30LL,0xCE90FC20L,18446744073709551615UL,0xF2L,-8L,0xC4L,2UL},{0xC0B84261728A6F30LL,0xCE90FC20L,18446744073709551615UL,0xF2L,-8L,0xC4L,2UL}};
static uint16_t g_123 = 65535UL;
static int64_t g_143 = 0L;
static uint16_t g_144 = 0xF820L;
static union U5 g_179 = {65535UL};
static const uint8_t g_198 = 0xC8L;
static int64_t g_209 = 0x057C8D395282E9A6LL;
static uint32_t g_210 = 0UL;
static uint64_t *g_219 = &g_82;
static int32_t **g_221 = &g_92;
static int32_t ***g_220 = &g_221;
static union U3 g_223[1][7] = {{{0x74B05A58BF42A532LL},{0x74B05A58BF42A532LL},{0x74B05A58BF42A532LL},{0x74B05A58BF42A532LL},{0x74B05A58BF42A532LL},{0x74B05A58BF42A532LL},{0x74B05A58BF42A532LL}}};
static union U2 g_248 = {0x75B0D0E8L};
static uint64_t g_306 = 0x0DDB56AAC1A399B6LL;
static uint8_t g_333[6][2] = {{0xFCL,0xFCL},{0xFCL,0xFCL},{0xFCL,0xFCL},{0xFCL,0xFCL},{0xFCL,0xFCL},{0xFCL,0xFCL}};
static int8_t g_334 = 0x50L;
static int64_t g_335 = 0xDECB9D6710213713LL;
static uint8_t g_337 = 255UL;
static int32_t *g_381[3] = {&g_27,&g_27,&g_27};
static int32_t ** const g_380 = &g_381[1];
static int32_t ** const *g_379 = &g_380;
static int32_t ** const **g_378 = &g_379;
static union U4 *g_395 = &g_23[0];
static union U4 **g_394[7][3][7] = {{{(void*)0,&g_395,(void*)0,&g_395,&g_395,&g_395,&g_395},{(void*)0,(void*)0,&g_395,&g_395,(void*)0,&g_395,(void*)0},{&g_395,&g_395,(void*)0,&g_395,&g_395,(void*)0,&g_395}},{{(void*)0,(void*)0,&g_395,(void*)0,&g_395,&g_395,(void*)0},{&g_395,&g_395,&g_395,&g_395,(void*)0,&g_395,&g_395},{&g_395,&g_395,(void*)0,&g_395,&g_395,&g_395,(void*)0}},{{&g_395,&g_395,&g_395,&g_395,&g_395,&g_395,&g_395},{&g_395,&g_395,&g_395,(void*)0,&g_395,&g_395,(void*)0},{(void*)0,&g_395,&g_395,&g_395,&g_395,(void*)0,(void*)0}},{{(void*)0,&g_395,&g_395,&g_395,(void*)0,&g_395,&g_395},{(void*)0,&g_395,&g_395,(void*)0,&g_395,&g_395,(void*)0},{&g_395,&g_395,(void*)0,&g_395,&g_395,&g_395,&g_395}},{{(void*)0,(void*)0,&g_395,&g_395,&g_395,&g_395,(void*)0},{(void*)0,&g_395,&g_395,&g_395,(void*)0,&g_395,&g_395},{(void*)0,&g_395,&g_395,(void*)0,&g_395,&g_395,(void*)0}},{{&g_395,(void*)0,&g_395,&g_395,&g_395,&g_395,&g_395},{&g_395,&g_395,&g_395,&g_395,&g_395,&g_395,&g_395},{&g_395,&g_395,&g_395,&g_395,(void*)0,&g_395,&g_395}},{{&g_395,&g_395,&g_395,&g_395,&g_395,&g_395,&g_395},{(void*)0,&g_395,&g_395,&g_395,&g_395,&g_395,&g_395},{&g_395,&g_395,&g_395,&g_395,(void*)0,&g_395,&g_395}}};
static int64_t *g_506[1] = {&g_209};
static int32_t * const ****g_514 = (void*)0;
static int32_t g_526 = 7L;
static uint16_t g_527 = 0x87C2L;
static int8_t g_641 = 1L;
static const uint64_t *g_654 = &g_23[0].f0;
static const uint64_t * const *g_653 = &g_654;
static const uint64_t * const * const *g_652 = &g_653;
static const uint64_t * const * const **g_651 = &g_652;
static uint64_t g_738 = 1UL;
static int16_t g_1027[7][1] = {{(-1L)},{(-1L)},{(-1L)},{(-1L)},{(-1L)},{(-1L)},{(-1L)}};
static uint64_t * const *g_1031 = &g_219;
static uint64_t * const **g_1030[7][7] = {{(void*)0,(void*)0,&g_1031,&g_1031,&g_1031,&g_1031,(void*)0},{(void*)0,&g_1031,&g_1031,&g_1031,&g_1031,&g_1031,(void*)0},{&g_1031,(void*)0,&g_1031,&g_1031,&g_1031,&g_1031,&g_1031},{(void*)0,(void*)0,&g_1031,&g_1031,&g_1031,&g_1031,(void*)0},{(void*)0,&g_1031,&g_1031,&g_1031,&g_1031,&g_1031,(void*)0},{&g_1031,(void*)0,&g_1031,&g_1031,&g_1031,&g_1031,&g_1031},{(void*)0,(void*)0,&g_1031,&g_1031,&g_1031,&g_1031,(void*)0}};
static uint64_t * const ***g_1029[5] = {&g_1030[2][0],&g_1030[2][0],&g_1030[2][0],&g_1030[2][0],&g_1030[2][0]};
static uint64_t * const ****g_1028 = &g_1029[2];
static const struct S0 *g_1089 = &g_99[0];
static const struct S0 **g_1088 = &g_1089;
static const struct S0 ***g_1087 = &g_1088;
static int16_t g_1110 = 0x3148L;
static union U5 *g_1131[3] = {&g_179,&g_179,&g_179};
static union U5 **g_1130 = &g_1131[0];
static int16_t g_1271 = 2L;
static union U2 *g_1379 = &g_248;
static union U2 **g_1378 = &g_1379;
static int32_t *g_1396 = &g_27;
static union U4 g_1451 = {1UL};
static union U3 *g_1542 = &g_223[0][3];
static union U3 **g_1541 = &g_1542;
static union U3 g_1666 = {0x355A34C8CC366A9FLL};
static union U5 ***g_1708 = &g_1130;
static union U5 ****g_1707 = &g_1708;
static union U5 *****g_1706 = &g_1707;
static uint32_t g_1711[2] = {9UL,9UL};
static union U3 *g_1719 = (void*)0;
static int16_t g_1759 = 0xB87AL;
static struct S1 g_1774[4][5] = {{{0xBF1DL,0xEE52FB44A7DA7A7ELL,4294967292UL},{0xBF1DL,0xEE52FB44A7DA7A7ELL,4294967292UL},{0xBF1DL,0xEE52FB44A7DA7A7ELL,4294967292UL},{0xBF1DL,0xEE52FB44A7DA7A7ELL,4294967292UL},{0xBF1DL,0xEE52FB44A7DA7A7ELL,4294967292UL}},{{0xEF78L,0x841430E8A53FCFD1LL,0xCFE90B31L},{0xEF78L,0x841430E8A53FCFD1LL,0xCFE90B31L},{0xEF78L,0x841430E8A53FCFD1LL,0xCFE90B31L},{0xEF78L,0x841430E8A53FCFD1LL,0xCFE90B31L},{0xEF78L,0x841430E8A53FCFD1LL,0xCFE90B31L}},{{0xBF1DL,0xEE52FB44A7DA7A7ELL,4294967292UL},{0xBF1DL,0xEE52FB44A7DA7A7ELL,4294967292UL},{0xBF1DL,0xEE52FB44A7DA7A7ELL,4294967292UL},{0xBF1DL,0xEE52FB44A7DA7A7ELL,4294967292UL},{0xBF1DL,0xEE52FB44A7DA7A7ELL,4294967292UL}},{{0xEF78L,0x841430E8A53FCFD1LL,0xCFE90B31L},{0xEF78L,0x841430E8A53FCFD1LL,0xCFE90B31L},{0xEF78L,0x841430E8A53FCFD1LL,0xCFE90B31L},{0xEF78L,0x841430E8A53FCFD1LL,0xCFE90B31L},{0xEF78L,0x841430E8A53FCFD1LL,0xCFE90B31L}}};
static int64_t **g_1798 = &g_506[0];
static int64_t ***g_1797 = &g_1798;
static int64_t ****g_1796 = &g_1797;
static uint16_t *g_1864 = &g_22[3][2][2];
static uint16_t **g_1863 = &g_1864;
static uint32_t *g_1945 = &g_1711[0];
static uint32_t **g_1944[4][6][3] = {{{&g_1945,&g_1945,(void*)0},{(void*)0,&g_1945,&g_1945},{&g_1945,&g_1945,&g_1945},{&g_1945,&g_1945,&g_1945},{(void*)0,&g_1945,&g_1945},{&g_1945,&g_1945,&g_1945}},{{&g_1945,&g_1945,(void*)0},{(void*)0,&g_1945,&g_1945},{&g_1945,&g_1945,&g_1945},{&g_1945,&g_1945,&g_1945},{(void*)0,&g_1945,&g_1945},{&g_1945,&g_1945,&g_1945}},{{&g_1945,&g_1945,(void*)0},{(void*)0,&g_1945,&g_1945},{&g_1945,&g_1945,&g_1945},{&g_1945,&g_1945,&g_1945},{(void*)0,&g_1945,&g_1945},{&g_1945,&g_1945,&g_1945}},{{&g_1945,&g_1945,(void*)0},{(void*)0,&g_1945,&g_1945},{&g_1945,&g_1945,&g_1945},{&g_1945,&g_1945,&g_1945},{(void*)0,&g_1945,&g_1945},{&g_1945,&g_1945,&g_1945}}};
static uint64_t g_1954 = 18446744073709551608UL;
static struct S0 g_1973 = {1L,0xFAC33349L,0xE5138B85L,255UL,-1L,0xCFL,0xB2BC08A5C3049B00LL};
static const int32_t ** const *g_2007 = (void*)0;



static int16_t  func_1(void);
static int32_t  func_5(int32_t  p_6, union U3  p_7, uint32_t  p_8, uint16_t  p_9);
static const union U5  func_11(uint16_t  p_12);
static uint8_t  func_13(int32_t  p_14);
static uint64_t  func_15(int16_t  p_16, union U4  p_17, int32_t  p_18, uint8_t  p_19);
static int8_t  func_32(int32_t * const  p_33, int32_t  p_34, int32_t * p_35, int32_t * p_36, int32_t * p_37);
static int32_t * const  func_38(int32_t  p_39, int32_t * p_40, const uint8_t  p_41, int32_t  p_42, int32_t  p_43);
static const uint64_t  func_44(int32_t * p_45, int32_t * p_46);




static int16_t  func_1(void)
{ 
    int32_t l_4 = 0x029989D2L;
    int32_t l_10 = 1L;
    uint16_t l_24 = 1UL;
    union U3 l_1287 = {0x8FC0B9BD843A72E4LL};
    int32_t l_1590 = 0xF189205BL;
    int32_t l_1591[2];
    int32_t l_1592 = 0x182F0F03L;
    uint8_t l_1652 = 0xBCL;
    uint32_t l_1679[5] = {1UL,1UL,1UL,1UL,1UL};
    int32_t l_1782 = 0x6C02D930L;
    int8_t l_1789 = 0x33L;
    union U2 l_1790 = {-1L};
    union U4 ** const * const l_1791 = &g_394[1][1][6];
    struct S1 l_1804 = {0x0391L,0x52472C46627AFE9BLL,3UL};
    int32_t l_1822[2][7][3] = {{{0x053D9397L,(-10L),0x053D9397L},{0x35E532E7L,0x26674E98L,0x9108804BL},{0x35E532E7L,0x35E532E7L,0x26674E98L},{0x053D9397L,0x26674E98L,0x26674E98L},{0x26674E98L,(-10L),0x9108804BL},{0x053D9397L,(-10L),0x053D9397L},{0x35E532E7L,0x26674E98L,0x9108804BL}},{{0x35E532E7L,0x35E532E7L,0x26674E98L},{0x9108804BL,0x053D9397L,0x053D9397L},{0x053D9397L,0x35E532E7L,(-10L)},{0x9108804BL,0x35E532E7L,0x9108804BL},{0x26674E98L,0x053D9397L,(-10L)},{0x26674E98L,0x26674E98L,0x053D9397L},{0x9108804BL,0x053D9397L,0x053D9397L}}};
    int32_t l_1839 = 0x85552398L;
    uint32_t l_1872 = 0UL;
    union U5 *l_1883 = &g_179;
    struct S0 l_1900 = {-1L,0x73B7DEC7L,0UL,255UL,1L,1UL,1UL};
    uint64_t *l_1905 = &g_82;
    uint64_t l_1931 = 0x500976ECD56BC531LL;
    uint32_t **l_1946 = &g_1945;
    int i, j, k;
    for (i = 0; i < 2; i++)
        l_1591[i] = 0L;
    if ((safe_div_func_uint32_t_u_u(l_4, func_5(((((l_10 = l_4) ^ 0x62L) , func_11((1L || func_13(((l_10 , (((0x0549EC71CB27F08ELL != func_15(((safe_mod_func_uint32_t_u_u(g_22[3][0][1], g_22[3][0][1])) >= g_22[3][0][0]), g_23[0], l_24, l_24)) != g_23[0].f0) <= 0x63C6L)) , g_27))))) , 0xC67449EEL), l_1287, g_59.f1, l_1287.f0))))
    { 
        for (g_61.f2 = 0; (g_61.f2 >= 26); g_61.f2++)
        { 
            return g_99[0].f3;
        }
    }
    else
    { 
        int32_t *l_1585 = &g_27;
        int32_t *l_1586 = &g_55;
        int32_t *l_1587 = &g_55;
        int32_t *l_1588 = (void*)0;
        int32_t *l_1589[2];
        uint16_t l_1593 = 65526UL;
        uint64_t l_1597 = 1UL;
        int32_t *l_1598 = &g_55;
        union U4 **l_1609 = &g_395;
        int8_t l_1641 = 0xA0L;
        uint64_t **l_1671[6][3] = {{&g_219,&g_219,&g_219},{&g_219,&g_219,&g_219},{&g_219,&g_219,(void*)0},{(void*)0,&g_219,&g_219},{&g_219,&g_219,&g_219},{&g_219,(void*)0,(void*)0}};
        int16_t l_1710[5];
        struct S0 *l_1732 = &g_99[0];
        uint16_t l_1745 = 0UL;
        const union U5 l_1792[6][5][6] = {{{{0x61D9L},{0xA720L},{0x373BL},{0x1A76L},{1UL},{65528UL}},{{1UL},{0x04DCL},{0xB575L},{0x36A2L},{2UL},{0UL}},{{0x50C7L},{2UL},{0x872FL},{0x3FD3L},{1UL},{0x36A2L}},{{1UL},{0x7BABL},{65529UL},{0x51D5L},{0x770AL},{1UL}},{{65529UL},{0x5517L},{1UL},{2UL},{0x68E9L},{1UL}}},{{{0x04DCL},{0x51D5L},{0x3FD3L},{0xDCFCL},{0xA47FL},{0x373BL}},{{1UL},{0x68E9L},{5UL},{0xC9B2L},{5UL},{0x68E9L}},{{0UL},{0UL},{8UL},{65533UL},{0xDBDAL},{65527UL}},{{65535UL},{0x3762L},{65535UL},{65527UL},{0xC9B2L},{2UL}},{{0xDCFCL},{0x3762L},{5UL},{0x94C7L},{0xDBDAL},{0x7B53L}}},{{{0x4FD2L},{0UL},{0x770AL},{65535UL},{5UL},{1UL}},{{65532UL},{0x68E9L},{65535UL},{65529UL},{0xA47FL},{5UL}},{{0x7BABL},{0x51D5L},{0UL},{0x3762L},{0x68E9L},{0x5517L}},{{8UL},{0x5517L},{65533UL},{0x04DCL},{0x770AL},{1UL}},{{0x3762L},{0x7BABL},{0x4FD2L},{65535UL},{1UL},{65529UL}}},{{{0x1236L},{2UL},{0xD406L},{0x73A5L},{2UL},{1UL}},{{0xCD8AL},{0x04DCL},{0x3762L},{0x61D9L},{1UL},{0xF010L}},{{1UL},{0xA720L},{0xBA4EL},{0x50C7L},{0x3762L},{1UL}},{{7UL},{0xDCFCL},{65532UL},{65532UL},{0xDCFCL},{7UL}},{{1UL},{2UL},{0UL},{0xFEE5L},{0xBA4EL},{65527UL}}},{{{0x693AL},{0xC9B2L},{0x7BABL},{0x43B4L},{1UL},{0x04DCL}},{{0x693AL},{8UL},{0x43B4L},{0xFEE5L},{65529UL},{65533UL}},{{1UL},{0xBA4EL},{0x94C7L},{65532UL},{0xE6CFL},{8UL}},{{7UL},{0x4FD2L},{0x4192L},{0x50C7L},{0UL},{0x29CAL}},{{1UL},{65527UL},{0x06C9L},{0x61D9L},{0xD406L},{1UL}}},{{{0xCD8AL},{0x1236L},{0x68E9L},{0x73A5L},{0xB575L},{0xDCFCL}},{{1UL},{0x7B53L},{9UL},{5UL},{0x51D5L},{0x43B4L}},{{1UL},{0xBA4EL},{7UL},{0x4192L},{0xCD8AL},{0x4FD2L}},{{0x29CAL},{0x43B4L},{1UL},{1UL},{65529UL},{5UL}},{{0x51D5L},{0x3FD3L},{0xDCFCL},{0xA47FL},{0x373BL},{1UL}}}};
        int i, j, k;
        for (i = 0; i < 2; i++)
            l_1589[i] = (void*)0;
        for (i = 0; i < 5; i++)
            l_1710[i] = (-8L);
        l_1593++;
        if ((safe_unary_minus_func_uint16_t_u(l_1590)))
        { 
            int32_t l_1605 = 1L;
            int32_t *l_1606 = (void*)0;
            struct S1 l_1636[2][5] = {{{-1L,18446744073709551615UL,0x4EFCB53CL},{-1L,18446744073709551615UL,0x4EFCB53CL},{-1L,18446744073709551615UL,0x4EFCB53CL},{-1L,18446744073709551615UL,0x4EFCB53CL},{-1L,18446744073709551615UL,0x4EFCB53CL}},{{-1L,18446744073709551615UL,0x4EFCB53CL},{-1L,18446744073709551615UL,0x4EFCB53CL},{-1L,18446744073709551615UL,0x4EFCB53CL},{-1L,18446744073709551615UL,0x4EFCB53CL},{-1L,18446744073709551615UL,0x4EFCB53CL}}};
            uint16_t l_1648 = 0x11D3L;
            int i, j;
            if (l_1597)
            { 
                for (l_24 = 0; (l_24 <= 1); l_24 += 1)
                { 
                    int i;
                    l_1606 = &l_1605;
                    (*g_380) = &l_1591[l_24];
                    l_1591[l_24] = l_1591[1];
                }
            }
            else
            { 
                int32_t l_1611 = 0xC060893EL;
                union U3 l_1612 = {0xF5E1827955367A86LL};
                int32_t l_1638[5] = {0x89D98F5BL,0x89D98F5BL,0x89D98F5BL,0x89D98F5BL,0x89D98F5BL};
                int i;
                for (g_179.f2 = (-15); (g_179.f2 > 33); g_179.f2++)
                { 
                    union U4 ***l_1610 = &g_394[1][1][6];
                    struct S1 l_1633 = {-1L,5UL,0x1B13C992L};
                    int64_t *l_1637 = &g_209;
                    int16_t *l_1639 = (void*)0;
                    int16_t *l_1640 = &g_1027[6][0];
                    int64_t *l_1645 = (void*)0;
                    int64_t *l_1646 = (void*)0;
                    int64_t *l_1647 = &l_1612.f0;
                    (*l_1610) = l_1609;
                    if (l_1611)
                        continue;
                    (**g_379) = (l_1612 , (void*)0);
                    (*g_1396) ^= (safe_sub_func_uint64_t_u_u((safe_add_func_uint64_t_u_u(((**g_1031) = (safe_add_func_int64_t_s_s(((safe_mul_func_int16_t_s_s(((*l_1640) = (safe_sub_func_uint8_t_u_u(((l_1611 , (safe_lshift_func_int16_t_s_u(((safe_mul_func_uint8_t_u_u((safe_rshift_func_uint8_t_u_s((safe_add_func_uint8_t_u_u(g_22[3][1][2], (g_223[0][0].f0 || (safe_add_func_int64_t_s_s((l_1633 , ((*l_1637) = (safe_mod_func_int64_t_s_s(((l_1636[1][4] , (l_1612.f0 != (*l_1587))) | g_143), 1L)))), 0x58606DC1D3BB97D0LL))))), 1)), 0xEAL)) & l_1611), l_1638[0]))) <= g_99[0].f6), 0x14L))), g_333[5][0])) < l_1611), l_1641))), (**g_653))), l_1611));
                    (*l_1585) = (safe_mul_func_int16_t_s_s(((g_527 &= g_23[0].f1) ^ (!((*l_1647) = ((*l_1637) = l_1638[0])))), ((**g_1130) , ((*l_1598) ^ 0xAB7724416BFB52F3LL))));
                }
                l_1605 ^= (*l_1598);
            }
            ++l_1648;
            (*l_1586) &= (*g_1396);
            for (g_179.f3.f0 = 1; (g_179.f3.f0 >= 0); g_179.f3.f0 -= 1)
            { 
                int i;
                for (g_1451.f3.f2 = 0; (g_1451.f3.f2 <= 1); g_1451.f3.f2 += 1)
                { 
                    int i, j;
                    (*l_1585) ^= ((~0x47D8541EL) || g_23[0].f0);
                }
                if (l_1652)
                    break;
            }
        }
        else
        { 
            union U3 *l_1665 = (void*)0;
            int16_t l_1668 = 0x6192L;
            int64_t *l_1672 = &g_209;
            int32_t l_1677 = 1L;
            int32_t l_1678 = 0xAAD91804L;
            union U5 ****l_1705 = (void*)0;
            union U5 *****l_1704 = &l_1705;
            uint32_t *l_1757 = &g_210;
            uint16_t l_1760 = 65530UL;
            if ((safe_sub_func_int64_t_s_s(((*l_1672) |= ((safe_div_func_int32_t_s_s((safe_mul_func_int16_t_s_s((safe_rshift_func_int16_t_s_u(g_738, 5)), g_27)), (safe_mod_func_int16_t_s_s(g_198, (safe_mod_func_int16_t_s_s(((g_1666 = ((*g_1542) = (*g_1542))) , ((~(l_1668 != ((safe_div_func_int16_t_s_s((l_1671[1][1] == l_1671[1][1]), (-2L))) , 2L))) , (*l_1598))), g_90[0])))))) < (*l_1598))), (*l_1586))))
            { 
                const uint8_t l_1709 = 1UL;
                int8_t l_1713 = (-5L);
                struct S0 l_1714 = {0x1968314BFB529B17LL,0xC03CC64CL,18446744073709551615UL,251UL,-1L,0UL,0xB6E1347AE9F4A116LL};
                int32_t ** const *l_1728 = &g_221;
                for (g_1110 = (-13); (g_1110 >= 4); ++g_1110)
                { 
                    (*l_1586) = (*g_1396);
                }
                if (l_1668)
                { 
                    int32_t l_1675 = 1L;
                    int32_t l_1676 = (-5L);
                    int32_t l_1712 = (-9L);
                    ++l_1679[0];
                    l_1712 = ((safe_unary_minus_func_uint32_t_u((safe_unary_minus_func_int8_t_s((safe_div_func_uint64_t_u_u((safe_sub_func_int16_t_s_s((safe_mod_func_uint16_t_u_u((safe_sub_func_uint16_t_u_u(1UL, (safe_sub_func_uint64_t_u_u((*l_1587), (((safe_mul_func_uint8_t_u_u((safe_sub_func_int32_t_s_s(((safe_lshift_func_int8_t_s_u((((safe_lshift_func_uint8_t_u_s(((safe_mod_func_int8_t_s_s((l_1704 != (g_1706 = g_1706)), 9L)) == ((l_1709 && ((l_1676 |= (l_1678 <= l_1591[0])) , l_1668)) >= 0xEC91L)), 5)) , (void*)0) == (void*)0), 3)) ^ l_1710[3]), 0x8ACEA582L)), 0L)) , (void*)0) == &g_1541))))), 0x2F62L)), 0x1F34L)), g_1711[1])))))) >= 0L);
                }
                else
                { 
                    union U3 **l_1718[4][1][1] = {{{(void*)0}},{{&g_1542}},{{(void*)0}},{{&g_1542}}};
                    int32_t l_1720 = 0x507CB8EDL;
                    uint16_t *l_1722 = &g_527;
                    int32_t l_1727 = 1L;
                    int i, j, k;
                    (*l_1585) = l_1713;
                    l_1590 ^= ((g_99[0].f2 >= (l_1714 , (safe_mul_func_int16_t_s_s((!(((*g_1541) != (g_1719 = (*g_1541))) < (l_1720 = 0xCC24008409D43718LL))), (safe_unary_minus_func_uint16_t_u((((*l_1722)++) , (safe_mod_func_uint16_t_u_u(((***g_652) == l_1727), 0xA2ECL))))))))) < 0x9CB2109C1E7DE820LL);
                    l_1728 = (*g_378);
                }
            }
            else
            { 
                uint16_t l_1731 = 0UL;
                uint32_t *l_1756 = &g_1711[1];
                uint32_t **l_1755 = &l_1756;
                int8_t *l_1758[4] = {&g_90[1],&g_90[1],&g_90[1],&g_90[1]};
                int32_t l_1761 = 0x24C9BACDL;
                struct S1 * const *l_1783[5][4] = {{&g_60[1][2],&g_60[1][2],&g_60[1][2],&g_60[1][2]},{&g_60[1][2],&g_60[1][2],&g_60[1][2],&g_60[1][2]},{&g_60[1][2],&g_60[1][2],&g_60[1][2],&g_60[1][2]},{&g_60[1][2],&g_60[1][2],&g_60[1][2],&g_60[1][2]},{&g_60[1][2],&g_60[1][2],&g_60[1][2],&g_60[1][2]}};
                int i, j;
                for (g_55 = 0; (g_55 > (-7)); --g_55)
                { 
                    if (l_1731)
                        break;
                    (*g_1088) = l_1732;
                    (*g_1541) = (*g_1541);
                }
                l_1761 &= ((safe_rshift_func_uint16_t_u_u((1L || ((safe_mod_func_uint32_t_u_u((((l_1760 |= (safe_div_func_uint16_t_u_u(((safe_div_func_int64_t_s_s((safe_rshift_func_int8_t_s_s((l_1745 == (4294967287UL > (safe_mul_func_int8_t_s_s(((safe_add_func_int32_t_s_s((safe_mul_func_int16_t_s_s((!g_27), (safe_rshift_func_int8_t_s_u((l_1591[1] = ((l_1678 , ((*l_1755) = (void*)0)) == l_1757)), 4)))), g_90[1])) ^ g_1759), 255UL)))), (*l_1586))), 0xDE525BC986F91F2DLL)) || l_1590), g_1027[4][0]))) & 4L) >= 0x9C65L), l_1731)) > l_1679[3])), l_1731)) | l_1668);
                (*l_1587) &= ((safe_sub_func_int8_t_s_s((safe_div_func_int64_t_s_s(l_1679[0], l_1679[0])), (safe_add_func_int16_t_s_s((safe_div_func_uint16_t_u_u(((l_1668 <= (safe_mod_func_uint8_t_u_u((safe_add_func_int64_t_s_s(((g_1774[2][0] , &g_60[1][3]) != ((safe_sub_func_int64_t_s_s((safe_mul_func_uint8_t_u_u((safe_mul_func_uint16_t_u_u((~(l_1782 = (0x3118L & (0x88854BADL ^ l_1678)))), g_82)), 2L)), l_1591[1])) , l_1783[1][0])), (-1L))), l_24))) && (*l_1585)), g_1774[2][0].f2)), 0x6596L)))) , l_4);
                (*l_1585) = l_1731;
            }
            (*g_1396) &= 6L;
        }
        (*l_1585) = (safe_lshift_func_int16_t_s_s(((!(l_1792[0][0][2] , (g_527 ^ l_1679[2]))) >= g_334), g_22[3][0][1]));
    }
    for (l_1592 = 2; (l_1592 <= (-9)); l_1592 = safe_sub_func_int64_t_s_s(l_1592, 8))
    { 
        const uint8_t l_1795 = 0x15L;
        int64_t *****l_1799 = &g_1796;
        int32_t l_1821 = 0x70ECF8DFL;
        int32_t l_1827 = 0L;
        int32_t l_1836 = (-1L);
        int32_t l_1838 = 0x049EE805L;
        int32_t l_1840 = (-10L);
        int32_t l_1841[6][3] = {{(-9L),1L,1L},{(-5L),0x254824E9L,0x254824E9L},{(-9L),1L,1L},{(-5L),0x254824E9L,0x254824E9L},{(-9L),1L,1L},{(-5L),0x254824E9L,0x254824E9L}};
        int64_t *l_1848 = &g_223[0][0].f0;
        union U5 l_1869 = {0x058EL};
        struct S0 l_1887 = {0xF1664F8DCAE44EEBLL,0xDD71D137L,0x5040515FL,8UL,0L,255UL,0x5E5A7234041468A8LL};
        union U3 l_1895 = {8L};
        int32_t l_1953 = 0x690ECCC3L;
        int32_t l_1958 = 0x7B5C79CDL;
        uint32_t l_1964 = 1UL;
        int i, j;
        l_1591[1] &= (0xFFL | (l_1795 && (((*l_1799) = g_1796) != (void*)0)));
        for (l_4 = 0; (l_4 > (-13)); l_4 = safe_sub_func_int64_t_s_s(l_4, 9))
        { 
            return g_1666.f0;
        }
        if (l_1652)
            break;
        for (g_59.f2 = 0; (g_59.f2 <= 4); g_59.f2 += 1)
        { 
            int32_t l_1805 = 0x00A0CA35L;
            int16_t *l_1823 = &l_1804.f0;
            int32_t l_1835 = 0xC77A97F1L;
            int32_t l_1837[5];
            uint64_t l_1842 = 0xF3C443F62EFFFD44LL;
            int32_t *l_1845 = &l_1837[2];
            uint32_t l_1852 = 0xB584C65BL;
            uint16_t **l_1865 = &g_1864;
            uint16_t ***l_1866 = &l_1865;
            int i;
            for (i = 0; i < 5; i++)
                l_1837[i] = 0xDF62DA40L;
            for (g_1271 = 4; (g_1271 >= 0); g_1271 -= 1)
            { 
                int i;
                (*g_1396) = (((safe_sub_func_int8_t_s_s((((l_1679[g_59.f2] , ((g_90[g_1271] | (-6L)) & (****g_1796))) <= 0xDAC5L) != 0x335BFA9C5FD60BEALL), ((l_1804 , 255UL) , l_1805))) || 0x71L) , g_90[g_1271]);
                for (l_1790.f0 = 0; (l_1790.f0 != 5); l_1790.f0++)
                { 
                    struct S0 *l_1809[1];
                    struct S0 **l_1810 = &l_1809[0];
                    int i;
                    for (i = 0; i < 1; i++)
                        l_1809[i] = &g_99[3];
                    (*g_1396) |= (((*g_379) == (void*)0) < (!0x5EE7F1BCL));
                    (*g_1088) = ((*l_1810) = l_1809[0]);
                }
            }
            if (((l_1679[4] | (**g_653)) , (255UL > (((*l_1823) = ((safe_div_func_uint64_t_u_u(((l_10 , &l_1805) != &l_1821), l_1821)) >= (-7L))) >= 65535UL))))
            { 
                int32_t *l_1824 = &l_1805;
                int32_t *l_1825 = (void*)0;
                int32_t *l_1826 = &l_1821;
                int32_t *l_1828 = &l_1805;
                int32_t *l_1829 = &l_1805;
                int32_t *l_1830 = &g_50;
                int32_t *l_1831 = &l_1827;
                int32_t *l_1832 = (void*)0;
                int32_t *l_1833 = &g_55;
                int32_t *l_1834[5] = {&g_27,&g_27,&g_27,&g_27,&g_27};
                int i;
                --l_1842;
                l_1845 = l_1828;
                for (g_179.f3.f0 = (-12); (g_179.f3.f0 <= (-25)); g_179.f3.f0--)
                { 
                    (*l_1845) = ((void*)0 == l_1848);
                }
                for (l_1804.f2 = 0; (l_1804.f2 <= 5); l_1804.f2 += 1)
                { 
                    uint16_t *l_1849[5][5][1] = {{{&g_179.f0},{&g_123},{&l_24},{&g_22[3][0][1]},{&g_123}},{{&g_527},{&g_527},{&g_123},{&g_22[3][0][1]},{&l_24}},{{&g_123},{&g_179.f0},{&g_123},{&l_24},{&g_22[3][0][1]}},{{&g_123},{&g_527},{&g_527},{&g_123},{&g_22[3][0][1]}},{{&l_24},{&g_123},{&g_179.f0},{&g_123},{&l_24}}};
                    int32_t l_1853 = 0L;
                    int32_t l_1854 = 0x4DDEA43EL;
                    uint32_t l_1855 = 0xA245D623L;
                    const struct S0 **l_1858 = &g_1089;
                    int i, j, k;
                    (*l_1828) = ((g_90[(g_59.f2 + 1)] | g_23[0].f1) > ((++g_22[3][0][1]) == (l_1854 = (l_1853 = (l_1852 > (g_1666.f0 < l_1821))))));
                    --l_1855;
                    (*l_1829) = (((void*)0 == l_1858) > 1UL);
                }
            }
            else
            { 
                return l_1840;
            }
            l_1839 = (safe_mod_func_uint16_t_u_u(0xAF99L, ((&g_210 != &g_1711[0]) & (safe_rshift_func_int16_t_s_u((g_1863 == ((*l_1866) = l_1865)), (((*g_1396) &= (l_1841[4][2] | (safe_mul_func_int16_t_s_s((l_1869 , g_1027[0][0]), (*l_1845))))) == g_99[0].f2))))));
        }
    }
    return l_1900.f2;
}



static int32_t  func_5(int32_t  p_6, union U3  p_7, uint32_t  p_8, uint16_t  p_9)
{ 
    int32_t *l_1288 = &g_27;
    int32_t *l_1289 = (void*)0;
    int32_t *l_1290 = (void*)0;
    int32_t *l_1291 = &g_50;
    int32_t *l_1292 = &g_55;
    int32_t l_1293 = (-1L);
    int32_t *l_1294 = &g_50;
    int32_t *l_1295 = &g_50;
    int32_t *l_1296 = &g_50;
    int32_t *l_1297 = &g_27;
    int32_t *l_1298[6][6] = {{&g_55,&g_50,&g_50,&g_55,&g_50,&g_50},{&g_55,&g_50,&g_50,&g_55,&g_50,&g_50},{&g_55,&g_50,&g_50,&g_55,&g_50,&g_50},{&g_55,&g_50,&g_50,&g_55,&g_50,&g_50},{&g_55,&g_50,&g_50,&g_55,&g_50,&g_50},{&g_55,&g_50,&g_50,&g_55,&g_50,&g_50}};
    uint32_t l_1299 = 1UL;
    uint16_t *l_1334 = &g_22[3][0][1];
    uint16_t **l_1333 = &l_1334;
    uint16_t ***l_1332 = &l_1333;
    union U5 l_1361[4][7] = {{{0x8396L},{0xD818L},{0x7FF3L},{0x7FF3L},{0xD818L},{0x8396L},{0xD818L}},{{0x129CL},{0x8396L},{0x8396L},{0x129CL},{0xD818L},{0x129CL},{0x8396L}},{{65535UL},{65535UL},{0x8396L},{0x7FF3L},{0x8396L},{65535UL},{65535UL}},{{65535UL},{0x8396L},{0x7FF3L},{0x8396L},{65535UL},{65535UL},{0x8396L}}};
    const uint8_t l_1363[6] = {0x4EL,246UL,0x4EL,0x4EL,246UL,0x4EL};
    struct S1 l_1406[7][5][1] = {{{{0L,18446744073709551614UL,0UL}},{{0L,18446744073709551614UL,0UL}},{{0L,18446744073709551615UL,4294967295UL}},{{0xF170L,0x58DDBA12B6F05614LL,0xD8E324AEL}},{{-1L,18446744073709551613UL,0x75D6FCF5L}}},{{{0L,18446744073709551615UL,4294967295UL}},{{-1L,18446744073709551613UL,0x75D6FCF5L}},{{1L,0x0D376151D7C8436DLL,4294967293UL}},{{0xCECCL,0xCF93FA5AED540C21LL,1UL}},{{0x624BL,0x109F6F1D268BDD02LL,8UL}}},{{{0xCECCL,0xCF93FA5AED540C21LL,1UL}},{{1L,0x0D376151D7C8436DLL,4294967293UL}},{{-1L,18446744073709551613UL,0x75D6FCF5L}},{{0L,18446744073709551615UL,4294967295UL}},{{-1L,0x792BC30DDA306AD8LL,4294967289UL}}},{{{0x44D9L,18446744073709551615UL,0UL}},{{0xC11DL,0UL,0x6999D70CL}},{{-1L,18446744073709551614UL,3UL}},{{-1L,18446744073709551614UL,3UL}},{{0xC11DL,0UL,0x6999D70CL}}},{{{0x44D9L,18446744073709551615UL,0UL}},{{-1L,0x792BC30DDA306AD8LL,4294967289UL}},{{0L,18446744073709551615UL,4294967295UL}},{{-1L,18446744073709551613UL,0x75D6FCF5L}},{{1L,0x0D376151D7C8436DLL,4294967293UL}}},{{{0xCECCL,0xCF93FA5AED540C21LL,1UL}},{{0x624BL,0x109F6F1D268BDD02LL,8UL}},{{0xCECCL,0xCF93FA5AED540C21LL,1UL}},{{1L,0x0D376151D7C8436DLL,4294967293UL}},{{-1L,18446744073709551613UL,0x75D6FCF5L}}},{{{0L,18446744073709551615UL,4294967295UL}},{{-1L,0x792BC30DDA306AD8LL,4294967289UL}},{{0x44D9L,18446744073709551615UL,0UL}},{{0xC11DL,0UL,0x6999D70CL}},{{-1L,18446744073709551614UL,3UL}}}};
    int16_t l_1417 = 0L;
    int32_t l_1432[7][3] = {{0xFACAD847L,0xCEAAFB4DL,0xCEAAFB4DL},{1L,1L,1L},{0xFACAD847L,0xCEAAFB4DL,0xCEAAFB4DL},{1L,1L,1L},{0xFACAD847L,0xCEAAFB4DL,0xCEAAFB4DL},{1L,1L,1L},{0xFACAD847L,0xCEAAFB4DL,0xCEAAFB4DL}};
    const int16_t l_1465 = (-7L);
    const uint32_t l_1481 = 18446744073709551606UL;
    uint32_t l_1484 = 0x07274ED1L;
    union U3 *l_1511 = (void*)0;
    union U3 **l_1510 = &l_1511;
    uint32_t l_1522 = 1UL;
    int32_t ****l_1574 = &g_220;
    struct S0 *l_1582[2][7][3] = {{{(void*)0,&g_99[0],&g_99[1]},{&g_99[0],&g_99[0],&g_99[4]},{&g_99[0],&g_99[0],&g_99[4]},{&g_99[0],(void*)0,&g_99[0]},{&g_99[0],&g_99[0],&g_99[0]},{&g_99[0],&g_99[1],&g_99[4]},{&g_99[4],&g_99[0],&g_99[4]}},{{&g_99[0],&g_99[0],&g_99[1]},{&g_99[4],&g_99[0],&g_99[0]},{&g_99[0],&g_99[0],(void*)0},{&g_99[0],&g_99[0],&g_99[1]},{&g_99[0],&g_99[0],&g_99[0]},{&g_99[0],&g_99[0],&g_99[4]},{&g_99[0],&g_99[0],&g_99[0]}}};
    int i, j, k;
lbl_1493:
    --l_1299;
    for (g_59.f2 = (-21); (g_59.f2 >= 33); ++g_59.f2)
    { 
        uint32_t l_1319 = 0xA8352D91L;
        uint64_t **l_1328 = &g_219;
        uint64_t ***l_1327 = &l_1328;
        uint64_t ****l_1326 = &l_1327;
        uint64_t *****l_1325[6][5] = {{&l_1326,&l_1326,&l_1326,&l_1326,&l_1326},{&l_1326,&l_1326,&l_1326,&l_1326,&l_1326},{&l_1326,&l_1326,&l_1326,&l_1326,&l_1326},{&l_1326,&l_1326,&l_1326,&l_1326,&l_1326},{&l_1326,&l_1326,&l_1326,&l_1326,&l_1326},{&l_1326,&l_1326,&l_1326,&l_1326,&l_1326}};
        union U4 l_1343 = {0UL};
        int8_t l_1376 = 8L;
        union U2 **l_1377 = (void*)0;
        int i, j;
        for (g_27 = 4; (g_27 >= 0); g_27 -= 1)
        { 
            int32_t l_1304 = 0x8B13ADEAL;
            union U4 **l_1317 = &g_395;
            union U5 ***l_1323 = (void*)0;
            union U5 ****l_1322 = &l_1323;
            uint16_t *l_1331 = &g_179.f0;
            uint16_t **l_1330 = &l_1331;
            uint16_t ***l_1329 = &l_1330;
            int i, j;
            (*l_1292) = (((void*)0 != g_1030[g_27][g_27]) , l_1304);
            if (p_9)
            { 
                uint32_t l_1315 = 0x2CE7DFFFL;
                for (g_179.f3.f1 = 0; (g_179.f3.f1 <= 6); g_179.f3.f1 += 1)
                { 
                    union U4 ***l_1316[3][1];
                    int32_t l_1318 = 0L;
                    int i, j;
                    for (i = 0; i < 3; i++)
                    {
                        for (j = 0; j < 1; j++)
                            l_1316[i][j] = &g_394[3][2][3];
                    }
                    (***g_378) = &p_6;
                    if (p_7.f0)
                        continue;
                    if ((*l_1296))
                        continue;
                    if (p_9)
                        break;
                    if (l_1318)
                        continue;
                }
                --l_1319;
            }
            else
            { 
                l_1304 = p_8;
                return l_1319;
            }
            for (g_527 = 2; (g_527 <= 6); g_527 += 1)
            { 
                return p_6;
            }
            for (g_210 = 0; (g_210 <= 6); g_210 += 1)
            { 
                union U5 *****l_1324 = &l_1322;
                int8_t l_1362 = 0x2EL;
                int32_t l_1365[6][6][1] = {{{1L},{0xE5665888L},{0xE5665888L},{1L},{0xBCA47772L},{4L}},{{0xBCA47772L},{1L},{0xE5665888L},{0xE5665888L},{1L},{0xBCA47772L}},{{4L},{0xBCA47772L},{1L},{0xE5665888L},{0xE5665888L},{1L}},{{0xBCA47772L},{4L},{0xBCA47772L},{1L},{0xE5665888L},{0xE5665888L}},{{1L},{0xBCA47772L},{4L},{0xBCA47772L},{1L},{0xE5665888L}},{{0xE5665888L},{1L},{0xBCA47772L},{4L},{0xBCA47772L},{1L}}};
                int i, j, k;
                (*l_1324) = l_1322;
                if ((l_1325[5][0] == &l_1326))
                { 
                    uint64_t l_1344 = 0x2E6D89FC5CC53232LL;
                    int64_t *l_1364[6][7][6] = {{{(void*)0,&g_143,(void*)0,&g_335,(void*)0,&g_209},{&g_143,&g_143,&g_335,&g_209,&g_335,&g_143},{&g_209,&g_99[0].f0,&g_143,&g_143,&g_335,&g_99[0].f0},{&g_223[0][0].f0,&g_335,&g_143,(void*)0,(void*)0,&g_143},{&g_335,&g_335,&g_209,&g_99[0].f0,&g_143,&g_143},{(void*)0,&g_143,(void*)0,(void*)0,&g_223[0][0].f0,&g_335},{&g_335,&g_143,(void*)0,&g_143,&g_223[0][0].f0,&g_209}},{{(void*)0,&g_143,&g_335,&g_223[0][0].f0,(void*)0,(void*)0},{&g_223[0][0].f0,(void*)0,(void*)0,(void*)0,&g_99[0].f0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,&g_209,&g_99[0].f0},{&g_209,(void*)0,(void*)0,&g_143,(void*)0,&g_335},{(void*)0,(void*)0,&g_223[0][0].f0,&g_143,&g_99[0].f0,(void*)0},{&g_209,&g_143,(void*)0,(void*)0,&g_143,(void*)0},{(void*)0,&g_223[0][0].f0,&g_143,(void*)0,(void*)0,(void*)0}},{{&g_223[0][0].f0,&g_143,&g_143,&g_223[0][0].f0,(void*)0,&g_143},{(void*)0,(void*)0,(void*)0,&g_143,&g_335,&g_209},{&g_335,(void*)0,&g_223[0][0].f0,(void*)0,&g_335,&g_223[0][0].f0},{&g_143,(void*)0,(void*)0,&g_143,(void*)0,&g_143},{&g_223[0][0].f0,&g_143,&g_335,&g_223[0][0].f0,(void*)0,&g_143},{&g_143,&g_223[0][0].f0,&g_335,&g_223[0][0].f0,&g_143,(void*)0},{&g_335,&g_143,(void*)0,&g_335,&g_99[0].f0,&g_143}},{{&g_223[0][0].f0,(void*)0,&g_99[0].f0,&g_143,(void*)0,&g_143},{&g_143,(void*)0,(void*)0,&g_143,&g_209,(void*)0},{(void*)0,(void*)0,&g_335,(void*)0,&g_99[0].f0,&g_143},{&g_143,(void*)0,&g_335,&g_335,(void*)0,&g_143},{&g_99[0].f0,&g_143,(void*)0,&g_335,&g_223[0][0].f0,&g_223[0][0].f0},{&g_143,&g_143,&g_223[0][0].f0,(void*)0,&g_223[0][0].f0,&g_209},{&g_143,&g_209,(void*)0,&g_335,(void*)0,&g_143}},{{&g_99[0].f0,&g_223[0][0].f0,&g_143,&g_335,&g_223[0][0].f0,(void*)0},{&g_143,(void*)0,&g_143,(void*)0,&g_143,(void*)0},{(void*)0,&g_143,(void*)0,&g_143,&g_143,(void*)0},{&g_143,&g_143,&g_223[0][0].f0,&g_143,&g_143,&g_335},{&g_223[0][0].f0,&g_143,(void*)0,&g_335,&g_143,&g_99[0].f0},{&g_335,&g_143,(void*)0,&g_223[0][0].f0,&g_143,(void*)0},{&g_143,(void*)0,(void*)0,&g_223[0][0].f0,&g_223[0][0].f0,(void*)0}},{{&g_223[0][0].f0,&g_223[0][0].f0,&g_335,&g_143,(void*)0,&g_209},{&g_143,&g_209,(void*)0,(void*)0,&g_223[0][0].f0,&g_335},{&g_223[0][0].f0,(void*)0,(void*)0,&g_99[0].f0,&g_143,&g_335},{&g_223[0][0].f0,&g_99[0].f0,&g_223[0][0].f0,&g_143,&g_335,&g_223[0][0].f0},{&g_143,&g_335,&g_223[0][0].f0,(void*)0,&g_143,(void*)0},{&g_143,&g_223[0][0].f0,&g_143,(void*)0,&g_335,(void*)0},{&g_335,(void*)0,&g_143,&g_335,&g_143,(void*)0}}};
                    int i, j, k;
                    l_1332 = l_1329;
                    (*l_1295) = ((safe_mod_func_uint8_t_u_u((g_99[0].f6 && ((l_1304 = ((safe_add_func_int64_t_s_s((l_1365[1][5][0] = (((safe_lshift_func_int8_t_s_s((safe_sub_func_int32_t_s_s(((((((l_1343 , &l_1323) != (void*)0) , (((l_1344--) != ((safe_sub_func_uint16_t_u_u(((p_7.f0 || ((safe_add_func_uint32_t_u_u((safe_rshift_func_uint8_t_u_u((safe_div_func_int64_t_s_s((safe_mod_func_int8_t_s_s((((((((safe_div_func_int32_t_s_s((l_1361[2][6] , (p_9 || l_1362)), p_9)) ^ g_27) != p_7.f0) || l_1363[1]) , (void*)0) != (void*)0) | g_143), l_1304)), l_1304)), g_333[3][1])), p_6)) < 0xFB287238L)) || g_333[5][0]), l_1304)) & p_9)) != 0x34BE7EB4L)) != l_1362) , p_6) ^ g_99[0].f0), p_6)), 6)) < l_1343.f0) < l_1362)), l_1362)) || 0x444DL)) || 0L)), g_22[3][0][1])) == l_1319);
                }
                else
                { 
                    uint8_t *l_1370 = &l_1361[2][6].f3.f5;
                    uint8_t *l_1371 = &g_179.f3.f5;
                    uint8_t *l_1372 = &l_1343.f3.f3;
                    int32_t l_1375 = 3L;
                    (*g_380) = &p_6;
                }
            }
        }
        g_1378 = l_1377;
        (*l_1297) = 0x5E81933CL;
        return l_1343.f0;
    }
    for (g_27 = 29; (g_27 <= 25); --g_27)
    { 
        const uint64_t * const **l_1391 = (void*)0;
        int16_t *l_1395 = &l_1361[2][6].f3.f4;
        const int32_t l_1397 = (-1L);
        int32_t l_1398 = (-1L);
        uint8_t l_1483 = 253UL;
        uint32_t l_1490 = 0x643F8F80L;
        int32_t l_1498 = 0x60AB4B93L;
        union U4 l_1570 = {18446744073709551615UL};
        int64_t l_1575 = (-3L);
        if ((safe_sub_func_uint8_t_u_u(((safe_div_func_uint16_t_u_u(((+((safe_add_func_int8_t_s_s(g_144, (*l_1292))) < ((*l_1395) = (safe_div_func_uint32_t_u_u(((void*)0 != l_1391), (~(safe_lshift_func_uint8_t_u_s((g_67 = 248UL), 3)))))))) && (&p_6 == (l_1290 = g_1396))), l_1397)) > p_8), 0x01L)))
        { 
            uint64_t l_1399 = 18446744073709551615UL;
            l_1399++;
        }
        else
        { 
            (*g_380) = &l_1398;
            if ((*l_1295))
                break;
        }
        for (g_179.f3.f2 = 0; (g_179.f3.f2 <= 0); g_179.f3.f2 += 1)
        { 
            union U4 l_1402 = {18446744073709551608UL};
            uint32_t *l_1403 = &l_1402.f1;
            int8_t l_1431 = 0x1CL;
            struct S0 *l_1439 = &g_99[0];
            struct S0 **l_1438 = &l_1439;
            union U4 * const *l_1446 = (void*)0;
            union U4 **l_1452 = &g_395;
            int32_t l_1519[4][5][3] = {{{2L,1L,1L},{0x645EB421L,0x429D0EFCL,(-10L)},{2L,0x862966ACL,1L},{1L,0x429D0EFCL,0L},{2L,1L,1L}},{{0x645EB421L,0x429D0EFCL,(-10L)},{2L,0x862966ACL,1L},{1L,0x429D0EFCL,0L},{2L,1L,1L},{0x645EB421L,0x429D0EFCL,(-10L)}},{{2L,0x862966ACL,1L},{1L,0x429D0EFCL,0L},{2L,1L,1L},{0x645EB421L,0x429D0EFCL,(-10L)},{2L,0x862966ACL,1L}},{{1L,0x429D0EFCL,0L},{2L,1L,1L},{0x645EB421L,0x429D0EFCL,(-10L)},{2L,0x862966ACL,1L},{1L,0x429D0EFCL,0L}}};
            union U3 ***l_1552 = &g_1541;
            union U3 ****l_1551 = &l_1552;
            int32_t * const *l_1573 = (void*)0;
            int32_t * const **l_1572[5][1][2] = {{{&l_1573,(void*)0}},{{&l_1573,&l_1573}},{{&l_1573,&l_1573}},{{&l_1573,&l_1573}},{{&l_1573,(void*)0}}};
            int32_t * const ***l_1571 = &l_1572[1][0][0];
            uint32_t l_1577 = 0x3E1F6DD9L;
            int i, j, k;
            for (g_143 = 5; (g_143 >= 1); g_143 -= 1)
            { 
                const int32_t l_1413 = 0xB5235C84L;
                const uint64_t **l_1416 = (void*)0;
                int32_t l_1433 = 0L;
                union U4 * const **l_1447 = &l_1446;
                union U4 * const l_1450[3] = {&g_1451,&g_1451,&g_1451};
                union U4 * const *l_1449 = &l_1450[1];
                union U4 * const **l_1448 = &l_1449;
                struct S1 l_1509 = {0x27A3L,0x0C0E2D51D538458CLL,0xD2D2B53CL};
                union U3 **l_1513 = (void*)0;
                int i, j;
                if (((&l_1299 == (l_1402 , l_1403)) , (safe_add_func_int32_t_s_s(((((l_1397 > ((l_1406[5][1][0] , (safe_lshift_func_int16_t_s_u((safe_rshift_func_uint8_t_u_u((safe_mod_func_int64_t_s_s(l_1413, 0x3B9489F7326F1CC3LL)), 5)), (*l_1294)))) < p_8)) < l_1397) | l_1413) != p_6), 0x931ABB36L))))
                { 
                    int64_t l_1430 = 0x17DF5997463B1AC5LL;
                    const int32_t *l_1434 = &g_55;
                    int i, j;
                    l_1433 = (safe_rshift_func_uint8_t_u_s((l_1416 == (void*)0), (((l_1417 , (*l_1295)) && ((safe_mul_func_uint16_t_u_u(p_9, (safe_mul_func_uint16_t_u_u((safe_div_func_uint8_t_u_u(((safe_mod_func_uint8_t_u_u((safe_mod_func_int16_t_s_s(((((p_7.f0 || (((safe_add_func_int64_t_s_s(((0x61403BC9L | l_1397) || p_6), 0UL)) ^ l_1430) != l_1431)) > 0xE77BA1FCL) , l_1431) >= l_1397), 0x45ACL)), g_99[0].f5)) <= l_1432[5][2]), g_99[0].f0)), 1UL)))) <= l_1402.f2)) && l_1397)));
                    if (l_1430)
                        continue;
                    (*l_1294) = (p_9 & p_6);
                    l_1434 = &l_1397;
                    l_1433 ^= (-7L);
                }
                else
                { 
                    uint32_t l_1435 = 0x3B75FB3AL;
                    --l_1435;
                    p_6 ^= ((void*)0 != l_1438);
                }
                if ((safe_lshift_func_uint16_t_u_u((l_1402.f0 , ((l_1397 < (0xD245L || ((safe_sub_func_uint16_t_u_u(p_6, ((*l_1334) = (safe_rshift_func_uint16_t_u_u(((((*l_1448) = ((*l_1447) = l_1446)) != l_1452) ^ (safe_sub_func_uint8_t_u_u((safe_mod_func_int64_t_s_s(((safe_mul_func_int16_t_s_s((safe_add_func_int32_t_s_s(((((safe_div_func_uint64_t_u_u(((safe_sub_func_uint32_t_u_u(p_8, l_1413)) < l_1402.f2), l_1402.f2)) || p_6) != l_1433) || l_1433), p_7.f0)), l_1397)) | 0x9112L), (*l_1297))), 0L))), l_1465))))) > 0x94L))) >= 0x3A559E5FL)), l_1433)))
                { 
                    int8_t *l_1477 = &g_90[1];
                    int32_t l_1478[5][3];
                    int32_t *l_1479 = (void*)0;
                    int32_t *l_1480 = &l_1361[2][6].f1;
                    int32_t l_1482 = 0L;
                    int i, j;
                    for (i = 0; i < 5; i++)
                    {
                        for (j = 0; j < 3; j++)
                            l_1478[i][j] = 0xE8371F8BL;
                    }
                    l_1483 ^= (l_1482 |= (((((*l_1480) = (((g_59.f0 < 0L) != ((*g_395) , p_8)) <= ((safe_sub_func_int8_t_s_s(((safe_sub_func_int64_t_s_s((safe_unary_minus_func_uint32_t_u(((g_641 != (safe_rshift_func_int8_t_s_s(g_99[0].f4, 7))) | ((safe_lshift_func_int8_t_s_u(((*l_1477) &= (safe_div_func_uint8_t_u_u((*l_1291), p_9))), l_1433)) >= l_1478[1][1])))), 0UL)) || p_9), 0xBDL)) >= p_6))) , l_1481) <= g_22[0][0][0]) & p_8));
                    l_1484++;
                    if (p_8)
                        break;
                    return p_8;
                }
                else
                { 
                    uint64_t l_1487[1][1];
                    uint8_t *l_1499[7][6][6] = {{{&g_99[0].f3,&l_1483,&g_333[5][0],&g_99[0].f3,&g_337,(void*)0},{(void*)0,&g_99[0].f5,&g_67,&g_337,&g_337,&g_337},{&g_333[1][0],&l_1483,&g_333[5][0],(void*)0,&g_67,&g_333[1][0]},{&g_99[0].f5,&g_337,&g_333[2][0],(void*)0,&g_99[0].f5,&g_99[0].f5},{&g_67,&g_333[5][0],&l_1483,&g_333[5][0],(void*)0,&g_333[3][0]},{(void*)0,(void*)0,&g_333[5][0],&g_67,(void*)0,&g_333[3][0]}},{{&g_337,&g_99[0].f5,&l_1483,&g_333[5][0],(void*)0,&g_99[0].f5},{&g_333[1][0],&l_1483,&g_333[2][0],&g_333[2][0],&l_1483,&g_333[1][0]},{&g_99[0].f5,(void*)0,&g_333[5][0],&l_1483,&g_99[0].f5,&g_337},{&g_333[3][0],(void*)0,&g_67,&g_333[5][0],(void*)0,(void*)0},{&g_333[3][0],(void*)0,&g_333[5][0],&l_1483,&g_333[5][0],&g_67},{&g_99[0].f5,&g_99[0].f5,(void*)0,&g_333[2][0],&g_337,&g_99[0].f5}},{{&g_333[1][0],&g_67,(void*)0,&g_333[5][0],&l_1483,&g_333[1][0]},{&g_337,&g_337,&g_337,&g_67,&g_99[0].f5,(void*)0},{(void*)0,&g_337,&g_99[0].f3,&g_333[5][0],&g_99[0].f5,&g_337},{(void*)0,&g_99[0].f5,&g_67,&g_67,&g_333[5][0],&g_67},{&g_67,&g_333[1][0],&g_333[5][0],&g_99[0].f3,&g_99[0].f3,&g_99[0].f5},{&g_333[5][0],&g_337,&g_333[5][0],(void*)0,(void*)0,&g_333[5][0]}},{{(void*)0,(void*)0,&g_333[5][0],&g_67,&g_333[1][0],&g_99[0].f5},{&g_337,&g_67,&g_333[5][0],&g_67,&g_99[0].f5,&g_67},{&g_67,&g_99[0].f5,&g_67,&g_333[5][0],&g_67,&g_337},{&g_99[0].f5,&g_333[1][0],&g_67,&g_333[5][0],(void*)0,(void*)0},{&g_333[5][0],(void*)0,(void*)0,&g_333[5][0],&g_337,&g_333[5][0]},{&g_99[0].f5,&g_99[0].f3,&g_99[0].f3,&g_333[5][0],&g_333[1][0],&g_67}},{{&g_67,&g_333[5][0],&g_67,&g_67,&g_99[0].f5,(void*)0},{&g_337,&g_99[0].f5,&g_67,&g_67,&g_333[3][0],(void*)0},{(void*)0,&g_333[1][0],&g_333[5][0],(void*)0,&g_333[3][0],&g_99[0].f5},{&g_333[5][0],&g_99[0].f5,&g_99[0].f3,&g_99[0].f3,&g_99[0].f5,&g_333[5][0]},{&g_67,&g_333[5][0],&l_1483,&g_67,&g_333[1][0],&g_337},{(void*)0,&g_99[0].f3,&l_1483,&g_67,&g_337,&g_337}},{{(void*)0,(void*)0,&g_67,&g_333[5][0],(void*)0,&g_337},{&g_99[0].f5,&g_333[1][0],&l_1483,&g_99[0].f3,&g_67,&g_337},{&g_333[5][0],&g_99[0].f5,&l_1483,&l_1483,&g_99[0].f5,&g_333[5][0]},{&g_337,&g_67,&g_99[0].f3,&l_1483,&g_333[1][0],&g_99[0].f5},{&g_337,(void*)0,&g_333[5][0],&g_67,(void*)0,(void*)0},{&g_337,&g_337,&g_67,&l_1483,&g_99[0].f3,(void*)0}},{{&g_337,&g_333[1][0],&g_67,&l_1483,&g_333[5][0],&g_67},{&g_333[5][0],&g_99[0].f5,&g_99[0].f3,&g_99[0].f3,&g_99[0].f5,&g_333[5][0]},{&g_99[0].f5,&g_333[3][0],(void*)0,&g_333[5][0],&g_333[1][0],(void*)0},{(void*)0,&g_333[3][0],&g_67,&g_67,&g_99[0].f5,&g_337},{(void*)0,&g_99[0].f5,&g_67,&g_67,&g_333[5][0],&g_67},{&g_67,&g_333[1][0],&g_333[5][0],&g_99[0].f3,&g_99[0].f3,&g_99[0].f5}}};
                    int32_t l_1500 = (-1L);
                    int i, j, k;
                    for (i = 0; i < 1; i++)
                    {
                        for (j = 0; j < 1; j++)
                            l_1487[i][j] = 18446744073709551615UL;
                    }
                    ++l_1487[0][0];
                    ++l_1490;
                    if (p_6)
                        continue;
                    if (g_143)
                        goto lbl_1493;
                    (*l_1295) = ((safe_rshift_func_uint16_t_u_s(((((g_333[5][0] = ((((**g_1031) = ((l_1487[0][0] , p_7.f0) == ((((safe_div_func_int16_t_s_s(p_9, p_7.f0)) , (((l_1500 = (l_1498 ^ l_1498)) ^ (safe_mod_func_int32_t_s_s(p_9, l_1433))) < 0xD127E089L)) , p_8) , g_144))) || 1UL) == l_1487[0][0])) < g_99[0].f1) > g_67) <= p_9), 7)) && (*l_1296));
                }
                if (((l_1402.f2 == ((safe_mod_func_int32_t_s_s(((safe_rshift_func_uint16_t_u_s((0x51A98E03F0469AE2LL != 0UL), 11)) != ((g_61.f2 < (l_1509 , (p_6 , p_7.f0))) | 0x232C8AA4L)), g_223[0][0].f0)) < 0xAEB90651L)) , p_6))
                { 
                    union U3 ***l_1512 = &l_1510;
                    union U3 **l_1515[7][7][5] = {{{&l_1511,(void*)0,&l_1511,&l_1511,&l_1511},{(void*)0,&l_1511,&l_1511,(void*)0,&l_1511},{&l_1511,&l_1511,(void*)0,&l_1511,&l_1511},{&l_1511,&l_1511,&l_1511,&l_1511,&l_1511},{&l_1511,(void*)0,&l_1511,&l_1511,&l_1511},{&l_1511,&l_1511,&l_1511,&l_1511,&l_1511},{&l_1511,&l_1511,&l_1511,&l_1511,&l_1511}},{{&l_1511,(void*)0,&l_1511,&l_1511,&l_1511},{&l_1511,&l_1511,&l_1511,&l_1511,&l_1511},{&l_1511,(void*)0,&l_1511,&l_1511,&l_1511},{&l_1511,&l_1511,&l_1511,&l_1511,&l_1511},{&l_1511,&l_1511,&l_1511,&l_1511,&l_1511},{&l_1511,&l_1511,&l_1511,&l_1511,&l_1511},{&l_1511,&l_1511,&l_1511,&l_1511,&l_1511}},{{&l_1511,&l_1511,&l_1511,&l_1511,&l_1511},{&l_1511,&l_1511,&l_1511,&l_1511,&l_1511},{&l_1511,&l_1511,(void*)0,&l_1511,&l_1511},{&l_1511,&l_1511,&l_1511,&l_1511,&l_1511},{&l_1511,&l_1511,(void*)0,&l_1511,&l_1511},{&l_1511,&l_1511,&l_1511,&l_1511,&l_1511},{&l_1511,&l_1511,&l_1511,&l_1511,&l_1511}},{{&l_1511,&l_1511,&l_1511,&l_1511,&l_1511},{(void*)0,&l_1511,&l_1511,&l_1511,(void*)0},{&l_1511,&l_1511,&l_1511,&l_1511,&l_1511},{&l_1511,&l_1511,&l_1511,&l_1511,&l_1511},{&l_1511,&l_1511,&l_1511,&l_1511,(void*)0},{&l_1511,&l_1511,&l_1511,(void*)0,&l_1511},{&l_1511,&l_1511,&l_1511,&l_1511,&l_1511}},{{&l_1511,&l_1511,&l_1511,&l_1511,&l_1511},{&l_1511,&l_1511,&l_1511,&l_1511,&l_1511},{&l_1511,(void*)0,&l_1511,&l_1511,&l_1511},{&l_1511,&l_1511,&l_1511,&l_1511,&l_1511},{&l_1511,(void*)0,&l_1511,&l_1511,&l_1511},{&l_1511,&l_1511,&l_1511,&l_1511,&l_1511},{&l_1511,&l_1511,&l_1511,&l_1511,&l_1511}},{{&l_1511,&l_1511,&l_1511,&l_1511,&l_1511},{&l_1511,&l_1511,&l_1511,&l_1511,&l_1511},{&l_1511,&l_1511,&l_1511,&l_1511,&l_1511},{&l_1511,&l_1511,&l_1511,&l_1511,&l_1511},{&l_1511,&l_1511,(void*)0,&l_1511,&l_1511},{&l_1511,&l_1511,&l_1511,&l_1511,&l_1511},{&l_1511,&l_1511,(void*)0,&l_1511,&l_1511}},{{&l_1511,&l_1511,&l_1511,&l_1511,&l_1511},{&l_1511,&l_1511,&l_1511,&l_1511,&l_1511},{&l_1511,&l_1511,&l_1511,&l_1511,&l_1511},{&l_1511,&l_1511,&l_1511,(void*)0,&l_1511},{&l_1511,&l_1511,&l_1511,&l_1511,&l_1511},{(void*)0,&l_1511,&l_1511,(void*)0,&l_1511},{&l_1511,&l_1511,&l_1511,&l_1511,&l_1511}}};
                    union U3 ***l_1514 = &l_1515[5][1][1];
                    int i, j, k;
                    (*l_1514) = (l_1513 = ((*l_1512) = (g_223[0][0] , l_1510)));
                }
                else
                { 
                    int32_t *l_1518 = &g_248.f0;
                    (**g_220) = &p_6;
                    (*l_1295) ^= 0x739BCD10L;
                    l_1519[3][4][2] ^= (***g_220);
                }
            }
            if (((**l_1438) , (safe_mod_func_int8_t_s_s(l_1522, (safe_sub_func_int8_t_s_s(p_6, ((--(**g_1031)) || ((safe_add_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_u((safe_mod_func_uint8_t_u_u((safe_mod_func_int32_t_s_s((l_1398 = (g_61.f0 , l_1519[1][3][2])), g_59.f0)), (safe_add_func_int8_t_s_s(l_1397, p_7.f0)))), 13)), p_6)) & 0UL))))))))
            { 
                uint64_t ****l_1540 = (void*)0;
                uint64_t *****l_1539 = &l_1540;
                const int32_t *l_1550 = &l_1398;
                int32_t l_1563 = 0x2DEBC40CL;
                for (l_1402.f1 = (-8); (l_1402.f1 <= 7); l_1402.f1 = safe_add_func_int32_t_s_s(l_1402.f1, 6))
                { 
                    uint32_t l_1549[6][3] = {{0x21283F22L,4294967295UL,4294967295UL},{0xFDEB16EDL,0xEE235C83L,0xEE235C83L},{0x21283F22L,4294967295UL,4294967295UL},{0xFDEB16EDL,0xEE235C83L,0xEE235C83L},{0x21283F22L,4294967295UL,4294967295UL},{0xFDEB16EDL,0xEE235C83L,0xEE235C83L}};
                    union U3 *****l_1553 = &l_1551;
                    uint8_t *l_1576 = &g_337;
                    int i, j;
                    l_1539 = (void*)0;
                    (*l_1295) = (((*l_1334) = (((g_1541 != &g_1542) & (((*g_1087) != ((***g_1087) , (*g_1087))) ^ (safe_rshift_func_uint16_t_u_s((safe_add_func_uint32_t_u_u(((safe_mod_func_uint64_t_u_u((l_1398 = p_6), (*l_1288))) == p_7.f0), 0x57B74122L)), 7)))) | p_7.f0)) >= l_1549[0][0]);
                    l_1550 = &l_1397;
                    (*l_1553) = l_1551;
                    (*l_1292) = (((0xFD7F7676264983CELL || (***g_652)) <= ((safe_mul_func_uint8_t_u_u((safe_add_func_int32_t_s_s((l_1563 ^= (~(safe_div_func_uint8_t_u_u((safe_lshift_func_int8_t_s_s(g_738, 1)), g_59.f0)))), (safe_mul_func_uint8_t_u_u(((*l_1576) = ((((++(*g_219)) | ((safe_div_func_int16_t_s_s((l_1570 , ((l_1571 != l_1574) | l_1575)), (-1L))) ^ (*l_1550))) ^ 0x2DL) <= p_7.f0)), 1L)))), 0xC1L)) || 1UL)) < g_99[0].f1);
                }
                (***l_1574) = &p_6;
                if ((*l_1294))
                    continue;
                --l_1577;
            }
            else
            { 
                for (l_1398 = 0; (l_1398 != (-7)); l_1398 = safe_sub_func_int16_t_s_s(l_1398, 7))
                { 
                    (*g_380) = &p_6;
                    (*g_1088) = ((*l_1438) = l_1582[1][5][0]);
                }
                return p_9;
            }
        }
        (*l_1296) = p_7.f0;
    }
    return p_9;
}



static const union U5  func_11(uint16_t  p_12)
{ 
    uint32_t *l_797 = (void*)0;
    uint32_t *l_802 = &g_99[0].f1;
    int32_t l_803 = 0x764EA0DBL;
    int64_t **l_859 = &g_506[0];
    int64_t ***l_858 = &l_859;
    uint64_t *l_862 = &g_82;
    int32_t l_897 = 0x2906FB82L;
    int32_t l_899 = 9L;
    int32_t l_900 = 0xB905B63BL;
    int32_t l_901 = 0x0ED4FD5FL;
    int32_t l_902[6][4] = {{0x1C6FE0FBL,0L,0L,0x1C6FE0FBL},{0L,0x1C6FE0FBL,0L,0L},{0x1C6FE0FBL,0x1C6FE0FBL,0L,0x1C6FE0FBL},{0x1C6FE0FBL,0L,0L,0x1C6FE0FBL},{0L,0x1C6FE0FBL,0L,0L},{0x1C6FE0FBL,0x1C6FE0FBL,0L,0x1C6FE0FBL}};
    int32_t *l_906[4][1][1] = {{{&l_900}},{{&g_50}},{{&l_900}},{{&g_50}}};
    struct S1 l_999 = {0x10D5L,1UL,0x413FA5D1L};
    union U4 l_1008 = {0x8C989C2C0908FFC4LL};
    uint32_t l_1013 = 0UL;
    struct S0 l_1018 = {0x6DB1C2104A6971EALL,4294967290UL,18446744073709551607UL,0xCDL,0xB952L,255UL,0x2C26D77E1219576BLL};
    int8_t l_1094 = 0xF8L;
    union U2 l_1116 = {3L};
    const union U5 l_1157 = {0x7F40L};
    uint64_t ****l_1263 = (void*)0;
    int i, j, k;
    if (((1UL > ((l_797 != g_381[1]) , (((safe_lshift_func_int16_t_s_u((((((g_23[0].f0 == 1UL) == ((safe_div_func_uint32_t_u_u(((*l_802) ^= 4UL), 0xA5DA521EL)) , p_12)) <= 0xC7L) < l_803) ^ 0x35L), p_12)) || g_143) | l_803))) <= g_61.f0))
    { 
        int32_t l_818 = 0xCB5D4690L;
        union U5 l_828 = {0UL};
        uint8_t *l_844 = (void*)0;
        union U4 l_886 = {1UL};
        int32_t l_892 = 8L;
        int32_t l_896 = 0xC70A293FL;
        int32_t l_898[4];
        uint32_t l_903 = 0x01170250L;
        union U3 l_917 = {0xC2C74628E23A1E40LL};
        struct S0 *l_946 = &g_99[0];
        struct S0 **l_945 = &l_946;
        union U2 *l_951 = &g_248;
        union U2 **l_950 = &l_951;
        int32_t ****l_1009 = &g_220;
        int32_t *** const l_1036 = &g_221;
        uint64_t **l_1057 = (void*)0;
        int8_t l_1097 = 7L;
        int32_t l_1174 = 0L;
        int i;
        for (i = 0; i < 4; i++)
            l_898[i] = (-10L);
lbl_927:
        for (g_27 = 0; (g_27 == 4); g_27 = safe_add_func_uint64_t_u_u(g_27, 2))
        { 
            int16_t l_808 = 0x74C9L;
            int32_t **l_815 = &g_381[1];
            uint8_t *l_845 = &g_99[0].f3;
            uint32_t l_874 = 0xFDA3DB7EL;
            int32_t *l_893 = &g_55;
            int32_t *l_894 = &g_55;
            int32_t *l_895[4] = {&g_55,&g_55,&g_55,&g_55};
            int i;
            for (p_12 = 14; (p_12 == 43); p_12 = safe_add_func_uint8_t_u_u(p_12, 9))
            { 
                uint32_t l_809 = 0x05FF0710L;
                int32_t *l_814 = &g_50;
                int32_t l_821 = (-1L);
                int32_t l_822 = (-2L);
                uint32_t l_823 = 0xA6F356A8L;
                const union U5 l_854 = {2UL};
                const union U2 l_866 = {2L};
                uint8_t l_873[5] = {0x13L,0x13L,0x13L,0x13L,0x13L};
                int8_t *l_879 = &g_90[5];
                int8_t *l_880 = &g_334;
                int32_t *l_891 = &l_821;
                int i;
                l_809--;
                if (((((safe_mul_func_uint8_t_u_u(0xA7L, (((**g_220) = l_814) != (void*)0))) > 0xEB1BL) || (0x6CL >= (p_12 && ((void*)0 == l_815)))) | 8L))
                { 
                    int64_t l_816 = 4L;
                    int32_t *l_817 = &g_55;
                    int32_t *l_819 = (void*)0;
                    int32_t *l_820[4];
                    int64_t *l_837 = &g_179.f3.f0;
                    int64_t *l_838 = &l_828.f3.f0;
                    int64_t *l_839 = &g_143;
                    union U5 l_852 = {0x7CBCL};
                    int8_t *l_853 = &g_334;
                    int i;
                    for (i = 0; i < 4; i++)
                        l_820[i] = &g_50;
                    l_823++;
                    (***g_220) |= ((((safe_add_func_int64_t_s_s(p_12, (l_828 , (****g_651)))) , (p_12 > p_12)) | p_12) != (g_99[4] , l_828.f0));
                    (*l_817) &= ((safe_add_func_uint32_t_u_u(((safe_div_func_int8_t_s_s(((*l_853) |= ((safe_sub_func_uint64_t_u_u(((safe_sub_func_uint8_t_u_u(((((((*l_839) |= p_12) < ((*g_219) = (safe_rshift_func_uint16_t_u_u(((((((safe_mul_func_uint8_t_u_u(((l_844 == l_845) || (*g_654)), (((safe_div_func_uint64_t_u_u((safe_mod_func_int16_t_s_s((safe_mul_func_uint16_t_u_u(0x97AFL, 0x6086L)), g_27)), (*l_814))) == g_99[0].f2) ^ 1UL))) != 0xE069CC4AA9E42AD4LL) , p_12) != l_803) | g_198) ^ g_99[0].f2), 4)))) , l_852) , l_844) == l_844), l_828.f0)) <= 9UL), p_12)) && (**l_815))), g_333[3][0])) >= 1L), (*l_814))) && 0L);
                    return l_854;
                }
                else
                { 
                    int64_t **l_857[4][2][5] = {{{&g_506[0],(void*)0,&g_506[0],&g_506[0],(void*)0},{&g_506[0],&g_506[0],&g_506[0],&g_506[0],&g_506[0]}},{{(void*)0,(void*)0,(void*)0,(void*)0,&g_506[0]},{&g_506[0],&g_506[0],&g_506[0],&g_506[0],&g_506[0]}},{{&g_506[0],(void*)0,&g_506[0],&g_506[0],&g_506[0]},{(void*)0,&g_506[0],&g_506[0],&g_506[0],(void*)0}},{{&g_506[0],(void*)0,(void*)0,&g_506[0],(void*)0},{(void*)0,&g_506[0],&g_506[0],(void*)0,&g_506[0]}}};
                    int64_t ***l_856 = &l_857[1][1][4];
                    int64_t ****l_855[7][4][2] = {{{&l_856,&l_856},{&l_856,&l_856},{&l_856,&l_856},{&l_856,&l_856}},{{&l_856,&l_856},{&l_856,&l_856},{&l_856,&l_856},{&l_856,&l_856}},{{&l_856,&l_856},{&l_856,&l_856},{&l_856,&l_856},{&l_856,&l_856}},{{&l_856,&l_856},{&l_856,&l_856},{&l_856,&l_856},{&l_856,&l_856}},{{&l_856,&l_856},{&l_856,&l_856},{&l_856,&l_856},{&l_856,&l_856}},{{&l_856,&l_856},{&l_856,&l_856},{&l_856,&l_856},{&l_856,&l_856}},{{&l_856,&l_856},{&l_856,&l_856},{&l_856,&l_856},{&l_856,&l_856}}};
                    uint64_t **l_863 = &l_862;
                    int32_t l_870[7] = {0L,0xB98FE9FEL,0L,0L,0xB98FE9FEL,0L,0L};
                    uint16_t *l_871 = &g_179.f0;
                    uint8_t *l_872 = (void*)0;
                    uint16_t *l_875 = &l_828.f0;
                    int i, j, k;
                    l_858 = (void*)0;
                    (*l_814) = ((safe_lshift_func_uint16_t_u_u(((*l_875) = (g_144 |= ((g_99[1] , (((((*l_863) = ((g_526 = g_23[0].f2) , l_862)) != (g_248 , (void*)0)) & (((l_873[4] = ((*l_845) = ((((safe_mod_func_uint64_t_u_u((l_866 , (((*l_871) = ((((!(safe_sub_func_int8_t_s_s(((l_870[2] | g_22[3][0][1]) >= 0x50D48C03L), l_803))) , p_12) || p_12) >= l_828.f0)) > l_803)), p_12)) <= l_828.f0) , g_198) == (-1L)))) , p_12) >= l_870[1])) <= (-2L))) ^ l_874))), 5)) || p_12);
                    if ((**l_815))
                        break;
                }
                (*l_891) |= (safe_rshift_func_int16_t_s_s(((((&g_526 == ((safe_unary_minus_func_int8_t_s(((*l_880) = ((*l_879) = 0x1AL)))) , func_38((safe_add_func_uint16_t_u_u((safe_lshift_func_int8_t_s_u(((+(l_886 , p_12)) | g_333[5][0]), p_12)), (safe_sub_func_uint32_t_u_u((safe_add_func_int32_t_s_s(((*l_814) &= (****g_378)), p_12)), p_12)))), (*l_815), p_12, l_886.f2, p_12))) , l_803) == g_61.f0) == g_99[0].f4), 2));
                (***g_220) = p_12;
            }
            --l_903;
            if ((***g_220))
                continue;
        }
lbl_1067:
        l_906[3][0][0] = &l_900;
        for (g_179.f3.f2 = 0; (g_179.f3.f2 <= 0); g_179.f3.f2 += 1)
        { 
            union U4 *l_914[2][6][1] = {{{(void*)0},{&g_23[0]},{(void*)0},{&g_23[0]},{(void*)0},{&g_23[0]}},{{(void*)0},{&g_23[0]},{(void*)0},{&g_23[0]},{(void*)0},{&g_23[0]}}};
            int32_t l_922 = 0x195D671AL;
            int32_t l_925[2];
            uint8_t l_933 = 6UL;
            int64_t l_971 = 1L;
            uint64_t **l_1024 = (void*)0;
            uint64_t ***l_1023[4] = {&l_1024,&l_1024,&l_1024,&l_1024};
            uint64_t ****l_1022 = &l_1023[2];
            uint64_t *****l_1021 = &l_1022;
            int i, j, k;
            for (i = 0; i < 2; i++)
                l_925[i] = (-3L);
            for (g_143 = 2; (g_143 >= 0); g_143 -= 1)
            { 
                union U4 **l_912 = &g_395;
                uint32_t l_913 = 0x4B20EBB4L;
                for (g_738 = 0; (g_738 <= 0); g_738 += 1)
                { 
                    int32_t ****l_911 = &g_220;
                    int i, j, k;
                }
                return g_179;
            }
            l_925[0] &= (((safe_sub_func_int32_t_s_s((l_917 , (g_59.f0 < (p_12 != (safe_rshift_func_uint8_t_u_u(0x14L, 1))))), 0xB7EB162EL)) || ((safe_add_func_uint64_t_u_u((l_922 != (safe_lshift_func_int16_t_s_u(((((**l_859) = (((((*l_862) |= ((l_922 && 4294967295UL) >= l_886.f1)) != p_12) , (void*)0) != (void*)0)) == p_12) && 0x7D9AL), 12))), (**g_653))) & p_12)) , (***g_379));
            for (g_641 = 2; (g_641 >= 0); g_641 -= 1)
            { 
                int16_t l_926 = 0xB0EFL;
                struct S0 *l_943[3][1];
                struct S0 **l_942[2];
                union U2 **l_953[6][6] = {{&l_951,&l_951,&l_951,&l_951,&l_951,&l_951},{&l_951,&l_951,&l_951,&l_951,&l_951,&l_951},{&l_951,&l_951,&l_951,&l_951,&l_951,&l_951},{&l_951,&l_951,&l_951,&l_951,&l_951,&l_951},{&l_951,&l_951,&l_951,&l_951,&l_951,&l_951},{&l_951,&l_951,&l_951,&l_951,&l_951,&l_951}};
                int8_t *l_964 = &g_90[3];
                int32_t l_991 = 0xB905D109L;
                uint32_t l_993 = 1UL;
                int32_t l_995 = 7L;
                union U5 l_1007 = {9UL};
                int32_t ****l_1010 = &g_220;
                struct S1 l_1062 = {1L,18446744073709551608UL,0x95007F0AL};
                int i, j;
                for (i = 0; i < 3; i++)
                {
                    for (j = 0; j < 1; j++)
                        l_943[i][j] = &g_99[3];
                }
                for (i = 0; i < 2; i++)
                    l_942[i] = &l_943[1][0];
            }
        }
        for (l_886.f2 = 24; (l_886.f2 >= 45); ++l_886.f2)
        { 
            uint64_t l_1078 = 0UL;
            uint16_t l_1093 = 0x8B0CL;
            int32_t l_1112[5];
            union U3 l_1129[2] = {{3L},{3L}};
            const union U5 *l_1133 = &g_179;
            const union U5 * const *l_1132 = &l_1133;
            int32_t l_1135 = 0x6A1C20DEL;
            union U2 * const l_1136 = &g_248;
            struct S1 **l_1148 = &g_60[1][2];
            int i;
            for (i = 0; i < 5; i++)
                l_1112[i] = (-1L);
            for (g_123 = 0; (g_123 <= 2); g_123 += 1)
            { 
                int16_t *l_1102 = (void*)0;
                int16_t *l_1103 = &g_61.f0;
                int32_t l_1111 = 0x2DFCDAC3L;
                int32_t **l_1117 = &g_92;
                --l_1078;
                (****l_1009) = (safe_rshift_func_uint16_t_u_s(((safe_add_func_int64_t_s_s((((g_1087 == (void*)0) && (0x2D7AL && (+g_248.f0))) & (l_886 , (safe_mod_func_int64_t_s_s(l_1093, 1L)))), l_1094)) <= 4294967290UL), 12));
                (***g_379) = ((safe_mul_func_uint8_t_u_u(1UL, l_1097)) | p_12);
                (***g_379) |= (1UL <= (****l_1009));
                (***g_379) = (safe_div_func_int8_t_s_s((p_12 == (((*l_1103) = (safe_lshift_func_uint16_t_u_u((p_12 , p_12), 0))) == ((safe_div_func_int32_t_s_s((-1L), ((*l_802)--))) > p_12))), (safe_add_func_int32_t_s_s((((p_12 > (((l_1111 = ((**l_859) = g_1110)) | l_1112[0]) , 0x27L)) , (*g_92)) || p_12), (-1L)))));
                for (l_917.f0 = 0; (l_917.f0 <= 2); l_917.f0 += 1)
                { 
                    uint32_t *l_1114 = &l_1013;
                    uint32_t **l_1113 = &l_1114;
                    int i, j, k;
                    (**l_1117) = ((g_22[l_917.f0][g_123][l_917.f0] < 0xDDL) == (((((*l_1113) = (void*)0) != (((*l_802) = (((((***g_379) = ((~(l_1116 , ((void*)0 != l_1117))) == (~(safe_rshift_func_uint8_t_u_s((g_22[l_917.f0][g_123][l_917.f0] || 0x22L), 3))))) < (***l_1036)) & (**l_1117)) , g_23[0].f2)) , &g_210)) ^ p_12) && 0x8E85069EL));
                    (**l_1036) = (*g_221);
                }
            }
            for (l_892 = 0; (l_892 < (-5)); --l_892)
            { 
                const union U5 * const **l_1134 = &l_1132;
                union U2 **l_1137 = &l_951;
                struct S1 *l_1140 = &l_999;
                struct S1 **l_1141 = &l_1140;
                const int32_t l_1153 = 0x4123D3DEL;
                int32_t **l_1154 = &g_92;
            }
            for (l_1116.f0 = 0; (l_1116.f0 == (-8)); l_1116.f0--)
            { 
                (**g_220) = &l_1135;
                return l_1157;
            }
            for (l_1013 = 0; (l_1013 <= 0); l_1013 += 1)
            { 
                union U4 *l_1160 = &l_1008;
                int8_t *l_1173 = &g_90[5];
                int i, j;
                (***l_1036) |= (safe_add_func_uint8_t_u_u((l_1160 != &l_1008), (((((g_333[l_1013][l_1013] = (+((safe_div_func_uint32_t_u_u(((~g_333[(l_1013 + 3)][l_1013]) & (safe_mul_func_int8_t_s_s((-2L), l_1112[0]))), (**g_380))) >= ((p_12 < 0x9F4AL) & 0xFD3A169FA125AAD8LL)))) & g_99[0].f2) <= l_1112[0]) , p_12) > p_12)));
                if ((((safe_add_func_int32_t_s_s(0xC238AD48L, ((l_1129[0] , ((g_333[l_1013][l_1013] = p_12) > ((p_12 & ((*l_1173) = (safe_mul_func_uint8_t_u_u(0x94L, (((l_1112[1] & ((safe_mul_func_int16_t_s_s(((***l_1036) &= (0x35A3E5ACL | l_1078)), p_12)) && 0x7A470D64L)) | 7UL) & l_1093))))) && p_12))) < g_82))) == l_1112[2]) || 0x11L))
                { 
                    if (l_1093)
                        goto lbl_927;
                    if (p_12)
                        continue;
                    l_1174 = ((****l_1009) = ((**g_380) = 0xFAEDDF55L));
                }
                else
                { 
                    union U4 *l_1175[5] = {&l_1008,&l_1008,&l_1008,&l_1008,&l_1008};
                    union U4 **l_1176 = &l_1160;
                    int i;
                    if (g_55)
                        goto lbl_1067;
                    (*l_1176) = l_1175[0];
                }
            }
        }
        l_898[2] |= (l_1157 , (!((safe_mul_func_int8_t_s_s(0x73L, ((safe_add_func_uint64_t_u_u(((safe_mul_func_int8_t_s_s((p_12 <= (safe_mul_func_int16_t_s_s(((safe_mul_func_int8_t_s_s((safe_mul_func_int16_t_s_s(g_59.f0, (safe_sub_func_int64_t_s_s((safe_lshift_func_int16_t_s_s((g_27 && (((*g_221) != (l_999 , (***g_378))) ^ 0x9D3A82ACA78D150BLL)), p_12)), (-4L))))), p_12)) , g_61.f0), g_61.f1))), g_90[2])) != (***l_1036)), 0x8F1CBC3BB1F73DADLL)) ^ g_335))) | p_12)));
    }
    else
    { 
        int32_t l_1224 = 0x8FF671C0L;
        int32_t l_1230 = 8L;
        uint32_t l_1251[5][2][4] = {{{0x07F73A7FL,0x07F73A7FL,0x74BC1855L,0x4676D615L},{4294967295UL,4294967291UL,4294967295UL,5UL}},{{4294967295UL,4294967295UL,0x4676D615L,4294967295UL},{0x4676D615L,4294967295UL,4294967295UL,5UL}},{{4294967295UL,4294967291UL,4294967295UL,0x4676D615L},{0x74BC1855L,0x07F73A7FL,0x07F73A7FL,0x74BC1855L}},{{0x74BC1855L,5UL,4294967295UL,4294967293UL},{4294967295UL,0x74BC1855L,4294967295UL,0x0A59BADAL}},{{0x4676D615L,0xE76699A3L,0x4676D615L,0x0A59BADAL},{4294967295UL,0x74BC1855L,4294967295UL,4294967293UL}}};
        int32_t l_1269 = (-5L);
        int32_t l_1270 = 9L;
        int32_t l_1272[1][1][4] = {{{(-10L),(-10L),(-10L),(-10L)}}};
        uint64_t *****l_1276[5][6] = {{(void*)0,&l_1263,&l_1263,&l_1263,(void*)0,(void*)0},{&l_1263,&l_1263,&l_1263,&l_1263,&l_1263,&l_1263},{&l_1263,&l_1263,&l_1263,&l_1263,&l_1263,&l_1263},{(void*)0,(void*)0,&l_1263,&l_1263,&l_1263,(void*)0},{&l_1263,&l_1263,&l_1263,&l_1263,&l_1263,&l_1263}};
        int64_t *l_1277 = &g_209;
        struct S0 *l_1286[4] = {&l_1018,&l_1018,&l_1018,&l_1018};
        int i, j, k;
        for (l_1008.f1 = (-11); (l_1008.f1 <= 27); l_1008.f1 = safe_add_func_uint16_t_u_u(l_1008.f1, 7))
        { 
            int64_t **l_1198 = &g_506[0];
            struct S0 l_1214 = {0x4F259A336CEB0C48LL,0x8C2FD39CL,0x21A28B74L,1UL,0x9B01L,0xCDL,0x23661877D7CA00EELL};
            int64_t l_1267[4];
            int32_t l_1268[1][5] = {{1L,1L,1L,1L,1L}};
            uint16_t l_1273[6] = {0UL,0UL,0UL,0UL,0UL,0UL};
            int i, j;
            for (i = 0; i < 4; i++)
                l_1267[i] = 1L;
            for (g_306 = 0; (g_306 <= 50); g_306++)
            { 
                union U5 l_1208 = {0UL};
                int32_t l_1216 = 1L;
                struct S0 l_1221[2] = {{7L,0xAF944E08L,0x8453621AL,1UL,-7L,0xB6L,0xBA32D2C21416BACFLL},{7L,0xAF944E08L,0x8453621AL,1UL,-7L,0xB6L,0xBA32D2C21416BACFLL}};
                int32_t l_1231 = 0xEC16749EL;
                uint8_t l_1232 = 0x07L;
                uint64_t ****l_1260 = (void*)0;
                uint64_t l_1264 = 0x1E352B1DCC89F3DBLL;
                int32_t **l_1265[7];
                int32_t **l_1266 = &l_906[2][0][0];
                int i;
                for (i = 0; i < 7; i++)
                    l_1265[i] = &l_906[3][0][0];
                for (g_179.f3.f4 = 0; (g_179.f3.f4 <= 2); g_179.f3.f4 += 1)
                { 
                    struct S0 l_1207 = {-9L,0x36B6BADFL,18446744073709551615UL,5UL,1L,0xCFL,0x9BC3499B8222470ALL};
                    union U5 l_1213 = {0xDFEAL};
                    int16_t *l_1215 = &l_1208.f3.f4;
                    int8_t *l_1217 = (void*)0;
                    int8_t *l_1218 = &g_90[3];
                    int i;
                    (**g_221) ^= (l_1198 != ((safe_lshift_func_uint16_t_u_s((safe_add_func_int32_t_s_s((***g_379), ((*l_802) = ((void*)0 != &g_61)))), 15)) , l_1198));
                    (***g_220) ^= (((safe_mul_func_int8_t_s_s(((*l_1218) = (safe_div_func_uint32_t_u_u((l_1207 , (l_1208 , (p_12 || (p_12 > (((*l_1215) = ((safe_div_func_uint64_t_u_u((((((l_1213 , &g_1027[4][0]) != (void*)0) != p_12) , l_1214) , l_1214.f2), p_12)) | (****g_378))) == 0UL))))), l_1216))), 247UL)) == 0x2EL) ^ p_12);
                    if ((*g_92))
                        break;
                }
                if (((l_1008 , p_12) | 0xC56111A591CF7E23LL))
                { 
                    (***g_379) = p_12;
                    (*g_92) |= (0xC9FA57EBAC45F214LL > ((l_1214 , (g_337 > p_12)) ^ (+(!(((l_1221[1] , (safe_mul_func_int8_t_s_s((p_12 == ((((*g_1089) , 0x19D1CECD191DFFBELL) < l_1221[1].f4) || l_1214.f0)), g_99[0].f4))) > l_1224) && l_1224)))));
                    (*g_92) = (-1L);
                }
                else
                { 
                    l_1230 |= (safe_add_func_int8_t_s_s(p_12, (+(safe_mul_func_int8_t_s_s(g_23[0].f2, p_12)))));
                    ++l_1232;
                }
                for (l_1230 = 1; (l_1230 > (-11)); l_1230 = safe_sub_func_int64_t_s_s(l_1230, 1))
                { 
                    int32_t l_1249 = (-5L);
                    int16_t *l_1250[2];
                    int i;
                    for (i = 0; i < 2; i++)
                        l_1250[i] = &l_1214.f4;
                }
                (*l_1266) = func_38((safe_lshift_func_uint16_t_u_u((g_99[0].f5 < (safe_sub_func_uint8_t_u_u((((((safe_lshift_func_uint8_t_u_u(l_1251[2][1][1], (safe_div_func_uint16_t_u_u((l_1260 != (((l_1208.f0 >= l_1221[1].f1) <= (0xB3A54E01L < (safe_mul_func_int8_t_s_s(g_641, p_12)))) , l_1263)), l_1264)))) , l_1214.f3) & g_99[0].f2) ^ l_1251[2][1][1]) && 0xE7L), l_1214.f3))), 12)), (**g_220), l_1214.f6, l_1214.f0, (*g_92));
            }
            if (p_12)
                continue;
            l_1273[5]--;
        }
        (****g_378) |= (((l_1276[3][0] = l_1276[3][3]) == (void*)0) , ((l_1277 == (void*)0) , (((((safe_add_func_int16_t_s_s(((safe_div_func_int8_t_s_s(g_209, g_99[0].f1)) , (safe_mul_func_int8_t_s_s((safe_sub_func_int32_t_s_s((((void*)0 == l_1286[1]) == l_1224), p_12)), l_1224))), (-5L))) || p_12) >= p_12) >= p_12) && 0x71CEA9C5A0C61E77LL)));
        (*g_380) = &l_899;
    }
    return l_1157;
}



static uint8_t  func_13(int32_t  p_14)
{ 
    int32_t l_31 = (-1L);
    int32_t *l_47 = &g_27;
    struct S1 *l_121 = &g_59;
    uint16_t *l_122 = &g_123;
    uint16_t *l_124 = (void*)0;
    uint16_t *l_125 = (void*)0;
    uint16_t *l_126 = &g_22[3][0][1];
    int32_t l_553 = (-1L);
    int32_t l_554 = (-1L);
    int32_t l_556 = 0x48D4D09EL;
    int32_t l_558 = 7L;
    uint64_t **l_580 = &g_219;
    const uint32_t l_629 = 0x3A525529L;
    uint32_t l_642 = 0x76466C12L;
    union U3 l_661[6][6] = {{{-1L},{-1L},{-1L},{-1L},{-1L},{-1L}},{{-1L},{-1L},{-1L},{-1L},{-1L},{-1L}},{{-1L},{-1L},{-1L},{-1L},{-1L},{-1L}},{{-1L},{-1L},{-1L},{-1L},{-1L},{-1L}},{{-1L},{-1L},{-1L},{-1L},{-1L},{-1L}},{{-1L},{-1L},{-1L},{-1L},{-1L},{-1L}}};
    struct S0 *l_663[6];
    int32_t l_685 = 0x002BF2E8L;
    int8_t *l_704[4] = {&g_90[1],&g_90[1],&g_90[1],&g_90[1]};
    uint32_t l_705 = 0x773CB3DFL;
    uint32_t l_706[4] = {0UL,0UL,0UL,0UL};
    int16_t l_707 = (-2L);
    uint8_t *l_708 = &g_179.f3.f5;
    uint8_t *l_709[1];
    uint32_t l_710 = 0UL;
    const union U4 l_717 = {0x1E15469A8F230A7CLL};
    int64_t *l_719[2];
    int8_t l_753 = 2L;
    int32_t l_787 = 0x66153EA0L;
    int32_t l_789[3][1];
    int i, j;
    for (i = 0; i < 6; i++)
        l_663[i] = (void*)0;
    for (i = 0; i < 1; i++)
        l_709[i] = (void*)0;
    for (i = 0; i < 2; i++)
        l_719[i] = &g_99[0].f0;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 1; j++)
            l_789[i][j] = 0xF8BACA17L;
    }
    (**g_380) = ((!(safe_lshift_func_uint8_t_u_u(l_31, g_27))) ^ func_32(func_38(((((*l_126) = ((*l_122) |= (func_44(&p_14, l_47) || (safe_lshift_func_uint8_t_u_s((safe_add_func_int8_t_s_s((g_59.f1 != (((l_121 == l_121) , (void*)0) == l_121)), 0x00L)), p_14))))) ^ g_99[0].f6) && g_23[0].f1), l_47, g_59.f1, (*l_47), g_59.f0), g_23[0].f1, l_47, l_47, l_47));
    for (g_337 = 0; (g_337 == 43); ++g_337)
    { 
        int8_t l_534 = 0xACL;
        struct S1 l_551[2][7] = {{{0L,18446744073709551612UL,6UL},{0x7012L,0xE805DA157FC9270FLL,4294967295UL},{0x983DL,4UL,0x8091E150L},{0x983DL,4UL,0x8091E150L},{0L,18446744073709551612UL,6UL},{0x983DL,4UL,0x8091E150L},{0x983DL,4UL,0x8091E150L}},{{0L,18446744073709551612UL,6UL},{0L,18446744073709551612UL,6UL},{0x7012L,0xE805DA157FC9270FLL,4294967295UL},{0L,18446744073709551612UL,6UL},{0L,18446744073709551612UL,6UL},{0x7012L,0xE805DA157FC9270FLL,4294967295UL},{0L,18446744073709551612UL,6UL}}};
        int32_t l_552 = 0x3512B63CL;
        int32_t l_555 = 0x94BCD381L;
        int32_t l_557[3];
        int8_t *l_594 = &g_90[3];
        const uint64_t **l_614 = (void*)0;
        int32_t l_628 = 0xF1C90956L;
        int32_t ***l_634 = &g_221;
        union U2 *l_676[4];
        int i, j;
        for (i = 0; i < 3; i++)
            l_557[i] = 0xC1D2AD65L;
        for (i = 0; i < 4; i++)
            l_676[i] = &g_248;
    }
    if ((safe_sub_func_uint8_t_u_u(p_14, (safe_mul_func_int16_t_s_s(((safe_lshift_func_int16_t_s_u(((((*l_708) = (safe_mul_func_uint8_t_u_u(l_685, ((g_59.f2 > (l_556 &= ((safe_sub_func_int64_t_s_s((safe_sub_func_int64_t_s_s((safe_rshift_func_uint16_t_u_s(((~(safe_lshift_func_int16_t_s_u((safe_mod_func_uint8_t_u_u((p_14 & ((!g_99[0].f4) < g_248.f0)), (safe_lshift_func_int8_t_s_u((l_706[0] |= (l_705 = (safe_lshift_func_int16_t_s_s(((*l_47) >= p_14), 4)))), p_14)))), 13))) <= l_707), 8)), 0UL)), (*l_47))) != p_14))) & l_710)))) , p_14) != g_99[0].f5), 3)) <= g_99[0].f2), 0UL)))))
    { 
        int32_t ****l_712[2];
        int32_t *****l_711 = &l_712[1];
        int32_t ****l_714 = &g_220;
        int32_t *****l_713 = &l_714;
        int64_t *l_718 = &g_223[0][0].f0;
        int16_t *l_722 = (void*)0;
        int16_t *l_723 = &g_99[0].f4;
        int i;
        for (i = 0; i < 2; i++)
            l_712[i] = (void*)0;
        (*l_713) = ((*l_711) = &g_220);
        (*****l_713) &= ((**g_380) = ((((safe_add_func_uint32_t_u_u((255UL <= (l_717 , (p_14 == p_14))), (l_718 == l_719[0]))) | ((*l_723) = ((safe_div_func_uint16_t_u_u(0xA4FEL, g_99[0].f4)) <= (*g_219)))) | p_14) < p_14));
    }
    else
    { 
        int16_t l_734 = (-1L);
        int8_t *l_741 = &g_90[4];
        const struct S0 l_742 = {0x6FEE81A15FE2EECCLL,4294967295UL,2UL,255UL,-9L,0xF0L,18446744073709551615UL};
        int32_t l_762 = 0x030BEB67L;
        int32_t l_763 = 0x9F2FC3A1L;
        union U2 l_782 = {0x614D25DAL};
        struct S1 * const l_785 = &g_59;
        const uint8_t l_786 = 7UL;
        int32_t l_788 = (-4L);
        int32_t l_790 = 1L;
        int32_t l_791 = (-1L);
        int32_t l_792[4] = {(-8L),(-8L),(-8L),(-8L)};
        int8_t l_793 = 0L;
        uint32_t l_794 = 6UL;
        int i;
        (*g_92) &= (-1L);
        for (g_337 = 0; (g_337 <= 1); g_337 += 1)
        { 
            int32_t l_732[6][4] = {{0xFCBE9771L,0x57A42C4FL,0x57A42C4FL,0xFCBE9771L},{0xFCBE9771L,0x57A42C4FL,0x57A42C4FL,0xFCBE9771L},{0xFCBE9771L,0x57A42C4FL,0x57A42C4FL,0xFCBE9771L},{0xFCBE9771L,0x57A42C4FL,0x57A42C4FL,0xFCBE9771L},{0xFCBE9771L,0x57A42C4FL,0x57A42C4FL,0xFCBE9771L},{0xFCBE9771L,0x57A42C4FL,0x57A42C4FL,0xFCBE9771L}};
            int32_t *l_743 = (void*)0;
            int i, j;
            for (g_27 = 0; (g_27 <= 1); g_27 += 1)
            { 
                int32_t l_735 = 0x413B443DL;
                uint64_t *l_736 = (void*)0;
                uint64_t *l_737 = &g_738;
                int i, j;
                l_553 = (safe_mul_func_uint8_t_u_u(((safe_div_func_int32_t_s_s(g_333[(g_27 + 1)][g_27], ((*g_92) &= ((safe_mul_func_uint8_t_u_u(0UL, (((**l_580)++) <= l_732[2][3]))) ^ ((!0xE5B3A744L) != ((l_735 = l_734) & ((*l_737) = (g_306 = (**g_653))))))))) != p_14), p_14));
                return l_735;
            }
            if (p_14)
                break;
            for (g_179.f2 = 0; (g_179.f2 <= 1); g_179.f2 += 1)
            { 
                uint32_t l_740 = 0x169CF9A9L;
                int32_t l_764 = (-1L);
                int32_t l_765 = 0L;
                int32_t l_766 = 0xB9C43A3CL;
                int32_t l_767 = 0x85D5BF0AL;
            }
        }
    }
    return (*l_47);
}



static uint64_t  func_15(int16_t  p_16, union U4  p_17, int32_t  p_18, uint8_t  p_19)
{ 
    int64_t l_25 = 5L;
    int32_t *l_26 = &g_27;
    (*l_26) ^= l_25;
    (*l_26) = ((void*)0 == l_26);
    return g_22[0][0][1];
}



static int8_t  func_32(int32_t * const  p_33, int32_t  p_34, int32_t * p_35, int32_t * p_36, int32_t * p_37)
{ 
    uint8_t *l_149 = &g_23[0].f3.f5;
    int32_t l_166 = 0x55172411L;
    int32_t l_167 = 6L;
    int32_t *l_168 = &g_55;
    int32_t *l_200 = &l_167;
    int32_t *l_201 = (void*)0;
    int32_t *l_202 = (void*)0;
    int32_t *l_203 = &l_166;
    int32_t *l_204 = &g_50;
    int32_t *l_205 = &l_167;
    int32_t *l_206 = (void*)0;
    int32_t *l_207[4][6][2] = {{{(void*)0,(void*)0},{(void*)0,&g_55},{&g_50,(void*)0},{&g_55,(void*)0},{&g_50,&g_55},{(void*)0,(void*)0}},{{(void*)0,&g_55},{&g_50,(void*)0},{&g_55,(void*)0},{&g_50,&g_55},{(void*)0,(void*)0},{(void*)0,&g_55}},{{&g_50,(void*)0},{&g_55,(void*)0},{&g_50,&g_55},{(void*)0,(void*)0},{(void*)0,&g_55},{&g_50,(void*)0}},{{&g_55,(void*)0},{&g_50,&g_55},{(void*)0,(void*)0},{(void*)0,&g_55},{&g_50,(void*)0},{&g_55,(void*)0}}};
    int32_t l_208[4][2][2] = {{{0xC58C7FB5L,(-5L)},{(-5L),0xC58C7FB5L}},{{(-5L),(-5L)},{0xC58C7FB5L,(-5L)}},{{(-5L),0xC58C7FB5L},{(-5L),(-5L)}},{{0xC58C7FB5L,(-5L)},{(-5L),0xC58C7FB5L}}};
    uint32_t *l_214[4];
    uint64_t *l_217 = &g_82;
    uint64_t **l_218[6][4][6] = {{{&l_217,&l_217,&l_217,&l_217,&l_217,&l_217},{&l_217,&l_217,(void*)0,&l_217,&l_217,&l_217},{&l_217,(void*)0,&l_217,&l_217,&l_217,(void*)0},{&l_217,&l_217,&l_217,(void*)0,&l_217,&l_217}},{{&l_217,(void*)0,(void*)0,&l_217,&l_217,&l_217},{&l_217,&l_217,&l_217,&l_217,(void*)0,&l_217},{&l_217,&l_217,&l_217,&l_217,&l_217,&l_217},{&l_217,&l_217,&l_217,&l_217,&l_217,&l_217}},{{&l_217,&l_217,&l_217,&l_217,&l_217,&l_217},{&l_217,&l_217,&l_217,&l_217,&l_217,&l_217},{&l_217,&l_217,&l_217,&l_217,&l_217,&l_217},{&l_217,&l_217,&l_217,&l_217,&l_217,&l_217}},{{&l_217,(void*)0,&l_217,&l_217,&l_217,(void*)0},{&l_217,&l_217,&l_217,&l_217,&l_217,&l_217},{&l_217,&l_217,(void*)0,&l_217,&l_217,&l_217},{&l_217,&l_217,&l_217,(void*)0,&l_217,&l_217}},{{&l_217,&l_217,&l_217,(void*)0,&l_217,&l_217},{&l_217,&l_217,(void*)0,&l_217,&l_217,&l_217},{&l_217,&l_217,&l_217,&l_217,&l_217,&l_217},{&l_217,&l_217,&l_217,&l_217,&l_217,&l_217}},{{&l_217,&l_217,&l_217,(void*)0,&l_217,&l_217},{&l_217,&l_217,&l_217,&l_217,(void*)0,(void*)0},{&l_217,&l_217,&l_217,&l_217,&l_217,&l_217},{(void*)0,&l_217,&l_217,&l_217,(void*)0,&l_217}}};
    struct S1 l_291 = {-3L,0xDA1B3B349EF4A7C9LL,0x74A6ED00L};
    int32_t * const *l_316 = &l_168;
    int32_t * const **l_315[3];
    union U4 *l_319 = &g_23[0];
    union U2 l_463 = {0xCCC50D73L};
    union U4 ***l_477 = (void*)0;
    int32_t * const ****l_513 = (void*)0;
    uint16_t *l_516 = &g_123;
    int64_t l_525 = 1L;
    int i, j, k;
    for (i = 0; i < 4; i++)
        l_214[i] = &g_59.f2;
    for (i = 0; i < 3; i++)
        l_315[i] = &l_316;
    (*l_168) &= ((safe_mod_func_int8_t_s_s(((((*l_149) = 255UL) ^ (safe_mod_func_uint64_t_u_u((safe_sub_func_uint32_t_u_u(((void*)0 == l_149), (safe_mod_func_int16_t_s_s((safe_add_func_uint32_t_u_u(g_90[2], (((safe_add_func_int32_t_s_s((safe_rshift_func_uint8_t_u_s((safe_sub_func_int16_t_s_s(((l_166 &= (safe_mul_func_int16_t_s_s((((void*)0 == &g_67) || 0x5AC07EA9L), g_61.f0))) < l_167), g_99[0].f5)), g_82)), (*g_92))) | 65527UL) , g_143))), 0x6CE5L)))), 0x527C6EF0018B1378LL))) || g_90[1]), g_90[1])) , (*p_36));
    for (l_167 = (-9); (l_167 != 4); l_167++)
    { 
        uint8_t *l_181 = &g_67;
        union U5 l_195 = {0x65C2L};
        uint32_t l_196 = 4294967295UL;
        const uint8_t *l_197 = &g_198;
        int8_t *l_199 = &g_90[1];
    }
    ++g_210;
    return g_99[0].f3;
}



static int32_t * const  func_38(int32_t  p_39, int32_t * p_40, const uint8_t  p_41, int32_t  p_42, int32_t  p_43)
{ 
    const int16_t l_133 = 0x90E5L;
    int32_t l_138[1];
    int32_t *l_139 = (void*)0;
    int32_t *l_140 = &l_138[0];
    int32_t *l_141 = &g_55;
    int32_t *l_142[7] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
    int i;
    for (i = 0; i < 1; i++)
        l_138[i] = 0x8E2A7350L;
    (*g_92) ^= 0x0EC93635L;
    for (p_39 = 1; (p_39 != 11); ++p_39)
    { 
        int32_t * const l_137 = (void*)0;
        (*g_92) |= (65535UL | (safe_div_func_uint64_t_u_u((((0L <= ((l_133 != (((0x15C8L && (&p_43 != (void*)0)) || (safe_div_func_int8_t_s_s((~0L), p_42))) == p_42)) , 0x1BC7L)) <= p_43) >= 4294967295UL), g_59.f1)));
        return l_137;
    }
    (*g_92) &= 0x07333B9DL;
    --g_144;
    return &g_27;
}



static const uint64_t  func_44(int32_t * p_45, int32_t * p_46)
{ 
    int16_t l_48[6] = {1L,1L,1L,1L,1L,1L};
    int32_t *l_49[1][3][5] = {{{&g_27,&g_50,&g_50,&g_50,&g_50},{&g_27,&g_50,&g_50,&g_50,&g_50},{&g_27,&g_50,&g_50,&g_50,&g_50}}};
    union U5 l_64 = {0x5371L};
    int32_t ***l_65 = (void*)0;
    uint64_t l_108 = 18446744073709551615UL;
    union U4 *l_116[7][4] = {{&g_23[0],&g_23[0],&g_23[1],&g_23[1]},{&g_23[1],&g_23[1],&g_23[0],&g_23[0]},{&g_23[0],&g_23[0],&g_23[0],&g_23[0]},{&g_23[1],(void*)0,&g_23[1],&g_23[0]},{&g_23[0],(void*)0,(void*)0,&g_23[0]},{(void*)0,&g_23[0],&g_23[1],&g_23[0]},{(void*)0,&g_23[1],(void*)0,&g_23[1]}};
    union U4 **l_115 = &l_116[6][2];
    int i, j, k;
lbl_74:
    g_50 |= ((*p_45) = l_48[5]);
    for (g_50 = 0; (g_50 < (-8)); g_50--)
    { 
        int32_t **l_54 = &l_49[0][0][0];
        int32_t ***l_53 = &l_54;
        int8_t *l_66 = (void*)0;
        union U3 l_83 = {0x52485C7020513F0FLL};
        (*l_53) = &l_49[0][1][4];
        for (g_55 = 0; (g_55 < 27); g_55 = safe_add_func_uint16_t_u_u(g_55, 5))
        { 
            struct S1 * const l_58[6] = {&g_59,&g_59,&g_59,&g_59,&g_59,&g_59};
            int i;
            g_60[1][2] = l_58[4];
        }
        if (((g_67 |= (((((safe_lshift_func_uint8_t_u_u(g_61.f0, 6)) , ((l_64 , (((void*)0 == &l_49[0][1][4]) >= ((void*)0 == l_65))) & ((void*)0 != &p_46))) < (*p_46)) , (-10L)) | 0xC8807C70L)) == g_61.f1))
        { 
            uint32_t l_71 = 0UL;
            (*p_45) = ((&l_54 == (void*)0) == (safe_mod_func_uint32_t_u_u(0x0F9CC38DL, (~l_71))));
        }
        else
        { 
            uint32_t l_79 = 0x0BD880D9L;
            for (l_64.f3.f2 = 0; (l_64.f3.f2 == 43); l_64.f3.f2 = safe_add_func_int32_t_s_s(l_64.f3.f2, 9))
            { 
                if (g_67)
                    goto lbl_74;
                for (g_61.f2 = 0; (g_61.f2 == 10); ++g_61.f2)
                { 
                    if (g_61.f2)
                        goto lbl_74;
                }
            }
            if (g_55)
                break;
            for (l_64.f2 = 0; (l_64.f2 <= 36); ++l_64.f2)
            { 
                uint64_t *l_81 = &g_82;
                int8_t *l_89 = &g_90[1];
                int32_t l_91[1][6][1] = {{{0xD1EA5100L},{5L},{5L},{0xD1EA5100L},{5L},{5L}}};
                int i, j, k;
                (*p_45) = ((l_79 <= ((((safe_unary_minus_func_uint64_t_u(((*l_81) = g_61.f0))) | g_61.f1) , ((*l_89) = (l_83 , (~(g_61.f1 , ((((safe_lshift_func_uint8_t_u_u(l_79, (safe_rshift_func_int8_t_s_s(0xBBL, g_55)))) != 1L) ^ g_22[3][0][1]) || g_59.f0)))))) != g_61.f1)) <= l_91[0][1][0]);
            }
            (**l_53) = &g_50;
        }
    }
    g_92 = &g_50;
    for (l_64.f2 = (-20); (l_64.f2 == 34); l_64.f2 = safe_add_func_uint16_t_u_u(l_64.f2, 3))
    { 
        const union U4 *l_101[3][5] = {{&g_23[0],&g_23[0],&g_23[0],&g_23[0],&g_23[0]},{(void*)0,&g_23[1],(void*)0,&g_23[1],(void*)0},{&g_23[0],&g_23[0],&g_23[0],&g_23[0],&g_23[0]}};
        const union U4 **l_100 = &l_101[1][2];
        int32_t l_104 = 0x3564EE88L;
        int32_t l_106 = (-3L);
        int32_t l_107[4][7] = {{0xABD97907L,0x1A0B9A4AL,0xABD97907L,0xABD97907L,0x1A0B9A4AL,0xABD97907L,0xABD97907L},{9L,9L,0x27E68FBAL,9L,9L,0x27E68FBAL,9L},{0x1A0B9A4AL,0xABD97907L,0xABD97907L,0x1A0B9A4AL,0xABD97907L,0xABD97907L,0x1A0B9A4AL},{0x5DA44900L,9L,0x5DA44900L,0x5DA44900L,9L,0x5DA44900L,0x5DA44900L}};
        int i, j;
        (*l_100) = (((safe_rshift_func_int8_t_s_u((safe_lshift_func_uint16_t_u_s(1UL, 0)), 0)) , g_99[0]) , (void*)0);
        for (g_59.f2 = 5; (g_59.f2 == 34); g_59.f2 = safe_add_func_int8_t_s_s(g_59.f2, 6))
        { 
            int8_t *l_105 = &g_90[3];
            (*g_92) &= (l_104 <= ((*l_105) = g_61.f0));
        }
        ++l_108;
    }
    (*g_92) = ((*p_45) ^= (safe_sub_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_u(9UL, 13)), ((g_55 , (void*)0) == l_115))));
    return g_23[0].f0;
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 3; k++)
            {
                transparent_crc(g_22[i][j][k], "g_22[i][j][k]", print_hash_value);

            }
        }
    }
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_23[i].f0, "g_23[i].f0", print_hash_value);
        transparent_crc(g_23[i].f1, "g_23[i].f1", print_hash_value);
        transparent_crc(g_23[i].f2, "g_23[i].f2", print_hash_value);

    }
    transparent_crc(g_27, "g_27", print_hash_value);
    transparent_crc(g_50, "g_50", print_hash_value);
    transparent_crc(g_55, "g_55", print_hash_value);
    transparent_crc(g_59.f0, "g_59.f0", print_hash_value);
    transparent_crc(g_59.f1, "g_59.f1", print_hash_value);
    transparent_crc(g_59.f2, "g_59.f2", print_hash_value);
    transparent_crc(g_61.f0, "g_61.f0", print_hash_value);
    transparent_crc(g_61.f1, "g_61.f1", print_hash_value);
    transparent_crc(g_61.f2, "g_61.f2", print_hash_value);
    transparent_crc(g_67, "g_67", print_hash_value);
    transparent_crc(g_82, "g_82", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(g_90[i], "g_90[i]", print_hash_value);

    }
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_99[i].f0, "g_99[i].f0", print_hash_value);
        transparent_crc(g_99[i].f1, "g_99[i].f1", print_hash_value);
        transparent_crc(g_99[i].f2, "g_99[i].f2", print_hash_value);
        transparent_crc(g_99[i].f3, "g_99[i].f3", print_hash_value);
        transparent_crc(g_99[i].f4, "g_99[i].f4", print_hash_value);
        transparent_crc(g_99[i].f5, "g_99[i].f5", print_hash_value);
        transparent_crc(g_99[i].f6, "g_99[i].f6", print_hash_value);

    }
    transparent_crc(g_123, "g_123", print_hash_value);
    transparent_crc(g_143, "g_143", print_hash_value);
    transparent_crc(g_144, "g_144", print_hash_value);
    transparent_crc(g_179.f0, "g_179.f0", print_hash_value);
    transparent_crc(g_198, "g_198", print_hash_value);
    transparent_crc(g_209, "g_209", print_hash_value);
    transparent_crc(g_210, "g_210", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 7; j++)
        {
            transparent_crc(g_223[i][j].f0, "g_223[i][j].f0", print_hash_value);

        }
    }
    transparent_crc(g_248.f0, "g_248.f0", print_hash_value);
    transparent_crc(g_306, "g_306", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(g_333[i][j], "g_333[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_334, "g_334", print_hash_value);
    transparent_crc(g_335, "g_335", print_hash_value);
    transparent_crc(g_337, "g_337", print_hash_value);
    transparent_crc(g_526, "g_526", print_hash_value);
    transparent_crc(g_527, "g_527", print_hash_value);
    transparent_crc(g_641, "g_641", print_hash_value);
    transparent_crc(g_738, "g_738", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 1; j++)
        {
            transparent_crc(g_1027[i][j], "g_1027[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_1110, "g_1110", print_hash_value);
    transparent_crc(g_1271, "g_1271", print_hash_value);
    transparent_crc(g_1451.f0, "g_1451.f0", print_hash_value);
    transparent_crc(g_1451.f1, "g_1451.f1", print_hash_value);
    transparent_crc(g_1451.f2, "g_1451.f2", print_hash_value);
    transparent_crc(g_1666.f0, "g_1666.f0", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_1711[i], "g_1711[i]", print_hash_value);

    }
    transparent_crc(g_1759, "g_1759", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 5; j++)
        {
            transparent_crc(g_1774[i][j].f0, "g_1774[i][j].f0", print_hash_value);
            transparent_crc(g_1774[i][j].f1, "g_1774[i][j].f1", print_hash_value);
            transparent_crc(g_1774[i][j].f2, "g_1774[i][j].f2", print_hash_value);

        }
    }
    transparent_crc(g_1954, "g_1954", print_hash_value);
    transparent_crc(g_1973.f0, "g_1973.f0", print_hash_value);
    transparent_crc(g_1973.f1, "g_1973.f1", print_hash_value);
    transparent_crc(g_1973.f2, "g_1973.f2", print_hash_value);
    transparent_crc(g_1973.f3, "g_1973.f3", print_hash_value);
    transparent_crc(g_1973.f4, "g_1973.f4", print_hash_value);
    transparent_crc(g_1973.f5, "g_1973.f5", print_hash_value);
    transparent_crc(g_1973.f6, "g_1973.f6", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
