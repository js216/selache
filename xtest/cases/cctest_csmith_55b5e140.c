// SPDX-License-Identifier: MIT
// cctest_csmith_55b5e140.c --- cctest case csmith_55b5e140 (csmith seed 1437983040)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x75e82f75 */

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

// Options:   -s 1437983040 -o /tmp/csmith_gen_7_3f43fm/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


#pragma pack(push)
#pragma pack(1)
struct S0 {
   uint32_t  f0;
   uint64_t  f1;
   const uint32_t  f2;
   int16_t  f3;
   uint32_t  f4;
};
#pragma pack(pop)

struct S1 {
   const int32_t  f0;
   int32_t  f1;
   struct S0  f2;
   const int16_t  f3;
};

union U2 {
   const uint32_t  f0;
   const uint32_t  f1;
};

union U3 {
   int8_t  f0;
   uint8_t  f1;
   struct S0  f2;
};

union U4 {
   struct S0  f0;
   int16_t  f1;
   const struct S1  f2;
   const int16_t  f3;
};

union U5 {
   uint32_t  f0;
   uint64_t  f1;
   int64_t  f2;
};


static uint16_t g_9 = 65528UL;
static int64_t g_13[4][3] = {{0x10DD013D0BB94D0FLL,9L,0x10DD013D0BB94D0FLL},{0x10DD013D0BB94D0FLL,9L,0x10DD013D0BB94D0FLL},{0x10DD013D0BB94D0FLL,9L,0x10DD013D0BB94D0FLL},{0x10DD013D0BB94D0FLL,9L,0x10DD013D0BB94D0FLL}};
static int32_t g_14[3] = {0L,0L,0L};
static int32_t g_15[3] = {0xA7790412L,0xA7790412L,0xA7790412L};
static uint16_t g_21[2][5] = {{65535UL,0x933BL,65535UL,1UL,1UL},{65535UL,0x933BL,65535UL,1UL,1UL}};
static uint8_t g_44 = 0UL;
static int32_t g_56 = 0x3E77DF0EL;
static uint64_t g_57 = 0xFCE320EC44CB1824LL;
static int32_t g_74 = 0x43511282L;
static uint8_t g_105 = 1UL;
static uint64_t g_110 = 0xA4A936FBAC331A2DLL;
static uint64_t g_117 = 18446744073709551615UL;
static int32_t g_120[2][1] = {{0x7E4F0550L},{0x7E4F0550L}};
static uint32_t g_228[4][5][3] = {{{5UL,1UL,4294967292UL},{4294967295UL,8UL,0xE7D4AAAEL},{0x52E07C21L,0x90CA2413L,4294967295UL},{0x52E07C21L,0x52E07C21L,5UL},{4294967295UL,0UL,0UL}},{{5UL,8UL,1UL},{0UL,0x4F71B675L,4294967287UL},{0UL,0x96DFD013L,1UL},{0UL,5UL,4294967286UL},{7UL,4294967295UL,0x96DFD013L}},{{0x96DFD013L,0x52E07C21L,1UL},{4294967287UL,0x52E07C21L,4294967287UL},{0xA89C3933L,4294967295UL,0UL},{0x90CA2413L,5UL,4294967295UL},{4294967295UL,0x96DFD013L,4294967292UL}},{{0x96DFD013L,0x4F71B675L,8UL},{4294967295UL,8UL,4294967287UL},{0x90CA2413L,4294967292UL,0xA5DDA629L},{0xA89C3933L,5UL,0xE7D4AAAEL},{4294967287UL,0xE7D4AAAEL,0xE7D4AAAEL}}};
static const union U4 g_237 = {{0x19D5596DL,0xB076EBF33B00657DLL,1UL,0xA6FAL,2UL}};
static int64_t g_256[2][1][5] = {{{0L,0L,0L,0L,0L}},{{0L,0L,0L,0L,0L}}};
static uint32_t g_295[1][3] = {{0xB92A9F23L,0xB92A9F23L,0xB92A9F23L}};



