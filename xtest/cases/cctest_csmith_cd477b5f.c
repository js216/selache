// SPDX-License-Identifier: MIT
// cctest_csmith_cd477b5f.c --- cctest case csmith_cd477b5f (csmith seed 3444013919)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0xb4693fef */

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

// Options:   -s 3444013919 -o /tmp/csmith_gen__8o7mk2m/csmith.c --concise --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 8 --max-block-size 5 --max-block-depth 4 --max-expr-complexity 8 --max-array-dim 3 --max-array-len-per-dim 7 --max-struct-fields 8 --max-union-fields 5

static long __undefined;


#pragma pack(push)
#pragma pack(1)
struct S0 {
   int32_t  f0;
   int32_t  f1;
   int8_t  f2;
   int32_t  f3;
   int16_t  f4;
};
#pragma pack(pop)

#pragma pack(push)
#pragma pack(1)
struct S1 {
   const int32_t  f0;
   int8_t  f1;
   int64_t  f2;
   uint32_t  f3;
   int64_t  f4;
};
#pragma pack(pop)

union U2 {
   const struct S1  f0;
   struct S0  f1;
};

union U3 {
   struct S0  f0;
   uint32_t  f1;
   uint64_t  f2;
   int32_t  f3;
   struct S1  f4;
};


static int32_t g_5 = 0xAD7D711EL;
static int32_t * const g_4 = &g_5;
static int32_t *g_6 = &g_5;
static int32_t g_10 = 0xEDAC7A8CL;
static uint32_t g_11 = 0UL;
static const int32_t g_46 = 1L;
static int16_t g_55[1][7] = {{0x04BBL,(-6L),0x04BBL,0x04BBL,(-6L),0x04BBL,0x04BBL}};
static int16_t g_57 = 0x8227L;
static struct S0 g_58 = {-9L,8L,-10L,0xD88C924DL,0xB481L};
static uint16_t g_74 = 8UL;
static const int32_t *g_77 = &g_58.f0;
static int64_t g_78[1][4][1] = {{{0xB1E1499B6F360822LL},{0x1886A60883475F54LL},{0xB1E1499B6F360822LL},{0x1886A60883475F54LL}}};
static int32_t g_79[5][4][3] = {{{9L,0x77EF9B05L,0x3A8461A3L},{0x77EF9B05L,0x669DD8B1L,0x669DD8B1L},{8L,9L,0x3A8461A3L},{0xFEB85967L,0xEE40B14FL,9L}},{{0xFEB85967L,(-3L),0x77EF9B05L},{8L,7L,8L},{0x77EF9B05L,(-3L),0xFEB85967L},{9L,0xEE40B14FL,0xFEB85967L}},{{0x3A8461A3L,9L,8L},{0x669DD8B1L,0x669DD8B1L,0x77EF9B05L},{0x3A8461A3L,0x77EF9B05L,9L},{9L,0x77EF9B05L,0xFEB85967L}},{{0x669DD8B1L,0L,0L},{(-3L),7L,0xFEB85967L},{8L,0x3A8461A3L,7L},{8L,0x77EF9B05L,0x669DD8B1L}},{{(-3L),3L,(-3L)},{0x669DD8B1L,0x77EF9B05L,8L},{7L,0x3A8461A3L,8L},{0xFEB85967L,7L,(-3L)}}};
static union U2 g_96 = {{0xA0F9AE2BL,2L,-1L,18446744073709551615UL,0x28D60A67ACB2CDE8LL}};
static uint64_t g_112[2] = {1UL,1UL};
static union U3 *g_119[4][6] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
static const int16_t g_126 = 0L;
static uint8_t g_144 = 0xDEL;
static int16_t **g_261 = (void*)0;
static uint32_t g_281 = 0x70B68F89L;
static union U2 ** const g_289 = (void*)0;
static struct S1 g_296 = {3L,1L,-1L,0xDC7CF94EL,0x5937EDC5DE54D68BLL};
static uint32_t g_328 = 8UL;
static int32_t g_387 = 0x4A5E4B6AL;
static int64_t g_401[4] = {1L,1L,1L,1L};
static int64_t g_402 = 0xBEDE2C968DFA88C2LL;
static int32_t g_403[1] = {8L};
static struct S1 *g_424 = &g_296;
static struct S1 **g_423 = &g_424;
static union U2 **g_537 = (void*)0;
static struct S0 g_551 = {0xC134A070L,-6L,1L,0L,0x66E8L};
static const int32_t g_564 = 0x0B7E65E2L;
static uint16_t g_594 = 9UL;
static uint16_t g_651[1] = {0xA2E9L};
static uint32_t g_655[6] = {0x71D098B0L,0x71D098B0L,0x71D098B0L,0x71D098B0L,0x71D098B0L,0x71D098B0L};
static uint8_t *g_668[4] = {&g_144,&g_144,&g_144,&g_144};
static uint8_t **g_667 = &g_668[0];
static uint16_t g_673[1] = {0UL};
static uint32_t g_791 = 0UL;
static union U3 g_803 = {{0x287FB57BL,0xA7514FFAL,-1L,0x85E357E7L,-1L}};
static struct S1 g_958[7][5][3] = {{{{0L,2L,-1L,18446744073709551615UL,0x4E0AE5627F0D6654LL},{0L,0xB1L,0x6D38AD5384311951LL,0x958B2D6CL,0L},{-10L,0x2CL,0x8FBB145FB98E00A0LL,0xEB7369C3L,0x1B113839FC38C08ALL}},{{0L,0xC5L,-1L,18446744073709551615UL,0xEAE995CDDF618AE6LL},{0xFFC39EBEL,0x72L,0x766BAC7DC830ED62LL,18446744073709551606UL,0xB2644CBCBD66A5D8LL},{0x160453B0L,-7L,0xE8E907BC87A8E3C1LL,0xE66E08B6L,1L}},{{-1L,0xC4L,0L,0xB1C22EEFL,-1L},{1L,-10L,-4L,0x71500135L,0x76B70347153E8B7ALL},{0L,0xC5L,-1L,18446744073709551615UL,0xEAE995CDDF618AE6LL}},{{0L,0xC5L,-1L,18446744073709551615UL,0xEAE995CDDF618AE6LL},{5L,2L,1L,1UL,0xACD2871F423502DELL},{-1L,-4L,-6L,0UL,0x67ED7FE1E0F1A46BLL}},{{0L,2L,-1L,18446744073709551615UL,0x4E0AE5627F0D6654LL},{0xAB6E2A40L,2L,2L,0xC69B25D2L,0x0E61881D7428C2D3LL},{-1L,-4L,-6L,0UL,0x67ED7FE1E0F1A46BLL}}},{{{0x13A48D1BL,2L,1L,0UL,6L},{5L,2L,0x447AD65494DE060ALL,2UL,1L},{0L,0xC5L,-1L,18446744073709551615UL,0xEAE995CDDF618AE6LL}},{{0L,1L,-7L,18446744073709551607UL,0L},{0x4362BA1FL,1L,5L,0x79485699L,0xE69AEEF652F60BC1LL},{0x160453B0L,-7L,0xE8E907BC87A8E3C1LL,0xE66E08B6L,1L}},{{-1L,-4L,-6L,0UL,0x67ED7FE1E0F1A46BLL},{5L,2L,0x447AD65494DE060ALL,2UL,1L},{-10L,0x2CL,0x8FBB145FB98E00A0LL,0xEB7369C3L,0x1B113839FC38C08ALL}},{{0x1718C477L,-8L,1L,0UL,7L},{0xAB6E2A40L,2L,2L,0xC69B25D2L,0x0E61881D7428C2D3LL},{-1L,1L,0x7906EA313186292BLL,0x586D7853L,-1L}},{{0x1718C477L,-8L,1L,0UL,7L},{5L,2L,1L,1UL,0xACD2871F423502DELL},{0L,1L,-7L,18446744073709551607UL,0L}}},{{{-1L,-4L,-6L,0UL,0x67ED7FE1E0F1A46BLL},{1L,-10L,-4L,0x71500135L,0x76B70347153E8B7ALL},{0L,0x27L,8L,18446744073709551610UL,0x6DBE524DCD3C3E60LL}},{{0L,1L,-7L,18446744073709551607UL,0L},{0xFFC39EBEL,0x72L,0x766BAC7DC830ED62LL,18446744073709551606UL,0xB2644CBCBD66A5D8LL},{0L,1L,-7L,18446744073709551607UL,0L}},{{0x13A48D1BL,2L,1L,0UL,6L},{0L,0xB1L,0x6D38AD5384311951LL,0x958B2D6CL,0L},{-1L,1L,0x7906EA313186292BLL,0x586D7853L,-1L}},{{0L,2L,-1L,18446744073709551615UL,0x4E0AE5627F0D6654LL},{0L,0xB1L,0x6D38AD5384311951LL,0x958B2D6CL,0L},{-10L,0x2CL,0x8FBB145FB98E00A0LL,0xEB7369C3L,0x1B113839FC38C08ALL}},{{0L,0xC5L,-1L,18446744073709551615UL,0xEAE995CDDF618AE6LL},{0xFFC39EBEL,0x72L,0x766BAC7DC830ED62LL,18446744073709551606UL,0xB2644CBCBD66A5D8LL},{0x160453B0L,-7L,0xE8E907BC87A8E3C1LL,0xE66E08B6L,1L}}},{{{-1L,0xC4L,0L,0xB1C22EEFL,-1L},{1L,-10L,-4L,0x71500135L,0x76B70347153E8B7ALL},{0L,0xC5L,-1L,18446744073709551615UL,0xEAE995CDDF618AE6LL}},{{0L,0xC5L,-1L,18446744073709551615UL,0xEAE995CDDF618AE6LL},{5L,2L,1L,1UL,0xACD2871F423502DELL},{-1L,-4L,-6L,0UL,0x67ED7FE1E0F1A46BLL}},{{0L,2L,-1L,18446744073709551615UL,0x4E0AE5627F0D6654LL},{0xAB6E2A40L,2L,2L,0xC69B25D2L,0x0E61881D7428C2D3LL},{-1L,-4L,-6L,0UL,0x67ED7FE1E0F1A46BLL}},{{0x13A48D1BL,2L,1L,0UL,6L},{5L,2L,0x447AD65494DE060ALL,2UL,1L},{0L,0xC5L,-1L,18446744073709551615UL,0xEAE995CDDF618AE6LL}},{{0L,1L,-7L,18446744073709551607UL,0L},{0x4362BA1FL,1L,5L,0x79485699L,0xE69AEEF652F60BC1LL},{0x160453B0L,-7L,0xE8E907BC87A8E3C1LL,0xE66E08B6L,1L}}},{{{-1L,-4L,-6L,0UL,0x67ED7FE1E0F1A46BLL},{5L,2L,0x447AD65494DE060ALL,2UL,1L},{-10L,0x2CL,0x8FBB145FB98E00A0LL,0xEB7369C3L,0x1B113839FC38C08ALL}},{{0x1718C477L,-8L,1L,0UL,7L},{0xAB6E2A40L,2L,2L,0xC69B25D2L,0x0E61881D7428C2D3LL},{-1L,1L,0x7906EA313186292BLL,0x586D7853L,-1L}},{{0x1718C477L,-8L,1L,0UL,7L},{5L,2L,1L,1UL,0xACD2871F423502DELL},{0L,1L,-7L,18446744073709551607UL,0L}},{{-1L,-4L,-6L,0UL,0x67ED7FE1E0F1A46BLL},{1L,-10L,-4L,0x71500135L,0x76B70347153E8B7ALL},{0L,0x27L,8L,18446744073709551610UL,0x6DBE524DCD3C3E60LL}},{{0L,1L,-7L,18446744073709551607UL,0L},{0xFFC39EBEL,0x72L,0x766BAC7DC830ED62LL,18446744073709551606UL,0xB2644CBCBD66A5D8LL},{0L,1L,-7L,18446744073709551607UL,0L}}},{{{0x13A48D1BL,2L,1L,0UL,6L},{0L,0xB1L,0x6D38AD5384311951LL,0x958B2D6CL,0L},{-1L,1L,0x7906EA313186292BLL,0x586D7853L,-1L}},{{0L,2L,-1L,18446744073709551615UL,0x4E0AE5627F0D6654LL},{0L,0xB1L,0x6D38AD5384311951LL,0x958B2D6CL,0L},{-10L,0x2CL,0x8FBB145FB98E00A0LL,0xEB7369C3L,0x1B113839FC38C08ALL}},{{0L,0xC5L,-1L,18446744073709551615UL,0xEAE995CDDF618AE6LL},{0xFFC39EBEL,0x72L,0x766BAC7DC830ED62LL,18446744073709551606UL,0xB2644CBCBD66A5D8LL},{0x160453B0L,-7L,0xE8E907BC87A8E3C1LL,0xE66E08B6L,1L}},{{-1L,0xC4L,0L,0xB1C22EEFL,-1L},{1L,-10L,-4L,0x71500135L,0x76B70347153E8B7ALL},{0L,0xC5L,-1L,18446744073709551615UL,0xEAE995CDDF618AE6LL}},{{0L,0xC5L,-1L,18446744073709551615UL,0xEAE995CDDF618AE6LL},{5L,2L,1L,1UL,0xACD2871F423502DELL},{-1L,-4L,-6L,0UL,0x67ED7FE1E0F1A46BLL}}},{{{0L,2L,-1L,18446744073709551615UL,0x4E0AE5627F0D6654LL},{0xAB6E2A40L,2L,2L,0xC69B25D2L,0x0E61881D7428C2D3LL},{-1L,-4L,-6L,0UL,0x67ED7FE1E0F1A46BLL}},{{0x13A48D1BL,2L,1L,0UL,6L},{5L,2L,0x447AD65494DE060ALL,2UL,1L},{0L,0xC5L,-1L,18446744073709551615UL,0xEAE995CDDF618AE6LL}},{{0L,1L,-7L,18446744073709551607UL,0L},{0x4362BA1FL,1L,5L,0x79485699L,0xE69AEEF652F60BC1LL},{0x160453B0L,-7L,0xE8E907BC87A8E3C1LL,0xE66E08B6L,1L}},{{-1L,-4L,-6L,0UL,0x67ED7FE1E0F1A46BLL},{5L,2L,0x447AD65494DE060ALL,2UL,1L},{-10L,0x2CL,0x8FBB145FB98E00A0LL,0xEB7369C3L,0x1B113839FC38C08ALL}},{{0x1718C477L,-8L,1L,0UL,7L},{0xAB6E2A40L,2L,2L,0xC69B25D2L,0x0E61881D7428C2D3LL},{-1L,1L,0x7906EA313186292BLL,0x586D7853L,-1L}}}};
static union U3 g_971 = {{0x14727865L,0x4AB2D820L,6L,0xD2F877CDL,0x295BL}};
static uint32_t g_1003 = 0xD2155C1AL;
static int8_t *g_1006 = &g_971.f0.f2;
static int8_t **g_1005 = &g_1006;
static int8_t ***g_1004 = &g_1005;
static union U3 g_1022 = {{1L,0x3C8E7252L,-2L,0xCD9907D8L,0x3270L}};
static union U3 *g_1021 = &g_1022;
static union U3 **g_1090 = &g_1021;
static union U3 ***g_1089 = &g_1090;
static union U3 ****g_1088 = &g_1089;
static uint32_t g_1187[5] = {0UL,0UL,0UL,0UL,0UL};
static uint64_t *g_1284 = &g_803.f2;
static int32_t g_1376[3] = {0x989DAB2DL,0x989DAB2DL,0x989DAB2DL};
static struct S0 *g_1416 = &g_551;
static const int32_t g_1514 = 1L;
static int32_t ** const *g_1598 = (void*)0;
static const uint32_t g_1634 = 1UL;
static uint64_t **g_1647 = (void*)0;
static uint64_t ***g_1646[5][6][4] = {{{&g_1647,(void*)0,&g_1647,&g_1647},{&g_1647,&g_1647,&g_1647,&g_1647},{&g_1647,(void*)0,(void*)0,&g_1647},{&g_1647,&g_1647,(void*)0,(void*)0},{&g_1647,&g_1647,&g_1647,&g_1647},{&g_1647,&g_1647,&g_1647,(void*)0}},{{&g_1647,&g_1647,(void*)0,&g_1647},{&g_1647,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,&g_1647,&g_1647},{(void*)0,&g_1647,&g_1647,(void*)0},{&g_1647,&g_1647,&g_1647,&g_1647},{&g_1647,&g_1647,&g_1647,(void*)0}},{{(void*)0,&g_1647,&g_1647,&g_1647},{(void*)0,&g_1647,(void*)0,&g_1647},{&g_1647,&g_1647,(void*)0,(void*)0},{&g_1647,&g_1647,&g_1647,&g_1647},{&g_1647,&g_1647,&g_1647,(void*)0},{&g_1647,&g_1647,(void*)0,&g_1647}},{{&g_1647,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,&g_1647,&g_1647},{(void*)0,&g_1647,&g_1647,(void*)0},{&g_1647,&g_1647,&g_1647,&g_1647},{&g_1647,&g_1647,&g_1647,(void*)0},{(void*)0,&g_1647,&g_1647,&g_1647}},{{(void*)0,&g_1647,(void*)0,&g_1647},{&g_1647,&g_1647,(void*)0,(void*)0},{&g_1647,&g_1647,&g_1647,&g_1647},{&g_1647,&g_1647,&g_1647,(void*)0},{&g_1647,&g_1647,(void*)0,&g_1647},{&g_1647,(void*)0,(void*)0,(void*)0}}};
static struct S1 g_1704 = {0xEA98A81DL,0x06L,2L,18446744073709551609UL,1L};
static struct S1 *g_1703 = &g_1704;
static uint32_t *g_1722 = &g_655[1];
static uint8_t g_1807 = 1UL;
static int32_t *****g_1955 = (void*)0;
static int32_t g_1967 = 0L;
static uint16_t g_1984 = 0x82F4L;
static uint32_t g_1989 = 0x936922FFL;
static const uint64_t **g_2208 = (void*)0;
static const int16_t g_2213[7][5][1] = {{{0x7FCBL},{0xAC1AL},{(-1L)},{(-1L)},{0xAC1AL}},{{0x7FCBL},{0L},{0xAC1AL},{0L},{0x7FCBL}},{{0xAC1AL},{(-1L)},{(-1L)},{0xAC1AL},{0x7FCBL}},{{0L},{0xAC1AL},{0L},{0x7FCBL},{0xAC1AL}},{{(-1L)},{(-1L)},{0xAC1AL},{0x7FCBL},{0L}},{{0xAC1AL},{0L},{0x7FCBL},{0xAC1AL},{(-1L)}},{{(-1L)},{0xAC1AL},{0x7FCBL},{0L},{0xAC1AL}}};
static uint32_t g_2327 = 2UL;
static int64_t *g_2339 = &g_78[0][0][0];
static int64_t **g_2338 = &g_2339;
static int64_t ***g_2337 = &g_2338;
static const int32_t g_2343 = (-4L);
static const int32_t *g_2342 = &g_2343;
static int8_t ****g_2385 = &g_1004;
static int32_t **g_2416 = (void*)0;
static int32_t ***g_2415 = &g_2416;
static int32_t ****g_2414 = &g_2415;
static const union U3 g_2442 = {{-3L,6L,1L,0x8EF02D1DL,0x5230L}};
static const union U3 *g_2441 = &g_2442;
static uint32_t * const *g_2540[3] = {&g_1722,&g_1722,&g_1722};
static uint32_t * const **g_2539[1][7][7] = {{{&g_2540[2],&g_2540[1],&g_2540[2],&g_2540[2],&g_2540[2],&g_2540[2],&g_2540[2]},{&g_2540[1],&g_2540[2],(void*)0,&g_2540[2],&g_2540[1],&g_2540[0],&g_2540[2]},{&g_2540[2],&g_2540[1],&g_2540[2],&g_2540[2],&g_2540[1],&g_2540[2],&g_2540[1]},{&g_2540[2],&g_2540[2],&g_2540[2],&g_2540[2],&g_2540[2],&g_2540[2],&g_2540[2]},{&g_2540[2],&g_2540[2],&g_2540[2],&g_2540[2],&g_2540[2],&g_2540[2],&g_2540[2]},{&g_2540[1],&g_2540[2],&g_2540[1],&g_2540[2],&g_2540[2],&g_2540[1],&g_2540[2]},{&g_2540[2],&g_2540[2],&g_2540[1],&g_2540[2],&g_2540[2],&g_2540[2],&g_2540[1]}}};
static union U3 ***g_2695 = &g_1090;
static uint16_t *g_2843[6][1] = {{&g_594},{&g_594},{&g_594},{&g_594},{&g_594},{&g_594}};
static uint16_t **g_2842 = &g_2843[0][0];
static uint16_t ***g_2841 = &g_2842;
static struct S0 g_2886 = {0xF6D23616L,0x96DBE576L,0xD1L,0L,0x7FA8L};
static int32_t g_2914 = 0x71890E4DL;
static const union U3 g_2947 = {{0xAA8F2830L,1L,-1L,-1L,0x369FL}};
static int8_t g_2958 = 0x27L;
static uint16_t ****g_3075 = &g_2841;
static int16_t ***g_3085 = (void*)0;
static uint32_t g_3107 = 0UL;
static int16_t g_3196 = 0xE49DL;
static const int16_t g_3395 = 0x6C10L;
static struct S1 ***g_3428 = &g_423;
static int32_t g_3454 = 0x43D93CC1L;
static union U2 g_3460 = {{1L,-1L,0x0C9734E444F5A80ALL,2UL,4L}};
static union U2 *g_3459 = &g_3460;
static int32_t *g_3535 = &g_1022.f3;
static uint8_t g_3660 = 1UL;
static int8_t g_3809 = (-1L);
static struct S1 g_3919 = {-4L,0xF3L,-1L,0x76D5AC9BL,-1L};
static const uint8_t **g_3947 = (void*)0;



