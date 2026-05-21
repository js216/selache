// SPDX-License-Identifier: MIT
// cctest_csmith_fa49d999.c --- cctest case csmith_fa49d999 (csmith seed 4199143833)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x13bcebf8 */

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

// Options:   -s 4199143833 -o /tmp/csmith_gen_canm10e5/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


#pragma pack(push)
#pragma pack(1)
struct S0 {
   int8_t  f0;
   int32_t  f1;
   uint32_t  f2;
   const uint32_t  f3;
};
#pragma pack(pop)

#pragma pack(push)
#pragma pack(1)
struct S1 {
   uint8_t  f0;
   int64_t  f1;
   int16_t  f2;
};
#pragma pack(pop)

#pragma pack(push)
#pragma pack(1)
struct S2 {
   uint8_t  f0;
   struct S1  f1;
   uint64_t  f2;
   int32_t  f3;
   uint32_t  f4;
   uint64_t  f5;
};
#pragma pack(pop)

#pragma pack(push)
#pragma pack(1)
struct S3 {
   int32_t  f0;
   int32_t  f1;
   struct S1  f2;
};
#pragma pack(pop)

#pragma pack(push)
#pragma pack(1)
struct S4 {
   uint32_t  f0;
};
#pragma pack(pop)

struct S5 {
   uint8_t  f0;
   int64_t  f1;
   struct S3  f2;
};

union U6 {
   const int32_t  f0;
   uint16_t  f1;
   uint32_t  f2;
   const struct S5  f3;
};


static struct S5 g_21[3][4][1] = {{{{0xBAL,0xC160EC253D5AB883LL,{3L,0x9C826FFEL,{1UL,0x734826AAF09D89C1LL,0x50D5L}}}},{{255UL,6L,{0x231A2955L,1L,{0x4CL,0x16104DBC0BA889B0LL,0xF673L}}}},{{7UL,0xAAA4F69A75015E0CLL,{0xA1033631L,4L,{2UL,-1L,0L}}}},{{0x36L,9L,{-1L,0xE2FC3C73L,{0UL,0x519C81B93497140DLL,-1L}}}}},{{{7UL,0xAAA4F69A75015E0CLL,{0xA1033631L,4L,{2UL,-1L,0L}}}},{{255UL,6L,{0x231A2955L,1L,{0x4CL,0x16104DBC0BA889B0LL,0xF673L}}}},{{0xBAL,0xC160EC253D5AB883LL,{3L,0x9C826FFEL,{1UL,0x734826AAF09D89C1LL,0x50D5L}}}},{{255UL,6L,{0x231A2955L,1L,{0x4CL,0x16104DBC0BA889B0LL,0xF673L}}}}},{{{7UL,0xAAA4F69A75015E0CLL,{0xA1033631L,4L,{2UL,-1L,0L}}}},{{0x36L,9L,{-1L,0xE2FC3C73L,{0UL,0x519C81B93497140DLL,-1L}}}},{{7UL,0xAAA4F69A75015E0CLL,{0xA1033631L,4L,{2UL,-1L,0L}}}},{{255UL,6L,{0x231A2955L,1L,{0x4CL,0x16104DBC0BA889B0LL,0xF673L}}}}}};
static struct S2 g_28 = {0xFEL,{0UL,-10L,-9L},0x3FD5B128C85C7EEBLL,4L,4294967292UL,0x6DD7547197E38F94LL};
static int64_t g_48 = 0xD83399F167E6262DLL;
static uint8_t g_49 = 1UL;
static struct S4 g_56 = {1UL};
static union U6 g_58 = {5L};
static uint32_t g_62 = 0x5734C638L;
static int8_t g_66 = (-1L);
static uint16_t g_68 = 0x60E5L;
static int32_t g_73 = 0L;
static int16_t g_74 = 0x6214L;
static int8_t g_79 = 2L;
static uint8_t g_84 = 0xA1L;
static uint8_t g_112 = 0x11L;
static uint32_t g_117[4][5] = {{0x2A304AACL,3UL,3UL,0x2A304AACL,0x21B169A6L},{1UL,0x8B5D631BL,0x8B5D631BL,1UL,18446744073709551607UL},{0x2A304AACL,3UL,3UL,0x2A304AACL,0x21B169A6L},{1UL,0x8B5D631BL,0x8B5D631BL,1UL,18446744073709551607UL}};
static int8_t g_123 = 0xDFL;
static uint32_t g_124 = 1UL;
static struct S3 g_190 = {0x7CFBBA97L,0x4F8E9901L,{1UL,0xF727E752563AE6E0LL,-1L}};
static uint64_t g_245 = 1UL;
static struct S2 g_246 = {254UL,{254UL,0x750AC2831C9156F2LL,0L},18446744073709551615UL,-1L,4294967292UL,0x96B88E8A56362364LL};
static uint64_t g_324 = 1UL;



