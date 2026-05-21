// SPDX-License-Identifier: MIT
// cctest_csmith_2d506da5.c --- cctest case csmith_2d506da5 (csmith seed 760245669)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x340c2376 */

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

// Options:   -s 760245669 -o /tmp/csmith_gen_e2zw4hzk/csmith.c --concise --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 8 --max-block-size 5 --max-block-depth 4 --max-expr-complexity 8 --max-array-dim 3 --max-array-len-per-dim 7 --max-struct-fields 8 --max-union-fields 5

static long __undefined;


#pragma pack(push)
#pragma pack(1)
struct S0 {
   int16_t  f0;
   uint64_t  f1;
   int32_t  f2;
   uint32_t  f3;
   uint32_t  f4;
   int8_t  f5;
   int32_t  f6;
   int16_t  f7;
};
#pragma pack(pop)

union U1 {
   const int64_t  f0;
   struct S0  f1;
};

union U2 {
   int32_t  f0;
   const uint32_t  f1;
};

union U3 {
   int32_t  f0;
   const struct S0  f1;
   uint32_t  f2;
};

union U4 {
   const uint32_t  f0;
   uint8_t  f1;
};


static int32_t g_2 = (-4L);
static union U2 g_19 = {-2L};
static uint16_t g_31[4] = {1UL,1UL,1UL,1UL};
static union U3 g_47 = {3L};
static union U3 *g_46 = &g_47;
static union U3 ** const g_64 = &g_46;
static union U3 ** const *g_63[6] = {&g_64,&g_64,&g_64,&g_64,&g_64,&g_64};
static union U3 ** const **g_62 = &g_63[3];
static int32_t g_68 = 7L;
static int32_t g_80[2] = {0xC503401FL,0xC503401FL};
static int32_t *g_84 = &g_68;
static int16_t g_108 = 1L;
static uint64_t g_112 = 0UL;
static int32_t g_121 = (-1L);
static uint32_t g_125[4] = {4294967295UL,4294967295UL,4294967295UL,4294967295UL};
static struct S0 g_181 = {0xA63CL,18446744073709551615UL,0xB764D413L,0x0277B54EL,0xBA6927BAL,-8L,0xB5B974B4L,-1L};
static int64_t g_188[4][3] = {{(-4L),(-4L),(-4L)},{(-4L),(-4L),(-4L)},{(-4L),(-4L),(-4L)},{(-4L),(-4L),(-4L)}};
static union U3 *g_194 = (void*)0;
static union U1 g_214 = {0x0A84A55BADF4511BLL};
static union U3 ** const g_233 = &g_46;
static uint8_t g_253 = 246UL;
static union U2 g_273 = {0xDA9C454EL};
static int16_t *g_312[2] = {(void*)0,(void*)0};
static union U4 g_357 = {0x3FD0978EL};
static union U4 *g_469 = &g_357;
static union U4 **g_468 = &g_469;
static int8_t g_484 = 0x69L;
static uint64_t *g_489 = &g_181.f1;
static uint64_t **g_488 = &g_489;
static uint64_t ***g_487 = &g_488;
static uint8_t g_507 = 0xB0L;
static uint64_t **g_641 = &g_489;
static uint16_t g_652[5] = {0x419AL,0x419AL,0x419AL,0x419AL,0x419AL};
static struct S0 *g_660 = (void*)0;
static int64_t g_831 = 3L;
static union U3 g_865 = {-3L};
static uint8_t *g_883 = &g_357.f1;
static uint8_t * const *g_882 = &g_883;
static int32_t g_937 = (-1L);
static uint32_t g_960[2] = {2UL,2UL};
static union U3 *g_1004 = &g_865;
static union U2 g_1030 = {2L};
static uint64_t g_1136 = 18446744073709551609UL;
static union U3 g_1140 = {0xCCFCEAE9L};
static int16_t g_1144 = 0x5712L;
static uint16_t g_1145[4][4][4] = {{{0x698DL,0x17C4L,0x17C4L,0x698DL},{0x9F7EL,0x0A25L,65535UL,65529UL},{65535UL,0xCD9CL,65533UL,65531UL},{65529UL,65535UL,5UL,65531UL}},{{0UL,0xCD9CL,0xE473L,0x7067L},{1UL,0x2594L,65531UL,0xE473L},{65535UL,0x698DL,0xB9C4L,0x698DL},{65531UL,0x9F7EL,65530UL,65535UL}},{{0x17C4L,65535UL,0x2594L,65533UL},{0xDA12L,65535UL,0xE473L,5UL},{0xDA12L,0x7067L,0x2594L,0xE473L},{0x17C4L,5UL,65530UL,65531UL}},{{65531UL,65535UL,0xB9C4L,0xB9C4L},{65535UL,65535UL,65531UL,65530UL},{1UL,0x3A70L,0xE473L,0x2594L},{0UL,65531UL,5UL,0xE473L}}};
static uint32_t g_1153 = 1UL;
static uint64_t g_1180 = 0x979077D000B7B5FFLL;
static int32_t g_1253[2][7][3] = {{{3L,0x05D5F758L,0x05D5F758L},{3L,4L,4L},{3L,0x05D5F758L,0x05D5F758L},{3L,4L,4L},{3L,0x05D5F758L,0x05D5F758L},{3L,4L,4L},{3L,0x05D5F758L,0x05D5F758L}},{{3L,4L,4L},{3L,0x05D5F758L,0x05D5F758L},{3L,4L,4L},{3L,0x05D5F758L,0x05D5F758L},{3L,4L,4L},{3L,0x05D5F758L,0x05D5F758L},{3L,4L,4L}}};
static uint16_t g_1264 = 0xD27BL;
static uint32_t g_1268 = 18446744073709551611UL;
static const uint16_t **g_1273 = (void*)0;
static int32_t g_1295 = 0x01A06A39L;
static int32_t g_1338[2][6] = {{0x3925E7D1L,2L,2L,0x3925E7D1L,2L,2L},{0x3925E7D1L,2L,2L,0x3925E7D1L,2L,2L}};
static union U2 *g_1433 = (void*)0;
static uint16_t ****g_1533 = (void*)0;
static const uint8_t *g_1552 = (void*)0;
static const uint8_t **g_1551 = &g_1552;
static const uint8_t **g_1554 = &g_1552;
static struct S0 *g_1562 = &g_181;
static union U4 ***g_1622 = (void*)0;
static union U4 ****g_1621 = &g_1622;
static int32_t **g_1654 = &g_84;
static int32_t *** const g_1653 = &g_1654;
static union U4 g_1689 = {0xAF7741B4L};
static uint16_t *g_1713 = &g_1264;
static uint16_t ** const g_1712 = &g_1713;
static uint16_t ** const *g_1711 = &g_1712;
static int8_t g_1733 = 1L;
static union U3 **g_1761[7][1][6] = {{{&g_194,&g_46,&g_46,&g_194,&g_46,&g_46}},{{&g_194,&g_46,&g_46,&g_194,&g_46,&g_46}},{{&g_194,&g_46,&g_46,&g_194,&g_46,&g_46}},{{&g_194,&g_46,&g_46,&g_194,&g_46,&g_46}},{{&g_194,&g_46,&g_46,&g_194,&g_46,&g_46}},{{&g_194,&g_46,&g_46,&g_194,&g_46,&g_46}},{{&g_194,&g_46,&g_46,&g_194,&g_46,&g_46}}};
static union U3 ***g_1760[4][6][4] = {{{&g_1761[3][0][5],&g_1761[3][0][0],(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,&g_1761[3][0][0]},{&g_1761[3][0][5],(void*)0,&g_1761[6][0][5],(void*)0},{&g_1761[3][0][5],&g_1761[3][0][0],(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,&g_1761[3][0][0]},{&g_1761[3][0][5],(void*)0,&g_1761[6][0][5],(void*)0}},{{&g_1761[3][0][5],&g_1761[3][0][0],(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,&g_1761[3][0][0]},{&g_1761[3][0][5],(void*)0,&g_1761[6][0][5],(void*)0},{&g_1761[3][0][5],&g_1761[3][0][0],(void*)0,(void*)0},{&g_1761[6][0][5],&g_1761[3][0][0],&g_1761[6][0][5],&g_1761[1][0][0]},{(void*)0,&g_1761[3][0][0],&g_1761[3][0][5],&g_1761[3][0][0]}},{{(void*)0,&g_1761[1][0][0],&g_1761[6][0][5],&g_1761[3][0][0]},{&g_1761[6][0][5],&g_1761[3][0][0],&g_1761[6][0][5],&g_1761[1][0][0]},{(void*)0,&g_1761[3][0][0],&g_1761[3][0][5],&g_1761[3][0][0]},{(void*)0,&g_1761[1][0][0],&g_1761[6][0][5],&g_1761[3][0][0]},{&g_1761[6][0][5],&g_1761[3][0][0],&g_1761[6][0][5],&g_1761[1][0][0]},{(void*)0,&g_1761[3][0][0],&g_1761[3][0][5],&g_1761[3][0][0]}},{{(void*)0,&g_1761[1][0][0],&g_1761[6][0][5],&g_1761[3][0][0]},{&g_1761[6][0][5],&g_1761[3][0][0],&g_1761[6][0][5],&g_1761[1][0][0]},{(void*)0,&g_1761[3][0][0],&g_1761[3][0][5],&g_1761[3][0][0]},{(void*)0,&g_1761[1][0][0],&g_1761[6][0][5],&g_1761[3][0][0]},{&g_1761[6][0][5],&g_1761[3][0][0],&g_1761[6][0][5],&g_1761[1][0][0]},{(void*)0,&g_1761[3][0][0],&g_1761[3][0][5],&g_1761[3][0][0]}}};
static union U3 ****g_1759 = &g_1760[0][3][1];
static union U2 g_1768 = {0xE59C2595L};
static union U2 *g_1767[6][1] = {{&g_273},{&g_1768},{&g_273},{&g_273},{&g_1768},{&g_273}};
static union U4 * const * const g_1776 = (void*)0;
static union U4 * const * const *g_1775 = &g_1776;
static int32_t *g_1799 = &g_80[0];



static uint32_t  func_1(void);
static union U2 * func_5(uint32_t  p_6, uint64_t  p_7, struct S0  p_8);
static uint16_t  func_11(const int8_t  p_12, union U2 * p_13, union U1  p_14);
static const int32_t * func_21(union U2  p_22, struct S0  p_23, union U2 * p_24, int32_t * p_25);
static union U2  func_26(union U2 * p_27, int32_t  p_28);
static union U3 * func_34(union U4  p_35, uint16_t * p_36, int16_t  p_37);
static uint16_t * func_39(union U4  p_40);
static union U4  func_41(union U3 * p_42, union U3 * p_43, union U3 * p_44, uint16_t  p_45);




static uint32_t  func_1(void)
{ 
    union U1 l_20 = {-7L};
    union U4 * const *l_1773[4][1][6] = {{{&g_469,&g_469,&g_469,&g_469,&g_469,&g_469}},{{&g_469,&g_469,&g_469,&g_469,&g_469,&g_469}},{{&g_469,&g_469,&g_469,&g_469,&g_469,&g_469}},{{&g_469,&g_469,&g_469,&g_469,&g_469,&g_469}}};
    union U4 * const * const *l_1772 = &l_1773[0][0][2];
    uint16_t **l_1801[3];
    int8_t l_1820 = 0xD2L;
    int32_t l_1823 = 0x2145A377L;
    struct S0 **l_1841 = &g_660;
    const uint64_t *l_1845 = &g_1136;
    const uint64_t **l_1844 = &l_1845;
    const uint64_t ***l_1843[5][6] = {{(void*)0,&l_1844,&l_1844,&l_1844,&l_1844,&l_1844},{&l_1844,(void*)0,&l_1844,&l_1844,&l_1844,&l_1844},{&l_1844,&l_1844,&l_1844,&l_1844,(void*)0,(void*)0},{&l_1844,(void*)0,(void*)0,&l_1844,&l_1844,&l_1844},{&l_1844,&l_1844,&l_1844,&l_1844,&l_1844,(void*)0}};
    const uint64_t ****l_1842 = &l_1843[2][2];
    int i, j, k;
    for (i = 0; i < 3; i++)
        l_1801[i] = &g_1713;
    for (g_2 = 0; (g_2 == 13); g_2 = safe_add_func_int64_t_s_s(g_2, 8))
    { 
        uint32_t l_17 = 0x48112DEFL;
        union U2 *l_18[5] = {&g_19,&g_19,&g_19,&g_19,&g_19};
        struct S0 l_1436 = {1L,18446744073709551612UL,0x9447463DL,8UL,1UL,0x1FL,0x51319591L,1L};
        union U2 **l_1766[7][2][7] = {{{&l_18[4],&l_18[4],&l_18[3],&l_18[4],&g_1433,&g_1433,&l_18[3]},{&g_1433,&l_18[4],&g_1433,&g_1433,&l_18[4],&g_1433,&g_1433}},{{(void*)0,&l_18[3],&l_18[3],&l_18[4],&g_1433,&g_1433,&g_1433},{&g_1433,&l_18[4],&l_18[1],&l_18[4],&g_1433,&g_1433,(void*)0}},{{&l_18[3],&l_18[3],&g_1433,&l_18[4],&l_18[4],(void*)0,&l_18[4]},{(void*)0,&l_18[4],&l_18[4],(void*)0,&l_18[4],&l_18[4],&g_1433}},{{&l_18[3],&l_18[4],&g_1433,&g_1433,&l_18[3],&l_18[3],&g_1433},{&g_1433,(void*)0,&g_1433,&l_18[4],&g_1433,&g_1433,&g_1433}},{{(void*)0,&g_1433,&l_18[4],&g_1433,&l_18[4],&g_1433,&l_18[4]},{&g_1433,&g_1433,&l_18[4],&g_1433,&g_1433,&g_1433,&g_1433}},{{&l_18[4],&g_1433,&g_1433,&l_18[3],&l_18[3],&g_1433,&g_1433},{(void*)0,&g_1433,&l_18[4],&g_1433,&l_18[1],&g_1433,&l_18[4]}},{{&g_1433,&l_18[4],&l_18[3],&g_1433,&l_18[3],&l_18[4],&g_1433},{&l_18[4],&g_1433,&l_18[1],&g_1433,&l_18[4],&g_1433,(void*)0}}};
        uint8_t l_1777 = 0x3CL;
        const uint32_t *l_1779 = &l_1436.f3;
        uint32_t *l_1782 = (void*)0;
        int32_t l_1819 = (-1L);
        int i, j, k;
        g_1767[3][0] = func_5(((safe_div_func_int64_t_s_s((func_11((safe_rshift_func_uint8_t_u_u(l_17, 0)), l_18[4], l_20) || g_181.f2), g_188[1][0])) , (0xC8B12807BE79C242LL <= (**g_488))), l_20.f0, l_1436);
        for (g_1144 = 0; (g_1144 <= 28); g_1144 = safe_add_func_uint64_t_u_u(g_1144, 1))
        { 
            union U4 ***l_1771 = &g_468;
            union U4 * const * const **l_1774 = (void*)0;
            int32_t l_1778 = (-1L);
            union U2 l_1834[2][5][6] = {{{{-6L},{-6L},{-6L},{-6L},{-6L},{-6L}},{{-6L},{-6L},{-6L},{-6L},{-6L},{-6L}},{{-6L},{-6L},{-6L},{-6L},{-6L},{-6L}},{{-6L},{-6L},{-6L},{-6L},{-6L},{-6L}},{{-6L},{-6L},{-6L},{-6L},{-6L},{-6L}}},{{{-6L},{-6L},{-6L},{-6L},{-6L},{-6L}},{{-6L},{-6L},{-6L},{-6L},{-6L},{-6L}},{{-6L},{-6L},{-6L},{-6L},{-6L},{-6L}},{{-6L},{-6L},{-6L},{-6L},{-6L},{-6L}},{{-6L},{-6L},{-6L},{-6L},{-6L},{-6L}}}};
            int i, j, k;
            if ((((*g_1621) = l_1771) == (g_1775 = l_1772)))
            { 
                int32_t l_1793 = (-1L);
                const int32_t l_1794 = 9L;
                int32_t l_1800 = 0x879974D8L;
                if ((*g_84))
                { 
                    uint32_t **l_1780 = (void*)0;
                    uint32_t **l_1781[1];
                    int32_t l_1785[7] = {1L,1L,1L,1L,1L,1L,1L};
                    uint8_t **l_1791 = &g_883;
                    uint8_t ***l_1790[4] = {&l_1791,&l_1791,&l_1791,&l_1791};
                    uint8_t ****l_1792 = &l_1790[2];
                    int i;
                    for (i = 0; i < 1; i++)
                        l_1781[i] = (void*)0;
                    (**g_1653) = (*g_1654);
                    l_1778 ^= l_1777;
                    (**g_1653) = (**g_1653);
                    (**g_1654) = (**g_1654);
                    l_1778 = (((l_1779 == (l_1782 = &g_1268)) && (((safe_mod_func_uint16_t_u_u((g_214 , (((l_1785[0] != (l_1793 = (safe_sub_func_int32_t_s_s(((((***g_487) = (safe_sub_func_int32_t_s_s(0L, l_1778))) >= (((((*l_1792) = l_1790[2]) != &g_1554) < 0x23BAL) , l_20.f0)) || l_20.f0), 0x04F825E9L)))) , (**g_488)) < l_20.f0)), l_1794)) <= (*g_1713)) & 0x5D1FL)) && g_1689.f1);
                }
                else
                { 
                    int32_t **l_1795 = (void*)0;
                    int32_t **l_1796 = (void*)0;
                    int32_t *l_1798 = &g_80[0];
                    int32_t **l_1797 = &l_1798;
                    g_1799 = ((*l_1797) = ((*g_1654) = (*g_1654)));
                    l_1800 |= l_1793;
                    (*g_1799) = (((l_1801[2] != (void*)0) , ((~0UL) < (l_1436.f4 < (safe_rshift_func_int8_t_s_s(((l_1819 = (l_1436 , (((safe_sub_func_uint64_t_u_u((safe_div_func_int32_t_s_s((((safe_div_func_uint16_t_u_u((safe_div_func_uint8_t_u_u(l_1793, (--(*g_883)))), ((((((safe_rshift_func_int8_t_s_s(((safe_mod_func_int8_t_s_s((g_1733 = l_1793), l_1778)) || g_214.f0), 0)) && l_1778) > g_937) <= l_1794) < (***g_1711)) ^ l_1778))) >= l_1436.f2) >= (***g_1653)), (*g_1799))), l_1777)) & (*g_1799)) , (*g_883)))) > l_20.f0), 1))))) || g_80[0]);
                    return l_1820;
                }
            }
            else
            { 
                const int32_t *l_1824 = &g_80[0];
                union U4 l_1839 = {1UL};
                int32_t l_1840[1];
                int i;
                for (i = 0; i < 1; i++)
                    l_1840[i] = 0x643D10B7L;
                for (l_20.f1.f0 = 26; (l_20.f1.f0 >= 20); l_20.f1.f0--)
                { 
                    const int32_t **l_1825 = &l_1824;
                    const int32_t *l_1827 = &g_121;
                    const int32_t **l_1826 = &l_1827;
                    int32_t *l_1835 = &l_1778;
                    int32_t *l_1836 = &l_1819;
                    if (l_1823)
                        break;
                    (*l_1826) = ((*l_1825) = l_1824);
                    (*l_1836) |= (!(0xE5A6A071L > ((!2UL) ^ (safe_sub_func_uint16_t_u_u(0UL, ((((*l_1835) |= ((*l_1824) == ((l_1834[1][2][3] , ((**g_1654) = (*l_1824))) > g_181.f5))) & l_1823) & l_1834[1][2][3].f0))))));
                }
                (*g_1562) = (*g_1562);
                l_1840[0] |= (safe_lshift_func_uint8_t_u_u((l_1839 , l_1436.f3), (*g_883)));
                (*g_1562) = (*g_1562);
            }
        }
    }
    (*l_1841) = &g_181;
    (**g_1654) = (((((*g_660) , l_1842) != &l_1843[1][4]) && (((safe_lshift_func_uint16_t_u_s(l_1823, l_20.f0)) & ((safe_add_func_int8_t_s_s(((0x047D3762L | (safe_div_func_int32_t_s_s(((l_1823 | l_1820) & g_1030.f1), l_1820))) ^ 0xB7L), l_20.f0)) != g_1768.f1)) && (-2L))) , l_20.f0);
    (**g_1654) &= ((void*)0 != &g_831);
    return g_181.f7;
}



static union U2 * func_5(uint32_t  p_6, uint64_t  p_7, struct S0  p_8)
{ 
    int32_t l_1455 = 0x562506FAL;
    int32_t l_1456 = 0L;
    const int64_t l_1457 = 0xBA63C379713F1D0ELL;
    uint16_t *l_1458 = &g_31[1];
    int8_t ** const * const l_1459 = (void*)0;
    int8_t *l_1462 = &g_484;
    int8_t **l_1461 = &l_1462;
    int8_t ** const *l_1460 = &l_1461;
    int32_t l_1474 = 0x859D5ED8L;
    int32_t l_1475[4];
    int32_t ****l_1485 = (void*)0;
    union U2 *l_1518 = &g_19;
    uint16_t **l_1538 = &l_1458;
    uint16_t ***l_1537[2];
    uint16_t ****l_1536[7];
    int32_t l_1598 = 0xA1347853L;
    uint8_t l_1599 = 0x99L;
    struct S0 l_1602 = {0xE792L,18446744073709551611UL,-5L,18446744073709551613UL,18446744073709551615UL,0L,0x2C1D4891L,0xB96AL};
    uint16_t l_1634 = 0x5EB7L;
    union U3 l_1651[4][4] = {{{-1L},{-3L},{-3L},{-1L}},{{-3L},{-1L},{-3L},{-3L}},{{-1L},{-1L},{0L},{-1L}},{{-1L},{-3L},{-3L},{-1L}}};
    uint16_t l_1661 = 0xD775L;
    union U4 *l_1688 = &g_1689;
    int32_t l_1722 = 0x541C720AL;
    union U3 ***l_1756 = (void*)0;
    union U3 ****l_1755 = &l_1756;
    int i, j;
    for (i = 0; i < 4; i++)
        l_1475[i] = 0xE6A263CDL;
    for (i = 0; i < 2; i++)
        l_1537[i] = &l_1538;
    for (i = 0; i < 7; i++)
        l_1536[i] = &l_1537[1];
lbl_1512:
    l_1460 = ((safe_mul_func_uint8_t_u_u((safe_lshift_func_uint16_t_u_u(((safe_lshift_func_int16_t_s_u(((safe_add_func_int16_t_s_s((safe_add_func_int64_t_s_s(0x2607A0498D477791LL, p_8.f0)), ((*l_1458) ^= ((p_8.f7 &= ((0UL < ((((***g_487) = (safe_mul_func_int8_t_s_s((l_1456 = (p_8.f2 >= (safe_div_func_uint64_t_u_u(p_8.f2, (((safe_mod_func_int8_t_s_s(((g_1145[0][2][0] >= (safe_mul_func_int16_t_s_s(((0xB2L > 1UL) != g_214.f0), l_1455))) , 0x73L), 247UL)) , l_1455) & l_1455))))), p_8.f6))) >= l_1457) | p_7)) , (-8L))) == l_1457)))) && p_8.f3), 6)) == p_8.f0), g_652[0])), p_8.f4)) , l_1459);
lbl_1539:
    for (p_8.f7 = 0; (p_8.f7 < 23); ++p_8.f7)
    { 
        uint32_t l_1465 = 0xF07B277FL;
        int32_t l_1478 = 0xE5DD258FL;
        union U2 *l_1515 = &g_273;
        if (l_1465)
            break;
        (*g_64) = (*g_233);
        for (g_1140.f2 = 0; (g_1140.f2 <= 1); g_1140.f2 += 1)
        { 
            union U2 **l_1468 = (void*)0;
            union U2 ***l_1467 = &l_1468;
            int32_t l_1476 = (-3L);
            int32_t l_1477 = 2L;
            union U3 **l_1517 = &g_194;
            union U3 ***l_1516 = &l_1517;
            int i;
        }
        (*g_84) = l_1478;
    }
    if ((p_8.f2 ^ (safe_div_func_uint64_t_u_u((safe_lshift_func_uint8_t_u_u((((**g_882) = p_8.f7) ^ (safe_rshift_func_uint8_t_u_u(((((((safe_div_func_uint8_t_u_u((safe_div_func_uint8_t_u_u(p_7, p_8.f3)), (safe_add_func_int64_t_s_s(l_1456, (p_8.f1 &= (safe_lshift_func_uint16_t_u_s(g_68, (p_8.f0 &= p_8.f7)))))))) || (*g_84)) != 0x25E66BD8L) ^ p_8.f7) ^ p_8.f2) <= g_31[0]), p_7))), p_8.f6)), l_1455))))
    { 
        uint64_t * const *l_1561 = &g_489;
        uint64_t * const **l_1560 = &l_1561;
        int32_t l_1579 = 0xD40272B4L;
        int32_t l_1589 = 0x0E5FB5E4L;
        int32_t l_1592 = 0x4690B8BCL;
        int32_t l_1593 = 1L;
        int32_t l_1594 = (-3L);
        int32_t l_1595 = 0x653E6211L;
        int32_t l_1596[2][3][2] = {{{0x122A3834L,6L},{6L,0x122A3834L},{6L,6L}},{{0x122A3834L,6L},{6L,0x122A3834L},{6L,6L}}};
        int i, j, k;
        for (g_357.f1 = 0; (g_357.f1 <= 2); g_357.f1 += 1)
        { 
            uint16_t ****l_1535 = (void*)0;
            uint16_t *****l_1534[6] = {&l_1535,&l_1535,&l_1535,&l_1535,&l_1535,&l_1535};
            int32_t l_1557 = 0x7F41BBB9L;
            int32_t l_1566 = 0xDEC11D1DL;
            const union U2 *l_1581 = (void*)0;
            const union U2 **l_1580 = &l_1581;
            union U4 ***l_1583 = &g_468;
            int8_t l_1588[4][1][5] = {{{0xFAL,0xD0L,0xFAL,0xFAL,0xD0L}},{{1L,0x39L,0x39L,1L,0x39L}},{{0xD0L,0xD0L,1L,0xD0L,0xD0L}},{{0x39L,1L,0x39L,0x39L,1L}}};
            int32_t l_1590 = 0x2F076117L;
            int32_t l_1591 = 0x27215511L;
            int32_t l_1597[6][5][7] = {{{2L,0xCD55B273L,0x6720AFEAL,0xD6F2C300L,0xA89D838DL,(-1L),5L},{0xADFCC23EL,(-1L),0x8BE346C4L,(-1L),0x68BE5363L,(-1L),(-1L)},{(-1L),0L,(-10L),(-9L),0xADFCC23EL,6L,(-1L)},{0xB465E785L,0x059865D5L,1L,6L,(-1L),0xA89D838DL,(-1L)},{0x505C4CC6L,0x83191863L,1L,0xA89A01ADL,(-1L),0x6720AFEAL,(-9L)}},{{0xA89D838DL,0x2EE1DD0FL,0xCB6EC96FL,(-9L),0xD1250E50L,(-9L),0xCB6EC96FL},{(-1L),(-1L),(-4L),0xD1250E50L,1L,0xCDC9C10FL,5L},{0L,0xA353CAB8L,0xA89D838DL,0x059865D5L,0L,0x27E64100L,0x17B19EFEL},{0x4E2534DDL,0x6720AFEAL,0L,(-1L),1L,0xA353CAB8L,0L},{0x68BE5363L,0xF7F9401DL,(-9L),(-1L),0xD1250E50L,1L,0x53AD0BF5L}},{{(-10L),0xD1250E50L,0x2EE1DD0FL,(-1L),0x868DBABFL,(-1L),(-1L)},{(-1L),0xDA3358CFL,0x505C4CC6L,0x83191863L,1L,0xA89A01ADL,(-1L)},{0x868DBABFL,0xADFCC23EL,0x27E64100L,0xB465E785L,(-1L),0L,0x53AD0BF5L},{(-1L),0x0508997BL,0x17B19EFEL,0x17B19EFEL,0x0508997BL,(-1L),0L},{0xCD55B273L,0x059865D5L,0xD1250E50L,0x53AD0BF5L,0xB465E785L,1L,0x17B19EFEL}},{{0x17B19EFEL,(-1L),(-1L),0x27E64100L,(-1L),0xCB6EC96FL,5L},{0xF7F9401DL,0x059865D5L,0xCDC9C10FL,(-1L),0x6720AFEAL,0x2EE1DD0FL,0xCB6EC96FL},{0xDA3358CFL,0x0508997BL,1L,0x868DBABFL,0xD6F2C300L,0L,(-4L)},{(-9L),0xADFCC23EL,6L,(-1L),0xF7F9401DL,0x8BE346C4L,0x6720AFEAL},{(-4L),0xDA3358CFL,0x6720AFEAL,(-1L),0L,0xF7F9401DL,(-1L)}},{{0L,0xD1250E50L,(-1L),0x868DBABFL,0x83191863L,0x83191863L,0x868DBABFL},{0xADFCC23EL,0xF7F9401DL,0xADFCC23EL,(-1L),0x17B19EFEL,(-1L),(-1L)},{0L,0x6720AFEAL,1L,0x27E64100L,(-1L),(-4L),6L},{1L,0xA353CAB8L,0x868DBABFL,0x53AD0BF5L,(-1L),(-1L),0x8BE346C4L},{1L,(-1L),0xB465E785L,0x17B19EFEL,1L,0x83191863L,0xDA3358CFL}},{{(-1L),(-1L),0L,0xB465E785L,(-4L),0xF7F9401DL,1L},{(-1L),0xD6F2C300L,(-1L),0x83191863L,0xA353CAB8L,0x8BE346C4L,0L},{(-1L),1L,0x8BE346C4L,(-1L),(-1L),0L,(-1L)},{(-1L),0x2EE1DD0FL,1L,(-1L),1L,0x2EE1DD0FL,(-1L)},{1L,1L,(-4L),(-1L),(-1L),0xCB6EC96FL,0xB465E785L}}};
            int i, j, k;
            if (g_68)
                goto lbl_1512;
            l_1536[0] = (g_1533 = g_1533);
            if (p_8.f1)
                goto lbl_1539;
            for (g_214.f1.f6 = 5; (g_214.f1.f6 >= 0); g_214.f1.f6 -= 1)
            { 
                int32_t l_1564 = 1L;
                union U4 ***l_1585 = &g_468;
                int32_t *l_1586 = &l_1475[2];
                int32_t *l_1587[5];
                int i;
                for (i = 0; i < 5; i++)
                    l_1587[i] = &l_1557;
                for (g_181.f5 = 0; (g_181.f5 <= 3); g_181.f5 += 1)
                { 
                    const uint8_t ***l_1553 = &g_1551;
                    int32_t *l_1563 = &g_80[0];
                    int16_t *l_1565 = &g_1144;
                    int i, j;
                    l_1566 ^= ((((safe_mul_func_int16_t_s_s(g_188[g_181.f5][g_357.f1], ((*l_1565) ^= (safe_mod_func_uint16_t_u_u(((g_1145[3][2][3] = ((safe_div_func_int16_t_s_s((safe_lshift_func_uint8_t_u_s((safe_mod_func_uint64_t_u_u(((g_188[g_357.f1][g_357.f1] , (+((*g_84) = (p_7 | (&g_883 == (g_1554 = ((*l_1553) = g_1551))))))) != ((*l_1563) = (((safe_add_func_int32_t_s_s(l_1557, (safe_div_func_uint16_t_u_u(((*l_1458) = ((void*)0 != l_1560)), l_1557)))) , g_1562) != &p_8))), p_8.f4)), g_1145[0][2][0])), p_7)) , p_7)) && l_1564), 1L))))) <= 0UL) & g_831) & 6UL);
                }
                for (p_8.f1 = 0; (p_8.f1 <= 1); p_8.f1 += 1)
                { 
                    int16_t *l_1571 = &g_108;
                    int32_t l_1572 = (-5L);
                    union U2 **l_1582 = &l_1518;
                    union U4 ****l_1584 = (void*)0;
                    int i, j;
                    (*g_84) = (safe_sub_func_uint64_t_u_u(((g_188[(p_8.f1 + 1)][(p_8.f1 + 1)] > (g_188[(g_357.f1 + 1)][(p_8.f1 + 1)] > (safe_lshift_func_int16_t_s_s((l_1572 = ((*l_1571) = p_8.f6)), 0)))) && (((safe_mul_func_int16_t_s_s((safe_lshift_func_int16_t_s_u((safe_lshift_func_int16_t_s_u(l_1579, 8)), (l_1580 != l_1582))), p_6)) | 1UL) > 0x4E0E23B4L)), p_8.f0));
                    l_1585 = l_1583;
                }
                --l_1599;
                for (l_1598 = 0; (l_1598 <= 1); l_1598 += 1)
                { 
                    return &g_1030;
                }
            }
        }
        (*g_1562) = l_1602;
    }
    else
    { 
        int64_t *l_1608 = &g_188[1][0];
        int32_t l_1632 = 0x9921FDB5L;
        int32_t *l_1633 = &g_80[0];
        const int32_t l_1635[1][7] = {{0L,0L,0L,0L,0L,0L,0L}};
        int32_t *l_1636 = &g_68;
        union U4 *****l_1656 = &g_1621;
        const uint32_t l_1710 = 4UL;
        uint16_t l_1732[4][3][5] = {{{4UL,4UL,0x07BCL,0UL,1UL},{65528UL,1UL,0x07BCL,3UL,9UL},{0xD3A4L,0xB5B9L,65528UL,0xB5B9L,65535UL}},{{1UL,65535UL,1UL,65535UL,0x07BCL},{1UL,0x07BCL,3UL,9UL,9UL},{65535UL,0UL,65535UL,65535UL,0x07BCL}},{{0xD3A4L,9UL,0x07BCL,65535UL,65535UL},{0x07BCL,3UL,9UL,9UL,3UL},{3UL,1UL,0x07BCL,65535UL,1UL}},{{0UL,1UL,65535UL,0xB5B9L,65528UL},{4UL,3UL,3UL,4UL,0xB5B9L},{0UL,9UL,1UL,1UL,0xB5B9L}}};
        struct S0 l_1750 = {-1L,0xA00BF496A75E6097LL,0xFF2FFB09L,0UL,18446744073709551611UL,0L,0x3D992B46L,-1L};
        union U3 ****l_1758 = &l_1756;
        int i, j, k;
        if (((+(-7L)) , (safe_add_func_int64_t_s_s(g_1145[1][3][1], ((***g_487) = ((l_1475[2] |= ((((((*l_1608) |= (1UL == (safe_add_func_uint16_t_u_u(p_8.f0, p_8.f7)))) < (safe_sub_func_int32_t_s_s((safe_sub_func_uint32_t_u_u((safe_div_func_int16_t_s_s(((g_831 = ((void*)0 == &l_1461)) <= p_6), 1UL)), p_8.f5)), 0xAEF0B151L))) > (*g_84)) >= 8UL) & 0L)) , 9UL))))))
        { 
            for (g_214.f1.f5 = (-10); (g_214.f1.f5 > (-25)); g_214.f1.f5--)
            { 
                union U2 *l_1617 = &g_273;
                return l_1617;
            }
        }
        else
        { 
            return &g_1030;
        }
        (*g_1562) = p_8;
        (*l_1636) = (g_181.f6 != ((safe_mod_func_uint16_t_u_u((((safe_unary_minus_func_int64_t_s(((void*)0 != g_1621))) || (safe_add_func_int64_t_s_s((safe_lshift_func_int16_t_s_s((-1L), 15)), (safe_lshift_func_int16_t_s_s(((l_1634 = ((*l_1633) &= ((*g_84) ^= (l_1632 = ((0xD1342255L && ((safe_sub_func_uint64_t_u_u((safe_unary_minus_func_uint64_t_u(p_6)), 0xA220016DD56EE4A9LL)) && p_8.f4)) > p_8.f4))))) == p_8.f3), l_1635[0][6]))))) ^ 4UL), p_6)) < 0UL));
        (*g_84) = (safe_sub_func_uint32_t_u_u(0x60A1DBDEL, p_8.f6));
        if ((safe_sub_func_int64_t_s_s((safe_add_func_uint8_t_u_u(p_8.f2, (p_8 , 3UL))), (((safe_rshift_func_int16_t_s_s(p_8.f4, 7)) != (safe_sub_func_uint8_t_u_u((safe_add_func_uint32_t_u_u((safe_rshift_func_int16_t_s_u(((l_1651[1][2] , l_1456) | (((!((void*)0 == g_1653)) || 0x71L) , p_8.f4)), 12)), g_1253[0][2][2])), 1UL))) > (-1L)))))
        { 
            int8_t l_1657 = (-1L);
            int32_t l_1658 = (-8L);
            union U4 *l_1687 = &g_357;
            uint16_t ** const *l_1715 = (void*)0;
            int32_t l_1726[3];
            union U2 l_1734 = {0x0F3C8F5FL};
            int16_t *l_1747 = &g_214.f1.f0;
            int16_t *l_1748[4][4][3] = {{{&l_1602.f7,&g_181.f0,&g_181.f0},{&g_1144,&l_1602.f7,&g_181.f7},{&l_1602.f7,&g_108,&l_1602.f7},{&g_1144,&g_1144,&l_1602.f7}},{{&l_1602.f7,&l_1602.f0,&l_1602.f0},{&g_1144,(void*)0,&g_1144},{&l_1602.f7,&g_181.f0,&g_181.f0},{&g_1144,&l_1602.f7,&g_181.f7}},{{&l_1602.f7,&g_108,&l_1602.f7},{&g_1144,&g_1144,&l_1602.f7},{&l_1602.f7,&l_1602.f0,&l_1602.f0},{&g_1144,(void*)0,&g_1144}},{{&l_1602.f7,&g_181.f0,&g_181.f0},{&g_1144,&l_1602.f7,&g_181.f7},{&l_1602.f7,&g_108,&l_1602.f7},{&g_1144,&g_1144,&l_1602.f7}}};
            const int8_t l_1749 = (-7L);
            const int32_t *l_1752 = (void*)0;
            const int32_t **l_1751 = &l_1752;
            int i, j, k;
            for (i = 0; i < 3; i++)
                l_1726[i] = (-1L);
            for (g_865.f0 = 3; (g_865.f0 >= 0); g_865.f0 -= 1)
            { 
                union U4 *****l_1655[2][6][6] = {{{&g_1621,&g_1621,&g_1621,&g_1621,&g_1621,&g_1621},{&g_1621,&g_1621,&g_1621,&g_1621,&g_1621,&g_1621},{&g_1621,&g_1621,&g_1621,&g_1621,&g_1621,&g_1621},{&g_1621,&g_1621,&g_1621,&g_1621,&g_1621,&g_1621},{&g_1621,&g_1621,&g_1621,&g_1621,&g_1621,&g_1621},{&g_1621,&g_1621,&g_1621,&g_1621,&g_1621,&g_1621}},{{&g_1621,&g_1621,&g_1621,&g_1621,&g_1621,&g_1621},{&g_1621,&g_1621,&g_1621,&g_1621,&g_1621,&g_1621},{&g_1621,&g_1621,&g_1621,&g_1621,&g_1621,&g_1621},{&g_1621,&g_1621,&g_1621,&g_1621,&g_1621,&g_1621},{&g_1621,&g_1621,&g_1621,&g_1621,&g_1621,&g_1621},{&g_1621,&g_1621,&g_1621,&g_1621,&g_1621,&g_1621}}};
                int32_t l_1659 = 1L;
                int32_t *l_1660[4][2][4] = {{{&g_68,&g_1338[1][4],&g_68,&g_68},{&g_1253[1][6][2],&g_1253[1][6][2],&g_1253[0][2][2],&g_1338[1][5]}},{{&g_1253[1][6][2],&l_1475[3],&g_68,&g_1253[1][6][2]},{&g_68,&g_1338[1][5],&g_68,&g_68}},{{&g_1338[1][4],&g_1338[1][5],&g_1253[0][2][2],&g_1253[1][6][2]},{&g_1338[1][5],&l_1475[3],&g_1253[0][2][2],&l_1475[3]}},{{&l_1475[3],&g_68,&g_1253[0][2][2],&g_80[0]},{&l_1475[3],&g_68,&g_1253[1][6][2],&g_68}}};
                int i, j, k;
                l_1656 = (l_1655[1][4][1] = &g_1621);
                l_1661--;
                for (g_214.f1.f4 = 0; (g_214.f1.f4 <= 1); g_214.f1.f4 += 1)
                { 
                    int32_t *l_1665[6] = {&l_1474,&g_121,&g_121,&l_1474,&g_121,&g_121};
                    int i, j;
                    (**g_1654) = (!p_8.f5);
                    l_1665[2] = &l_1659;
                    l_1658 = (((g_181.f1 || p_6) ^ (0xCE173F3BL >= (safe_sub_func_uint16_t_u_u(p_8.f1, (safe_mul_func_uint16_t_u_u(0xEF60L, (safe_mul_func_uint16_t_u_u((safe_sub_func_int64_t_s_s(0xD888B9B3EE44FEFALL, ((~(safe_sub_func_uint16_t_u_u(((safe_div_func_uint8_t_u_u((safe_mod_func_uint64_t_u_u(18446744073709551609UL, p_8.f2)), 0x95L)) && p_8.f3), p_8.f0))) == 0xD760L))), p_8.f3)))))))) < 9L);
                }
            }
            (*g_1562) = p_8;
            for (l_1602.f3 = 0; (l_1602.f3 == 27); l_1602.f3 = safe_add_func_int16_t_s_s(l_1602.f3, 7))
            { 
                struct S0 l_1683 = {0xCBDAL,18446744073709551607UL,-7L,0x8E969702L,0xB50C6EF1L,-2L,0x926E8E1BL,0x1659L};
                union U4 *l_1686 = &g_357;
                union U1 l_1696 = {-7L};
                int16_t *l_1697 = (void*)0;
                int16_t *l_1698 = &g_108;
                int32_t l_1701[3][1];
                union U2 l_1730 = {-4L};
                int i, j;
                for (i = 0; i < 3; i++)
                {
                    for (j = 0; j < 1; j++)
                        l_1701[i][j] = 6L;
                }
                (*g_1562) = l_1683;
                (**g_1654) = (safe_div_func_int16_t_s_s((l_1686 != (l_1688 = l_1687)), p_6));
                if ((*g_84))
                    continue;
                if ((safe_mod_func_uint32_t_u_u((((((((((**l_1538)--) != l_1658) | ((&g_484 != (void*)0) | (safe_lshift_func_uint16_t_u_u((l_1696 , ((((*l_1698) = 0x0C8CL) >= (p_8.f0 = ((l_1657 >= (safe_mul_func_uint8_t_u_u(((void*)0 == (*g_641)), g_68))) , p_8.f5))) , 0xB914L)), (*l_1633))))) , (void*)0) == &g_1622) == l_1683.f0) >= (*l_1636)) && l_1683.f7), g_865.f2)))
                { 
                    l_1701[0][0] ^= (p_8 , ((*l_1636) ^= (**g_1654)));
                    (*l_1636) ^= (***g_1653);
                }
                else
                { 
                    uint16_t ** const **l_1714[4];
                    uint64_t **l_1721 = &g_489;
                    int32_t l_1723[2][4][6] = {{{0x0F2D87CAL,0x987086B2L,0x987086B2L,0x0F2D87CAL,0L,0x987086B2L},{0x0F2D87CAL,0L,0x987086B2L,0x3E796885L,0L,0L},{0x0F2D87CAL,0x987086B2L,0x987086B2L,0x0F2D87CAL,0L,0x987086B2L},{0x0F2D87CAL,0L,0x987086B2L,0x3E796885L,0L,0L}},{{0x0F2D87CAL,0x987086B2L,0x987086B2L,0x0F2D87CAL,0L,0x987086B2L},{0x0F2D87CAL,0L,0x987086B2L,0x3E796885L,0L,0L},{0x0F2D87CAL,0x987086B2L,0x987086B2L,0x0F2D87CAL,0L,0x987086B2L},{0x0F2D87CAL,0L,0x987086B2L,0x3E796885L,0L,0L}}};
                    int32_t *l_1724 = &l_1658;
                    int32_t *l_1725[6][7][3] = {{{&l_1632,&l_1475[0],&l_1475[0]},{&l_1723[1][3][2],&l_1475[0],&l_1701[2][0]},{&l_1456,&l_1632,&g_68},{&l_1723[1][3][2],&l_1723[1][3][2],&g_68},{&l_1632,&l_1456,&l_1701[2][0]},{&l_1475[0],&l_1723[1][3][2],&l_1475[0]},{&l_1475[0],&l_1632,&l_1723[1][3][2]}},{{&l_1632,&l_1475[0],&l_1475[0]},{&l_1723[1][3][2],&l_1475[0],&l_1701[2][0]},{&l_1456,&l_1632,&g_68},{&l_1723[1][3][2],&l_1723[1][3][2],&g_68},{&l_1632,&l_1456,&l_1701[2][0]},{&l_1475[0],&l_1723[1][3][2],&l_1475[0]},{&l_1475[0],&l_1632,&l_1723[1][3][2]}},{{&l_1632,&l_1475[0],&l_1475[0]},{&l_1723[1][3][2],&l_1475[0],&l_1701[2][0]},{&l_1456,&l_1632,&g_68},{&l_1723[1][3][2],&l_1723[1][3][2],&g_68},{&l_1632,&l_1456,&l_1701[2][0]},{&l_1475[0],&l_1723[1][3][2],&l_1475[0]},{&l_1475[0],&l_1632,&l_1723[1][3][2]}},{{&l_1632,&l_1475[0],&l_1475[0]},{&l_1723[1][3][2],&l_1475[0],&l_1701[2][0]},{&l_1456,&l_1632,&g_68},{&l_1723[1][3][2],&l_1723[1][3][2],&g_68},{&l_1632,&l_1456,&l_1701[2][0]},{&l_1475[0],&l_1723[1][3][2],&l_1475[0]},{&l_1475[0],&l_1632,&l_1723[1][3][2]}},{{&l_1632,&l_1475[0],&l_1475[0]},{&l_1723[1][3][2],&l_1475[0],&l_1701[2][0]},{&l_1456,&l_1632,&g_68},{&l_1723[1][3][2],&l_1723[1][3][2],&g_68},{&l_1632,&l_1456,&l_1701[2][0]},{&l_1475[0],&l_1723[1][3][2],&l_1475[0]},{&l_1475[0],&l_1632,&l_1723[1][3][2]}},{{&l_1632,&l_1475[0],&l_1475[0]},{&l_1723[1][3][2],&l_1475[0],&l_1701[2][0]},{&l_1456,&l_1632,&g_68},{&l_1723[1][3][2],&l_1723[1][3][2],&g_68},{&l_1632,&l_1456,&l_1701[2][0]},{&l_1475[0],&l_1723[1][3][2],&l_1475[0]},{&l_1475[0],&l_1632,&l_1723[1][3][2]}}};
                    uint8_t l_1727 = 8UL;
                    union U3 l_1731 = {0L};
                    int i, j, k;
                    for (i = 0; i < 4; i++)
                        l_1714[i] = &g_1711;
                    l_1723[1][3][2] = (safe_rshift_func_int8_t_s_u((safe_lshift_func_int16_t_s_u((((safe_div_func_uint32_t_u_u((safe_rshift_func_int16_t_s_u(((*l_1698) ^= (l_1710 || (((l_1715 = g_1711) == (void*)0) & (0x00L | ((**g_882) = (0x919E4B54906F374DLL != ((safe_mul_func_int8_t_s_s((1L >= (+(safe_mod_func_int64_t_s_s((((((p_8.f1 , 0x42C74806L) || 1UL) , (void*)0) == l_1721) <= p_8.f6), 18446744073709551615UL)))), g_960[1])) || l_1658))))))), 1)), p_8.f5)) && l_1722) == (-10L)), (*l_1633))), 7));
                    --l_1727;
                    (***g_1653) &= ((0x96C37517L >= (((((***g_1711) | (p_8.f6 ^ g_831)) < ((l_1732[0][0][2] ^= (g_47.f0 != ((l_1730 , l_1731) , 1L))) >= p_8.f3)) , (*l_1636)) <= g_1733)) && 0x3FL);
                }
            }
            (*g_1562) = p_8;
            (*l_1751) = func_21(l_1734, (l_1750 = ((safe_mod_func_int64_t_s_s(((***g_1653) , (safe_mul_func_uint8_t_u_u((safe_lshift_func_uint16_t_u_s((*g_1713), p_7)), ((*l_1633) &= (safe_rshift_func_uint8_t_u_s((0xC369773FL || (safe_lshift_func_int8_t_s_u((safe_div_func_int16_t_s_s((p_8.f7 = ((*l_1747) = (((0x07F787CDL || (g_112 > g_112)) != 0xDC5649C4L) <= p_8.f0))), p_7)), 3))), l_1749)))))), 0x927C89F9A4038273LL)) , (*g_1562))), &g_1030, &l_1726[0]);
        }
        else
        { 
            int32_t l_1753 = (-8L);
            union U2 **l_1754 = &g_1433;
            union U3 *****l_1757 = (void*)0;
            union U3 *****l_1762 = &g_1759;
            union U3 ****l_1765 = &g_1760[1][2][1];
            (*g_1654) = (l_1753 , (**g_1653));
        }
    }
    return l_1518;
}



static uint16_t  func_11(const int8_t  p_12, union U2 * p_13, union U1  p_14)
{ 
    struct S0 l_1159 = {0xB47CL,18446744073709551615UL,1L,1UL,6UL,-6L,0L,-2L};
    struct S0 *l_1160 = &g_181;
    const int32_t *l_1435 = &g_1338[1][4];
    const int32_t **l_1434 = &l_1435;
    (*l_1434) = func_21(func_26(p_13, p_12), ((*l_1160) = l_1159), &g_273, &g_80[1]);
    (*l_1160) = g_181;
    return (**l_1434);
}



static const int32_t * func_21(union U2  p_22, struct S0  p_23, union U2 * p_24, int32_t * p_25)
{ 
    int32_t **l_1161 = &g_84;
    int32_t **l_1162 = (void*)0;
    int32_t **l_1163 = (void*)0;
    int32_t *l_1165[3][6][2] = {{{&g_80[0],&g_80[0]},{&g_80[0],&g_80[0]},{&g_80[0],&g_80[0]},{&g_80[0],&g_80[0]},{&g_80[0],&g_80[0]},{&g_80[0],&g_80[0]}},{{&g_80[0],&g_80[0]},{&g_80[0],&g_80[0]},{&g_80[0],&g_80[0]},{&g_80[0],&g_80[0]},{&g_80[0],&g_80[0]},{&g_80[0],&g_80[0]}},{{&g_80[0],&g_80[0]},{&g_80[0],&g_80[0]},{&g_80[0],&g_80[0]},{&g_80[0],&g_80[0]},{&g_80[0],&g_80[0]},{&g_80[0],&g_80[0]}}};
    int32_t **l_1164 = &l_1165[0][5][0];
    const int32_t *l_1202[6][1][7] = {{{(void*)0,&g_80[0],(void*)0,&g_68,&g_121,&g_121,&g_68}},{{(void*)0,&g_80[0],(void*)0,&g_68,&g_121,&g_121,&g_68}},{{(void*)0,&g_80[0],(void*)0,&g_68,&g_121,&g_121,&g_68}},{{(void*)0,&g_80[0],(void*)0,&g_68,&g_121,&g_121,&g_68}},{{(void*)0,&g_80[0],(void*)0,&g_68,&g_121,&g_121,&g_68}},{{(void*)0,&g_80[0],(void*)0,&g_68,&g_121,&g_121,&g_68}}};
    const int32_t **l_1201 = &l_1202[2][0][3];
    int32_t l_1204 = 0x509CF0D3L;
    int32_t l_1228 = 2L;
    uint64_t **l_1252 = &g_489;
    uint16_t l_1256 = 0x4996L;
    struct S0 ** const l_1271 = &g_660;
    union U4 l_1288 = {0x22688DC5L};
    uint16_t **l_1291 = (void*)0;
    uint16_t ***l_1292 = &l_1291;
    uint16_t l_1394 = 65534UL;
    int i, j, k;
lbl_1208:
    (*l_1164) = ((*l_1161) = &g_121);
    for (g_214.f1.f0 = 0; (g_214.f1.f0 > (-4)); g_214.f1.f0--)
    { 
        uint32_t l_1174[7][6] = {{3UL,0x9EF90E7EL,0x9EF90E7EL,3UL,0x9EF90E7EL,0x9EF90E7EL},{3UL,0x9EF90E7EL,0x9EF90E7EL,3UL,0x9EF90E7EL,0x9EF90E7EL},{3UL,0x9EF90E7EL,0x9EF90E7EL,3UL,0x9EF90E7EL,0x9EF90E7EL},{3UL,0x9EF90E7EL,0x9EF90E7EL,3UL,0x9EF90E7EL,0x9EF90E7EL},{3UL,0x9EF90E7EL,0x9EF90E7EL,3UL,0x9EF90E7EL,0x9EF90E7EL},{3UL,0x9EF90E7EL,0x9EF90E7EL,3UL,0x9EF90E7EL,0x9EF90E7EL},{3UL,0x9EF90E7EL,0x9EF90E7EL,3UL,0x9EF90E7EL,0x9EF90E7EL}};
        int8_t *l_1175 = &g_181.f5;
        int32_t l_1176 = (-1L);
        int32_t ***l_1203 = &l_1162;
        uint32_t *l_1205[6] = {&g_181.f4,&g_181.f4,&g_181.f4,&g_181.f4,&g_181.f4,&g_181.f4};
        int16_t *l_1206[3];
        int32_t l_1207 = 5L;
        struct S0 l_1220 = {0x4890L,7UL,0L,18446744073709551609UL,0x91421380L,1L,0x97E39E28L,1L};
        const union U2 **l_1259 = (void*)0;
        struct S0 **l_1263 = &g_660;
        int i, j;
        for (i = 0; i < 3; i++)
            l_1206[i] = &g_1144;
        if ((((g_652[0] && (g_2 , ((((**l_1161) , (0x867CL >= (1L != ((safe_add_func_int8_t_s_s((g_937 , ((*l_1175) = (safe_sub_func_int8_t_s_s((-6L), l_1174[2][0])))), g_80[0])) < (**l_1164))))) & 0x51D45ADBL) & 0L))) ^ (*g_84)) < (**l_1164)))
        { 
            uint32_t l_1177 = 0xF89E3FAEL;
            l_1177--;
            (**l_1161) |= ((void*)0 != &g_84);
            if (g_1180)
                break;
        }
        else
        { 
            struct S0 *l_1181 = &g_181;
            (*l_1181) = p_23;
        }
        (*g_468) = (*g_468);
        l_1207 &= (safe_mul_func_int16_t_s_s(l_1176, ((safe_rshift_func_uint16_t_u_u(((safe_mod_func_int64_t_s_s((p_23.f4 <= (safe_div_func_int64_t_s_s((safe_lshift_func_int16_t_s_s((p_23.f7 = ((((safe_add_func_uint64_t_u_u(p_23.f2, (((((((((*p_25) = (((g_865.f2 = ((((*g_84) = ((safe_sub_func_int8_t_s_s((g_484 = (safe_lshift_func_int8_t_s_s((safe_lshift_func_uint8_t_u_s(((l_1174[1][2] < ((*l_1175) = l_1174[2][0])) ^ (~((l_1201 != ((*l_1203) = (void*)0)) & p_22.f0))), l_1204)), 2))), 0x5AL)) > 0x94B8979AL)) || 4294967292UL) & g_80[1])) , g_273.f0) < p_23.f6)) < p_22.f1) , p_23.f7) || g_68) | g_1153) , g_31[2]) <= g_19.f1) <= 0xA2A8DAEC147F7D33LL))) != p_23.f2) , (*l_1203)) != &g_84)), p_23.f4)), p_23.f2))), (-1L))) || p_23.f6), p_23.f1)) | g_2)));
        if (p_23.f5)
            goto lbl_1208;
        for (g_181.f3 = 9; (g_181.f3 >= 43); g_181.f3 = safe_add_func_int64_t_s_s(g_181.f3, 6))
        { 
            int32_t *l_1211 = &g_80[0];
            uint16_t *l_1219 = &g_31[3];
            int8_t **l_1221 = &l_1175;
            int64_t *l_1222[4][6] = {{&g_188[1][0],(void*)0,(void*)0,&g_188[1][0],&g_188[1][0],&g_188[1][1]},{&g_188[1][1],&g_188[1][0],&g_188[1][0],&g_188[1][0],&g_188[1][1],&g_831},{&g_188[1][0],&g_188[1][1],&g_831,&g_831,&g_188[1][1],&g_188[1][0]},{(void*)0,&g_188[1][0],&g_188[1][0],&g_188[1][1],&g_188[1][0],&g_188[1][0]}};
            int32_t l_1227 = 5L;
            uint8_t *l_1272[6] = {&g_507,&g_507,&g_507,&g_507,&g_507,&g_507};
            int i, j;
            l_1211 = (void*)0;
            if ((((safe_mul_func_uint16_t_u_u(((((safe_lshift_func_uint8_t_u_u((safe_rshift_func_int8_t_s_s((((g_831 = ((((safe_unary_minus_func_int16_t_s((&g_31[0] == l_1219))) , l_1220) , &g_484) != ((*l_1221) = &g_484))) ^ p_23.f4) && (safe_mul_func_int16_t_s_s(((safe_div_func_int16_t_s_s((((((**l_1161) ^= g_937) < p_23.f0) == l_1227) > g_31[0]), 0xDF3EL)) > g_1145[0][2][0]), p_23.f1))), p_22.f1)), 0)) < p_23.f2) & g_181.f5) >= p_23.f6), l_1228)) > g_273.f0) < 0x97CE7E1EL))
            { 
                uint64_t l_1236 = 0UL;
                int32_t l_1254[4] = {0L,0L,0L,0L};
                uint32_t *l_1255 = &g_960[1];
                union U4 l_1262 = {0x0164510DL};
                uint8_t l_1265 = 0UL;
                int i;
                l_1256 |= ((safe_sub_func_int16_t_s_s((((safe_lshift_func_uint16_t_u_u(((safe_lshift_func_int8_t_s_s((+(l_1236 ^= 0x705D3A98232ADC5FLL)), (((safe_lshift_func_int16_t_s_s((-9L), (((safe_lshift_func_int16_t_s_s((safe_lshift_func_int8_t_s_s((((**g_488) &= (safe_mul_func_int8_t_s_s(((*l_1175) ^= ((safe_mul_func_int8_t_s_s(((+(safe_rshift_func_int16_t_s_u(l_1227, 15))) , (((*l_1255) |= (((safe_sub_func_uint16_t_u_u((((p_23.f2 , (void*)0) == (l_1252 = l_1252)) < (*p_25)), g_1253[0][2][2])) == 0UL) , l_1254[3])) ^ g_181.f2)), p_23.f7)) < 0x7C9C5EA381332990LL)), (**g_882)))) == 0x40EFA1CB85BAFCE6LL), 2)), 7)) < 0x356D2FC8A99DCFB2LL) > (-1L)))) && p_23.f2) != p_23.f1))) & 9UL), 6)) >= 1L) >= l_1254[1]), 4UL)) ^ (*g_84));
                (*g_84) = (247UL == p_23.f4);
                l_1265 |= (((void*)0 != l_1259) == ((p_23.f5 >= (((safe_sub_func_uint32_t_u_u((l_1262 , (&l_1254[2] == &g_80[0])), (l_1263 != (void*)0))) != 1UL) <= g_1264)) == 0xA992E8BDL));
            }
            else
            { 
                for (g_1140.f0 = 29; (g_1140.f0 <= 7); g_1140.f0 = safe_sub_func_int64_t_s_s(g_1140.f0, 6))
                { 
                    (*g_468) = (*g_468);
                    return p_25;
                }
                if ((*g_84))
                { 
                    return &g_121;
                }
                else
                { 
                    (**l_1161) |= 0x8965EBF2L;
                    if (g_1268)
                        continue;
                    if (p_23.f1)
                        goto lbl_1208;
                    (*l_1161) = &g_1253[0][2][2];
                    return &g_80[0];
                }
            }
            g_1253[0][2][2] = ((((**l_1164) &= ((((((g_253 |= (g_507 &= (safe_add_func_uint8_t_u_u(((**g_882) = 0xD6L), ((p_23.f4 , l_1271) != &g_660))))) , g_1273) == (void*)0) || p_23.f4) , &g_883) != (void*)0)) || (*g_84)) & g_47.f0);
        }
    }
    (*l_1164) = &g_68;
    if ((safe_mul_func_int8_t_s_s((safe_mul_func_int16_t_s_s((safe_lshift_func_uint8_t_u_u(((safe_mod_func_uint8_t_u_u(((safe_add_func_uint8_t_u_u(((safe_add_func_uint8_t_u_u((safe_lshift_func_uint16_t_u_s(p_22.f1, 9)), (l_1288 , (*g_883)))) <= (((((****g_62) , g_1273) == ((*l_1292) = l_1291)) ^ ((safe_mod_func_int64_t_s_s(p_23.f3, (**l_1164))) > g_1295)) != p_23.f1)), 0x8FL)) | p_23.f3), p_22.f0)) < (**l_1164)), 5)), p_22.f1)), p_23.f4)))
    { 
        uint32_t l_1304 = 6UL;
        union U3 l_1305 = {0xD34772EEL};
        int16_t *l_1310 = &g_181.f0;
        int32_t l_1311 = 0xC34D3EE8L;
        const int32_t *l_1312 = &g_80[0];
        (*p_25) |= ((**l_1161) = (safe_div_func_uint8_t_u_u((**l_1161), ((4294967295UL != (((safe_div_func_uint8_t_u_u((safe_add_func_int16_t_s_s((((++(**g_641)) && (l_1304 &= (***g_487))) & (((l_1305 , g_960[0]) < (safe_add_func_int32_t_s_s(((void*)0 == &g_1268), (*g_84)))) < 0x40F5504628AF0FAALL)), (-1L))), (**g_882))) && p_23.f5) == 0x87F7L)) | p_23.f3))));
        (*p_25) |= 0x85013DD7L;
        if ((l_1311 = (((*l_1310) = (((*g_1004) , ((p_23 , ((((**l_1164) ^= 0xA17A6112L) < (((***g_487) |= (safe_add_func_uint32_t_u_u(((((p_23.f4 < l_1305.f0) != (l_1304 >= g_2)) <= (-3L)) | g_31[3]), 0x93986624L))) && g_1264)) | (-1L))) | g_108)) <= p_22.f1)) , (*g_84))))
        { 
            return l_1312;
        }
        else
        { 
            uint16_t *l_1314 = (void*)0;
            uint16_t **l_1313 = &l_1314;
            int8_t *l_1315 = &g_484;
            (*l_1292) = l_1313;
            (*l_1201) = &g_80[0];
            l_1312 = &g_1253[0][2][2];
            (*p_25) &= (p_23.f5 >= ((*l_1315) = g_31[0]));
        }
    }
    else
    { 
        int16_t l_1324 = (-1L);
        int32_t l_1339 = 0x4D1D59A6L;
        int32_t l_1343 = 0x8EA19B86L;
        int32_t l_1344 = 0x4F5DB7DEL;
        uint64_t ****l_1354[7];
        int32_t l_1359 = (-10L);
        int16_t l_1361[5][6] = {{0xEF4DL,0xEF4DL,0xEF4DL,0xEF4DL,0xEF4DL,0xEF4DL},{0xEF4DL,0xEF4DL,0xEF4DL,0xEF4DL,0xEF4DL,0xEF4DL},{0xEF4DL,0xEF4DL,0xEF4DL,0xEF4DL,0xEF4DL,0xEF4DL},{0xEF4DL,0xEF4DL,0xEF4DL,0xEF4DL,0xEF4DL,0xEF4DL},{0xEF4DL,0xEF4DL,0xEF4DL,0xEF4DL,0xEF4DL,0xEF4DL}};
        int32_t l_1362 = 0xF1A28F07L;
        int32_t l_1363 = 1L;
        int32_t l_1364 = (-9L);
        int32_t l_1366 = (-1L);
        int32_t l_1367 = 0xA7F42C4CL;
        int32_t l_1368 = 0L;
        int32_t l_1369[7] = {0L,0L,0x0BC4E39DL,0x0BC4E39DL,0L,0x0BC4E39DL,0x0BC4E39DL};
        union U3 ** const **l_1429[7] = {&g_63[3],&g_63[3],&g_63[3],&g_63[3],&g_63[3],&g_63[3],&g_63[3]};
        int i, j;
        for (i = 0; i < 7; i++)
            l_1354[i] = &g_487;
        for (g_865.f2 = 0; (g_865.f2 <= 2); g_865.f2 += 1)
        { 
            const uint16_t *l_1318 = &g_1145[0][0][2];
            uint8_t l_1321 = 5UL;
            int32_t l_1334 = (-1L);
            int32_t l_1336 = (-5L);
            int32_t l_1337 = (-8L);
            int32_t l_1340 = 0x7D7F5EE1L;
            int32_t l_1341 = (-1L);
            int32_t l_1346 = 0L;
            int32_t l_1347 = (-5L);
            int32_t l_1370 = (-7L);
            int32_t l_1372 = 0L;
            int32_t l_1373 = 0xD77F9288L;
            int32_t l_1374 = 0xED794C8CL;
            int32_t l_1375 = 0x5ECA019CL;
            int32_t l_1376[3][2][3] = {{{6L,6L,6L},{0x7547FC34L,0x7547FC34L,0x7547FC34L}},{{6L,6L,6L},{0x7547FC34L,0x7547FC34L,0x7547FC34L}},{{6L,6L,6L},{0x7547FC34L,0x7547FC34L,0x7547FC34L}}};
            union U1 l_1389 = {7L};
            int32_t ***l_1432 = &l_1161;
            int i, j, k;
            for (g_507 = 0; (g_507 <= 1); g_507 += 1)
            { 
                union U2 *l_1320 = &g_273;
                union U2 **l_1319 = &l_1320;
                union U4 l_1331 = {0UL};
                const uint8_t l_1332 = 0UL;
                int32_t l_1335 = 0xFAEBA0A0L;
                int32_t l_1342 = 0x9F08B69FL;
                int32_t l_1345 = 4L;
                int32_t l_1348 = 0x43859CD1L;
                int32_t l_1349 = (-3L);
                int32_t l_1350 = 1L;
                int32_t l_1365 = 1L;
                int32_t l_1371[1];
                uint32_t l_1377 = 4294967295UL;
                int i, j;
                for (i = 0; i < 1; i++)
                    l_1371[i] = 0xAC414A0AL;
            }
            for (g_1264 = 1; (g_1264 <= 5); g_1264 += 1)
            { 
                int16_t *l_1390 = &g_108;
                struct S0 l_1399 = {0L,0xEB15E881B6E6B170LL,1L,18446744073709551615UL,18446744073709551615UL,0L,0L,0x13B7L};
                uint16_t *l_1400 = &g_652[0];
                int32_t l_1403 = 0xBA9BB2AFL;
                int8_t *l_1408 = &l_1389.f1.f5;
                int8_t *l_1409 = &l_1399.f5;
                uint16_t *l_1428[2];
                int i;
                for (i = 0; i < 2; i++)
                    l_1428[i] = &g_31[0];
                (*g_84) = (g_652[(g_865.f2 + 1)] < ((safe_add_func_int16_t_s_s(((safe_div_func_int32_t_s_s(((safe_div_func_int16_t_s_s(((*l_1390) = (l_1389 , ((*g_84) | (g_68 &= (*p_25))))), g_652[(g_865.f2 + 1)])) || ((void*)0 != (*g_62))), 0x6D53FA1DL)) , p_23.f0), p_23.f6)) > g_652[0]));
                if (((**g_882) <= (g_484 |= (0x7EL < (-6L)))))
                { 
                    int32_t l_1391 = 2L;
                    int32_t l_1392 = 6L;
                    int32_t l_1393 = 0x9AC2D34BL;
                    ++l_1394;
                }
                else
                { 
                    if (l_1363)
                        break;
                    return &g_2;
                }
                if ((safe_mul_func_int8_t_s_s(((*l_1409) = ((*l_1408) = (l_1399 , ((l_1403 ^= (p_23 , (--(*l_1400)))) | ((safe_div_func_uint8_t_u_u((l_1346 = ((**g_882) = (safe_mul_func_int16_t_s_s(p_23.f0, (((&l_1363 == (void*)0) , (p_23.f2 | 0xD1L)) <= (-10L)))))), (-1L))) , p_23.f3))))), g_1153)))
                { 
                    int64_t l_1411 = 0xE122A14EDACC4135LL;
                    union U4 l_1418[6][1][1] = {{{{0x3DCBF530L}}},{{{0x810E7540L}}},{{{0x3DCBF530L}}},{{{0x3DCBF530L}}},{{{0x810E7540L}}},{{{0x3DCBF530L}}}};
                    uint32_t *l_1430 = &g_1153;
                    int i, j, k;
                    (*p_25) |= (~(g_214 , (((0UL | (l_1411 >= (((safe_sub_func_uint8_t_u_u((l_1411 | (safe_rshift_func_int16_t_s_u((l_1411 || (safe_div_func_int8_t_s_s((p_22.f1 | ((l_1418[0][0][0] , l_1344) && (*g_883))), l_1341))), 12))), 0xE9L)) ^ (*g_84)) | g_960[1]))) ^ p_23.f4) | (*g_84))));
                    (*p_25) &= ((((safe_unary_minus_func_int16_t_s((1UL ^ ((safe_div_func_uint8_t_u_u((*g_883), g_960[1])) | ((*l_1430) = (safe_mul_func_uint16_t_u_u((l_1364 = ((safe_rshift_func_int16_t_s_s(((*l_1390) = (safe_div_func_uint64_t_u_u(((l_1428[0] == (void*)0) != (p_23.f1 < (l_1429[3] == &g_63[3]))), 0xB35BB2CC9B265A8DLL))), 12)) > 4UL)), l_1418[0][0][0].f0))))))) && p_23.f1) >= p_23.f6) | (-5L));
                }
                else
                { 
                    union U3 l_1431 = {-4L};
                    (*l_1271) = ((p_23 , l_1431) , (void*)0);
                    (*p_25) = (l_1432 != &l_1201);
                    (***l_1432) = 0x285406C0L;
                    g_1433 = &g_273;
                    if ((***l_1432))
                        continue;
                }
            }
        }
    }
    return &g_121;
}



static union U2  func_26(union U2 * p_27, int32_t  p_28)
{ 
    uint16_t *l_30 = &g_31[0];
    union U4 l_38[1] = {{0x5E42506EL}};
    union U3 *l_51 = &g_47;
    int32_t l_701 = 1L;
    uint8_t l_704 = 9UL;
    uint8_t l_718 = 0xDAL;
    struct S0 * const l_742 = &g_181;
    uint64_t *l_800 = &g_181.f1;
    int32_t *l_817 = &g_80[0];
    int32_t l_823 = 5L;
    int32_t l_824 = 3L;
    int32_t l_825 = (-1L);
    int32_t l_827[7][1][2];
    uint64_t l_876 = 5UL;
    int8_t *l_881[4][5][7] = {{{(void*)0,&g_484,&g_181.f5,(void*)0,&g_484,(void*)0,&g_181.f5},{&g_181.f5,&g_181.f5,&g_484,&g_181.f5,&g_484,(void*)0,&g_484},{&g_484,&g_181.f5,&g_484,&g_484,&g_181.f5,&g_484,&g_484},{&g_181.f5,(void*)0,&g_181.f5,&g_484,(void*)0,(void*)0,&g_181.f5},{&g_181.f5,(void*)0,&g_181.f5,&g_181.f5,(void*)0,&g_181.f5,&g_181.f5}},{{&g_484,&g_484,&g_484,&g_484,&g_181.f5,&g_181.f5,(void*)0},{&g_181.f5,(void*)0,&g_484,&g_181.f5,&g_181.f5,&g_181.f5,&g_484},{(void*)0,&g_484,(void*)0,&g_181.f5,&g_181.f5,&g_484,&g_484},{&g_181.f5,(void*)0,&g_181.f5,&g_181.f5,(void*)0,(void*)0,&g_484},{&g_484,&g_181.f5,(void*)0,&g_484,(void*)0,&g_484,&g_181.f5}},{{&g_484,&g_181.f5,&g_181.f5,&g_181.f5,&g_181.f5,&g_181.f5,&g_181.f5},{&g_484,(void*)0,&g_484,(void*)0,&g_484,&g_181.f5,&g_181.f5},{&g_484,&g_484,&g_181.f5,(void*)0,&g_484,&g_484,&g_181.f5},{&g_484,(void*)0,&g_484,&g_181.f5,&g_181.f5,&g_181.f5,&g_484},{(void*)0,&g_484,&g_181.f5,&g_484,&g_484,&g_181.f5,&g_484}},{{&g_484,(void*)0,&g_181.f5,(void*)0,&g_181.f5,&g_484,(void*)0},{(void*)0,(void*)0,&g_181.f5,&g_181.f5,&g_181.f5,(void*)0,&g_181.f5},{&g_181.f5,&g_181.f5,&g_181.f5,&g_181.f5,&g_484,&g_484,&g_181.f5},{&g_181.f5,&g_181.f5,&g_484,&g_484,&g_181.f5,&g_181.f5,&g_181.f5},{&g_181.f5,&g_484,&g_181.f5,&g_181.f5,&g_484,&g_181.f5,&g_181.f5}}};
    int64_t l_936[1];
    uint32_t l_968[4];
    uint64_t l_983[4] = {0x2D0BE28FAE9275A3LL,0x2D0BE28FAE9275A3LL,0x2D0BE28FAE9275A3LL,0x2D0BE28FAE9275A3LL};
    union U2 l_1009 = {0xC977E409L};
    union U2 *l_1029[4];
    int8_t l_1117[1][2][7] = {{{0L,0x3DL,0L,0x3DL,0L,0x3DL,0L},{(-6L),(-6L),(-6L),(-6L),(-6L),(-6L),(-6L)}}};
    int16_t l_1135 = 0xB696L;
    int32_t *l_1148 = &g_121;
    int32_t *l_1149 = (void*)0;
    int32_t *l_1150 = &l_824;
    int32_t *l_1151 = &l_701;
    int32_t *l_1152[6][6] = {{&l_827[2][0][1],&l_827[2][0][1],&l_827[2][0][1],&l_827[2][0][1],&l_827[2][0][1],&l_827[2][0][1]},{&l_827[2][0][1],&l_827[2][0][1],&l_827[2][0][1],&l_827[2][0][1],&l_827[2][0][1],&l_827[2][0][1]},{&l_827[2][0][1],&l_827[2][0][1],&l_827[2][0][1],&l_827[2][0][1],&l_827[2][0][1],&l_827[2][0][1]},{&l_827[2][0][1],&l_827[2][0][1],&l_827[2][0][1],&l_827[2][0][1],&l_827[2][0][1],&l_827[2][0][1]},{&l_827[2][0][1],&l_827[2][0][1],&l_827[2][0][1],&l_827[2][0][1],&l_827[2][0][1],&l_827[2][0][1]},{&l_827[2][0][1],&l_827[2][0][1],&l_827[2][0][1],&l_827[2][0][1],&l_827[2][0][1],&l_827[2][0][1]}};
    uint8_t l_1156 = 0UL;
    int i, j, k;
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 2; k++)
                l_827[i][j][k] = (-10L);
        }
    }
    for (i = 0; i < 1; i++)
        l_936[i] = 1L;
    for (i = 0; i < 4; i++)
        l_968[i] = 3UL;
    for (i = 0; i < 4; i++)
        l_1029[i] = &g_1030;
    if ((+(--(*l_30))))
    { 
        union U3 **l_48 = (void*)0;
        union U3 *l_50 = &g_47;
        union U3 **l_49 = &l_50;
        const union U3 l_688 = {0xD8164EA7L};
        int32_t *l_702 = (void*)0;
        int32_t *l_703 = (void*)0;
        uint32_t l_705 = 1UL;
        int32_t l_726 = 1L;
        union U4 l_741 = {18446744073709551607UL};
        struct S0 l_743 = {0xCC67L,0x1160914D1B2B9AA2LL,0L,0x9E7F6052L,0xF1B7A9CCL,0xAEL,0x23590B22L,-7L};
        uint64_t *l_747 = &l_743.f1;
        union U2 l_757 = {-1L};
        union U4 ** const l_804 = &g_469;
        int32_t l_819 = (-1L);
        int32_t l_821 = 7L;
        int32_t l_826 = 0L;
        int32_t l_832 = (-1L);
        int32_t l_833 = 0x54D1310FL;
        uint8_t *l_866 = (void*)0;
        uint8_t *l_867 = &l_741.f1;
        uint8_t l_870 = 0UL;
        int16_t *l_871 = &g_181.f0;
        int16_t *l_872 = &l_743.f0;
        int8_t *l_884 = &g_181.f5;
        int8_t *l_888 = &l_743.f5;
        int32_t l_911 = 0x1F2CE572L;
        int32_t l_913 = 1L;
        int32_t l_915 = 0x6D83B4D2L;
        int32_t l_916 = (-1L);
        uint64_t l_932 = 0xBDFCCE731E55434ALL;
        int32_t *l_1048 = &g_80[0];
        uint64_t l_1061 = 18446744073709551614UL;
        int32_t *l_1091 = &l_915;
        int64_t l_1118[5][7][4] = {{{0xEB873883D03DEBF5LL,0L,1L,0x5D8B4B35A8DE7CB4LL},{1L,0xEB873883D03DEBF5LL,0x421BAB568445BCE3LL,0L},{(-8L),1L,(-4L),0xCC85B589BF1C4675LL},{0x9A533DCA26C7E841LL,1L,1L,0x5D8B4B35A8DE7CB4LL},{1L,0x93486A95C883FCE5LL,1L,1L},{0x0AAF83797963243FLL,0x0AAF83797963243FLL,(-7L),(-8L)},{0xD81B5C620B0F2FB5LL,0x94E71EA09CE1FD53LL,1L,0x93486A95C883FCE5LL}},{{0x421BAB568445BCE3LL,1L,0xD953B822654DCBFFLL,1L},{(-8L),1L,0x7CFE24D38450C833LL,0x93486A95C883FCE5LL},{1L,0x94E71EA09CE1FD53LL,1L,(-8L)},{1L,0x0AAF83797963243FLL,0L,1L},{0xEB873883D03DEBF5LL,0x93486A95C883FCE5LL,0x74FB5C138E9E8D5ELL,0x5D8B4B35A8DE7CB4LL},{1L,1L,0x421BAB568445BCE3LL,0xCC85B589BF1C4675LL},{0xD953B822654DCBFFLL,1L,0xD953B822654DCBFFLL,0L}},{{0x9A533DCA26C7E841LL,0xEB873883D03DEBF5LL,1L,0x5D8B4B35A8DE7CB4LL},{0xD81B5C620B0F2FB5LL,0L,1L,0xEB873883D03DEBF5LL},{0L,0x0AAF83797963243FLL,1L,0xD953B822654DCBFFLL},{0xD81B5C620B0F2FB5LL,0x3C0E5EB0D82BB530LL,1L,0x93486A95C883FCE5LL},{0x9A533DCA26C7E841LL,1L,0xD953B822654DCBFFLL,1L},{0xD953B822654DCBFFLL,1L,0x421BAB568445BCE3LL,0L},{1L,0x3C0E5EB0D82BB530LL,0x74FB5C138E9E8D5ELL,(-8L)}},{{0xEB873883D03DEBF5LL,0L,0L,0xEB873883D03DEBF5LL},{1L,0x93486A95C883FCE5LL,1L,0xA0E912D4536B42E3LL},{1L,0xEB873883D03DEBF5LL,0x7CFE24D38450C833LL,0xCC85B589BF1C4675LL},{(-8L),1L,0xD953B822654DCBFFLL,0xCC85B589BF1C4675LL},{0x421BAB568445BCE3LL,0xEB873883D03DEBF5LL,1L,0xA0E912D4536B42E3LL},{0xD81B5C620B0F2FB5LL,0x93486A95C883FCE5LL,(-7L),0xEB873883D03DEBF5LL},{0x0AAF83797963243FLL,0L,1L,(-8L)}},{{1L,0x3C0E5EB0D82BB530LL,1L,0L},{0x9A533DCA26C7E841LL,1L,(-4L),1L},{(-8L),1L,0x421BAB568445BCE3LL,0x93486A95C883FCE5LL},{1L,0x3C0E5EB0D82BB530LL,1L,0xD953B822654DCBFFLL},{0xEB873883D03DEBF5LL,0x0AAF83797963243FLL,0L,0xEB873883D03DEBF5LL},{0xEB873883D03DEBF5LL,0L,1L,0x5D8B4B35A8DE7CB4LL},{1L,0xEB873883D03DEBF5LL,0x421BAB568445BCE3LL,0L}}};
        int i, j, k;
    }
    else
    { 
        union U3 *l_1139 = &g_1140;
        int32_t *l_1143[1][3];
        int i, j;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 3; j++)
                l_1143[i][j] = &l_701;
        }
        (***g_62) = (l_1139 = (*g_233));
        (*g_84) &= (safe_sub_func_uint64_t_u_u((*l_817), 18446744073709551615UL));
        ++g_1145[0][2][0];
    }
    g_1153--;
    l_1156++;
    return g_19;
}