static int32_t  func_1(void);
static int32_t  func_10(union U5  p_11);
static struct S1  func_18(const union U4  p_19, union U5  p_20);
static int8_t  func_22(union U2  p_23, union U5  p_24, uint16_t  p_25, const int32_t  p_26, uint8_t  p_27);




static int32_t  func_1(void)
{ 
    int64_t l_8 = 0xE17C10977A1245C8LL;
    union U5 l_12 = {1UL};
    uint32_t l_236 = 0UL;
    int32_t l_239 = (-10L);
    int32_t l_241 = (-1L);
    int32_t l_242 = 3L;
    int32_t l_243 = 0x04132805L;
    int32_t l_244[4][5][4] = {{{7L,0x0234A52FL,0x750D81AAL,(-10L)},{0x05F7AC17L,0x750D81AAL,0x750D81AAL,0x05F7AC17L},{7L,0x98C0DEABL,0L,0xB9A90DBDL},{(-4L),1L,0xB9A90DBDL,0x4C872E6DL},{0xB9A90DBDL,0x4C872E6DL,0xED7957FEL,0x4C872E6DL}},{{0x750D81AAL,1L,0x0234A52FL,0xB9A90DBDL},{0L,0x98C0DEABL,0x4C872E6DL,0x05F7AC17L},{0x0234A52FL,0x750D81AAL,(-10L),(-10L)},{0x0234A52FL,0x0234A52FL,0x4C872E6DL,7L},{0L,(-10L),0x0234A52FL,0x98C0DEABL}},{{0x750D81AAL,(-4L),0xED7957FEL,0x0234A52FL},{0xB9A90DBDL,(-4L),0xB9A90DBDL,0x98C0DEABL},{(-4L),(-10L),0L,7L},{7L,0x0234A52FL,0x750D81AAL,(-10L)},{0x05F7AC17L,0x750D81AAL,0x750D81AAL,0x05F7AC17L}},{{7L,0x98C0DEABL,0L,0xB9A90DBDL},{(-4L),1L,0xB9A90DBDL,0x4C872E6DL},{0xB9A90DBDL,0x4C872E6DL,0xED7957FEL,0x4C872E6DL},{0x750D81AAL,1L,0x0234A52FL,0xB9A90DBDL},{0L,0x98C0DEABL,0x4C872E6DL,0x05F7AC17L}}};
    int32_t l_257 = 0x335BF821L;
    int64_t l_277 = 0xB55A89C14EC5ED5CLL;
    int16_t l_278 = 0xC495L;
    uint32_t l_296 = 0x8A9D4CCEL;
    int32_t l_311 = 8L;
    int32_t l_312 = 0x0B3FAD78L;
    int32_t l_313 = 5L;
    int16_t l_319 = 5L;
    int32_t l_320 = 0xD7F6E228L;
    int16_t l_321 = 0L;
    int8_t l_322 = 0L;
    uint16_t l_323 = 65527UL;
    int i, j, k;
    g_14[2] = ((safe_mod_func_uint64_t_u_u((safe_mod_func_uint32_t_u_u((safe_sub_func_int32_t_s_s(l_8, g_9)), func_10(l_12))), g_9)) & 18446744073709551615UL);
lbl_328:
    if (l_236)
    { 
        uint32_t l_238 = 18446744073709551609UL;
        int32_t l_240 = 0x255D9042L;
        uint32_t l_245 = 0xEEFD678DL;
        int32_t l_248 = 1L;
        int32_t l_249 = 0xB0492FC4L;
        int32_t l_250 = (-1L);
        int32_t l_251 = (-7L);
        int16_t l_252 = 1L;
        int32_t l_253 = 0xBCD69BB4L;
        int32_t l_254 = (-1L);
        int32_t l_255[1][4][1] = {{{3L},{0xCBC175E5L},{3L},{0xCBC175E5L}}};
        uint8_t l_258 = 0x63L;
        int i, j, k;
        g_14[0] = (func_18((g_110 , g_237), l_12) , l_238);
        l_245++;
        l_258++;
    }
    else
    { 
        int8_t l_263[1];
        int16_t l_275 = (-1L);
        uint32_t l_281 = 0x9B597B53L;
        union U5 l_294 = {18446744073709551612UL};
        int32_t l_314 = 0x4C61EB7DL;
        int32_t l_315 = 5L;
        int32_t l_316 = 0xB74264F0L;
        int32_t l_317[1][4][2] = {{{0x130411F7L,(-1L)},{0x130411F7L,(-1L)},{0x130411F7L,(-1L)},{0x130411F7L,(-1L)}}};
        int16_t l_318 = (-8L);
        int i, j, k;
        for (i = 0; i < 1; i++)
            l_263[i] = (-1L);
        for (l_8 = 17; (l_8 != (-4)); --l_8)
        { 
            for (g_105 = 0; (g_105 <= 3); g_105 += 1)
            { 
                l_263[0] = 5L;
                return l_263[0];
            }
        }
        for (l_12.f0 = 7; (l_12.f0 >= 59); l_12.f0 = safe_add_func_int32_t_s_s(l_12.f0, 9))
        { 
            uint16_t l_272 = 65535UL;
            int32_t l_279 = 0x679C8553L;
            int32_t l_280[5];
            int i;
            for (i = 0; i < 5; i++)
                l_280[i] = (-5L);
            if ((l_8 != ((safe_rshift_func_int16_t_s_u(((safe_lshift_func_int8_t_s_u(l_272, 7)) <= 4UL), (safe_mod_func_int8_t_s_s(l_275, 0xC0L)))) != l_272)))
            { 
                int64_t l_276 = 0xC048E1D8DCDD8640LL;
                ++l_281;
                g_14[0] = (0x1E1DB443416D6613LL & (((safe_lshift_func_int16_t_s_s((((safe_sub_func_int64_t_s_s((safe_div_func_uint64_t_u_u((safe_lshift_func_int16_t_s_u((((safe_rshift_func_int8_t_s_u((g_295[0][2] = (func_18(g_237, l_294) , 0L)), g_14[0])) & g_256[1][0][3]) <= l_296), 3)), g_237.f3)), g_105)) ^ 0xB0FE0126B19A00E8LL) != 0x078BCC88L), l_263[0])) && l_272) , l_276));
            }
            else
            { 
                uint8_t l_297 = 3UL;
                uint64_t l_310 = 0x7B4870F3924317F4LL;
                ++l_297;
                g_15[1] &= (l_279 = (safe_lshift_func_int8_t_s_u(((safe_lshift_func_int16_t_s_s(3L, ((safe_sub_func_uint16_t_u_u((g_21[1][3]++), (safe_unary_minus_func_uint8_t_u((((g_295[0][2] | (~l_310)) > g_237.f0.f0) == l_263[0]))))) == 0UL))) != 255UL), g_110)));
                if (l_310)
                    break;
            }
            g_74 = 6L;
        }
        l_323--;
    }
    for (l_243 = 0; (l_243 <= (-3)); l_243--)
    { 
        uint32_t l_329[4] = {0x9F7BD04FL,0x9F7BD04FL,0x9F7BD04FL,0x9F7BD04FL};
        int32_t l_330 = 0xD8F780C5L;
        int i;
        if (l_236)
            goto lbl_328;
        l_330 |= (((g_228[0][2][2] = l_329[1]) >= (1UL || ((g_256[1][0][1] , l_329[2]) <= 0xA5L))) || l_329[1]);
    }
    return g_74;
}



