// SPDX-License-Identifier: MIT
// cctest_csmith_362baea6.c --- cctest case csmith_362baea6 (csmith seed 908832422)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0xf0ead45c */

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

// Options:   -s 908832422 -o /tmp/csmith_gen_txbbig9f/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


#pragma pack(push)
#pragma pack(1)
struct S0 {
   const uint16_t  f0;
   uint8_t  f1;
   int32_t  f2;
   uint64_t  f3;
   uint16_t  f4;
   uint32_t  f5;
};
#pragma pack(pop)

union U1 {
   const uint16_t  f0;
};

union U2 {
   int32_t  f0;
};


static int8_t g_9 = 0xA5L;
static int32_t g_36 = 0x41BD8E70L;
static uint16_t g_45 = 65535UL;
static int32_t g_57 = (-5L);
static uint32_t g_58 = 4294967295UL;
static uint16_t g_65 = 1UL;
static uint32_t g_72 = 9UL;
static union U2 g_73 = {0x054819E5L};
static uint64_t g_79 = 0xE3606EC16123697ELL;
static int8_t g_80[3] = {0xE8L,0xE8L,0xE8L};
static int16_t g_81 = 0L;
static uint8_t g_86[1][1] = {{0UL}};
static int8_t g_99 = 0xABL;
static struct S0 g_112[5][5][4] = {{{{65533UL,0x5AL,-8L,0UL,65534UL,18446744073709551615UL},{65535UL,0x16L,9L,0x5BF61D406CBD5F44LL,65534UL,0UL},{1UL,0xD0L,0L,18446744073709551615UL,0x10BFL,8UL},{5UL,1UL,-3L,18446744073709551611UL,0xC1A7L,8UL}},{{5UL,8UL,-3L,18446744073709551614UL,0xA544L,5UL},{6UL,249UL,5L,4UL,0x0AEBL,18446744073709551615UL},{65535UL,0x5CL,-8L,0x0AEA978AFB31ACB9LL,3UL,0x8926895FL},{0x2770L,249UL,0x2A9C28C3L,0x18605C96C501646CLL,65531UL,1UL}},{{65535UL,0x5CL,-8L,0x0AEA978AFB31ACB9LL,3UL,0x8926895FL},{0x2770L,249UL,0x2A9C28C3L,0x18605C96C501646CLL,65531UL,1UL},{0x2770L,249UL,0x2A9C28C3L,0x18605C96C501646CLL,65531UL,1UL},{65535UL,0x5CL,-8L,0x0AEA978AFB31ACB9LL,3UL,0x8926895FL}},{{65535UL,255UL,1L,0x67A4CD60AC8F595BLL,0x468DL,18446744073709551607UL},{0UL,0xC8L,0x6B18C049L,1UL,1UL,5UL},{5UL,1UL,-3L,18446744073709551611UL,0xC1A7L,8UL},{1UL,0xD0L,0L,18446744073709551615UL,0x10BFL,8UL}},{{0x6C4CL,0xD9L,-8L,0x6C56F7F9ADAB8F03LL,65532UL,18446744073709551615UL},{0xD356L,0x4DL,0x20E91C3CL,18446744073709551609UL,0x3784L,0x6000C4D8L},{0x203BL,0UL,1L,0UL,0xEA43L,0xD78657CAL},{65535UL,0xB9L,0xA2DD6720L,18446744073709551615UL,65527UL,0xFB24A310L}}},{{{3UL,255UL,1L,0xB4FF7E3BC08C7137LL,0x7E5DL,4UL},{65535UL,0x16L,9L,0x5BF61D406CBD5F44LL,65534UL,0UL},{65535UL,0x52L,0x8ED343B4L,2UL,1UL,0xCF1BE432L},{65535UL,0xB9L,0xA2DD6720L,18446744073709551615UL,65527UL,0xFB24A310L}},{{0x8AC8L,0xF7L,-1L,0xF7460F080F894422LL,7UL,0xDBEEBB44L},{0xD356L,0x4DL,0x20E91C3CL,18446744073709551609UL,0x3784L,0x6000C4D8L},{65535UL,0x5CL,-8L,0x0AEA978AFB31ACB9LL,3UL,0x8926895FL},{1UL,0xD0L,0L,18446744073709551615UL,0x10BFL,8UL}},{{0xC141L,255UL,1L,0xC69A9DDE94EDE484LL,0x6026L,0x9DD53066L},{0UL,0xC8L,0x6B18C049L,1UL,1UL,5UL},{0x6C4CL,0xD9L,-8L,0x6C56F7F9ADAB8F03LL,65532UL,18446744073709551615UL},{65535UL,0x5CL,-8L,0x0AEA978AFB31ACB9LL,3UL,0x8926895FL}},{{65535UL,0x16L,9L,0x5BF61D406CBD5F44LL,65534UL,0UL},{0x2770L,249UL,0x2A9C28C3L,0x18605C96C501646CLL,65531UL,1UL},{1UL,0x69L,-5L,0x880BEB2AB5F7C52ELL,0x1AC3L,0x2985B248L},{0x2770L,249UL,0x2A9C28C3L,0x18605C96C501646CLL,65531UL,1UL}},{{0x6C4CL,0xD9L,-8L,0x6C56F7F9ADAB8F03LL,65532UL,18446744073709551615UL},{6UL,249UL,5L,4UL,0x0AEBL,18446744073709551615UL},{0x37E9L,0xE4L,1L,3UL,1UL,0x88A73A98L},{5UL,1UL,-3L,18446744073709551611UL,0xC1A7L,8UL}}},{{{0x3971L,0xD8L,0xD7775BE2L,0UL,0x8CD1L,2UL},{65535UL,0x16L,9L,0x5BF61D406CBD5F44LL,65534UL,0UL},{5UL,8UL,-3L,18446744073709551614UL,0xA544L,5UL},{0x61BAL,0x8CL,0L,1UL,0UL,0x4BA4E592L}},{{0x37E9L,0xE4L,1L,3UL,1UL,0x88A73A98L},{3UL,255UL,1L,0xB4FF7E3BC08C7137LL,0x7E5DL,4UL},{65535UL,0xB9L,0xA2DD6720L,18446744073709551615UL,65527UL,0xFB24A310L},{0xC141L,255UL,1L,0xC69A9DDE94EDE484LL,0x6026L,0x9DD53066L}},{{0x37E9L,0xE4L,1L,3UL,1UL,0x88A73A98L},{0x8AC8L,0xF7L,-1L,0xF7460F080F894422LL,7UL,0xDBEEBB44L},{5UL,8UL,-3L,18446744073709551614UL,0xA544L,5UL},{65535UL,0xB9L,0xA2DD6720L,18446744073709551615UL,65527UL,0xFB24A310L}},{{0x2770L,249UL,0x2A9C28C3L,0x18605C96C501646CLL,65531UL,1UL},{0xC141L,255UL,1L,0xC69A9DDE94EDE484LL,0x6026L,0x9DD53066L},{0xD356L,0x4DL,0x20E91C3CL,18446744073709551609UL,0x3784L,0x6000C4D8L},{0x4026L,0x52L,0x78314121L,0x5AF14B1F07F5898ALL,65535UL,1UL}},{{0x4026L,0x52L,0x78314121L,0x5AF14B1F07F5898ALL,65535UL,1UL},{65535UL,0x16L,9L,0x5BF61D406CBD5F44LL,65534UL,0UL},{9UL,0UL,1L,1UL,1UL,0x35D89A0FL},{9UL,0UL,1L,1UL,1UL,0x35D89A0FL}}},{{{0x6C4CL,0xD9L,-8L,0x6C56F7F9ADAB8F03LL,65532UL,18446744073709551615UL},{0x6C4CL,0xD9L,-8L,0x6C56F7F9ADAB8F03LL,65532UL,18446744073709551615UL},{0x4026L,0x52L,0x78314121L,0x5AF14B1F07F5898ALL,65535UL,1UL},{0xD356L,0x4DL,0x20E91C3CL,18446744073709551609UL,0x3784L,0x6000C4D8L}},{{0x203BL,0UL,1L,0UL,0xEA43L,0xD78657CAL},{0x3971L,0xD8L,0xD7775BE2L,0UL,0x8CD1L,2UL},{65535UL,0xB9L,0xA2DD6720L,18446744073709551615UL,65527UL,0xFB24A310L},{5UL,8UL,-3L,18446744073709551614UL,0xA544L,5UL}},{{1UL,0x69L,-5L,0x880BEB2AB5F7C52ELL,0x1AC3L,0x2985B248L},{0x4026L,0x52L,0x78314121L,0x5AF14B1F07F5898ALL,65535UL,1UL},{0xC141L,255UL,1L,0xC69A9DDE94EDE484LL,0x6026L,0x9DD53066L},{65535UL,0xB9L,0xA2DD6720L,18446744073709551615UL,65527UL,0xFB24A310L}},{{1UL,0xD0L,0L,18446744073709551615UL,0x10BFL,8UL},{0x4026L,0x52L,0x78314121L,0x5AF14B1F07F5898ALL,65535UL,1UL},{0x61BAL,0x8CL,0L,1UL,0UL,0x4BA4E592L},{5UL,8UL,-3L,18446744073709551614UL,0xA544L,5UL}},{{0x4026L,0x52L,0x78314121L,0x5AF14B1F07F5898ALL,65535UL,1UL},{0x3971L,0xD8L,0xD7775BE2L,0UL,0x8CD1L,2UL},{65535UL,6UL,0x56FDF27DL,1UL,2UL,0UL},{0xD356L,0x4DL,0x20E91C3CL,18446744073709551609UL,0x3784L,0x6000C4D8L}}},{{{0UL,0xC8L,0x6B18C049L,1UL,1UL,5UL},{0x6C4CL,0xD9L,-8L,0x6C56F7F9ADAB8F03LL,65532UL,18446744073709551615UL},{65535UL,0x5CL,-8L,0x0AEA978AFB31ACB9LL,3UL,0x8926895FL},{9UL,0UL,1L,1UL,1UL,0x35D89A0FL}},{{65535UL,0xB9L,0xA2DD6720L,18446744073709551615UL,65527UL,0xFB24A310L},{65535UL,0x16L,9L,0x5BF61D406CBD5F44LL,65534UL,0UL},{65535UL,0xB9L,0xA2DD6720L,18446744073709551615UL,65527UL,0xFB24A310L},{0x4026L,0x52L,0x78314121L,0x5AF14B1F07F5898ALL,65535UL,1UL}},{{5UL,1UL,-3L,18446744073709551611UL,0xC1A7L,8UL},{0xC141L,255UL,1L,0xC69A9DDE94EDE484LL,0x6026L,0x9DD53066L},{0x8AC8L,0xF7L,-1L,0xF7460F080F894422LL,7UL,0xDBEEBB44L},{65535UL,0xB9L,0xA2DD6720L,18446744073709551615UL,65527UL,0xFB24A310L}},{{65535UL,0x52L,0x8ED343B4L,2UL,1UL,0xCF1BE432L},{0x8AC8L,0xF7L,-1L,0xF7460F080F894422LL,7UL,0xDBEEBB44L},{6UL,249UL,5L,4UL,0x0AEBL,18446744073709551615UL},{0xC141L,255UL,1L,0xC69A9DDE94EDE484LL,0x6026L,0x9DD53066L}},{{0x4026L,0x52L,0x78314121L,0x5AF14B1F07F5898ALL,65535UL,1UL},{3UL,255UL,1L,0xB4FF7E3BC08C7137LL,0x7E5DL,4UL},{6UL,249UL,5L,4UL,0x0AEBL,18446744073709551615UL},{0x61BAL,0x8CL,0L,1UL,0UL,0x4BA4E592L}}}};
static union U1 g_140 = {0UL};
static uint32_t g_148 = 0x005B26D7L;
static uint32_t g_172 = 0x52623D08L;
static int32_t g_187[3][2][3] = {{{0xC3F19709L,0xA5988CC2L,0xA5988CC2L},{(-1L),0xA6210C82L,0xA6210C82L}},{{0xC3F19709L,0xA5988CC2L,0xA5988CC2L},{(-1L),0xA6210C82L,0xA6210C82L}},{{0xC3F19709L,0xA5988CC2L,0xA5988CC2L},{(-1L),0xA6210C82L,0xA6210C82L}}};
static int8_t g_188[3][4][2] = {{{0xBCL,0xBCL},{0xBCL,0xBCL},{0xBCL,0xBCL},{0xBCL,0xBCL}},{{0xBCL,0xBCL},{0xBCL,0xBCL},{0xBCL,0xBCL},{0xBCL,0xBCL}},{{0xBCL,0xBCL},{0xBCL,0xBCL},{0xBCL,0xBCL},{0xBCL,0xBCL}}};
static int64_t g_193 = 0x134282E3601172B5LL;
static int32_t g_194 = 0x5068F4A9L;
static int32_t g_195 = 1L;
static int64_t g_203 = 0L;
static uint32_t g_204 = 18446744073709551615UL;
static int8_t g_212 = 0L;
static uint8_t g_233 = 255UL;
static int8_t g_292 = (-5L);
static uint64_t g_293 = 0x452B8B74285D37B3LL;
static int8_t g_340 = (-1L);
static uint32_t g_341 = 1UL;
static uint32_t g_366[1][4] = {{18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL}};