static uint32_t  func_1(void);
static int32_t  func_14(uint64_t  p_15, int32_t * p_16, uint32_t  p_17, struct S1  p_18);
static uint64_t  func_19(int32_t  p_20, uint8_t  p_21, int32_t * p_22, int16_t  p_23);
static int32_t * func_24(struct S0  p_25, uint32_t  p_26);
static struct S0  func_27(int32_t * p_28);
static int32_t  func_31(int32_t * p_32);
static int32_t * func_33(int8_t  p_34, int8_t  p_35, struct S0  p_36);
static struct S0  func_39(const int32_t * p_40, int32_t * const  p_41, uint8_t  p_42, struct S0  p_43);




static uint32_t  func_1(void)
{ 
    uint32_t l_2[2][5];
    int32_t l_3[1][6][1];
    struct S0 l_59 = {-1L,0x443C7F34L,0L,-1L,0x1EEDL};
    int32_t *l_3558 = &g_3460.f1.f0;
    int i, j, k;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 5; j++)
            l_2[i][j] = 0xD1AD67A4L;
    }
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 6; j++)
        {
            for (k = 0; k < 1; k++)
                l_3[i][j][k] = 1L;
        }
    }
    l_3[0][5][0] &= l_2[0][1];
    g_6 = g_4;
    for (g_5 = 12; (g_5 <= 26); g_5 = safe_add_func_int8_t_s_s(g_5, 4))
    { 
        int32_t *l_9[4];
        const int32_t *l_45 = &g_46;
        const int32_t **l_44 = &l_45;
        uint8_t l_53 = 255UL;
        int16_t *l_54 = &g_55[0][6];
        int16_t *l_56 = &g_57;
        int8_t *l_550 = &g_296.f1;
        int32_t **l_1808 = &l_9[3];
        int32_t *l_4016 = &g_1967;
        int i;
        for (i = 0; i < 4; i++)
            l_9[i] = &l_3[0][3][0];
        --g_11;
    }
    return g_803.f0.f2;
}



