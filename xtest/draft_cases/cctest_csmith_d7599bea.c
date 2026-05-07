// SPDX-License-Identifier: MIT
// cctest_csmith_d7599bea.c --- cctest case csmith_d7599bea (csmith seed 3612974058)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x1c2a4586 */

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

// Options:   -s 3612974058 -o /tmp/csmith_gen_f8l5slps/csmith.c --concise --no-volatiles --no-volatile-pointers --max-funcs 8 --max-block-size 5 --max-block-depth 4 --max-expr-complexity 8 --max-array-dim 3 --max-array-len-per-dim 7 --max-struct-fields 8 --max-union-fields 5

static long __undefined;


#pragma pack(push)
#pragma pack(1)
struct S0 {
   int32_t  f0;
   uint16_t  f1;
   uint8_t  f2;
   unsigned f3 : 19;
   uint32_t  f4;
   signed f5 : 22;
};
#pragma pack(pop)

#pragma pack(push)
#pragma pack(1)
struct S1 {
   signed f0 : 21;
   signed f1 : 6;
   const unsigned f2 : 12;
   signed f3 : 7;
   unsigned f4 : 22;
};
#pragma pack(pop)

#pragma pack(push)
#pragma pack(1)
struct S2 {
   const unsigned f0 : 14;
   unsigned f1 : 11;
   unsigned f2 : 14;
   unsigned f3 : 1;
   const signed f4 : 26;
};
#pragma pack(pop)

struct S3 {
   struct S1  f0;
   uint32_t  f1;
   int16_t  f2;
};

union U4 {
   uint16_t  f0;
   const int32_t  f1;
   signed f2 : 26;
   unsigned f3 : 13;
};


static union U4 g_8 = {0x3E13L};
static int32_t g_10 = 0xFCFBCE00L;
static int32_t *g_9 = &g_10;
static struct S3 g_48 = {{-1070,6,14,-4,647},0UL,0L};
static int64_t g_51 = 0x9E1D621011012106LL;
static int32_t g_85 = (-1L);
static int64_t g_98 = 1L;
static int64_t *g_97 = &g_98;
static uint64_t g_113 = 18446744073709551614UL;
static uint32_t g_148 = 4294967295UL;
static const uint32_t *g_153 = &g_148;
static const uint32_t **g_152[3] = {&g_153,&g_153,&g_153};
static int32_t *g_175 = &g_85;
static const struct S0 g_201 = {0x001FCD46L,65531UL,0xC7L,626,0x5697FC64L,1604};
static struct S0 g_203 = {0x9EFA3817L,0x51DDL,0x8CL,109,0x85194D58L,1736};
static uint32_t ***g_204 = (void*)0;
static uint32_t g_217 = 0xC133A8E6L;
static int16_t g_220 = 0xE34AL;
static int8_t g_261 = 0xECL;
static int64_t g_291 = 0x83A632E2ADD75513LL;
static uint8_t g_292[4][5] = {{0x30L,1UL,0x30L,0xF1L,0xF1L},{2UL,248UL,2UL,0xEBL,0xEBL},{0x30L,1UL,0x30L,0xF1L,0xF1L},{2UL,248UL,2UL,0xEBL,0xEBL}};
static int8_t g_353 = 0x4AL;
static struct S2 g_364 = {32,10,27,0,253};
static struct S2 * const g_363[2][5][4] = {{{&g_364,&g_364,&g_364,&g_364},{&g_364,&g_364,&g_364,&g_364},{&g_364,&g_364,&g_364,&g_364},{&g_364,&g_364,&g_364,&g_364},{&g_364,&g_364,&g_364,&g_364}},{{&g_364,&g_364,&g_364,&g_364},{&g_364,&g_364,&g_364,&g_364},{&g_364,&g_364,&g_364,&g_364},{&g_364,&g_364,&g_364,&g_364},{&g_364,&g_364,&g_364,&g_364}}};
static struct S0 *g_418 = &g_203;
static int32_t **g_477 = &g_175;
static int32_t ***g_476 = &g_477;
static int32_t ****g_475 = &g_476;
static struct S2 g_517 = {97,41,9,0,3084};
static struct S2 *g_516 = &g_517;
static struct S2 g_519 = {38,15,25,0,-8161};
static int32_t **g_555 = &g_175;
static int32_t **g_556 = (void*)0;
static uint16_t g_587 = 0x2FA3L;
static uint16_t *g_590 = (void*)0;
static int32_t g_674 = 0xAD6F1835L;
static uint32_t g_693 = 0xF3CA17C8L;
static int64_t g_758 = 1L;
static uint8_t g_759 = 4UL;
static int8_t g_786[3][3] = {{0x42L,0L,0x42L},{0x42L,0L,0x42L},{0x42L,0L,0x42L}};
static uint32_t *g_803 = &g_48.f1;
static struct S1 *g_817 = &g_48.f0;
static uint32_t *g_826 = &g_148;
static uint32_t **g_825[3] = {&g_826,&g_826,&g_826};
static int32_t * const *g_835[5] = {&g_175,&g_175,&g_175,&g_175,&g_175};
static int32_t * const **g_834 = &g_835[0];
static int32_t * const ***g_833[7][3] = {{&g_834,&g_834,&g_834},{&g_834,(void*)0,&g_834},{&g_834,&g_834,&g_834},{(void*)0,&g_834,&g_834},{&g_834,&g_834,&g_834},{&g_834,(void*)0,&g_834},{(void*)0,&g_834,&g_834}};
static struct S3 **g_844 = (void*)0;
static union U4 g_923 = {0x9177L};
static union U4 *g_922 = &g_923;
static int32_t g_1070 = 0L;
static int64_t g_1071 = 0x9F7C35B07568155ALL;
static int8_t **g_1096 = (void*)0;
static uint32_t g_1182 = 18446744073709551615UL;
static int8_t g_1207 = 0x23L;
static int8_t g_1351 = 0L;
static union U4 g_1384 = {1UL};
static int8_t g_1450 = 0xDDL;
static uint32_t ****g_1548 = (void*)0;
static uint32_t *****g_1547 = &g_1548;
static int16_t ** const *g_1579 = (void*)0;
static int16_t ** const **g_1578[7][5] = {{(void*)0,&g_1579,(void*)0,&g_1579,(void*)0},{&g_1579,&g_1579,&g_1579,&g_1579,&g_1579},{(void*)0,&g_1579,(void*)0,&g_1579,(void*)0},{&g_1579,&g_1579,&g_1579,&g_1579,&g_1579},{(void*)0,&g_1579,(void*)0,&g_1579,(void*)0},{&g_1579,&g_1579,&g_1579,&g_1579,&g_1579},{(void*)0,&g_1579,(void*)0,&g_1579,(void*)0}};
static int64_t **g_1638 = &g_97;
static const int32_t g_1643[1][2][7] = {{{0xB636054DL,0xB636054DL,(-1L),0xB636054DL,0xB636054DL,(-1L),0xB636054DL},{(-7L),(-1L),(-1L),(-7L),(-1L),(-1L),(-7L)}}};
static int32_t g_1745 = 0x2E5D6BCEL;
static const struct S2 **g_1818 = (void*)0;
static const struct S2 ***g_1817 = &g_1818;
static int16_t ****g_1884 = (void*)0;
static struct S2 g_1891[7] = {{26,43,26,0,1459},{86,12,113,0,-7635},{26,43,26,0,1459},{26,43,26,0,1459},{86,12,113,0,-7635},{26,43,26,0,1459},{26,43,26,0,1459}};
static struct S2 g_1893 = {26,17,88,0,-1385};
static int64_t g_2041[2][2][4] = {{{0x9BBC0A6041475E22LL,0x9BBC0A6041475E22LL,0x6DECCF3CD07D253ALL,0x9BBC0A6041475E22LL},{0x9BBC0A6041475E22LL,0xE3CD6BCC213CFF9BLL,0xE3CD6BCC213CFF9BLL,0x9BBC0A6041475E22LL}},{{0xE3CD6BCC213CFF9BLL,0x9BBC0A6041475E22LL,0xE3CD6BCC213CFF9BLL,0xE3CD6BCC213CFF9BLL},{0x9BBC0A6041475E22LL,0x9BBC0A6041475E22LL,0x6DECCF3CD07D253ALL,0x9BBC0A6041475E22LL}}};
static uint64_t * const g_2060 = &g_113;
static uint64_t * const *g_2059 = &g_2060;
static const int32_t * const ****g_2078 = (void*)0;
static struct S2 g_2106 = {10,5,93,0,-5350};
static struct S2 *g_2105 = &g_2106;
static struct S2 g_2108 = {104,3,67,0,6163};
static const struct S2 g_2240 = {103,29,88,0,7379};
static int64_t ** const *g_2250 = (void*)0;
static struct S3 g_2258[5][5] = {{{{-343,-0,42,-4,1015},18446744073709551606UL,0x16E9L},{{1222,2,0,8,1141},18446744073709551615UL,0x71F7L},{{845,4,0,-8,1702},18446744073709551608UL,0x4046L},{{1250,-5,15,-10,1705},0x8A82D858L,-6L},{{770,-5,18,-1,924},0xF86F4C35L,-2L}},{{{-343,-0,42,-4,1015},18446744073709551606UL,0x16E9L},{{845,4,0,-8,1702},18446744073709551608UL,0x4046L},{{1402,-0,10,7,1212},5UL,0x0CB0L},{{845,4,0,-8,1702},18446744073709551608UL,0x4046L},{{-343,-0,42,-4,1015},18446744073709551606UL,0x16E9L}},{{{1222,2,0,8,1141},18446744073709551615UL,0x71F7L},{{-1114,7,4,10,454},18446744073709551615UL,-1L},{{-1267,-3,7,6,307},0xAE633C57L,0xC3FCL},{{1250,-5,15,-10,1705},0x8A82D858L,-6L},{{1423,6,45,-5,822},18446744073709551615UL,0x8F94L}},{{{-1267,-3,7,6,307},0xAE633C57L,0xC3FCL},{{-1114,7,4,10,454},18446744073709551615UL,-1L},{{1222,2,0,8,1141},18446744073709551615UL,0x71F7L},{{1222,2,0,8,1141},18446744073709551615UL,0x71F7L},{{-1114,7,4,10,454},18446744073709551615UL,-1L}},{{{1402,-0,10,7,1212},5UL,0x0CB0L},{{845,4,0,-8,1702},18446744073709551608UL,0x4046L},{{-343,-0,42,-4,1015},18446744073709551606UL,0x16E9L},{{-1114,7,4,10,454},18446744073709551615UL,-1L},{{1423,6,45,-5,822},18446744073709551615UL,0x8F94L}}};
static struct S3 *g_2257[6][4] = {{&g_2258[1][4],&g_48,&g_2258[1][4],&g_2258[1][4]},{&g_48,&g_48,&g_2258[1][4],&g_48},{&g_48,&g_2258[1][4],&g_2258[1][4],&g_48},{&g_2258[1][4],&g_48,&g_2258[1][4],&g_2258[1][4]},{&g_48,&g_48,&g_2258[1][4],&g_48},{&g_48,&g_2258[1][4],&g_2258[1][4],&g_48}};
static const int8_t g_2265 = 0L;
static uint32_t g_2279 = 0x5F0A2838L;
static int32_t *** const *g_2303 = (void*)0;
static int32_t *** const **g_2302 = &g_2303;
static struct S0 *g_2341 = &g_203;
static int32_t g_2345 = (-1L);
static int16_t g_2360 = 0x1DAFL;
static int64_t ***g_2402[5] = {&g_1638,&g_1638,&g_1638,&g_1638,&g_1638};
static int8_t g_2487 = 0x15L;
static int16_t * const g_2578[5][7][7] = {{{(void*)0,&g_220,&g_220,&g_2360,&g_2258[1][4].f2,&g_2258[1][4].f2,&g_2360},{&g_220,&g_2258[1][4].f2,&g_220,(void*)0,&g_48.f2,&g_2360,&g_2258[1][4].f2},{&g_48.f2,&g_2360,(void*)0,&g_2258[1][4].f2,&g_220,(void*)0,&g_2360},{&g_220,&g_2258[1][4].f2,&g_220,&g_2360,&g_2360,&g_2360,&g_220},{&g_220,&g_2360,&g_2258[1][4].f2,&g_2360,&g_2360,&g_2360,&g_2258[1][4].f2},{&g_2360,&g_2360,(void*)0,&g_48.f2,&g_2360,(void*)0,&g_2258[1][4].f2},{&g_220,&g_2258[1][4].f2,&g_2258[1][4].f2,&g_220,(void*)0,(void*)0,&g_48.f2}},{{(void*)0,&g_2360,(void*)0,&g_2360,&g_2360,&g_220,&g_2258[1][4].f2},{&g_2258[1][4].f2,&g_220,(void*)0,&g_2360,&g_2360,(void*)0,&g_220},{&g_2258[1][4].f2,&g_2258[1][4].f2,&g_220,&g_2360,&g_2360,(void*)0,&g_2360},{(void*)0,&g_48.f2,(void*)0,(void*)0,&g_220,&g_2258[1][4].f2,&g_2258[1][4].f2},{&g_220,&g_2258[1][4].f2,(void*)0,&g_2360,&g_48.f2,(void*)0,&g_2360},{&g_2360,&g_2258[1][4].f2,&g_2360,&g_2360,&g_2360,&g_2258[1][4].f2,&g_2360},{&g_220,&g_220,&g_2360,&g_2360,&g_2360,&g_220,&g_2258[1][4].f2}},{{&g_220,&g_2360,(void*)0,&g_220,&g_2258[1][4].f2,(void*)0,&g_2360},{&g_48.f2,&g_2258[1][4].f2,&g_2360,&g_48.f2,(void*)0,(void*)0,&g_220},{(void*)0,&g_2360,&g_2360,&g_2360,&g_2360,(void*)0,&g_2258[1][4].f2},{&g_2360,&g_220,(void*)0,&g_2360,&g_220,(void*)0,&g_48.f2},{&g_2360,&g_2258[1][4].f2,(void*)0,&g_2258[1][4].f2,&g_2360,&g_220,&g_2258[1][4].f2},{(void*)0,&g_220,&g_220,(void*)0,&g_220,&g_2258[1][4].f2,&g_2258[1][4].f2},{&g_220,&g_2360,(void*)0,&g_2360,&g_220,(void*)0,&g_220}},{{&g_2360,&g_2258[1][4].f2,(void*)0,&g_220,&g_2360,&g_2258[1][4].f2,&g_2360},{&g_220,&g_2360,&g_2258[1][4].f2,&g_2360,&g_220,(void*)0,&g_2258[1][4].f2},{&g_2360,&g_220,(void*)0,&g_220,&g_2360,(void*)0,&g_2360},{&g_220,&g_2258[1][4].f2,&g_2258[1][4].f2,&g_220,(void*)0,&g_220,&g_220},{(void*)0,&g_2258[1][4].f2,&g_220,&g_2360,&g_2258[1][4].f2,(void*)0,&g_2258[1][4].f2},{&g_2360,&g_48.f2,(void*)0,&g_220,&g_2360,(void*)0,&g_220},{&g_2360,&g_2258[1][4].f2,(void*)0,&g_2360,&g_2360,&g_2360,&g_2360}},{{(void*)0,&g_220,(void*)0,(void*)0,&g_2258[1][4].f2,(void*)0,(void*)0},{&g_2258[1][4].f2,(void*)0,&g_220,&g_2360,&g_2258[1][4].f2,&g_2360,&g_220},{(void*)0,(void*)0,(void*)0,(void*)0,&g_2258[1][4].f2,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,&g_2258[1][4].f2,&g_220,&g_2258[1][4].f2,(void*)0},{(void*)0,(void*)0,&g_2360,&g_2258[1][4].f2,(void*)0,&g_220,&g_2360},{&g_2258[1][4].f2,(void*)0,(void*)0,&g_2258[1][4].f2,(void*)0,&g_2360,&g_2258[1][4].f2},{&g_48.f2,(void*)0,(void*)0,&g_2258[1][4].f2,(void*)0,(void*)0,(void*)0}}};
static int16_t * const *g_2577 = &g_2578[0][0][6];
static int16_t * const **g_2576[1] = {&g_2577};
static uint16_t g_2602 = 0xC468L;
static int64_t g_2618 = 7L;



static int16_t  func_1(void);
static int32_t * const  func_2(union U4  p_3, int16_t  p_4, int32_t * p_5, uint8_t  p_6, int32_t  p_7);
static int32_t  func_13(struct S2  p_14, int8_t  p_15);
static const uint32_t  func_19(int16_t  p_20, struct S0  p_21);
static int8_t  func_24(int32_t ** p_25, int32_t * const * p_26, int32_t  p_27);
static struct S1  func_28(uint64_t  p_29, int32_t * p_30, uint32_t  p_31, struct S0  p_32);
static uint32_t  func_40(int32_t ** p_41);
static int32_t ** func_42(struct S3  p_43, int32_t * p_44, struct S3  p_45, int32_t ** p_46, uint32_t  p_47);




static int16_t  func_1(void)
{ 
    struct S2 l_16[2][2] = {{{15,0,12,0,-5740},{15,0,12,0,-5740}},{{15,0,12,0,-5740},{15,0,12,0,-5740}}};
    uint32_t l_2526 = 0x5848DB85L;
    int32_t **l_2629 = &g_175;
    int32_t *l_2630 = &g_10;
    struct S1 *l_2631 = &g_48.f0;
    struct S1 **l_2632 = &l_2631;
    int i, j;
    (*l_2629) = func_2(g_8, g_8.f0, g_9, ((safe_sub_func_int32_t_s_s(func_13(l_16[1][0], g_8.f0), (safe_div_func_uint32_t_u_u((safe_div_func_int16_t_s_s((-7L), l_16[1][0].f3)), 0xDD15CBB3L)))) > l_16[1][0].f1), l_2526);
    (*g_418) = (*g_2341);
    (*l_2629) = l_2630;
    (*l_2632) = l_2631;
    return (*l_2630);
}