static union U3 * func_34(union U4  p_35, uint16_t * p_36, int16_t  p_37)
{ 
    uint8_t *l_483 = &g_357.f1;
    const int16_t l_490 = (-1L);
    const int32_t *l_492[4];
    const int32_t **l_491 = &l_492[2];
    union U3 *l_493 = &g_47;
    int32_t l_501 = 0x317EFE48L;
    int32_t l_502 = 0xACF764F2L;
    int32_t l_503 = (-5L);
    int32_t l_504 = 0x73EF3405L;
    int32_t l_505 = 0xC231B38EL;
    int32_t l_506[7][4][2] = {{{0xE9B650ADL,9L},{0x59DEF7B2L,0x05ADC29AL},{0x59DEF7B2L,9L},{0xE9B650ADL,0xE9B650ADL}},{{9L,9L},{0L,9L},{0x05ADC29AL,(-3L)},{(-3L),0x05ADC29AL}},{{9L,0L},{9L,0x05ADC29AL},{(-3L),(-3L)},{0x05ADC29AL,9L}},{{0L,9L},{0x05ADC29AL,(-3L)},{(-3L),0x05ADC29AL},{9L,0L}},{{9L,0x05ADC29AL},{(-3L),(-3L)},{0x05ADC29AL,9L},{0L,9L}},{{0x05ADC29AL,(-3L)},{(-3L),0x05ADC29AL},{9L,0L},{9L,0x05ADC29AL}},{{(-3L),(-3L)},{0x05ADC29AL,9L},{0L,9L},{0x05ADC29AL,(-3L)}}};
    int32_t l_557 = 7L;
    uint8_t l_559 = 0xD0L;
    union U3 *l_588[2][7][3] = {{{&g_47,(void*)0,&g_47},{(void*)0,&g_47,(void*)0},{&g_47,(void*)0,&g_47},{(void*)0,&g_47,(void*)0},{&g_47,(void*)0,&g_47},{(void*)0,&g_47,(void*)0},{&g_47,(void*)0,&g_47}},{{(void*)0,&g_47,(void*)0},{&g_47,(void*)0,&g_47},{(void*)0,&g_47,(void*)0},{&g_47,(void*)0,&g_47},{(void*)0,&g_47,(void*)0},{&g_47,(void*)0,&g_47},{(void*)0,&g_47,(void*)0}}};
    uint32_t l_671 = 4294967289UL;
    int i, j, k;
    for (i = 0; i < 4; i++)
        l_492[i] = &g_2;
    if ((safe_rshift_func_uint16_t_u_u((safe_add_func_uint64_t_u_u((safe_mod_func_int32_t_s_s(((safe_rshift_func_uint16_t_u_s((((((safe_add_func_int16_t_s_s(0L, g_125[2])) , ((8UL == ((((l_483 == l_483) > ((g_484 != (safe_mul_func_int8_t_s_s((((**g_468) , g_487) == (void*)0), 0x71L))) , p_35.f0)) | l_490) < 0x80L)) , l_491)) != &l_492[2]) != g_357.f1) | g_47.f0), 5)) == p_35.f1), g_181.f3)), g_47.f2)), 4)))
    { 
        return l_493;
    }
    else
    { 
        int32_t *l_494 = &g_68;
        int32_t *l_495 = &g_80[0];
        int32_t *l_496 = &g_68;
        int32_t *l_497 = &g_80[1];
        int32_t l_498 = 0xD3CE2FF0L;
        int32_t *l_499 = (void*)0;
        int32_t *l_500[1][2];
        union U3 l_553[2] = {{4L},{4L}};
        uint64_t l_603 = 1UL;
        const uint64_t * const l_637[6] = {&l_603,&l_603,&l_603,&l_603,&l_603,&l_603};
        const uint64_t * const *l_636 = &l_637[1];
        int32_t l_653 = 0L;
        uint32_t l_655 = 0xFD05DBC2L;
        int i, j;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 2; j++)
                l_500[i][j] = &g_80[0];
        }
        --g_507;
        for (g_181.f3 = 1; (g_181.f3 <= 5); g_181.f3 += 1)
        { 
            int32_t l_512[4] = {0x1196B93EL,0x1196B93EL,0x1196B93EL,0x1196B93EL};
            int16_t *l_517 = &g_181.f7;
            uint32_t l_543 = 0x9AFA6C75L;
            union U3 *l_552 = (void*)0;
            uint16_t *l_558[1];
            uint32_t l_590 = 2UL;
            int8_t *l_599 = &g_181.f5;
            union U1 l_616 = {0x452E2A5C934F8C56LL};
            int64_t l_654 = (-1L);
            int i;
            for (i = 0; i < 1; i++)
                l_558[i] = &g_31[0];
            if (((((safe_mod_func_int16_t_s_s(p_37, p_35.f1)) , l_512[3]) || (safe_mod_func_int8_t_s_s(1L, (safe_lshift_func_int16_t_s_u(((*l_517) = (*l_497)), (l_512[0] , (((**g_64) , 9UL) < p_37))))))) | 0xFC33L))
            { 
                return (***g_62);
            }
            else
            { 
                int8_t l_526 = 0L;
                int64_t *l_527 = (void*)0;
                int64_t *l_528[6] = {&g_188[0][0],&g_188[0][0],&g_188[0][0],&g_188[0][0],&g_188[0][0],&g_188[0][0]};
                uint32_t l_541 = 0x9898A9D4L;
                int32_t l_542[6][6] = {{0xFB57FBEEL,0x4612B5FDL,0xFB57FBEEL,0x7AFA0DB8L,0xE611F490L,0x7AFA0DB8L},{0xFB57FBEEL,0x4612B5FDL,0xFB57FBEEL,0x7AFA0DB8L,0xE611F490L,0x7AFA0DB8L},{0xFB57FBEEL,0x4612B5FDL,0xFB57FBEEL,0x7AFA0DB8L,0xE611F490L,0x7AFA0DB8L},{0xFB57FBEEL,0x4612B5FDL,0xFB57FBEEL,0x7AFA0DB8L,0xE611F490L,0x7AFA0DB8L},{0xFB57FBEEL,0x4612B5FDL,0xFB57FBEEL,0x7AFA0DB8L,0xE611F490L,0x7AFA0DB8L},{0xFB57FBEEL,0x4612B5FDL,0xFB57FBEEL,0x7AFA0DB8L,0xE611F490L,0x7AFA0DB8L}};
                int i, j;
                (*l_497) = (safe_mod_func_uint16_t_u_u(((((safe_div_func_uint8_t_u_u((1UL == ((*l_483) = (safe_div_func_uint32_t_u_u(((((safe_sub_func_int32_t_s_s(((-1L) > l_526), (p_35.f0 < ((g_188[3][2] = g_484) ^ 0xEEE32CC7B7341E7ALL)))) != (safe_mod_func_int8_t_s_s(((safe_mul_func_int16_t_s_s((safe_add_func_int8_t_s_s(((safe_rshift_func_uint16_t_u_u((((safe_mod_func_uint8_t_u_u((safe_lshift_func_int8_t_s_s((&g_108 != (void*)0), 2)), p_37)) && 1UL) <= g_80[0]), 5)) > p_35.f0), p_37)), p_35.f0)) ^ 0x847BBCC7657951EBLL), l_526))) || 0UL) <= p_35.f0), 0xC16733E5L)))), p_35.f1)) != p_37) ^ l_512[3]) < l_512[3]), l_512[1]));
                l_541 = p_35.f1;
                l_543++;
            }
            if ((safe_rshift_func_uint16_t_u_u(((g_253 ^= 0UL) == (g_80[0] < ((*l_483)--))), 3)))
            { 
                (*l_497) = p_35.f0;
            }
            else
            { 
                return (*g_233);
            }
            if ((safe_add_func_int32_t_s_s(1L, (func_41(l_552, (p_37 , l_552), (*g_233), (l_553[0] , (l_559 ^= (((safe_sub_func_uint8_t_u_u(((+((*l_495) ^= l_557)) < g_181.f5), p_35.f0)) != (**l_491)) <= 1L)))) , (*l_497)))))
            { 
                int64_t l_560 = 0L;
                int16_t l_561 = 0x552EL;
                int32_t l_562 = (-7L);
                int32_t l_565 = 0x96C25E76L;
                int32_t l_567 = 0x3EE81DABL;
                int32_t l_568 = (-6L);
                int32_t l_569 = 9L;
                int32_t l_570 = 0L;
                int32_t l_571 = 0x71C02737L;
                int32_t l_575 = 1L;
                int32_t l_576 = 1L;
                int32_t l_577[6][7] = {{0xEB1BD8D8L,1L,0xEB1BD8D8L,0x6E61A8A0L,0xC4756093L,0x6E61A8A0L,0xEB1BD8D8L},{0xDC4C36ACL,0xDC4C36ACL,0xEB328D63L,0xDC4C36ACL,0xDC4C36ACL,0xEB328D63L,0xDC4C36ACL},{0xC4756093L,0x6E61A8A0L,0xEB1BD8D8L,1L,0xEB1BD8D8L,0x6E61A8A0L,0xC4756093L},{0xAA482C18L,0xDC4C36ACL,0xAA482C18L,0xAA482C18L,0xDC4C36ACL,0xAA482C18L,0xAA482C18L},{0xC4756093L,1L,0x3B941DD0L,1L,0xC4756093L,9L,0xC4756093L},{0xDC4C36ACL,0xAA482C18L,0xAA482C18L,0xDC4C36ACL,0xAA482C18L,0xAA482C18L,0xDC4C36ACL}};
                union U3 *l_589[5][6] = {{&l_553[0],&l_553[0],&l_553[0],&l_553[0],&l_553[0],&l_553[0]},{&l_553[0],&l_553[0],&l_553[0],&l_553[0],&l_553[0],&l_553[0]},{&l_553[0],&l_553[0],&l_553[0],&l_553[0],&l_553[0],&l_553[0]},{&l_553[0],&l_553[0],&l_553[0],&l_553[0],&l_553[0],&l_553[0]},{&l_553[0],&l_553[0],&l_553[0],&l_553[0],&l_553[0],&l_553[0]}};
                uint64_t * const l_621 = &l_603;
                const uint64_t * const **l_638 = (void*)0;
                const uint64_t * const **l_639 = (void*)0;
                const uint64_t * const **l_640 = &l_636;
                int i, j;
                for (g_214.f1.f7 = 0; (g_214.f1.f7 <= 5); g_214.f1.f7 += 1)
                { 
                    return (***g_62);
                }
                for (g_121 = 0; (g_121 <= 3); g_121 += 1)
                { 
                    int32_t l_563 = 0x2ACC29C6L;
                    int32_t l_564 = 0L;
                    int32_t l_566[2];
                    uint32_t l_572 = 0x042215ADL;
                    uint32_t l_578 = 0xE5E16EBAL;
                    int i;
                    for (i = 0; i < 2; i++)
                        l_566[i] = (-1L);
                    --l_572;
                    l_578++;
                }
                if ((safe_div_func_int8_t_s_s((safe_rshift_func_uint16_t_u_u((((((247UL ^ (!(g_214 , ((g_181 , (((safe_lshift_func_uint16_t_u_u((&g_31[3] == (func_41((*g_64), l_588[0][3][0], l_589[3][2], g_273.f1) , &g_31[3])), 14)) && l_590) == 1UL)) <= g_125[1])))) < (*g_489)) && 5L) , p_35.f1) || p_37), p_35.f1)), 0x6CL)))
                { 
                    int32_t **l_591 = &l_500[0][0];
                    int64_t *l_600 = &g_188[3][0];
                    int64_t *l_601 = &l_560;
                    int32_t l_602[7][7][5] = {{{0x9D09EF41L,0xB0025588L,(-1L),(-7L),(-10L)},{(-1L),0x15D1DB74L,(-1L),(-1L),0x0D21172CL},{(-6L),0xB52CE50CL,(-8L),0L,7L},{0x1A8FDCA5L,0L,0x58CA911CL,(-1L),0xB52CE50CL},{0L,1L,(-1L),0L,0x1017E43FL},{0x7BF69A77L,0xFB5200B3L,0x628D4447L,1L,5L},{3L,0xA58BBA93L,6L,(-1L),0x6D5784FBL}},{{1L,(-8L),0x8654775DL,(-7L),0L},{(-1L),0xD94B91FFL,(-1L),(-2L),(-9L)},{(-1L),0L,0L,0x4C222C8CL,(-6L)},{(-1L),0x0B3A69C4L,0xE89248F1L,6L,0xCA6080BAL},{0x628D4447L,0x2B54AEE3L,0x72FB2AACL,(-1L),0xC78AAB17L},{0x628D4447L,0L,(-1L),(-1L),(-1L)},{(-1L),0xC771D91EL,1L,9L,(-1L)}},{{(-1L),(-4L),1L,0xB0025588L,0xB52CE50CL},{(-1L),4L,5L,0xB52CE50CL,0xE89248F1L},{1L,6L,0x9D09EF41L,2L,(-8L)},{3L,(-1L),0xB0025588L,0xA927656AL,(-8L)},{0x7BF69A77L,(-10L),0xDB8C6FB1L,1L,0x94B74740L},{0L,0xD94B91FFL,0xA927656AL,1L,0x219493F8L},{0x1A8FDCA5L,0xC78AAB17L,0x7BF69A77L,(-4L),0xFCEA9880L}},{{(-6L),0xE89248F1L,0xE89248F1L,(-6L),(-7L)},{(-1L),0x25CE66F3L,0L,0x219493F8L,(-7L)},{0x9D09EF41L,(-5L),0L,(-1L),0x628D4447L},{6L,0L,1L,0x219493F8L,0x6E35F952L},{1L,0x7777C7FFL,6L,(-6L),0xB52CE50CL},{(-1L),(-1L),0x0D21172CL,(-4L),(-7L)},{0x4B08AE41L,1L,(-8L),1L,2L}},{{3L,0xFE79AB76L,0xFB5200B3L,1L,0xB71EF27DL},{0L,3L,(-10L),0xA927656AL,1L},{(-7L),0xD94B91FFL,0x682FF72DL,2L,1L},{(-10L),0x6D5784FBL,1L,0xB52CE50CL,0L},{0x25CE66F3L,(-4L),0xE89248F1L,0xB0025588L,(-1L)},{5L,(-1L),0x2C2D56CEL,(-8L),0x628D4447L},{1L,1L,0L,1L,(-8L)}},{{0xE89248F1L,6L,0xCA6080BAL,0x6432BB8DL,(-2L)},{(-1L),6L,0xA58BBA93L,3L,0xB0025588L},{3L,1L,(-8L),0x25CE66F3L,0xC2DCBE1DL},{1L,0xA58BBA93L,1L,(-1L),(-1L)},{1L,0xC2DCBE1DL,(-4L),0L,(-1L)},{1L,(-1L),(-1L),0xB52CE50CL,(-4L)},{0x4C222C8CL,0L,(-8L),0L,(-8L)}},{{(-7L),0x727EB2DFL,1L,0x58CA911CL,3L},{0x0B3A69C4L,(-2L),1L,0xA58BBA93L,3L},{1L,0xE89248F1L,0x443FB4AFL,(-10L),0x727EB2DFL},{1L,1L,0x4C222C8CL,1L,1L},{7L,(-1L),(-1L),0xB71EF27DL,1L},{0xCA6080BAL,1L,(-7L),0x6E35F952L,0xB0025588L},{0xC771D91EL,0x2C2D56CEL,0xDB8C6FB1L,(-1L),1L}}};
                    struct S0 l_606 = {-9L,18446744073709551615UL,-9L,0UL,0UL,0x25L,-1L,-1L};
                    struct S0 *l_607 = &l_606;
                    int i, j, k;
                    (*l_491) = ((*l_591) = &g_2);
                    (*l_496) &= (((--g_125[1]) == (!((*l_601) = ((((*l_600) = (p_35.f0 < (((p_35.f0 == (((0xFF8D507DL & (((safe_mod_func_int64_t_s_s((p_35.f0 & ((***g_487) = p_35.f1)), 1UL)) > ((**l_591) != 0x41762B5A61027F3CLL)) == g_112)) , l_599) != &g_484)) || g_214.f0) == 1UL))) > l_577[3][5]) != 4UL)))) && 0x100FEE4AB4271F2ALL);
                    --l_603;
                    (*l_607) = l_606;
                }
                else
                { 
                    return l_552;
                }
                if (l_590)
                { 
                    uint32_t *l_612 = &l_543;
                    int32_t l_622 = 0xA47893A0L;
                    int32_t l_623[7] = {0L,0L,0L,0L,0L,0L,0L};
                    int i;
                    (*l_495) ^= (&l_559 == &g_507);
                    if (l_561)
                        continue;
                    l_623[0] |= ((safe_mod_func_int32_t_s_s(((void*)0 != &l_589[3][4]), ((*l_612) = 7UL))) >= ((~(g_357.f1 = (g_68 < ((safe_sub_func_int32_t_s_s((l_616 , (safe_add_func_uint16_t_u_u(((((*l_517) = (((((safe_rshift_func_uint16_t_u_u(0xF9CBL, 1)) && (g_357.f1 , (*l_497))) > p_35.f0) , l_621) == (void*)0)) ^ l_622) ^ g_253), l_571))), p_35.f1)) >= g_214.f0)))) == g_181.f2));
                }
                else
                { 
                    int64_t l_631[2][1];
                    int i, j;
                    for (i = 0; i < 2; i++)
                    {
                        for (j = 0; j < 1; j++)
                            l_631[i][j] = 0L;
                    }
                    (*l_497) |= (((&l_559 != &g_253) > 0x09E57FF3AFD7B966LL) < (safe_lshift_func_uint16_t_u_u(((**l_491) > 0x0B41L), (safe_mul_func_int8_t_s_s(((*l_599) ^= (safe_add_func_uint8_t_u_u((*l_496), ((((~(**g_488)) | l_631[0][0]) > p_35.f1) & g_47.f0)))), l_631[0][0])))));
                    if (l_631[0][0])
                        continue;
                    if (p_35.f1)
                        break;
                }
                (*l_497) &= (safe_add_func_int32_t_s_s(((((*l_640) = ((g_214 , (func_41(&l_553[0], &l_553[1], (***g_62), ((p_35.f1 , (l_543 != ((safe_sub_func_uint64_t_u_u(((l_512[3] |= (&g_84 != (void*)0)) ^ p_37), 0xD3884114C79ADEE7LL)) == 0x7D777629L))) || p_35.f0)) , g_112)) , l_636)) == g_641) > p_35.f0), g_484));
            }
            else
            { 
                const int16_t l_651 = 0xE4FFL;
                (*l_497) ^= (safe_sub_func_int32_t_s_s(p_35.f1, ((((safe_sub_func_uint16_t_u_u((safe_add_func_int8_t_s_s((0UL && ((safe_unary_minus_func_uint32_t_u(g_108)) && l_616.f0)), 0xA0L)), ((safe_sub_func_int16_t_s_s(l_651, (*l_496))) ^ g_214.f0))) , g_652[0]) | l_653) , 0xEC253BFFL)));
            }
            l_655--;
            if (p_35.f0)
                break;
            for (l_603 = 1; (l_603 <= 5); l_603 += 1)
            { 
                struct S0 *l_659 = &g_181;
                struct S0 **l_658[4][4][2] = {{{&l_659,&l_659},{&l_659,&l_659},{&l_659,&l_659},{&l_659,&l_659}},{{&l_659,&l_659},{&l_659,&l_659},{&l_659,&l_659},{&l_659,&l_659}},{{&l_659,&l_659},{&l_659,&l_659},{&l_659,&l_659},{&l_659,&l_659}},{{&l_659,&l_659},{&l_659,&l_659},{&l_659,&l_659},{&l_659,&l_659}}};
                uint8_t l_666 = 9UL;
                int i, j, k;
                (*l_497) ^= g_652[0];
                g_660 = &g_181;
                (*l_497) ^= (~((p_35.f1 | g_68) && (safe_div_func_int8_t_s_s((((safe_lshift_func_int8_t_s_u(l_666, (((safe_lshift_func_uint16_t_u_u(g_181.f7, (l_512[1] = (((*l_599) = p_37) | (((-10L) | (safe_mul_func_int16_t_s_s((l_671 , l_590), p_37))) || g_181.f6))))) <= g_273.f0) | g_507))) & p_35.f0) < p_35.f1), l_666))));
                for (l_616.f1.f7 = 0; (l_616.f1.f7 <= 5); l_616.f1.f7 += 1)
                { 
                    uint32_t l_672 = 0x3CF09CFEL;
                    ++l_672;
                }
            }
        }
        return l_493;
    }
}