static int32_t  func_14(uint64_t  p_15, int32_t * p_16, uint32_t  p_17, struct S1  p_18)
{ 
    const union U3 **l_3563[4];
    const union U3 ***l_3562 = &l_3563[3];
    const union U3 ****l_3561[4];
    int32_t l_3566 = 1L;
    uint32_t l_3571 = 4294967291UL;
    int16_t *l_3579[7] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
    int16_t **l_3578 = &l_3579[4];
    int32_t l_3589 = (-5L);
    int64_t ** const *l_3598 = &g_2338;
    int64_t ** const **l_3597 = &l_3598;
    int64_t ** const ***l_3596 = &l_3597;
    union U2 l_3602[3] = {{{0xADEBFE37L,0x95L,3L,0x854483E9L,0L}},{{0xADEBFE37L,0x95L,3L,0x854483E9L,0L}},{{0xADEBFE37L,0x95L,3L,0x854483E9L,0L}}};
    int32_t l_3739[2];
    int64_t l_3794 = (-3L);
    int32_t l_3812[5];
    uint8_t l_3814 = 0x2BL;
    int32_t l_3822 = 0x5D14C14BL;
    uint32_t l_3914 = 0xE8314147L;
    int64_t ***l_3951[7][7][5] = {{{&g_2338,&g_2338,&g_2338,&g_2338,&g_2338},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&g_2338,&g_2338,&g_2338,&g_2338,&g_2338},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&g_2338,&g_2338,&g_2338,&g_2338,&g_2338},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&g_2338,&g_2338,&g_2338,&g_2338,&g_2338}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&g_2338,&g_2338,&g_2338,&g_2338,&g_2338},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&g_2338,&g_2338,&g_2338,&g_2338,&g_2338},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&g_2338,&g_2338,&g_2338,&g_2338,&g_2338},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{&g_2338,&g_2338,&g_2338,&g_2338,&g_2338},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&g_2338,&g_2338,&g_2338,&g_2338,&g_2338},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&g_2338,&g_2338,&g_2338,&g_2338,&g_2338},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&g_2338,&g_2338,&g_2338,&g_2338,&g_2338}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&g_2338,&g_2338,&g_2338,&g_2338,&g_2338},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&g_2338,&g_2338,&g_2338,&g_2338,&g_2338},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&g_2338,&g_2338,&g_2338,&g_2338,&g_2338},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{&g_2338,&g_2338,&g_2338,&g_2338,&g_2338},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&g_2338,&g_2338,&g_2338,&g_2338,&g_2338},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&g_2338,&g_2338,&g_2338,&g_2338,&g_2338},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&g_2338,&g_2338,&g_2338,&g_2338,&g_2338}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&g_2338,&g_2338,&g_2338,&g_2338,&g_2338},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&g_2338,&g_2338,&g_2338,&g_2338,&g_2338},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&g_2338,&g_2338,&g_2338,&g_2338,&g_2338},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{&g_2338,&g_2338,&g_2338,&g_2338,&g_2338},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&g_2338,&g_2338,&g_2338,&g_2338,&g_2338},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&g_2338,&g_2338,&g_2338,&g_2338,&g_2338},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&g_2338,&g_2338,&g_2338,&g_2338,&g_2338}}};
    uint16_t l_3976[7];
    int8_t l_3996 = (-1L);
    int32_t *l_4015[1];
    int i, j, k;
    for (i = 0; i < 4; i++)
        l_3563[i] = &g_2441;
    for (i = 0; i < 4; i++)
        l_3561[i] = &l_3562;
    for (i = 0; i < 2; i++)
        l_3739[i] = 1L;
    for (i = 0; i < 5; i++)
        l_3812[i] = (-1L);
    for (i = 0; i < 7; i++)
        l_3976[i] = 0x8DD9L;
    for (i = 0; i < 1; i++)
        l_4015[i] = (void*)0;
    if ((l_3566 = (((((safe_div_func_uint8_t_u_u(((void*)0 == l_3561[2]), (safe_mod_func_int8_t_s_s(p_18.f0, (l_3566 , (safe_lshift_func_int16_t_s_u((safe_mod_func_uint32_t_u_u(((p_15 &= l_3566) <= (0xAF64F4D9L <= l_3566)), l_3566)), 12))))))) | l_3571) == l_3571) | p_17) ^ (*p_16))))
    { 
        int16_t **l_3577 = (void*)0;
        int16_t ***l_3580[4][3];
        struct S1 ** const l_3584 = &g_424;
        uint16_t *l_3585 = &g_673[0];
        union U2 ** const * const l_3588 = &g_289;
        int i, j;
        for (i = 0; i < 4; i++)
        {
            for (j = 0; j < 3; j++)
                l_3580[i][j] = (void*)0;
        }
        (*p_16) ^= ((safe_div_func_uint32_t_u_u(((+(safe_mod_func_int16_t_s_s((18446744073709551615UL >= (l_3577 != (g_261 = l_3578))), (-1L)))) || (p_18.f1 <= (((safe_sub_func_int64_t_s_s((((*g_1284) = (~p_18.f0)) || ((*g_2339) = ((l_3584 == (void*)0) != p_18.f2))), 0xA05C0786FE3D35FDLL)) != l_3571) ^ p_18.f0))), l_3571)) ^ p_18.f0);
        (*g_3535) |= ((l_3566 != ((l_3585 == ((g_403[0] >= (((safe_sub_func_uint16_t_u_u((l_3589 = (l_3588 != l_3588)), 0xAE9FL)) || p_18.f2) != 0L)) , (void*)0)) || p_18.f4)) && p_18.f2);
    }
    else
    { 
        union U2 l_3601 = {{-10L,2L,1L,18446744073709551611UL,0x7FEF51FD54EC688ELL}};
        uint16_t ***l_3603 = (void*)0;
        int32_t *l_3611 = &g_1376[1];
        struct S1 *** const *l_3640[6] = {(void*)0,&g_3428,&g_3428,(void*)0,&g_3428,&g_3428};
        int8_t l_3673[6][3][1] = {{{0x38L},{(-1L)},{0x38L}},{{0x38L},{(-1L)},{0x38L}},{{0x38L},{(-1L)},{0x38L}},{{0x38L},{(-1L)},{0x38L}},{{0x38L},{(-1L)},{0x38L}},{{0x38L},{(-1L)},{0x38L}}};
        uint8_t *l_3710 = &g_144;
        uint32_t l_3724 = 4294967287UL;
        int32_t l_3730 = 0L;
        int32_t l_3738[6][2][1] = {{{1L},{0x6CCF373BL}},{{1L},{0x6182F2D2L}},{{0x6182F2D2L},{1L}},{{0x6CCF373BL},{1L}},{{0x6182F2D2L},{0x6182F2D2L}},{{1L},{0x6CCF373BL}}};
        uint8_t l_3740[5][4][5] = {{{0UL,1UL,1UL,0UL,1UL},{0xEBL,0xEBL,255UL,0xEBL,0xEBL},{1UL,0UL,1UL,1UL,0UL},{0xEBL,0x29L,0x29L,0xEBL,0x29L}},{{0UL,0UL,0x6BL,0UL,0UL},{0x29L,0xEBL,0x29L,0x29L,0xEBL},{0UL,1UL,1UL,0UL,1UL},{0xEBL,0xEBL,255UL,0xEBL,0xEBL}},{{1UL,0UL,1UL,1UL,0UL},{0xEBL,0x29L,0x29L,0xEBL,0x29L},{0UL,0UL,0x6BL,0UL,0UL},{0x29L,0xEBL,0x29L,0x29L,0xEBL}},{{0UL,1UL,1UL,0UL,1UL},{0xEBL,0xEBL,255UL,0xEBL,0xEBL},{1UL,0UL,1UL,1UL,0UL},{0xEBL,0x29L,0x29L,0x29L,255UL}},{{1UL,1UL,0UL,1UL,1UL},{255UL,0x29L,255UL,255UL,0x29L},{1UL,0x6BL,0x6BL,1UL,0x6BL},{0x29L,0x29L,0xEBL,0x29L,0x29L}}};
        int32_t ***l_3747 = &g_2416;
        uint8_t l_3798[4] = {0xE3L,0xE3L,0xE3L,0xE3L};
        int i, j, k;
lbl_3616:
        l_3589 = (l_3589 ^ (safe_lshift_func_int8_t_s_s(p_18.f0, 6)));
        (*g_3535) = ((safe_lshift_func_uint8_t_u_s((safe_div_func_int64_t_s_s(((*g_1416) , (((l_3596 == &l_3597) || ((safe_rshift_func_int8_t_s_s(((****g_1088) , ((((l_3601 , (l_3602[1] , (l_3603 != l_3603))) & p_18.f0) ^ 0xBC27L) && (*g_4))), l_3601.f0.f0)) , p_18.f3)) != 6UL)), l_3602[1].f0.f0)), 1)) == l_3602[1].f0.f1);
lbl_3617:
        for (g_3454 = 0; g_3454 < 4; g_3454 += 1)
        {
            for (g_96.f1.f2 = 0; g_96.f1.f2 < 6; g_96.f1.f2 += 1)
            {
                g_119[g_3454][g_96.f1.f2] = &g_971;
            }
        }
        for (l_3601.f1.f3 = (-6); (l_3601.f1.f3 > 18); l_3601.f1.f3 = safe_add_func_int64_t_s_s(l_3601.f1.f3, 7))
        { 
            int32_t *l_3615 = (void*)0;
            int32_t l_3626 = 0x2953A6CDL;
            union U2 *l_3672 = (void*)0;
            uint16_t * const *l_3679 = &g_2843[4][0];
            uint16_t * const **l_3678 = &l_3679;
            uint16_t * const ***l_3677 = &l_3678;
            uint16_t * const ****l_3676 = &l_3677;
            int8_t l_3704 = 0xBEL;
            int32_t l_3734[2];
            struct S0 l_3763 = {1L,0xBAB6A07CL,0x3CL,1L,0x8D9DL};
            int32_t *l_3764[5] = {&g_971.f3,&g_971.f3,&g_971.f3,&g_971.f3,&g_971.f3};
            uint64_t l_3765[3][3];
            uint16_t l_3793 = 0x95DAL;
            int i, j;
            for (i = 0; i < 2; i++)
                l_3734[i] = 0x91FB9D07L;
            for (i = 0; i < 3; i++)
            {
                for (j = 0; j < 3; j++)
                    l_3765[i][j] = 0x9A818E238D08B786LL;
            }
            for (g_971.f1 = (-8); (g_971.f1 > 34); g_971.f1 = safe_add_func_int64_t_s_s(g_971.f1, 3))
            { 
                struct S0 l_3612 = {0xA9901429L,1L,1L,-1L,0x2177L};
                union U3 ***l_3629[3][2];
                uint64_t *l_3638[5];
                uint32_t *l_3639 = &g_1003;
                struct S1 *** const *l_3641[1];
                int32_t *l_3661 = &g_3454;
                int i, j;
                for (i = 0; i < 3; i++)
                {
                    for (j = 0; j < 2; j++)
                        l_3629[i][j] = &g_1090;
                }
                for (i = 0; i < 5; i++)
                    l_3638[i] = (void*)0;
                for (i = 0; i < 1; i++)
                    l_3641[i] = &g_3428;
                for (l_3566 = 0; (l_3566 == (-12)); l_3566 = safe_sub_func_int64_t_s_s(l_3566, 8))
                { 
                    int32_t *l_3610 = &g_1376[1];
                    int32_t **l_3613 = (void*)0;
                    int32_t **l_3614 = &g_3535;
                    l_3611 = l_3610;
                    (*g_1416) = l_3612;
                    (*l_3614) = p_16;
                }
                if (l_3612.f1)
                    goto lbl_3616;
                if (l_3612.f1)
                    goto lbl_3617;
            }
        }
    }
    for (g_594 = 0; (g_594 <= 2); g_594 += 1)
    { 
        uint16_t l_3799[3];
        uint32_t **l_3800 = (void*)0;
        int32_t l_3804 = 1L;
        int32_t l_3805 = 0xB493395AL;
        int32_t l_3806 = (-7L);
        int32_t l_3807 = 1L;
        int32_t l_3808[6][2][6] = {{{1L,0xBCF5DC23L,(-1L),(-4L),0xBCF5DC23L,(-4L)},{1L,(-3L),1L,(-4L),(-3L),(-1L)}},{{1L,0x28DE094CL,(-4L),(-4L),0x28DE094CL,1L},{1L,0xBCF5DC23L,(-1L),(-4L),0xBCF5DC23L,(-4L)}},{{1L,(-3L),1L,(-4L),(-3L),(-1L)},{1L,0x28DE094CL,(-4L),(-4L),0x28DE094CL,1L}},{{1L,0xBCF5DC23L,(-1L),(-4L),0xBCF5DC23L,(-4L)},{1L,(-3L),1L,(-4L),(-3L),(-1L)}},{{1L,0x28DE094CL,(-4L),(-4L),0x28DE094CL,1L},{1L,0xBCF5DC23L,(-1L),(-4L),0xBCF5DC23L,(-4L)}},{{1L,(-3L),1L,(-4L),(-3L),(-1L)},{1L,0x28DE094CL,(-4L),(-4L),0x28DE094CL,1L}}};
        int8_t l_3810[7][2][7] = {{{0xBAL,1L,0L,(-1L),(-1L),0L,1L},{0x6DL,0xFFL,0L,7L,0x45L,0x3DL,0x2DL}},{{0L,0xBAL,(-1L),0xBAL,0L,(-1L),4L},{0xB2L,0x14L,1L,7L,1L,7L,1L}},{{4L,4L,0x47L,(-1L),1L,0x5FL,0L},{0xB2L,7L,(-8L),0x8FL,0L,0x19L,1L}},{{0L,0x47L,0xBAL,0L,1L,1L,0L},{0x6DL,0L,0x6DL,0x3DL,1L,8L,0xB2L}},{{0xBAL,0x47L,0L,0x5FL,0L,0x47L,0xBAL},{(-8L),7L,0xB2L,1L,0x45L,8L,0x45L}},{{0x47L,4L,4L,0x47L,(-1L),1L,0x5FL},{1L,0x14L,0xB2L,(-10L),0x6DL,0x19L,1L}},{{(-1L),0xBAL,0L,(-1L),0x5FL,0xBAL,0xBAL},{0xB2L,0L,0L,0L,0xB2L,0x8FL,0x2DL}}};
        int64_t l_3811 = (-1L);
        int32_t l_3813 = 0x54F55556L;
        int64_t l_3817 = 0x12CCE46845E1B085LL;
        int64_t ***l_3873 = &g_2338;
        uint32_t l_3875 = 8UL;
        struct S0 **l_3917 = (void*)0;
        int8_t * const *l_3975 = &g_1006;
        uint16_t l_3994 = 0UL;
        int i, j, k;
        for (i = 0; i < 3; i++)
            l_3799[i] = 0xDEB8L;
        g_1376[g_594] |= ((l_3799[2] ^= 0x6DL) <= ((void*)0 == l_3800));
    }
    (*g_3535) = (l_3589 = l_3589);
    for (g_3919.f2 = 0; (g_3919.f2 < 2); g_3919.f2 = safe_add_func_int32_t_s_s(g_3919.f2, 2))
    { 
        const int16_t *l_4009[6][2][3] = {{{&g_55[0][6],(void*)0,&g_55[0][6]},{&g_57,(void*)0,&g_126}},{{(void*)0,&g_3460.f1.f4,&g_55[0][6]},{(void*)0,&g_55[0][6],&g_3460.f1.f4}},{{&g_57,&g_3460.f1.f4,&g_3460.f1.f4},{&g_55[0][6],(void*)0,&g_55[0][6]}},{{&g_57,(void*)0,&g_126},{(void*)0,&g_3460.f1.f4,&g_55[0][6]}},{{(void*)0,&g_55[0][6],&g_3460.f1.f4},{&g_57,&g_3460.f1.f4,&g_3460.f1.f4}},{{&g_55[0][6],(void*)0,&g_55[0][6]},{&g_57,(void*)0,&g_126}}};
        int8_t *l_4010[2][4][5] = {{{&g_3460.f1.f2,(void*)0,&g_958[2][2][1].f1,(void*)0,&g_3460.f1.f2},{&g_3460.f1.f2,(void*)0,&g_958[2][2][1].f1,(void*)0,&g_3460.f1.f2},{&g_3460.f1.f2,(void*)0,&g_958[2][2][1].f1,(void*)0,&g_3460.f1.f2},{&g_3460.f1.f2,(void*)0,&g_958[2][2][1].f1,(void*)0,&g_3460.f1.f2}},{{&g_3460.f1.f2,(void*)0,&g_958[2][2][1].f1,(void*)0,&g_3460.f1.f2},{&g_3460.f1.f2,(void*)0,&g_958[2][2][1].f1,(void*)0,&g_3460.f1.f2},{&g_3460.f1.f2,(void*)0,&g_958[2][2][1].f1,(void*)0,&g_3460.f1.f2},{&g_3460.f1.f2,(void*)0,&g_958[2][2][1].f1,(void*)0,&g_3460.f1.f2}}};
        struct S1 l_4011 = {-5L,0xEFL,-6L,18446744073709551615UL,0L};
        int64_t ****l_4013 = (void*)0;
        int64_t *****l_4012 = &l_4013;
        int8_t l_4014 = 4L;
        int i, j, k;
        (*p_16) &= (((l_3739[0] &= (&g_2414 == ((0x57L && ((((((safe_add_func_int64_t_s_s(((((((-7L) > 0x26L) && (p_15 = (((p_17 = p_17) | ((247UL >= 255UL) > (*g_2339))) || p_18.f2))) && 0x37D4A057597B358ALL) && p_17) | 0UL), p_18.f0)) , l_4009[4][0][0]) == (void*)0) <= (-1L)) < 0UL) && (-5L))) , (void*)0))) ^ p_18.f3) == 1UL);
        l_4015[0] = p_16;
    }
    return (*p_16);
}