static int32_t * const  func_2(union U4  p_3, int16_t  p_4, int32_t * p_5, uint8_t  p_6, int32_t  p_7)
{ 
    struct S0 l_2527 = {0xB570CD38L,0x1244L,0UL,70,0xD1C910E2L,-321};
    uint64_t l_2569 = 1UL;
    int32_t l_2612 = (-1L);
    uint32_t l_2613 = 0xE6BB6C20L;
    const int32_t *l_2616 = &l_2612;
    uint32_t **** const *l_2620 = (void*)0;
    (*g_2341) = (*g_2341);
    (*g_9) = ((***g_476) = (l_2527 , (**g_555)));
    for (p_6 = 0; (p_6 >= 46); p_6++)
    { 
        uint64_t l_2530 = 0x76916E97D0D1B185LL;
        struct S2 *l_2551 = &g_1891[4];
        struct S1 *l_2557 = &g_2258[1][4].f0;
        int32_t l_2568 = 1L;
        int32_t l_2611[3];
        int32_t * const l_2627 = (void*)0;
        int i;
        for (i = 0; i < 3; i++)
            l_2611[i] = 1L;
        if ((l_2530 <= ((safe_mod_func_int8_t_s_s((safe_mod_func_int64_t_s_s(l_2527.f2, (safe_mul_func_uint8_t_u_u(0xADL, l_2530)))), (g_2240.f0 , (safe_rshift_func_uint8_t_u_u((safe_sub_func_int32_t_s_s(l_2527.f3, l_2530)), p_6))))) < p_6)))
        { 
            uint64_t l_2548 = 0xF46456F04516F4E7LL;
            int32_t l_2565 = 3L;
            int32_t l_2566 = 0x94BD43C0L;
            int32_t l_2567 = 0x24030BF9L;
            int16_t ***l_2580 = (void*)0;
            uint64_t *l_2589[7][1];
            uint64_t **l_2588 = &l_2589[5][0];
            uint64_t ***l_2587 = &l_2588;
            int i, j;
            for (i = 0; i < 7; i++)
            {
                for (j = 0; j < 1; j++)
                    l_2589[i][j] = &l_2548;
            }
            for (g_923.f0 = 0; (g_923.f0 <= 47); g_923.f0 = safe_add_func_uint64_t_u_u(g_923.f0, 6))
            { 
                int8_t *l_2549 = &g_1207;
                struct S2 *l_2550 = &g_1893;
                struct S2 **l_2552 = &g_2105;
                int32_t l_2581 = 0x4EB19AE3L;
                const uint16_t * const l_2582 = &g_587;
                int32_t *l_2608 = &l_2566;
                int32_t *l_2609 = &l_2568;
                int32_t *l_2610[2][5][6] = {{{(void*)0,&g_1745,(void*)0,&l_2567,&g_85,&l_2567},{(void*)0,&g_1745,(void*)0,&l_2567,&g_85,&l_2567},{(void*)0,&g_1745,(void*)0,&l_2567,&g_85,&l_2567},{(void*)0,&g_1745,(void*)0,&l_2567,&g_85,&l_2567},{(void*)0,&g_1745,(void*)0,&l_2567,&g_85,&l_2567}},{{(void*)0,&g_1745,(void*)0,&l_2567,&g_85,&l_2567},{(void*)0,&g_1745,(void*)0,&l_2567,&g_85,&l_2567},{(void*)0,&g_1745,(void*)0,&l_2567,&g_85,&l_2567},{(void*)0,&g_1745,(void*)0,&l_2567,&g_85,&l_2567},{(void*)0,&g_1745,(void*)0,&l_2567,&g_85,&l_2567}}};
                int i, j, k;
                (**g_555) |= ((~(safe_mul_func_int8_t_s_s((safe_add_func_uint16_t_u_u(p_6, (((((p_7 > ((*l_2549) = ((&g_1884 != (void*)0) >= l_2548))) , l_2550) != ((*l_2552) = l_2551)) | l_2530) && (*p_5)))), 0x27L))) , (*p_5));
                for (l_2548 = 0; (l_2548 >= 38); l_2548++)
                { 
                    int16_t *l_2558 = &g_220;
                    struct S0 l_2559 = {0xFB0020AEL,0UL,4UL,562,18446744073709551613UL,-627};
                    int32_t *l_2560 = &g_1745;
                    int32_t *l_2561 = &g_10;
                    int32_t *l_2562 = &g_1745;
                    int32_t *l_2563 = (void*)0;
                    int32_t *l_2564[3][4] = {{&g_203.f0,(void*)0,&g_203.f0,(void*)0},{&g_203.f0,(void*)0,&g_203.f0,(void*)0},{&g_203.f0,(void*)0,&g_203.f0,(void*)0}};
                    int16_t * const ***l_2579 = &g_2576[0];
                    int i, j;
                    l_2527 = (((safe_add_func_uint16_t_u_u(l_2527.f0, ((*l_2558) = ((void*)0 != l_2557)))) >= p_6) , l_2559);
                    l_2569--;
                    (*p_5) |= (safe_lshift_func_int16_t_s_s(p_4, (0xAFF6640FL || (safe_add_func_uint8_t_u_u((l_2527.f0 = g_217), (((*l_2579) = g_2576[0]) == l_2580))))));
                }
                if ((l_2581 & ((((l_2582 == l_2582) != (safe_div_func_uint64_t_u_u((++(**g_2059)), ((***l_2587) &= (((p_3.f3 = p_6) && ((p_4 , (void*)0) == l_2587)) , p_3.f3))))) == p_4) ^ g_519.f0)))
                { 
                    int32_t * const l_2590 = &g_1745;
                    return l_2590;
                }
                else
                { 
                    uint8_t *l_2599 = &g_292[3][0];
                    int32_t l_2600 = 0x242E7117L;
                    const int32_t l_2601[3][3] = {{(-1L),(-1L),(-1L)},{0x22FE42FFL,0x22FE42FFL,0x22FE42FFL},{(-1L),(-1L),(-1L)}};
                    int8_t *l_2607 = &g_261;
                    int i, j;
                    (*p_5) = ((0x0D0FC8EBF6A722F6LL ^ ((p_3.f3 | l_2581) && (~((safe_rshift_func_uint16_t_u_s((0xB5L ^ ((+(((((*g_826)++) || ((safe_mul_func_uint8_t_u_u(((*l_2599) &= 0x34L), (((p_7 , (p_6 , (*g_817))) , l_2565) | l_2600))) < 0x54707B15L)) , p_4) || l_2601[2][1])) ^ 0x26EDL)), p_6)) == g_2602)))) && 1L);
                    (*p_5) |= (safe_rshift_func_uint8_t_u_s((safe_lshift_func_uint8_t_u_s(0xC4L, 6)), ((*l_2607) = ((*l_2549) = p_6))));
                }
                ++l_2613;
            }
            return (**g_834);
        }
        else
        { 
            uint32_t **** const *l_2619 = &g_1548;
            uint32_t *****l_2622 = &g_1548;
            const int32_t l_2628 = 1L;
            for (g_923.f0 = 0; (g_923.f0 <= 4); g_923.f0 += 1)
            { 
                const int32_t **l_2617 = &l_2616;
                struct S2 l_2621 = {76,7,43,0,1443};
                (*l_2617) = l_2616;
                (*l_2617) = (void*)0;
                if (g_2618)
                    break;
                (***g_476) |= ((l_2620 = l_2619) != (l_2621 , (l_2622 = (void*)0)));
                if ((*p_5))
                    continue;
            }
            for (g_148 = 23; (g_148 <= 48); ++g_148)
            { 
                for (g_113 = 0; (g_113 >= 1); g_113++)
                { 
                    return l_2627;
                }
                (*g_9) = l_2628;
                if ((**g_477))
                    continue;
            }
        }
    }
    return (**g_476);
}



static int32_t  func_13(struct S2  p_14, int8_t  p_15)
{ 
    int32_t *l_23 = &g_10;
    int32_t **l_22 = &l_23;
    int32_t *l_33 = &g_10;
    struct S0 l_606[6] = {{0xD6B10481L,0x9031L,1UL,37,0x233801A1L,-337},{0xD6B10481L,0x9031L,1UL,37,0x233801A1L,-337},{0xD6B10481L,0x9031L,1UL,37,0x233801A1L,-337},{0xD6B10481L,0x9031L,1UL,37,0x233801A1L,-337},{0xD6B10481L,0x9031L,1UL,37,0x233801A1L,-337},{0xD6B10481L,0x9031L,1UL,37,0x233801A1L,-337}};
    int32_t l_610 = 4L;
    uint32_t l_1743 = 0x7BEF43C6L;
    int32_t *l_1744 = &g_1745;
    uint32_t l_1773 = 0x2C4FD486L;
    int16_t l_1781[7][6][5] = {{{(-6L),(-6L),0xAC82L,8L,0xFE49L},{0x8B74L,7L,0x3AE6L,0xD587L,0x60FFL},{0x1A1CL,(-6L),0xFE49L,0xCF21L,(-10L)},{0xAC78L,7L,0x4D1AL,(-1L),0x3AE6L},{0L,(-6L),0x35EAL,0x586CL,0x35EAL},{1L,7L,0x60FFL,0L,1L}},{{3L,(-6L),0L,0x9BD5L,0xAC82L},{(-7L),7L,1L,0x2AB4L,0x4D1AL},{(-1L),(-6L),(-10L),0L,0L},{0x10A0L,7L,0xD2EFL,0x9363L,0xD2EFL},{(-6L),(-6L),0xAC82L,8L,0x1D69L},{0xD2EFL,1L,0x10B5L,(-1L),0L}},{{(-10L),0xAC82L,0x1D69L,0x6954L,1L},{1L,1L,1L,0L,0x10B5L},{0L,0xAC82L,1L,(-5L),1L},{0x60FFL,1L,0L,(-1L),1L},{0x35EAL,0xAC82L,0L,0x3B52L,(-1L)},{0x4D1AL,1L,1L,0xF2A4L,1L}},{{0xFE49L,0xAC82L,1L,0xABABL,0L},{0x3AE6L,1L,0x1269L,7L,0x1269L},{0xAC82L,0xAC82L,(-1L),(-9L),0x1D69L},{0xD2EFL,1L,0x10B5L,(-1L),0L},{(-10L),0xAC82L,0x1D69L,0x6954L,1L},{1L,1L,1L,0L,0x10B5L}},{{0L,0xAC82L,1L,(-5L),1L},{0x60FFL,1L,0L,(-1L),1L},{0x35EAL,0xAC82L,0L,0x3B52L,(-1L)},{0x4D1AL,1L,1L,0xF2A4L,1L},{0xFE49L,0xAC82L,1L,0xABABL,0L},{0x3AE6L,1L,0x1269L,7L,0x1269L}},{{0xAC82L,0xAC82L,(-1L),(-9L),0x1D69L},{0xD2EFL,1L,0x10B5L,(-1L),0L},{(-10L),0xAC82L,0x1D69L,0x6954L,1L},{1L,1L,1L,0L,0x10B5L},{0L,0xAC82L,1L,(-5L),1L},{0x60FFL,1L,0L,(-1L),1L}},{{0x35EAL,0xAC82L,0L,0x3B52L,(-1L)},{0x4D1AL,1L,1L,0xF2A4L,1L},{0xFE49L,0xAC82L,1L,0xABABL,0L},{0x3AE6L,1L,0x1269L,7L,0x1269L},{0xAC82L,0xAC82L,(-1L),(-9L),0x1D69L},{0xD2EFL,1L,0x10B5L,(-1L),0L}}};
    int32_t l_1784[2][6] = {{0xDACB4C19L,0xDACB4C19L,0x7E046FB2L,0xC653B87BL,0x7E046FB2L,0xDACB4C19L},{0x7E046FB2L,0x1759F4A0L,0xC653B87BL,0xC653B87BL,0x1759F4A0L,0x7E046FB2L}};
    const struct S3 l_1788[2] = {{{-527,6,61,1,1987},0UL,9L},{{-527,6,61,1,1987},0UL,9L}};
    struct S1 **l_1791 = &g_817;
    const struct S1 * const l_1794[2] = {&g_48.f0,&g_48.f0};
    const struct S1 * const *l_1793 = &l_1794[0];
    uint32_t **l_1809[2];
    uint16_t l_1810[2];
    int16_t l_1811 = 0xBB99L;
    struct S2 **l_1907 = &g_516;
    uint8_t *l_1984[5];
    uint32_t l_2032 = 0x393AA5FBL;
    int32_t ** const **l_2057 = (void*)0;
    uint64_t *l_2064 = (void*)0;
    uint64_t * const *l_2063[6][2] = {{(void*)0,(void*)0},{&l_2064,(void*)0},{(void*)0,&l_2064},{(void*)0,(void*)0},{&l_2064,(void*)0},{(void*)0,&l_2064}};
    int32_t l_2089 = 0x81F21012L;
    int32_t l_2096 = 0L;
    const uint32_t * const l_2102 = &g_148;
    uint16_t l_2203 = 65533UL;
    int32_t l_2212[7];
    union U4 **l_2238 = (void*)0;
    const struct S2 *l_2239 = &g_2240;
    uint32_t l_2264[2];
    int8_t *l_2362[2][5] = {{&g_1450,&g_1450,&g_1450,&g_1450,&g_1450},{&g_1450,&g_786[1][0],&g_1450,&g_786[1][0],&g_1450}};
    int8_t **l_2361 = &l_2362[1][0];
    uint32_t ***l_2367 = &l_1809[1];
    uint32_t l_2381 = 0x3FCBE23CL;
    int i, j, k;
    for (i = 0; i < 2; i++)
        l_1809[i] = (void*)0;
    for (i = 0; i < 2; i++)
        l_1810[i] = 0xD3F9L;
    for (i = 0; i < 5; i++)
        l_1984[i] = &l_606[0].f2;
    for (i = 0; i < 7; i++)
        l_2212[i] = 3L;
    for (i = 0; i < 2; i++)
        l_2264[i] = 1UL;
    return p_14.f0;
}



static const uint32_t  func_19(int16_t  p_20, struct S0  p_21)
{ 
    uint32_t l_1566 = 6UL;
    int16_t ***l_1581 = (void*)0;
    int16_t *** const *l_1580 = &l_1581;
    struct S1 l_1592[2][1] = {{{-1342,-1,59,5,1926}},{{-1342,-1,59,5,1926}}};
    int32_t l_1612 = 0xE8B047AAL;
    int32_t l_1613 = 5L;
    const union U4 *l_1645 = &g_923;
    const union U4 **l_1644[3];
    int32_t l_1647 = 0xF624960DL;
    int16_t l_1674[3][2] = {{0x5039L,0x5039L},{0x4135L,0x5039L},{0x5039L,0x4135L}};
    int i, j;
    for (i = 0; i < 3; i++)
        l_1644[i] = &l_1645;
    for (g_923.f0 = 17; (g_923.f0 < 4); g_923.f0 = safe_sub_func_uint64_t_u_u(g_923.f0, 4))
    { 
        int32_t *l_1565[4] = {&g_203.f0,&g_203.f0,&g_203.f0,&g_203.f0};
        const union U4 l_1573 = {1UL};
        uint64_t l_1614 = 0x92EEB4A56651D547LL;
        uint8_t l_1657 = 0x65L;
        uint32_t l_1666 = 8UL;
        uint32_t l_1690 = 4294967290UL;
        struct S3 l_1738[6] = {{{1210,-2,39,7,1095},0x17276F6EL,0x240EL},{{1210,-2,39,7,1095},0x17276F6EL,0x240EL},{{1210,-2,39,7,1095},0x17276F6EL,0x240EL},{{1210,-2,39,7,1095},0x17276F6EL,0x240EL},{{1210,-2,39,7,1095},0x17276F6EL,0x240EL},{{1210,-2,39,7,1095},0x17276F6EL,0x240EL}};
        uint16_t *l_1739 = &g_587;
        uint16_t *l_1742[5][4][2] = {{{&g_1384.f0,&g_8.f0},{&g_923.f0,&g_1384.f0},{&g_203.f1,&g_203.f1},{&g_203.f1,&g_1384.f0}},{{&g_923.f0,&g_8.f0},{&g_1384.f0,&g_8.f0},{&g_923.f0,&g_1384.f0},{&g_203.f1,&g_203.f1}},{{&g_203.f1,&g_1384.f0},{&g_923.f0,&g_8.f0},{&g_1384.f0,&g_8.f0},{&g_923.f0,&g_1384.f0}},{{&g_203.f1,&g_203.f1},{&g_203.f1,&g_1384.f0},{&g_923.f0,&g_8.f0},{&g_1384.f0,&g_8.f0}},{{&g_923.f0,&g_1384.f0},{&g_203.f1,&g_203.f1},{&g_203.f1,&g_1384.f0},{&g_923.f0,&g_8.f0}}};
        int i, j, k;
        l_1566--;
        if ((safe_rshift_func_int16_t_s_s(((safe_sub_func_uint32_t_u_u(2UL, 0x0D47E2DAL)) , (l_1573 , (safe_mod_func_int32_t_s_s((safe_mul_func_uint8_t_u_u(((g_1578[4][0] != l_1580) , (safe_rshift_func_uint16_t_u_u(0xDF72L, (safe_mul_func_int8_t_s_s(g_353, p_21.f0))))), 0x6DL)), p_20)))), l_1566)))
        { 
            int8_t l_1596 = 0x22L;
            int32_t l_1608 = 0x02F3F988L;
            for (g_51 = 0; (g_51 > 5); ++g_51)
            { 
                uint32_t *l_1595 = &l_1566;
                int32_t l_1607 = 6L;
                p_21.f5 = (safe_add_func_int8_t_s_s((safe_add_func_uint32_t_u_u((((l_1592[1][0] , (safe_sub_func_uint16_t_u_u(p_21.f4, ((((*g_826) ^ (l_1596 = ((*l_1595) = 0x43F4A396L))) , (safe_div_func_int8_t_s_s((safe_lshift_func_uint16_t_u_u(3UL, 8)), l_1596))) <= (((safe_mod_func_int16_t_s_s((((safe_mod_func_uint16_t_u_u((safe_mul_func_uint16_t_u_u(l_1607, p_21.f0)), l_1607)) > p_21.f3) <= g_201.f2), l_1608)) <= 18446744073709551615UL) == 0x31L))))) < l_1608) | l_1608), l_1592[1][0].f3)), p_21.f4));
                if (l_1608)
                    break;
            }
        }
        else
        { 
            int32_t l_1609 = 0x43650C01L;
            int32_t l_1610 = 1L;
            int32_t l_1611[1][1];
            union U4 **l_1646 = &g_922;
            int32_t l_1677 = 1L;
            int i, j;
            for (i = 0; i < 1; i++)
            {
                for (j = 0; j < 1; j++)
                    l_1611[i][j] = (-7L);
            }
            l_1614--;
            for (g_587 = 0; (g_587 != 18); g_587 = safe_add_func_int16_t_s_s(g_587, 9))
            { 
                int64_t **l_1640[1];
                int64_t ***l_1639 = &l_1640[0];
                int64_t **l_1642 = (void*)0;
                int64_t ***l_1641 = &l_1642;
                int32_t l_1648 = 0xE8946779L;
                int32_t l_1649 = 0xAD5FEBCCL;
                int32_t l_1651 = 0x53CAE652L;
                int32_t l_1652 = 0L;
                int32_t l_1653 = 0x3367DA1EL;
                int32_t l_1654 = 2L;
                int32_t l_1655 = (-7L);
                int32_t l_1656 = 0x2BF124D6L;
                uint16_t l_1719 = 65531UL;
                int i;
                for (i = 0; i < 1; i++)
                    l_1640[i] = &g_97;
                for (g_148 = 0; (g_148 <= 4); g_148 += 1)
                { 
                    int i;
                    (*g_555) = l_1565[1];
                }
                if ((safe_unary_minus_func_int64_t_s((safe_div_func_uint16_t_u_u(((safe_sub_func_int32_t_s_s((safe_sub_func_uint32_t_u_u((safe_unary_minus_func_int8_t_s((+(safe_lshift_func_int8_t_s_u((safe_sub_func_int64_t_s_s((((+(safe_mul_func_int8_t_s_s(l_1592[1][0].f2, (safe_lshift_func_int16_t_s_s((safe_unary_minus_func_uint64_t_u((((*l_1639) = (g_1638 = &g_97)) == (g_519.f3 , ((*l_1641) = &g_97))))), 14))))) < g_1643[0][1][1]) & ((l_1644[0] == l_1646) | 0x82ED41B5L)), l_1609)), g_519.f0))))), p_20)), 0UL)) , p_20), p_21.f1)))))
                { 
                    int32_t l_1650[2][5][3] = {{{(-1L),(-1L),(-1L)},{(-5L),(-5L),(-5L)},{(-1L),(-1L),(-1L)},{(-5L),(-5L),(-5L)},{(-1L),(-1L),(-1L)}},{{(-5L),(-5L),(-5L)},{(-1L),(-1L),(-1L)},{(-5L),(-5L),(-5L)},{(-1L),(-1L),(-1L)},{(-5L),(-5L),(-5L)}}};
                    int i, j, k;
                    p_21.f0 = (-8L);
                    l_1657++;
                }
                else
                { 
                    uint16_t l_1663 = 0x1378L;
                    uint16_t *l_1665 = (void*)0;
                    uint32_t l_1672 = 0x4869DA5FL;
                    uint16_t *l_1673[7][7][4] = {{{&g_8.f0,&g_1384.f0,&g_1384.f0,&g_8.f0},{&g_1384.f0,&g_8.f0,&l_1663,&g_8.f0},{&l_1663,&g_1384.f0,&g_8.f0,&g_8.f0},{&l_1663,&g_8.f0,&l_1663,&g_8.f0},{&g_8.f0,&g_1384.f0,&g_1384.f0,&g_8.f0},{&g_1384.f0,&g_8.f0,&l_1663,&g_8.f0},{&l_1663,&g_1384.f0,&g_8.f0,&g_8.f0}},{{&l_1663,&g_8.f0,&l_1663,&g_8.f0},{&g_8.f0,&g_1384.f0,&g_1384.f0,&g_8.f0},{&g_1384.f0,&g_8.f0,&l_1663,&g_8.f0},{&l_1663,&g_1384.f0,&g_8.f0,&g_8.f0},{&l_1663,&g_8.f0,&l_1663,&g_8.f0},{&g_8.f0,&g_1384.f0,&g_1384.f0,&g_8.f0},{&g_1384.f0,&g_8.f0,&l_1663,&g_8.f0}},{{&l_1663,&g_1384.f0,&g_8.f0,&g_8.f0},{&l_1663,&g_8.f0,&l_1663,&g_8.f0},{&g_8.f0,&g_1384.f0,&g_1384.f0,&g_8.f0},{&g_1384.f0,&g_8.f0,&l_1663,&g_8.f0},{&l_1663,&g_1384.f0,&g_8.f0,&g_8.f0},{&l_1663,&g_8.f0,&l_1663,&g_8.f0},{&g_8.f0,&g_1384.f0,&g_1384.f0,&g_8.f0}},{{&g_1384.f0,&g_8.f0,&l_1663,&g_8.f0},{&l_1663,&g_1384.f0,&g_8.f0,&g_8.f0},{&l_1663,&g_8.f0,&l_1663,&g_8.f0},{&g_8.f0,&g_1384.f0,&g_1384.f0,&g_8.f0},{&g_1384.f0,&g_8.f0,&l_1663,&g_8.f0},{&l_1663,&g_1384.f0,&g_8.f0,&g_8.f0},{&l_1663,&g_8.f0,&l_1663,&g_8.f0}},{{&g_8.f0,&g_1384.f0,&g_1384.f0,&g_8.f0},{&g_1384.f0,&g_8.f0,&l_1663,&g_8.f0},{&l_1663,&g_1384.f0,&g_8.f0,&g_8.f0},{&l_1663,&g_8.f0,&l_1663,&g_8.f0},{&g_8.f0,&g_1384.f0,&g_1384.f0,&g_8.f0},{&g_1384.f0,&g_8.f0,&l_1663,&g_8.f0},{&l_1663,&g_1384.f0,&g_8.f0,&g_8.f0}},{{&l_1663,&g_8.f0,&l_1663,&g_8.f0},{&g_8.f0,&g_1384.f0,&g_1384.f0,&g_8.f0},{&g_1384.f0,&g_8.f0,&l_1663,&g_8.f0},{&l_1663,&g_1384.f0,&g_8.f0,&g_8.f0},{&l_1663,&g_8.f0,&l_1663,&g_8.f0},{&g_8.f0,&g_1384.f0,&g_1384.f0,&g_8.f0},{&g_1384.f0,&g_8.f0,&l_1663,&g_8.f0}},{{&l_1663,&g_1384.f0,&g_8.f0,&g_8.f0},{&l_1663,&g_8.f0,&l_1663,&g_8.f0},{&g_8.f0,&g_1384.f0,&g_1384.f0,&g_8.f0},{&g_1384.f0,&g_8.f0,&l_1663,&g_8.f0},{&l_1663,&g_1384.f0,&g_8.f0,&g_8.f0},{&l_1663,&g_8.f0,&l_1663,&g_8.f0},{&g_8.f0,&g_1384.f0,&g_1384.f0,&g_8.f0}}};
                    int i, j, k;
                    l_1592[1][0].f3 |= (p_21.f0 = (l_1610 |= (l_1677 = ((~(safe_add_func_uint16_t_u_u(p_20, ((((void*)0 != &g_113) != l_1663) , ((~(0UL > (--l_1666))) & ((safe_div_func_uint16_t_u_u((l_1674[0][0] ^= (~l_1672)), (--g_203.f1))) , l_1663)))))) == 0x6DL))));
                }
                if (l_1655)
                { 
                    int64_t l_1680 = 0xF70E6F28D85FDD3CLL;
                    uint64_t *l_1681 = &l_1614;
                    int32_t l_1684 = 0x5D516DFDL;
                    int32_t l_1685 = 1L;
                    int32_t l_1686 = 0xA905563EL;
                    int32_t l_1687 = 0x42A345B2L;
                    int32_t l_1688 = 0xDC0B3345L;
                    int32_t l_1689 = 0L;
                    struct S0 **l_1695 = &g_418;
                    struct S3 l_1698 = {{319,-3,13,-7,1602},18446744073709551615UL,0L};
                    p_21.f0 &= (safe_mod_func_uint64_t_u_u((g_113 = ((void*)0 == &g_1207)), ((0x58E5501D079D135DLL || l_1680) , ((*l_1681)++))));
                    --l_1690;
                    l_1689 = (safe_div_func_uint8_t_u_u(((((void*)0 != l_1695) , (safe_rshift_func_int16_t_s_s(((0x8F2AL > (l_1698 , ((0xCA1EL > (safe_mul_func_uint8_t_u_u((l_1573 , g_203.f1), l_1592[1][0].f4))) > 0x9FDAL))) | 0x78279FEBL), l_1698.f1))) | 0xC276635DA9014B23LL), p_21.f5));
                    return l_1610;
                }
                else
                { 
                    uint8_t *l_1717[1];
                    int32_t l_1718 = 1L;
                    int32_t l_1720 = (-10L);
                    int16_t *l_1737 = &g_48.f2;
                    uint16_t **l_1740 = (void*)0;
                    uint16_t **l_1741 = &l_1739;
                    int i;
                    for (i = 0; i < 1; i++)
                        l_1717[i] = &g_759;
                    l_1610 ^= (safe_add_func_uint64_t_u_u(0x6E30B6F40A7A70D5LL, ((safe_sub_func_uint64_t_u_u(((safe_rshift_func_int16_t_s_s((!((safe_rshift_func_uint8_t_u_s((l_1718 |= (0x1D1F92F8L && (((safe_div_func_uint16_t_u_u(l_1674[0][1], (safe_mod_func_uint8_t_u_u((!p_21.f1), l_1651)))) >= (p_21.f5 ^ ((safe_add_func_uint8_t_u_u((p_21.f0 & p_21.f5), p_20)) != p_21.f4))) | 0x275B18E3L))), l_1719)) ^ l_1720)), p_20)) <= l_1649), 0L)) <= 18446744073709551615UL)));
                    p_21.f5 = ((safe_div_func_int8_t_s_s(((l_1742[0][2][0] = ((*l_1741) = ((safe_add_func_uint8_t_u_u(((((safe_add_func_uint64_t_u_u((safe_mul_func_uint8_t_u_u(((safe_sub_func_int8_t_s_s((g_203.f3 <= ((void*)0 != &l_1666)), (safe_add_func_uint32_t_u_u((((safe_mul_func_int16_t_s_s(p_21.f5, (l_1737 != (l_1738[4] , (void*)0)))) || l_1674[0][0]) && p_21.f3), p_20)))) , l_1592[1][0].f4), p_21.f3)), 0x296A1F6B1445A8D2LL)) >= g_292[0][1]) | l_1566) && 0UL), 1L)) , l_1739))) == &g_587), p_21.f1)) < l_1653);
                    return p_20;
                }
            }
        }
        if (l_1613)
            continue;
        (*g_555) = (void*)0;
    }
    return p_21.f5;
}