static uint16_t  func_1(void);
static int32_t  func_2(union U2  p_3, uint32_t  p_4, union U2  p_5, int8_t  p_6, const uint8_t  p_7);
static int8_t  func_14(int8_t  p_15, uint32_t  p_16, int8_t  p_17);
static int8_t  func_18(struct S0  p_19);




static uint16_t  func_1(void)
{ 
    union U2 l_8[2][1][5] = {{{{0x162C9CC1L},{0x162C9CC1L},{0x162C9CC1L},{0x162C9CC1L},{0x162C9CC1L}}},{{{0x289A6957L},{0x38C08872L},{0x289A6957L},{0x38C08872L},{0x289A6957L}}}};
    uint16_t l_12 = 0x045DL;
    int32_t l_13[1][2];
    uint16_t l_335 = 5UL;
    uint8_t l_336 = 0x6DL;
    union U1 l_348 = {65535UL};
    int32_t l_375 = 0x4641B940L;
    int i, j, k;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 2; j++)
            l_13[i][j] = 0x74A6E8F5L;
    }
    if (func_2(l_8[0][0][3], g_9, (((safe_lshift_func_uint8_t_u_u((0L | (((((4UL >= 0x3F0DL) <= 1L) > g_9) >= 1L) , l_12)), l_13[0][1])) | g_9) , l_8[0][0][0]), l_13[0][1], l_12))
    { 
        int16_t l_309 = 0x8C66L;
        int32_t l_332 = (-1L);
        uint16_t l_337 = 65535UL;
        g_112[0][1][3].f2 = l_13[0][1];
        for (g_193 = 0; (g_193 < 15); g_193 = safe_add_func_uint64_t_u_u(g_193, 1))
        { 
            uint64_t l_306[5];
            int i;
            for (i = 0; i < 5; i++)
                l_306[i] = 0x079F7F76048124E7LL;
            l_306[3] = (+(safe_mod_func_int32_t_s_s(g_36, 0x4281389AL)));
        }
        if ((g_112[0][1][3].f2 = (safe_mul_func_uint16_t_u_u(l_309, (safe_mod_func_uint32_t_u_u((l_309 && ((((g_58 && (safe_mod_func_uint32_t_u_u(g_194, 3UL))) == 0xFC371AC07B6B27BBLL) >= 0xD99B6EB5L) || 0x0906L)), 4294967293UL))))))
        { 
            uint8_t l_316 = 0xE7L;
            for (g_195 = 13; (g_195 <= (-30)); g_195 = safe_sub_func_uint16_t_u_u(g_195, 7))
            { 
                if (g_212)
                    break;
            }
            l_316 ^= 8L;
            for (g_73.f0 = 0; (g_73.f0 >= 7); g_73.f0++)
            { 
                g_112[0][1][3].f2 = (g_36 | ((safe_mul_func_uint8_t_u_u(g_80[1], (safe_sub_func_int64_t_s_s(((((1L & ((safe_div_func_int8_t_s_s((g_193 >= g_112[0][1][3].f0), g_188[2][3][0])) && g_86[0][0])) , g_80[2]) ^ g_140.f0) < g_79), 18446744073709551612UL)))) , l_316));
            }
        }
        else
        { 
            uint8_t l_362 = 0xC5L;
            int32_t l_364 = 0x854735E3L;
            uint32_t l_365[1][3][4] = {{{0UL,3UL,0xA989546EL,0xA989546EL},{0UL,0UL,0UL,0xA989546EL},{1UL,3UL,1UL,0UL}}};
            int i, j, k;
            l_13[0][1] = ((safe_div_func_uint64_t_u_u(((safe_add_func_uint8_t_u_u((l_332 ^= (safe_mod_func_int16_t_s_s((safe_unary_minus_func_uint16_t_u(l_13[0][1])), l_12))), ((g_292 ^= (safe_lshift_func_uint16_t_u_u(((((g_80[2] = (g_73.f0 && ((((0x9FL == g_9) <= l_335) == l_336) > g_233))) | l_337) & 0UL) >= g_65), g_148))) != l_309))) >= l_309), 0xE87DCAFD54160B10LL)) , l_335);
            for (g_293 = 10; (g_293 > 32); g_293++)
            { 
                --g_341;
                return l_332;
            }
            for (g_341 = 1; (g_341 >= 52); g_341 = safe_add_func_uint16_t_u_u(g_341, 5))
            { 
                uint32_t l_361 = 0UL;
                uint32_t l_363[3][5][4] = {{{4UL,0x28E23497L,0x28E23497L,4UL},{0x0B68F68CL,0x28E23497L,4294967295UL,4UL},{4UL,0x28E23497L,0x28E23497L,4UL},{0x0B68F68CL,0x28E23497L,4294967295UL,4UL},{4UL,0x28E23497L,0x28E23497L,4UL}},{{0x0B68F68CL,0x28E23497L,4294967295UL,4UL},{4UL,0x28E23497L,0x28E23497L,4UL},{0x0B68F68CL,0x28E23497L,4294967295UL,4UL},{4UL,0x28E23497L,0x28E23497L,4UL},{0x0B68F68CL,0x28E23497L,4294967295UL,4UL}},{{4UL,0x28E23497L,0x28E23497L,4UL},{0x0B68F68CL,0x28E23497L,4294967295UL,4UL},{4UL,0x28E23497L,0x28E23497L,4UL},{0x0B68F68CL,0x28E23497L,4294967295UL,4UL},{4UL,0x28E23497L,0x28E23497L,4UL}}};
                int i, j, k;
                g_112[0][1][3].f2 = g_194;
                if (l_337)
                    break;
                g_366[0][2] &= (safe_add_func_uint8_t_u_u((g_86[0][0] &= (l_348 , (safe_sub_func_uint64_t_u_u(((safe_div_func_int8_t_s_s((((safe_mul_func_uint8_t_u_u(((safe_add_func_uint16_t_u_u(((safe_add_func_uint16_t_u_u((safe_mul_func_uint16_t_u_u(((l_362 = (g_112[0][1][3].f3 & ((-1L) != (g_9 , l_361)))) >= g_79), l_363[0][0][1])), g_112[0][1][3].f2)) , 0x86A8L), 0xBE0EL)) > g_81), l_364)) >= 0xF86FAD7FL) , l_363[0][0][1]), 252UL)) | 0xAF1D9DC3L), g_187[2][1][2])))), l_365[0][0][3]));
            }
        }
    }
    else
    { 
        uint64_t l_367[3][1][4] = {{{0x38A6FDFDF90A1ABELL,0x38A6FDFDF90A1ABELL,0xCFAFA3A94196BDB2LL,0x38A6FDFDF90A1ABELL}},{{0x38A6FDFDF90A1ABELL,0xCFAFA3A94196BDB2LL,0xCFAFA3A94196BDB2LL,0x02D7321C88EC6B02LL}},{{0xCFAFA3A94196BDB2LL,0x02D7321C88EC6B02LL,0xCFAFA3A94196BDB2LL,0xCFAFA3A94196BDB2LL}}};
        int i, j, k;
        return l_367[1][0][0];
    }
    for (g_36 = 20; (g_36 == (-28)); g_36 = safe_sub_func_int32_t_s_s(g_36, 5))
    { 
        int16_t l_370 = 0x5A23L;
        g_112[0][1][3].f2 = (l_370 && (((safe_rshift_func_uint8_t_u_s((l_375 = (l_13[0][1] = (++g_233))), (safe_sub_func_int16_t_s_s((((safe_sub_func_int64_t_s_s((safe_mod_func_int8_t_s_s(g_57, (safe_rshift_func_uint8_t_u_u((((((0x14BED564L == 0xBDD8DF83L) & 0x3EL) == g_195) > l_8[0][0][3].f0) > g_212), g_112[0][1][3].f4)))), l_370)) <= 0x4BAFBCACCBB8548ALL) == l_336), l_12)))) <= g_112[0][1][3].f3) ^ l_370));
        if (g_86[0][0])
            continue;
    }
    return l_335;
}