static uint64_t  func_19(int32_t  p_20, uint8_t  p_21, int32_t * p_22, int16_t  p_23)
{ 
    uint8_t l_3547[2];
    const uint8_t *l_3549[7] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
    const uint8_t **l_3548[5] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
    const uint8_t ***l_3550 = (void*)0;
    const uint8_t ***l_3551 = &l_3548[2];
    const uint32_t *l_3553[1][7][3] = {{{&g_1022.f1,&g_2442.f1,&g_1022.f1},{&g_3107,&g_655[1],&g_3107},{&g_1022.f1,&g_2442.f1,&g_1022.f1},{&g_3107,&g_655[1],&g_3107},{&g_1022.f1,&g_2442.f1,&g_1022.f1},{&g_3107,&g_655[1],&g_3107},{&g_1022.f1,&g_2442.f1,&g_1022.f1}}};
    const uint32_t * const *l_3552 = &l_3553[0][4][2];
    int16_t *l_3557[2][6][3] = {{{&g_57,&g_3460.f1.f4,&g_57},{&g_2886.f4,&g_57,&g_2886.f4},{&g_57,&g_3460.f1.f4,&g_57},{&g_2886.f4,&g_57,&g_2886.f4},{&g_57,&g_3460.f1.f4,&g_57},{&g_2886.f4,&g_57,&g_2886.f4}},{{&g_57,&g_3460.f1.f4,&g_57},{&g_2886.f4,&g_57,&g_2886.f4},{&g_57,&g_3460.f1.f4,&g_57},{&g_2886.f4,&g_57,&g_2886.f4},{&g_57,&g_3460.f1.f4,&g_57},{&g_2886.f4,&g_57,&g_2886.f4}}};
    int16_t **l_3556[7][2] = {{&l_3557[0][0][0],(void*)0},{(void*)0,&l_3557[0][0][0]},{(void*)0,(void*)0},{&l_3557[0][0][0],(void*)0},{(void*)0,&l_3557[0][0][0]},{(void*)0,(void*)0},{&l_3557[0][0][0],(void*)0}};
    int i, j, k;
    for (i = 0; i < 2; i++)
        l_3547[i] = 0UL;
    (*g_1416) = func_27(g_3535);
    (*g_3535) = (safe_sub_func_int16_t_s_s(((safe_sub_func_uint32_t_u_u((safe_rshift_func_int16_t_s_s((safe_lshift_func_int8_t_s_u((~((((((safe_lshift_func_uint8_t_u_u(l_3547[1], 6)) || (((*l_3551) = l_3548[2]) == &l_3549[5])) & (((((0L >= (&g_1634 == (((void*)0 != l_3552) , (void*)0))) != p_20) != l_3547[1]) >= 0x6622L) != l_3547[1])) , (void*)0) == (void*)0) >= (-1L))), 3)), p_21)), l_3547[1])) ^ 1L), p_23));
    (*g_3535) |= ((safe_add_func_uint16_t_u_u((l_3549[1] != l_3549[5]), ((void*)0 == l_3556[5][1]))) | 0L);
    return l_3547[1];
}



static int32_t * func_24(struct S0  p_25, uint32_t  p_26)
{ 
    uint8_t l_2644 = 0x15L;
    const int32_t *l_2651 = (void*)0;
    uint64_t *l_2686 = &g_112[0];
    int16_t l_2712 = 0x9B49L;
    int32_t l_2746 = 1L;
    const union U3 ***l_2760 = (void*)0;
    const union U3 ****l_2759 = &l_2760;
    const union U3 *****l_2758 = &l_2759;
    uint32_t l_2761 = 0x780B3F4AL;
    uint16_t l_2763[6][4] = {{65532UL,1UL,1UL,65532UL},{65532UL,0x5BB5L,1UL,0xB372L},{1UL,65532UL,1UL,65535UL},{0UL,1UL,0UL,65535UL},{1UL,65532UL,1UL,0xB372L},{1UL,65532UL,1UL,1UL}};
    struct S0 **l_2771[5] = {&g_1416,&g_1416,&g_1416,&g_1416,&g_1416};
    uint32_t l_2814 = 0xB1B37DDEL;
    int32_t l_2865 = 0x5F37F1F9L;
    int8_t *l_2872 = &g_1022.f4.f1;
    struct S0 l_2895 = {2L,0L,0x49L,1L,4L};
    uint8_t l_2896[4][2][2];
    uint32_t **l_2897 = &g_1722;
    int16_t l_2908 = 0x861FL;
    int32_t l_2913[1][6] = {{2L,2L,(-1L),2L,2L,(-1L)}};
    uint8_t *l_2935 = &l_2896[1][0][1];
    uint64_t l_2936[4][3] = {{0xE30E472C165C7C38LL,0xE30E472C165C7C38LL,18446744073709551612UL},{0xEA9973C61874EA3ELL,18446744073709551612UL,18446744073709551612UL},{18446744073709551612UL,0x8627F7DFB34D85B9LL,0xE7249FC481CBD239LL},{0xEA9973C61874EA3ELL,0x8627F7DFB34D85B9LL,0xEA9973C61874EA3ELL}};
    int64_t l_2957 = 0x090C812C4FBF9759LL;
    int8_t l_2959 = 0x93L;
    union U2 l_2981 = {{0xE845808DL,-1L,-7L,18446744073709551611UL,1L}};
    int64_t ***l_2986[5];
    int32_t l_2989 = 0x68D7DD3AL;
    uint8_t l_3055 = 0x78L;
    uint8_t l_3088 = 0xA5L;
    int32_t l_3093 = 5L;
    union U2 l_3118 = {{-1L,0xEDL,-10L,9UL,0L}};
    int32_t l_3122 = 0xA02A2265L;
    uint16_t **l_3160[6];
    uint8_t l_3197 = 0x9CL;
    uint8_t l_3236 = 0x5DL;
    uint8_t l_3281 = 0x47L;
    int32_t ** const **l_3333 = &g_1598;
    int32_t ** const *** const l_3332[2][2][3] = {{{&l_3333,&l_3333,&l_3333},{&l_3333,&l_3333,&l_3333}},{{&l_3333,&l_3333,&l_3333},{&l_3333,&l_3333,&l_3333}}};
    int8_t l_3385 = (-1L);
    uint32_t l_3418 = 0x7EF6AB0BL;
    uint16_t *****l_3455 = &g_3075;
    struct S1 ***l_3465 = &g_423;
    const uint64_t ***l_3483 = &g_2208;
    const uint64_t ****l_3482 = &l_3483;
    int32_t *****l_3488 = &g_2414;
    uint8_t ***l_3531 = &g_667;
    struct S0 ***l_3532 = &l_2771[0];
    int32_t *l_3533 = &l_2865;
    int32_t *l_3534 = (void*)0;
    int i, j, k;
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 2; k++)
                l_2896[i][j][k] = 1UL;
        }
    }
    for (i = 0; i < 5; i++)
        l_2986[i] = &g_2338;
    for (i = 0; i < 6; i++)
        l_3160[i] = (void*)0;