static int8_t  func_24(int32_t ** p_25, int32_t * const * p_26, int32_t  p_27)
{ 
    uint32_t l_614 = 0x24FA66EDL;
    const struct S3 *l_627 = &g_48;
    struct S0 l_628 = {0x233BFE98L,1UL,0xFCL,58,1UL,-1092};
    uint32_t *l_654 = &g_148;
    uint32_t **l_664 = &l_654;
    struct S1 l_675 = {-85,-4,26,-0,796};
    int64_t *l_681 = &g_51;
    int64_t l_730[3][1];
    uint64_t l_797 = 0UL;
    struct S3 **l_842 = (void*)0;
    uint32_t l_845 = 1UL;
    uint32_t l_874[3][3][7] = {{{3UL,4294967286UL,0x53DD250AL,1UL,0x40119471L,0xD446704DL,0x40119471L},{3UL,0x40119471L,0x40119471L,3UL,0x6C2B96E2L,0x12363F79L,4294967290UL},{0xA42000F9L,0x12363F79L,0x53DD250AL,0x6C2B96E2L,0x6C2B96E2L,0x53DD250AL,0x12363F79L}},{{0x6C2B96E2L,0xA42000F9L,0xD446704DL,4294967286UL,0x40119471L,4294967290UL,4294967290UL},{0xD446704DL,0xA42000F9L,0x6C2B96E2L,0xA42000F9L,0xD446704DL,4294967286UL,0x40119471L},{0x53DD250AL,0x12363F79L,0xA42000F9L,4294967286UL,1UL,4294967286UL,0xA42000F9L}},{{0x40119471L,0x40119471L,3UL,0x6C2B96E2L,0x12363F79L,4294967290UL,0x53DD250AL},{0x53DD250AL,4294967286UL,3UL,3UL,4294967286UL,0x53DD250AL,1UL},{0xD446704DL,3UL,0xA42000F9L,1UL,0x12363F79L,0x12363F79L,1UL}}};
    struct S0 *l_879 = &l_628;
    uint16_t l_881[5];
    int32_t l_890 = 0x100CEB9FL;
    struct S1 l_942 = {-993,1,18,3,1900};
    const int32_t l_945 = (-4L);
    const int8_t *l_1001 = &g_786[1][0];
    int8_t *l_1002 = &g_353;
    uint32_t l_1105 = 9UL;
    uint16_t **l_1137 = &g_590;
    int32_t l_1169 = 0x6770E94EL;
    uint32_t l_1185 = 0xC0D07431L;
    union U4 l_1202[1][4] = {{{0x4BAEL},{0x4BAEL},{0x4BAEL},{0x4BAEL}}};
    uint64_t l_1221 = 0xDB1E27193A3D2150LL;
    uint8_t l_1227[7];
    int32_t * const ****l_1234 = &g_833[4][1];
    uint32_t l_1254 = 0x340E2AA8L;
    int8_t l_1386 = 0x44L;
    uint64_t l_1393 = 2UL;
    struct S2 l_1408 = {56,16,67,0,-7646};
    int16_t l_1410 = 0x76B6L;
    int16_t *l_1414 = (void*)0;
    int16_t **l_1413[7] = {&l_1414,&l_1414,&l_1414,&l_1414,&l_1414,&l_1414,&l_1414};
    int16_t ***l_1412 = &l_1413[1];
    int16_t ****l_1411 = &l_1412;
    int16_t *****l_1415 = &l_1411;
    struct S2 **l_1426 = &g_516;
    struct S2 ***l_1425 = &l_1426;
    int32_t *l_1456 = &g_85;
    int32_t l_1468 = 1L;
    uint16_t l_1470 = 0x4BD1L;
    int64_t l_1474 = 0x35B9F3C8EED7664ELL;
    int32_t l_1476 = 0x38EB6128L;
    uint32_t l_1478 = 1UL;
    uint64_t l_1486 = 3UL;
    uint8_t l_1489 = 1UL;
    int32_t ***l_1492 = &g_555;
    uint8_t *l_1562 = &l_628.f2;
    int i, j, k;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 1; j++)
            l_730[i][j] = 0xA1B5571592F310CBLL;
    }
    for (i = 0; i < 5; i++)
        l_881[i] = 65530UL;
    for (i = 0; i < 7; i++)
        l_1227[i] = 0xA7L;
    if (((safe_mod_func_uint8_t_u_u(4UL, (safe_unary_minus_func_int32_t_s(l_614)))) & (safe_div_func_int32_t_s_s(l_614, ((safe_rshift_func_uint16_t_u_u((0xE23EL > (l_614 == ((safe_sub_func_uint64_t_u_u((safe_sub_func_uint64_t_u_u(l_614, (((safe_rshift_func_int16_t_s_u((safe_div_func_uint32_t_u_u(l_614, l_614)), 9)) , l_627) == (void*)0))), (-2L))) & l_614))), l_614)) , (-1L))))))
    { 
        struct S0 l_629 = {0xC6AC73B2L,3UL,249UL,214,7UL,526};
        int16_t *l_645 = &g_220;
        int16_t *l_646 = &g_48.f2;
        int32_t *l_647 = (void*)0;
        int32_t *l_648 = &g_203.f0;
        int16_t **l_653 = &l_645;
        struct S2 **l_660 = &g_516;
        struct S2 ** const l_661 = &g_516;
        uint32_t **l_662 = (void*)0;
        struct S0 l_665 = {0xA976F1D1L,0xD04BL,0xEFL,273,0x55D81726L,-1699};
        uint16_t * const l_676[5][6] = {{&l_665.f1,&l_628.f1,&l_665.f1,&l_665.f1,&l_628.f1,&l_665.f1},{&l_665.f1,&l_628.f1,&l_665.f1,&l_665.f1,&l_628.f1,&l_665.f1},{&l_665.f1,&l_628.f1,&l_665.f1,&l_665.f1,&l_628.f1,&l_665.f1},{&l_665.f1,&l_628.f1,&l_628.f1,&l_628.f1,&l_665.f1,&l_628.f1},{&l_628.f1,&l_665.f1,&l_628.f1,&l_628.f1,&l_665.f1,&l_628.f1}};
        int32_t l_692 = (-1L);
        uint32_t l_775 = 18446744073709551606UL;
        union U4 l_798[6] = {{6UL},{6UL},{6UL},{6UL},{6UL},{6UL}};
        int i, j;
        l_629 = l_628;
        (*l_648) |= ((((safe_div_func_int8_t_s_s((safe_rshift_func_int16_t_s_u((~((((safe_mul_func_int16_t_s_s((safe_sub_func_uint8_t_u_u(((p_27 || p_27) < (safe_sub_func_uint16_t_u_u(l_628.f4, (safe_mod_func_int64_t_s_s(l_614, (0UL | (((*l_646) = ((*l_645) = (safe_mod_func_uint16_t_u_u(0x69F2L, (-10L))))) , l_629.f1))))))), l_628.f3)), (-1L))) != l_629.f3) < l_629.f4) , l_628.f0)), 2)), 253UL)) <= l_629.f2) & l_628.f5) >= l_629.f0);
        for (l_614 = 0; (l_614 != 60); l_614++)
        { 
            int64_t l_651 = 0xF6DCBA771560EA6CLL;
            uint32_t **l_655 = &l_654;
            int32_t ***l_672 = &g_556;
            int32_t *l_673 = &g_674;
            int32_t l_687 = (-8L);
            int32_t l_688 = 9L;
            int32_t l_689 = 0x7B197927L;
            uint32_t l_705 = 4294967287UL;
            int64_t **l_815 = (void*)0;
            struct S3 * const l_819 = &g_48;
            int8_t l_829[1];
            int i;
            for (i = 0; i < 1; i++)
                l_829[i] = (-7L);
            (*l_648) |= ((l_651 >= (-1L)) | (~((l_653 == (void*)0) >= ((l_647 != ((*l_655) = l_654)) > (safe_mul_func_int8_t_s_s(((g_203.f4 | 0xDB05L) == 4294967295UL), p_27))))));
            for (g_261 = 3; (g_261 >= 0); g_261 -= 1)
            { 
                uint32_t ***l_663[2];
                int i, j;
                for (i = 0; i < 2; i++)
                    l_663[i] = &l_655;
                l_628.f5 ^= (((((safe_unary_minus_func_uint16_t_u(g_292[g_261][g_261])) == (+((l_660 = &g_516) != &g_363[1][0][0]))) && 1L) <= (l_661 != (void*)0)) < g_292[g_261][(g_261 + 1)]);
                l_664 = l_662;
                (*l_648) |= g_292[g_261][(g_261 + 1)];
                l_665 = ((*g_418) = l_629);
            }
            (*g_555) = (void*)0;
            if ((((safe_mod_func_uint8_t_u_u(1UL, (safe_lshift_func_int16_t_s_s(g_98, (((**l_655) = (p_27 ^ ((g_8 , (((*l_648) >= (((((*l_673) ^= (safe_rshift_func_int16_t_s_u(((l_672 != (void*)0) & 5UL), p_27))) , l_675) , (**p_26)) || l_675.f4)) >= 0xA5B1L)) > p_27))) , 0x922FL))))) , &g_587) != l_676[0][0]))
            { 
                uint32_t l_679 = 4294967295UL;
                int64_t **l_680[2];
                int32_t l_682 = 0x3800E44CL;
                int32_t l_690 = 5L;
                int32_t l_691 = 3L;
                int32_t *l_764 = &l_628.f0;
                uint8_t *l_774 = &g_203.f2;
                int i;
                for (i = 0; i < 2; i++)
                    l_680[i] = &g_97;
                if (((safe_sub_func_uint16_t_u_u((l_679 = (p_27 & p_27)), g_517.f2)) == ((g_97 = (void*)0) == (l_681 = &g_98))))
                { 
                    int32_t *l_683 = &l_628.f0;
                    int32_t *l_684 = &l_628.f0;
                    int32_t *l_685 = &g_203.f0;
                    int32_t *l_686[4][3][2];
                    int8_t *l_704 = &g_353;
                    int i, j, k;
                    for (i = 0; i < 4; i++)
                    {
                        for (j = 0; j < 3; j++)
                        {
                            for (k = 0; k < 2; k++)
                                l_686[i][j][k] = (void*)0;
                        }
                    }
                    ++g_693;
                    (*l_684) = l_691;
                    (*l_685) &= ((((*l_646) = (safe_lshift_func_int16_t_s_u(((**l_653) &= 0x1834L), (l_682 = 0UL)))) > ((l_705 = ((*l_704) |= (safe_add_func_int32_t_s_s((((*l_683) <= (l_679 > l_691)) ^ l_628.f1), (safe_add_func_int16_t_s_s(p_27, p_27)))))) < p_27)) && 1UL);
                    (*g_555) = (*g_555);
                    (*l_684) = (((p_27 != (safe_sub_func_uint32_t_u_u((*g_153), (g_203.f2 , (safe_mul_func_int16_t_s_s(((safe_rshift_func_uint8_t_u_u((*l_648), (~g_364.f0))) <= 18446744073709551615UL), l_679)))))) , (void*)0) != (void*)0);
                }
                else
                { 
                    struct S2 **l_727 = &g_516;
                    struct S2 ***l_728 = &l_660;
                    uint64_t *l_729 = &g_113;
                    int32_t *l_731 = &l_690;
                    int32_t *l_732 = &l_692;
                    int32_t *l_733 = &l_691;
                    int32_t *l_734 = (void*)0;
                    int32_t *l_735 = (void*)0;
                    int32_t *l_736 = &l_628.f0;
                    int32_t *l_737 = &l_692;
                    int32_t *l_738 = &l_629.f0;
                    int32_t *l_739 = (void*)0;
                    int32_t *l_740 = &l_690;
                    int32_t *l_741 = &l_682;
                    int32_t *l_742 = &l_682;
                    int32_t *l_743 = &l_628.f0;
                    int32_t *l_744 = (void*)0;
                    int32_t *l_745 = &l_682;
                    int32_t *l_746 = &l_687;
                    int32_t *l_747 = &l_691;
                    int32_t *l_748 = &l_690;
                    int32_t *l_749 = &l_629.f0;
                    int32_t *l_750 = &g_203.f0;
                    int32_t *l_751 = (void*)0;
                    int32_t *l_752 = &l_665.f0;
                    int32_t *l_753 = &l_688;
                    int32_t *l_754 = &g_203.f0;
                    int32_t *l_755 = &l_629.f0;
                    int32_t l_756 = 0xB8B3FC25L;
                    int32_t *l_757[2];
                    int i;
                    for (i = 0; i < 2; i++)
                        l_757[i] = &l_629.f0;
                    (*l_648) = (safe_mul_func_uint8_t_u_u(l_691, (safe_sub_func_uint64_t_u_u((0L && (safe_rshift_func_uint8_t_u_u((safe_div_func_uint8_t_u_u(((safe_div_func_uint8_t_u_u((l_690 = 1UL), g_203.f3)) < ((((safe_unary_minus_func_uint64_t_u(((*l_729) = ((safe_mod_func_int16_t_s_s(0L, p_27)) <= (safe_unary_minus_func_int64_t_s((((*l_728) = l_727) != l_661))))))) <= (**p_26)) >= 0x8FC8D1F61FA6C665LL) != p_27)), p_27)), g_203.f3))), l_730[0][0]))));
                    g_759++;
                }
                (*l_764) = ((safe_lshift_func_uint8_t_u_u((p_27 && (4294967295UL <= ((*l_648) ^= (-1L)))), 6)) , l_682);
                l_675.f3 ^= (0x42F1L && (safe_rshift_func_uint8_t_u_s(g_113, (((*l_654) = (safe_lshift_func_uint16_t_u_s((*l_764), (safe_unary_minus_func_uint64_t_u(((((*l_673) = 0xA32D4584L) , ((safe_div_func_int32_t_s_s(((((*l_774) = (safe_add_func_uint16_t_u_u((*l_648), (g_519.f0 < (g_201.f5 < p_27))))) , p_27) | 0x8359L), (**p_26))) , p_27)) || g_201.f4)))))) < l_775))));
                for (g_203.f4 = (-29); (g_203.f4 < 31); g_203.f4++)
                { 
                    int32_t *l_778 = &l_665.f0;
                    l_778 = (*g_555);
                }
                for (l_688 = 0; (l_688 <= 2); l_688 += 1)
                { 
                    int16_t l_783 = 0x4F84L;
                    uint64_t *l_784 = &g_113;
                    uint64_t *l_785[7] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                    struct S0 * const l_787 = &g_203;
                    int32_t l_790 = 0x5F1D32F1L;
                    int i;
                    (*l_661) = (((g_8 , (safe_lshift_func_uint16_t_u_s(((0xF2B6L != (safe_lshift_func_int16_t_s_u(p_27, p_27))) <= ((((void*)0 != &g_97) ^ 7L) > l_783)), l_783))) == 0x4DBD6997EB79559CLL) , (void*)0);
                    (*l_648) ^= (((((*l_784) = g_364.f0) == p_27) <= (l_675.f3 &= ((**l_653) = g_364.f2))) ^ (g_786[1][0] = l_783));
                    l_790 ^= ((l_787 == &g_201) <= ((*l_764) ^= (safe_lshift_func_int8_t_s_s(l_783, 7))));
                    if ((**p_26))
                        continue;
                }
            }
            else
            { 
                int8_t *l_811 = &g_353;
                const int8_t *l_813 = &g_261;
                int32_t l_814 = 0x5435F045L;
                int64_t l_816 = 1L;
                (*g_475) = ((safe_add_func_int16_t_s_s(p_27, ((*l_646) |= 8L))) , (*g_475));
                for (g_48.f1 = 0; (g_48.f1 == 39); g_48.f1++)
                { 
                    int8_t **l_812 = &l_811;
                    struct S1 **l_818 = &g_817;
                    struct S3 *l_820 = (void*)0;
                    (*l_648) &= ((safe_sub_func_int16_t_s_s(l_797, (l_798[2] , (safe_sub_func_uint8_t_u_u((((p_27 , (((safe_rshift_func_uint8_t_u_s((((*l_812) = (((&g_693 != g_803) || (safe_sub_func_uint32_t_u_u(0xDA050969L, (+(safe_lshift_func_int8_t_s_u((safe_add_func_int64_t_s_s(((*l_681) = (((**l_653) &= ((4UL ^ g_519.f2) ^ 0x4565E55CL)) , g_85)), 6UL)), 7)))))) , l_811)) != l_813), g_758)) , l_814) , p_27)) , l_815) != &l_681), 0x50L))))) <= l_816);
                    (*l_818) = g_817;
                    l_820 = l_819;
                    l_814 = ((*l_648) = (0xB3L & (safe_sub_func_uint32_t_u_u(((safe_mod_func_uint16_t_u_u(g_517.f0, g_519.f2)) & ((g_825[1] != (void*)0) > (!l_628.f4))), (safe_unary_minus_func_uint64_t_u(g_519.f1))))));
                }
                l_814 ^= l_829[0];
                if ((*g_9))
                    break;
            }
        }
        (*g_418) = (*g_418);
        for (l_629.f2 = 0; l_629.f2 < 4; l_629.f2 += 1)
        {
            for (l_692 = 0; l_692 < 5; l_692 += 1)
            {
                g_292[l_629.f2][l_692] = 0xCBL;
            }
        }
    }
    else
    { 
        uint8_t l_830[7][5][3] = {{{0x75L,0x95L,255UL},{1UL,249UL,0x55L},{254UL,0x95L,247UL},{1UL,1UL,0x55L},{0x75L,0x95L,255UL}},{{1UL,249UL,0x55L},{254UL,0x95L,247UL},{1UL,1UL,0x55L},{0x75L,0x95L,255UL},{1UL,249UL,0x55L}},{{254UL,0x95L,247UL},{1UL,1UL,0x55L},{0x75L,0x95L,255UL},{1UL,249UL,0x55L},{254UL,0x95L,247UL}},{{1UL,1UL,0x55L},{0x75L,0x95L,255UL},{1UL,249UL,0x55L},{254UL,0x95L,247UL},{1UL,1UL,0x55L}},{{0x75L,0x95L,255UL},{1UL,249UL,0x55L},{254UL,0x95L,247UL},{1UL,1UL,0x55L},{0x75L,0x95L,255UL}},{{1UL,249UL,0x55L},{254UL,0x95L,247UL},{1UL,1UL,0x55L},{0x75L,0x95L,255UL},{1UL,249UL,0x55L}},{{254UL,0x95L,247UL},{1UL,1UL,0x55L},{0x75L,0x95L,255UL},{1UL,249UL,0x55L},{254UL,0x95L,247UL}}};
        uint64_t l_847[6];
        int32_t l_848[7] = {0x09B9192DL,0x09B9192DL,0x09B9192DL,0x09B9192DL,0x09B9192DL,0x09B9192DL,0x09B9192DL};
        struct S1 **l_866 = &g_817;
        struct S0 *l_877 = &l_628;
        uint32_t l_891 = 0x4462F6C6L;
        uint32_t *l_930 = &g_148;
        struct S3 l_948 = {{-1418,-0,27,0,1671},0xD7973AEEL,-4L};
        int16_t *l_975 = &g_220;
        int16_t **l_974 = &l_975;
        int16_t ***l_973 = &l_974;
        uint8_t l_990 = 0x9AL;
        struct S2 *l_1006 = &g_519;
        const uint32_t l_1021 = 1UL;
        uint64_t *l_1122 = &l_847[3];
        uint64_t l_1217[3][3];
        int32_t l_1220 = 0x84D10225L;
        int32_t *****l_1235 = &g_475;
        uint16_t l_1261[7] = {0xEBB1L,0xEBB1L,0xEBB1L,0xEBB1L,0xEBB1L,0xEBB1L,0xEBB1L};
        int32_t l_1262 = 0x6E25B260L;
        uint8_t l_1265[4][7];
        uint16_t l_1289 = 65535UL;
        uint16_t ***l_1315 = &l_1137;
        uint64_t l_1346 = 0xBACDFFB605AA7620LL;
        uint32_t l_1370 = 18446744073709551615UL;
        uint8_t l_1376 = 255UL;
        int i, j, k;
        for (i = 0; i < 6; i++)
            l_847[i] = 0x04FE0FFBBD873F22LL;
        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 3; j++)
                l_1217[i][j] = 18446744073709551614UL;
        }
        for (i = 0; i < 4; i++)
        {
            for (j = 0; j < 7; j++)
                l_1265[i][j] = 0x3DL;
        }
        if (l_830[0][1][0])
        { 
            int32_t *****l_831 = (void*)0;
            int32_t *****l_832 = &g_475;
            int32_t * const ****l_836 = &g_833[2][2];
            uint32_t ***l_846 = &l_664;
            struct S2 l_859 = {120,9,102,0,3314};
            struct S1 **l_865[7] = {&g_817,&g_817,&g_817,&g_817,&g_817,&g_817,&g_817};
            int32_t *l_884 = &l_848[5];
            int32_t *l_885 = &l_628.f0;
            int32_t *l_886 = (void*)0;
            int32_t *l_887 = &g_85;
            int32_t *l_888 = &g_203.f0;
            int32_t *l_889[7] = {(void*)0,(void*)0,&g_85,(void*)0,(void*)0,&g_85,(void*)0};
            int i;
            l_675.f1 &= (((*l_832) = &g_476) != ((*l_836) = g_833[4][1]));
            for (g_353 = 2; (g_353 >= 0); g_353 -= 1)
            { 
                uint32_t l_855[6] = {0xCB9755EDL,0xCB9755EDL,0xCB9755EDL,0xCB9755EDL,0xCB9755EDL,0xCB9755EDL};
                int i;
                if (l_830[1][1][0])
                    break;
                if ((**p_26))
                { 
                    int8_t l_839 = 0L;
                    struct S3 *l_841 = &g_48;
                    struct S3 **l_840 = &l_841;
                    struct S3 ***l_843[6];
                    int i;
                    for (i = 0; i < 6; i++)
                        l_843[i] = &l_842;
                    l_848[1] ^= ((((safe_lshift_func_int16_t_s_s(l_839, 1)) & (((l_840 != (g_844 = l_842)) > l_845) <= ((&g_152[g_353] == (l_675.f4 , l_846)) != p_27))) ^ l_847[3]) >= 6UL);
                    if (l_628.f2)
                        continue;
                    if (g_693)
                        goto lbl_880;
                    l_855[2] = (safe_mod_func_int16_t_s_s((safe_div_func_int16_t_s_s(l_675.f2, 0x6648L)), (safe_rshift_func_int16_t_s_u(g_85, 12))));
                }
                else
                { 
                    uint16_t l_856[4];
                    int i;
                    for (i = 0; i < 4; i++)
                        l_856[i] = 0xE44AL;
                    return l_856[3];
                }
                for (g_148 = 0; (g_148 < 14); g_148++)
                { 
                    int32_t l_860 = 1L;
                    int8_t *l_868 = &g_786[2][2];
                    int32_t *l_869 = (void*)0;
                    int32_t *l_870 = &g_85;
                    int32_t *l_871 = (void*)0;
                    int32_t *l_872 = &g_203.f0;
                    int32_t *l_873 = &l_860;
                    struct S0 **l_878[2][3][2] = {{{&g_418,&g_418},{&g_418,&g_418},{&g_418,&g_418}},{{&g_418,&g_418},{&g_418,&g_418},{&g_418,&g_418}}};
                    int i, j, k;
                    l_860 ^= ((l_830[5][4][0] , &g_292[2][0]) != (l_859 , &l_830[0][1][0]));
                    (*l_870) &= (((safe_rshift_func_int8_t_s_u(((*l_868) &= (g_8 , ((safe_sub_func_int32_t_s_s((l_865[5] != l_866), (p_27 < ((~((l_860 && ((p_27 <= (l_859 , l_848[1])) , 1L)) >= g_201.f1)) , l_860)))) < l_847[0]))), 2)) == 0x47L) && 0x2B3B552AL);
                    l_874[1][2][4]--;
                    l_879 = l_877;
                    return g_48.f0.f3;
                }
            }
lbl_880:
            (*g_418) = (*l_877);
            --l_881[0];
            l_891++;
        }
        else
        { 
            struct S3 l_903 = {{-316,-0,40,-6,1188},0x49448662L,0x612FL};
            struct S2 *l_910 = &g_364;
            int32_t l_913 = 0x5CC0B53CL;
            const uint32_t * const *l_963 = &g_153;
            int32_t l_966 = 0xF52D99EEL;
            uint64_t l_986[4][7][3] = {{{1UL,2UL,1UL},{18446744073709551615UL,1UL,1UL},{5UL,0xB80854915B880A35LL,18446744073709551613UL},{18446744073709551615UL,0xB80854915B880A35LL,0xF8D14E3129C2525FLL},{1UL,1UL,18446744073709551613UL},{1UL,2UL,0UL},{18446744073709551613UL,0UL,0UL}},{{0xF8D14E3129C2525FLL,18446744073709551611UL,0x85B2D7C13ACCC940LL},{18446744073709551613UL,18446744073709551611UL,0UL},{1UL,0UL,0x85B2D7C13ACCC940LL},{1UL,4UL,0UL},{18446744073709551613UL,0UL,0UL},{0xF8D14E3129C2525FLL,18446744073709551611UL,0x85B2D7C13ACCC940LL},{18446744073709551613UL,18446744073709551611UL,0UL}},{{1UL,0UL,0x85B2D7C13ACCC940LL},{1UL,4UL,0UL},{18446744073709551613UL,0UL,0UL},{0xF8D14E3129C2525FLL,18446744073709551611UL,0x85B2D7C13ACCC940LL},{18446744073709551613UL,18446744073709551611UL,0UL},{1UL,0UL,0x85B2D7C13ACCC940LL},{1UL,4UL,0UL}},{{18446744073709551613UL,0UL,0UL},{0xF8D14E3129C2525FLL,18446744073709551611UL,0x85B2D7C13ACCC940LL},{18446744073709551613UL,18446744073709551611UL,0UL},{1UL,0UL,0x85B2D7C13ACCC940LL},{1UL,4UL,0UL},{18446744073709551613UL,0UL,0UL},{0xF8D14E3129C2525FLL,18446744073709551611UL,0x85B2D7C13ACCC940LL}}};
            int32_t *l_989[7] = {&l_628.f0,&l_913,&l_913,&l_628.f0,&l_913,&l_913,&l_628.f0};
            int8_t **l_1003 = &l_1002;
            struct S2 **l_1007[4][4][2] = {{{&g_516,&g_516},{&l_910,&g_516},{&g_516,&g_516},{&l_910,&g_516}},{{&g_516,&g_516},{&l_910,&g_516},{&g_516,&g_516},{&l_910,&g_516}},{{&g_516,&g_516},{&l_910,&g_516},{&g_516,&g_516},{&l_910,&g_516}},{{&g_516,&g_516},{&l_910,&g_516},{&g_516,&g_516},{&l_910,&g_516}}};
            int64_t *l_1017[2];
            int32_t *****l_1049[3];
            int32_t l_1072 = 0x30E3B18BL;
            int i, j, k;
            for (i = 0; i < 2; i++)
                l_1017[i] = &l_730[0][0];
            for (i = 0; i < 3; i++)
                l_1049[i] = &g_475;
lbl_1054:
            if ((**p_26))
            { 
                int32_t *l_895 = &l_890;
                struct S1 l_900 = {-112,-1,6,-5,1074};
                uint8_t *l_911 = (void*)0;
                int32_t *l_912[1][6] = {{&g_10,&g_10,&g_10,&g_10,&g_10,&g_10}};
                int32_t **l_919 = &l_895;
                int i, j;
lbl_920:
                l_848[1] = ((*l_895) = (+0UL));
                l_913 |= (((safe_sub_func_uint32_t_u_u(((0x9DDAF91CL && 0x353F2316L) == (l_628.f0 |= ((safe_add_func_int8_t_s_s(((l_900 , l_830[0][1][0]) <= (((l_675.f1 = (safe_rshift_func_int16_t_s_u((l_903 , (safe_rshift_func_uint16_t_u_u(p_27, (safe_sub_func_int32_t_s_s((safe_div_func_int64_t_s_s(((l_848[1] , (void*)0) == l_910), p_27)), p_27))))), 12))) >= (*l_895)) == (*g_9))), (*l_895))) <= 0x10AE9567L))), (*g_826))) & 0L) & p_27);
                for (l_628.f0 = 0; (l_628.f0 != (-26)); --l_628.f0)
                { 
                    int32_t **l_916 = &l_912[0][2];
                    (*l_916) = (*p_26);
                    (*l_895) = (safe_lshift_func_int16_t_s_s(0x1030L, 4));
                    (*l_895) &= (l_848[3] |= ((void*)0 != l_919));
                    return p_27;
                }
                if (g_98)
                    goto lbl_920;
            }
            else
            { 
                int32_t l_933 = 1L;
                struct S3 l_943[6] = {{{-604,3,9,0,189},0xAB0698EBL,1L},{{1007,7,56,8,1315},18446744073709551614UL,0xFDAEL},{{1007,7,56,8,1315},18446744073709551614UL,0xFDAEL},{{-604,3,9,0,189},0xAB0698EBL,1L},{{1007,7,56,8,1315},18446744073709551614UL,0xFDAEL},{{1007,7,56,8,1315},18446744073709551614UL,0xFDAEL}};
                uint16_t *l_958 = &g_923.f0;
                int16_t ****l_976 = &l_973;
                int32_t *l_977 = &l_628.f0;
                int32_t *l_978 = &l_913;
                int32_t *l_979 = &l_890;
                int32_t *l_980 = &l_628.f0;
                int32_t *l_981 = &l_848[5];
                int32_t *l_982 = (void*)0;
                int32_t *l_983 = &l_913;
                int32_t *l_984 = &l_848[1];
                int32_t *l_985[6];
                int i;
                for (i = 0; i < 6; i++)
                    l_985[i] = (void*)0;
                for (l_614 = 0; (l_614 <= 2); l_614 += 1)
                { 
                    union U4 **l_921 = (void*)0;
                    int32_t *l_931 = &g_85;
                    uint32_t l_932 = 1UL;
                    uint64_t *l_938 = &g_113;
                    int8_t *l_944 = &g_353;
                    int i;
                    if (l_730[0][0])
                        break;
                    g_922 = (void*)0;
                    l_628.f5 &= ((l_848[1] = ((safe_div_func_uint16_t_u_u((0L || ((*g_418) , (safe_lshift_func_uint16_t_u_s(((-1L) > (4294967288UL > (**p_26))), 10)))), (((-7L) == (((*l_931) |= ((void*)0 == l_930)) <= (-1L))) && g_519.f4))) , l_932)) , (**p_26));
                    l_903.f0.f0 &= (((((l_933 = g_203.f5) > ((safe_mod_func_int32_t_s_s(((safe_div_func_uint64_t_u_u((++(*l_938)), 0x7CF4BD1D3F5AC0A7LL)) || 2UL), (~(p_27 && (((*g_153) >= (l_848[4] = (((l_942 , ((((*l_944) = (l_943[1] , (-1L))) != g_201.f5) ^ 0x0E7A4364L)) != (-1L)) && (*l_931)))) , l_945))))) == g_759)) && p_27) <= p_27) || l_847[3]);
                }
                if ((safe_lshift_func_uint16_t_u_u(((l_948 , ((safe_lshift_func_int16_t_s_s((safe_add_func_uint64_t_u_u((safe_mod_func_int64_t_s_s(p_27, (safe_mod_func_uint16_t_u_u(((*l_958) &= (safe_unary_minus_func_int64_t_s(p_27))), ((safe_mod_func_int16_t_s_s((safe_div_func_int16_t_s_s((&l_654 != l_963), l_943[1].f2)), (safe_rshift_func_int8_t_s_s((&l_943[4] != (void*)0), 3)))) ^ p_27))))), l_675.f0)), l_966)) , (-1L))) >= p_27), p_27)))
                { 
                    uint8_t l_969 = 0xDCL;
                    struct S3 *l_970[6];
                    int i;
                    for (i = 0; i < 6; i++)
                        l_970[i] = &l_943[1];
                    l_943[1].f0.f0 |= ((l_943[1].f1 , ((safe_mod_func_int8_t_s_s(l_969, (4294967295UL | ((void*)0 == l_970[0])))) > 0xED2080D9DA1E110ELL)) < (safe_mul_func_uint16_t_u_u(((*l_910) , 7UL), 0xB13FL)));
                    l_848[5] = (&g_220 == &g_220);
                }
                else
                { 
                    l_943[1].f0.f1 = 0xAF12B6CEL;
                    l_848[5] = 0x99EF50DDL;
                }
                (*l_976) = l_973;
                l_986[1][2][0]--;
            }
            l_990++;
            l_848[1] = (safe_sub_func_int16_t_s_s((safe_mul_func_int16_t_s_s((safe_sub_func_int16_t_s_s((safe_lshift_func_uint16_t_u_s((l_866 != (((*g_418) , ((l_1001 == ((*l_1003) = l_1002)) != (((safe_rshift_func_int8_t_s_u((((&g_517 != (l_1006 = l_1006)) > g_8.f0) | p_27), 7)) && l_948.f0.f0) , l_891))) , l_866)), 2)), (-1L))), g_364.f0)), l_948.f1));
            if ((safe_lshift_func_uint16_t_u_s((&g_516 == &l_1006), 13)))
            { 
                int8_t l_1014 = 0xC5L;
                int64_t *l_1018 = &g_98;
                int32_t l_1043 = 0x96A39B61L;
                uint16_t l_1047 = 5UL;
                (*l_877) = (*g_418);
                for (l_948.f2 = 0; (l_948.f2 < 8); l_948.f2 = safe_add_func_uint64_t_u_u(l_948.f2, 1))
                { 
                    int32_t l_1012 = 0x6D032DFFL;
                    int32_t l_1013 = 0x2AA53986L;
                    uint16_t *l_1044 = &g_587;
                    uint32_t *l_1045 = &l_845;
                    int32_t l_1046 = 6L;
                    l_1013 = (l_1012 >= ((void*)0 != &l_903));
                    l_1014 ^= (**p_26);
                    l_848[1] ^= ((((((p_27 > (safe_div_func_int16_t_s_s(p_27, 0xB838L))) != (((((***l_973) = (l_1017[1] == (l_1018 = l_1017[1]))) , (safe_add_func_int64_t_s_s(p_27, ((0x2AL == g_48.f2) , l_1021)))) > p_27) & (*g_826))) < 0UL) | 0xA6L) , p_27) < p_27);
                    l_1047 = (((safe_div_func_int8_t_s_s((0x4001L ^ ((l_1046 ^= (g_48.f2 = (safe_div_func_uint32_t_u_u(((*l_1045) = (safe_lshift_func_uint16_t_u_s((safe_mod_func_int64_t_s_s(l_1013, l_1012)), (l_1014 & (safe_div_func_uint64_t_u_u((~(safe_rshift_func_int16_t_s_u((l_675.f4 & (((*l_1044) |= (g_203.f1 |= (safe_div_func_int16_t_s_s(((**l_974) |= (+((**l_664) &= (safe_unary_minus_func_int64_t_s((safe_sub_func_int16_t_s_s((((safe_add_func_int32_t_s_s(l_1014, (l_1043 = l_614))) | p_27) >= g_48.f0.f4), p_27))))))), 5UL)))) || p_27)), l_1012))), p_27)))))), p_27)))) || l_948.f0.f2)), p_27)) , p_27) , l_948.f1);
                }
            }
            else
            { 
                int32_t *****l_1048 = &g_475;
                l_1049[2] = l_1048;
            }
            for (l_890 = 0; (l_890 <= (-12)); l_890 = safe_sub_func_int16_t_s_s(l_890, 1))
            { 
                int32_t l_1078 = (-1L);
                int8_t * const *l_1097[4][3][3] = {{{&l_1002,(void*)0,&l_1002},{&l_1002,&l_1002,&l_1002},{(void*)0,(void*)0,&l_1002}},{{&l_1002,&l_1002,&l_1002},{&l_1002,(void*)0,(void*)0},{&l_1002,&l_1002,&l_1002}},{{&l_1002,(void*)0,&l_1002},{&l_1002,&l_1002,&l_1002},{(void*)0,(void*)0,&l_1002}},{{&l_1002,&l_1002,&l_1002},{&l_1002,(void*)0,(void*)0},{&l_1002,&l_1002,&l_1002}}};
                int32_t l_1100 = 5L;
                struct S2 l_1102 = {9,22,65,0,5078};
                int32_t l_1104[1][7][6] = {{{0x1F060D96L,0x1F060D96L,0xABD6C874L,(-1L),0xF0027E78L,(-1L)},{0x712FBF14L,0x1F060D96L,0x712FBF14L,0x2B4F95DCL,0xABD6C874L,0xABD6C874L},{0x90B7B5E8L,0x712FBF14L,0x712FBF14L,0x90B7B5E8L,0x1F060D96L,(-1L)},{(-1L),0x90B7B5E8L,0xABD6C874L,0x90B7B5E8L,(-1L),0x2B4F95DCL},{0x90B7B5E8L,(-1L),0x2B4F95DCL,0x2B4F95DCL,(-1L),0x90B7B5E8L},{0x712FBF14L,0x90B7B5E8L,0x1F060D96L,(-1L),0x1F060D96L,0x90B7B5E8L},{0x1F060D96L,(-1L),0xABD6C874L,0x1F060D96L,0x1F060D96L,0xABD6C874L}}};
                int i, j, k;
                for (g_203.f1 = (-9); (g_203.f1 >= 17); g_203.f1++)
                { 
                    uint8_t l_1067 = 5UL;
                    struct S2 *l_1073 = (void*)0;
                    if (g_203.f5)
                        goto lbl_1054;
                    l_1072 ^= (l_675.f0 = (safe_mul_func_uint8_t_u_u(0x27L, (safe_mod_func_int16_t_s_s((safe_sub_func_int16_t_s_s(((safe_div_func_uint64_t_u_u((safe_lshift_func_int8_t_s_s((l_948.f0.f1 |= (p_27 < (safe_div_func_uint64_t_u_u((g_48 , ((l_675 , (l_1067 && (((safe_sub_func_int16_t_s_s(p_27, (((*l_1002) &= p_27) && g_364.f2))) , g_1070) < p_27))) < p_27)), l_1067)))), g_1071)), g_519.f2)) >= g_203.f0), 9UL)), p_27)))));
                    l_1073 = &g_517;
                }
                for (g_291 = 0; (g_291 > (-29)); g_291 = safe_sub_func_uint64_t_u_u(g_291, 7))
                { 
                    uint16_t *l_1098 = &l_628.f1;
                    uint32_t *l_1099 = &g_693;
                    int32_t l_1101[4][4] = {{0xD786EC97L,0x07367368L,0x07367368L,0xD786EC97L},{0x07367368L,0xD786EC97L,0x07367368L,0x07367368L},{0xD786EC97L,0xD786EC97L,4L,0xD786EC97L},{0xD786EC97L,0x07367368L,0x07367368L,0xD786EC97L}};
                    struct S0 l_1103 = {0x0B6F3889L,0xDE24L,255UL,432,5UL,405};
                    int i, j;
                    (*l_879) = (*l_877);
                    l_1100 = (((safe_mod_func_uint64_t_u_u((((*l_1099) = ((*g_803) = (l_1078 || (((safe_mul_func_int16_t_s_s((g_220 = (safe_lshift_func_int16_t_s_s(((l_903.f0 , (safe_mod_func_int64_t_s_s(((*l_681) = 0x0DD4412211EA6C6CLL), (safe_add_func_uint8_t_u_u((~(l_848[1] = (safe_mod_func_uint16_t_u_u((p_27 < (safe_sub_func_int16_t_s_s((safe_mul_func_uint16_t_u_u((safe_sub_func_uint8_t_u_u(7UL, l_948.f2)), ((*l_1098) = (g_1096 != l_1097[1][0][1])))), p_27))), g_693)))), l_1078))))) <= p_27), g_292[2][0]))), 0L)) < 7L) <= p_27)))) , g_1070), p_27)) , p_27) & l_891);
                    if (l_1101[0][0])
                        continue;
                    (*l_877) = (((l_1101[1][1] , ((**l_1003) = (((g_353 , l_1102) , &g_113) != (p_27 , &l_986[1][2][0])))) < p_27) , l_1103);
                    (*l_879) = (*l_877);
                }
                l_1105--;
                (*g_555) = (void*)0;
            }
        }
        if (((+(((((((safe_div_func_uint8_t_u_u(((((*l_664) = l_930) != ((safe_div_func_int32_t_s_s(((safe_mul_func_uint16_t_u_u(0x3B86L, p_27)) && ((*l_1122) = (((~p_27) , ((safe_rshift_func_uint16_t_u_s(((safe_sub_func_uint32_t_u_u(((l_730[0][0] != p_27) , (safe_lshift_func_int16_t_s_s(g_364.f3, 12))), l_614)) < l_881[2]), l_628.f3)) >= l_948.f0.f4)) | p_27))), p_27)) , &l_874[1][2][4])) | (**p_26)), p_27)) >= 0xA6B0L) || p_27) || l_675.f0) , l_948.f1) , 0x01L) | l_942.f2)) , (**p_26)))
        { 
            int16_t l_1123[6][3][7] = {{{(-1L),(-1L),0x8F30L,(-1L),0xB49AL,(-1L),0x8F30L},{0xD0C0L,0xD0C0L,0x0753L,0x3562L,0xD425L,0xE360L,1L},{(-1L),(-1L),0xF40EL,0xF40EL,(-1L),(-1L),0xB49AL}},{{0xF3E9L,0x0753L,0xAB82L,0L,0xD425L,0xD425L,0L},{0x6963L,0x3BB8L,0x6963L,0x3CBDL,0xB49AL,0xFBDEL,(-1L)},{0xAB82L,0x0753L,0xF3E9L,0xE360L,0xF3E9L,0x0753L,0xAB82L}},{{0xF40EL,(-1L),(-1L),0xB49AL,0xBCC6L,0xFBDEL,0xBCC6L},{0x0753L,0xD0C0L,0xD0C0L,0x0753L,0x3562L,0xD425L,0xE360L},{0x8F30L,(-1L),(-1L),0x6963L,0x6963L,(-1L),(-1L)}},{{0x3562L,0xAB82L,0xF3E9L,0xB417L,0xD0C0L,0xE360L,0xE360L},{0xFBDEL,0x8F30L,0x6963L,0x8F30L,0xFBDEL,(-1L),0xBCC6L},{1L,0xD425L,0xAB82L,0xB417L,0L,0xB417L,0xAB82L}},{{0xBCC6L,0xBCC6L,0xF40EL,0x6963L,(-1L),0x3CBDL,(-1L)},{1L,0xB417L,0x0753L,0x0753L,0xB417L,1L,0L},{0xFBDEL,0xF40EL,0x8F30L,0xB49AL,(-1L),(-1L),0xB49AL}},{{0x3562L,0xD70DL,0x3562L,0xE360L,0L,0xF3E9L,1L},{0x8F30L,0xF40EL,0xFBDEL,0x3CBDL,0xFBDEL,0xF40EL,0x8F30L},{0x0753L,0xB417L,1L,0L,0xD0C0L,0xF3E9L,0xD0C0L}}};
            int32_t l_1130 = 6L;
            int32_t l_1173[2][6][5] = {{{2L,0xB0C8B342L,2L,2L,0xB0C8B342L},{1L,0L,0L,1L,0L},{0xB0C8B342L,0xB0C8B342L,6L,0xB0C8B342L,0xB0C8B342L},{0L,1L,0L,0L,1L},{0xB0C8B342L,2L,2L,0xB0C8B342L,2L},{1L,1L,0x3BB18ABAL,1L,1L}},{{2L,0xB0C8B342L,2L,2L,0xB0C8B342L},{1L,0L,0L,1L,0L},{0xB0C8B342L,0xB0C8B342L,6L,2L,2L},{0x3BB18ABAL,0L,0x3BB18ABAL,0x3BB18ABAL,0L},{2L,6L,6L,2L,6L},{0L,0L,1L,0L,0L}}};
            struct S1 ** const *l_1211 = &l_866;
            uint16_t *l_1240 = &g_203.f1;
            struct S0 l_1255 = {0x53C96477L,65535UL,0x27L,650,0x9FEEA47BL,-358};
            struct S3 l_1257 = {{252,-2,33,-10,1292},0UL,0xE314L};
            uint32_t *l_1288 = &g_217;
            union U4 l_1295 = {0UL};
            uint64_t l_1300[5][6] = {{0x3F34C5E0234FE4B2LL,0x9C454F0BC82490FALL,0x3F34C5E0234FE4B2LL,0x3F34C5E0234FE4B2LL,0x9C454F0BC82490FALL,0x3F34C5E0234FE4B2LL},{0x3F34C5E0234FE4B2LL,0x9C454F0BC82490FALL,0x3F34C5E0234FE4B2LL,0x3F34C5E0234FE4B2LL,0x9C454F0BC82490FALL,0x3F34C5E0234FE4B2LL},{0x3F34C5E0234FE4B2LL,0x9C454F0BC82490FALL,0x3F34C5E0234FE4B2LL,0x3F34C5E0234FE4B2LL,0x9C454F0BC82490FALL,0x3F34C5E0234FE4B2LL},{0x3F34C5E0234FE4B2LL,0x9C454F0BC82490FALL,0x3F34C5E0234FE4B2LL,0x3F34C5E0234FE4B2LL,0x9C454F0BC82490FALL,0x3F34C5E0234FE4B2LL},{0x3F34C5E0234FE4B2LL,0x9C454F0BC82490FALL,0x3F34C5E0234FE4B2LL,0x3F34C5E0234FE4B2LL,0x9C454F0BC82490FALL,0x3F34C5E0234FE4B2LL}};
            uint32_t ***l_1354 = &g_825[2];
            uint32_t ****l_1355 = &g_204;
            int32_t *l_1356 = &l_890;
            int i, j, k;
            if (l_1123[3][1][4])
            { 
                uint8_t l_1132 = 255UL;
                int8_t l_1155 = 0x60L;
                int32_t l_1156 = 1L;
                int32_t *l_1174 = &g_203.f0;
                int32_t *l_1175 = &l_1173[0][3][3];
                int32_t *l_1176 = &l_848[4];
                int32_t *l_1177 = &l_1173[1][2][4];
                int32_t *l_1178 = &l_1156;
                int32_t *l_1179 = &l_890;
                int32_t *l_1180 = (void*)0;
                int32_t *l_1181[3];
                int i;
                for (i = 0; i < 3; i++)
                    l_1181[i] = &g_85;
                for (g_85 = (-19); (g_85 <= (-18)); ++g_85)
                { 
                    int32_t *l_1126 = &l_628.f0;
                    int32_t *l_1127 = &l_848[4];
                    int32_t *l_1128 = &l_848[1];
                    int32_t *l_1129 = (void*)0;
                    int32_t *l_1131[5];
                    uint16_t **l_1136 = &g_590;
                    uint16_t ***l_1135[7] = {&l_1136,&l_1136,&l_1136,&l_1136,&l_1136,&l_1136,&l_1136};
                    uint8_t *l_1172 = (void*)0;
                    int i;
                    for (i = 0; i < 5; i++)
                        l_1131[i] = &l_890;
                    l_1132--;
                    l_1137 = &g_590;
                    l_942.f0 ^= ((*l_1128) |= (+l_830[0][1][0]));
                    l_675.f1 = ((((safe_add_func_uint8_t_u_u((safe_lshift_func_uint16_t_u_u(((((safe_rshift_func_int8_t_s_s((safe_add_func_uint32_t_u_u((*g_153), (((l_890 < ((*l_681) = (g_517.f0 & p_27))) , (*g_817)) , ((l_628.f0 = (g_148 < ((safe_rshift_func_uint16_t_u_u((l_1156 &= (safe_div_func_uint64_t_u_u((safe_add_func_int32_t_s_s((safe_lshift_func_uint16_t_u_u(65535UL, 1)), l_1155)), p_27))), 13)) < g_517.f1))) < 0x5BA9L)))), 2)) >= g_201.f5) > 18446744073709551615UL) > l_628.f4), l_1123[3][1][4])), g_203.f0)) && l_628.f0) || l_614) ^ (*l_1128));
                    (*l_1126) |= (safe_add_func_int32_t_s_s(((safe_mod_func_int64_t_s_s((safe_div_func_uint32_t_u_u(l_1130, ((safe_mul_func_int8_t_s_s((((safe_add_func_int32_t_s_s(((*l_1127) = (-1L)), p_27)) & (safe_add_func_int16_t_s_s((((l_1169 >= g_353) < (safe_rshift_func_uint8_t_u_u((l_1173[0][3][3] = (((l_1137 = &g_590) != &g_590) == 0L)), 7))) ^ (-1L)), 65535UL))) != p_27), g_364.f3)) | 8UL))), 0x922ECF21C8443E6FLL)) >= 0x15DCL), (**p_26)));
                }
                ++g_1182;
                l_1185--;
                for (l_1185 = 0; (l_1185 < 56); l_1185++)
                { 
                    if (l_847[4])
                        break;
                }
                for (g_759 = 0; (g_759 <= 6); g_759 += 1)
                { 
                    int32_t *l_1190 = &l_1173[0][3][3];
                    int32_t ****l_1201 = &g_476;
                    int i;
                    (*g_555) = l_1190;
                    l_848[g_759] &= (((safe_mod_func_int16_t_s_s(((*l_975) = (safe_div_func_int8_t_s_s((p_27 && (1UL != (&g_292[2][0] == (void*)0))), (((((l_1173[0][3][3] <= ((safe_div_func_uint64_t_u_u((safe_sub_func_uint32_t_u_u((func_28((l_1201 != (void*)0), &l_848[1], l_1173[0][1][3], (*g_418)) , (*l_1179)), p_27)), (*l_1190))) > (-1L))) == l_881[0]) & g_291) <= g_364.f3) & g_353)))), (*l_1190))) & p_27) , (**p_26));
                    l_848[g_759] = (((*g_475) = (void*)0) != (void*)0);
                }
            }
            else
            { 
                uint32_t l_1226 = 0xCF1A6AC2L;
                if (((l_1202[0][2] , ((l_1173[0][5][3] = ((p_27 == (((((safe_add_func_uint32_t_u_u(((*g_826)--), (p_27 | 2L))) != g_1070) > (&g_97 == (void*)0)) < g_1207) == 247UL)) >= g_201.f0)) & l_675.f2)) && p_27))
                { 
                    int16_t l_1209 = 0xFB69L;
                    int32_t l_1210[5][2][1] = {{{9L},{0L}},{{9L},{0L}},{{9L},{0L}},{{9L},{0L}},{{9L},{0L}}};
                    struct S1 ** const **l_1212 = &l_1211;
                    int64_t l_1213 = 0L;
                    int32_t *l_1214 = &l_628.f0;
                    int32_t *l_1215 = &l_1210[3][1][0];
                    int32_t *l_1216[3][3];
                    int i, j, k;
                    for (i = 0; i < 3; i++)
                    {
                        for (j = 0; j < 3; j++)
                            l_1216[i][j] = &l_1210[2][0][0];
                    }
                    l_1210[2][0][0] |= (~(l_1209 ^ 0x7C2122DEL));
                    (*l_1212) = l_1211;
                    l_1213 |= 1L;
                    l_1217[2][1]--;
                    l_1221++;
                }
                else
                { 
                    int32_t l_1236[5][4][1];
                    int32_t *l_1237 = &l_1173[0][3][3];
                    uint8_t *l_1250 = &g_203.f2;
                    uint8_t *l_1253[7] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                    union U4 l_1260 = {0xB9BCL};
                    int i, j, k;
                    for (i = 0; i < 5; i++)
                    {
                        for (j = 0; j < 4; j++)
                        {
                            for (k = 0; k < 1; k++)
                                l_1236[i][j][k] = 6L;
                        }
                    }
                    l_948.f0.f0 = (safe_lshift_func_uint16_t_u_s(g_364.f4, ((l_1173[1][2][2] , ((g_201.f4 <= ((((g_220 &= (l_1226 ^ p_27)) > l_1227[4]) , ((***l_973) = (safe_mul_func_uint8_t_u_u(l_948.f0.f3, p_27)))) & 65535UL)) && p_27)) != 5L)));
                    l_1236[1][3][0] ^= (((g_48 , l_1123[3][1][4]) < l_1226) != (g_201.f3 | (safe_rshift_func_uint8_t_u_s(l_1226, ((0x67C6L || (l_1234 != l_1235)) > (*g_9))))));
                    l_1237 = &l_1130;
                    l_1130 = (safe_div_func_int8_t_s_s(((-1L) != ((l_975 == l_1240) && ((safe_div_func_int8_t_s_s(p_27, (l_1173[0][3][3] = (g_759 = (safe_mul_func_int16_t_s_s((!0UL), ((l_1173[0][5][3] & (((*g_803)--) , (g_292[2][0] &= (safe_mul_func_uint8_t_u_u(((*l_1250)++), p_27))))) , l_1254))))))) || 0x74313C6A7D52159ALL))), p_27));
                    (*l_1237) |= (9L < ((l_1255 , ((~((l_1257 , (((*l_1122)--) <= 0UL)) ^ ((*g_516) , ((l_1260 , ((((l_1261[5] == 1L) && 0x629B68FAL) , (*l_627)) , 0x38L)) && l_1262)))) || 0x434EL)) , 6L));
                }
                for (l_845 = (-4); (l_845 < 48); l_845 = safe_add_func_int64_t_s_s(l_845, 5))
                { 
                    if (l_1265[0][4])
                        break;
                }
                return p_27;
            }
            (**l_1211) = (*l_866);
            if ((safe_div_func_int32_t_s_s((-10L), ((~0x2637864EL) , ((l_675.f1 = (safe_mod_func_int8_t_s_s(((*l_1002) = l_1265[3][1]), p_27))) | (safe_mod_func_int64_t_s_s(((safe_mod_func_uint32_t_u_u((((~(safe_mul_func_int16_t_s_s(((((*l_1288) &= (p_27 || ((safe_div_func_int64_t_s_s((((safe_div_func_uint8_t_u_u(((g_292[2][0] != (((*g_826) = (safe_add_func_uint8_t_u_u((safe_sub_func_int32_t_s_s(((((safe_sub_func_uint8_t_u_u(g_786[2][0], 0xD7L)) >= 7L) >= 1L) > p_27), 1UL)), p_27))) , 1UL)) || l_1221), g_201.f1)) ^ 0x48AAC60BL) != l_1123[3][1][4]), 1UL)) <= 0xDBL))) < (**p_26)) && p_27), 1L))) < 0x82L) , 4294967295UL), (**p_26))) ^ p_27), l_1289)))))))
            { 
                struct S0 *l_1294 = &g_203;
                int32_t l_1316 = (-2L);
                int32_t *l_1317 = &g_85;
                int8_t l_1320[3][2][1] = {{{1L},{0x7AL}},{{0x7AL},{1L}},{{0x7AL},{0x7AL}}};
                int i, j, k;
                for (g_674 = 0; (g_674 == 17); ++g_674)
                { 
                    struct S0 **l_1292 = (void*)0;
                    struct S0 **l_1293[1];
                    int i;
                    for (i = 0; i < 1; i++)
                        l_1293[i] = &l_879;
                    l_1294 = &l_1255;
                    (*g_555) = &l_1173[0][3][3];
                }
                (*l_1317) |= (l_1295 , ((safe_rshift_func_int8_t_s_u(g_353, 3)) > (safe_mul_func_uint16_t_u_u(p_27, (l_1300[0][2] || ((safe_lshift_func_int8_t_s_s(((((((*l_681) = (l_948 , ((safe_mod_func_uint64_t_u_u((((((l_1255.f3 == (((safe_rshift_func_uint16_t_u_u((safe_lshift_func_int16_t_s_s((safe_rshift_func_uint8_t_u_s(((safe_mod_func_uint16_t_u_u((safe_lshift_func_uint8_t_u_u(((void*)0 == l_1315), l_1255.f2)), p_27)) , p_27), l_1316)), 4)), g_364.f1)) < p_27) == l_1295.f0)) ^ 0x9F22L) != 0x42D72779L) < (-7L)) == p_27), 7UL)) ^ p_27))) | l_948.f1) ^ 0xCBD0L) < p_27) >= (*g_153)), 3)) || (**p_26)))))));
                for (l_1316 = 0; (l_1316 != 17); l_1316++)
                { 
                    int32_t l_1325 = 6L;
                    if (l_1320[2][1][0])
                        break;
                    (*l_1317) ^= ((safe_sub_func_uint16_t_u_u((safe_sub_func_int16_t_s_s(l_1325, (!((((safe_sub_func_uint16_t_u_u(((p_27 ^ (0xC71E0C57L && (l_1325 == p_27))) , (p_27 , l_1300[0][2])), 0x9FE1L)) || l_1325) , l_1325) , g_203.f5)))), l_1257.f0.f4)) < 0x1B72F046L);
                }
            }
            else
            { 
                int64_t *l_1331[4] = {&g_291,&g_291,&g_291,&g_291};
                int32_t *l_1332 = &l_1169;
                int32_t l_1339 = 0x9FB23AF6L;
                int32_t l_1343 = 0xAADAE99CL;
                int32_t l_1345[1];
                int i;
                for (i = 0; i < 1; i++)
                    l_1345[i] = 0xFA03EF38L;
                (*g_418) = (*l_879);
lbl_1350:
                if ((&g_1071 == ((*g_516) , l_1331[3])))
                { 
                    int32_t *l_1333 = &l_848[1];
                    int32_t *l_1334 = &g_203.f0;
                    int32_t *l_1335 = &l_1173[0][0][2];
                    int32_t *l_1336 = &l_1173[0][3][3];
                    int32_t *l_1337 = (void*)0;
                    int32_t *l_1338 = &l_628.f0;
                    int32_t *l_1340 = &l_848[5];
                    int32_t *l_1341 = (void*)0;
                    int32_t *l_1342[2][7][2] = {{{&g_10,(void*)0},{&l_1169,&g_10},{(void*)0,&l_848[3]},{&l_628.f0,&l_1173[0][3][3]},{&g_10,(void*)0},{(void*)0,(void*)0},{&g_10,&l_1173[0][3][3]}},{{&l_628.f0,&l_848[3]},{(void*)0,&g_10},{&l_1169,(void*)0},{&g_10,(void*)0},{&g_10,(void*)0},{&l_1169,&g_10},{(void*)0,&l_848[3]}}};
                    int16_t l_1344[7] = {8L,2L,2L,8L,2L,2L,8L};
                    int i, j, k;
                    l_1332 = (void*)0;
                    l_1346++;
                    if (g_113)
                        goto lbl_1350;
                }
                else
                { 
                    union U4 **l_1349 = &g_922;
                    (*l_1349) = &g_923;
                    return g_113;
                }
                return g_1351;
            }
            l_848[1] = ((*l_1356) ^= (251UL < ((p_27 ^ p_27) >= (safe_sub_func_uint8_t_u_u((((*g_418) , ((((*l_1355) = ((0x5E5BL & g_10) , l_1354)) != (void*)0) != p_27)) & g_10), 1UL)))));
        }
        else
        { 
            uint32_t l_1362 = 0xE2B21A5CL;
            int32_t l_1371 = 0x11AF59B7L;
            int16_t * const *l_1373 = &l_975;
            int16_t * const **l_1372 = &l_1373;
            uint8_t *l_1374[5] = {&l_1265[2][0],&l_1265[2][0],&l_1265[2][0],&l_1265[2][0],&l_1265[2][0]};
            int32_t l_1375 = 0x30642685L;
            int i;
            l_1375 = (safe_rshift_func_uint8_t_u_s((g_292[1][2] = ((8UL && p_27) < (safe_div_func_int32_t_s_s((**p_26), ((*g_803) , ((*g_826) = (+((((l_1362 > (((((p_27 , (~(l_1371 &= (safe_div_func_int8_t_s_s(((safe_mod_func_int32_t_s_s(((((((safe_mod_func_uint16_t_u_u(((void*)0 != &g_364), 1UL)) > p_27) , g_291) & (-1L)) | g_8.f0) < g_217), l_628.f4)) | l_1370), 255UL))))) , l_1372) != (void*)0) , l_1362) && 8UL)) , &l_1021) != &l_891) != l_1362)))))))), p_27));
            l_890 = (((void*)0 == (*p_26)) > 0xC3BA2790L);
            return l_1376;
        }
        for (p_27 = 0; (p_27 > (-29)); p_27 = safe_sub_func_int64_t_s_s(p_27, 6))
        { 
            union U4 *l_1383[3][6] = {{&g_1384,(void*)0,(void*)0,&g_1384,(void*)0,(void*)0},{&g_1384,(void*)0,(void*)0,&g_1384,(void*)0,(void*)0},{&g_1384,(void*)0,(void*)0,&g_1384,(void*)0,(void*)0}};
            struct S0 l_1388 = {-1L,1UL,6UL,391,18446744073709551615UL,2011};
            int i, j;
            for (g_674 = (-21); (g_674 < 2); g_674 = safe_add_func_uint8_t_u_u(g_674, 5))
            { 
                int32_t *l_1385 = &l_890;
                struct S0 l_1387 = {0xF4CDCD32L,0x9E54L,255UL,264,0xFE978582L,-1102};
                for (g_1070 = 0; (g_1070 != 23); ++g_1070)
                { 
                    if ((**p_26))
                        break;
                    return p_27;
                }
                l_1383[2][2] = &g_923;
                (*l_879) = (func_28(g_759, ((*g_555) = l_1385), l_1386, l_1387) , l_1388);
                (*g_555) = (void*)0;
            }
        }
    }