static uint16_t * func_39(union U4  p_40)
{ 
    int16_t l_59 = 0x3CD0L;
    union U3 l_65 = {0x0CD5C0F4L};
    int32_t l_70[4] = {1L,1L,1L,1L};
    uint64_t l_250 = 0UL;
    union U2 *l_272[1];
    int32_t *l_274 = &l_70[1];
    int32_t **l_275 = &l_274;
    union U1 l_278[7] = {{0x8B7D319A833028EELL},{0x8B7D319A833028EELL},{0x8B7D319A833028EELL},{0x8B7D319A833028EELL},{0x8B7D319A833028EELL},{0x8B7D319A833028EELL},{0x8B7D319A833028EELL}};
    uint64_t l_335[2][1][6] = {{{0xF1FFD86D647E48A2LL,0xF1FFD86D647E48A2LL,0xF1FFD86D647E48A2LL,0xF1FFD86D647E48A2LL,0xF1FFD86D647E48A2LL,0xF1FFD86D647E48A2LL}},{{0xF1FFD86D647E48A2LL,0xF1FFD86D647E48A2LL,0xF1FFD86D647E48A2LL,0xF1FFD86D647E48A2LL,0xF1FFD86D647E48A2LL,0xF1FFD86D647E48A2LL}}};
    uint32_t l_429 = 0UL;
    uint16_t *l_472[6][4][4] = {{{&g_31[1],&g_31[0],&g_31[0],(void*)0},{&g_31[0],&g_31[0],&g_31[0],&g_31[0]},{&g_31[2],&g_31[0],&g_31[2],(void*)0},{&g_31[0],&g_31[0],&g_31[0],&g_31[0]}},{{&g_31[0],&g_31[0],&g_31[0],&g_31[0]},{&g_31[3],&g_31[0],&g_31[0],&g_31[3]},{&g_31[0],(void*)0,&g_31[0],&g_31[2]},{&g_31[0],&g_31[0],&g_31[2],&g_31[1]}},{{&g_31[2],&g_31[1],&g_31[0],&g_31[1]},{&g_31[0],&g_31[0],&g_31[0],&g_31[2]},{&g_31[1],(void*)0,&g_31[1],&g_31[3]},{&g_31[0],&g_31[0],&g_31[0],&g_31[0]}},{{&g_31[0],&g_31[0],&g_31[0],(void*)0},{&g_31[2],&g_31[0],&g_31[1],&g_31[0]},{&g_31[3],&g_31[0],&g_31[1],&g_31[1]},{&g_31[0],&g_31[0],&g_31[0],&g_31[0]}},{{&g_31[0],&g_31[0],&g_31[0],(void*)0},{(void*)0,&g_31[1],&g_31[3],&g_31[0]},{&g_31[0],&g_31[3],&g_31[3],&g_31[0]},{(void*)0,&g_31[0],&g_31[0],&g_31[0]}},{{&g_31[0],&g_31[0],&g_31[0],&g_31[0]},{&g_31[0],&g_31[0],&g_31[1],&g_31[0]},{&g_31[3],&g_31[0],&g_31[1],&g_31[0]},{&g_31[2],&g_31[0],&g_31[0],&g_31[0]}}};
    int i, j, k;
    for (i = 0; i < 1; i++)
        l_272[i] = &g_273;
    if ((safe_sub_func_int64_t_s_s((l_59 > l_59), ((((safe_rshift_func_int8_t_s_u(((void*)0 == g_62), l_59)) > (l_65 , g_47.f0)) >= l_59) < 0xE72F236BBBD28A21LL))))
    { 
        int16_t l_66[5][7] = {{1L,0x74AAL,0x74AAL,1L,0x459CL,0x3DC2L,0x3DC2L},{0x6FA4L,0xBF2FL,3L,0xBF2FL,0x6FA4L,0xBF2FL,3L},{0x459CL,1L,0x74AAL,0x74AAL,1L,0x459CL,0x3DC2L},{0x5505L,(-3L),0x5505L,0xBF2FL,0x5505L,(-3L),0x5505L},{0x459CL,0x74AAL,0x3DC2L,1L,1L,0x3DC2L,0x74AAL}};
        int32_t *l_67 = &g_68;
        int32_t *l_69 = (void*)0;
        int32_t *l_71 = (void*)0;
        int32_t *l_72 = &g_68;
        int32_t *l_73 = &l_70[0];
        int32_t *l_74 = (void*)0;
        int32_t *l_75 = &l_70[1];
        int32_t *l_76 = (void*)0;
        int32_t *l_77 = &l_70[1];
        int32_t *l_78 = (void*)0;
        int32_t *l_79[2];
        uint64_t l_81 = 18446744073709551615UL;
        int i, j;
        for (i = 0; i < 2; i++)
            l_79[i] = &g_68;
        ++l_81;
        g_84 = l_74;
    }
    else
    { 
        union U1 l_94 = {3L};
        int16_t l_128[3];
        union U1 l_129 = {1L};
        int32_t l_186 = 0x41C8DEFAL;
        union U3 *l_195[6] = {&l_65,&l_65,&l_65,&l_65,&l_65,&l_65};
        union U2 *l_198 = (void*)0;
        uint64_t l_224 = 0xCFBBAAEE789F30D9LL;
        int i;
        for (i = 0; i < 3; i++)
            l_128[i] = (-1L);
        for (l_65.f2 = 2; (l_65.f2 <= 24); l_65.f2 = safe_add_func_uint16_t_u_u(l_65.f2, 1))
        { 
            union U3 **l_118 = &g_46;
            int32_t l_141 = 0xC20A8E5FL;
            union U2 *l_168 = &g_19;
            int64_t l_264 = 0x185051AD09930230LL;
            for (l_59 = 0; (l_59 <= (-21)); l_59--)
            { 
                uint32_t l_104 = 0x18302A6FL;
                union U3 *** const l_123 = (void*)0;
                union U3 *** const *l_122 = &l_123;
                const union U4 l_130[5][7] = {{{0xA2C1E63FL},{0xA2C1E63FL},{0xA2C1E63FL},{0xA2C1E63FL},{0xA2C1E63FL},{0xA2C1E63FL},{0xA2C1E63FL}},{{0UL},{0UL},{0UL},{0UL},{0UL},{0UL},{0UL}},{{0xA2C1E63FL},{0xA2C1E63FL},{0xA2C1E63FL},{0xA2C1E63FL},{0xA2C1E63FL},{0xA2C1E63FL},{0xA2C1E63FL}},{{0UL},{0UL},{0UL},{0UL},{0UL},{0UL},{0UL}},{{0xA2C1E63FL},{0xA2C1E63FL},{0xA2C1E63FL},{0xA2C1E63FL},{0xA2C1E63FL},{0xA2C1E63FL},{0xA2C1E63FL}}};
                union U2 *l_169 = &g_19;
                const uint64_t *l_184 = (void*)0;
                union U2 **l_196 = (void*)0;
                union U2 **l_197 = &l_169;
                int16_t *l_199 = &g_108;
                int32_t l_259 = 0xC047C511L;
                uint8_t l_265[1];
                int i, j;
                for (i = 0; i < 1; i++)
                    l_265[i] = 0x10L;
            }
            return &g_31[0];
        }
    }
    for (g_112 = 0; (g_112 != 39); g_112++)
    { 
        union U2 *l_270 = &g_19;
        union U2 **l_271 = (void*)0;
        l_272[0] = l_270;
    }
lbl_407:
    (*l_275) = l_274;
    for (g_47.f2 = 0; (g_47.f2 < 45); ++g_47.f2)
    { 
        int32_t l_279 = 0x2B729E55L;
        int32_t l_285 = 0x1A905402L;
        int32_t l_286 = 0x8F9857E4L;
        int32_t l_287 = 0x9D1CEE3CL;
        int32_t l_288 = 0L;
        int32_t l_289[5];
        int32_t l_395 = (-1L);
        int32_t l_396 = 0xCB7D202AL;
        int i;
        for (i = 0; i < 5; i++)
            l_289[i] = 0x2A147795L;
        if ((l_278[1] , p_40.f0))
        { 
            int32_t *l_283[4];
            uint16_t *l_284 = (void*)0;
            uint16_t l_291 = 65532UL;
            uint64_t *l_322 = (void*)0;
            uint64_t **l_321 = &l_322;
            union U1 l_324[6] = {{0xF3B88300E0F48A35LL},{0xF3B88300E0F48A35LL},{0xF3B88300E0F48A35LL},{0xF3B88300E0F48A35LL},{0xF3B88300E0F48A35LL},{0xF3B88300E0F48A35LL}};
            uint64_t **l_325 = &l_322;
            int i;
            for (i = 0; i < 4; i++)
                l_283[i] = (void*)0;
            if (g_181.f5)
            { 
                int32_t *l_280[2];
                int i;
                for (i = 0; i < 2; i++)
                    l_280[i] = &g_2;
                if (l_279)
                    break;
                (*l_275) = l_280[1];
                for (g_214.f1.f7 = 25; (g_214.f1.f7 != 10); g_214.f1.f7 = safe_sub_func_int8_t_s_s(g_214.f1.f7, 5))
                { 
                    (*l_275) = (l_283[0] = l_283[0]);
                    return l_284;
                }
            }
            else
            { 
                int32_t l_290 = 8L;
                int32_t l_294 = 0xDB4B4AAEL;
                l_291++;
                l_294 = p_40.f1;
                if (p_40.f0)
                    break;
                (*l_274) ^= (-1L);
            }
            if ((**l_275))
            { 
                int32_t l_295[3][4] = {{1L,0x39828ED5L,0x39828ED5L,1L},{0x39828ED5L,1L,0x39828ED5L,0x39828ED5L},{1L,1L,0x2844F21BL,1L}};
                uint16_t *l_303[2][5] = {{&g_31[0],&g_31[0],&g_31[0],&g_31[0],&g_31[0]},{&g_31[3],&g_31[3],&g_31[3],&g_31[3],&g_31[3]}};
                int8_t *l_306[3];
                int16_t *l_310 = &g_108;
                int32_t l_313[7][4][5] = {{{0x67253318L,0x8BAF473BL,0x67253318L,0x67253318L,0x8BAF473BL},{0L,(-10L),(-10L),0L,(-10L)},{0x8BAF473BL,0x8BAF473BL,0L,0x8BAF473BL,0x8BAF473BL},{(-10L),0L,(-10L),(-10L),0L}},{{0x8BAF473BL,0x67253318L,0x67253318L,0x8BAF473BL,0x67253318L},{0L,0L,7L,0L,0L},{0x67253318L,0x8BAF473BL,0x67253318L,0x67253318L,0x8BAF473BL},{0L,(-10L),(-10L),0L,(-10L)}},{{0x8BAF473BL,0x67253318L,0x8BAF473BL,0x67253318L,0x67253318L},{7L,(-10L),7L,7L,(-10L)},{0x67253318L,0L,0L,0x67253318L,0L},{(-10L),(-10L),0L,(-10L),(-10L)}},{{0L,0x67253318L,0L,0L,0x67253318L},{(-10L),7L,7L,(-10L),7L},{0x67253318L,0x67253318L,0x8BAF473BL,0x67253318L,0x67253318L},{7L,(-10L),7L,7L,(-10L)}},{{0x67253318L,0L,0L,0x67253318L,0L},{(-10L),(-10L),0L,(-10L),(-10L)},{0L,0x67253318L,0L,0L,0x67253318L},{(-10L),7L,7L,(-10L),7L}},{{0x67253318L,0x67253318L,0x8BAF473BL,0x67253318L,0x67253318L},{7L,(-10L),7L,7L,(-10L)},{0x67253318L,0L,0L,0x67253318L,0L},{(-10L),(-10L),0L,(-10L),(-10L)}},{{0L,0x67253318L,0L,0L,0x67253318L},{(-10L),7L,7L,(-10L),7L},{0x67253318L,0x67253318L,0x8BAF473BL,0x67253318L,0x67253318L},{7L,(-10L),7L,7L,(-10L)}}};
                int32_t l_314 = 0xD49E8312L;
                uint64_t ***l_323 = &l_321;
                uint16_t **l_326 = &l_284;
                uint16_t **l_327 = &l_303[1][2];
                uint16_t *l_332 = &g_31[0];
                int i, j, k;
                for (i = 0; i < 3; i++)
                    l_306[i] = &l_278[1].f1.f5;
                l_314 &= (g_181.f2 > (l_295[0][2] >= (((safe_rshift_func_int8_t_s_u((safe_rshift_func_uint16_t_u_u((safe_mod_func_int8_t_s_s((g_181.f5 = (+(--g_31[2]))), g_214.f0)), (((safe_rshift_func_int16_t_s_u(((*l_310) = (safe_unary_minus_func_int32_t_s(g_47.f2))), ((+((l_313[2][2][2] = (g_312[1] == (void*)0)) & 65535UL)) | p_40.f1))) , p_40.f1) >= 0x84BAL))), g_188[1][0])) && l_285) | p_40.f1)));
                l_286 = ((l_70[1] = p_40.f0) <= ((safe_rshift_func_int16_t_s_s((safe_sub_func_uint16_t_u_u(p_40.f0, (((*l_310) |= (safe_sub_func_int16_t_s_s((((((*l_323) = l_321) == (l_324[3] , l_325)) , ((*l_326) = &g_31[0])) == ((*l_327) = &g_31[3])), 65535UL))) , p_40.f0))), 2)) && g_112));
                for (g_108 = 0; (g_108 < (-12)); g_108--)
                { 
                    struct S0 *l_330 = (void*)0;
                    struct S0 *l_331 = &l_278[1].f1;
                    (*l_331) = g_181;
                    l_285 = l_313[2][2][2];
                    return l_332;
                }
                return &g_31[3];
            }
            else
            { 
                int32_t l_333 = 1L;
                int32_t l_334[7][7][1] = {{{0x8D56101CL},{0L},{0x8D56101CL},{0x443CEC6AL},{1L},{0x8D56101CL},{1L}},{{0xB10FF59FL},{0x443CEC6AL},{0x443CEC6AL},{0xB10FF59FL},{1L},{0x8D56101CL},{1L}},{{0x443CEC6AL},{0x8D56101CL},{0L},{0x8D56101CL},{0x443CEC6AL},{1L},{0x8D56101CL}},{{1L},{0xB10FF59FL},{0x443CEC6AL},{0x443CEC6AL},{0xB10FF59FL},{1L},{0x8D56101CL}},{{1L},{0x443CEC6AL},{0x8D56101CL},{0L},{0x8D56101CL},{0x443CEC6AL},{1L}},{{0x8D56101CL},{1L},{0xB10FF59FL},{0x443CEC6AL},{0x443CEC6AL},{0xB10FF59FL},{1L}},{{0x8D56101CL},{1L},{0x443CEC6AL},{0x8D56101CL},{0L},{0x8D56101CL},{0x443CEC6AL}}};
                int i, j, k;
                l_335[0][0][3]++;
            }
            return &g_31[0];
        }
        else
        { 
            int32_t l_344 = 0xA1E0E5EEL;
            int32_t l_362 = 0x4209ECD1L;
            uint32_t *l_383 = &g_125[3];
            int64_t l_388 = 0xFDA621DDADD1EA78LL;
            int32_t l_392 = 0x8BF56197L;
            int32_t l_393 = (-6L);
            int32_t l_394[3];
            int32_t l_397 = 0xE401372DL;
            uint32_t l_426 = 5UL;
            int i;
            for (i = 0; i < 3; i++)
                l_394[i] = 0x54B015BFL;
            if (g_47.f0)
                break;
            for (l_285 = 0; (l_285 >= 22); l_285 = safe_add_func_uint8_t_u_u(l_285, 9))
            { 
                uint16_t *l_347 = &g_31[0];
                uint64_t *l_356 = (void*)0;
                uint64_t **l_355 = &l_356;
                uint64_t *l_360 = &g_181.f1;
                int32_t l_361[2];
                int i;
                for (i = 0; i < 2; i++)
                    l_361[i] = (-1L);
                l_362 |= (safe_add_func_uint32_t_u_u((safe_mul_func_uint8_t_u_u(((g_125[3] = l_344) | (0xF21EL > (safe_lshift_func_uint16_t_u_s(((*l_347)--), (safe_div_func_int8_t_s_s((((safe_mul_func_uint8_t_u_u(((!(((*l_360) |= ((l_355 == (g_357 , &l_356)) & ((p_40.f1 < (safe_add_func_uint8_t_u_u(0xD8L, 0xEBL))) ^ g_47.f2))) && p_40.f0)) <= p_40.f1), l_361[0])) | (**l_275)) >= 0xA3F8601DL), 0x7BL)))))), 0xBFL)), 0x40AC3FDCL));
                if (l_361[0])
                { 
                    int32_t *l_363 = &g_80[0];
                    int32_t *l_364[6];
                    uint64_t l_365 = 0x1B8A3034F45D0BD2LL;
                    int16_t *l_371 = (void*)0;
                    int16_t *l_372[3];
                    const union U1 l_373 = {-4L};
                    int i;
                    for (i = 0; i < 6; i++)
                        l_364[i] = &l_361[1];
                    for (i = 0; i < 3; i++)
                        l_372[i] = &l_278[1].f1.f0;
                    l_365--;
                    (*l_363) = ((*l_274) = (safe_unary_minus_func_int64_t_s((g_214.f0 | ((0xD4L >= (safe_rshift_func_int16_t_s_u((l_344 = 0x1155L), ((l_373 , ((safe_mod_func_int16_t_s_s((((*l_360) = (safe_mod_func_int64_t_s_s(((void*)0 == &g_253), 0xB2CF65C6CC017599LL))) != (-4L)), p_40.f0)) , g_108)) && p_40.f1)))) , 0x8590ADC0FECBAB64LL)))));
                }
                else
                { 
                    int32_t l_386 = 6L;
                    uint16_t *l_387 = (void*)0;
                    int32_t *l_389 = &g_68;
                    int32_t l_390[3];
                    int32_t *l_391[3][6] = {{&l_390[0],&l_361[0],&l_390[0],&l_361[0],&l_361[0],&l_390[0]},{&g_80[0],&g_80[0],&l_361[0],&g_80[0],&l_361[0],&g_80[0]},{&l_361[0],&l_361[0],&g_80[0],&g_80[0],&l_361[0],&l_361[0]}};
                    uint64_t l_398 = 1UL;
                    int i, j;
                    for (i = 0; i < 3; i++)
                        l_390[i] = (-5L);
                    (*l_274) = (((safe_sub_func_int32_t_s_s(p_40.f1, (l_361[0] || ((safe_add_func_int16_t_s_s(((0xF0E826D9L != l_286) & ((!((((l_383 == l_383) > (safe_rshift_func_int8_t_s_s(((l_386 = ((p_40.f1 <= l_279) >= l_361[0])) == l_287), g_181.f1))) , l_387) != &g_31[0])) , g_188[2][1])), 1UL)) || p_40.f0)))) & 0UL) > 0x5FE07821L);
                    (**l_275) &= ((l_388 & ((p_40.f0 && l_386) , 0x97L)) <= 0x8FB9F5E7C83C6933LL);
                    l_398++;
                    (**l_275) = (p_40.f1 <= ((((safe_lshift_func_uint16_t_u_s(((((safe_sub_func_uint8_t_u_u((safe_div_func_int16_t_s_s(((p_40.f1 & ((l_360 == (void*)0) <= 65532UL)) < (l_394[1] <= p_40.f1)), p_40.f1)), p_40.f0)) <= 4UL) , l_287) & l_361[0]), 5)) & 1L) != l_362) , l_285));
                }
            }
            if (p_40.f0)
                break;
            for (g_108 = 3; (g_108 >= 0); g_108 -= 1)
            { 
                int32_t l_424 = 0L;
                int32_t l_425 = (-1L);
                int i;
                for (l_362 = 0; (l_362 <= 3); l_362 += 1)
                { 
                    int i;
                    if (p_40.f0)
                        goto lbl_407;
                    if (g_125[g_108])
                        break;
                    if (g_181.f2)
                        goto lbl_407;
                    return &g_31[0];
                }
                for (g_181.f1 = 0; (g_181.f1 <= 3); g_181.f1 += 1)
                { 
                    int32_t l_410 = 0x41E353BDL;
                    int32_t *l_411 = &g_80[0];
                    int32_t *l_412 = &l_288;
                    int32_t *l_413 = &l_70[3];
                    int32_t *l_414 = &g_68;
                    int32_t *l_415 = &l_70[0];
                    int32_t *l_416 = (void*)0;
                    int32_t *l_417 = (void*)0;
                    int32_t *l_418 = &l_397;
                    int32_t *l_419 = &l_394[0];
                    int32_t l_420 = 1L;
                    int32_t *l_421 = &l_420;
                    int32_t *l_422 = &l_397;
                    int32_t *l_423[4][6] = {{&l_70[0],&l_362,&l_70[0],&l_289[0],&l_395,&l_289[0]},{&l_70[0],&l_362,&l_70[0],&l_289[0],&l_395,&l_289[0]},{&l_70[0],&l_362,&l_70[0],&l_289[0],&l_395,&l_289[0]},{&l_70[0],&l_362,&l_70[0],&l_289[0],&l_395,&l_289[0]}};
                    int i, j;
                    l_396 ^= (safe_mul_func_int16_t_s_s(6L, g_125[g_181.f1]));
                    (*l_274) &= g_125[3];
                    l_426++;
                    l_429++;
                    (*l_413) |= ((*l_422) = 0L);
                }
                if (g_125[g_108])
                    break;
            }
            (**l_275) = 0xEAEFBCFBL;
        }
    }
    for (g_47.f2 = 0; (g_47.f2 <= 1); g_47.f2 += 1)
    { 
        union U4 *l_433 = &g_357;
        union U4 **l_432 = &l_433;
        int16_t *l_436 = (void*)0;
        uint64_t *l_439 = &l_335[0][0][3];
        uint64_t **l_438 = &l_439;
        uint64_t ** const *l_437[3][1];
        int i, j;
        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 1; j++)
                l_437[i][j] = &l_438;
        }
        (*l_432) = &g_357;
        g_80[g_47.f2] |= (safe_rshift_func_uint16_t_u_s((l_436 != (g_312[1] = l_436)), 11));
        for (g_181.f4 = 0; (g_181.f4 <= 1); g_181.f4 += 1)
        { 
            union U3 *l_449 = &g_47;
            union U4 **l_470 = &g_469;
            int32_t *l_471[3][7][6] = {{{(void*)0,(void*)0,&g_121,&g_121,(void*)0,&g_121},{&g_121,(void*)0,&g_121,&g_121,(void*)0,&g_121},{&g_121,(void*)0,&g_121,&g_121,(void*)0,&g_121},{&g_121,(void*)0,&g_121,&g_121,(void*)0,&g_121},{&g_121,(void*)0,&g_121,&g_121,(void*)0,&g_121},{&g_121,(void*)0,&g_121,&g_121,(void*)0,&g_121},{&g_121,(void*)0,&g_121,&g_121,(void*)0,&g_121}},{{&g_121,(void*)0,&g_121,&g_121,(void*)0,&g_121},{&g_121,(void*)0,&g_121,&g_121,(void*)0,&g_121},{&g_121,(void*)0,&g_121,&g_121,(void*)0,&g_121},{&g_121,(void*)0,&g_121,&g_121,(void*)0,&g_121},{&g_121,(void*)0,&g_121,&g_121,(void*)0,&g_121},{&g_121,(void*)0,&g_121,&g_121,(void*)0,&g_121},{&g_121,(void*)0,&g_121,&g_121,(void*)0,&g_121}},{{&g_121,(void*)0,&g_121,&g_121,(void*)0,&g_121},{&g_121,(void*)0,&g_121,&g_121,(void*)0,&g_121},{&g_121,(void*)0,&g_121,&g_121,(void*)0,&g_121},{&g_121,(void*)0,&g_121,&g_121,(void*)0,&g_121},{&g_121,(void*)0,&g_121,&g_121,(void*)0,&g_121},{&g_121,(void*)0,&g_121,&g_121,(void*)0,&g_121},{&g_121,(void*)0,&g_121,&g_121,(void*)0,&g_121}}};
            int i, j, k;
            if ((l_437[1][0] == ((g_80[g_47.f2] <= (safe_mod_func_int32_t_s_s((safe_add_func_uint32_t_u_u((g_80[g_181.f4] || (safe_add_func_uint64_t_u_u(((*l_439) = (**l_275)), (safe_mul_func_uint8_t_u_u((0xA0BAEF3A465EE469LL < g_80[g_47.f2]), ((g_357 , 7UL) < (**l_275))))))), (*l_274))), g_121))) , &l_438)))
            { 
                const union U2 l_448 = {0xFB0E1C05L};
                int32_t *l_460 = (void*)0;
                union U3 *l_461 = &g_47;
                int i;
                g_80[g_181.f4] ^= (l_448 , (&l_65 != (func_41((*g_64), (*g_64), l_449, (g_273.f0 <= (p_40.f0 , p_40.f1))) , (void*)0)));
                (*l_275) = (g_84 = &g_2);
                if ((g_357 , 0x664933B0L))
                { 
                    int16_t *l_456 = &g_108;
                    int32_t l_457[6];
                    int64_t *l_458 = &g_188[1][0];
                    int32_t l_459 = 1L;
                    int i;
                    for (i = 0; i < 6; i++)
                        l_457[i] = 0x264A9727L;
                    l_460 = ((g_80[g_47.f2] >= ((safe_mul_func_uint16_t_u_u((((l_459 = (((0L || 0x68C0A9DDL) || ((((*l_275) = &g_68) == (void*)0) ^ (safe_mod_func_int64_t_s_s(((*l_458) = (safe_sub_func_int16_t_s_s((l_457[4] = ((*l_456) = g_80[g_47.f2])), 0UL))), g_253)))) & g_47.f0)) , 0x7EBB4FB3L) > 0xD6171F85L), g_121)) && (*g_84))) , &g_80[0]);
                    g_80[g_181.f4] ^= 0x8503016CL;
                }
                else
                { 
                    uint16_t l_462 = 0xEBDBL;
                    (*g_64) = l_461;
                    --l_462;
                }
            }
            else
            { 
                int32_t *l_465 = &l_70[3];
                (*l_275) = l_465;
            }
            if (p_40.f0)
                continue;
            g_80[g_47.f2] |= (0xFD0EL == (safe_lshift_func_uint8_t_u_u((g_468 != l_470), 0)));
            g_84 = &g_80[g_47.f2];
        }
    }
    return l_472[1][0][3];
}