lbl_3219:
    if (p_25.f2)
    { 
        int32_t l_2642 = (-9L);
        int32_t * const l_2652[4] = {&g_58.f0,&g_58.f0,&g_58.f0,&g_58.f0};
        uint16_t *l_2665 = &g_1984;
        uint16_t **l_2664 = &l_2665;
        int16_t l_2666 = 0xC4B6L;
        struct S0 l_2667 = {0x5E825FBAL,7L,7L,0xA977D70CL,-1L};
        uint64_t ** const *l_2675 = &g_1647;
        uint64_t ** const l_2678 = (void*)0;
        uint64_t ** const *l_2677[5];
        int32_t ***l_2685 = (void*)0;
        uint64_t l_2687 = 6UL;
        int32_t l_2715[1][7];
        int i, j;
        for (i = 0; i < 5; i++)
            l_2677[i] = &l_2678;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 7; j++)
                l_2715[i][j] = 0x94A94C51L;
        }
        for (g_971.f0.f4 = 0; (g_971.f0.f4 <= 0); g_971.f0.f4++)
        { 
            int32_t *l_2643[4][3] = {{&g_1967,&g_1376[2],&g_1376[2]},{&g_58.f0,&g_1967,&g_1967},{&g_1967,&g_1376[2],&g_1376[2]},{&g_58.f0,&g_1967,&g_1967}};
            uint64_t ** const *l_2674 = &g_1647;
            int16_t l_2700 = (-6L);
            uint32_t l_2752 = 4294967289UL;
            int i, j;
            l_2644--;
        }
    }
    else
    { 
        union U3 l_2757 = {{1L,0x9BC30A39L,0x73L,0xEFACAC03L,0L}};
        uint64_t l_2762 = 0xCC69CA8A1FACB4F4LL;
        int32_t *l_2764[6] = {&g_96.f1.f0,&g_96.f1.f0,&g_96.f1.f0,&g_96.f1.f0,&g_96.f1.f0,&g_96.f1.f0};
        uint16_t l_2766 = 0UL;
        int8_t *****l_2774 = &g_2385;
        uint64_t **l_2819 = &g_1284;
        int16_t *l_2830 = &g_1022.f0.f4;
        int16_t **l_2829 = &l_2830;
        int64_t l_2909 = 1L;
        int32_t l_2918[5][1][7] = {{{(-1L),(-1L),0xE1849762L,2L,(-1L),0xBC1CB604L,0xECB96793L}},{{8L,(-1L),0xBC1CB604L,8L,0xECB96793L,8L,0xBC1CB604L}},{{0xF39CA0C6L,0xF39CA0C6L,0L,2L,(-1L),0x836B9889L,0xF39CA0C6L}},{{0xF39CA0C6L,0xBC1CB604L,0xE1849762L,(-1L),0xB42DDA73L,0xB42DDA73L,(-1L)}},{{8L,0xECB96793L,8L,0xBC1CB604L,(-1L),8L,(-1L)}}};
        uint8_t l_2926[4] = {0x49L,0x49L,0x49L,0x49L};
        uint8_t l_2960 = 0x8AL;
        union U3 l_2965 = {{1L,0x259A179EL,0x63L,0L,0L}};
        uint8_t **l_2992 = &g_668[0];
        int8_t * const ***l_3001 = (void*)0;
        uint32_t l_3009 = 0x78E7EBEEL;
        int16_t ***l_3044[5][6][3] = {{{&g_261,&l_2829,&l_2829},{&g_261,(void*)0,(void*)0},{&g_261,(void*)0,&l_2829},{&g_261,(void*)0,(void*)0},{&g_261,(void*)0,&g_261},{&l_2829,(void*)0,(void*)0}},{{&g_261,(void*)0,&g_261},{&g_261,(void*)0,&l_2829},{&g_261,(void*)0,&g_261},{&l_2829,(void*)0,&l_2829},{(void*)0,&l_2829,&g_261},{&g_261,&g_261,(void*)0}},{{&l_2829,(void*)0,&g_261},{&g_261,&l_2829,(void*)0},{(void*)0,(void*)0,&l_2829},{&l_2829,&l_2829,(void*)0},{&g_261,(void*)0,&l_2829},{&g_261,&l_2829,&l_2829}},{{&g_261,(void*)0,&g_261},{&l_2829,&g_261,&l_2829},{&g_261,&l_2829,&l_2829},{&g_261,(void*)0,(void*)0},{&g_261,(void*)0,&l_2829},{&g_261,(void*)0,(void*)0}},{{&g_261,(void*)0,&g_261},{&l_2829,(void*)0,(void*)0},{&g_261,(void*)0,&g_261},{&g_261,(void*)0,&l_2829},{&g_261,(void*)0,&g_261},{&l_2829,(void*)0,&l_2829}}};
        struct S0 * const l_3054 = &l_2895;
        struct S1 *l_3077 = &g_1704;
        int8_t l_3097 = 0xF1L;
        struct S1 ***l_3119 = &g_423;
        int32_t ***** const l_3162 = &g_2414;
        int32_t *l_3167 = &g_2886.f0;
        int32_t l_3188[4];
        int i, j, k;
        for (i = 0; i < 4; i++)
            l_3188[i] = 0x14E05DA0L;
    }
    for (g_971.f4.f2 = 9; (g_971.f4.f2 < 21); ++g_971.f4.f2)
    { 
        int32_t *l_3205 = &g_2886.f0;
        int32_t *l_3206 = &g_1022.f0.f0;
        int32_t *l_3207[2][3];
        uint8_t l_3208 = 0x5FL;
        struct S0 *l_3211 = &g_803.f0;
        uint32_t l_3225 = 0x541071D5L;
        union U3 **l_3249 = &g_119[3][3];
        union U3 l_3262[2][1] = {{{{-3L,0x62EDDEF0L,1L,1L,1L}}},{{{-3L,0x62EDDEF0L,1L,1L,1L}}}};
        int64_t l_3266 = (-1L);
        int64_t ***l_3274 = &g_2338;
        uint32_t l_3296 = 4294967287UL;
        union U2 l_3313[6][2] = {{{{-2L,4L,0xE71EEE46B6A1DDCCLL,0UL,0x97470611AFFE7D89LL}},{{-2L,4L,0xE71EEE46B6A1DDCCLL,0UL,0x97470611AFFE7D89LL}}},{{{0x84DB2B66L,0xB3L,0xF52C32D17424C4F1LL,18446744073709551607UL,4L}},{{-2L,4L,0xE71EEE46B6A1DDCCLL,0UL,0x97470611AFFE7D89LL}}},{{{-2L,4L,0xE71EEE46B6A1DDCCLL,0UL,0x97470611AFFE7D89LL}},{{0x84DB2B66L,0xB3L,0xF52C32D17424C4F1LL,18446744073709551607UL,4L}}},{{{-2L,4L,0xE71EEE46B6A1DDCCLL,0UL,0x97470611AFFE7D89LL}},{{-2L,4L,0xE71EEE46B6A1DDCCLL,0UL,0x97470611AFFE7D89LL}}},{{{0x84DB2B66L,0xB3L,0xF52C32D17424C4F1LL,18446744073709551607UL,4L}},{{-2L,4L,0xE71EEE46B6A1DDCCLL,0UL,0x97470611AFFE7D89LL}}},{{{-2L,4L,0xE71EEE46B6A1DDCCLL,0UL,0x97470611AFFE7D89LL}},{{0x84DB2B66L,0xB3L,0xF52C32D17424C4F1LL,18446744073709551607UL,4L}}}};
        const uint8_t l_3314 = 9UL;
        int64_t l_3329 = 0xA7AC63A3D391585FLL;
        int32_t **l_3339 = &l_3207[1][1];
        int32_t *** const l_3338 = &l_3339;
        int32_t *** const * const l_3337 = &l_3338;
        int32_t *** const * const *l_3336 = &l_3337;
        uint32_t l_3341 = 0UL;
        uint32_t **l_3403 = &g_1722;
        union U2 **l_3430 = (void*)0;
        uint64_t ** const *l_3436 = &g_1647;
        const uint8_t l_3444 = 0xC3L;
        int64_t l_3458 = 1L;
        struct S1 ***l_3463 = &g_423;
        int32_t *****l_3487 = (void*)0;
        const int32_t *l_3513 = (void*)0;
        int32_t *l_3528 = &g_58.f0;
        int i, j;
        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 3; j++)
                l_3207[i][j] = &g_803.f3;
        }
        ++l_3208;
        if ((*l_3205))
            break;
        l_3211 = &p_25;
        for (g_1022.f4.f3 = 0; (g_1022.f4.f3 > 40); g_1022.f4.f3++)
        { 
            int32_t *l_3214 = &l_2913[0][4];
            int32_t **l_3215[3][7][7] = {{{&l_3207[1][1],&l_3214,&l_3214,&l_3207[1][1],&l_3206,&l_3207[1][1],&l_3206},{&l_3214,(void*)0,(void*)0,&l_3214,&l_3205,&l_3206,&l_3205},{&l_3207[1][1],&l_3214,&l_3214,&l_3207[1][1],&l_3206,&l_3207[1][1],&l_3206},{&l_3214,(void*)0,(void*)0,&l_3214,&l_3205,&l_3206,&l_3205},{&l_3207[1][1],&l_3214,&l_3214,&l_3207[1][1],&l_3206,&l_3207[1][1],&l_3206},{&l_3214,(void*)0,(void*)0,&l_3214,&l_3205,&l_3206,&l_3205},{&l_3207[1][1],&l_3214,&l_3214,&l_3207[1][1],&l_3206,&l_3207[1][1],&l_3206}},{{&l_3214,(void*)0,(void*)0,&l_3214,&l_3205,&l_3206,&l_3205},{&l_3207[1][1],&l_3214,&l_3214,&l_3207[1][1],&l_3206,&l_3207[1][1],&l_3206},{&l_3214,(void*)0,(void*)0,&l_3214,&l_3205,&l_3206,&l_3205},{&l_3207[1][1],&l_3214,&l_3214,&l_3207[1][1],&l_3206,&l_3207[1][1],&l_3206},{&l_3214,(void*)0,(void*)0,&l_3214,&l_3205,&l_3206,&l_3205},{&l_3207[1][1],&l_3214,&l_3214,&l_3207[1][1],&l_3206,&l_3207[1][1],&l_3206},{&l_3214,(void*)0,(void*)0,&l_3214,&l_3205,&l_3206,&l_3205}},{{&l_3207[1][1],&l_3214,&l_3214,&l_3207[1][1],&l_3206,&l_3207[1][1],&l_3206},{&l_3214,(void*)0,(void*)0,&l_3214,&l_3205,&l_3206,&l_3205},{&l_3207[1][1],&l_3214,&l_3214,&l_3207[1][1],&l_3206,&l_3207[1][1],&l_3206},{&l_3214,(void*)0,(void*)0,&l_3214,&l_3205,&l_3206,&l_3205},{&l_3207[1][1],&l_3214,&l_3214,&l_3207[1][1],&l_3206,&l_3207[1][1],&l_3206},{&l_3214,(void*)0,(void*)0,&l_3214,&l_3205,&l_3206,&l_3205},{&l_3207[1][1],&l_3214,&l_3214,&l_3207[1][1],&l_3206,&l_3207[1][1],&l_3206}}};
            struct S0 *l_3216 = (void*)0;
            struct S0 *l_3217 = &g_551;
            uint64_t **l_3224 = &l_2686;
            int32_t *l_3239 = (void*)0;
            const uint32_t *l_3245 = &g_2442.f1;
            const uint32_t **l_3244 = &l_3245;
            int32_t *l_3248 = &g_551.f1;
            union U2 *l_3267 = &g_96;
            int32_t l_3305[5] = {0xE461BAAEL,0xE461BAAEL,0xE461BAAEL,0xE461BAAEL,0xE461BAAEL};
            uint16_t l_3306 = 65534UL;
            int i, j, k;
            l_3207[1][2] = l_3214;
            for (g_2886.f3 = 2; (g_2886.f3 >= 0); g_2886.f3 -= 1)
            { 
                int32_t *l_3218 = &g_1376[1];
                for (g_281 = 0; (g_281 <= 2); g_281 += 1)
                { 
                    int i;
                    l_2651 = &g_1376[g_2886.f3];
                    l_3217 = (l_3216 = (void*)0);
                    return l_3218;
                }
                return l_3205;
            }
            if (g_281)
                goto lbl_3219;
        }
        for (g_58.f1 = (-8); (g_58.f1 < (-27)); g_58.f1--)
        { 
            int16_t *l_3319[4][5][1] = {{{(void*)0},{&l_3118.f1.f4},{&l_3118.f1.f4},{(void*)0},{&g_971.f0.f4}},{{&g_58.f4},{(void*)0},{&g_58.f4},{&g_971.f0.f4},{(void*)0}},{{&l_3118.f1.f4},{&l_3118.f1.f4},{(void*)0},{&g_971.f0.f4},{&g_58.f4}},{{(void*)0},{&g_58.f4},{&g_971.f0.f4},{(void*)0},{&l_3118.f1.f4}}};
            uint32_t *l_3327 = &g_1022.f4.f3;
            uint32_t *l_3328[6] = {&g_791,&g_791,&g_791,&g_791,&g_791,&g_791};
            int32_t l_3330[2][7] = {{0xD8679108L,(-7L),0xD8679108L,(-7L),0xD8679108L,(-7L),0xD8679108L},{(-10L),(-10L),(-10L),(-10L),(-10L),(-10L),(-10L)}};
            int32_t l_3331[2][3][2];
            int32_t *** const *l_3335 = &g_2415;
            int32_t *** const * const *l_3334 = &l_3335;
            uint32_t ***l_3356 = &l_2897;
            uint32_t ****l_3355 = &l_3356;
            struct S1 ***l_3427 = &g_423;
            int8_t l_3431 = 0L;
            uint8_t l_3445 = 0x84L;
            uint64_t ****l_3481 = &g_1646[1][3][2];
            int8_t l_3492 = 0x86L;
            uint16_t ** const *l_3505 = &g_2842;
            uint16_t ** const ** const l_3504 = &l_3505;
            uint16_t ** const ** const *l_3503 = &l_3504;
            uint16_t l_3510 = 0x99EAL;
            const int32_t *l_3514 = &l_2865;
            int i, j, k;
            for (i = 0; i < 2; i++)
            {
                for (j = 0; j < 3; j++)
                {
                    for (k = 0; k < 2; k++)
                        l_3331[i][j][k] = 0xA811689DL;
                }
            }
            l_3331[0][2][0] &= ((*l_3205) = (safe_add_func_uint64_t_u_u((l_3313[4][1] , l_3314), ((safe_lshift_func_int16_t_s_s((g_3196 = ((safe_rshift_func_int16_t_s_s((p_25.f4 = (l_2913[0][0] |= 3L)), (safe_div_func_int32_t_s_s((l_3329 |= ((!((void*)0 != &g_261)) ^ ((safe_mul_func_int8_t_s_s((0xF5CA59F6FE03411DLL < (((p_26 |= g_5) , (*l_3249)) == (void*)0)), (**g_667))) < p_25.f3))), 0xDEB151A1L)))) > l_3330[0][5])), p_25.f2)) , 0L))));
            if (g_58.f1)
                goto lbl_3219;
        }
    }
    g_77 = l_3533;
    return l_3534;
}



static struct S0  func_27(int32_t * p_28)
{ 
    uint32_t l_1813 = 0xD9042D12L;
    int32_t l_1820[5];
    struct S1 l_1824 = {-7L,0x13L,-1L,0UL,0L};
    uint16_t *l_1825 = &g_673[0];
    uint64_t ***l_1830 = &g_1647;
    union U3 l_1844[6] = {{{1L,0L,0L,-9L,0x412FL}},{{1L,0L,0L,-9L,0x412FL}},{{1L,0L,0L,-9L,0x412FL}},{{1L,0L,0L,-9L,0x412FL}},{{1L,0L,0L,-9L,0x412FL}},{{1L,0L,0L,-9L,0x412FL}}};
    int8_t **l_1919 = &g_1006;
    struct S0 *l_1921 = &g_58;
    uint32_t l_2061 = 0xC4DB40F9L;
    union U2 l_2101 = {{0x52772010L,-9L,0xEA3A7221EBC5F93BLL,0x41B0CE7AL,0xBB1BB30B137D3709LL}};
    int64_t * const l_2164 = (void*)0;
    int64_t * const *l_2163[4] = {&l_2164,&l_2164,&l_2164,&l_2164};
    int64_t * const ** const l_2162[6] = {&l_2163[2],&l_2163[2],&l_2163[2],&l_2163[2],&l_2163[2],&l_2163[2]};
    int32_t l_2171 = 0xC6319732L;
    uint16_t l_2174 = 1UL;
    const int16_t *l_2212[5] = {&g_2213[0][0][0],&g_2213[0][0][0],&g_2213[0][0][0],&g_2213[0][0][0],&g_2213[0][0][0]};
    int8_t ****l_2302 = &g_1004;
    int8_t ****l_2303 = &g_1004;
    uint64_t l_2310 = 0xD91531C6678C4744LL;
    uint8_t l_2352 = 254UL;
    union U3 ****l_2364 = &g_1089;
    int32_t *l_2370 = &g_971.f3;
    uint16_t l_2379 = 0UL;
    uint8_t l_2436 = 0x3DL;
    uint32_t l_2509 = 0xCBE4D16FL;
    int8_t *****l_2551[3];
    uint32_t ***l_2571 = (void*)0;
    uint32_t ****l_2570 = &l_2571;
    int64_t l_2623 = 0x2F64861A6FD0C9EELL;
    const int16_t l_2624 = (-2L);
    int32_t l_2625 = 0L;
    const uint64_t l_2626 = 0xD189D026C83002A9LL;
    int i;
    for (i = 0; i < 5; i++)
        l_1820[i] = 0x6839470AL;
    for (i = 0; i < 3; i++)
        l_2551[i] = &g_2385;
    return (*g_1416);
}