lbl_1493:
    (*l_1415) = (((safe_mul_func_uint16_t_u_u(8UL, (safe_mul_func_int8_t_s_s(((((l_890 = l_1393) > (safe_add_func_uint64_t_u_u((safe_div_func_int64_t_s_s((safe_lshift_func_uint8_t_u_s(((((safe_mod_func_uint64_t_u_u((((safe_rshift_func_int8_t_s_s((safe_mul_func_int8_t_s_s(7L, ((safe_sub_func_int16_t_s_s((l_1408 , ((g_1071 <= ((g_923.f0 | (safe_unary_minus_func_int64_t_s(((**p_26) | l_1221)))) <= l_1410)) , (-9L))), p_27)) & (**p_26)))), p_27)) == p_27) <= 1UL), 0xF69972517259D3D9LL)) > g_292[2][0]) && 65535UL) ^ g_201.f4), p_27)), g_519.f3)), 1UL))) >= 1UL) < l_1386), g_519.f3)))) ^ p_27) , l_1411);
    if ((**p_26))
    { 
        int32_t *l_1416 = &l_628.f0;
        int32_t l_1417 = 0x23D9C96FL;
        int32_t *l_1418 = (void*)0;
        int32_t *l_1419 = (void*)0;
        int32_t *l_1420 = &l_1417;
        int32_t *l_1421[6][2] = {{&g_203.f0,&g_85},{&g_203.f0,&g_85},{&g_203.f0,&g_85},{&g_203.f0,&g_85},{&g_203.f0,&g_85},{&g_203.f0,&g_85}};
        uint16_t l_1422 = 0UL;
        struct S2 ***l_1433 = &l_1426;
        struct S3 *l_1437 = &g_48;
        int64_t **l_1482 = &l_681;
        int i, j;
lbl_1429:
        l_1422--;
        if (((void*)0 == l_1425))
        { 
            uint8_t l_1427 = 1UL;
            int32_t l_1428 = (-1L);
            l_1428 |= (l_1427 > 0xF59C61F0L);
        }
        else
        { 
            uint64_t l_1431[4][1] = {{0x8750E6BF82BD0760LL},{0x2F392717597FF4A2LL},{0x8750E6BF82BD0760LL},{0x2F392717597FF4A2LL}};
            int32_t **l_1438 = &l_1418;
            int32_t l_1447 = 0xF40FB559L;
            int32_t l_1451 = 0x618C1275L;
            int32_t l_1452 = 0x7E688E7FL;
            int16_t l_1463[1][1][4];
            int32_t l_1466 = (-1L);
            int32_t l_1467 = 5L;
            int32_t l_1469 = 0L;
            int i, j, k;
            for (i = 0; i < 1; i++)
            {
                for (j = 0; j < 1; j++)
                {
                    for (k = 0; k < 4; k++)
                        l_1463[i][j][k] = 0x48D5L;
                }
            }
            if (l_1105)
                goto lbl_1429;
            for (g_758 = 0; (g_758 <= 2); g_758 += 1)
            { 
                for (l_1417 = 2; (l_1417 >= 0); l_1417 -= 1)
                { 
                    int64_t *l_1430 = (void*)0;
                    int32_t l_1434 = (-1L);
                    l_1431[1][0] = (l_1430 == l_1430);
                    if ((**p_26))
                        break;
                    (*l_1416) = ((g_48.f1 > (+(l_1434 = (((void*)0 == l_1433) == p_27)))) >= (safe_rshift_func_int8_t_s_u(((void*)0 != l_1437), 5)));
                    return p_27;
                }
            }
            if (g_113)
                goto lbl_1439;
lbl_1439:
            (*l_1438) = (*p_26);
            for (g_1384.f0 = 0; (g_1384.f0 == 51); g_1384.f0 = safe_add_func_int32_t_s_s(g_1384.f0, 4))
            { 
                int16_t l_1445 = 0x0064L;
                int32_t l_1446 = 0xB8AD69D4L;
                int32_t l_1449[2][6][1] = {{{0x69938259L},{0x6BC7B3C0L},{0x69938259L},{0x6BC7B3C0L},{0x69938259L},{0x6BC7B3C0L}},{{0x69938259L},{0x6BC7B3C0L},{0x69938259L},{0x6BC7B3C0L},{0x69938259L},{0x6BC7B3C0L}}};
                uint16_t l_1453 = 0x3CDEL;
                int i, j, k;
                for (l_1410 = 13; (l_1410 <= 4); l_1410 = safe_sub_func_int32_t_s_s(l_1410, 8))
                { 
                    uint64_t l_1444 = 0xE562D885D1D67FAFLL;
                    int32_t l_1448[6][1];
                    int i, j;
                    for (i = 0; i < 6; i++)
                    {
                        for (j = 0; j < 1; j++)
                            l_1448[i][j] = 0x70534B03L;
                    }
                    if (l_1444)
                        break;
                    if (l_1445)
                        continue;
                    ++l_1453;
                    (*g_555) = &l_1448[0][0];
                    l_1456 = (*p_26);
                }
            }
            for (g_48.f2 = 2; (g_48.f2 >= (-17)); g_48.f2--)
            { 
                int16_t l_1461 = 0x170BL;
                int32_t l_1475 = 0L;
                int32_t l_1477[1];
                struct S1 ** const l_1484[7][2][1] = {{{&g_817},{(void*)0}},{{&g_817},{&g_817}},{{&g_817},{&g_817}},{{(void*)0},{&g_817}},{{&g_817},{&g_817}},{{&g_817},{(void*)0}},{{&g_817},{&g_817}}};
                int i, j, k;
                for (i = 0; i < 1; i++)
                    l_1477[i] = 1L;
                for (l_890 = 0; (l_890 >= 19); ++l_890)
                { 
                    int16_t l_1462 = 0x65F6L;
                    int32_t l_1464 = 0L;
                    int32_t l_1465 = 0x97E0E14AL;
                    struct S0 **l_1481 = &l_879;
                    --l_1470;
                    l_1464 |= ((((+((((*l_1002) = ((g_220 = ((l_1461 , &g_922) == &g_922)) | ((**l_1438) && 1L))) | g_364.f4) || ((0xDA07BF29FB87C4AALL ^ p_27) <= (*g_826)))) | 0x8A44L) , p_27) < p_27);
                    l_1478++;
                    (*l_1481) = &l_628;
                    (*l_1438) = &l_1417;
                }
                for (l_1475 = 0; (l_1475 <= 1); l_1475 += 1)
                { 
                    int64_t ***l_1483 = &l_1482;
                    int i, j;
                    l_1421[(l_1475 + 4)][l_1475] = l_1421[(l_1475 + 1)][l_1475];
                    (*l_1483) = l_1482;
                }
                (*l_1416) |= (l_1484[2][0][0] != l_1484[6][1][0]);
            }
        }
    }
    else
    { 
        int32_t *l_1485[6][6][3] = {{{&g_85,&l_1468,(void*)0},{(void*)0,(void*)0,(void*)0},{&g_10,&g_10,&g_10},{&g_10,&g_10,&l_1169},{&l_1169,&l_890,(void*)0},{&l_1468,&g_10,&l_628.f0}},{{&g_10,&l_890,(void*)0},{&g_10,&g_10,&g_10},{&l_1169,&l_628.f0,&g_10},{&l_1468,&l_890,&l_1468},{&l_890,(void*)0,(void*)0},{&l_628.f0,&l_628.f0,(void*)0}},{{&l_628.f0,&g_10,(void*)0},{(void*)0,&l_628.f0,&g_85},{&g_10,&l_1468,&g_85},{(void*)0,&g_203.f0,(void*)0},{(void*)0,&l_1468,(void*)0},{&l_890,&l_628.f0,(void*)0}},{{&g_203.f0,(void*)0,&l_1468},{&g_10,&g_10,&g_10},{&l_890,&l_628.f0,&g_10},{&g_10,(void*)0,(void*)0},{&g_203.f0,&g_10,&l_628.f0},{&g_203.f0,&g_203.f0,(void*)0}},{{&g_203.f0,&l_890,&l_1169},{&g_10,(void*)0,(void*)0},{&l_890,&l_1468,&l_890},{&g_10,&l_890,&l_890},{&g_203.f0,(void*)0,&l_1468},{&l_890,&l_1169,&g_203.f0}},{{(void*)0,&l_890,&g_85},{(void*)0,&l_1169,&l_890},{&g_10,&l_1169,&l_890},{(void*)0,&l_890,&l_1468},{&l_628.f0,&l_1169,&l_1468},{&l_628.f0,(void*)0,&g_10}}};
        struct S2 l_1509 = {36,1,64,0,-4495};
        int i, j, k;
        --l_1486;
        l_1489++;
        l_1492 = ((*g_475) = &p_25);
        if (g_8.f0)
            goto lbl_1493;
        for (g_98 = 2; (g_98 >= 0); g_98 -= 1)
        { 
            int32_t *l_1494 = &l_628.f0;
            struct S0 l_1516 = {0x8CFDB6D2L,1UL,1UL,360,1UL,697};
            int i;
            (*g_555) = l_1494;
        }
    }
    l_1169 ^= ((*l_1426) == ((((safe_mod_func_uint16_t_u_u(((p_27 != (p_27 , p_27)) <= (safe_rshift_func_uint16_t_u_u(((safe_add_func_uint8_t_u_u(((*l_1562) = (safe_mod_func_int64_t_s_s((((0xCDB3L < (l_1408 , ((*l_627) , g_587))) < 0x6D19L) >= p_27), 0xF5FBFF543DB32843LL))), p_27)) != g_1450), 13))), (*l_1456))) && 65535UL) != (*l_1456)) , (*l_1426)));
    return p_27;
}



