// SPDX-License-Identifier: MIT
// cctest_csmith_466c3d01.c --- cctest case csmith_466c3d01 (csmith seed 1181498625)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x57549dd8 */

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

// Options:   -s 1181498625 -o /tmp/csmith_gen_ho1tdmaj/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


#pragma pack(push)
#pragma pack(1)
struct S0 {
   int64_t  f0;
   int64_t  f1;
   int64_t  f2;
   uint32_t  f3;
   int64_t  f4;
   uint32_t  f5;
};
#pragma pack(pop)

struct S1 {
   int16_t  f0;
   int32_t  f1;
   struct S0  f2;
   uint8_t  f3;
   uint8_t  f4;
};

#pragma pack(push)
#pragma pack(1)
struct S2 {
   uint32_t  f0;
};
#pragma pack(pop)

#pragma pack(push)
#pragma pack(1)
struct S3 {
   uint32_t  f0;
   uint16_t  f1;
};
#pragma pack(pop)

union U6 {
   int16_t  f0;
   int32_t  f1;
};

union U8 {
   int16_t  f0;
   const int64_t  f1;
   uint32_t  f2;
};

union U9 {
   const uint32_t  f0;
   int16_t  f1;
   int16_t  f2;
};

union U10 {
   struct S0  f0;
   int16_t  f1;
   uint32_t  f2;
   struct S1  f3;
};


static int32_t g_3 = 0x0FDB6968L;
static int32_t g_4 = 0x6B6CD333L;
static int32_t g_5 = 0L;
static union U9 g_12 = {4294967295UL};
static int16_t g_13 = 0x7825L;
static uint32_t g_22 = 0x04E5477AL;
static struct S3 g_37 = {0x305585C0L,0x4297L};
static union U10 g_40 = {{4L,0L,-1L,18446744073709551608UL,0x053E2D80D5DAD174LL,1UL}};
static union U6 g_74 = {0x3089L};
static int32_t g_82 = 0L;
static uint16_t g_100 = 0x5243L;
static union U8 g_106[3] = {{0xCE46L},{0xCE46L},{0xCE46L}};
static int8_t g_118[4] = {0x8AL,0x8AL,0x8AL,0x8AL};
static struct S0 g_126[5] = {{0xBF79C03FCF02AD15LL,0L,9L,18446744073709551615UL,0L,0x09CB0A74L},{0xBF79C03FCF02AD15LL,0L,9L,18446744073709551615UL,0L,0x09CB0A74L},{0xBF79C03FCF02AD15LL,0L,9L,18446744073709551615UL,0L,0x09CB0A74L},{0xBF79C03FCF02AD15LL,0L,9L,18446744073709551615UL,0L,0x09CB0A74L},{0xBF79C03FCF02AD15LL,0L,9L,18446744073709551615UL,0L,0x09CB0A74L}};



static uint64_t  func_1(void);
static struct S0  func_8(uint32_t  p_9);
static uint16_t  func_24(uint8_t  p_25);
static union U10  func_32(int64_t  p_33);




static uint64_t  func_1(void)
{ 
    int32_t l_2[2][2] = {{(-1L),(-1L)},{(-1L),(-1L)}};
    struct S3 l_149 = {0xE06947A5L,0xDDDCL};
    int32_t l_151 = 0L;
    int32_t l_152 = 0L;
    int i, j;
    for (g_3 = 0; (g_3 <= 1); g_3 += 1)
    { 
        struct S3 l_150 = {0xC01A54C5L,1UL};
    }
    return l_152;
}