static int32_t  func_2(union U2  p_3, uint32_t  p_4, union U2  p_5, int8_t  p_6, const uint8_t  p_7)
{ 
    struct S0 l_20 = {65535UL,1UL,1L,0xB5009892657CF7A0LL,3UL,0x9A9D0127L};
    int64_t l_184 = 1L;
    uint32_t l_202 = 4294967295UL;
    union U1 l_209 = {0x168FL};
    const int32_t l_256[1] = {0L};
    int i;
    if ((p_6 != (func_14(func_18(l_20), l_20.f0, l_20.f3) <= g_112[0][1][3].f0)))
    { 
        int32_t l_181[5][3][5] = {{{0L,0L,0x0785E97AL,1L,0L},{0L,0xA07391C9L,1L,1L,0xA07391C9L},{(-8L),0xA07391C9L,0x0785E97AL,0x0785E97AL,0xA07391C9L}},{{0L,0L,0x0785E97AL,1L,0L},{0L,0xA07391C9L,1L,1L,0xA07391C9L},{(-8L),0xA07391C9L,0x0785E97AL,0x0785E97AL,0xA07391C9L}},{{0L,0L,0x0785E97AL,1L,0L},{0L,0xA07391C9L,1L,1L,0xA07391C9L},{(-8L),0xA07391C9L,0x0785E97AL,0x0785E97AL,0xA07391C9L}},{{0L,0L,0x0785E97AL,1L,0L},{0L,0xA07391C9L,1L,1L,0xA07391C9L},{(-8L),0xA07391C9L,0x0785E97AL,0x0785E97AL,0xA07391C9L}},{{0L,0L,0x0785E97AL,1L,0L},{0L,0xA07391C9L,1L,1L,0xA07391C9L},{(-8L),0xA07391C9L,0x0785E97AL,0x0785E97AL,0xA07391C9L}}};
        int32_t l_185 = 0xB299F902L;
        int32_t l_186 = 0xDFF82CE3L;
        int32_t l_196 = (-1L);
        uint32_t l_197 = 0x1C92298DL;
        int i, j, k;
        for (p_5.f0 = 0; (p_5.f0 < (-29)); p_5.f0 = safe_sub_func_int16_t_s_s(p_5.f0, 1))
        { 
            if ((g_188[2][3][0] = ((g_187[2][1][2] |= ((((safe_mod_func_int32_t_s_s((g_112[0][1][3].f2 = (safe_lshift_func_int8_t_s_s((g_112[0][1][3].f5 < p_5.f0), 0))), l_181[2][0][0])) & ((safe_rshift_func_int8_t_s_u(((l_186 = (l_185 = l_184)) < (-1L)), g_79)) == g_57)) & 1UL) > 0x1CC4FA7118264B27LL)) >= l_20.f2)))
            { 
                return l_20.f4;
            }
            else
            { 
                return g_86[0][0];
            }
        }
        for (g_72 = (-9); (g_72 < 43); g_72 = safe_add_func_uint64_t_u_u(g_72, 9))
        { 
            int64_t l_191 = (-1L);
            int32_t l_192 = 1L;
            --l_197;
            for (l_186 = 0; (l_186 != (-30)); --l_186)
            { 
                return l_202;
            }
            --g_204;
        }
        g_212 = (0x17L != ((g_112[0][1][3].f2 |= (safe_div_func_uint16_t_u_u(((l_209 , 18446744073709551615UL) && (safe_rshift_func_uint8_t_u_s((g_187[0][0][2] , 0xE5L), p_6))), g_140.f0))) > g_148));
    }
    else
    { 
        uint64_t l_231 = 1UL;
        int32_t l_232 = 0L;
        int8_t l_249 = 0x01L;
        int16_t l_254 = 0xC10BL;
        int32_t l_290 = 0x412EEC10L;
        int32_t l_299 = 0x53A16C33L;
        g_233 = (g_112[0][1][3].f2 = (g_112[0][1][3].f4 & ((safe_add_func_uint16_t_u_u((p_6 != (((((safe_sub_func_uint16_t_u_u(p_4, (safe_mod_func_int32_t_s_s(((safe_mul_func_uint16_t_u_u(((safe_mul_func_int16_t_s_s(((safe_div_func_int64_t_s_s((safe_lshift_func_uint8_t_u_u(((l_231 ^= ((safe_lshift_func_uint16_t_u_u((g_57 || 1UL), 0)) != p_5.f0)) >= l_232), 7)), 0x0F6B2B4994AC5463LL)) , 1L), l_20.f3)) <= g_195), g_188[2][3][0])) < p_5.f0), p_7)))) ^ p_7) , g_203) == 0UL) > l_232)), p_3.f0)) < g_187[1][1][1])));
        g_112[0][1][3].f2 ^= p_4;
        if ((safe_sub_func_int16_t_s_s((g_81 = ((safe_div_func_uint32_t_u_u((safe_add_func_uint16_t_u_u(((l_20.f0 || 254UL) || (safe_add_func_uint64_t_u_u(0UL, ((g_36 <= 1L) | 4UL)))), g_80[2])), 7L)) >= 0L)), p_3.f0)))
        { 
            uint16_t l_244 = 0x9338L;
            l_20.f2 = (l_232 = (safe_add_func_uint64_t_u_u(1UL, g_57)));
            l_244 = 0xFD16B3F6L;
            l_20.f2 = ((safe_add_func_int16_t_s_s(l_231, g_58)) == (p_4 != (((safe_sub_func_int32_t_s_s(g_188[1][2][1], l_20.f1)) >= l_249) == 1L)));
        }
        else
        { 
            uint64_t l_255 = 0xFCE430C6EE4B11BBLL;
            int32_t l_300 = 0x24FD064CL;
            if ((safe_rshift_func_int8_t_s_s((0x6BL <= ((safe_mod_func_uint16_t_u_u((l_232 &= (((g_86[0][0] , (l_254 == l_255)) || g_9) | l_256[0])), p_7)) , 8L)), 1)))
            { 
lbl_272:
                g_112[0][1][3].f2 = (safe_mod_func_int16_t_s_s(((safe_lshift_func_uint16_t_u_s((safe_add_func_int16_t_s_s((-1L), g_73.f0)), (((p_6 >= ((safe_add_func_int32_t_s_s(1L, 0x06D749BBL)) , p_6)) > p_4) , 0x947BL))) < (-1L)), 0x2A6AL));
lbl_274:
                if (l_20.f0)
                    goto lbl_273;
            }
            else
            { 
                l_20.f2 = (safe_div_func_uint16_t_u_u((p_4 || (safe_unary_minus_func_uint64_t_u((safe_mod_func_int32_t_s_s(l_20.f4, (g_86[0][0] | (safe_rshift_func_int8_t_s_u(p_3.f0, 2)))))))), l_20.f5));
lbl_273:
                if (l_209.f0)
                    goto lbl_272;
                if (g_58)
                    goto lbl_274;
            }
            if ((safe_mul_func_int16_t_s_s((~((safe_add_func_uint8_t_u_u((g_233 = p_5.f0), (safe_mod_func_uint8_t_u_u((safe_add_func_int16_t_s_s((l_290 ^= ((l_209 , ((((safe_sub_func_uint64_t_u_u(g_86[0][0], (safe_mod_func_uint32_t_u_u(((((safe_sub_func_uint64_t_u_u((l_255 <= g_86[0][0]), l_249)) ^ g_73.f0) , g_172) , p_6), p_3.f0)))) || g_112[0][1][3].f5) , l_255) ^ l_232)) || g_72)), g_99)), g_112[0][1][3].f1)))) && (-10L))), 1UL)))
            { 
                int32_t l_291 = (-1L);
                l_291 ^= 0x1A4CF9EBL;
                ++g_293;
            }
            else
            { 
                uint32_t l_298 = 9UL;
                g_112[0][1][3].f2 = (p_3.f0 ^ (safe_mul_func_uint16_t_u_u((l_300 &= (((((l_298 = 0L) < (-1L)) != (l_299 < 255UL)) ^ 0x09L) || g_148)), 65535UL)));
                l_300 = g_172;
                l_20.f2 = l_298;
            }
        }
    }
    return p_4;
}