static int64_t  func_1(void);
static uint64_t  func_8(int32_t  p_9, struct S2  p_10, int32_t  p_11, int8_t  p_12);
static int32_t  func_13(union U6  p_14, struct S4  p_15);
static union U6  func_16(struct S5  p_17, uint64_t  p_18, struct S2  p_19, int16_t  p_20);




static int64_t  func_1(void)
{ 
    int64_t l_26 = 0x5108D7EBC4D5916FLL;
    int32_t l_27[1][4];
    int32_t l_427 = 0x430DF948L;
    int i, j;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 4; j++)
            l_27[i][j] = 0x51BB39D9L;
    }
    l_427 &= ((safe_div_func_int64_t_s_s((g_21[1][2][0].f2.f2.f1 = (safe_mod_func_uint8_t_u_u((safe_mod_func_int16_t_s_s((func_8(func_13(func_16(g_21[1][2][0], (safe_rshift_func_int16_t_s_u(0x391DL, (0x93B57206L < (l_27[0][2] = (((safe_mul_func_int8_t_s_s(l_26, g_21[1][2][0].f2.f2.f0)) < l_26) && 0x1EE15D11E9056FF3LL))))), g_28, g_21[1][2][0].f1), g_56), g_246, g_190.f2.f0, l_26) != g_66), l_26)), g_190.f2.f0))), g_190.f2.f2)) , l_27[0][3]);
    return l_427;
}