static struct S0  func_8(uint32_t  p_9)
{ 
    uint32_t l_14[3];
    int32_t l_21[4];
    int32_t l_127[4];
    struct S0 l_145 = {-8L,9L,0x7AB6034B83A5DF85LL,18446744073709551607UL,0x72B4DC3A2BD98AD5LL,0xD78437ABL};
    int i;
    for (i = 0; i < 3; i++)
        l_14[i] = 0x2FF3E141L;
    for (i = 0; i < 4; i++)
        l_21[i] = 0xBB323FA9L;
    for (i = 0; i < 4; i++)
        l_127[i] = 0L;
    for (g_13 = 2; (g_13 >= 0); g_13 -= 1)
    { 
        uint8_t l_19 = 0UL;
        int32_t l_20 = 0L;
        g_22 = (safe_mul_func_uint16_t_u_u((safe_rshift_func_int8_t_s_u((l_21[2] = (l_20 = l_19)), 0)), 0xDEB9L));
        if (g_12.f1)
            continue;
        for (g_12.f2 = 0; (g_12.f2 <= 2); g_12.f2 += 1)
        { 
            int i;
            l_21[g_12.f2] = (+func_24(l_21[(g_13 + 1)]));
        }
    }
    for (g_74.f1 = 0; (g_74.f1 <= 3); g_74.f1 += 1)
    { 
        struct S2 l_98[2][4] = {{{18446744073709551609UL},{18446744073709551609UL},{18446744073709551609UL},{18446744073709551609UL}},{{18446744073709551609UL},{18446744073709551609UL},{18446744073709551609UL},{18446744073709551609UL}}};
        int32_t l_144 = 7L;
        int i, j;
        g_100 = ((safe_rshift_func_uint8_t_u_u((!(g_40.f3.f3 = (l_98[0][0] , ((g_12.f2 || (g_82 &= ((safe_unary_minus_func_int8_t_s((l_21[2] | p_9))) < l_21[2]))) < 0xD9L)))), p_9)) || 0x98E1L);
        if (((safe_sub_func_uint32_t_u_u(((safe_rshift_func_int16_t_s_s(g_5, 0)) < (((!0x51A9L) <= 0xBF4FE08C1C32F403LL) || l_21[2])), l_98[0][0].f0)) <= 0x0E967E889C1318B2LL))
        { 
            for (g_40.f3.f2.f1 = 2; (g_40.f3.f2.f1 >= 0); g_40.f3.f2.f1 -= 1)
            { 
                int8_t l_107 = 1L;
                g_82 = (0x96L <= (((g_106[0] , 0x33FEA8707BADF992LL) ^ 0x08C4F1E33EB71E6FLL) || p_9));
                l_107 = p_9;
                if (g_40.f0.f1)
                    continue;
            }
        }
        else
        { 
            int16_t l_119 = 0x8839L;
            uint16_t l_137 = 0x14FEL;
            for (g_40.f0.f0 = 2; (g_40.f0.f0 >= 0); g_40.f0.f0 -= 1)
            { 
                int i;
                l_119 |= (safe_div_func_uint64_t_u_u(((safe_div_func_int32_t_s_s((safe_rshift_func_int8_t_s_s(0xD0L, 7)), (safe_sub_func_uint32_t_u_u((safe_lshift_func_uint8_t_u_s(0x59L, 5)), ((g_118[1] = l_21[g_40.f0.f0]) || (g_3 || g_40.f1)))))) | g_74.f0), g_40.f0.f3));
                l_127[2] ^= ((safe_sub_func_int16_t_s_s(g_40.f1, ((p_9 >= ((safe_add_func_int8_t_s_s(((l_21[g_74.f1] & ((((safe_rshift_func_uint8_t_u_u(((((g_12.f1 = ((g_126[2] = g_40.f0) , p_9)) & 2UL) < p_9) , 0UL), g_40.f0.f0)) , p_9) & p_9) >= 0x8AL)) || l_21[g_40.f0.f0]), (-6L))) && g_40.f0.f0)) == 2UL))) || p_9);
            }
            if (p_9)
            { 
                int16_t l_128 = 0xCD11L;
                int32_t l_135 = (-1L);
                l_128 ^= l_14[0];
                l_135 &= ((safe_sub_func_uint64_t_u_u((safe_mul_func_int16_t_s_s(g_82, ((safe_lshift_func_int8_t_s_s(p_9, l_21[2])) , ((18446744073709551606UL >= (-4L)) , p_9)))), l_119)) < l_21[2]);
            }
            else
            { 
                int32_t l_136 = 7L;
                l_21[2] &= 0x4E2B856EL;
                if (g_40.f0.f3)
                    break;
                --l_137;
            }
            l_144 = ((l_21[g_74.f1] = (g_74.f1 <= ((safe_mod_func_uint64_t_u_u(((safe_lshift_func_int16_t_s_s(0xB0F1L, p_9)) == ((p_9 ^ 1UL) & p_9)), 1UL)) , l_119))) != l_119);
        }
    }
    return l_145;
}