static int32_t  func_10(union U5  p_11)
{ 
    uint16_t l_186 = 1UL;
    int32_t l_189 = 0x1417789DL;
    int32_t l_192 = (-3L);
    int32_t l_194 = 0xAF2569BDL;
    int16_t l_214 = (-10L);
    int8_t l_215 = 0x9FL;
    int32_t l_216 = 0x94540758L;
    int32_t l_217 = 6L;
    int32_t l_218 = 0x89C927E8L;
    int32_t l_219 = 0xF2F86AFBL;
    int32_t l_220 = 0x445D6303L;
    int32_t l_221 = 0x9575F593L;
    int32_t l_222 = 0x63E53FBDL;
    int32_t l_223 = 0x624ADBFCL;
    int32_t l_224 = 1L;
    int32_t l_225 = 0xE80D330BL;
    int32_t l_226 = (-5L);
    int32_t l_227 = (-1L);
    for (p_11.f2 = 0; (p_11.f2 <= 2); p_11.f2 += 1)
    { 
        union U5 l_29 = {0x2097E65FL};
        int32_t l_188[1][5] = {{0xDF793C26L,0xDF793C26L,0xDF793C26L,0xDF793C26L,0xDF793C26L}};
        uint64_t l_235 = 5UL;
        int i, j;
        for (g_14[0] = 0; (g_14[0] <= 2); g_14[0] += 1)
        { 
            uint8_t l_182 = 0x94L;
            int32_t l_187 = 0xC97AD978L;
            int32_t l_191[4] = {(-8L),(-8L),(-8L),(-8L)};
            int64_t l_213 = 0xD2405D245C51EAD6LL;
            int i;
            for (g_15[1] = 2; (g_15[1] >= 0); g_15[1] -= 1)
            { 
                union U2 l_28 = {0xDE905F4DL};
                int32_t l_183[3][2][1] = {{{0x67CBA6E0L},{0L}},{{0x67CBA6E0L},{0L}},{{0x67CBA6E0L},{0L}}};
                const union U4 l_184 = {{0x73549B09L,0xDA30AC000487FC37LL,1UL,0x0C37L,0UL}};
                int i, j, k;
                l_187 = ((((safe_lshift_func_uint16_t_u_s((func_18((((l_183[1][0][0] = (((g_13[(g_14[0] + 1)][p_11.f2] | 1L) | (g_21[1][3] = p_11.f2)) , (func_22(l_28, l_29, g_15[2], p_11.f2, p_11.f2) || l_182))) <= g_105) , l_184), p_11) , 3UL), 1)) ^ l_186) <= g_15[1]) != 0xF28DE542L);
                l_188[0][3] ^= p_11.f0;
            }
            if ((p_11.f2 <= 0L))
            { 
                int32_t l_190 = 0x2CB33821L;
                int32_t l_193 = 0L;
                int32_t l_195 = 1L;
                int32_t l_196 = 4L;
                uint32_t l_197[1][5] = {{0xEC6DFB0BL,0xEC6DFB0BL,0xEC6DFB0BL,0xEC6DFB0BL,0xEC6DFB0BL}};
                int i, j;
                g_74 &= (-2L);
                ++l_197[0][2];
            }
            else
            { 
                int8_t l_210 = 0x26L;
                l_187 = (7UL > ((safe_lshift_func_uint16_t_u_u((65532UL && 0xE250L), (safe_add_func_int8_t_s_s((safe_sub_func_int8_t_s_s(((safe_rshift_func_uint16_t_u_u(g_14[0], g_21[1][3])) <= 0x81L), g_14[0])), l_191[1])))) < l_210));
                l_213 = (safe_rshift_func_uint8_t_u_u(0xDAL, l_192));
            }
        }
        g_228[1][4][2]--;
        for (l_186 = 0; (l_186 <= 2); l_186 += 1)
        { 
            for (g_44 = 0; (g_44 <= 2); g_44 += 1)
            { 
                uint32_t l_231 = 0x45CD9686L;
                int32_t l_234[4][1][4] = {{{0x95135FD4L,(-1L),0x95135FD4L,(-1L)}},{{0x95135FD4L,(-1L),0x95135FD4L,(-1L)}},{{0x95135FD4L,(-1L),0x95135FD4L,(-1L)}},{{0x95135FD4L,(-1L),0x95135FD4L,(-1L)}}};
                int i, j, k;
                g_15[1] = ((l_231 &= 65535UL) <= g_13[(p_11.f2 + 1)][l_186]);
                l_234[2][0][1] = ((((0xA00EA68498C81BC8LL > 0x73CAB9C88E312AFDLL) == (65531UL >= 65535UL)) == g_110) ^ l_231);
                l_235 = (g_74 ^= p_11.f0);
            }
        }
    }
    return p_11.f2;
}