static int32_t  func_31(int32_t * p_32)
{ 
    int64_t l_1532 = 1L;
    int32_t l_1535 = 1L;
    int32_t l_1541 = (-9L);
    int32_t l_1542 = (-3L);
    int32_t l_1545 = 0x22996CD1L;
    int32_t l_1546 = 0L;
    int32_t l_1548 = (-9L);
    int32_t l_1549 = 0xC3D3BDF9L;
    int32_t l_1550 = (-4L);
    int32_t l_1551 = 0xD32A5059L;
    int32_t l_1552 = (-3L);
    int32_t l_1553 = 4L;
    int32_t l_1554 = 0L;
    int32_t l_1555 = 2L;
    int32_t l_1556[1];
    int32_t * const *l_1600 = (void*)0;
    int32_t * const **l_1599 = &l_1600;
    int64_t l_1604 = 0x79D51EC53E3D79BCLL;
    union U2 * const l_1614 = &g_96;
    uint64_t *l_1624[1];
    uint64_t l_1633 = 18446744073709551615UL;
    uint64_t **l_1645 = &l_1624[0];
    uint64_t ***l_1644[6];
    uint64_t ***l_1648[6][1][3] = {{{&l_1645,&l_1645,&g_1647}},{{&l_1645,&l_1645,&l_1645}},{{&l_1645,&g_1647,&g_1647}},{{&l_1645,&l_1645,&l_1645}},{{&l_1645,&l_1645,&g_1647}},{{&l_1645,&l_1645,&l_1645}}};
    struct S1 l_1728 = {0L,0xA9L,0xE70D8DABD1E4F446LL,18446744073709551610UL,0x577971AA41C62B9ALL};
    int8_t l_1731 = 1L;
    int32_t l_1736 = (-1L);
    int32_t l_1737 = 0L;
    int i, j, k;
    for (i = 0; i < 1; i++)
        l_1556[i] = 0x6679455FL;
    for (i = 0; i < 1; i++)
        l_1624[i] = &g_112[0];
    for (i = 0; i < 6; i++)
        l_1644[i] = &l_1645;
lbl_1749:
    for (g_803.f3 = 0; (g_803.f3 == (-19)); --g_803.f3)
    { 
        int8_t l_1528 = 0xF8L;
        int32_t l_1536 = 0x1BE67D44L;
        int32_t l_1543 = 0x813D9F55L;
        int32_t l_1544 = 0x831F9980L;
        int32_t l_1547[2][5];
        uint8_t l_1557 = 0xADL;
        union U3 l_1569 = {{-4L,-1L,0x7EL,0x1D6ED0C6L,0x55A2L}};
        int32_t * const **l_1602 = &l_1600;
        int8_t *l_1605 = &l_1569.f4.f1;
        int8_t *l_1611 = &g_58.f2;
        const union U2 *l_1615 = &g_96;
        const uint32_t l_1618 = 18446744073709551615UL;
        uint16_t *l_1619[6][1] = {{&g_74},{&g_74},{&g_651[0]},{&g_74},{&g_74},{&g_651[0]}};
        uint64_t *l_1623 = &l_1569.f2;
        uint8_t l_1671 = 0x56L;
        uint32_t l_1710 = 8UL;
        int i, j;
        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 5; j++)
                l_1547[i][j] = 0x9450CC0DL;
        }
        for (g_1022.f0.f0 = 0; (g_1022.f0.f0 <= (-1)); --g_1022.f0.f0)
        { 
            int16_t l_1531 = 0xF439L;
            int32_t *l_1533 = &g_58.f0;
            int32_t *l_1534 = &g_1376[2];
            int32_t *l_1537 = &l_1535;
            int32_t *l_1538 = &g_96.f1.f0;
            int32_t *l_1539 = &g_551.f0;
            int32_t *l_1540[7] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
            int i;
            for (g_971.f0.f0 = 0; (g_971.f0.f0 == (-23)); g_971.f0.f0 = safe_sub_func_int16_t_s_s(g_971.f0.f0, 7))
            { 
                uint32_t l_1527 = 0xB0C986DEL;
                uint32_t *l_1529 = &g_655[0];
                int32_t *l_1530 = &g_1376[2];
                for (g_594 = 0; (g_594 < 23); g_594++)
                { 
                    return l_1527;
                }
                (*l_1530) = (((*l_1529) = ((((*g_1021) , (0x131D8A22L != l_1528)) || g_46) > 0x0AEDL)) && (*g_4));
            }
            l_1531 = (*p_32);
            l_1557++;
            l_1543 ^= (*g_4);
        }
        for (g_96.f1.f4 = 0; (g_96.f1.f4 > (-12)); g_96.f1.f4 = safe_sub_func_int32_t_s_s(g_96.f1.f4, 3))
        { 
            return l_1542;
        }
    }
    if ((l_1556[0] ^ (safe_rshift_func_int8_t_s_s(((l_1728 , g_594) , (0x2FDBL <= ((safe_lshift_func_uint8_t_u_s((l_1728.f0 | (0xF0B7L ^ (l_1545 ^ 0UL))), l_1731)) >= (*g_1722)))), 7))))
    { 
        int32_t **l_1732 = &g_6;
        int32_t l_1733 = 0x1CF909E4L;
        (*l_1732) = (void*)0;
        return l_1733;
    }
    else
    { 
        int32_t *l_1734 = &l_1553;
        int32_t *l_1735[2];
        uint32_t l_1738 = 0xB78220C2L;
        struct S1 l_1796 = {0L,0x9AL,0x9B14677FC65E6E51LL,0x56F83ACBL,1L};
        int i;
        for (i = 0; i < 2; i++)
            l_1735[i] = &l_1556[0];
lbl_1750:
        l_1738--;
        for (g_96.f1.f4 = 0; (g_96.f1.f4 >= 0); g_96.f1.f4 -= 1)
        { 
            const struct S0 *l_1741 = &g_551;
            const struct S0 **l_1742 = &l_1741;
            int16_t l_1744 = (-1L);
            int32_t l_1745 = 0x6F36BFF6L;
            int32_t l_1755 = (-1L);
            int32_t l_1758 = 2L;
            int32_t l_1761 = 5L;
            int32_t l_1765 = 1L;
            int32_t l_1766 = 0xE7754739L;
            int32_t l_1767 = 0x084760A3L;
            int32_t l_1768 = 1L;
            int32_t l_1769 = (-1L);
            int32_t l_1772 = 0x053C54D8L;
            int32_t l_1775 = 0x72385724L;
            int32_t l_1777 = 0xFE48175DL;
            int32_t l_1779 = 0x2868C9FEL;
            int32_t l_1780 = 0x8A2A33B9L;
            int32_t l_1782 = (-6L);
            int i;
            if (g_673[g_96.f1.f4])
                break;
            (*l_1742) = l_1741;
            (*g_1416) = (*g_1416);
            for (g_296.f2 = 0; (g_296.f2 >= 0); g_296.f2 -= 1)
            { 
                uint32_t l_1746[2];
                int32_t l_1753 = 0xAE9F787FL;
                int32_t l_1754 = (-6L);
                int32_t l_1756 = 1L;
                int32_t l_1757 = (-2L);
                int32_t l_1759 = 1L;
                int32_t l_1760 = (-10L);
                int32_t l_1762 = 0x2348301CL;
                int32_t l_1771[6][2][2] = {{{0x8D5F89BFL,0x7D914827L},{0x8D5F89BFL,0x8D5F89BFL}},{{0x7D914827L,0x8D5F89BFL},{0x8D5F89BFL,0x7D914827L}},{{0x8D5F89BFL,0x8D5F89BFL},{0x7D914827L,0x8D5F89BFL}},{{0x8D5F89BFL,0x7D914827L},{0x8D5F89BFL,0x8D5F89BFL}},{{0x7D914827L,0x8D5F89BFL},{0x8D5F89BFL,0x7D914827L}},{{0x8D5F89BFL,0x8D5F89BFL},{0x7D914827L,0x8D5F89BFL}}};
                uint32_t l_1783[7][6][2] = {{{4294967295UL,0x5D8FCCA3L},{0UL,0xF43E2654L},{4294967290UL,4UL},{4294967288UL,4294967295UL},{4294967289UL,0xC75E616AL},{4294967286UL,4294967286UL}},{{0xF313E1B7L,4294967286UL},{4294967286UL,0xC75E616AL},{4294967289UL,4294967295UL},{4294967288UL,4UL},{4294967290UL,0xF43E2654L},{0UL,0x5D8FCCA3L}},{{4294967295UL,4294967289UL},{4294967286UL,0x80E454EAL},{4294967295UL,5UL},{4294967291UL,4294967291UL},{0xB39C106DL,4294967295UL},{5UL,4294967295UL}},{{1UL,4294967287UL},{0xE92D085EL,1UL},{0xC75E616AL,4294967295UL},{0xC75E616AL,1UL},{0xE92D085EL,4294967287UL},{1UL,4294967295UL}},{{5UL,4294967295UL},{0xB39C106DL,4294967291UL},{4294967291UL,5UL},{4294967295UL,0x80E454EAL},{4294967286UL,4294967289UL},{4294967295UL,0x5D8FCCA3L}},{{0UL,0xF43E2654L},{4294967290UL,4UL},{4294967288UL,4294967295UL},{4294967289UL,0xC75E616AL},{4294967286UL,4294967286UL},{0xF313E1B7L,4294967286UL}},{{4294967286UL,0xC75E616AL},{4294967289UL,4294967295UL},{4294967288UL,4UL},{4294967290UL,0xF43E2654L},{0UL,0x5D8FCCA3L},{4294967295UL,4294967289UL}}};
                int i, j, k;
                for (i = 0; i < 2; i++)
                    l_1746[i] = 0x2E0892D9L;
                for (g_803.f4.f1 = 0; (g_803.f4.f1 <= 0); g_803.f4.f1 += 1)
                { 
                    int32_t l_1743 = 0xB3EAF973L;
                    int i;
                    l_1746[0]++;
                }
                if (g_551.f1)
                    goto lbl_1749;
                if ((g_673[g_96.f1.f4] & (-1L)))
                { 
                    if (l_1744)
                        break;
                    if (g_551.f2)
                        goto lbl_1750;
                    return (*p_32);
                }
                else
                { 
                    int32_t l_1763 = 0x95D4345DL;
                    int32_t l_1764 = 0xAFB42D7BL;
                    int32_t l_1770 = 0x2ECFC7FAL;
                    int32_t l_1773 = 0x2293DB73L;
                    int32_t l_1774 = 0x11858B69L;
                    int32_t l_1776 = 3L;
                    int32_t l_1778 = 0x4E06F25EL;
                    int32_t l_1781 = 0x9359B988L;
                    int i;
                    l_1556[g_96.f1.f4] &= (l_1746[0] > (safe_lshift_func_uint8_t_u_s(((*g_1722) , 255UL), g_673[g_96.f1.f4])));
                    if (l_1745)
                        break;
                    (*l_1734) = (*p_32);
                    ++l_1783[4][3][0];
                }
            }
        }
        for (g_57 = (-14); (g_57 >= (-21)); --g_57)
        { 
            uint32_t l_1792 = 4294967295UL;
            int32_t l_1793 = 0xA77FB2E9L;
            int16_t *l_1794[7] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
            int32_t l_1795 = (-5L);
            const uint32_t l_1804 = 4294967290UL;
            uint8_t *l_1805 = (void*)0;
            uint8_t *l_1806 = &g_1807;
            int i;
            (*l_1734) = (((*l_1806) &= (((safe_sub_func_int8_t_s_s(((g_55[0][5] ^= (((safe_rshift_func_int16_t_s_s((((l_1795 = ((l_1792 == ((****g_1088) , ((**g_1005) = (l_1793 ^= (l_1792 >= 0x63L))))) < 0L)) != ((l_1796 , (safe_lshift_func_uint16_t_u_s(((safe_mod_func_uint8_t_u_u((((safe_add_func_uint8_t_u_u(((~l_1792) != g_96.f1.f1), 1UL)) , (void*)0) != &g_655[1]), l_1792)) | g_281), (*l_1734)))) ^ (**g_667))) , (*l_1734)), l_1792)) < g_401[2]) ^ l_1792)) && l_1795), l_1804)) & (-1L)) <= (-1L))) | l_1804);
            return (*g_4);
        }
    }
    return (*p_32);
}