static uint16_t  func_24(uint8_t  p_25)
{ 
    int32_t l_41 = (-7L);
    int32_t l_44[5][4] = {{(-10L),(-10L),(-10L),(-10L)},{(-10L),(-10L),(-10L),(-10L)},{(-10L),(-10L),(-10L),(-10L)},{(-10L),(-10L),(-10L),(-10L)},{(-10L),(-10L),(-10L),(-10L)}};
    int i, j;
    if (((((-1L) || ((safe_div_func_int16_t_s_s(1L, (safe_sub_func_uint32_t_u_u((safe_mod_func_uint32_t_u_u(((((func_32((p_25 || (safe_rshift_func_uint8_t_u_s((g_4 || g_5), 4)))) , p_25) , (-1L)) && l_41) < 6L), 0x079E446CL)), 1L)))) > 0xD86CL)) == p_25) == 0UL))
    { 
lbl_86:
        for (g_37.f0 = 0; (g_37.f0 <= 38); ++g_37.f0)
        { 
            l_44[3][2] &= (-5L);
        }
    }
    else
    { 
        uint16_t l_53 = 1UL;
        l_44[3][2] = (safe_mul_func_int16_t_s_s((safe_add_func_int8_t_s_s(((safe_add_func_uint16_t_u_u(g_37.f0, ((((((safe_add_func_int64_t_s_s(1L, (g_40 , g_3))) < l_53) > g_40.f2) <= l_41) && 0x7FF7C82FE9626E4ELL) > 18446744073709551606UL))) != 0xEBL), 1UL)), 0xDF5DL));
    }
    for (g_37.f0 = (-3); (g_37.f0 == 11); ++g_37.f0)
    { 
        if (p_25)
        { 
            int32_t l_65 = 0x47B79642L;
            struct S0 l_72 = {-10L,9L,0x9901E9BB6020BD04LL,9UL,9L,0x2B40C0E6L};
            union U6 l_73[1] = {{5L}};
            int32_t l_83 = 1L;
            int i;
            if ((safe_mul_func_int16_t_s_s((18446744073709551612UL & 0xB8C42DAAAAF263C5LL), (safe_unary_minus_func_int16_t_s((safe_mod_func_uint64_t_u_u((safe_mul_func_uint16_t_u_u((0x3429A001L | (safe_mul_func_uint16_t_u_u(g_37.f1, p_25))), g_40.f0.f2)), l_65)))))))
            { 
                if (l_65)
                    break;
                g_40.f3.f1 = p_25;
            }
            else
            { 
                l_83 = (g_82 &= ((safe_lshift_func_int16_t_s_s((safe_div_func_uint64_t_u_u((safe_add_func_int32_t_s_s(((l_72 , ((((g_74 = l_73[0]) , (((safe_div_func_uint64_t_u_u((safe_add_func_int64_t_s_s(0x3B01B0BCF91A75F8LL, (safe_mod_func_uint32_t_u_u((safe_unary_minus_func_uint32_t_u(p_25)), 1UL)))), 0xF022BA7A0367B5E8LL)) > 0UL) & l_44[3][2])) == l_72.f3) | g_40.f0.f0)) != g_12.f2), p_25)), g_12.f2)), p_25)) < 0x19L));
                if (l_65)
                    continue;
            }
            return p_25;
        }
        else
        { 
            for (g_40.f0.f4 = 0; (g_40.f0.f4 == (-9)); g_40.f0.f4 = safe_sub_func_int64_t_s_s(g_40.f0.f4, 2))
            { 
                return p_25;
            }
            if (g_37.f1)
                goto lbl_86;
        }
        g_82 = ((safe_lshift_func_int8_t_s_s((safe_sub_func_int16_t_s_s(((((safe_sub_func_uint32_t_u_u(0xA5E18581L, ((safe_unary_minus_func_int32_t_s((-1L))) >= (+0x1BD0L)))) | (l_41 | 0xA11705F1L)) >= l_44[4][2]) ^ (-1L)), 0x67BCL)), 5)) & p_25);
        if (l_44[3][2])
            continue;
    }
    return g_40.f0.f4;
}