static uint64_t  func_8(int32_t  p_9, struct S2  p_10, int32_t  p_11, int8_t  p_12)
{ 
    uint8_t l_247 = 7UL;
    struct S3 l_250 = {-10L,0x3A168278L,{250UL,4L,2L}};
    union U6 l_279 = {-1L};
    struct S4 l_285[4] = {{0x08573710L},{0x08573710L},{0x08573710L},{0x08573710L}};
    int16_t l_292 = 7L;
    struct S3 l_293[3] = {{0xFF438287L,-5L,{0xD8L,1L,-7L}},{0xFF438287L,-5L,{0xD8L,1L,-7L}},{0xFF438287L,-5L,{0xD8L,1L,-7L}}};
    uint64_t l_323 = 0UL;
    const struct S5 l_329 = {0x9EL,8L,{0x29DEEC05L,0xC7C8E040L,{255UL,-1L,0x32D9L}}};
    uint64_t l_424 = 0x278F0932EC395B7CLL;
    int i;
lbl_346:
    for (g_246.f1.f0 = 0; (g_246.f1.f0 <= 0); g_246.f1.f0 += 1)
    { 
        int64_t l_252 = 0xF3CDA21B0A5AFFB3LL;
        int32_t l_253[1][4] = {{0x282962CDL,0x282962CDL,0x282962CDL,0x282962CDL}};
        struct S0 l_278[1][1][4] = {{{{0xC1L,0xCD837A46L,0x7E4473CCL,0x1EF512BBL},{0xC1L,0xCD837A46L,0x7E4473CCL,0x1EF512BBL},{0xC1L,0xCD837A46L,0x7E4473CCL,0x1EF512BBL},{0xC1L,0xCD837A46L,0x7E4473CCL,0x1EF512BBL}}}};
        int32_t l_280 = 0x542A9594L;
        struct S5 l_294 = {0xCBL,8L,{0x2DD593ABL,1L,{0x8DL,0x676D7E888E8E41D3LL,0xEBB0L}}};
        int i, j, k;
        l_247++;
        l_250 = l_250;
        l_253[0][3] &= ((+((l_252 > 1L) , l_250.f2.f1)) < (0xEFBAL ^ p_11));
        for (p_10.f2 = 0; (p_10.f2 <= 0); p_10.f2 += 1)
        { 
            int32_t l_310 = (-8L);
            int i, j;
            if ((safe_mod_func_uint64_t_u_u((safe_mul_func_uint8_t_u_u(((safe_mul_func_int16_t_s_s(8L, (((l_250.f1 ^= (((safe_div_func_uint8_t_u_u((p_10.f1.f0 = ((l_253[0][3] = (safe_mod_func_uint16_t_u_u((g_117[(p_10.f2 + 1)][(p_10.f2 + 2)] <= (safe_rshift_func_uint16_t_u_u(l_253[0][1], (safe_rshift_func_uint8_t_u_s(l_250.f2.f1, 4))))), l_252))) , 249UL)), p_10.f1.f2)) && p_10.f4) >= g_117[3][4])) ^ 9L) > 1UL))) || g_49), (-1L))), p_10.f1.f1)))
            { 
                return p_10.f1.f0;
            }
            else
            { 
                uint64_t l_270[3];
                int32_t l_273 = 0xA099E6CCL;
                int32_t l_282 = 0x36B5C2FCL;
                int i;
                for (i = 0; i < 3; i++)
                    l_270[i] = 18446744073709551609UL;
                l_273 ^= (l_253[0][2] = (((g_56.f0 &= (safe_rshift_func_int16_t_s_u(l_270[2], 14))) == (((safe_mul_func_uint8_t_u_u(p_10.f4, g_21[1][2][0].f2.f0)) && ((g_21[1][2][0].f2.f0 && g_246.f5) != 1UL)) & g_21[1][2][0].f2.f1)) > p_10.f5));
                l_282 ^= (l_250.f1 = (((p_10.f1.f1 = (safe_mod_func_uint64_t_u_u((((safe_mul_func_int16_t_s_s(((l_278[0][0][3] , l_279) , (l_280 == (~g_246.f5))), l_273)) && 0xF0D5L) > p_10.f1.f0), 6L))) <= g_246.f0) <= p_12));
            }
            if ((safe_rshift_func_int16_t_s_s((l_285[0] , (l_292 = (safe_lshift_func_int8_t_s_u(((((((safe_lshift_func_int16_t_s_s(g_190.f2.f2, (safe_add_func_int8_t_s_s((p_12 |= (-1L)), g_28.f1.f2)))) == l_280) == p_10.f1.f1) ^ l_285[0].f0) | 8L) || g_117[(p_10.f2 + 1)][(p_10.f2 + 2)]), p_10.f1.f1)))), 13)))
            { 
                p_11 = 0x87608F30L;
                l_293[0] = l_293[0];
                if (g_28.f5)
                    break;
            }
            else
            { 
                g_21[1][1][0] = l_294;
                if (p_10.f2)
                    break;
                p_11 = (l_293[0].f1 = (0xBD5D3CAC74BC94A9LL < (p_9 >= (g_58.f1 ^= g_246.f4))));
            }
            p_11 = ((((((!((((safe_add_func_uint16_t_u_u((safe_mod_func_int64_t_s_s((safe_sub_func_int64_t_s_s(l_293[0].f1, l_293[0].f1)), 18446744073709551615UL)), p_10.f1.f1)) != p_10.f0) ^ p_10.f1.f0) , l_279.f1)) || 0L) , 0xE61A973819C18BA1LL) > g_21[1][2][0].f2.f0) < l_280) || p_10.f0);
            for (g_246.f1.f1 = 0; (g_246.f1.f1 <= 0); g_246.f1.f1 += 1)
            { 
                int32_t l_308 = 0L;
                p_11 = (safe_mul_func_uint8_t_u_u(p_10.f0, ((p_10.f1.f1 = l_308) && (!(l_310 <= (safe_add_func_uint32_t_u_u(((((safe_mul_func_uint8_t_u_u(g_21[1][2][0].f2.f2.f0, g_28.f0)) || 0x42B9B84BL) > 4294967290UL) > 0xC8L), p_9)))))));
                p_11 = (((g_246.f5 |= ((((safe_add_func_uint16_t_u_u((safe_rshift_func_int8_t_s_s((safe_add_func_uint32_t_u_u((((g_74 &= (((p_9 & (l_323 && ((4294967290UL || (0xA5L <= l_310)) > l_247))) ^ l_308) ^ l_294.f1)) || g_21[1][2][0].f2.f1) , 9UL), p_10.f1.f1)), 1)), l_253[0][1])) & (-1L)) && 0x228643DBL) > l_308)) || g_324) , 0L);
                return l_294.f2.f2.f0;
            }
        }
    }
    if ((safe_div_func_uint64_t_u_u(((safe_mul_func_uint16_t_u_u(((l_250.f2.f1 , (((l_279.f0 == (p_10.f1.f2 == ((((g_68 , g_21[1][2][0].f2.f2.f2) > l_250.f0) | 0x6C28FBAF897A3DE9LL) , 0xA0B91226L))) , (-5L)) , l_329)) , 0x2B7DL), l_329.f2.f2.f0)) | p_10.f1.f2), g_21[1][2][0].f0)))
    { 
        uint8_t l_330 = 255UL;
        return l_330;
    }
    else
    { 
        uint16_t l_370 = 0xA3D8L;
        int32_t l_384[1][2][4] = {{{0x600B08A2L,0x600B08A2L,0x600B08A2L,0x600B08A2L},{0x600B08A2L,0x600B08A2L,0x600B08A2L,0x600B08A2L}}};
        struct S2 l_392 = {1UL,{2UL,-1L,8L},1UL,9L,4294967292UL,0x8DD55F3FAD2A690DLL};
        uint16_t l_394[1];
        uint64_t l_419 = 1UL;
        uint64_t l_421[1][4] = {{0x7923DDB08EBD5520LL,0x7923DDB08EBD5520LL,0x7923DDB08EBD5520LL,0x7923DDB08EBD5520LL}};
        int i, j, k;
        for (i = 0; i < 1; i++)
            l_394[i] = 65535UL;
        if (((((!((g_79 = (safe_div_func_int16_t_s_s(((safe_mul_func_uint16_t_u_u(((safe_mod_func_uint64_t_u_u((safe_div_func_uint32_t_u_u((l_329.f1 , (safe_rshift_func_uint8_t_u_u((0x5261853AL > (((g_190.f0 = (safe_mod_func_int16_t_s_s((p_10.f1.f2 && l_293[0].f2.f1), g_21[1][2][0].f0))) || p_11) && p_12)), 2))), g_84)), p_10.f3)) != p_9), p_10.f1.f0)) <= 1L), p_9))) , g_28.f1.f0)) > 0x8FL) < 0x3BEDF84B7907BC61LL) & p_10.f4))
        { 
            uint64_t l_351 = 9UL;
            int32_t l_361[1][1][4];
            int i, j, k;
            for (i = 0; i < 1; i++)
            {
                for (j = 0; j < 1; j++)
                {
                    for (k = 0; k < 4; k++)
                        l_361[i][j][k] = 5L;
                }
            }
            for (g_246.f1.f0 = 0; (g_246.f1.f0 < 22); g_246.f1.f0 = safe_add_func_uint32_t_u_u(g_246.f1.f0, 3))
            { 
                struct S0 l_356[5] = {{0x8DL,0xAE29910FL,0x9383B1D1L,0UL},{0x8DL,0xAE29910FL,0x9383B1D1L,0UL},{0x8DL,0xAE29910FL,0x9383B1D1L,0UL},{0x8DL,0xAE29910FL,0x9383B1D1L,0UL},{0x8DL,0xAE29910FL,0x9383B1D1L,0UL}};
                int i;
                if (l_329.f2.f2.f1)
                    goto lbl_346;
                l_361[0][0][0] |= (safe_lshift_func_int8_t_s_u(((l_351 , ((((((safe_mul_func_uint8_t_u_u(g_48, (((safe_lshift_func_int16_t_s_s(((l_356[2] , (safe_lshift_func_uint16_t_u_s((safe_mod_func_int8_t_s_s(((-10L) && p_11), 0xCCL)), p_10.f1.f1))) , p_10.f1.f0), 1)) || g_28.f2) , p_11))) >= 9L) , p_10.f3) >= l_356[2].f1) & 1L) >= g_21[1][2][0].f2.f2.f1)) ^ 0UL), l_356[2].f1));
            }
        }
        else
        { 
            int64_t l_379 = 0x21A7CDE2C682F577LL;
            if ((safe_mul_func_uint8_t_u_u((safe_add_func_uint16_t_u_u((safe_rshift_func_int8_t_s_u((l_370 > (g_246.f5 >= (safe_add_func_int8_t_s_s(p_10.f1.f2, g_28.f1.f1)))), l_370)), p_10.f2)), p_11)))
            { 
                uint32_t l_380[1][5] = {{0UL,0UL,0UL,0UL,0UL}};
                int16_t l_381 = (-1L);
                int i, j;
                p_11 = (((safe_rshift_func_uint8_t_u_s(((g_21[1][2][0].f2.f1 = (safe_rshift_func_uint8_t_u_s((p_10.f0 |= g_190.f2.f1), 0))) & (g_21[1][2][0].f2.f0 = (safe_mul_func_int8_t_s_s(((p_10.f1.f2 = g_246.f3) , ((p_10.f5 , (-1L)) , l_379)), l_380[0][4])))), g_190.f0)) & l_381) ^ p_10.f5);
            }
            else
            { 
                return p_10.f4;
            }
        }
        g_190.f1 = (l_293[0].f2.f0 && ((((((p_10.f2 && (safe_add_func_uint64_t_u_u((l_384[0][1][1] |= g_21[1][2][0].f2.f1), (safe_div_func_uint32_t_u_u((safe_mul_func_int16_t_s_s(((0L & 0L) >= 0xA4L), l_370)), l_370))))) | g_28.f3) > l_370) >= 1UL) , 0UL) & g_28.f1.f2));
        if ((0xA3L == ((g_246.f1.f0 ^ g_246.f1.f2) | 4294967294UL)))
        { 
            int8_t l_391[4][1][4] = {{{0x81L,(-1L),0x20L,(-1L)}},{{6L,0L,1L,0x20L}},{{(-1L),0L,0L,(-1L)}},{{0L,(-1L),6L,0x81L}}};
            int32_t l_402[1][4][5] = {{{0x5A970C42L,0x5A970C42L,0x5A970C42L,0x5A970C42L,0x5A970C42L},{(-6L),(-6L),(-6L),(-6L),(-6L)},{0x5A970C42L,0x5A970C42L,0x5A970C42L,0x5A970C42L,0x5A970C42L},{(-6L),(-6L),(-6L),(-6L),(-6L)}}};
            int i, j, k;
            for (l_250.f1 = 0; (l_250.f1 >= 0); l_250.f1 -= 1)
            { 
                p_11 = (safe_rshift_func_uint8_t_u_u(l_391[1][0][0], (g_48 != p_10.f4)));
                l_392 = p_10;
                p_11 |= ((safe_unary_minus_func_int16_t_s(l_394[0])) | ((g_123 = p_10.f4) | (safe_mod_func_int64_t_s_s(g_28.f4, g_21[1][2][0].f1))));
            }
            for (g_28.f1.f1 = 23; (g_28.f1.f1 != 12); g_28.f1.f1--)
            { 
                int32_t l_401 = 0x96956225L;
                l_402[0][2][4] = ((((((((p_10.f1.f1 = (safe_rshift_func_uint16_t_u_u(65535UL, 4))) & ((-1L) != (g_21[1][2][0].f2.f0 &= l_401))) && (l_391[0][0][1] | 65528UL)) && l_285[0].f0) == p_10.f1.f2) >= g_117[3][4]) ^ 0x1C80154BB3CD95A6LL) & p_10.f3);
            }
        }
        else
        { 
            int64_t l_420 = 0x8A4CEA6C601C56F9LL;
            int32_t l_423 = 0x82EAC3F7L;
            for (g_68 = 0; (g_68 == 32); g_68 = safe_add_func_uint64_t_u_u(g_68, 6))
            { 
                int8_t l_422 = (-1L);
                l_423 &= (((0xA6L & p_10.f3) || (safe_sub_func_int16_t_s_s((safe_lshift_func_uint8_t_u_s((((((safe_mod_func_uint16_t_u_u((((g_190.f1 = (safe_rshift_func_uint8_t_u_u(((l_250.f1 = (safe_rshift_func_int16_t_s_s((((g_190.f0 || ((safe_rshift_func_uint8_t_u_u(((safe_rshift_func_uint8_t_u_s((l_419 > g_117[1][1]), 1)) & p_10.f1.f1), g_49)) > 0x0F967181L)) & 1L) && p_9), 12))) , l_293[0].f2.f2), l_420))) <= l_421[0][2]) == l_422), g_112)) <= g_246.f0) || l_420) > p_10.f0) < (-1L)), 6)), l_250.f0))) < g_124);
                l_424++;
            }
        }
    }
    return p_11;
}