static int32_t * func_33(int8_t  p_34, int8_t  p_35, struct S0  p_36)
{ 
    uint16_t l_557 = 0UL;
    int32_t l_581 = (-7L);
    int32_t l_592 = 0x9AB7FCF0L;
    union U2 l_605 = {{1L,0xF5L,-1L,2UL,-1L}};
    int32_t l_629[6] = {(-8L),(-8L),(-8L),(-8L),(-8L),(-8L)};
    int64_t l_653[5];
    const uint8_t *l_659 = &g_144;
    const uint8_t ** const l_658[1][3] = {{&l_659,&l_659,&l_659}};
    const uint32_t l_693 = 0xBB784D67L;
    uint8_t l_727 = 0x4CL;
    struct S0 *l_738 = &g_551;
    uint32_t l_755 = 4294967293UL;
    uint64_t l_780 = 18446744073709551615UL;
    int64_t l_787 = 0L;
    int32_t l_790 = 0x90BF7DD7L;
    uint32_t l_798 = 0xBC97C1F4L;
    const union U3 *l_802 = &g_803;
    const union U3 **l_801 = &l_802;
    struct S1 **l_830[7] = {&g_424,&g_424,&g_424,&g_424,&g_424,&g_424,&g_424};
    union U3 **l_854 = (void*)0;
    union U3 ***l_853 = &l_854;
    union U3 ****l_852 = &l_853;
    union U3 *****l_851[4][7][3] = {{{&l_852,&l_852,&l_852},{&l_852,&l_852,&l_852},{&l_852,&l_852,&l_852},{&l_852,&l_852,&l_852},{(void*)0,&l_852,&l_852},{&l_852,&l_852,&l_852},{&l_852,(void*)0,&l_852}},{{&l_852,&l_852,&l_852},{&l_852,&l_852,&l_852},{&l_852,&l_852,&l_852},{&l_852,&l_852,&l_852},{&l_852,&l_852,&l_852},{&l_852,&l_852,&l_852},{(void*)0,&l_852,&l_852}},{{&l_852,&l_852,&l_852},{&l_852,(void*)0,&l_852},{&l_852,&l_852,&l_852},{&l_852,&l_852,&l_852},{&l_852,&l_852,&l_852},{&l_852,&l_852,&l_852},{&l_852,&l_852,&l_852}},{{&l_852,&l_852,&l_852},{(void*)0,&l_852,&l_852},{&l_852,&l_852,&l_852},{&l_852,(void*)0,&l_852},{&l_852,&l_852,&l_852},{&l_852,&l_852,&l_852},{&l_852,&l_852,&l_852}}};
    int32_t ** const l_903 = &g_6;
    int8_t *l_965 = &l_605.f1.f2;
    int32_t l_981[7] = {0L,0L,9L,0L,0L,9L,0L};
    int16_t l_982[6][1] = {{(-1L)},{0x18FCL},{(-1L)},{(-1L)},{0x18FCL},{(-1L)}};
    int8_t l_983 = 0L;
    int8_t ***l_1008 = &g_1005;
    int8_t ***l_1009 = &g_1005;
    const int32_t l_1061 = 0xBDF81A19L;
    const uint64_t l_1082 = 0x044CF540B543660DLL;
    int8_t l_1144 = 8L;
    uint8_t l_1174 = 0xD4L;
    int16_t l_1238 = 1L;
    int32_t l_1239[7];
    int32_t *l_1273[1][6];
    uint64_t *l_1287[2][1][6];
    int16_t l_1322 = 0x32F9L;
    uint32_t l_1331[7][3];
    const int32_t *l_1513 = &g_1514;
    int i, j, k;
    for (i = 0; i < 5; i++)
        l_653[i] = 0x9E0B09F58E9CAD0BLL;
    for (i = 0; i < 7; i++)
        l_1239[i] = 0L;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 6; j++)
            l_1273[i][j] = &l_592;
    }
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 6; k++)
                l_1287[i][j][k] = &g_1022.f2;
        }
    }
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 3; j++)
            l_1331[i][j] = 0UL;
    }
    for (g_551.f2 = 7; (g_551.f2 > (-26)); --g_551.f2)
    { 
        struct S1 *l_568 = &g_296;
        int32_t l_583 = 0L;
        int32_t l_585 = (-9L);
        int32_t l_590 = 0xD8F475FCL;
        int16_t l_593[2];
        union U2 *l_606 = &l_605;
        uint16_t *l_617[3];
        int32_t l_633[2];
        union U3 *l_699[7];
        int32_t *l_722[4][6] = {{&l_583,&l_583,&l_583,&l_583,&l_583,&l_583},{&l_583,&l_583,&l_583,&l_583,&l_583,&l_583},{&l_583,&l_583,&l_583,&l_583,&l_583,&l_583},{&l_583,&l_583,&l_583,&l_583,&l_583,&l_583}};
        const struct S0 *l_739 = (void*)0;
        int8_t l_788 = 0xD1L;
        const union U3 **l_805 = &l_802;
        int8_t * const l_875 = &g_58.f2;
        int8_t * const * const l_874[4] = {&l_875,&l_875,&l_875,&l_875};
        uint32_t l_882 = 0x404C2863L;
        int i, j;
        for (i = 0; i < 2; i++)
            l_593[i] = 1L;
        for (i = 0; i < 3; i++)
            l_617[i] = &l_557;
        for (i = 0; i < 2; i++)
            l_633[i] = 0L;
        for (i = 0; i < 7; i++)
            l_699[i] = (void*)0;
    }
    if (((((p_36.f0 , l_965) != (void*)0) > (safe_mod_func_int32_t_s_s(6L, (0x7019L && (p_34 >= (safe_sub_func_int32_t_s_s((&l_659 != (void*)0), (**l_903)))))))) | 3L))
    { 
        union U3 *l_970 = &g_971;
        int32_t *l_972[6] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
        int i;
        g_96.f1.f0 &= p_36.f3;
        g_403[0] &= ((l_970 = &g_803) == (p_36 , (g_119[1][3] = (void*)0)));
    }
    else
    { 
        union U3 l_975[4] = {{{0x044E5EE4L,1L,-3L,-6L,3L}},{{0x044E5EE4L,1L,-3L,-6L,3L}},{{0x044E5EE4L,1L,-3L,-6L,3L}},{{0x044E5EE4L,1L,-3L,-6L,3L}}};
        int32_t *l_977[7][2][5] = {{{&l_581,&l_629[1],&g_971.f0.f0,&l_629[1],&l_581},{&g_971.f0.f0,&g_5,(void*)0,&g_403[0],(void*)0}},{{&g_803.f0.f0,&g_803.f0.f0,&g_971.f0.f0,&l_581,&l_975[2].f0.f0},{&g_5,&g_971.f0.f0,&g_971.f0.f0,&g_5,(void*)0}},{{&l_629[1],&l_581,&g_971.f0.f0,&g_971.f0.f0,&l_581},{(void*)0,&g_971.f0.f0,&g_803.f3,&g_403[0],&g_403[0]}},{{&l_592,&g_803.f0.f0,&l_592,&g_971.f0.f0,&g_971.f0.f0},{&g_403[0],&g_5,&g_403[0],&g_5,&g_403[0]}},{{&l_592,&l_629[1],&g_803.f0.f0,&l_581,&g_803.f0.f0},{(void*)0,(void*)0,&g_403[0],&g_403[0],&l_975[2].f0.f0}},{{&l_592,&l_581,&l_581,&l_592,&l_975[2].f0.f0},{&g_971.f0.f0,&g_803.f3,&g_403[0],&g_403[0],&g_803.f3}},{{&l_975[2].f0.f0,&l_581,&g_971.f0.f0,&g_803.f0.f0,&g_803.f0.f0},{&g_403[0],&l_975[2].f0.f0,&g_403[0],&g_403[0],(void*)0}}};
        int32_t *l_980 = &l_592;
        uint32_t l_984 = 4294967292UL;
        int i, j, k;
        for (g_58.f2 = (-8); (g_58.f2 <= (-24)); g_58.f2 = safe_sub_func_int32_t_s_s(g_58.f2, 2))
        { 
            struct S0 **l_976 = &l_738;
            (*l_976) = (l_975[2] , &g_551);
        }
        g_971.f0.f0 ^= (*g_4);
        for (g_296.f2 = 0; (g_296.f2 > (-29)); g_296.f2 = safe_sub_func_uint64_t_u_u(g_296.f2, 8))
        { 
            (*l_738) = g_96.f1;
        }
        (*l_903) = l_980;
        l_984--;
    }
    if ((**l_903))
    { 
        uint64_t l_987 = 18446744073709551611UL;
        ++l_987;
    }
    else
    { 
        return &g_5;
    }
    return &g_403[0];
}