static struct S1  func_28(uint64_t  p_29, int32_t * p_30, uint32_t  p_31, struct S0  p_32)
{ 
    uint32_t ****l_607 = &g_204;
    int32_t *l_608 = &g_85;
    struct S1 l_609 = {-64,3,50,-8,1264};
    (*l_608) = ((void*)0 != l_607);
    return l_609;
}



static uint32_t  func_40(int32_t ** p_41)
{ 
    int32_t *l_49 = &g_10;
    int64_t *l_50 = &g_51;
    struct S3 l_52 = {{-608,3,4,5,1215},0x58AC3744L,0x4A86L};
    uint32_t l_559[2];
    int8_t l_594[3];
    int i;
    for (i = 0; i < 2; i++)
        l_559[i] = 0xA2373668L;
    for (i = 0; i < 3; i++)
        l_594[i] = 0x95L;
    if ((&g_9 == ((*g_476) = func_42(g_48, l_49, (((*l_50) = (*l_49)) , l_52), &g_9, g_48.f0.f3))))
    { 
        const int32_t l_573 = 1L;
        uint8_t l_574 = 0x56L;
        int32_t l_577 = 0x46FF8D6FL;
        uint32_t l_583 = 3UL;
        struct S3 *l_584 = &g_48;
        uint16_t *l_585 = (void*)0;
        uint16_t *l_586 = &g_587;
        int32_t *l_591 = &l_577;
        uint64_t *l_601[6] = {&g_113,&g_113,&g_113,&g_113,&g_113,&g_113};
        int8_t *l_602 = (void*)0;
        int8_t *l_603 = &g_353;
        const uint64_t *l_604 = (void*)0;
        int i;
        for (g_261 = 0; (g_261 <= (-1)); g_261--)
        { 
            uint8_t l_570 = 247UL;
            int8_t *l_575 = &g_353;
            int32_t l_576 = 5L;
            l_576 = ((3L >= (l_559[1] != (*l_49))) <= ((*l_575) |= (g_48.f0.f0 != (((((safe_add_func_int64_t_s_s(((safe_mod_func_int64_t_s_s((safe_lshift_func_int8_t_s_u(g_291, 3)), (safe_rshift_func_int16_t_s_s(((((((l_570 <= (safe_lshift_func_int8_t_s_u((l_573 | 0xCD4FL), 6))) & 0xE0CBL) ^ 0xEAE63E01L) >= g_48.f0.f4) & l_570) , 0x50FFL), (*l_49))))) || (*l_49)), 0xBE36F633E30AB479LL)) | l_574) | (**p_41)) , g_51) == 4UL))));
            return (*l_49);
        }
        l_577 = (**p_41);
        (*l_591) |= (~(safe_div_func_int64_t_s_s(((*g_418) , (safe_mul_func_int32_t_s_s(l_583, (&l_52 != (g_48.f0.f2 , l_584))))), ((((*l_586)++) ^ (((((void*)0 != g_590) >= (*l_49)) , (void*)0) != g_153)) , 8UL))));
        (*l_591) ^= (**p_41);
        l_52.f0.f3 |= ((safe_mul_func_int8_t_s_s(5L, (l_594[1] == (*l_49)))) <= (((l_50 == (((safe_lshift_func_int16_t_s_u((safe_mul_func_int16_t_s_s((safe_div_func_int8_t_s_s(((*l_603) = (0x5E95EBB0ECB0D71ELL ^ ((*l_591) = ((void*)0 == p_41)))), 0xF6L)), 0xB79AL)), g_364.f0)) < 4294967290UL) , l_604)) , (void*)0) != (void*)0));
    }
    else
    { 
        int32_t *l_605 = &g_203.f0;
        l_605 = (*p_41);
    }
    return (*g_153);
}