static int8_t  func_14(int8_t  p_15, uint32_t  p_16, int8_t  p_17)
{ 
    uint8_t l_109[1][4][1] = {{{255UL},{0x1FL},{255UL},{0x1FL}}};
    int32_t l_116 = 0xE1991DECL;
    int32_t l_173 = 0xF84D3830L;
    int16_t l_174 = 1L;
    int i, j, k;
    for (g_79 = 13; (g_79 > 10); g_79--)
    { 
        int16_t l_113[1][3][2];
        int32_t l_117 = 0L;
        int i, j, k;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 3; j++)
            {
                for (k = 0; k < 2; k++)
                    l_113[i][j][k] = 0L;
            }
        }
        l_117 = (p_17 == (safe_add_func_uint32_t_u_u((l_109[0][0][0]++), (g_112[0][1][3] , (l_113[0][2][0] < (safe_rshift_func_int16_t_s_s(0xC1F5L, l_116)))))));
        if (p_16)
            continue;
        if ((g_112[0][1][3].f2 = ((p_15 && ((safe_mul_func_int16_t_s_s((safe_div_func_uint64_t_u_u(0UL, (safe_sub_func_int64_t_s_s(g_57, (safe_unary_minus_func_int16_t_s(0xFFE6L)))))), 0x97D2L)) && g_36)) | l_116)))
        { 
            uint8_t l_125 = 1UL;
            uint16_t l_128 = 0x8C2DL;
            int32_t l_146[1][2];
            int64_t l_147 = 1L;
            int64_t l_157 = 0x28BAD365824EB29FLL;
            int i, j;
            for (i = 0; i < 1; i++)
            {
                for (j = 0; j < 2; j++)
                    l_146[i][j] = 4L;
            }
            if ((((++l_125) || (p_16 , (g_112[0][1][3].f1 || l_128))) , (((safe_add_func_int64_t_s_s(p_15, g_112[0][1][3].f2)) > l_109[0][0][0]) ^ p_15)))
            { 
                if (l_113[0][2][0])
                    break;
                return g_99;
            }
            else
            { 
                uint8_t l_139 = 0xD2L;
                g_112[0][1][3].f2 = ((safe_lshift_func_int8_t_s_s((((safe_mul_func_int16_t_s_s(((+(((((((safe_mod_func_uint32_t_u_u(((p_16 , ((0x49L == (((!(g_112[0][1][3].f1 < p_17)) || g_81) < l_125)) <= g_112[0][1][3].f5)) , p_17), g_112[0][1][3].f3)) != l_139) , g_140) , l_109[0][2][0]) >= g_80[1]) && p_17) && l_128)) & 1UL), p_17)) == l_139) && l_139), p_16)) | 255UL);
            }
            if ((g_112[0][1][3].f4 < (safe_mod_func_int8_t_s_s(((((-9L) >= (safe_rshift_func_uint16_t_u_u(g_112[0][1][3].f3, p_16))) > p_17) & 0x9F78L), 0x19L))))
            { 
                uint16_t l_145 = 1UL;
                l_145 = 0xA306168AL;
                g_148++;
            }
            else
            { 
                uint32_t l_158[4];
                int i;
                for (i = 0; i < 4; i++)
                    l_158[i] = 0x3FC518A7L;
                l_117 = (safe_mod_func_uint8_t_u_u(((safe_mul_func_int8_t_s_s((p_15 < (0x25L && (l_113[0][0][0] , (safe_mod_func_uint16_t_u_u(((((6UL >= 0xC4DBL) , g_112[0][1][3].f2) == p_17) & (-4L)), p_15))))), g_80[2])) | 4294967289UL), 0x99L));
                l_158[2]++;
            }
            if ((safe_mod_func_int32_t_s_s((safe_add_func_int8_t_s_s(((safe_div_func_int64_t_s_s(l_117, 0x8FB5AA6BA308FB7BLL)) , (0x88L || ((safe_mod_func_uint8_t_u_u(255UL, l_113[0][0][1])) >= p_16))), g_80[2])), g_112[0][1][3].f0)))
            { 
                uint32_t l_171 = 0xE11B9BB3L;
                if (l_171)
                    break;
            }
            else
            { 
                g_172 = ((p_16 == 0x96L) == l_113[0][0][1]);
            }
        }
        else
        { 
            l_173 = l_113[0][2][0];
        }
    }
    l_116 = (-3L);
    return l_174;
}