static union U10  func_32(int64_t  p_33)
{ 
    struct S1 l_36[1][5][4] = {{{{0x525BL,-1L,{0xAEE34D1CD0509419LL,0xB86007675E6D9927LL,-6L,3UL,0x5481F04FECCDF493LL,4294967295UL},255UL,1UL},{0x9F56L,0x0C90B22FL,{0xEE3B6EA11B98B5DBLL,0x7C3D8A5C089A473FLL,0x90218FCD19708E63LL,0xEEA102A8L,0xC5EE7416AF0CFC20LL,0x2663943EL},0x24L,0xB3L},{1L,0xF870A655L,{0x2591552D49A337B2LL,0xF9695FF7D1D410A0LL,0L,1UL,-2L,0x3212EC38L},255UL,0x73L},{1L,0xF870A655L,{0x2591552D49A337B2LL,0xF9695FF7D1D410A0LL,0L,1UL,-2L,0x3212EC38L},255UL,0x73L}},{{0x525BL,-1L,{0xAEE34D1CD0509419LL,0xB86007675E6D9927LL,-6L,3UL,0x5481F04FECCDF493LL,4294967295UL},255UL,1UL},{0x525BL,-1L,{0xAEE34D1CD0509419LL,0xB86007675E6D9927LL,-6L,3UL,0x5481F04FECCDF493LL,4294967295UL},255UL,1UL},{1L,0L,{0L,0xE3044B1310F077D7LL,-1L,18446744073709551615UL,0x13F3B720FAE2361ALL,0x7D512630L},255UL,0UL},{1L,0xF870A655L,{0x2591552D49A337B2LL,0xF9695FF7D1D410A0LL,0L,1UL,-2L,0x3212EC38L},255UL,0x73L}},{{0x7F9BL,-1L,{0x74477D717F6C0774LL,6L,0x2EF7C93E255F8095LL,0xC1B2F081L,0xD5A33B115E53F01ELL,0x3513FE74L},0x19L,0xD8L},{0x9F56L,0x0C90B22FL,{0xEE3B6EA11B98B5DBLL,0x7C3D8A5C089A473FLL,0x90218FCD19708E63LL,0xEEA102A8L,0xC5EE7416AF0CFC20LL,0x2663943EL},0x24L,0xB3L},{0x7F9BL,-1L,{0x74477D717F6C0774LL,6L,0x2EF7C93E255F8095LL,0xC1B2F081L,0xD5A33B115E53F01ELL,0x3513FE74L},0x19L,0xD8L},{1L,0L,{0L,0xE3044B1310F077D7LL,-1L,18446744073709551615UL,0x13F3B720FAE2361ALL,0x7D512630L},255UL,0UL}},{{0x7F9BL,-1L,{0x74477D717F6C0774LL,6L,0x2EF7C93E255F8095LL,0xC1B2F081L,0xD5A33B115E53F01ELL,0x3513FE74L},0x19L,0xD8L},{1L,0L,{0L,0xE3044B1310F077D7LL,-1L,18446744073709551615UL,0x13F3B720FAE2361ALL,0x7D512630L},255UL,0UL},{1L,0L,{0L,0xE3044B1310F077D7LL,-1L,18446744073709551615UL,0x13F3B720FAE2361ALL,0x7D512630L},255UL,0UL},{0x7F9BL,-1L,{0x74477D717F6C0774LL,6L,0x2EF7C93E255F8095LL,0xC1B2F081L,0xD5A33B115E53F01ELL,0x3513FE74L},0x19L,0xD8L}},{{0x525BL,-1L,{0xAEE34D1CD0509419LL,0xB86007675E6D9927LL,-6L,3UL,0x5481F04FECCDF493LL,4294967295UL},255UL,1UL},{1L,0L,{0L,0xE3044B1310F077D7LL,-1L,18446744073709551615UL,0x13F3B720FAE2361ALL,0x7D512630L},255UL,0UL},{1L,0xF870A655L,{0x2591552D49A337B2LL,0xF9695FF7D1D410A0LL,0L,1UL,-2L,0x3212EC38L},255UL,0x73L},{1L,0L,{0L,0xE3044B1310F077D7LL,-1L,18446744073709551615UL,0x13F3B720FAE2361ALL,0x7D512630L},255UL,0UL}}}};
    int i, j, k;
    l_36[0][4][1] = l_36[0][2][3];
    g_37 = g_37;
    for (g_22 = 0; (g_22 <= 0); g_22 += 1)
    { 
        struct S1 l_38[3][5][3] = {{{{-2L,-1L,{-9L,0x77089988BF30E8C0LL,1L,1UL,0x886D350633388499LL,0x8E064356L},0x17L,0xCBL},{-2L,-1L,{-9L,0x77089988BF30E8C0LL,1L,1UL,0x886D350633388499LL,0x8E064356L},0x17L,0xCBL},{-2L,-1L,{-9L,0x77089988BF30E8C0LL,1L,1UL,0x886D350633388499LL,0x8E064356L},0x17L,0xCBL}},{{-2L,-1L,{-9L,0x77089988BF30E8C0LL,1L,1UL,0x886D350633388499LL,0x8E064356L},0x17L,0xCBL},{-2L,-1L,{-9L,0x77089988BF30E8C0LL,1L,1UL,0x886D350633388499LL,0x8E064356L},0x17L,0xCBL},{-2L,-1L,{-9L,0x77089988BF30E8C0LL,1L,1UL,0x886D350633388499LL,0x8E064356L},0x17L,0xCBL}},{{-2L,-1L,{-9L,0x77089988BF30E8C0LL,1L,1UL,0x886D350633388499LL,0x8E064356L},0x17L,0xCBL},{-2L,-1L,{-9L,0x77089988BF30E8C0LL,1L,1UL,0x886D350633388499LL,0x8E064356L},0x17L,0xCBL},{-2L,-1L,{-9L,0x77089988BF30E8C0LL,1L,1UL,0x886D350633388499LL,0x8E064356L},0x17L,0xCBL}},{{-2L,-1L,{-9L,0x77089988BF30E8C0LL,1L,1UL,0x886D350633388499LL,0x8E064356L},0x17L,0xCBL},{-2L,-1L,{-9L,0x77089988BF30E8C0LL,1L,1UL,0x886D350633388499LL,0x8E064356L},0x17L,0xCBL},{-2L,-1L,{-9L,0x77089988BF30E8C0LL,1L,1UL,0x886D350633388499LL,0x8E064356L},0x17L,0xCBL}},{{-2L,-1L,{-9L,0x77089988BF30E8C0LL,1L,1UL,0x886D350633388499LL,0x8E064356L},0x17L,0xCBL},{-2L,-1L,{-9L,0x77089988BF30E8C0LL,1L,1UL,0x886D350633388499LL,0x8E064356L},0x17L,0xCBL},{-2L,-1L,{-9L,0x77089988BF30E8C0LL,1L,1UL,0x886D350633388499LL,0x8E064356L},0x17L,0xCBL}}},{{{-2L,-1L,{-9L,0x77089988BF30E8C0LL,1L,1UL,0x886D350633388499LL,0x8E064356L},0x17L,0xCBL},{-2L,-1L,{-9L,0x77089988BF30E8C0LL,1L,1UL,0x886D350633388499LL,0x8E064356L},0x17L,0xCBL},{-2L,-1L,{-9L,0x77089988BF30E8C0LL,1L,1UL,0x886D350633388499LL,0x8E064356L},0x17L,0xCBL}},{{-2L,-1L,{-9L,0x77089988BF30E8C0LL,1L,1UL,0x886D350633388499LL,0x8E064356L},0x17L,0xCBL},{-2L,-1L,{-9L,0x77089988BF30E8C0LL,1L,1UL,0x886D350633388499LL,0x8E064356L},0x17L,0xCBL},{-2L,-1L,{-9L,0x77089988BF30E8C0LL,1L,1UL,0x886D350633388499LL,0x8E064356L},0x17L,0xCBL}},{{-2L,-1L,{-9L,0x77089988BF30E8C0LL,1L,1UL,0x886D350633388499LL,0x8E064356L},0x17L,0xCBL},{-2L,-1L,{-9L,0x77089988BF30E8C0LL,1L,1UL,0x886D350633388499LL,0x8E064356L},0x17L,0xCBL},{-2L,-1L,{-9L,0x77089988BF30E8C0LL,1L,1UL,0x886D350633388499LL,0x8E064356L},0x17L,0xCBL}},{{-2L,-1L,{-9L,0x77089988BF30E8C0LL,1L,1UL,0x886D350633388499LL,0x8E064356L},0x17L,0xCBL},{-2L,-1L,{-9L,0x77089988BF30E8C0LL,1L,1UL,0x886D350633388499LL,0x8E064356L},0x17L,0xCBL},{-2L,-1L,{-9L,0x77089988BF30E8C0LL,1L,1UL,0x886D350633388499LL,0x8E064356L},0x17L,0xCBL}},{{-2L,-1L,{-9L,0x77089988BF30E8C0LL,1L,1UL,0x886D350633388499LL,0x8E064356L},0x17L,0xCBL},{-2L,-1L,{-9L,0x77089988BF30E8C0LL,1L,1UL,0x886D350633388499LL,0x8E064356L},0x17L,0xCBL},{-2L,-1L,{-9L,0x77089988BF30E8C0LL,1L,1UL,0x886D350633388499LL,0x8E064356L},0x17L,0xCBL}}},{{{-2L,-1L,{-9L,0x77089988BF30E8C0LL,1L,1UL,0x886D350633388499LL,0x8E064356L},0x17L,0xCBL},{-2L,-1L,{-9L,0x77089988BF30E8C0LL,1L,1UL,0x886D350633388499LL,0x8E064356L},0x17L,0xCBL},{-2L,-1L,{-9L,0x77089988BF30E8C0LL,1L,1UL,0x886D350633388499LL,0x8E064356L},0x17L,0xCBL}},{{-2L,-1L,{-9L,0x77089988BF30E8C0LL,1L,1UL,0x886D350633388499LL,0x8E064356L},0x17L,0xCBL},{-2L,-1L,{-9L,0x77089988BF30E8C0LL,1L,1UL,0x886D350633388499LL,0x8E064356L},0x17L,0xCBL},{-2L,-1L,{-9L,0x77089988BF30E8C0LL,1L,1UL,0x886D350633388499LL,0x8E064356L},0x17L,0xCBL}},{{-2L,-1L,{-9L,0x77089988BF30E8C0LL,1L,1UL,0x886D350633388499LL,0x8E064356L},0x17L,0xCBL},{-2L,-1L,{-9L,0x77089988BF30E8C0LL,1L,1UL,0x886D350633388499LL,0x8E064356L},0x17L,0xCBL},{-2L,-1L,{-9L,0x77089988BF30E8C0LL,1L,1UL,0x886D350633388499LL,0x8E064356L},0x17L,0xCBL}},{{-2L,-1L,{-9L,0x77089988BF30E8C0LL,1L,1UL,0x886D350633388499LL,0x8E064356L},0x17L,0xCBL},{-2L,-1L,{-9L,0x77089988BF30E8C0LL,1L,1UL,0x886D350633388499LL,0x8E064356L},0x17L,0xCBL},{-2L,-1L,{-9L,0x77089988BF30E8C0LL,1L,1UL,0x886D350633388499LL,0x8E064356L},0x17L,0xCBL}},{{-2L,-1L,{-9L,0x77089988BF30E8C0LL,1L,1UL,0x886D350633388499LL,0x8E064356L},0x17L,0xCBL},{-2L,-1L,{-9L,0x77089988BF30E8C0LL,1L,1UL,0x886D350633388499LL,0x8E064356L},0x17L,0xCBL},{-2L,-1L,{-9L,0x77089988BF30E8C0LL,1L,1UL,0x886D350633388499LL,0x8E064356L},0x17L,0xCBL}}}};
        union U10 l_39 = {{0L,0xF731603581D61F6BLL,0x03822D717118E0D0LL,0xAFEA2219L,-3L,0xDDB654FAL}};
        int i, j, k;
        l_38[2][0][2] = l_38[2][0][2];
        for (p_33 = 0; (p_33 >= 0); p_33 -= 1)
        { 
            return l_39;
        }
    }
    return g_40;
}