static struct S1  func_18(const union U4  p_19, union U5  p_20)
{ 
    struct S1 l_185 = {1L,0L,{0x77C8831FL,18446744073709551607UL,6UL,0x9887L,0x9DC6AD9CL},0x1CCEL};
    g_74 |= 2L;
    return l_185;
}



static int8_t  func_22(union U2  p_23, union U5  p_24, uint16_t  p_25, const int32_t  p_26, uint8_t  p_27)
{ 
    uint32_t l_45[5][5][4] = {{{0xB13122E3L,0xCC4EFF44L,0xB13122E3L,0x4FE37806L},{0xD3F58F29L,0x4B7C80BFL,0x019D5C01L,0x47C1471CL},{0xAA841158L,0x4FE37806L,0xAA841158L,5UL},{0x6CA138DBL,0x4FE37806L,0xB13122E3L,0x47C1471CL},{0xC1A33FE8L,0x4B7C80BFL,0x1EFC39FAL,0x4FE37806L}},{{0xAA841158L,0x47C1471CL,0x1EFC39FAL,5UL},{0xC1A33FE8L,0x5B172C66L,0xB13122E3L,0x5B172C66L},{0x6CA138DBL,0x4B7C80BFL,0xAA841158L,0x5B172C66L},{0xAA841158L,0x5B172C66L,0x019D5C01L,5UL},{0xD3F58F29L,0x47C1471CL,0xB13122E3L,0x4FE37806L}},{{0xD3F58F29L,0x4B7C80BFL,0x019D5C01L,0x47C1471CL},{0xAA841158L,0x4FE37806L,0xAA841158L,5UL},{0x6CA138DBL,0x4FE37806L,0xB13122E3L,0x47C1471CL},{0xC1A33FE8L,0x4B7C80BFL,0x1EFC39FAL,0x4FE37806L},{0xAA841158L,0x47C1471CL,0x1EFC39FAL,5UL}},{{0xC1A33FE8L,0x5B172C66L,0xB13122E3L,0x5B172C66L},{0x6CA138DBL,0x4B7C80BFL,0xAA841158L,0x5B172C66L},{0xAA841158L,0x5B172C66L,0x019D5C01L,5UL},{0xD3F58F29L,0x47C1471CL,0xB13122E3L,0x4FE37806L},{0xD3F58F29L,0x4B7C80BFL,0x019D5C01L,0x47C1471CL}},{{0xAA841158L,0x4FE37806L,0xAA841158L,5UL},{0x6CA138DBL,0x4FE37806L,0xB13122E3L,0x47C1471CL},{0xC1A33FE8L,0x4B7C80BFL,0x1EFC39FAL,0x4FE37806L},{0xAA841158L,0x47C1471CL,0x1EFC39FAL,5UL},{0xC1A33FE8L,0x5B172C66L,0xB13122E3L,0x5B172C66L}}};
    int32_t l_53 = (-1L);
    int32_t l_54 = 0xE89E6D54L;
    struct S1 l_96[4][3][1] = {{{{0x6467E2B5L,0xF26AE350L,{4294967291UL,0UL,5UL,-1L,0x4CA122FCL},8L}},{{1L,7L,{1UL,18446744073709551615UL,0x7EB49816L,0x0766L,1UL},0x3A75L}},{{0x6467E2B5L,0xF26AE350L,{4294967291UL,0UL,5UL,-1L,0x4CA122FCL},8L}}},{{{1L,7L,{1UL,18446744073709551615UL,0x7EB49816L,0x0766L,1UL},0x3A75L}},{{0x6467E2B5L,0xF26AE350L,{4294967291UL,0UL,5UL,-1L,0x4CA122FCL},8L}},{{1L,7L,{1UL,18446744073709551615UL,0x7EB49816L,0x0766L,1UL},0x3A75L}}},{{{0x6467E2B5L,0xF26AE350L,{4294967291UL,0UL,5UL,-1L,0x4CA122FCL},8L}},{{1L,7L,{1UL,18446744073709551615UL,0x7EB49816L,0x0766L,1UL},0x3A75L}},{{0x6467E2B5L,0xF26AE350L,{4294967291UL,0UL,5UL,-1L,0x4CA122FCL},8L}}},{{{1L,7L,{1UL,18446744073709551615UL,0x7EB49816L,0x0766L,1UL},0x3A75L}},{{0x6467E2B5L,0xF26AE350L,{4294967291UL,0UL,5UL,-1L,0x4CA122FCL},8L}},{{1L,7L,{1UL,18446744073709551615UL,0x7EB49816L,0x0766L,1UL},0x3A75L}}}};
    union U5 l_123[4] = {{18446744073709551615UL},{18446744073709551615UL},{18446744073709551615UL},{18446744073709551615UL}};
    union U4 l_129 = {{4UL,0UL,0UL,1L,0xDE15252EL}};
    uint32_t l_132 = 1UL;
    int32_t l_149[1];
    int8_t l_154[3][4] = {{0x45L,0x45L,0x45L,0x45L},{0x45L,0x45L,0x45L,0x45L},{0x45L,0x45L,0x45L,0x45L}};
    uint32_t l_157 = 1UL;
    int i, j, k;
    for (i = 0; i < 1; i++)
        l_149[i] = (-10L);
    for (p_24.f2 = 19; (p_24.f2 >= 20); p_24.f2 = safe_add_func_int16_t_s_s(p_24.f2, 6))
    { 
        int8_t l_37 = 0L;
        int32_t l_52 = 0x33308626L;
        for (p_27 = 0; (p_27 <= 1); p_27 += 1)
        { 
            union U3 l_35 = {-8L};
            int64_t l_36 = 0x22E7DFE98D7E942FLL;
            int32_t l_48 = 0x5693CDB7L;
            int i, j;
            if (((safe_rshift_func_uint16_t_u_u(((g_13[(p_27 + 2)][p_27] != (g_15[0] > 0xB4AB19F88DD0BB26LL)) | (!(l_35 , l_36))), 15)) >= 5UL))
            { 
                l_37 = 0x8230B545L;
                g_44 = (p_23.f1 , (((safe_lshift_func_int16_t_s_u((g_14[2] && (safe_rshift_func_uint8_t_u_u((g_9 >= 1L), p_25))), 13)) | g_14[2]) <= 0UL));
                l_45[4][1][2]++;
                if (l_35.f1)
                    goto lbl_181;
            }
            else
            { 
                int64_t l_49 = 0L;
                int32_t l_50 = 0x338462C7L;
                int32_t l_51 = (-8L);
                int32_t l_55 = 0xC827221BL;
                ++g_57;
                l_48 = 0x4A51E29AL;
                if (g_14[1])
                    break;
            }
        }
        for (p_27 = 0; (p_27 != 56); p_27 = safe_add_func_int16_t_s_s(p_27, 8))
        { 
            for (g_57 = 0; (g_57 <= 1); g_57 += 1)
            { 
                int i, j, k;
                return l_45[(g_57 + 1)][(g_57 + 1)][(g_57 + 1)];
            }
            for (g_44 = (-11); (g_44 <= 13); g_44 = safe_add_func_uint64_t_u_u(g_44, 1))
            { 
                g_74 |= (safe_mod_func_uint32_t_u_u(((safe_div_func_int16_t_s_s((g_14[0] && (safe_lshift_func_int16_t_s_s(((safe_div_func_uint8_t_u_u((safe_mod_func_uint64_t_u_u((l_53 = (l_54 = g_14[0])), p_25)), g_15[1])) , p_26), 7))), p_24.f1)) ^ p_24.f0), l_45[4][1][2]));
            }
        }
        if ((safe_add_func_uint16_t_u_u(((((safe_unary_minus_func_int32_t_s((l_52 != g_44))) == (safe_lshift_func_uint8_t_u_u(((safe_div_func_int16_t_s_s((p_26 < (safe_div_func_uint64_t_u_u(l_45[3][3][0], l_54))), g_21[1][3])) & p_23.f1), 5))) , g_74) , p_23.f1), 0x02A3L)))
        { 
            g_74 = ((((safe_sub_func_uint32_t_u_u((((+(p_26 != (safe_mul_func_uint8_t_u_u(g_56, (((safe_rshift_func_int8_t_s_s(g_57, 2)) < 18446744073709551608UL) | l_53))))) < 9UL) >= 1L), 0x0A5FB02CL)) || g_56) | 4294967290UL) == p_27);
        }
        else
        { 
            uint32_t l_93 = 0xEA40FDB0L;
            int32_t l_108 = 9L;
            int32_t l_109 = (-1L);
            if ((g_14[2] ^ l_45[4][3][0]))
            { 
                uint32_t l_106 = 0xDCBC2B75L;
                int32_t l_107 = 0xA2C14779L;
                l_107 &= (safe_add_func_uint8_t_u_u((l_93 == (safe_div_func_uint16_t_u_u(p_23.f1, (l_96[2][2][0] , (safe_div_func_int64_t_s_s((safe_rshift_func_int16_t_s_s((((safe_rshift_func_uint16_t_u_s(((safe_lshift_func_uint16_t_u_u(p_24.f0, g_105)) >= g_14[0]), g_105)) > l_37) == g_21[1][2]), 11)), 9L)))))), l_106));
                g_110++;
                g_74 = (safe_add_func_uint8_t_u_u(0xFAL, ((safe_sub_func_int16_t_s_s(((((1UL <= (p_24.f0 > g_15[1])) || p_27) >= g_13[2][0]) <= l_108), g_15[1])) ^ g_110)));
            }
            else
            { 
                g_117--;
                l_52 = (g_120[0][0] | (safe_lshift_func_uint16_t_u_u((l_123[3] , (!(l_96[2][2][0].f1 ^ (safe_lshift_func_uint16_t_u_s((g_21[1][3] = 0x9AD6L), l_96[2][2][0].f2.f1))))), 11)));
            }
        }
    }
lbl_181:
    for (l_54 = 0; (l_54 <= 1); l_54 += 1)
    { 
        uint8_t l_141[1];
        int32_t l_146 = (-9L);
        int32_t l_148 = 1L;
        int32_t l_150 = 0x4961C1CCL;
        int32_t l_151 = 0x915A15C4L;
        int32_t l_152 = 0x34627D40L;
        int32_t l_153 = (-10L);
        int32_t l_155 = (-4L);
        int32_t l_156 = (-8L);
        int i;
        for (i = 0; i < 1; i++)
            l_141[i] = 0x57L;
        if ((safe_div_func_uint16_t_u_u((l_129 , ((((g_14[0] <= g_14[2]) || ((safe_lshift_func_int16_t_s_s(l_96[2][2][0].f2.f4, 15)) == l_132)) && p_27) ^ g_14[1])), 0xC42BL)))
        { 
            if (p_27)
                break;
            for (l_129.f0.f3 = 1; (l_129.f0.f3 >= 0); l_129.f0.f3 -= 1)
            { 
                int32_t l_137[3];
                int32_t l_138[3][3] = {{0x6CD9D43CL,1L,0x6CD9D43CL},{0x160A43F8L,0x160A43F8L,0x160A43F8L},{0x6CD9D43CL,1L,0x6CD9D43CL}};
                int i, j;
                for (i = 0; i < 3; i++)
                    l_137[i] = 0xFD5F4809L;
                l_138[1][1] = (safe_rshift_func_int16_t_s_u(((((safe_rshift_func_uint16_t_u_s(3UL, g_13[l_129.f0.f3][(l_129.f0.f3 + 1)])) <= g_21[l_54][(l_54 + 1)]) ^ (l_137[0] = ((-3L) ^ p_23.f1))) > g_9), 10));
            }
        }
        else
        { 
            g_120[1][0] |= (((safe_div_func_int64_t_s_s(l_141[0], ((!g_21[1][3]) && (!(p_26 & p_24.f0))))) , g_110) && l_129.f1);
            l_146 = (safe_lshift_func_int8_t_s_s((-3L), 7));
            for (l_53 = 0; (l_53 <= 1); l_53 += 1)
            { 
                uint16_t l_147 = 0x60D0L;
                l_147 = 0L;
            }
        }
        l_157--;
        for (g_110 = 0; (g_110 <= 1); g_110 += 1)
        { 
            union U3 l_162 = {-4L};
            if (g_74)
            { 
                if (g_14[1])
                    break;
                g_74 = (((safe_mod_func_int32_t_s_s((l_162 , 0xC837B64FL), (safe_unary_minus_func_uint64_t_u((p_24 , g_56))))) == g_14[0]) & g_44);
            }
            else
            { 
                int i, j;
                l_150 = ((g_21[l_54][(l_54 + 3)] = p_24.f2) , (!((safe_lshift_func_uint16_t_u_s(((g_57 == ((~0L) > 0x02L)) < g_117), 10)) ^ g_57)));
                g_120[0][0] |= (1UL > (safe_div_func_uint64_t_u_u(((safe_mul_func_uint8_t_u_u((safe_div_func_uint8_t_u_u((safe_mod_func_uint32_t_u_u(((safe_mod_func_uint32_t_u_u((((!0xEA22L) >= (p_24.f1 | ((safe_sub_func_uint64_t_u_u(l_54, l_148)) >= 0x24L))) & l_162.f1), 0xF7435F21L)) > g_21[l_54][(l_54 + 3)]), 0x77B4B0E1L)), p_23.f0)), p_23.f1)) , g_57), g_21[l_54][(l_54 + 3)])));
            }
        }
    }
    l_96[2][2][0].f1 |= g_14[2];
    return g_57;
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_9, "g_9", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transparent_crc(g_13[i][j], "g_13[i][j]", print_hash_value);

        }
    }
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_14[i], "g_14[i]", print_hash_value);

    }
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_15[i], "g_15[i]", print_hash_value);

    }
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 5; j++)
        {
            transparent_crc(g_21[i][j], "g_21[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_44, "g_44", print_hash_value);
    transparent_crc(g_56, "g_56", print_hash_value);
    transparent_crc(g_57, "g_57", print_hash_value);
    transparent_crc(g_74, "g_74", print_hash_value);
    transparent_crc(g_105, "g_105", print_hash_value);
    transparent_crc(g_110, "g_110", print_hash_value);
    transparent_crc(g_117, "g_117", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 1; j++)
        {
            transparent_crc(g_120[i][j], "g_120[i][j]", print_hash_value);

        }
    }
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 5; j++)
        {
            for (k = 0; k < 3; k++)
            {
                transparent_crc(g_228[i][j][k], "g_228[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_237.f0.f0, "g_237.f0.f0", print_hash_value);
    transparent_crc(g_237.f0.f1, "g_237.f0.f1", print_hash_value);
    transparent_crc(g_237.f0.f2, "g_237.f0.f2", print_hash_value);
    transparent_crc(g_237.f0.f3, "g_237.f0.f3", print_hash_value);
    transparent_crc(g_237.f0.f4, "g_237.f0.f4", print_hash_value);
    transparent_crc(g_237.f1, "g_237.f1", print_hash_value);
    transparent_crc(g_237.f3, "g_237.f3", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 5; k++)
            {
                transparent_crc(g_256[i][j][k], "g_256[i][j][k]", print_hash_value);

            }
        }
    }
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transparent_crc(g_295[i][j], "g_295[i][j]", print_hash_value);

        }
    }
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