static int8_t  func_18(struct S0  p_19)
{ 
    uint16_t l_21[5][5][3] = {{{0xEEB4L,65535UL,0x227FL},{0UL,0x83CAL,0x9AC4L},{0x227FL,0xE9B8L,1UL},{0UL,0x88B9L,0UL},{0xEEB4L,0xF84BL,1UL}},{{0x5772L,0x0183L,0x9AC4L},{0x9896L,0xF84BL,0x227FL},{0x9AC4L,0x88B9L,0UL},{0x9896L,0xE9B8L,0x9896L},{0x5772L,0x83CAL,0UL}},{{0xEEB4L,65535UL,0x227FL},{0UL,0x83CAL,0x9AC4L},{0x227FL,0xE9B8L,1UL},{0UL,0x88B9L,0UL},{0xEEB4L,0xF84BL,1UL}},{{0x5772L,0x0183L,0x9AC4L},{0x9896L,0xF84BL,0x227FL},{0x9AC4L,0x88B9L,0UL},{0x9896L,0xE9B8L,0x9896L},{0x5772L,0x83CAL,0UL}},{{0xEEB4L,65535UL,0x227FL},{0UL,0x83CAL,0x9AC4L},{0x227FL,0xE9B8L,1UL},{0UL,0x88B9L,0UL},{0xEEB4L,0xF84BL,1UL}}};
    int32_t l_82 = 0x821FDCAAL;
    int i, j, k;
    --l_21[2][1][2];
    for (p_19.f5 = 0; (p_19.f5 <= 2); p_19.f5 += 1)
    { 
        uint32_t l_37 = 0x6068D11AL;
        int32_t l_44 = 0xE1722BB7L;
        for (g_9 = 2; (g_9 >= 0); g_9 -= 1)
        { 
            uint16_t l_24 = 1UL;
            int32_t l_34 = 0x86B299B5L;
            for (p_19.f2 = 0; (p_19.f2 <= 2); p_19.f2 += 1)
            { 
                int i, j, k;
                l_24--;
                if (l_21[(p_19.f5 + 1)][(g_9 + 1)][p_19.f5])
                    break;
                if (p_19.f0)
                    break;
            }
            for (p_19.f2 = 0; (p_19.f2 <= 2); p_19.f2 += 1)
            { 
                union U2 l_35 = {0x5AB2A44BL};
                int i, j, k;
                g_36 = (((safe_rshift_func_uint16_t_u_s((((+(safe_mod_func_int8_t_s_s(0L, (safe_div_func_uint8_t_u_u((((((l_34 &= l_21[(g_9 + 2)][p_19.f5][g_9]) , l_35) , (l_21[(g_9 + 2)][(p_19.f2 + 2)][p_19.f5] > 1L)) >= 5UL) >= g_9), g_9))))) , 0xD9D76C132D45AB60LL) > l_24), 14)) <= (-1L)) ^ (-2L));
            }
        }
        if (g_36)
            break;
        for (p_19.f3 = 0; (p_19.f3 <= 2); p_19.f3 += 1)
        { 
            union U2 l_54[2][3][2] = {{{{-1L},{0x92E0EE4DL}},{{-1L},{0x92E0EE4DL}},{{-1L},{0x92E0EE4DL}}},{{{-1L},{0x92E0EE4DL}},{{-1L},{0x92E0EE4DL}},{{-1L},{0x92E0EE4DL}}}};
            int i, j, k;
            l_37++;
            l_44 = (safe_sub_func_int16_t_s_s(((p_19.f4 >= ((safe_add_func_uint8_t_u_u(((((++g_45) >= ((safe_mod_func_uint32_t_u_u(p_19.f0, ((safe_lshift_func_uint16_t_u_s(((safe_mod_func_int64_t_s_s(((((l_54[1][1][0] , (safe_mul_func_uint16_t_u_u((l_54[1][2][1] , 0x8E81L), l_21[2][1][2]))) || l_44) <= p_19.f1) & p_19.f3), 4UL)) >= g_36), p_19.f3)) , p_19.f0))) && l_44)) <= l_21[2][1][2]) != (-10L)), g_9)) > g_9)) , l_21[1][2][2]), l_54[1][1][0].f0));
            if (g_9)
            { 
                int16_t l_70 = 9L;
                int32_t l_71 = 0L;
                int32_t l_78 = (-5L);
                --g_58;
                g_72 |= (((safe_sub_func_uint64_t_u_u(g_58, (g_65 &= 0xF4F6E08938C4ECB2LL))) & (~0x8D86F2FEL)) <= (((safe_sub_func_int16_t_s_s((!((l_54[1][1][0].f0 | p_19.f0) ^ p_19.f1)), l_21[2][1][2])) , l_70) < l_71));
                g_79 = ((g_9 != (g_72 & (g_73 , (safe_mod_func_int8_t_s_s(((((((safe_sub_func_int8_t_s_s(((l_78 = l_37) , g_45), 246UL)) & p_19.f3) < g_72) , p_19.f0) >= 0x95L) != 0xAE43225DEAEDAB18LL), 0xC8L))))) <= p_19.f2);
            }
            else
            { 
                uint64_t l_83 = 0xE153341C0C234542LL;
                l_44 |= p_19.f0;
                ++l_83;
                g_86[0][0] = (-1L);
            }
            for (g_65 = 0; (g_65 <= 2); g_65 += 1)
            { 
                uint32_t l_98 = 18446744073709551615UL;
                g_99 = (((p_19.f5 ^ (safe_lshift_func_int8_t_s_u(((-2L) != (safe_add_func_uint64_t_u_u(((((+(safe_mul_func_int8_t_s_s((g_79 >= ((safe_rshift_func_uint16_t_u_s((safe_lshift_func_int8_t_s_s(((l_98 = 0x69F0B4ABL) == 4294967290UL), p_19.f3)), 13)) && 65535UL)), p_19.f4))) | g_58) , p_19.f5) == l_21[2][1][2]), p_19.f2))), l_82))) | g_86[0][0]) , 0L);
                l_82 = (p_19.f2 = (((safe_mod_func_uint32_t_u_u(((((safe_unary_minus_func_uint64_t_u(l_98)) < p_19.f0) , ((safe_div_func_uint16_t_u_u(((p_19.f2 >= g_99) <= p_19.f3), g_99)) <= l_98)) != p_19.f1), p_19.f3)) < 0xF72AEA97L) == g_45));
            }
        }
    }
    return p_19.f2;
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_9, "g_9", print_hash_value);
    transparent_crc(g_36, "g_36", print_hash_value);
    transparent_crc(g_45, "g_45", print_hash_value);
    transparent_crc(g_57, "g_57", print_hash_value);
    transparent_crc(g_58, "g_58", print_hash_value);
    transparent_crc(g_65, "g_65", print_hash_value);
    transparent_crc(g_72, "g_72", print_hash_value);
    transparent_crc(g_73.f0, "g_73.f0", print_hash_value);
    transparent_crc(g_79, "g_79", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_80[i], "g_80[i]", print_hash_value);

    }
    transparent_crc(g_81, "g_81", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 1; j++)
        {
            transparent_crc(g_86[i][j], "g_86[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_99, "g_99", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            for (k = 0; k < 4; k++)
            {
                transparent_crc(g_112[i][j][k].f0, "g_112[i][j][k].f0", print_hash_value);
                transparent_crc(g_112[i][j][k].f1, "g_112[i][j][k].f1", print_hash_value);
                transparent_crc(g_112[i][j][k].f2, "g_112[i][j][k].f2", print_hash_value);
                transparent_crc(g_112[i][j][k].f3, "g_112[i][j][k].f3", print_hash_value);
                transparent_crc(g_112[i][j][k].f4, "g_112[i][j][k].f4", print_hash_value);
                transparent_crc(g_112[i][j][k].f5, "g_112[i][j][k].f5", print_hash_value);

            }
        }
    }
    transparent_crc(g_140.f0, "g_140.f0", print_hash_value);
    transparent_crc(g_148, "g_148", print_hash_value);
    transparent_crc(g_172, "g_172", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 3; k++)
            {
                transparent_crc(g_187[i][j][k], "g_187[i][j][k]", print_hash_value);

            }
        }
    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 2; k++)
            {
                transparent_crc(g_188[i][j][k], "g_188[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_193, "g_193", print_hash_value);
    transparent_crc(g_194, "g_194", print_hash_value);
    transparent_crc(g_195, "g_195", print_hash_value);
    transparent_crc(g_203, "g_203", print_hash_value);
    transparent_crc(g_204, "g_204", print_hash_value);
    transparent_crc(g_212, "g_212", print_hash_value);
    transparent_crc(g_233, "g_233", print_hash_value);
    transparent_crc(g_292, "g_292", print_hash_value);
    transparent_crc(g_293, "g_293", print_hash_value);
    transparent_crc(g_340, "g_340", print_hash_value);
    transparent_crc(g_341, "g_341", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 4; j++)
        {
            transparent_crc(g_366[i][j], "g_366[i][j]", print_hash_value);

        }
    }
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