int test_main(void)
{
    int i;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_3, "g_3", print_hash_value);
    transparent_crc(g_4, "g_4", print_hash_value);
    transparent_crc(g_5, "g_5", print_hash_value);
    transparent_crc(g_12.f0, "g_12.f0", print_hash_value);
    transparent_crc(g_12.f1, "g_12.f1", print_hash_value);
    transparent_crc(g_12.f2, "g_12.f2", print_hash_value);
    transparent_crc(g_13, "g_13", print_hash_value);
    transparent_crc(g_22, "g_22", print_hash_value);
    transparent_crc(g_37.f0, "g_37.f0", print_hash_value);
    transparent_crc(g_37.f1, "g_37.f1", print_hash_value);
    transparent_crc(g_40.f0.f0, "g_40.f0.f0", print_hash_value);
    transparent_crc(g_40.f0.f1, "g_40.f0.f1", print_hash_value);
    transparent_crc(g_40.f0.f2, "g_40.f0.f2", print_hash_value);
    transparent_crc(g_40.f0.f3, "g_40.f0.f3", print_hash_value);
    transparent_crc(g_40.f0.f4, "g_40.f0.f4", print_hash_value);
    transparent_crc(g_40.f0.f5, "g_40.f0.f5", print_hash_value);
    transparent_crc(g_40.f1, "g_40.f1", print_hash_value);
    transparent_crc(g_40.f2, "g_40.f2", print_hash_value);
    transparent_crc(g_74.f0, "g_74.f0", print_hash_value);
    transparent_crc(g_82, "g_82", print_hash_value);
    transparent_crc(g_100, "g_100", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_106[i].f0, "g_106[i].f0", print_hash_value);

    }
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_118[i], "g_118[i]", print_hash_value);

    }
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_126[i].f0, "g_126[i].f0", print_hash_value);
        transparent_crc(g_126[i].f1, "g_126[i].f1", print_hash_value);
        transparent_crc(g_126[i].f2, "g_126[i].f2", print_hash_value);
        transparent_crc(g_126[i].f3, "g_126[i].f3", print_hash_value);
        transparent_crc(g_126[i].f4, "g_126[i].f4", print_hash_value);
        transparent_crc(g_126[i].f5, "g_126[i].f5", print_hash_value);

    }
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