static struct S0  func_39(const int32_t * p_40, int32_t * const  p_41, uint8_t  p_42, struct S0  p_43)
{ 
    uint8_t l_80 = 0x23L;
    uint64_t l_97[4];
    int32_t l_100 = 0xFD0E8CD9L;
    int32_t l_106[5] = {5L,5L,5L,5L,5L};
    int16_t *l_133 = (void*)0;
    uint64_t l_190 = 0x5BDAF9DE4F922914LL;
    struct S1 *l_295 = &g_296;
    int64_t *l_341 = &g_78[0][0][0];
    union U2 *l_342 = &g_96;
    int32_t l_378[7];
    union U3 * const *l_379 = &g_119[1][3];
    uint32_t l_454 = 6UL;
    const uint32_t * const l_509 = &g_11;
    union U3 l_547 = {{2L,0xD4F5B720L,1L,1L,0xE5CAL}};
    uint8_t *l_549 = (void*)0;
    uint8_t * const *l_548 = &l_549;
    int i;
    for (i = 0; i < 4; i++)
        l_97[i] = 0x1517482C4BD6597FLL;
    for (i = 0; i < 7; i++)
        l_378[i] = (-1L);
lbl_85:
    for (g_11 = (-5); (g_11 >= 34); g_11 = safe_add_func_uint64_t_u_u(g_11, 1))
    { 
        int32_t *l_62 = &g_58.f0;
        int32_t *l_63 = &g_58.f0;
        int32_t l_64 = 0x5CB58B1CL;
        int32_t *l_65 = &g_58.f0;
        int32_t *l_66 = (void*)0;
        int32_t *l_67 = &g_58.f0;
        int32_t *l_68 = &l_64;
        int32_t *l_69 = &g_58.f0;
        int32_t l_70 = 0xACF27260L;
        int32_t *l_71 = (void*)0;
        int32_t *l_72 = (void*)0;
        int32_t *l_73[1][1];
        int32_t **l_83 = (void*)0;
        int32_t **l_84 = &l_62;
        int i, j;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 1; j++)
                l_73[i][j] = &g_58.f0;
        }
        g_74--;
        g_77 = p_40;
        if (g_74)
            goto lbl_85;
        (*l_67) = (*g_4);
        ++l_80;
        (*l_84) = &g_5;
    }
    for (p_43.f3 = 0; (p_43.f3 <= 0); p_43.f3 += 1)
    { 
        struct S0 l_87 = {0x768238A5L,0xA621C2DFL,0xB1L,0L,0x27EDL};
        int16_t *l_132[3][6] = {{&l_87.f4,&l_87.f4,&l_87.f4,&l_87.f4,&l_87.f4,&l_87.f4},{&l_87.f4,&l_87.f4,&l_87.f4,&l_87.f4,&l_87.f4,&l_87.f4},{&l_87.f4,&l_87.f4,&l_87.f4,&l_87.f4,&l_87.f4,&l_87.f4}};
        union U3 *l_136[2][2] = {{(void*)0,(void*)0},{(void*)0,(void*)0}};
        uint64_t l_158 = 0x1A6D5F070AD09C90LL;
        uint32_t l_187 = 4294967288UL;
        int32_t *l_193 = &g_96.f1.f0;
        int8_t *l_194 = &g_58.f2;
        union U2 l_218 = {{0x16806315L,-7L,0x93A2B08F23623D71LL,0x1B547D56L,-9L}};
        int8_t l_306[6][5] = {{1L,4L,0x39L,0L,4L},{1L,(-7L),0x81L,0L,(-7L)},{0xAFL,(-7L),0x39L,0x39L,(-7L)},{1L,4L,0x39L,0L,4L},{1L,(-7L),0x81L,0L,(-7L)},{0xAFL,(-7L),0x39L,0x39L,(-7L)}};
        int16_t l_356 = 0L;
        uint32_t l_383[1];
        uint8_t l_404[5];
        int32_t l_486[2];
        uint8_t l_488[3][1][7] = {{{1UL,1UL,1UL,1UL,1UL,1UL,1UL}},{{0x01L,255UL,0x01L,255UL,0x01L,255UL,0x01L}},{{1UL,1UL,1UL,1UL,1UL,1UL,1UL}}};
        union U3 **l_504 = &l_136[1][1];
        union U3 ***l_503 = &l_504;
        int i, j, k;
        for (i = 0; i < 1; i++)
            l_383[i] = 4294967294UL;
        for (i = 0; i < 5; i++)
            l_404[i] = 255UL;
        for (i = 0; i < 2; i++)
            l_486[i] = 0x012F46FFL;
        for (p_43.f1 = 2; (p_43.f1 >= 0); p_43.f1 -= 1)
        { 
            struct S0 *l_86[5][2][5] = {{{&g_58,&g_58,&g_58,&g_58,&g_58},{&g_58,&g_58,&g_58,&g_58,(void*)0}},{{&g_58,(void*)0,&g_58,&g_58,&g_58},{&g_58,&g_58,&g_58,&g_58,&g_58}},{{&g_58,&g_58,&g_58,&g_58,(void*)0},{&g_58,&g_58,&g_58,&g_58,&g_58}},{{&g_58,&g_58,&g_58,&g_58,&g_58},{(void*)0,&g_58,&g_58,&g_58,(void*)0}},{{&g_58,(void*)0,&g_58,&g_58,&g_58},{&g_58,&g_58,&g_58,&g_58,&g_58}}};
            int i, j, k;
            if (g_55[p_43.f3][(p_43.f1 + 2)])
                break;
            g_58 = (l_87 = g_58);
            return l_87;
        }
        for (g_58.f1 = 0; (g_58.f1 <= 2); g_58.f1 += 1)
        { 
            union U2 *l_99 = &g_96;
            union U2 **l_98 = &l_99;
            int i, j;
            p_40 = (void*)0;
            if (g_55[p_43.f3][(p_43.f3 + 4)])
                break;
            l_87.f0 |= ((0x74A040150F896C2ALL & (safe_mul_func_int8_t_s_s((((safe_lshift_func_int8_t_s_u(((0x6D45L > (((((safe_mod_func_int16_t_s_s(((g_55[p_43.f3][(p_43.f3 + 3)] , g_55[p_43.f3][(g_58.f1 + 4)]) , (g_55[p_43.f3][(p_43.f3 + 4)] <= ((1L ^ (safe_lshift_func_uint8_t_u_u((g_96 , p_42), 3))) || 1UL))), g_96.f1.f0)) & g_58.f1) == l_97[1]) > 0L) || g_55[p_43.f3][(g_58.f1 + 4)])) >= g_55[p_43.f3][(p_43.f3 + 3)]), g_55[p_43.f3][(p_43.f3 + 3)])) && p_43.f0) , g_55[p_43.f3][(g_58.f1 + 4)]), g_96.f0.f4))) < g_58.f4);
            (*l_98) = &g_96;
            for (p_43.f0 = 0; (p_43.f0 <= 0); p_43.f0 += 1)
            { 
                for (g_96.f1.f0 = 0; (g_96.f1.f0 <= 2); g_96.f1.f0 += 1)
                { 
                    int32_t *l_101 = &l_100;
                    int32_t *l_102 = &g_58.f0;
                    int32_t *l_103 = &l_87.f0;
                    int32_t *l_104 = &l_87.f0;
                    int32_t *l_105 = &l_100;
                    int32_t *l_107 = &l_87.f0;
                    int32_t *l_108 = &g_58.f0;
                    int32_t *l_109 = &l_106[1];
                    int32_t *l_110 = &l_100;
                    int32_t *l_111[3][1][5] = {{{&l_100,&g_5,&l_100,&g_5,&l_100}},{{&l_87.f0,&l_87.f0,&l_87.f0,&l_87.f0,&l_87.f0}},{{&l_100,&g_5,&l_100,&g_5,&l_100}}};
                    const int32_t **l_115 = (void*)0;
                    const int32_t **l_116 = (void*)0;
                    const int32_t **l_117 = &g_77;
                    int i, j, k;
                    --g_112[0];
                    (*l_117) = p_40;
                    if (g_79[g_96.f1.f0][(p_43.f0 + 2)][(p_43.f0 + 1)])
                        continue;
                    (*l_98) = &g_96;
                }
                if (l_87.f3)
                    goto lbl_85;
            }
        }
    }
    return g_58;
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_5, "g_5", print_hash_value);
    transparent_crc(g_10, "g_10", print_hash_value);
    transparent_crc(g_11, "g_11", print_hash_value);
    transparent_crc(g_46, "g_46", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 7; j++)
        {
            transparent_crc(g_55[i][j], "g_55[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_57, "g_57", print_hash_value);
    transparent_crc(g_58.f0, "g_58.f0", print_hash_value);
    transparent_crc(g_58.f1, "g_58.f1", print_hash_value);
    transparent_crc(g_58.f2, "g_58.f2", print_hash_value);
    transparent_crc(g_58.f3, "g_58.f3", print_hash_value);
    transparent_crc(g_58.f4, "g_58.f4", print_hash_value);
    transparent_crc(g_74, "g_74", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 1; k++)
            {
                transparent_crc(g_78[i][j][k], "g_78[i][j][k]", print_hash_value);

            }
        }
    }
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 3; k++)
            {
                transparent_crc(g_79[i][j][k], "g_79[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_96.f0.f0, "g_96.f0.f0", print_hash_value);
    transparent_crc(g_96.f0.f1, "g_96.f0.f1", print_hash_value);
    transparent_crc(g_96.f0.f2, "g_96.f0.f2", print_hash_value);
    transparent_crc(g_96.f0.f3, "g_96.f0.f3", print_hash_value);
    transparent_crc(g_96.f0.f4, "g_96.f0.f4", print_hash_value);
    transparent_crc(g_96.f1.f0, "g_96.f1.f0", print_hash_value);
    transparent_crc(g_96.f1.f1, "g_96.f1.f1", print_hash_value);
    transparent_crc(g_96.f1.f2, "g_96.f1.f2", print_hash_value);
    transparent_crc(g_96.f1.f3, "g_96.f1.f3", print_hash_value);
    transparent_crc(g_96.f1.f4, "g_96.f1.f4", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_112[i], "g_112[i]", print_hash_value);

    }
    transparent_crc(g_126, "g_126", print_hash_value);
    transparent_crc(g_144, "g_144", print_hash_value);
    transparent_crc(g_281, "g_281", print_hash_value);
    transparent_crc(g_296.f0, "g_296.f0", print_hash_value);
    transparent_crc(g_296.f1, "g_296.f1", print_hash_value);
    transparent_crc(g_296.f2, "g_296.f2", print_hash_value);
    transparent_crc(g_296.f3, "g_296.f3", print_hash_value);
    transparent_crc(g_296.f4, "g_296.f4", print_hash_value);
    transparent_crc(g_328, "g_328", print_hash_value);
    transparent_crc(g_387, "g_387", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_401[i], "g_401[i]", print_hash_value);

    }
    transparent_crc(g_402, "g_402", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_403[i], "g_403[i]", print_hash_value);

    }
    transparent_crc(g_551.f0, "g_551.f0", print_hash_value);
    transparent_crc(g_551.f1, "g_551.f1", print_hash_value);
    transparent_crc(g_551.f2, "g_551.f2", print_hash_value);
    transparent_crc(g_551.f3, "g_551.f3", print_hash_value);
    transparent_crc(g_551.f4, "g_551.f4", print_hash_value);
    transparent_crc(g_564, "g_564", print_hash_value);
    transparent_crc(g_594, "g_594", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_651[i], "g_651[i]", print_hash_value);

    }
    for (i = 0; i < 6; i++)
    {
        transparent_crc(g_655[i], "g_655[i]", print_hash_value);

    }
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_673[i], "g_673[i]", print_hash_value);

    }
    transparent_crc(g_791, "g_791", print_hash_value);
    transparent_crc(g_803.f0.f0, "g_803.f0.f0", print_hash_value);
    transparent_crc(g_803.f0.f1, "g_803.f0.f1", print_hash_value);
    transparent_crc(g_803.f0.f2, "g_803.f0.f2", print_hash_value);
    transparent_crc(g_803.f0.f3, "g_803.f0.f3", print_hash_value);
    transparent_crc(g_803.f0.f4, "g_803.f0.f4", print_hash_value);
    transparent_crc(g_803.f1, "g_803.f1", print_hash_value);
    transparent_crc(g_803.f2, "g_803.f2", print_hash_value);
    transparent_crc(g_803.f3, "g_803.f3", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 5; j++)
        {
            for (k = 0; k < 3; k++)
            {
                transparent_crc(g_958[i][j][k].f0, "g_958[i][j][k].f0", print_hash_value);
                transparent_crc(g_958[i][j][k].f1, "g_958[i][j][k].f1", print_hash_value);
                transparent_crc(g_958[i][j][k].f2, "g_958[i][j][k].f2", print_hash_value);
                transparent_crc(g_958[i][j][k].f3, "g_958[i][j][k].f3", print_hash_value);
                transparent_crc(g_958[i][j][k].f4, "g_958[i][j][k].f4", print_hash_value);

            }
        }
    }
    transparent_crc(g_971.f0.f0, "g_971.f0.f0", print_hash_value);
    transparent_crc(g_971.f0.f1, "g_971.f0.f1", print_hash_value);
    transparent_crc(g_971.f0.f2, "g_971.f0.f2", print_hash_value);
    transparent_crc(g_971.f0.f3, "g_971.f0.f3", print_hash_value);
    transparent_crc(g_971.f0.f4, "g_971.f0.f4", print_hash_value);
    transparent_crc(g_971.f1, "g_971.f1", print_hash_value);
    transparent_crc(g_971.f2, "g_971.f2", print_hash_value);
    transparent_crc(g_971.f3, "g_971.f3", print_hash_value);
    transparent_crc(g_1003, "g_1003", print_hash_value);
    transparent_crc(g_1022.f0.f0, "g_1022.f0.f0", print_hash_value);
    transparent_crc(g_1022.f0.f1, "g_1022.f0.f1", print_hash_value);
    transparent_crc(g_1022.f0.f2, "g_1022.f0.f2", print_hash_value);
    transparent_crc(g_1022.f0.f3, "g_1022.f0.f3", print_hash_value);
    transparent_crc(g_1022.f0.f4, "g_1022.f0.f4", print_hash_value);
    transparent_crc(g_1022.f1, "g_1022.f1", print_hash_value);
    transparent_crc(g_1022.f2, "g_1022.f2", print_hash_value);
    transparent_crc(g_1022.f3, "g_1022.f3", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_1187[i], "g_1187[i]", print_hash_value);

    }
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_1376[i], "g_1376[i]", print_hash_value);

    }
    transparent_crc(g_1514, "g_1514", print_hash_value);
    transparent_crc(g_1634, "g_1634", print_hash_value);
    transparent_crc(g_1704.f0, "g_1704.f0", print_hash_value);
    transparent_crc(g_1704.f1, "g_1704.f1", print_hash_value);
    transparent_crc(g_1704.f2, "g_1704.f2", print_hash_value);
    transparent_crc(g_1704.f3, "g_1704.f3", print_hash_value);
    transparent_crc(g_1704.f4, "g_1704.f4", print_hash_value);
    transparent_crc(g_1807, "g_1807", print_hash_value);
    transparent_crc(g_1967, "g_1967", print_hash_value);
    transparent_crc(g_1984, "g_1984", print_hash_value);
    transparent_crc(g_1989, "g_1989", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 5; j++)
        {
            for (k = 0; k < 1; k++)
            {
                transparent_crc(g_2213[i][j][k], "g_2213[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_2327, "g_2327", print_hash_value);
    transparent_crc(g_2343, "g_2343", print_hash_value);
    transparent_crc(g_2442.f0.f0, "g_2442.f0.f0", print_hash_value);
    transparent_crc(g_2442.f0.f1, "g_2442.f0.f1", print_hash_value);
    transparent_crc(g_2442.f0.f2, "g_2442.f0.f2", print_hash_value);
    transparent_crc(g_2442.f0.f3, "g_2442.f0.f3", print_hash_value);
    transparent_crc(g_2442.f0.f4, "g_2442.f0.f4", print_hash_value);
    transparent_crc(g_2442.f1, "g_2442.f1", print_hash_value);
    transparent_crc(g_2442.f2, "g_2442.f2", print_hash_value);
    transparent_crc(g_2442.f3, "g_2442.f3", print_hash_value);
    transparent_crc(g_2886.f0, "g_2886.f0", print_hash_value);
    transparent_crc(g_2886.f1, "g_2886.f1", print_hash_value);
    transparent_crc(g_2886.f2, "g_2886.f2", print_hash_value);
    transparent_crc(g_2886.f3, "g_2886.f3", print_hash_value);
    transparent_crc(g_2886.f4, "g_2886.f4", print_hash_value);
    transparent_crc(g_2914, "g_2914", print_hash_value);
    transparent_crc(g_2947.f0.f0, "g_2947.f0.f0", print_hash_value);
    transparent_crc(g_2947.f0.f1, "g_2947.f0.f1", print_hash_value);
    transparent_crc(g_2947.f0.f2, "g_2947.f0.f2", print_hash_value);
    transparent_crc(g_2947.f0.f3, "g_2947.f0.f3", print_hash_value);
    transparent_crc(g_2947.f0.f4, "g_2947.f0.f4", print_hash_value);
    transparent_crc(g_2947.f1, "g_2947.f1", print_hash_value);
    transparent_crc(g_2947.f2, "g_2947.f2", print_hash_value);
    transparent_crc(g_2947.f3, "g_2947.f3", print_hash_value);
    transparent_crc(g_2958, "g_2958", print_hash_value);
    transparent_crc(g_3107, "g_3107", print_hash_value);
    transparent_crc(g_3196, "g_3196", print_hash_value);
    transparent_crc(g_3395, "g_3395", print_hash_value);
    transparent_crc(g_3454, "g_3454", print_hash_value);
    transparent_crc(g_3460.f0.f0, "g_3460.f0.f0", print_hash_value);
    transparent_crc(g_3460.f0.f1, "g_3460.f0.f1", print_hash_value);
    transparent_crc(g_3460.f0.f2, "g_3460.f0.f2", print_hash_value);
    transparent_crc(g_3460.f0.f3, "g_3460.f0.f3", print_hash_value);
    transparent_crc(g_3460.f0.f4, "g_3460.f0.f4", print_hash_value);
    transparent_crc(g_3460.f1.f0, "g_3460.f1.f0", print_hash_value);
    transparent_crc(g_3460.f1.f1, "g_3460.f1.f1", print_hash_value);
    transparent_crc(g_3460.f1.f2, "g_3460.f1.f2", print_hash_value);
    transparent_crc(g_3460.f1.f3, "g_3460.f1.f3", print_hash_value);
    transparent_crc(g_3460.f1.f4, "g_3460.f1.f4", print_hash_value);
    transparent_crc(g_3660, "g_3660", print_hash_value);
    transparent_crc(g_3809, "g_3809", print_hash_value);
    transparent_crc(g_3919.f0, "g_3919.f0", print_hash_value);
    transparent_crc(g_3919.f1, "g_3919.f1", print_hash_value);
    transparent_crc(g_3919.f2, "g_3919.f2", print_hash_value);
    transparent_crc(g_3919.f3, "g_3919.f3", print_hash_value);
    transparent_crc(g_3919.f4, "g_3919.f4", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