static int32_t  func_13(union U6  p_14, struct S4  p_15)
{ 
    struct S3 l_191[3] = {{9L,1L,{255UL,0xDD303C422D24AC7BLL,9L}},{9L,1L,{255UL,0xDD303C422D24AC7BLL,9L}},{9L,1L,{255UL,0xDD303C422D24AC7BLL,9L}}};
    int32_t l_196 = 0xF4C28BF4L;
    int i;
    l_196 = (0x2CCD7554994F792DLL > (p_15.f0 <= (safe_add_func_uint16_t_u_u(((l_191[2] = g_190) , (safe_mul_func_int8_t_s_s((safe_add_func_uint16_t_u_u(g_28.f4, g_28.f3)), 0xD0L))), g_66))));
    if (((safe_lshift_func_int16_t_s_s((!((g_21[1][2][0].f2.f2.f0 == 9L) | (safe_mul_func_uint8_t_u_u(0x8FL, (l_191[2].f1 | l_191[2].f2.f1))))), g_58.f0)) || p_14.f1))
    { 
        struct S1 l_202 = {0xF8L,0xA34D0982049661D3LL,0L};
        g_28.f1 = l_202;
    }
    else
    { 
        int32_t l_217 = 0xF18CD610L;
        int32_t l_218 = 0x77DF4945L;
        struct S1 l_221 = {255UL,-5L,5L};
        struct S0 l_227 = {0xAAL,0x0B6EC3E8L,0UL,0xD22A38F9L};
        for (g_73 = 0; (g_73 < 13); g_73 = safe_add_func_int16_t_s_s(g_73, 4))
        { 
            uint8_t l_215 = 1UL;
            int32_t l_216 = 0L;
            g_190.f0 = (safe_mod_func_uint32_t_u_u((l_191[2].f0 != (safe_mod_func_int8_t_s_s(((l_218 = ((safe_mul_func_int8_t_s_s((safe_div_func_uint16_t_u_u((l_216 = ((((safe_div_func_uint8_t_u_u((g_21[1][2][0].f1 == l_215), g_123)) <= 0xE80DE5B823450267LL) >= (-1L)) || p_14.f2)), g_56.f0)), l_217)) | p_14.f2)) && g_123), 0xBDL))), p_14.f0));
            if (((((safe_lshift_func_uint8_t_u_u(((l_221 , (l_191[2].f0 = (l_221.f2 || 0L))) && (~(safe_sub_func_int8_t_s_s((g_56.f0 < p_15.f0), (-1L))))), 0)) && l_191[2].f0) == l_216) < l_215))
            { 
                struct S0 l_230 = {-2L,0x9C671D18L,0x1A36315FL,0x035ACF56L};
                g_21[1][2][0].f2.f0 |= (safe_add_func_uint16_t_u_u((l_227 , g_190.f2.f1), (safe_mul_func_int8_t_s_s(((l_230 , (l_216 = (safe_mul_func_uint16_t_u_u((safe_rshift_func_int16_t_s_s((safe_mul_func_int8_t_s_s((safe_add_func_uint16_t_u_u((safe_mul_func_int16_t_s_s((safe_div_func_uint16_t_u_u((safe_add_func_uint16_t_u_u(1UL, 0xEAA1L)), 65528UL)), l_215)), p_15.f0)), l_215)), g_58.f2)), 0x5507L)))) == p_15.f0), g_28.f1.f2))));
            }
            else
            { 
                return g_21[1][2][0].f0;
            }
        }
    }
    return g_245;
}