static int32_t ** func_42(struct S3  p_43, int32_t * p_44, struct S3  p_45, int32_t ** p_46, uint32_t  p_47)
{ 
    int64_t *l_58 = &g_51;
    int64_t **l_57 = &l_58;
    int64_t *l_59 = &g_51;
    int32_t l_68 = 0x29C6149AL;
    int32_t l_93 = (-1L);
    int32_t l_147 = (-1L);
    uint32_t ***l_167 = (void*)0;
    int64_t l_174 = 0xE0213BFE599A2C15LL;
    int32_t **l_183 = &g_175;
    int32_t ***l_182 = &l_183;
    int32_t *l_200 = &l_147;
    int32_t l_238 = 0xEA3EF8ABL;
    struct S0 *l_250[2][1][2];
    uint32_t ****l_429[5][3] = {{&g_204,&g_204,&g_204},{&l_167,&l_167,&l_167},{&g_204,&g_204,&g_204},{&l_167,&l_167,&l_167},{&g_204,&g_204,&g_204}};
    uint32_t *****l_428 = &l_429[1][1];
    uint32_t l_472 = 0xAE4B5D24L;
    const int8_t l_507 = 0x39L;
    int16_t *l_522 = &g_220;
    int32_t *l_545 = &g_203.f0;
    int32_t *l_546 = &g_85;
    int32_t *l_547 = (void*)0;
    int32_t *l_548 = &g_203.f0;
    int32_t *l_549 = &l_147;
    int32_t *l_550 = &g_85;
    int32_t *l_551[3][5][4] = {{{&l_93,&l_147,&l_147,&l_93},{&l_93,&l_147,&l_147,&l_93},{&l_93,&l_147,&l_147,&l_93},{&l_93,&l_147,&l_147,&l_93},{&l_93,&l_147,&l_147,&l_93}},{{&l_93,&l_147,&l_147,&l_93},{&l_93,&l_147,&l_147,&l_93},{&l_93,&l_147,&l_147,&l_93},{&l_93,&l_147,&l_147,&l_93},{&l_93,&l_147,&l_147,&l_93}},{{&l_93,&l_147,&l_147,&l_93},{&l_93,&l_147,&l_147,&l_93},{&l_93,&l_147,&l_147,&l_93},{&l_93,&l_147,&l_147,&l_93},{&l_93,&l_147,&l_147,&l_93}}};
    uint32_t l_552 = 0UL;
    int i, j, k;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 2; k++)
                l_250[i][j][k] = (void*)0;
        }
    }
    if ((safe_rshift_func_uint16_t_u_s((safe_mod_func_int32_t_s_s((((*l_57) = &g_51) == l_59), ((p_45.f2 != (safe_add_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_s(((((((safe_mod_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_u(l_68, 4)), (~((safe_lshift_func_uint16_t_u_u(((safe_add_func_int32_t_s_s((safe_sub_func_uint16_t_u_u(l_68, (&p_44 == &g_9))), 0x97F5CE94L)) || l_68), p_45.f1)) && (*g_9))))) > g_48.f0.f0) == 0L) <= p_47) , p_43.f0.f0) <= 1L), g_48.f0.f4)), 255UL))) & 254UL))), g_48.f0.f0)))
    { 
        int32_t l_89 = 7L;
        int32_t *l_146[2][3][3] = {{{&l_89,(void*)0,&l_93},{(void*)0,&l_89,&l_89},{&l_93,&l_89,&l_89}},{{&l_93,(void*)0,&g_10},{&g_85,&g_85,&l_93},{&l_89,&l_89,&g_10}}};
        int i, j, k;
        for (g_51 = 0; (g_51 <= (-11)); g_51 = safe_sub_func_int32_t_s_s(g_51, 9))
        { 
            uint32_t l_90 = 0xA718AF62L;
            int64_t *l_96 = (void*)0;
            int32_t l_130 = 0xF4BB62B1L;
            const int32_t *l_143 = &l_130;
            int32_t *l_145 = &l_130;
            if ((*p_44))
                break;
            if ((**p_46))
                break;
            for (g_48.f1 = (-15); (g_48.f1 == 36); g_48.f1++)
            { 
                uint32_t l_82 = 0xD37137C2L;
                int32_t **l_100 = (void*)0;
                int32_t l_124 = (-1L);
                uint32_t *l_125 = (void*)0;
                int32_t l_126 = 0x2B5FAC05L;
                int32_t *l_129 = &g_85;
                int32_t *l_131 = &l_124;
                int32_t *l_132 = &l_130;
                int32_t *l_133 = &g_85;
                int32_t *l_134 = &l_93;
                int32_t *l_135[4][4] = {{&l_68,&l_68,&l_68,&l_68},{&l_68,&l_68,&l_68,&l_68},{&l_68,&l_68,&l_68,&l_68},{&l_68,&l_68,&l_68,&l_68}};
                uint16_t l_136[1];
                int i, j;
                for (i = 0; i < 1; i++)
                    l_136[i] = 65531UL;
                if ((*g_9))
                { 
                    int32_t *l_83 = &l_68;
                    int32_t *l_84 = &g_85;
                    int32_t l_86 = 0x4706CD8FL;
                    int32_t *l_87 = (void*)0;
                    int32_t *l_88[6][3] = {{&g_85,&l_86,&g_85},{&l_68,&g_10,&l_68},{&g_85,&l_86,&g_85},{&l_68,&g_10,&l_68},{&g_85,&l_86,&g_85},{&l_68,&g_10,&l_68}};
                    int32_t **l_99 = &l_88[3][2];
                    int i, j;
                    (*l_84) = ((*l_83) = (safe_rshift_func_int16_t_s_s(l_82, 14)));
                    l_90++;
                    l_93 |= l_68;
                    (*l_99) = ((safe_sub_func_int64_t_s_s(g_48.f0.f2, (&g_51 == (g_97 = l_96)))) , &g_10);
                    return l_100;
                }
                else
                { 
                    int32_t *l_101 = &l_89;
                    int32_t *l_102 = (void*)0;
                    int32_t l_103[2];
                    int32_t *l_104 = &l_103[0];
                    int32_t *l_105 = &l_93;
                    int32_t *l_106 = &l_68;
                    int32_t *l_107 = &l_93;
                    int32_t *l_108 = (void*)0;
                    int32_t *l_109 = &l_103[0];
                    int32_t *l_110 = &l_89;
                    int32_t *l_111 = &g_85;
                    int32_t *l_112[5][4][7] = {{{&l_93,&g_85,&l_103[0],&l_103[0],&g_85,&l_93,&l_68},{&g_85,&l_93,&g_85,&g_85,&g_85,&g_85,&l_93},{&g_85,&l_68,&l_93,&g_85,&l_103[0],&l_103[0],&g_85},{&l_93,&l_93,&l_93,&l_103[0],&l_93,&l_68,&l_68}},{{&l_93,&g_85,&g_85,&g_85,&l_93,&g_85,&g_85},{&g_85,&l_68,&l_103[0],&g_85,&l_103[0],&l_68,&g_85},{&l_93,&g_85,&l_68,&l_103[0],&g_85,&l_103[0],&l_68},{&g_85,&g_85,&g_85,&l_93,&g_85,&g_85,&g_85}},{{&l_93,&l_68,&l_68,&l_93,&l_103[0],&l_93,&l_93},{&l_93,&g_85,&l_103[0],&l_103[0],&g_85,&l_93,&l_68},{&g_85,&l_93,&g_85,&g_85,&g_85,&g_85,&l_93},{&g_85,&l_68,&l_93,&g_85,&l_103[0],&l_103[0],&g_85}},{{&l_93,&l_93,&l_93,&l_103[0],&l_93,&l_68,&l_68},{&l_93,&g_85,&g_85,&g_85,&l_93,&g_85,&g_85},{&g_85,&l_68,&l_103[0],&g_85,&l_103[0],&l_68,&g_85},{&l_93,&g_85,&l_68,&l_103[0],&g_85,&l_103[0],&l_68}},{{&g_85,&g_85,&g_85,&l_93,&g_85,&g_85,&g_85},{&l_93,&l_68,&l_68,&l_93,&l_103[0],&l_93,&l_93},{&l_93,&g_85,&l_103[0],&l_103[0],&g_85,&l_93,&l_68},{&g_85,&l_93,&g_85,&g_85,&g_85,&g_85,&l_93}}};
                    int i, j, k;
                    for (i = 0; i < 2; i++)
                        l_103[i] = 2L;
                    g_113++;
                }
                (*l_129) = (p_43.f0.f3 = (p_45.f0.f2 != ((safe_sub_func_uint32_t_u_u((safe_lshift_func_int16_t_s_s((safe_div_func_int8_t_s_s((&g_51 == &g_51), 1UL)), 10)), ((safe_mul_func_uint16_t_u_u(((++p_47) ^ 0xD476A275L), 65532UL)) <= 0x4EL))) || g_8.f0)));
                --l_136[0];
            }
            for (p_45.f1 = 0; (p_45.f1 != 52); p_45.f1 = safe_add_func_int8_t_s_s(p_45.f1, 1))
            { 
                const int32_t *l_144[6][4][5] = {{{&g_10,&g_85,&l_68,&l_130,&g_10},{&g_10,&l_89,&g_10,&g_10,(void*)0},{(void*)0,(void*)0,&l_130,&l_68,&l_93},{(void*)0,(void*)0,(void*)0,&l_68,&l_93}},{{&g_10,&l_68,&l_93,(void*)0,(void*)0},{(void*)0,&l_68,&g_10,&l_130,&g_10},{(void*)0,(void*)0,&l_93,&l_130,&l_93},{&l_68,(void*)0,(void*)0,(void*)0,&g_10}},{{&l_68,&g_10,&l_130,&l_68,(void*)0},{(void*)0,(void*)0,&l_130,&l_68,&l_93},{(void*)0,(void*)0,(void*)0,&l_68,&l_93},{&g_10,&l_68,&l_93,(void*)0,(void*)0}},{{(void*)0,&l_68,&g_10,&l_130,&g_10},{(void*)0,(void*)0,&l_93,&l_130,&l_93},{&l_68,(void*)0,(void*)0,(void*)0,&g_10},{&l_68,&g_10,&l_130,&l_68,(void*)0}},{{(void*)0,(void*)0,&l_130,&l_68,&l_93},{(void*)0,(void*)0,(void*)0,&l_68,&l_93},{&g_10,&l_68,&l_93,(void*)0,(void*)0},{(void*)0,&l_68,&g_10,&l_130,&g_10}},{{(void*)0,(void*)0,&l_93,&l_130,&l_93},{&l_68,(void*)0,(void*)0,(void*)0,&g_10},{&l_68,&g_10,&l_130,&l_68,(void*)0},{(void*)0,(void*)0,&l_130,&l_68,&l_93}}};
                int i, j, k;
                for (p_43.f1 = 0; (p_43.f1 > 23); ++p_43.f1)
                { 
                    l_144[2][1][2] = l_143;
                    return &g_9;
                }
            }
            (*l_145) ^= ((*p_46) != (*p_46));
        }
        ++g_148;
    }
    else
    { 
        int32_t l_151[6] = {0xB51010FFL,1L,1L,0xB51010FFL,1L,1L};
        int32_t **l_199 = (void*)0;
        struct S0 *l_202[4] = {&g_203,&g_203,&g_203,&g_203};
        uint32_t *l_214 = &g_148;
        uint32_t *l_215 = (void*)0;
        uint32_t *l_216 = &g_217;
        int16_t *l_218 = (void*)0;
        int16_t *l_219 = &g_220;
        int16_t l_237[1][7];
        uint8_t l_245 = 0UL;
        int64_t **l_301 = &l_59;
        int32_t l_330 = (-1L);
        uint16_t l_377 = 0x9C1AL;
        uint32_t * const *l_396 = &l_215;
        uint32_t * const **l_395[4][4][6] = {{{&l_396,&l_396,(void*)0,&l_396,&l_396,&l_396},{&l_396,&l_396,&l_396,&l_396,&l_396,&l_396},{&l_396,(void*)0,(void*)0,&l_396,&l_396,&l_396},{&l_396,&l_396,&l_396,(void*)0,&l_396,&l_396}},{{&l_396,&l_396,&l_396,&l_396,&l_396,&l_396},{(void*)0,(void*)0,&l_396,&l_396,&l_396,&l_396},{&l_396,&l_396,&l_396,&l_396,&l_396,&l_396},{&l_396,&l_396,&l_396,&l_396,(void*)0,&l_396}},{{&l_396,&l_396,&l_396,&l_396,&l_396,&l_396},{&l_396,&l_396,&l_396,&l_396,&l_396,&l_396},{&l_396,&l_396,&l_396,&l_396,&l_396,&l_396},{&l_396,(void*)0,(void*)0,&l_396,&l_396,&l_396}},{{&l_396,(void*)0,&l_396,&l_396,&l_396,&l_396},{&l_396,&l_396,&l_396,&l_396,&l_396,&l_396},{&l_396,(void*)0,&l_396,(void*)0,&l_396,&l_396},{&l_396,(void*)0,&l_396,&l_396,&l_396,&l_396}}};
        uint32_t * const ***l_394[2];
        struct S2 l_441 = {47,37,100,0,-3285};
        struct S2 *l_518[4];
        int i, j, k;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 7; j++)
                l_237[i][j] = 0xC485L;
        }
        for (i = 0; i < 2; i++)
            l_394[i] = &l_395[1][1][1];
        for (i = 0; i < 4; i++)
            l_518[i] = &g_519;
        for (g_98 = 1; (g_98 <= 5); g_98 += 1)
        { 
            const uint32_t ***l_154 = &g_152[2];
            const union U4 l_176 = {0x565CL};
            int64_t *l_177 = &l_174;
            uint32_t ****l_185[3];
            uint32_t *****l_184 = &l_185[0];
            int i;
            for (i = 0; i < 3; i++)
                l_185[i] = &l_167;
            (*l_154) = g_152[0];
            g_175 = ((safe_sub_func_int16_t_s_s(((safe_rshift_func_uint16_t_u_s(0x2505L, ((safe_div_func_int16_t_s_s(((safe_sub_func_int16_t_s_s((safe_add_func_int16_t_s_s(((safe_add_func_int64_t_s_s((((void*)0 == l_167) || l_151[g_98]), ((*l_59) = (safe_div_func_uint64_t_u_u((safe_mod_func_int16_t_s_s(l_151[g_98], (safe_mod_func_int16_t_s_s((l_151[g_98] != ((p_45.f0.f3 != l_68) > l_147)), 0x44C3L)))), l_174))))) | p_45.f0.f3), 8UL)), p_43.f0.f3)) < l_93), p_45.f2)) | l_68))) | p_43.f0.f1), (-1L))) , (void*)0);
            for (g_113 = 0; (g_113 <= 5); g_113 += 1)
            { 
                int32_t ****l_178 = (void*)0;
                int32_t **l_181 = &g_175;
                int32_t ***l_180 = &l_181;
                int32_t ****l_179 = &l_180;
                int i;
                l_151[g_113] = ((g_148 |= ((l_176 , ((g_48 , p_45) , (((**l_57) |= (p_45.f1 > (&p_47 != (((((void*)0 != l_177) , l_151[3]) , p_43.f0.f3) , &p_47)))) & 2UL))) || g_48.f0.f3)) , 0x1FC94526L);
                l_182 = ((*l_179) = (void*)0);
                if ((*p_44))
                    break;
            }
            (*l_184) = &l_167;
            for (l_93 = 0; (l_93 < (-9)); l_93 = safe_sub_func_int64_t_s_s(l_93, 2))
            { 
                int32_t *l_196 = &l_68;
                for (p_45.f2 = 0; (p_45.f2 <= 0); p_45.f2 = safe_add_func_uint64_t_u_u(p_45.f2, 1))
                { 
                    p_43.f0.f0 &= (l_151[1] , (safe_rshift_func_int16_t_s_s(((*p_44) >= ((p_43.f2 , (-1L)) >= 0UL)), (0xD158D1DA83384632LL && ((safe_mul_func_int16_t_s_s(g_10, g_48.f0.f1)) || 4294967290UL)))));
                    return &g_9;
                }
                (*l_183) = l_196;
                for (g_51 = 11; (g_51 < (-2)); g_51--)
                { 
                    (*l_183) = &l_151[g_98];
                }
                return &g_9;
            }
        }
        l_200 = ((*l_183) = &g_85);
        g_203 = g_201;
        if (((*g_175) = ((&g_152[0] == g_204) | (safe_rshift_func_int16_t_s_u(((*l_219) |= (safe_sub_func_int32_t_s_s((**p_46), ((*l_216) = ((*l_214) = ((safe_sub_func_int8_t_s_s(0xD2L, (((*p_44) != (!4L)) , ((safe_mul_func_int8_t_s_s((((*p_44) , g_48.f2) >= p_47), g_48.f0.f3)) != (*g_97))))) > g_8.f0)))))), g_203.f3)))))
        { 
            int64_t l_230 = 0x724E05431A1AE95ALL;
            int32_t l_255[3];
            int32_t **l_297 = &g_175;
            struct S2 *l_366 = &g_364;
            struct S2 **l_365[5][3][2] = {{{(void*)0,(void*)0},{(void*)0,&l_366},{(void*)0,(void*)0}},{{(void*)0,&l_366},{(void*)0,(void*)0},{(void*)0,&l_366}},{{(void*)0,(void*)0},{(void*)0,&l_366},{(void*)0,(void*)0}},{{(void*)0,&l_366},{(void*)0,(void*)0},{(void*)0,&l_366}},{{(void*)0,(void*)0},{(void*)0,&l_366},{(void*)0,(void*)0}}};
            struct S2 **l_367 = &l_366;
            int32_t **l_409[5][3] = {{&l_200,&g_175,&l_200},{&l_200,&g_175,&l_200},{&l_200,&g_175,&l_200},{&l_200,&g_175,&l_200},{&l_200,&g_175,&l_200}};
            struct S0 *l_417 = &g_203;
            uint32_t *l_419 = &g_48.f1;
            uint8_t *l_420 = &g_292[2][0];
            uint16_t *l_421 = &g_203.f1;
            int8_t *l_422 = &g_261;
            int64_t l_423 = 0xCDA6D40800FF412FLL;
            uint64_t *l_424 = &g_113;
            int i, j, k;
            for (i = 0; i < 3; i++)
                l_255[i] = 0xDA43A824L;
            if ((+(0xEED6L >= ((safe_add_func_uint64_t_u_u((((1L < (!0x1DE4584CL)) <= (safe_mul_func_int16_t_s_s(p_43.f0.f3, (~l_230)))) ^ g_203.f5), (safe_mul_func_int8_t_s_s(((safe_rshift_func_uint16_t_u_s((safe_mul_func_int8_t_s_s(g_201.f3, l_237[0][0])), g_113)) & l_238), g_203.f3)))) < g_48.f1))))
            { 
                int16_t l_242 = 1L;
                int32_t l_244 = 1L;
                struct S2 l_251 = {63,13,64,0,-3449};
                struct S0 *l_252 = (void*)0;
                struct S0 **l_253 = &l_202[2];
                uint8_t *l_256 = (void*)0;
                uint8_t *l_257 = &g_203.f2;
                int8_t *l_260 = &g_261;
                int32_t **l_262[5] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                int i;
                if ((*g_175))
                { 
                    uint8_t l_239 = 251UL;
                    (**l_183) = (l_239 != 0x55A550E5D44BBE2DLL);
                    return &g_175;
                }
                else
                { 
                    int32_t *l_240 = &l_147;
                    int32_t *l_241 = &l_151[0];
                    int32_t *l_243[3][6][5] = {{{&l_147,&g_85,&l_68,&l_147,&l_151[1]},{&l_93,(void*)0,&g_10,&g_85,&g_10},{&l_151[2],&l_151[2],&g_10,&g_10,&g_85},{&l_147,&g_85,&l_68,&g_203.f0,&g_85},{&g_85,&l_68,&l_68,&l_147,&l_147},{(void*)0,&g_85,&l_151[3],&l_93,&l_68}},{{(void*)0,&l_151[2],&l_147,&l_151[2],(void*)0},{(void*)0,(void*)0,&g_85,&l_147,&l_151[2]},{(void*)0,&g_85,&l_147,&g_85,&l_147},{&g_85,&l_147,&g_85,(void*)0,&l_151[2]},{&l_147,&g_85,(void*)0,(void*)0,(void*)0},{&l_151[2],&l_147,&l_151[2],(void*)0,&l_68}},{{&l_93,&l_151[3],&g_85,(void*)0,&l_147},{&l_147,&l_68,&l_68,&g_85,&g_85},{&g_203.f0,&l_68,&g_85,&l_147,&g_85},{&g_10,&g_10,&l_151[2],&l_151[2],&g_10},{&g_85,&g_10,(void*)0,&l_93,&l_151[1]},{&l_147,&l_68,&g_85,&l_147,&l_147}}};
                    int i, j, k;
                    l_245--;
                }
                (*g_175) ^= (safe_div_func_int8_t_s_s(((*l_260) = (((*l_219) = (l_250[1][0][1] != (l_251 , ((*l_253) = l_252)))) , (((p_43.f0.f0 > (!(l_255[2] = l_230))) , (*p_46)) == (((*l_257)--) , (*l_183))))), g_217));
                return l_262[2];
            }
            else
            { 
                int32_t l_284 = 0x875A03A1L;
                int32_t l_290 = 1L;
                int64_t **l_300 = &l_59;
                uint16_t *l_313 = &g_203.f1;
                uint32_t *l_316 = &g_148;
                struct S0 **l_362 = &l_202[2];
                if ((*g_9))
                { 
                    int32_t *l_263 = &l_238;
                    int32_t *l_264 = (void*)0;
                    int32_t *l_265 = &l_255[2];
                    int32_t *l_266 = &l_147;
                    int32_t l_267 = 0x3A748A06L;
                    int32_t *l_268 = &l_238;
                    int32_t *l_269 = &l_238;
                    int32_t *l_270 = &l_238;
                    int32_t *l_271 = &l_147;
                    int32_t *l_272 = &l_151[1];
                    int32_t *l_273 = &l_267;
                    int32_t *l_274 = &g_203.f0;
                    int32_t *l_275 = (void*)0;
                    int32_t *l_276 = &l_151[2];
                    int32_t *l_277 = &l_255[2];
                    int32_t *l_278 = &l_147;
                    int32_t *l_279 = &l_255[2];
                    int32_t *l_280 = &l_68;
                    int32_t *l_281 = &l_151[2];
                    int32_t *l_282 = (void*)0;
                    int32_t *l_283 = (void*)0;
                    int32_t *l_285 = &g_85;
                    int32_t *l_286 = &g_85;
                    int32_t *l_287 = &l_284;
                    int32_t *l_288 = &l_255[0];
                    int32_t *l_289[5][1][5] = {{{&g_203.f0,&g_203.f0,(void*)0,&l_255[2],(void*)0}},{{&l_151[0],(void*)0,(void*)0,&l_151[0],&g_203.f0}},{{&l_151[0],&l_255[2],&l_255[2],&l_255[2],&l_255[2]}},{{&g_203.f0,(void*)0,&l_255[2],(void*)0,(void*)0}},{{(void*)0,&g_203.f0,(void*)0,&l_255[2],(void*)0}}};
                    int i, j, k;
                    (*l_200) &= (((void*)0 != &g_85) > p_47);
                    ++g_292[2][0];
                }
                else
                { 
                    return l_199;
                }
                if (g_85)
                    goto lbl_368;
                for (l_245 = 28; (l_245 == 11); l_245--)
                { 
                    return l_297;
                }
                if (((safe_lshift_func_uint16_t_u_u((l_300 == (p_45.f0.f4 , l_301)), 13)) == ((*l_214) = (((safe_rshift_func_uint8_t_u_s((safe_mod_func_int64_t_s_s(((l_284 , p_43.f1) || ((*l_313) = ((((safe_add_func_uint64_t_u_u((safe_add_func_uint16_t_u_u(((+(((*l_219) = (safe_sub_func_int8_t_s_s((p_43.f1 , 0L), (**l_297)))) || p_45.f0.f4)) > p_45.f0.f4), p_43.f0.f2)), (*g_97))) , &g_152[0]) != &g_152[0]) , p_45.f0.f2))), p_45.f1)), g_48.f0.f4)) && (*g_175)) >= 5UL))))
                { 
                    const struct S3 l_327 = {{-775,0,41,-8,1653},0xBAF204E7L,1L};
                    int32_t *l_328 = &l_284;
                    (*l_328) |= (((safe_rshift_func_int8_t_s_u((l_316 == ((0xD32BL ^ p_43.f2) , &p_47)), (**l_297))) && (safe_rshift_func_uint8_t_u_u((safe_mod_func_uint64_t_u_u((safe_rshift_func_uint16_t_u_u(((*l_313) = 2UL), ((safe_rshift_func_uint8_t_u_u((safe_sub_func_uint8_t_u_u((l_327 , g_148), 0x17L)), p_43.f0.f1)) | 18446744073709551606UL))), g_48.f0.f0)), p_43.f0.f2))) & 0xC3L);
                    if (p_45.f1)
                        goto lbl_329;
lbl_329:
                    (*l_183) = &g_10;
                    (*l_328) ^= l_330;
                    (*l_200) = (g_203.f0 &= ((safe_add_func_uint32_t_u_u((safe_lshift_func_int8_t_s_s(p_45.f2, p_43.f0.f3)), ((*l_214) = (**l_297)))) != (*g_175)));
                }
                else
                { 
                    int8_t *l_350 = &g_261;
                    int32_t l_351 = 0xEF067A4AL;
                    int8_t *l_352 = &g_353;
                    int32_t *l_354 = &l_68;
                    (*l_354) |= ((((((*l_352) = (safe_div_func_int32_t_s_s((*p_44), (~(safe_div_func_int16_t_s_s((safe_lshift_func_int16_t_s_s((g_48.f0 , g_48.f0.f1), ((*l_219) |= (safe_div_func_int32_t_s_s(((((safe_sub_func_uint8_t_u_u(l_284, ((*l_350) = ((safe_mul_func_int8_t_s_s(g_203.f3, (safe_mod_func_int64_t_s_s(((p_45.f0.f0 != ((*l_214) = ((void*)0 != (*l_57)))) , 0x051E2B1555576E56LL), 0xA1B5D2C1E1AD1306LL)))) == p_45.f0.f2)))) & (**l_297)) || g_201.f2) ^ g_203.f2), l_351))))), g_291)))))) ^ 0x79L) , p_45.f0.f3) && g_48.f0.f0) ^ (**l_297));
                    (**l_183) = (+((*p_44) ^ (g_217 < (((safe_rshift_func_uint16_t_u_u(p_43.f1, (**l_297))) < p_45.f0.f4) != (l_214 != &p_47)))));
                    (*l_200) = (((safe_add_func_int64_t_s_s((safe_lshift_func_uint8_t_u_u(255UL, 6)), g_85)) != (**l_297)) != ((-1L) != (*g_175)));
                }
                (*l_362) = &g_203;
            }
lbl_368:
            (*l_367) = g_363[1][0][0];
            for (l_238 = 23; (l_238 < (-13)); l_238 = safe_sub_func_int16_t_s_s(l_238, 7))
            { 
                uint16_t l_374 = 65535UL;
                uint32_t * const ****l_397 = &l_394[0];
                if ((+4294967292UL))
                { 
                    int32_t *l_372 = &l_255[2];
                    int32_t *l_373[1];
                    int i;
                    for (i = 0; i < 1; i++)
                        l_373[i] = &l_330;
                    --l_374;
                    if ((*g_175))
                        continue;
                    if (l_377)
                        continue;
                    if (l_374)
                        break;
                }
                else
                { 
                    uint8_t *l_382 = &g_292[2][0];
                    uint8_t *l_392 = &g_203.f2;
                    int32_t *l_393[1][4][3] = {{{&l_151[4],&l_68,&g_203.f0},{&l_68,&l_68,&l_68},{&l_151[4],(void*)0,&g_203.f0},{&l_151[4],&l_151[4],(void*)0}}};
                    int i, j, k;
                    p_45.f0.f0 = (safe_mod_func_uint8_t_u_u(((((safe_lshift_func_uint8_t_u_s((((0x57L > ((*l_382) = g_201.f1)) && g_201.f0) ^ ((*l_200) = (*g_9))), 1)) && 0x3722L) | (safe_mul_func_int8_t_s_s((safe_add_func_int32_t_s_s((((g_201.f5 >= (!(safe_add_func_uint64_t_u_u((safe_mul_func_int16_t_s_s((((((*l_392) = (0UL && g_10)) && p_45.f0.f2) | l_374) || g_201.f2), 9UL)), p_43.f0.f2)))) && 0L) < p_45.f1), l_374)), 0L))) & (-1L)), g_364.f3));
                }
                (*l_397) = l_394[0];
                return &g_175;
            }
            if (((safe_unary_minus_func_uint64_t_u((safe_rshift_func_int8_t_s_u((((**l_183) != ((*l_424) |= (safe_mul_func_uint8_t_u_u(((18446744073709551611UL == ((safe_sub_func_int32_t_s_s((safe_sub_func_int32_t_s_s(((safe_lshift_func_int8_t_s_u(((*l_422) ^= (((*p_46) == (p_44 = (*p_46))) <= (((safe_lshift_func_uint8_t_u_s(((*l_420) = ((((((*l_419) = (safe_add_func_uint16_t_u_u((safe_rshift_func_uint8_t_u_u(((safe_unary_minus_func_uint16_t_u((((g_48.f1 , l_202[2]) != (g_418 = l_417)) == 0xD19EL))) ^ (-1L)), p_43.f0.f3)), 0xC3A3L))) , 0xDDB8L) < p_45.f0.f2) , (**l_297)) != 0xC5L)), g_148)) , (void*)0) == l_421))), 1)) & p_45.f0.f1), (-1L))), p_43.f0.f0)) > g_364.f2)) & (**p_46)), l_423)))) <= p_43.f0.f3), 2)))) <= p_45.f0.f3))
            { 
                uint8_t l_425 = 248UL;
                struct S0 l_430 = {0xEC49B3EFL,0xE3C6L,4UL,223,0x7B58C1B3L,1822};
                int8_t l_469 = 0xDDL;
                const int8_t l_470 = 1L;
                uint64_t l_471 = 0xBB03409328FAB7A7LL;
                uint32_t **l_474 = (void*)0;
                uint32_t ** const *l_473 = &l_474;
                int32_t ** const *l_479[5][2];
                int32_t ** const **l_478 = &l_479[4][0];
                int i, j;
                for (i = 0; i < 5; i++)
                {
                    for (j = 0; j < 2; j++)
                        l_479[i][j] = &l_409[4][2];
                }
                for (l_230 = 0; (l_230 >= 0); l_230 -= 1)
                { 
                    uint16_t l_431[2][3][1] = {{{7UL},{0x99A6L},{7UL}},{{0x99A6L},{7UL},{0x99A6L}}};
                    uint64_t l_434 = 0x5A02E60B7A04B492LL;
                    int i, j, k;
                    --l_425;
                    l_428 = l_428;
                    (*l_417) = l_430;
                    l_431[1][0][0]--;
                    l_434++;
                }
                if (l_425)
                    goto lbl_445;
                if (((l_151[5] ^= ((safe_rshift_func_int8_t_s_s(((((((**l_367) , &g_261) != (void*)0) & (((safe_mod_func_int64_t_s_s((l_441 , (**l_297)), (safe_rshift_func_uint16_t_u_u(0xB48CL, ((~g_48.f0.f0) , p_45.f2))))) , (**l_183)) || g_148)) == 0L) , g_203.f3), p_43.f0.f0)) > (**p_46))) | 1UL))
                { 
lbl_445:
                    p_44 = &g_85;
                    g_175 = &g_85;
                    (*g_175) = (*g_175);
                    l_68 |= (safe_sub_func_uint32_t_u_u(3UL, (!(p_43.f0.f4 = (((safe_sub_func_int8_t_s_s(((**p_46) <= (safe_add_func_int64_t_s_s(p_45.f0.f3, ((((safe_div_func_int32_t_s_s((**l_183), ((*g_153) & (safe_mul_func_uint8_t_u_u((safe_sub_func_uint32_t_u_u((p_47 ^= (safe_div_func_uint32_t_u_u(((p_43.f2 , (safe_add_func_int32_t_s_s(((safe_lshift_func_int16_t_s_s(((((safe_add_func_uint32_t_u_u(((safe_mod_func_uint16_t_u_u((&p_44 == &g_175), l_430.f3)) , p_45.f0.f1), l_469)) <= (**p_46)) & l_470) != g_48.f0.f0), l_471)) & l_472), 1L))) <= (-1L)), 4294967295UL))), 0x06FB2C72L)), g_48.f1))))) , (void*)0) != l_473) ^ 0xD8F0L)))), g_292[2][0])) , g_475) != l_478)))));
                }
                else
                { 
                    (*g_476) = (*g_476);
                }
                (*l_200) = ((safe_lshift_func_uint8_t_u_s((safe_rshift_func_uint16_t_u_s(((*l_421)--), (****l_478))), 4)) | ((**l_301) = ((!((safe_add_func_int32_t_s_s(((safe_lshift_func_int16_t_s_u(g_261, ((((((g_203.f5 < ((safe_add_func_uint64_t_u_u((safe_add_func_int16_t_s_s(((0x857CA6B2L & ((safe_rshift_func_int8_t_s_s((((*l_420) |= g_203.f3) ^ (safe_div_func_int8_t_s_s(0x74L, (safe_mod_func_uint32_t_u_u((p_47 = ((safe_mod_func_uint32_t_u_u((safe_sub_func_int32_t_s_s((p_45.f0.f1 = ((((safe_div_func_int64_t_s_s((&l_471 == (void*)0), (**l_297))) >= (*g_9)) || p_43.f0.f0) == 9UL)), l_507)), (*p_44))) < 0xE7L)), (**p_46)))))), p_43.f0.f1)) , (*g_9))) == p_43.f0.f1), 0x91D6L)), (*g_97))) && 0x56D31851BF9D6B5CLL)) & 65535UL) , 1L) || g_201.f3) <= 0L) || (*l_200)))) , (***g_476)), (****g_475))) || 0x68A1L)) ^ g_148)));
            }
            else
            { 
                (*l_183) = (void*)0;
            }
        }
        else
        { 
            struct S2 *l_513 = &g_364;
            struct S2 *l_514 = &g_364;
            struct S2 **l_515[7][5] = {{&l_514,&l_514,&l_514,&l_514,&l_514},{&l_513,(void*)0,&l_514,&l_514,&l_514},{&l_514,&l_513,&l_514,&l_513,&l_514},{&l_513,&l_513,&l_514,&l_514,&l_514},{&l_514,&l_514,&l_514,&l_514,&l_514},{(void*)0,&l_514,&l_514,&l_514,(void*)0},{&l_514,&l_514,&l_514,(void*)0,&l_513}};
            int16_t **l_523 = &l_218;
            int8_t *l_524[1];
            int32_t l_525[5];
            int i, j;
            for (i = 0; i < 1; i++)
                l_524[i] = &g_353;
            for (i = 0; i < 5; i++)
                l_525[i] = 0L;
lbl_528:
            for (g_48.f2 = (-29); (g_48.f2 != 11); g_48.f2++)
            { 
                int32_t *l_510 = &l_147;
                (***g_475) = l_510;
            }
            if ((((safe_div_func_uint8_t_u_u(((((l_513 == (l_518[2] = (g_516 = l_514))) != (0x8ACAL != (safe_mod_func_uint8_t_u_u(((****g_475) , g_148), (l_525[2] ^= (((*l_523) = l_522) != (void*)0)))))) , (**l_183)) != 0x5CC06E60L), p_45.f2)) >= 249UL) <= g_292[2][0]))
            { 
                union U4 l_536 = {3UL};
                for (g_98 = 0; (g_98 < 16); g_98 = safe_add_func_uint64_t_u_u(g_98, 4))
                { 
                    if ((**p_46))
                        break;
                }
                if (g_203.f5)
                    goto lbl_528;
                l_93 &= (g_203.f1 ^ ((~(g_201.f0 , ((**l_183) = (safe_mod_func_int64_t_s_s(((**l_301) = (safe_rshift_func_uint8_t_u_u(((((p_43.f2 <= (safe_mul_func_int16_t_s_s((l_536 , (((((~(-1L)) , (((*g_97) < 0x63AF954FF1F9397BLL) ^ p_43.f0.f1)) , 0L) | p_45.f0.f1) , p_43.f0.f2)), 0xCD03L))) , 0x4BL) || (*l_200)) == (*g_97)), 4))), (-1L)))))) >= p_43.f1));
            }
            else
            { 
                int32_t * const *l_544 = &g_9;
                int32_t * const **l_543 = &l_544;
                int32_t * const ***l_542 = &l_543;
                for (l_377 = 5; (l_377 != 19); l_377 = safe_add_func_int16_t_s_s(l_377, 2))
                { 
                    struct S3 *l_540 = &g_48;
                    struct S3 **l_541 = &l_540;
                    if (g_364.f2)
                        goto lbl_528;
                    (*l_541) = l_540;
                }
                (*l_200) ^= (l_542 == &l_543);
            }
        }
    }
    ++l_552;
    return g_556;
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_8.f0, "g_8.f0", print_hash_value);
    transparent_crc(g_10, "g_10", print_hash_value);
    transparent_crc(g_48.f0.f0, "g_48.f0.f0", print_hash_value);
    transparent_crc(g_48.f0.f1, "g_48.f0.f1", print_hash_value);
    transparent_crc(g_48.f0.f2, "g_48.f0.f2", print_hash_value);
    transparent_crc(g_48.f0.f3, "g_48.f0.f3", print_hash_value);
    transparent_crc(g_48.f0.f4, "g_48.f0.f4", print_hash_value);
    transparent_crc(g_48.f1, "g_48.f1", print_hash_value);
    transparent_crc(g_48.f2, "g_48.f2", print_hash_value);
    transparent_crc(g_51, "g_51", print_hash_value);
    transparent_crc(g_85, "g_85", print_hash_value);
    transparent_crc(g_98, "g_98", print_hash_value);
    transparent_crc(g_113, "g_113", print_hash_value);
    transparent_crc(g_148, "g_148", print_hash_value);
    transparent_crc(g_201.f0, "g_201.f0", print_hash_value);
    transparent_crc(g_201.f1, "g_201.f1", print_hash_value);
    transparent_crc(g_201.f2, "g_201.f2", print_hash_value);
    transparent_crc(g_201.f3, "g_201.f3", print_hash_value);
    transparent_crc(g_201.f4, "g_201.f4", print_hash_value);
    transparent_crc(g_201.f5, "g_201.f5", print_hash_value);
    transparent_crc(g_203.f0, "g_203.f0", print_hash_value);
    transparent_crc(g_203.f1, "g_203.f1", print_hash_value);
    transparent_crc(g_203.f2, "g_203.f2", print_hash_value);
    transparent_crc(g_203.f3, "g_203.f3", print_hash_value);
    transparent_crc(g_203.f4, "g_203.f4", print_hash_value);
    transparent_crc(g_203.f5, "g_203.f5", print_hash_value);
    transparent_crc(g_217, "g_217", print_hash_value);
    transparent_crc(g_220, "g_220", print_hash_value);
    transparent_crc(g_261, "g_261", print_hash_value);
    transparent_crc(g_291, "g_291", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 5; j++)
        {
            transparent_crc(g_292[i][j], "g_292[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_353, "g_353", print_hash_value);
    transparent_crc(g_364.f0, "g_364.f0", print_hash_value);
    transparent_crc(g_364.f1, "g_364.f1", print_hash_value);
    transparent_crc(g_364.f2, "g_364.f2", print_hash_value);
    transparent_crc(g_364.f3, "g_364.f3", print_hash_value);
    transparent_crc(g_364.f4, "g_364.f4", print_hash_value);
    transparent_crc(g_517.f0, "g_517.f0", print_hash_value);
    transparent_crc(g_517.f1, "g_517.f1", print_hash_value);
    transparent_crc(g_517.f2, "g_517.f2", print_hash_value);
    transparent_crc(g_517.f3, "g_517.f3", print_hash_value);
    transparent_crc(g_517.f4, "g_517.f4", print_hash_value);
    transparent_crc(g_519.f0, "g_519.f0", print_hash_value);
    transparent_crc(g_519.f1, "g_519.f1", print_hash_value);
    transparent_crc(g_519.f2, "g_519.f2", print_hash_value);
    transparent_crc(g_519.f3, "g_519.f3", print_hash_value);
    transparent_crc(g_519.f4, "g_519.f4", print_hash_value);
    transparent_crc(g_587, "g_587", print_hash_value);
    transparent_crc(g_674, "g_674", print_hash_value);
    transparent_crc(g_693, "g_693", print_hash_value);
    transparent_crc(g_758, "g_758", print_hash_value);
    transparent_crc(g_759, "g_759", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transparent_crc(g_786[i][j], "g_786[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_923.f0, "g_923.f0", print_hash_value);
    transparent_crc(g_1070, "g_1070", print_hash_value);
    transparent_crc(g_1071, "g_1071", print_hash_value);
    transparent_crc(g_1182, "g_1182", print_hash_value);
    transparent_crc(g_1207, "g_1207", print_hash_value);
    transparent_crc(g_1351, "g_1351", print_hash_value);
    transparent_crc(g_1384.f0, "g_1384.f0", print_hash_value);
    transparent_crc(g_1450, "g_1450", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 7; k++)
            {
                transparent_crc(g_1643[i][j][k], "g_1643[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_1745, "g_1745", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(g_1891[i].f0, "g_1891[i].f0", print_hash_value);
        transparent_crc(g_1891[i].f1, "g_1891[i].f1", print_hash_value);
        transparent_crc(g_1891[i].f2, "g_1891[i].f2", print_hash_value);
        transparent_crc(g_1891[i].f3, "g_1891[i].f3", print_hash_value);
        transparent_crc(g_1891[i].f4, "g_1891[i].f4", print_hash_value);

    }
    transparent_crc(g_1893.f0, "g_1893.f0", print_hash_value);
    transparent_crc(g_1893.f1, "g_1893.f1", print_hash_value);
    transparent_crc(g_1893.f2, "g_1893.f2", print_hash_value);
    transparent_crc(g_1893.f3, "g_1893.f3", print_hash_value);
    transparent_crc(g_1893.f4, "g_1893.f4", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 4; k++)
            {
                transparent_crc(g_2041[i][j][k], "g_2041[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_2106.f0, "g_2106.f0", print_hash_value);
    transparent_crc(g_2106.f1, "g_2106.f1", print_hash_value);
    transparent_crc(g_2106.f2, "g_2106.f2", print_hash_value);
    transparent_crc(g_2106.f3, "g_2106.f3", print_hash_value);
    transparent_crc(g_2106.f4, "g_2106.f4", print_hash_value);
    transparent_crc(g_2108.f0, "g_2108.f0", print_hash_value);
    transparent_crc(g_2108.f1, "g_2108.f1", print_hash_value);
    transparent_crc(g_2108.f2, "g_2108.f2", print_hash_value);
    transparent_crc(g_2108.f3, "g_2108.f3", print_hash_value);
    transparent_crc(g_2108.f4, "g_2108.f4", print_hash_value);
    transparent_crc(g_2240.f0, "g_2240.f0", print_hash_value);
    transparent_crc(g_2240.f1, "g_2240.f1", print_hash_value);
    transparent_crc(g_2240.f2, "g_2240.f2", print_hash_value);
    transparent_crc(g_2240.f3, "g_2240.f3", print_hash_value);
    transparent_crc(g_2240.f4, "g_2240.f4", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            transparent_crc(g_2258[i][j].f0.f0, "g_2258[i][j].f0.f0", print_hash_value);
            transparent_crc(g_2258[i][j].f0.f1, "g_2258[i][j].f0.f1", print_hash_value);
            transparent_crc(g_2258[i][j].f0.f2, "g_2258[i][j].f0.f2", print_hash_value);
            transparent_crc(g_2258[i][j].f0.f3, "g_2258[i][j].f0.f3", print_hash_value);
            transparent_crc(g_2258[i][j].f0.f4, "g_2258[i][j].f0.f4", print_hash_value);
            transparent_crc(g_2258[i][j].f1, "g_2258[i][j].f1", print_hash_value);
            transparent_crc(g_2258[i][j].f2, "g_2258[i][j].f2", print_hash_value);

        }
    }
    transparent_crc(g_2265, "g_2265", print_hash_value);
    transparent_crc(g_2279, "g_2279", print_hash_value);
    transparent_crc(g_2345, "g_2345", print_hash_value);
    transparent_crc(g_2360, "g_2360", print_hash_value);
    transparent_crc(g_2487, "g_2487", print_hash_value);
    transparent_crc(g_2602, "g_2602", print_hash_value);
    transparent_crc(g_2618, "g_2618", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