static union U4  func_41(union U3 * p_42, union U3 * p_43, union U3 * p_44, uint16_t  p_45)
{ 
    uint8_t l_52 = 0UL;
    union U3 **l_54 = &g_46;
    union U3 ***l_53 = &l_54;
    union U3 ****l_55 = &l_53;
    union U4 l_56 = {0xF3B1AD31L};
    l_52 |= g_47.f2;
    (*l_55) = l_53;
    return l_56;
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    transparent_crc(g_19.f0, "g_19.f0", print_hash_value);
    transparent_crc(g_19.f1, "g_19.f1", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_31[i], "g_31[i]", print_hash_value);

    }
    transparent_crc(g_47.f0, "g_47.f0", print_hash_value);
    transparent_crc(g_47.f2, "g_47.f2", print_hash_value);
    transparent_crc(g_68, "g_68", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_80[i], "g_80[i]", print_hash_value);

    }
    transparent_crc(g_108, "g_108", print_hash_value);
    transparent_crc(g_112, "g_112", print_hash_value);
    transparent_crc(g_121, "g_121", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_125[i], "g_125[i]", print_hash_value);

    }
    transparent_crc(g_181.f0, "g_181.f0", print_hash_value);
    transparent_crc(g_181.f1, "g_181.f1", print_hash_value);
    transparent_crc(g_181.f2, "g_181.f2", print_hash_value);
    transparent_crc(g_181.f3, "g_181.f3", print_hash_value);
    transparent_crc(g_181.f4, "g_181.f4", print_hash_value);
    transparent_crc(g_181.f5, "g_181.f5", print_hash_value);
    transparent_crc(g_181.f6, "g_181.f6", print_hash_value);
    transparent_crc(g_181.f7, "g_181.f7", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transparent_crc(g_188[i][j], "g_188[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_214.f0, "g_214.f0", print_hash_value);
    transparent_crc(g_253, "g_253", print_hash_value);
    transparent_crc(g_273.f0, "g_273.f0", print_hash_value);
    transparent_crc(g_273.f1, "g_273.f1", print_hash_value);
    transparent_crc(g_357.f1, "g_357.f1", print_hash_value);
    transparent_crc(g_484, "g_484", print_hash_value);
    transparent_crc(g_507, "g_507", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_652[i], "g_652[i]", print_hash_value);

    }
    transparent_crc(g_831, "g_831", print_hash_value);
    transparent_crc(g_865.f0, "g_865.f0", print_hash_value);
    transparent_crc(g_865.f2, "g_865.f2", print_hash_value);
    transparent_crc(g_937, "g_937", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_960[i], "g_960[i]", print_hash_value);

    }
    transparent_crc(g_1030.f0, "g_1030.f0", print_hash_value);
    transparent_crc(g_1030.f1, "g_1030.f1", print_hash_value);
    transparent_crc(g_1136, "g_1136", print_hash_value);
    transparent_crc(g_1140.f0, "g_1140.f0", print_hash_value);
    transparent_crc(g_1140.f2, "g_1140.f2", print_hash_value);
    transparent_crc(g_1144, "g_1144", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 4; k++)
            {
                transparent_crc(g_1145[i][j][k], "g_1145[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_1153, "g_1153", print_hash_value);
    transparent_crc(g_1180, "g_1180", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 7; j++)
        {
            for (k = 0; k < 3; k++)
            {
                transparent_crc(g_1253[i][j][k], "g_1253[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_1264, "g_1264", print_hash_value);
    transparent_crc(g_1268, "g_1268", print_hash_value);
    transparent_crc(g_1295, "g_1295", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 6; j++)
        {
            transparent_crc(g_1338[i][j], "g_1338[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_1689.f0, "g_1689.f0", print_hash_value);
    transparent_crc(g_1689.f1, "g_1689.f1", print_hash_value);
    transparent_crc(g_1733, "g_1733", print_hash_value);
    transparent_crc(g_1768.f0, "g_1768.f0", print_hash_value);
    transparent_crc(g_1768.f1, "g_1768.f1", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