static union U6  func_16(struct S5  p_17, uint64_t  p_18, struct S2  p_19, int16_t  p_20)
{ 
    int16_t l_45 = 1L;
    int32_t l_46 = 0xF7FA13A8L;
    struct S1 l_71 = {1UL,0L,0xA8B9L};
    int32_t l_80[4] = {0x7A0C8E20L,0x7A0C8E20L,0x7A0C8E20L,0x7A0C8E20L};
    uint64_t l_184 = 1UL;
    union U6 l_187 = {0x02B22ED0L};
    int i;
lbl_148:
    for (g_28.f3 = (-10); (g_28.f3 >= 2); g_28.f3 = safe_add_func_int64_t_s_s(g_28.f3, 5))
    { 
        int32_t l_44 = (-1L);
        int32_t l_75 = 0x170B72F3L;
        int32_t l_81 = 0xB271CF4EL;
        int32_t l_82 = 4L;
        int32_t l_83 = (-3L);
        if ((((g_28.f1.f0 ^ ((!(safe_add_func_uint8_t_u_u((((safe_sub_func_uint64_t_u_u((safe_rshift_func_int8_t_s_s(((~((safe_div_func_int16_t_s_s((l_44 = (l_45 |= (~(safe_add_func_int8_t_s_s((6L | p_17.f2.f2.f2), (((g_21[1][2][0].f2.f1 | g_28.f1.f1) , g_21[1][2][0].f2.f2.f0) ^ l_44)))))), g_21[1][2][0].f2.f2.f0)) == l_46)) <= l_46), p_19.f1.f0)), l_46)) ^ g_28.f0) , 0UL), g_28.f2))) & l_46)) & g_28.f1.f1) >= g_28.f3))
        { 
            int64_t l_47 = 0x73BC91A03DC57991LL;
            int8_t l_59 = (-9L);
            int32_t l_67[1][3][3] = {{{5L,5L,5L},{0x66400F4CL,0x66400F4CL,0x66400F4CL},{5L,5L,5L}}};
            int i, j, k;
            --g_49;
            for (g_28.f2 = (-20); (g_28.f2 <= 19); g_28.f2 = safe_add_func_int32_t_s_s(g_28.f2, 6))
            { 
                int32_t l_57 = 0x8FFC0A99L;
                p_17.f2.f0 &= (safe_lshift_func_int8_t_s_u((l_44 = (l_57 = (g_56 , l_45))), 2));
                return g_58;
            }
            if (p_17.f2.f1)
            { 
                uint64_t l_60 = 0x5564AC20F127D3B8LL;
                int32_t l_61 = (-10L);
                int32_t l_65 = (-4L);
                g_21[1][2][0].f2.f0 = (l_59 & l_60);
                --g_62;
                g_68--;
            }
            else
            { 
                int16_t l_72 = 0xED7DL;
                int32_t l_76 = 0xF61366E2L;
                int32_t l_77 = 1L;
                int32_t l_78[2][2][4] = {{{0xF676F390L,0xF676F390L,1L,0x36DABD80L},{0x36DABD80L,0xEB8E47B4L,1L,0xEB8E47B4L}},{{0xF676F390L,0x459F6D15L,0xA25DA633L,1L},{0xEB8E47B4L,0x459F6D15L,0x459F6D15L,0xEB8E47B4L}}};
                int i, j, k;
                l_71 = g_21[1][2][0].f2.f2;
                --g_84;
                l_80[0] ^= (+((safe_div_func_int8_t_s_s((g_21[1][2][0].f2.f2.f0 < (safe_add_func_uint8_t_u_u((safe_sub_func_uint8_t_u_u(0x3EL, ((((safe_mod_func_int64_t_s_s((p_17.f2.f2.f1 = (safe_div_func_int16_t_s_s((safe_lshift_func_uint16_t_u_s(((safe_mul_func_uint8_t_u_u(((safe_mod_func_uint32_t_u_u(p_19.f1.f2, ((l_78[0][0][1] = (((safe_rshift_func_uint8_t_u_u((g_21[0][0][0] , l_72), 0)) && g_21[1][2][0].f2.f2.f1) < g_66)) && l_72))) & g_74), g_21[1][2][0].f1)) , g_28.f0), l_83)), g_28.f1.f1))), 0x16F66F7480E96666LL)) | 1UL) , g_28.f5) , g_74))), p_19.f4))), g_21[1][2][0].f1)) == l_83));
            }
        }
        else
        { 
            int32_t l_106 = 0L;
            uint32_t l_111 = 0xC8CA251FL;
            int32_t l_115 = 1L;
            int32_t l_120 = 0x988BF1FBL;
            int32_t l_121[5];
            int i;
            for (i = 0; i < 5; i++)
                l_121[i] = 0x5536E5BAL;
            if ((g_66 || (((((l_106 || p_17.f2.f1) && ((((safe_rshift_func_uint8_t_u_u((safe_div_func_int16_t_s_s((l_83 < g_48), l_106)), 4)) , p_19.f4) > l_111) > 0x890EL)) <= g_28.f0) ^ l_111) & p_17.f2.f2.f1)))
            { 
                int32_t l_116 = (-1L);
                g_112--;
                ++g_117[3][4];
            }
            else
            { 
                int64_t l_122[3];
                int i;
                for (i = 0; i < 3; i++)
                    l_122[i] = 9L;
                p_17.f2.f0 = (-5L);
                ++g_124;
            }
            for (g_28.f2 = 0; (g_28.f2 != 23); ++g_28.f2)
            { 
                uint32_t l_129[2];
                int i;
                for (i = 0; i < 2; i++)
                    l_129[i] = 18446744073709551607UL;
                l_129[0] ^= (l_81 = 0xAC2647FDL);
            }
            if ((g_21[1][2][0].f2.f1 = ((g_28.f1.f2 = (safe_div_func_int16_t_s_s(((-6L) != (((l_80[3] = ((safe_lshift_func_int16_t_s_u(((((g_74 = g_21[1][2][0].f1) && l_44) <= (((((((safe_sub_func_int16_t_s_s((+(g_21[1][2][0].f2.f2.f1 |= (safe_add_func_uint32_t_u_u((safe_rshift_func_uint8_t_u_s(l_82, 3)), g_28.f1.f2)))), p_18)) != l_111) , l_120) | 0x01L) | l_46) & g_56.f0) <= l_80[3])) <= 0x65L), 1)) <= l_44)) & 0L) <= g_68)), 65531UL))) , l_44)))
            { 
                l_80[1] = (g_21[1][2][0].f2.f1 = (p_17.f2.f1 = (p_17.f1 <= p_19.f2)));
            }
            else
            { 
                p_17.f2.f1 |= 0x0E48530EL;
                if (g_28.f0)
                    goto lbl_148;
            }
        }
        p_17.f2.f1 = (18446744073709551615UL == (safe_rshift_func_int8_t_s_u((l_81 || g_28.f2), (!(safe_rshift_func_uint16_t_u_u((safe_rshift_func_int16_t_s_u(((((p_19.f5 = 0xCA1ED449BA733CD5LL) < 0x25993BAFFBA643C3LL) & 0x9BL) < p_17.f2.f2.f1), 10)), 4))))));
    }
    for (g_68 = (-28); (g_68 != 28); g_68 = safe_add_func_uint64_t_u_u(g_68, 7))
    { 
        uint32_t l_158 = 18446744073709551615UL;
        int32_t l_159 = 1L;
        int32_t l_160 = 0x2DF446B0L;
        for (p_19.f5 = 0; (p_19.f5 < 43); p_19.f5++)
        { 
            union U6 l_153 = {0x1F84FDC9L};
            p_17.f2.f1 ^= (l_153 , (l_160 = (safe_sub_func_int64_t_s_s((g_21[1][2][0].f1 ^= (l_45 > l_153.f0)), (safe_mul_func_int8_t_s_s((l_159 |= l_158), g_66))))));
            l_159 = ((p_19.f2 == g_58.f1) < g_28.f1.f1);
        }
        l_80[3] = g_68;
        l_46 ^= (safe_lshift_func_uint8_t_u_s((g_79 > (safe_rshift_func_int8_t_s_u((safe_rshift_func_int8_t_s_s((+(safe_mul_func_uint16_t_u_u(((g_28.f0 > (p_19.f1.f1 = (safe_mul_func_uint8_t_u_u((safe_mul_func_uint8_t_u_u((safe_add_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_s((safe_lshift_func_int8_t_s_u(p_19.f1.f1, ((safe_mod_func_uint64_t_u_u((p_19.f1.f2 != (-7L)), l_80[1])) < (-2L)))), p_19.f4)), 0L)), 2UL)), p_17.f1)))) , 65535UL), 0L))), 1)), 6))), p_19.f2));
    }
    for (g_28.f2 = 0; (g_28.f2 <= 14); ++g_28.f2)
    { 
        l_184--;
        if (g_21[1][2][0].f2.f2.f1)
            break;
    }
    return l_187;
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 1; k++)
            {
                transparent_crc(g_21[i][j][k].f0, "g_21[i][j][k].f0", print_hash_value);
                transparent_crc(g_21[i][j][k].f1, "g_21[i][j][k].f1", print_hash_value);
                transparent_crc(g_21[i][j][k].f2.f0, "g_21[i][j][k].f2.f0", print_hash_value);
                transparent_crc(g_21[i][j][k].f2.f1, "g_21[i][j][k].f2.f1", print_hash_value);
                transparent_crc(g_21[i][j][k].f2.f2.f0, "g_21[i][j][k].f2.f2.f0", print_hash_value);
                transparent_crc(g_21[i][j][k].f2.f2.f1, "g_21[i][j][k].f2.f2.f1", print_hash_value);
                transparent_crc(g_21[i][j][k].f2.f2.f2, "g_21[i][j][k].f2.f2.f2", print_hash_value);

            }
        }
    }
    transparent_crc(g_28.f0, "g_28.f0", print_hash_value);
    transparent_crc(g_28.f1.f0, "g_28.f1.f0", print_hash_value);
    transparent_crc(g_28.f1.f1, "g_28.f1.f1", print_hash_value);
    transparent_crc(g_28.f1.f2, "g_28.f1.f2", print_hash_value);
    transparent_crc(g_28.f2, "g_28.f2", print_hash_value);
    transparent_crc(g_28.f3, "g_28.f3", print_hash_value);
    transparent_crc(g_28.f4, "g_28.f4", print_hash_value);
    transparent_crc(g_28.f5, "g_28.f5", print_hash_value);
    transparent_crc(g_48, "g_48", print_hash_value);
    transparent_crc(g_49, "g_49", print_hash_value);
    transparent_crc(g_56.f0, "g_56.f0", print_hash_value);
    transparent_crc(g_58.f1, "g_58.f1", print_hash_value);
    transparent_crc(g_62, "g_62", print_hash_value);
    transparent_crc(g_66, "g_66", print_hash_value);
    transparent_crc(g_68, "g_68", print_hash_value);
    transparent_crc(g_73, "g_73", print_hash_value);
    transparent_crc(g_74, "g_74", print_hash_value);
    transparent_crc(g_79, "g_79", print_hash_value);
    transparent_crc(g_84, "g_84", print_hash_value);
    transparent_crc(g_112, "g_112", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 5; j++)
        {
            transparent_crc(g_117[i][j], "g_117[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_123, "g_123", print_hash_value);
    transparent_crc(g_124, "g_124", print_hash_value);
    transparent_crc(g_190.f0, "g_190.f0", print_hash_value);
    transparent_crc(g_190.f1, "g_190.f1", print_hash_value);
    transparent_crc(g_190.f2.f0, "g_190.f2.f0", print_hash_value);
    transparent_crc(g_190.f2.f1, "g_190.f2.f1", print_hash_value);
    transparent_crc(g_190.f2.f2, "g_190.f2.f2", print_hash_value);
    transparent_crc(g_245, "g_245", print_hash_value);
    transparent_crc(g_246.f0, "g_246.f0", print_hash_value);
    transparent_crc(g_246.f1.f0, "g_246.f1.f0", print_hash_value);
    transparent_crc(g_246.f1.f1, "g_246.f1.f1", print_hash_value);
    transparent_crc(g_246.f1.f2, "g_246.f1.f2", print_hash_value);
    transparent_crc(g_246.f2, "g_246.f2", print_hash_value);
    transparent_crc(g_246.f3, "g_246.f3", print_hash_value);
    transparent_crc(g_246.f4, "g_246.f4", print_hash_value);
    transparent_crc(g_246.f5, "g_246.f5", print_hash_value);
    transparent_crc(g_324, "g_324", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
