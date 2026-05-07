// SPDX-License-Identifier: MIT
// cctest_csmith_52be655e.c --- cctest case csmith_52be655e (csmith seed 1388209502)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0xc3f598b0 */

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

// Options:   -s 1388209502 -o /tmp/csmith_gen_urjv7g81/csmith.c --concise --no-volatiles --no-volatile-pointers --max-funcs 8 --max-block-size 5 --max-block-depth 4 --max-expr-complexity 8 --max-array-dim 3 --max-array-len-per-dim 7 --max-struct-fields 8 --max-union-fields 5

static long __undefined;


#pragma pack(push)
#pragma pack(1)
struct S0 {
   const signed f0 : 29;
   unsigned f1 : 30;
   signed f2 : 8;
   signed f3 : 20;
   unsigned f4 : 19;
   const uint16_t  f5;
   int16_t  f6;
   const signed f7 : 14;
};
#pragma pack(pop)

union U1 {
   uint16_t  f0;
   uint64_t  f1;
   int32_t  f2;
   uint64_t  f3;
   uint16_t  f4;
};


static int8_t g_2 = 1L;
static uint32_t g_20 = 0xCB8F2BA1L;
static uint32_t g_33 = 0UL;
static uint32_t *g_32[7][2] = {{(void*)0,&g_33},{&g_33,(void*)0},{&g_33,&g_33},{(void*)0,&g_33},{&g_33,(void*)0},{&g_33,&g_33},{(void*)0,&g_33}};
static union U1 g_40 = {0x86FFL};
static int32_t g_57 = 0x65E139A5L;
static uint64_t g_70 = 1UL;
static struct S0 g_78[5][6][7] = {{{{7924,20205,-7,549,221,65533UL,0x67B6L,-119},{14817,27676,-9,495,549,2UL,0x3B4CL,-76},{-12939,25350,12,259,6,65535UL,-5L,-24},{2997,24303,15,868,75,0x6C7BL,1L,-78},{15813,8517,3,379,301,0xDB8BL,0x448DL,-7},{-14031,22775,-4,67,324,0x7AC3L,0xA883L,-34},{8472,31343,4,508,402,0xCAA0L,-10L,-61}},{{-10217,17066,4,361,168,65530UL,0L,103},{16952,7126,-15,49,364,65528UL,0x9494L,-114},{949,3999,-4,489,552,0x54EEL,5L,-87},{-14031,22775,-4,67,324,0x7AC3L,0xA883L,-34},{-12960,26594,10,-260,127,65535UL,1L,-126},{21723,8292,-10,674,558,65535UL,0xDEF2L,117},{20358,14066,-4,-74,508,0x87CDL,0xC510L,115}},{{-10217,17066,4,361,168,65530UL,0L,103},{21723,8292,-10,674,558,65535UL,0xDEF2L,117},{1335,8346,1,-721,109,0xD3EEL,0x732AL,92},{14817,27676,-9,495,549,2UL,0x3B4CL,-76},{11607,2973,-1,-79,333,6UL,2L,1},{14817,27676,-9,495,549,2UL,0x3B4CL,-76},{1335,8346,1,-721,109,0xD3EEL,0x732AL,92}},{{7924,20205,-7,549,221,65533UL,0x67B6L,-119},{7924,20205,-7,549,221,65533UL,0x67B6L,-119},{22362,4657,9,190,121,0xD9BFL,0xD75DL,-107},{-17242,6486,11,458,569,65529UL,-1L,113},{-12155,26001,2,802,589,0x536CL,1L,-53},{20588,16008,-6,-88,62,0UL,9L,-100},{21723,8292,-10,674,558,65535UL,0xDEF2L,117}},{{-12155,26001,2,802,589,0x536CL,1L,-53},{14701,26365,-9,-516,444,0xD43EL,0xB0C5L,-125},{9871,22499,3,-698,61,0UL,0x3F3FL,-18},{-19277,26193,-14,-880,130,65530UL,-8L,-25},{-14031,22775,-4,67,324,0x7AC3L,0xA883L,-34},{22681,31682,13,975,111,1UL,0x3C96L,-58},{8472,31343,4,508,402,0xCAA0L,-10L,-61}},{{14817,27676,-9,495,549,2UL,0x3B4CL,-76},{-12960,26594,10,-260,127,65535UL,1L,-126},{8988,18389,2,-471,174,0UL,0xDD5FL,43},{1267,7052,3,-900,434,65531UL,0L,113},{7212,5306,5,712,290,65533UL,-10L,-71},{20358,14066,-4,-74,508,0x87CDL,0xC510L,115},{13189,8853,-14,-281,38,0UL,0x9760L,-51}}},{{{-12939,25350,12,259,6,65535UL,-5L,-24},{2917,11245,13,-151,632,1UL,1L,48},{7212,5306,5,712,290,65533UL,-10L,-71},{2997,24303,15,868,75,0x6C7BL,1L,-78},{-18699,20535,-4,-90,723,0xE19AL,0xA967L,125},{-5584,6812,6,106,723,0x93EBL,0xB3EEL,15},{21723,8292,-10,674,558,65535UL,0xDEF2L,117}},{{8472,31343,4,508,402,0xCAA0L,-10L,-61},{1821,30227,-2,916,650,0x99CBL,0x132CL,-89},{-10752,24048,4,-389,529,0xA069L,-1L,72},{-10217,17066,4,361,168,65530UL,0L,103},{9871,22499,3,-698,61,0UL,0x3F3FL,-18},{11607,2973,-1,-79,333,6UL,2L,1},{22681,31682,13,975,111,1UL,0x3C96L,-58}},{{20358,14066,-4,-74,508,0x87CDL,0xC510L,115},{1821,30227,-2,916,650,0x99CBL,0x132CL,-89},{-12155,26001,2,802,589,0x536CL,1L,-53},{12690,22905,6,261,122,0x2BC1L,0x5235L,-14},{-17242,6486,11,458,569,65529UL,-1L,113},{-17242,6486,11,458,569,65529UL,-1L,113},{12690,22905,6,261,122,0x2BC1L,0x5235L,-14}},{{1335,8346,1,-721,109,0xD3EEL,0x732AL,92},{2917,11245,13,-151,632,1UL,1L,48},{1335,8346,1,-721,109,0xD3EEL,0x732AL,92},{9871,22499,3,-698,61,0UL,0x3F3FL,-18},{8472,31343,4,508,402,0xCAA0L,-10L,-61},{-11073,10833,-10,-359,108,1UL,0xF9A5L,33},{-17242,6486,11,458,569,65529UL,-1L,113}},{{21723,8292,-10,674,558,65535UL,0xDEF2L,117},{-12960,26594,10,-260,127,65535UL,1L,-126},{-14031,22775,-4,67,324,0x7AC3L,0xA883L,-34},{949,3999,-4,489,552,0x54EEL,5L,-87},{16952,7126,-15,49,364,65528UL,0x9494L,-114},{-10217,17066,4,361,168,65530UL,0L,103},{10724,17834,8,599,644,0UL,0x6611L,70}},{{-11910,27249,4,-616,63,0xBE65L,0x606BL,77},{949,3999,-4,489,552,0x54EEL,5L,-87},{20358,14066,-4,-74,508,0x87CDL,0xC510L,115},{7924,20205,-7,549,221,65533UL,0x67B6L,-119},{14701,26365,-9,-516,444,0xD43EL,0xB0C5L,-125},{-11073,10833,-10,-359,108,1UL,0xF9A5L,33},{20588,16008,-6,-88,62,0UL,9L,-100}}},{{{17235,4267,12,-338,85,0x62C3L,0xCCD5L,-16},{-2562,4249,-11,-490,695,0UL,0xF2AEL,76},{15813,8517,3,379,301,0xDB8BL,0x448DL,-7},{-493,10668,2,377,273,0x2858L,0x8E8BL,-95},{11607,2973,-1,-79,333,6UL,2L,1},{-17242,6486,11,458,569,65529UL,-1L,113},{-12960,26594,10,-260,127,65535UL,1L,-126}},{{-493,10668,2,377,273,0x2858L,0x8E8BL,-95},{14817,27676,-9,495,549,2UL,0x3B4CL,-76},{12690,22905,6,261,122,0x2BC1L,0x5235L,-14},{-19277,26193,-14,-880,130,65530UL,-8L,-25},{2997,24303,15,868,75,0x6C7BL,1L,-78},{11607,2973,-1,-79,333,6UL,2L,1},{17235,4267,12,-338,85,0x62C3L,0xCCD5L,-16}},{{2917,11245,13,-151,632,1UL,1L,48},{17235,4267,12,-338,85,0x62C3L,0xCCD5L,-16},{12690,22905,6,261,122,0x2BC1L,0x5235L,-14},{-12939,25350,12,259,6,65535UL,-5L,-24},{7924,20205,-7,549,221,65533UL,0x67B6L,-119},{-5584,6812,6,106,723,0x93EBL,0xB3EEL,15},{7924,20205,-7,549,221,65533UL,0x67B6L,-119}},{{22681,31682,13,975,111,1UL,0x3C96L,-58},{15813,8517,3,379,301,0xDB8BL,0x448DL,-7},{15813,8517,3,379,301,0xDB8BL,0x448DL,-7},{22681,31682,13,975,111,1UL,0x3C96L,-58},{20588,16008,-6,-88,62,0UL,9L,-100},{20358,14066,-4,-74,508,0x87CDL,0xC510L,115},{17474,5012,-8,-399,266,0xB986L,0xF533L,-6}},{{15813,8517,3,379,301,0xDB8BL,0x448DL,-7},{14701,26365,-9,-516,444,0xD43EL,0xB0C5L,-125},{20358,14066,-4,-74,508,0x87CDL,0xC510L,115},{-2562,4249,-11,-490,695,0UL,0xF2AEL,76},{-12939,25350,12,259,6,65535UL,-5L,-24},{22681,31682,13,975,111,1UL,0x3C96L,-58},{-16849,29003,13,-152,41,0x26A2L,-1L,-72}},{{1821,30227,-2,916,650,0x99CBL,0x132CL,-89},{21723,8292,-10,674,558,65535UL,0xDEF2L,117},{-14031,22775,-4,67,324,0x7AC3L,0xA883L,-34},{1798,22259,-13,918,89,65531UL,0x119CL,-120},{-2562,4249,-11,-490,695,0UL,0xF2AEL,76},{-12155,26001,2,802,589,0x536CL,1L,-53},{17474,5012,-8,-399,266,0xB986L,0xF533L,-6}}},{{{9871,22499,3,-698,61,0UL,0x3F3FL,-18},{7212,5306,5,712,290,65533UL,-10L,-71},{1335,8346,1,-721,109,0xD3EEL,0x732AL,92},{-10752,24048,4,-389,529,0xA069L,-1L,72},{21723,8292,-10,674,558,65535UL,0xDEF2L,117},{15813,8517,3,379,301,0xDB8BL,0x448DL,-7},{7924,20205,-7,549,221,65533UL,0x67B6L,-119}},{{-14031,22775,-4,67,324,0x7AC3L,0xA883L,-34},{1267,7052,3,-900,434,65531UL,0L,113},{-12155,26001,2,802,589,0x536CL,1L,-53},{-5584,6812,6,106,723,0x93EBL,0xB3EEL,15},{-16849,29003,13,-152,41,0x26A2L,-1L,-72},{14817,27676,-9,495,549,2UL,0x3B4CL,-76},{17235,4267,12,-338,85,0x62C3L,0xCCD5L,-16}},{{16952,7126,-15,49,364,65528UL,0x9494L,-114},{-18699,20535,-4,-90,723,0xE19AL,0xA967L,125},{-10752,24048,4,-389,529,0xA069L,-1L,72},{-5584,6812,6,106,723,0x93EBL,0xB3EEL,15},{-493,10668,2,377,273,0x2858L,0x8E8BL,-95},{-12960,26594,10,-260,127,65535UL,1L,-126},{-12960,26594,10,-260,127,65535UL,1L,-126}},{{12690,22905,6,261,122,0x2BC1L,0x5235L,-14},{-10752,24048,4,-389,529,0xA069L,-1L,72},{7212,5306,5,712,290,65533UL,-10L,-71},{-10752,24048,4,-389,529,0xA069L,-1L,72},{12690,22905,6,261,122,0x2BC1L,0x5235L,-14},{-18699,20535,-4,-90,723,0xE19AL,0xA967L,125},{20588,16008,-6,-88,62,0UL,9L,-100}},{{-5584,6812,6,106,723,0x93EBL,0xB3EEL,15},{-12939,25350,12,259,6,65535UL,-5L,-24},{8988,18389,2,-471,174,0UL,0xDD5FL,43},{1798,22259,-13,918,89,65531UL,0x119CL,-120},{1267,7052,3,-900,434,65531UL,0L,113},{-19277,26193,-14,-880,130,65530UL,-8L,-25},{10724,17834,8,599,644,0UL,0x6611L,70}},{{-19277,26193,-14,-880,130,65530UL,-8L,-25},{13189,8853,-14,-281,38,0UL,0x9760L,-51},{20588,16008,-6,-88,62,0UL,9L,-100},{-2562,4249,-11,-490,695,0UL,0xF2AEL,76},{8988,18389,2,-471,174,0UL,0xDD5FL,43},{9871,22499,3,-698,61,0UL,0x3F3FL,-18},{-17242,6486,11,458,569,65529UL,-1L,113}}},{{{-5584,6812,6,106,723,0x93EBL,0xB3EEL,15},{1798,22259,-13,918,89,65531UL,0x119CL,-120},{-10217,17066,4,361,168,65530UL,0L,103},{22681,31682,13,975,111,1UL,0x3C96L,-58},{-11073,10833,-10,-359,108,1UL,0xF9A5L,33},{16952,7126,-15,49,364,65528UL,0x9494L,-114},{12690,22905,6,261,122,0x2BC1L,0x5235L,-14}},{{12690,22905,6,261,122,0x2BC1L,0x5235L,-14},{8472,31343,4,508,402,0xCAA0L,-10L,-61},{1798,22259,-13,918,89,65531UL,0x119CL,-120},{-12939,25350,12,259,6,65535UL,-5L,-24},{17474,5012,-8,-399,266,0xB986L,0xF533L,-6},{2917,11245,13,-151,632,1UL,1L,48},{22681,31682,13,975,111,1UL,0x3C96L,-58}},{{16952,7126,-15,49,364,65528UL,0x9494L,-114},{-12155,26001,2,802,589,0x536CL,1L,-53},{-12939,25350,12,259,6,65535UL,-5L,-24},{-19277,26193,-14,-880,130,65530UL,-8L,-25},{17474,5012,-8,-399,266,0xB986L,0xF533L,-6},{-16849,29003,13,-152,41,0x26A2L,-1L,-72},{21723,8292,-10,674,558,65535UL,0xDEF2L,117}},{{-14031,22775,-4,67,324,0x7AC3L,0xA883L,-34},{-11073,10833,-10,-359,108,1UL,0xF9A5L,33},{-493,10668,2,377,273,0x2858L,0x8E8BL,-95},{-493,10668,2,377,273,0x2858L,0x8E8BL,-95},{-11073,10833,-10,-359,108,1UL,0xF9A5L,33},{-14031,22775,-4,67,324,0x7AC3L,0xA883L,-34},{13189,8853,-14,-281,38,0UL,0x9760L,-51}},{{9871,22499,3,-698,61,0UL,0x3F3FL,-18},{-16849,29003,13,-152,41,0x26A2L,-1L,-72},{-12960,26594,10,-260,127,65535UL,1L,-126},{7924,20205,-7,549,221,65533UL,0x67B6L,-119},{8988,18389,2,-471,174,0UL,0xDD5FL,43},{20588,16008,-6,-88,62,0UL,9L,-100},{8472,31343,4,508,402,0xCAA0L,-10L,-61}},{{1821,30227,-2,916,650,0x99CBL,0x132CL,-89},{9871,22499,3,-698,61,0UL,0x3F3FL,-18},{-11073,10833,-10,-359,108,1UL,0xF9A5L,33},{949,3999,-4,489,552,0x54EEL,5L,-87},{1267,7052,3,-900,434,65531UL,0L,113},{22362,4657,9,190,121,0xD9BFL,0xD75DL,-107},{14817,27676,-9,495,549,2UL,0x3B4CL,-76}}}};
static int8_t g_81[4] = {(-1L),(-1L),(-1L),(-1L)};
static uint32_t g_89 = 0x361CED51L;
static int16_t g_101 = 0x5ECFL;
static union U1 *g_105[6] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
static uint8_t g_122 = 9UL;
static uint32_t g_141[3][7] = {{0x2C773C3FL,0UL,0UL,0x2C773C3FL,0x2C773C3FL,0xD8F89870L,4294967286UL},{0x16DF6E39L,4294967286UL,0xD8F89870L,0x2C773C3FL,0x2C773C3FL,0xD8F89870L,4294967286UL},{0x16DF6E39L,4294967286UL,0xD8F89870L,0x2C773C3FL,0x2C773C3FL,0xD8F89870L,4294967286UL}};
static const struct S0 g_143 = {-8670,10647,8,-807,415,65534UL,0x7741L,57};
static uint64_t *g_176 = &g_70;
static uint64_t **g_175[6] = {&g_176,&g_176,&g_176,&g_176,&g_176,&g_176};
static const int32_t *g_183[4][3] = {{&g_57,&g_57,&g_57},{&g_57,&g_57,&g_57},{&g_57,&g_57,&g_57},{&g_57,&g_57,&g_57}};
static const int32_t **g_182 = &g_183[2][0];
static int64_t g_189 = 0x045812C5D437E483LL;
static union U1 **g_195 = &g_105[1];
static int32_t g_206 = 0L;
static int32_t g_219 = 0x3CA83351L;
static int8_t g_222 = (-1L);
static union U1 g_283 = {0xA9C1L};
static union U1 *g_282 = &g_283;
static uint64_t g_301 = 18446744073709551608UL;
static uint32_t g_327 = 4294967290UL;
static int32_t *g_333 = &g_57;
static int32_t **g_332 = &g_333;
static uint8_t g_349 = 246UL;
static int8_t * const g_353[1][4][2] = {{{&g_222,&g_222},{&g_222,&g_222},{&g_222,&g_222},{&g_222,&g_222}}};
static int8_t * const *g_352[3] = {&g_353[0][0][1],&g_353[0][0][1],&g_353[0][0][1]};
static int32_t g_384 = 0x1AB93912L;
static uint32_t g_385 = 2UL;
static int16_t g_388 = 0xF26BL;
static int8_t g_390 = 0xCBL;
static uint32_t g_391 = 4UL;
static int64_t g_395 = (-7L);
static uint64_t g_460 = 4UL;
static int32_t g_469 = 6L;
static int64_t g_470[4][1] = {{0xBCBD4FF24780B856LL},{0L},{0xBCBD4FF24780B856LL},{0L}};
static int16_t g_471[4] = {0x62E6L,0x62E6L,0x62E6L,0x62E6L};
static int64_t g_472[6] = {1L,1L,1L,1L,1L,1L};
static uint16_t g_473 = 0x47F5L;
static uint32_t *g_492 = &g_385;
static uint32_t **g_491 = &g_492;
static int8_t *g_499 = &g_222;
static int32_t g_531 = 1L;
static uint32_t **g_709[5] = {&g_32[0][1],&g_32[0][1],&g_32[0][1],&g_32[0][1],&g_32[0][1]};
static uint32_t *** const g_708[6] = {&g_709[2],&g_709[2],&g_709[2],&g_709[2],&g_709[2],&g_709[2]};
static uint8_t g_776 = 0xCCL;
static struct S0 *g_857 = &g_78[3][2][1];
static struct S0 **g_856 = &g_857;
static struct S0 **g_859 = &g_857;
static int32_t ***g_904 = (void*)0;
static uint32_t **** const *g_925[5] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
static uint32_t ***g_928 = (void*)0;
static uint32_t **** const g_927 = &g_928;
static uint32_t **** const *g_926 = &g_927;
static int8_t **g_954[7][4][6] = {{{&g_499,&g_499,(void*)0,(void*)0,&g_499,(void*)0},{&g_499,&g_499,&g_499,&g_499,&g_499,&g_499},{&g_499,&g_499,&g_499,&g_499,(void*)0,&g_499},{&g_499,&g_499,&g_499,&g_499,&g_499,&g_499}},{{&g_499,(void*)0,&g_499,&g_499,(void*)0,&g_499},{(void*)0,(void*)0,&g_499,&g_499,&g_499,&g_499},{(void*)0,&g_499,&g_499,&g_499,&g_499,&g_499},{&g_499,&g_499,(void*)0,(void*)0,&g_499,(void*)0}},{{&g_499,(void*)0,&g_499,&g_499,&g_499,&g_499},{&g_499,(void*)0,&g_499,&g_499,&g_499,&g_499},{&g_499,&g_499,&g_499,&g_499,&g_499,(void*)0},{&g_499,&g_499,&g_499,&g_499,&g_499,&g_499}},{{&g_499,&g_499,&g_499,&g_499,&g_499,&g_499},{&g_499,&g_499,(void*)0,&g_499,&g_499,&g_499},{&g_499,&g_499,&g_499,(void*)0,&g_499,&g_499},{&g_499,(void*)0,&g_499,&g_499,&g_499,&g_499}},{{(void*)0,(void*)0,&g_499,&g_499,&g_499,(void*)0},{(void*)0,&g_499,&g_499,&g_499,(void*)0,&g_499},{&g_499,(void*)0,&g_499,&g_499,&g_499,(void*)0},{&g_499,&g_499,&g_499,&g_499,&g_499,&g_499}},{{&g_499,&g_499,&g_499,(void*)0,&g_499,&g_499},{&g_499,&g_499,&g_499,(void*)0,&g_499,&g_499},{&g_499,&g_499,&g_499,&g_499,&g_499,&g_499},{&g_499,&g_499,&g_499,&g_499,&g_499,&g_499}},{{&g_499,&g_499,&g_499,&g_499,&g_499,(void*)0},{&g_499,&g_499,&g_499,&g_499,&g_499,(void*)0},{&g_499,&g_499,&g_499,(void*)0,(void*)0,&g_499},{(void*)0,&g_499,&g_499,&g_499,&g_499,&g_499}}};
static int8_t g_987 = 0xCEL;
static int64_t *g_1044 = &g_472[2];
static int64_t **g_1043 = &g_1044;
static uint8_t g_1097 = 0xE0L;
static uint8_t *g_1157[4][2] = {{&g_349,&g_349},{&g_349,&g_349},{&g_349,&g_349},{&g_349,&g_349}};
static int16_t g_1158 = 0xDB0DL;
static uint64_t ***g_1220 = &g_175[3];
static uint64_t ***g_1223 = &g_175[5];
static uint8_t g_1248 = 248UL;
static uint32_t * const g_1278 = (void*)0;
static uint32_t * const *g_1277 = &g_1278;
static uint32_t * const **g_1276 = &g_1277;
static uint32_t * const ***g_1275 = &g_1276;
static uint16_t g_1285 = 0x3294L;
static int16_t g_1324 = 0xAF78L;
static int8_t g_1351 = 1L;
static uint16_t g_1363[1][6] = {{0x0D2DL,0x0D2DL,7UL,0x0D2DL,0x0D2DL,7UL}};
static uint16_t g_1401 = 0UL;
static int8_t g_1415 = (-1L);
static int32_t g_1419 = 0x9D8B71B7L;
static uint8_t g_1420 = 1UL;
static union U1 ** const *g_1431[3][1] = {{&g_195},{&g_195},{&g_195}};
static union U1 ** const **g_1430 = &g_1431[2][0];
static int16_t *g_1495 = &g_471[2];
static int16_t **g_1494 = &g_1495;
static uint16_t g_1531 = 0x4D7AL;
static int32_t *g_1564 = &g_469;
static int32_t ** const g_1563 = &g_1564;
static int32_t ** const * const g_1562 = &g_1563;
static int32_t ** const * const *g_1561 = &g_1562;
static int32_t ** const * const **g_1560 = &g_1561;
static int64_t g_1579[6] = {0x2AF9F23B8C866E10LL,0x2AF9F23B8C866E10LL,0x2AF9F23B8C866E10LL,0x2AF9F23B8C866E10LL,0x2AF9F23B8C866E10LL,0x2AF9F23B8C866E10LL};
static uint8_t g_1581 = 250UL;
static int32_t g_1631 = 7L;
static int64_t g_1632 = 0x2AB80B0DF1A8A5FBLL;
static uint8_t g_1633 = 0xABL;
static uint16_t g_1662 = 5UL;
static int32_t g_1674 = 0x4DD4A0BFL;
static int16_t g_1692[6] = {0xD8BFL,0xD8BFL,0xD8BFL,0xD8BFL,0xD8BFL,0xD8BFL};
static uint32_t g_1693[1] = {0x60DFD21BL};
static int32_t g_1792[5][1] = {{0L},{0L},{0L},{0L},{0L}};
static uint64_t ****g_1940 = &g_1223;
static uint64_t *****g_1939[5][1][5] = {{{&g_1940,&g_1940,&g_1940,&g_1940,&g_1940}},{{&g_1940,&g_1940,&g_1940,&g_1940,&g_1940}},{{&g_1940,&g_1940,&g_1940,&g_1940,&g_1940}},{{&g_1940,&g_1940,&g_1940,&g_1940,&g_1940}},{{&g_1940,&g_1940,&g_1940,&g_1940,&g_1940}}};
static uint32_t g_2001 = 0xCBDF0D83L;
static uint32_t g_2171 = 0x28F701E2L;
static int32_t g_2198 = 0x00385F83L;



static uint32_t  func_1(void);
static uint8_t  func_3(int32_t  p_4, int8_t  p_5);
static uint32_t  func_6(int16_t  p_7, uint32_t  p_8, uint8_t  p_9);
static uint8_t  func_12(uint32_t  p_13, union U1  p_14, int64_t  p_15, int16_t  p_16, uint32_t  p_17);
static union U1  func_23(uint8_t  p_24, union U1  p_25, uint8_t  p_26, const int16_t  p_27, struct S0  p_28);
static uint64_t  func_34(const uint32_t  p_35, union U1  p_36, uint32_t * p_37);
static union U1 * func_41(int32_t  p_42, const uint64_t  p_43, union U1 * p_44, union U1 * const  p_45, const struct S0  p_46);
static struct S0  func_53(uint32_t * p_54);




static uint32_t  func_1(void)
{ 
    int32_t l_10 = 1L;
    uint64_t l_1128 = 0UL;
    uint32_t **** const l_1146 = &g_928;
    int32_t *l_1148 = &l_10;
    uint8_t l_1155 = 0x35L;
    int64_t * const l_1180 = &g_189;
    int32_t l_1210 = 5L;
    const int8_t l_1235 = 0x0EL;
    uint8_t l_1241 = 0x5FL;
    uint32_t * const *l_1274 = (void*)0;
    uint32_t * const **l_1273 = &l_1274;
    uint32_t * const ***l_1272 = &l_1273;
    uint32_t *l_1281 = &g_20;
    int32_t l_1288[5] = {1L,1L,1L,1L,1L};
    const int32_t ***l_1311 = (void*)0;
    int32_t l_1346 = 0xAA427314L;
    int16_t l_1349 = 0xDE85L;
    uint32_t ****l_1350 = &g_928;
    int64_t l_1416 = (-8L);
    union U1 ****l_1432 = (void*)0;
    int32_t *l_1436 = &l_1346;
    struct S0 **l_1456 = &g_857;
    uint32_t l_1462[7] = {1UL,1UL,0x4E1DAF7EL,1UL,1UL,0x4E1DAF7EL,1UL};
    uint32_t l_1493 = 0xDA45E052L;
    int32_t l_1575 = 0xD67364B3L;
    int8_t l_1614 = 0xDFL;
    int32_t l_1615 = (-9L);
    int64_t l_1618[4] = {0x78CCBE5EE8212F9CLL,0x78CCBE5EE8212F9CLL,0x78CCBE5EE8212F9CLL,0x78CCBE5EE8212F9CLL};
    int64_t l_1623 = 0xCE419B8E81FFA66BLL;
    int8_t l_1661[5][1] = {{0x85L},{(-2L)},{0x85L},{(-2L)},{0x85L}};
    int32_t *l_1665 = &g_57;
    int16_t l_1688 = 9L;
    uint32_t l_1720 = 0xCFF58B84L;
    uint8_t l_1723 = 0x24L;
    int32_t **l_1731 = &g_1564;
    union U1 l_1732[1][4] = {{{0xE985L},{0xE985L},{0xE985L},{0xE985L}}};
    int64_t l_1754 = 0xCEEFA81A38A2875ELL;
    int32_t l_1801[5];
    int8_t l_1802 = 0xD9L;
    uint32_t l_1895 = 1UL;
    uint64_t l_1898 = 5UL;
    uint8_t l_1914 = 249UL;
    uint16_t l_1938 = 0xDC8FL;
    uint32_t *****l_2000 = &l_1350;
    int32_t l_2003 = 0x85646F95L;
    int16_t l_2008 = 0x472DL;
    uint32_t l_2011 = 0xCCF9041FL;
    const uint32_t l_2090[4] = {0x3E93D220L,0x3E93D220L,0x3E93D220L,0x3E93D220L};
    uint16_t l_2091 = 65535UL;
    uint32_t l_2154[6];
    int16_t l_2157 = (-1L);
    int16_t l_2169 = (-1L);
    int8_t l_2172[7] = {6L,6L,6L,6L,6L,6L,6L};
    int64_t l_2186 = 0x9A547B79CC9D83EELL;
    uint16_t *l_2210 = (void*)0;
    uint32_t l_2219[4][6][2] = {{{0xFEC102A7L,1UL},{4294967292UL,0x5CEC2E66L},{0x603AFA36L,0x0663CFB6L},{0xBA2A2B7BL,6UL},{4294967290UL,4294967290UL},{0xDED7F38AL,0xFEC102A7L}},{{0x7B868147L,0x71ED03EFL},{0xD50F6D63L,2UL},{1UL,0xD50F6D63L},{0x5CEC2E66L,0xB2871750L},{0x5CEC2E66L,0xD50F6D63L},{1UL,2UL}},{{0xD50F6D63L,0x71ED03EFL},{0x7B868147L,0xFEC102A7L},{0xDED7F38AL,4294967290UL},{4294967290UL,6UL},{0xBA2A2B7BL,0x0663CFB6L},{0x603AFA36L,0x5CEC2E66L}},{{4294967292UL,1UL},{0xFEC102A7L,1UL},{4294967286UL,0x0663CFB6L},{0x71ED03EFL,0x0663CFB6L},{4294967286UL,0x603AFA36L},{6UL,0x71ED03EFL}}};
    int i, j, k;
    for (i = 0; i < 5; i++)
        l_1801[i] = (-9L);
    for (i = 0; i < 6; i++)
        l_2154[i] = 0UL;
    if (g_2)
    { 
        uint64_t l_11 = 0x7AB61B583DC0E3E7LL;
        uint32_t *l_18 = (void*)0;
        uint32_t *l_19[7] = {&g_20,&g_20,&g_20,&g_20,&g_20,&g_20,&g_20};
        uint32_t *l_38 = (void*)0;
        uint32_t *l_39 = &g_33;
        uint8_t *l_402 = &g_349;
        struct S0 l_403 = {-3848,28653,-14,-946,561,0xF74BL,-6L,7};
        uint16_t l_1119 = 0x533DL;
        uint32_t **l_1170 = &g_32[1][1];
        int8_t l_1186 = 0x5DL;
        uint32_t ***l_1280[5] = {&g_709[0],&g_709[0],&g_709[0],&g_709[0],&g_709[0]};
        uint32_t ****l_1279 = &l_1280[2];
        int32_t *l_1284[7][4] = {{&g_384,&g_384,&g_469,&g_469},{&g_384,&g_384,&g_469,&g_469},{&g_384,&g_384,&g_469,&g_469},{&g_384,&g_384,&g_469,&g_469},{&g_384,&g_384,&g_469,&g_469},{&g_384,&g_384,&g_469,&g_469},{&g_384,&g_384,&g_469,&g_469}};
        uint32_t l_1289 = 4294967295UL;
        struct S0 * const *l_1298 = &g_857;
        int32_t l_1299 = 0x23813AD0L;
        const int32_t l_1317 = 8L;
        int8_t l_1318 = 1L;
        const int32_t l_1322 = 8L;
        uint32_t l_1332 = 9UL;
        uint32_t l_1356 = 4294967289UL;
        const uint32_t *l_1367 = &g_141[2][3];
        const uint32_t **l_1366[5] = {&l_1367,&l_1367,&l_1367,&l_1367,&l_1367};
        uint16_t l_1380 = 0x1E15L;
        int32_t l_1387 = 0x4D6D0125L;
        uint16_t l_1398 = 65531UL;
        int8_t l_1412 = 0xA6L;
        int32_t l_1463 = (-4L);
        int32_t l_1527 = 0L;
        uint32_t l_1534 = 0UL;
        int8_t l_1538 = 0xF7L;
        uint32_t l_1543 = 0UL;
        uint64_t l_1550 = 9UL;
        int32_t ** const *l_1559 = (void*)0;
        int32_t ** const * const *l_1558 = &l_1559;
        int32_t ** const * const **l_1557 = &l_1558;
        int i, j;
        if (((func_3(((func_6(l_10, l_11, func_12((g_20--), func_23(((safe_mod_func_uint64_t_u_u(((!(g_2 , (g_32[3][1] == (void*)0))) | (g_2 , ((*l_402) = (func_34(((*l_39) = (l_19[2] == (void*)0)), g_40, g_32[3][1]) || 18446744073709551615UL)))), 0x98D1CFFC89FE4952LL)) || 0xE1BFL), g_40, l_11, l_10, l_403), l_10, g_141[2][3], l_10)) == l_10) != l_10), l_10) != 1L) == 0xD29376D0L))
        { 
            int8_t l_1096 = 1L;
            union U1 l_1129 = {0x0642L};
            int16_t *l_1145 = &g_471[2];
            int64_t *l_1162 = &g_395;
            uint32_t **l_1168 = &g_32[2][1];
            int32_t l_1176[1][2];
            int32_t l_1217[3];
            uint64_t l_1240 = 0xD9111ADEB8720652LL;
            int64_t ***l_1267 = &g_1043;
            uint32_t * const ***l_1271 = (void*)0;
            uint32_t * const ****l_1270[7];
            int8_t *l_1282[4] = {&g_81[1],&g_81[1],&g_81[1],&g_81[1]};
            int32_t l_1283[5][6] = {{0x246319D8L,0x095FCC6FL,0x246319D8L,1L,0x095FCC6FL,1L},{0x246319D8L,0x331E09D9L,1L,1L,0x331E09D9L,0x246319D8L},{0x246319D8L,1L,1L,1L,1L,1L},{0x246319D8L,0x095FCC6FL,0x246319D8L,1L,0x095FCC6FL,1L},{0x246319D8L,0x331E09D9L,1L,1L,0x331E09D9L,0x246319D8L}};
            int i, j;
            for (i = 0; i < 1; i++)
            {
                for (j = 0; j < 2; j++)
                    l_1176[i][j] = 1L;
            }
            for (i = 0; i < 3; i++)
                l_1217[i] = 0xDFEEC55EL;
            for (i = 0; i < 7; i++)
                l_1270[i] = &l_1271;
            if ((safe_mod_func_int8_t_s_s((safe_mul_func_uint8_t_u_u((safe_div_func_uint16_t_u_u(1UL, g_143.f1)), ((*l_402) = (safe_add_func_int32_t_s_s(l_1096, 0x5C4D5C2FL))))), (g_1097 , l_403.f5))))
            { 
                int8_t l_1102 = 0x5AL;
                uint32_t ****l_1111 = (void*)0;
                uint32_t *l_1135 = &g_20;
                uint16_t *l_1156 = &g_40.f4;
                int32_t l_1163 = 0L;
                struct S0 l_1175 = {-5632,6310,-11,965,427,0UL,-3L,120};
                int32_t *l_1181 = &g_57;
                for (g_390 = 0; (g_390 > (-14)); g_390 = safe_sub_func_uint16_t_u_u(g_390, 4))
                { 
                    int32_t l_1113[1][2];
                    int32_t *l_1120 = &g_384;
                    int i, j;
                    for (i = 0; i < 1; i++)
                    {
                        for (j = 0; j < 2; j++)
                            l_1113[i][j] = (-9L);
                    }
                    (*l_1120) = (l_11 ^ ((safe_mul_func_int8_t_s_s(l_403.f5, (l_1102 , (safe_mod_func_uint16_t_u_u(((safe_rshift_func_int16_t_s_u((safe_lshift_func_uint16_t_u_u(((safe_rshift_func_uint8_t_u_s(((*l_402) = ((((void*)0 != l_1111) >= ((+((*g_176) = (l_1113[0][0] & (safe_sub_func_int32_t_s_s(((((safe_lshift_func_int8_t_s_u(((((!((*g_282) , 65535UL)) , &g_709[0]) == &g_709[0]) == g_987), 5)) <= l_1113[0][0]) || 0UL) & g_1097), 0x9E2A028EL))))) == 0x56BCL)) , l_1096)), l_1102)) >= l_1119), l_1102)), l_10)) != g_143.f0), 0xAA22L))))) != 7UL));
                    (*g_182) = (*g_182);
                    if (l_1096)
                        continue;
                    (*g_182) = (*g_182);
                }
                for (g_20 = 0; (g_20 == 49); g_20++)
                { 
                    int16_t l_1125 = 0L;
                    uint32_t *****l_1143 = (void*)0;
                    uint32_t *****l_1144 = &l_1111;
                    int64_t l_1147 = (-10L);
                    (*g_332) = ((((safe_rshift_func_int16_t_s_s((l_1125 & 1UL), 11)) , ((safe_add_func_int16_t_s_s((l_1128 = g_81[1]), (func_53((l_1129 , ((safe_mul_func_uint16_t_u_u(((~(safe_lshift_func_uint16_t_u_u(((l_1129 , (0x993DFB66L >= ((g_472[5] , l_1125) | 0L))) & g_219), 0))) < g_283.f4), 0x69B0L)) , l_1135))) , 0x7850L))) | l_1129.f4)) != g_78[3][2][1].f5) , (void*)0);
                    l_1148 = ((((*g_1044) = (((safe_unary_minus_func_int64_t_s((safe_unary_minus_func_int32_t_s((((g_283.f0 = (~(l_1102 , 0xE326626CF141932BLL))) < ((((safe_mod_func_uint16_t_u_u(l_1129.f0, ((safe_rshift_func_uint16_t_u_u((3L < (((*l_1144) = (void*)0) == (((void*)0 == l_1145) , l_1146))), l_1129.f0)) | (-1L)))) | l_1125) , l_1147) , l_1147)) | 0xE9510F6B9C3A9CDCLL))))) > l_1102) || 0xA1C32E7CL)) || l_403.f7) , (void*)0);
                    if (l_1102)
                        continue;
                }
                if (g_391)
                    goto lbl_1159;
                if ((safe_sub_func_int64_t_s_s((safe_rshift_func_int16_t_s_u(((safe_div_func_uint64_t_u_u((l_1155 | ((g_122 == ((*l_1156) = 1UL)) || ((l_403.f2 != ((*g_492) > (((g_1157[2][0] = &g_349) == (void*)0) & g_460))) != (*g_492)))), (*g_1044))) > g_1158), g_385)), 0x235B5B8D67064761LL)))
                { 
lbl_1159:
                    (*g_332) = &l_10;
                    (*g_333) |= ((++(*g_492)) >= (l_1162 != (void*)0));
                    return l_1163;
                }
                else
                { 
                    uint32_t ***l_1169 = &l_1168;
                    int32_t l_1172 = 0x85A7A317L;
                    const int32_t l_1177 = 0xA754BAA1L;
                    int32_t *l_1178[6] = {&g_384,&g_384,&g_384,&g_384,&g_384,&g_384};
                    int16_t l_1179 = 0xD8F6L;
                    int i;
                    l_1179 |= ((safe_div_func_uint16_t_u_u((safe_rshift_func_uint8_t_u_u((((l_1172 = (((((*l_1169) = l_1168) == l_1170) && ((void*)0 != l_1135)) == (((safe_unary_minus_func_uint8_t_u((((((((**g_1043) &= l_1172) && (safe_rshift_func_uint16_t_u_s(g_987, l_1096))) , l_1175) , l_1172) | l_1176[0][1]) == l_1172))) <= g_471[1]) < 0x0D293064B6FFA0B2LL))) == l_403.f6) & (*g_492)), l_1177)), g_78[3][2][1].f1)) < l_403.f7);
                }
                (*l_1181) = (l_1175.f2 = (l_1180 != ((*g_1043) = (*g_1043))));
                for (g_57 = (-21); (g_57 > (-8)); g_57 = safe_add_func_uint64_t_u_u(g_57, 3))
                { 
                    int16_t *l_1187 = &l_403.f6;
                    int32_t *l_1188 = (void*)0;
                    int32_t *l_1189 = &l_1176[0][1];
                    (*l_1189) ^= (safe_mul_func_uint8_t_u_u(l_1186, (((*l_1187) = ((*l_1145) = g_40.f4)) && (g_78[3][2][1].f6 && 2UL))));
                }
            }
            else
            { 
                int32_t ****l_1193 = &g_904;
                int16_t *l_1211 = &l_403.f6;
                int32_t *l_1242 = &l_10;
                int32_t *l_1243 = (void*)0;
                int32_t *l_1244 = &l_1176[0][1];
                int32_t *l_1245 = &l_1176[0][1];
                int32_t *l_1246[4][7] = {{&g_219,&g_384,&l_1176[0][1],&g_384,&g_219,&g_219,&g_384},{&g_469,&g_384,&g_469,&l_1176[0][1],&l_1176[0][1],&g_469,&g_384},{&g_384,&l_1210,&l_1176[0][1],&l_1176[0][1],&l_1210,&g_384,&l_1210},{&g_469,&l_1176[0][1],&l_1176[0][1],&g_469,&g_384,&g_469,&l_1176[0][1]}};
                int64_t l_1247 = 0x0185848657D38BEBLL;
                int i, j;
                for (g_391 = 17; (g_391 > 27); g_391 = safe_add_func_int8_t_s_s(g_391, 9))
                { 
                    int32_t *l_1199 = &g_384;
                    (*l_1148) |= 0L;
                    (*g_182) = l_19[2];
                    (*l_1199) &= ((*l_1148) = (+((l_1193 != (void*)0) != (((*g_499) == (safe_mul_func_int16_t_s_s(g_349, (~(safe_rshift_func_uint16_t_u_u(g_141[2][3], 10)))))) > (-1L)))));
                }
                if (((g_78[3][2][1].f6 > ((*l_1211) ^= ((*l_1145) = ((safe_lshift_func_int16_t_s_s((safe_mul_func_int8_t_s_s((l_1096 , l_1186), (safe_sub_func_int16_t_s_s(g_141[0][3], l_403.f5)))), ((+(((~(-1L)) >= ((safe_lshift_func_uint8_t_u_u(((func_53(l_1148) , 0L) ^ 1UL), l_1210)) & 0x55F7L)) || 3L)) < g_472[1]))) | 0x14DEL)))) & l_1129.f0))
                { 
                    int32_t ****l_1214 = &g_904;
                    uint64_t ****l_1221 = (void*)0;
                    uint64_t ****l_1222 = (void*)0;
                    (*l_1148) = (safe_div_func_int64_t_s_s(((l_403.f1 , &g_904) != l_1214), (safe_sub_func_int16_t_s_s(l_1217[0], (safe_rshift_func_uint16_t_u_u(0xB5D1L, ((g_1220 = (void*)0) != (g_1223 = &g_175[3]))))))));
                    (*l_1148) &= l_403.f5;
                    g_469 &= (safe_div_func_uint16_t_u_u(g_470[2][0], (safe_lshift_func_uint8_t_u_u(((*l_402) = (((safe_rshift_func_int16_t_s_u(0x97C5L, (!l_403.f6))) > (((void*)0 == &g_1223) == (*l_1148))) ^ ((((((safe_div_func_uint32_t_u_u(((**g_491)++), l_1096)) , l_1235) , (*g_492)) >= l_11) <= 0xE33FL) ^ l_403.f6))), l_403.f5))));
                }
                else
                { 
                    return l_1119;
                }
                for (g_206 = 0; (g_206 <= 2); g_206 += 1)
                { 
                    int i;
                    l_403.f3 &= (safe_sub_func_uint8_t_u_u((safe_sub_func_uint8_t_u_u((((((l_403.f2 = (g_471[(g_206 + 1)] , g_471[(g_206 + 1)])) & (l_1176[0][1] >= 1L)) || (l_1240 && l_1241)) & 65535UL) <= 0UL), (*g_499))), 0x38L));
                    l_1176[0][1] = (((*g_282) = (*g_282)) , g_471[(g_206 + 1)]);
                    (*g_182) = (*g_182);
                }
                ++g_1248;
            }
            l_1283[3][5] = ((l_403.f2 = ((safe_mod_func_uint16_t_u_u(((safe_add_func_int8_t_s_s((l_1176[0][0] = ((safe_lshift_func_uint8_t_u_u(((g_101 |= ((*l_1145) = (g_388 |= (g_1158 = (((safe_lshift_func_int8_t_s_u(((*g_499) = (safe_mod_func_uint16_t_u_u(((safe_div_func_uint8_t_u_u((safe_lshift_func_uint16_t_u_u(((((l_1155 & (((*l_1267) = &l_1162) == (void*)0)) < ((l_403.f1 != ((g_1275 = (l_1272 = (void*)0)) == l_1279)) >= ((func_53(l_1281) , (***g_1223)) <= (*g_1044)))) || 4294967289UL) < g_390), 12)), 0x22L)) < l_10), g_471[2]))), l_1096)) != 6L) , 0x49F4L))))) != g_327), l_403.f5)) , (-4L))), l_403.f0)) < l_1096), g_143.f1)) ^ 6UL)) | l_1096);
        }
        else
        { 
            return l_403.f2;
        }
        g_1285++;
        l_1289--;
        for (g_283.f4 = 0; (g_283.f4 > 57); ++g_283.f4)
        { 
            uint32_t l_1296 = 8UL;
            int32_t l_1352 = 0x31F86BE4L;
            int32_t l_1360[6][6] = {{1L,1L,(-1L),1L,1L,(-1L)},{1L,1L,(-1L),1L,1L,(-1L)},{1L,1L,(-1L),1L,1L,(-1L)},{1L,1L,(-1L),1L,1L,(-1L)},{1L,1L,(-1L),1L,1L,(-1L)},{1L,1L,(-1L),1L,1L,(-1L)}};
            int i, j;
            for (g_40.f3 = 0; (g_40.f3 <= 2); g_40.f3 += 1)
            { 
                int32_t l_1297 = 1L;
                int i, j;
                if ((safe_mul_func_int16_t_s_s(((l_1296 ^ 6UL) >= (g_33 <= (((((((l_1296 , l_1297) || ((void*)0 == l_1298)) ^ 0x14641C3CL) , (***g_1223)) <= 0xD97722CE97C8CE79LL) || l_1296) | l_1299))), g_987)))
                { 
                    int64_t *l_1319[4][2] = {{&g_472[1],&g_472[1]},{&g_395,&g_472[1]},{&g_472[1],&g_395},{&g_472[1],&g_472[1]}};
                    uint16_t *l_1320 = &l_1119;
                    uint16_t *l_1321 = &g_473;
                    const int32_t l_1323[5] = {0x6083DC29L,0x6083DC29L,0x6083DC29L,0x6083DC29L,0x6083DC29L};
                    int32_t l_1325 = 0L;
                    int i, j;
                    l_1325 &= ((((((safe_sub_func_uint8_t_u_u(((*g_1044) != ((!(((safe_add_func_uint16_t_u_u(((*l_1321) = (g_1285 = ((*l_1320) = (((*l_1146) != ((g_395 = (safe_div_func_int8_t_s_s((l_1296 ^ ((safe_rshift_func_uint16_t_u_u(((((*l_1180) = (-10L)) || ((*l_1180) = (l_1311 != &g_182))) ^ (safe_lshift_func_int8_t_s_s(((safe_mul_func_int16_t_s_s(((safe_unary_minus_func_uint64_t_u(l_1317)) & 65535UL), 65528UL)) != (*g_492)), (*g_499)))), 0)) >= (*g_1044))), l_1318))) , (void*)0)) <= l_1296)))), g_206)) , 0x1BL) && l_1296)) >= l_1322)), l_1323[1])) | g_122) , 0xA3B6E20465FB2E90LL) , g_1324) & l_1296) != 65533UL);
                }
                else
                { 
                    uint64_t l_1326[5] = {0x3878853AFB8DE0F4LL,0x3878853AFB8DE0F4LL,0x3878853AFB8DE0F4LL,0x3878853AFB8DE0F4LL,0x3878853AFB8DE0F4LL};
                    int i;
                    return l_1326[1];
                }
                for (g_776 = 0; (g_776 <= 3); g_776 += 1)
                { 
                    uint64_t l_1331 = 0x3BB60D36F57609ADLL;
                    int32_t l_1333 = (-6L);
                    int32_t l_1334[3][3];
                    int32_t ****l_1336 = &g_904;
                    int32_t *****l_1335 = &l_1336;
                    uint32_t ** const *l_1345 = &g_491;
                    uint32_t ** const **l_1344 = &l_1345;
                    int i, j;
                    for (i = 0; i < 3; i++)
                    {
                        for (j = 0; j < 3; j++)
                            l_1334[i][j] = 1L;
                    }
                    l_1334[0][2] |= (l_1333 = ((safe_rshift_func_uint8_t_u_u(0UL, (safe_mul_func_uint8_t_u_u(((*l_402) = 250UL), ((*g_499) = l_1331))))) , l_1332));
                    (*g_182) = (l_1284[(g_776 + 1)][g_776] = &l_1334[0][2]);
                    g_78[3][2][1].f3 &= ((((*l_1335) = &g_904) != ((safe_div_func_int64_t_s_s(((safe_add_func_uint64_t_u_u((g_1248 || ((!(safe_sub_func_uint16_t_u_u(0xA8D0L, g_143.f3))) & ((l_1344 != ((l_1346 , ((l_1333 = ((safe_sub_func_uint8_t_u_u(((((*g_1044) ^ (*g_1044)) == l_1296) < (*g_1044)), 249UL)) ^ g_122)) == l_1349)) , l_1350)) > 4294967290UL))), 0x925776240146FD9CLL)) | (*g_1044)), l_1296)) , (void*)0)) , g_1351);
                }
                for (g_1324 = 0; (g_1324 <= 2); g_1324 += 1)
                { 
                    uint64_t l_1353 = 18446744073709551615UL;
                    l_1353++;
                    (*g_182) = (*g_332);
                }
            }
            --l_1356;
            l_1288[4] = 0xEB76555FL;
            for (g_469 = 3; (g_469 >= 0); g_469 -= 1)
            { 
                int32_t *l_1359 = &g_57;
                for (g_219 = 0; (g_219 <= 1); g_219 += 1)
                { 
                    int i, j;
                    return g_141[(g_219 + 1)][(g_219 + 4)];
                }
                for (g_395 = 2; (g_395 >= 0); g_395 -= 1)
                { 
                    int8_t l_1361[7][2][1];
                    int32_t l_1362 = (-2L);
                    const uint32_t ***l_1368 = &l_1366[0];
                    int i, j, k;
                    for (i = 0; i < 7; i++)
                    {
                        for (j = 0; j < 2; j++)
                        {
                            for (k = 0; k < 1; k++)
                                l_1361[i][j][k] = 3L;
                        }
                    }
                    (*g_332) = l_1359;
                    ++g_1363[0][3];
                    (*g_333) = g_141[g_395][(g_395 + 1)];
                    (*l_1368) = l_1366[0];
                    (**g_332) = ((((safe_add_func_uint16_t_u_u(g_471[(g_395 + 1)], (safe_add_func_int8_t_s_s((safe_mul_func_int8_t_s_s((g_471[(g_395 + 1)] > ((((*g_927) = (void*)0) == (void*)0) && (-8L))), (~(safe_div_func_int8_t_s_s((((g_471[g_469] != (safe_mul_func_int8_t_s_s(((((((*l_1359) == (*l_1359)) <= (*l_1359)) & (*g_176)) <= (-7L)) >= l_1380), (*g_499)))) , l_1352) , l_1361[3][1][0]), 0x7DL))))), g_471[(g_395 + 1)])))) != (*l_1359)) == 0xFA414CDB1737C273LL) , 8L);
                }
                for (l_1210 = 3; (l_1210 >= 0); l_1210 -= 1)
                { 
                    uint32_t l_1381 = 0x7D0FC96DL;
                    --l_1381;
                }
            }
            for (l_1128 = 0; (l_1128 >= 45); ++l_1128)
            { 
                g_57 |= (+l_1387);
            }
        }
        for (l_1318 = 0; (l_1318 <= 4); l_1318 += 1)
        { 
            int32_t l_1390[5][5] = {{(-1L),(-1L),0xEF878676L,(-1L),(-1L)},{3L,0x6E1F1BF8L,3L,3L,0x6E1F1BF8L},{(-1L),0xCB626706L,0xCB626706L,(-1L),0xCB626706L},{0x6E1F1BF8L,3L,0x6E1F1BF8L,3L,3L},{0xEF878676L,0xCB626706L,0xEF878676L,0xEF878676L,0xCB626706L}};
            uint8_t l_1391[3];
            int16_t *l_1399 = &g_471[0];
            int16_t *l_1400[4];
            int32_t l_1413 = 0xEEB21ACAL;
            int32_t l_1414[5][6] = {{(-3L),0x0BBDD94BL,0x0BBDD94BL,(-3L),0xA40BC6BAL,(-1L)},{0xBB377B1EL,0x0BBDD94BL,0xA40BC6BAL,0xBB377B1EL,0xA40BC6BAL,0x0BBDD94BL},{(-6L),0x0BBDD94BL,(-1L),(-6L),0xA40BC6BAL,0xA40BC6BAL},{(-3L),0x0BBDD94BL,0x0BBDD94BL,(-3L),0xA40BC6BAL,(-1L)},{0xBB377B1EL,0x0BBDD94BL,0xA40BC6BAL,0xBB377B1EL,0xA40BC6BAL,0x0BBDD94BL}};
            uint8_t l_1455[7] = {0x0CL,0x0CL,0x0CL,0x0CL,0x0CL,0x0CL,0x0CL};
            struct S0 ***l_1457 = &g_859;
            int16_t l_1470 = (-1L);
            int32_t l_1490 = 0L;
            int32_t **l_1525 = &l_1436;
            int i, j;
            for (i = 0; i < 3; i++)
                l_1391[i] = 1UL;
            for (i = 0; i < 4; i++)
                l_1400[i] = &l_1349;
        }
    }
    else
    { 
        int8_t l_1603[6][7] = {{0x30L,0xEDL,0x30L,0xF5L,0xEDL,0x22L,0x22L},{0xEDL,0x52L,0xD4L,0x52L,0xEDL,0xD4L,0xDAL},{0xDAL,0x22L,0xF5L,0xDAL,0xF5L,0x22L,0xDAL},{0x30L,0xDAL,0x22L,0xF5L,0xDAL,0xF5L,0x22L},{0xDAL,0xDAL,0xD4L,0xEDL,0x52L,0xD4L,0x52L},{0xEDL,0x22L,0x22L,0xEDL,0xF5L,0x30L,0xEDL}};
        uint64_t ***l_1608 = &g_175[3];
        const uint32_t l_1613 = 0x54441487L;
        uint16_t l_1616 = 0x5DFEL;
        uint16_t *l_1617 = &g_1531;
        int32_t l_1629 = 0xB9518DB6L;
        int32_t l_1630 = 0xA0F12505L;
        int16_t l_1660[7] = {0xC93AL,0xC93AL,0xC93AL,0xC93AL,0xC93AL,0xC93AL,0xC93AL};
        int32_t l_1677 = 0x9EF6D062L;
        int32_t l_1691[2];
        int32_t l_1718 = 0xC13CC75CL;
        int i, j;
        for (i = 0; i < 2; i++)
            l_1691[i] = (-9L);
        if (((*l_1436) = (safe_add_func_int32_t_s_s((1L <= (safe_rshift_func_uint16_t_u_u(((*l_1617) = (safe_mul_func_uint8_t_u_u(((((+(safe_div_func_int8_t_s_s(((safe_div_func_uint32_t_u_u((safe_lshift_func_int16_t_s_s((safe_mul_func_uint16_t_u_u((((safe_rshift_func_uint8_t_u_s(0xCBL, 0)) ^ ((((safe_lshift_func_int8_t_s_u(l_1603[4][0], 2)) , ((***g_1562) = ((safe_rshift_func_uint8_t_u_u(((safe_sub_func_int16_t_s_s(((((void*)0 == l_1608) > (safe_rshift_func_int8_t_s_u(((safe_div_func_uint8_t_u_u((((**g_1560) != (**g_1560)) <= l_1613), (*l_1436))) >= 0x1A509A43FA9EC17ALL), l_1614))) ^ (*l_1148)), g_143.f1)) | (**g_1043)), (*l_1148))) & 0xB3DFL))) | (*l_1436)) || 4294967294UL)) , 0UL), (*l_1148))), (*g_1495))), 0xA62AEFC1L)) , (*g_499)), l_1615))) && l_1603[4][0]) , (*****g_1560)) , l_1616), (*l_1436)))), l_1618[3]))), l_1616))))
        { 
            int32_t *l_1619 = &l_1210;
            int32_t *l_1620 = &l_10;
            int32_t *l_1621 = (void*)0;
            int32_t *l_1622 = (void*)0;
            int32_t *l_1624 = &g_219;
            int32_t *l_1625 = &g_469;
            int32_t *l_1626 = &l_1210;
            int32_t *l_1627 = &g_469;
            int32_t *l_1628[7][7][3] = {{{&g_219,&l_1288[3],&g_219},{&l_1288[3],&g_219,&g_219},{&l_1346,&l_1346,&g_219},{&g_219,&l_1288[3],&g_219},{&l_1288[3],&g_219,&g_219},{&l_1346,&l_1346,&g_219},{&g_219,&l_1288[3],&g_219}},{{&l_1288[3],&g_219,&g_219},{&l_1346,&l_1346,&g_219},{&g_219,&l_1288[3],&g_219},{&l_1288[3],&g_219,&g_219},{&l_1346,&l_1346,&g_219},{&g_219,&l_1288[3],&g_219},{&l_1288[3],&g_219,&g_219}},{{&l_1346,&l_1346,&g_219},{&g_219,&l_1288[3],&g_219},{&l_1288[3],&g_219,&g_219},{&l_1346,&l_1346,&g_219},{&g_219,&l_1288[3],&g_219},{&l_1288[3],&g_219,&g_219},{&l_1346,&l_1346,&g_219}},{{&g_219,&l_1288[3],&g_219},{&l_1288[3],&g_219,&g_219},{&l_1346,&l_1346,&g_219},{&g_219,&l_1288[3],&g_219},{&l_1288[3],&g_219,&g_219},{&l_1346,&l_1346,&g_219},{&g_219,&l_1288[3],&g_219}},{{&l_1288[3],&g_219,&g_219},{&l_1346,&l_1346,&g_219},{&g_219,&l_1288[3],&g_219},{&l_1288[3],&g_219,&g_219},{&g_384,&g_384,&l_1346},{&g_469,(void*)0,&l_1346},{(void*)0,&g_469,&l_1346}},{{&g_384,&g_384,&l_1346},{&g_469,(void*)0,&l_1346},{(void*)0,&g_469,&l_1346},{&g_384,&g_384,&l_1346},{&g_469,(void*)0,&l_1346},{(void*)0,&g_469,&l_1346},{&g_384,&g_384,&l_1346}},{{&g_469,(void*)0,&l_1346},{(void*)0,&g_469,&l_1346},{&g_384,&g_384,&l_1346},{&g_469,(void*)0,&l_1346},{(void*)0,&g_469,&l_1346},{&g_384,&g_384,&l_1346},{&g_469,(void*)0,&l_1346}}};
            int8_t **l_1652 = &g_499;
            int i, j, k;
            ++g_1633;
            for (g_40.f4 = 0; (g_40.f4 < 1); g_40.f4 = safe_add_func_int32_t_s_s(g_40.f4, 5))
            { 
                int8_t ***l_1653 = &l_1652;
                uint32_t **l_1656 = (void*)0;
                uint32_t **l_1657 = &g_32[2][1];
                int32_t *l_1658 = &g_531;
                int32_t l_1659 = 0L;
                (*l_1148) = ((safe_div_func_uint16_t_u_u(((safe_add_func_int64_t_s_s(0x49E97F7C4A9F7B93LL, (safe_mod_func_uint16_t_u_u(g_283.f4, (safe_div_func_uint64_t_u_u((safe_sub_func_int32_t_s_s(l_1603[4][0], 4294967286UL)), (safe_sub_func_int16_t_s_s(((*g_1495) &= ((safe_sub_func_int32_t_s_s((((*l_1653) = l_1652) != (((*l_1658) = (safe_sub_func_uint64_t_u_u((func_53(((*l_1657) = &l_1462[2])) , (*l_1148)), 0x1A9E8F21982A6600LL))) , (void*)0)), 4294967288UL)) < l_1659)), l_1659)))))))) >= g_101), (*l_1148))) == l_1603[3][3]);
            }
            g_1662--;
        }
        else
        { 
            uint64_t ****l_1667 = &g_1220;
            uint64_t *****l_1666 = &l_1667;
            int16_t *l_1678 = &g_78[3][2][1].f6;
            int32_t l_1679 = 0x8B88DEAAL;
            int32_t l_1690 = 0x240CE146L;
            uint8_t l_1705[5] = {1UL,1UL,1UL,1UL,1UL};
            uint64_t l_1719 = 0x1FE497FC5714AA10LL;
            int i;
            (****g_1560) = l_1665;
            (*g_333) = (*****g_1560);
            (*l_1666) = &g_1220;
            (*g_1564) &= ((safe_sub_func_int64_t_s_s((safe_div_func_int16_t_s_s((g_1632 , ((*l_1678) = (safe_lshift_func_uint16_t_u_s((((*g_1495) = g_1674) >= (((l_1677 = (safe_sub_func_int16_t_s_s(l_1616, 0xA367L))) != (-3L)) == l_1629)), 12)))), (0xC1L & l_1679))), l_1660[4])) != 6UL);
            for (g_1674 = 3; (g_1674 >= 0); g_1674 -= 1)
            { 
                uint8_t *l_1682 = &l_1155;
                int32_t l_1689[3];
                int32_t l_1708 = 1L;
                int32_t l_1711 = (-1L);
                int i;
                for (i = 0; i < 3; i++)
                    l_1689[i] = 0xD5A32303L;
            }
        }
        return l_1613;
    }
    if ((safe_mul_func_int8_t_s_s((*g_499), l_1723)))
    { 
        uint32_t l_1730 = 0UL;
        uint32_t l_1733 = 5UL;
        struct S0 l_1734 = {-9303,20705,-10,-309,177,7UL,-1L,1};
        union U1 l_1735 = {0xEFD7L};
        uint16_t l_1736 = 65528UL;
        uint8_t l_1739 = 0UL;
        uint8_t *l_1740[7][5] = {{&l_1155,&l_1739,&l_1739,&g_122,&g_122},{&g_776,&g_1420,&g_776,(void*)0,&g_776},{&l_1155,&g_122,&l_1739,&l_1739,&g_122},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&g_122,&l_1739,&l_1739,&g_122,&l_1155},{&g_776,(void*)0,&g_776,&g_1420,&g_776},{&g_122,&g_122,&l_1739,&l_1739,&l_1155}};
        uint64_t **l_1743 = &g_176;
        uint64_t **l_1744 = &g_176;
        int16_t l_1753 = 0xEB67L;
        const uint16_t l_1771 = 0xFCC0L;
        int32_t * const l_1775[3] = {&l_1346,&l_1346,&l_1346};
        uint64_t ****l_1788 = &g_1220;
        int64_t * const l_1841 = &l_1416;
        uint32_t l_1862 = 0xEDC95B60L;
        uint32_t l_1872 = 4294967295UL;
        struct S0 ** const *l_1896[2][6][5] = {{{&g_856,(void*)0,(void*)0,&g_856,(void*)0},{&g_856,&g_856,&l_1456,&g_856,&g_856},{(void*)0,&g_856,(void*)0,(void*)0,&g_856},{&g_856,(void*)0,(void*)0,&g_856,(void*)0},{&g_856,&g_856,&l_1456,&g_856,&g_856},{(void*)0,&g_856,(void*)0,(void*)0,&g_856}},{{&g_856,(void*)0,(void*)0,&g_856,(void*)0},{&g_856,&g_856,&l_1456,&g_856,&g_856},{(void*)0,&g_856,(void*)0,(void*)0,&g_856},{&g_856,(void*)0,(void*)0,&g_856,(void*)0},{&g_856,&g_856,&l_1456,&g_856,&g_856},{(void*)0,&g_856,(void*)0,(void*)0,&g_856}}};
        uint32_t l_1897 = 0UL;
        const int64_t *l_1901 = (void*)0;
        const int64_t **l_1900 = &l_1901;
        const int64_t ** const *l_1899 = &l_1900;
        int i, j, k;
        (*l_1436) |= (((safe_lshift_func_uint8_t_u_u((!((~(safe_lshift_func_int8_t_s_u(((l_1730 == (((l_1735 , l_1735.f0) ^ (*g_176)) >= (**l_1731))) | (*l_1665)), l_1734.f2))) || (****g_1561))), 3)) == l_1734.f4) || l_1736);
        (*l_1436) = (safe_rshift_func_uint8_t_u_u((l_1734.f3 = l_1739), (safe_div_func_uint16_t_u_u(((((*g_499) = ((l_1743 != l_1744) > (safe_add_func_int8_t_s_s(((safe_mod_func_uint32_t_u_u((safe_lshift_func_uint8_t_u_s(l_1734.f0, 3)), (**g_1563))) , (safe_mod_func_uint8_t_u_u((l_1753 = ((*g_1044) & ((*g_176) |= 0x8A4A866DD26BA00DLL))), l_1735.f4))), (-9L))))) == l_1735.f4) ^ 1UL), l_1754))));
        for (g_531 = 0; g_531 < 5; g_531 += 1)
        {
            g_709[g_531] = &g_32[3][1];
        }
        (*****g_1560) = ((**g_491) & (l_1734.f3 ^= 0x68B655F9L));
        for (g_219 = 0; (g_219 < (-4)); --g_219)
        { 
            uint32_t l_1757 = 1UL;
            int32_t l_1764[5];
            uint32_t ***l_1765 = (void*)0;
            int32_t l_1770 = (-1L);
            int16_t *l_1772 = &g_1692[1];
            int32_t l_1790 = 1L;
            int32_t l_1791 = 0L;
            int32_t l_1794 = 0L;
            int32_t l_1798 = 1L;
            int32_t l_1799 = (-1L);
            int32_t l_1803 = 0L;
            int64_t l_1805 = 0x5FC857BC5F915329LL;
            int32_t l_1808 = 8L;
            const int8_t l_1835[6] = {(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)};
            uint8_t l_1840 = 0xFEL;
            int32_t **l_1876 = (void*)0;
            const int64_t ** const **l_1902 = &l_1899;
            int i;
            for (i = 0; i < 5; i++)
                l_1764[i] = (-4L);
            if (l_1757)
                break;
            (*g_1564) = (safe_rshift_func_int16_t_s_s(((*l_1772) = ((l_1757 >= (safe_div_func_int16_t_s_s((safe_add_func_uint32_t_u_u(((3UL == l_1764[3]) | (l_1765 == &g_709[2])), (safe_rshift_func_int16_t_s_u(((**g_1494) = (safe_sub_func_int64_t_s_s((l_1735 , (((**g_491) = ((l_1770 = ((*g_176) <= (*g_1044))) == 0x6CL)) | l_1757)), l_1764[2]))), 11)))), g_219))) > l_1771)), 0));
            for (g_1662 = 0; (g_1662 < 28); g_1662 = safe_add_func_int8_t_s_s(g_1662, 7))
            { 
                int32_t **l_1776 = &l_1436;
                int32_t l_1789[2][3] = {{0L,0L,0L},{0x17D6842DL,0x17D6842DL,0x17D6842DL}};
                uint32_t ****l_1823 = &l_1765;
                uint8_t l_1877 = 9UL;
                int i, j;
                (*l_1776) = l_1775[2];
                for (g_40.f4 = 0; (g_40.f4 < 57); ++g_40.f4)
                { 
                    int8_t l_1783 = 0x17L;
                    int32_t l_1793 = 0x027EB3B8L;
                    int32_t l_1795 = 0xB58E53C3L;
                    int32_t l_1796 = 0xA55A5FBCL;
                    int32_t l_1797 = 1L;
                    int32_t l_1800 = 0xF6EF0669L;
                    int32_t l_1804 = (-1L);
                    int32_t l_1806 = 0x98F011B1L;
                    int32_t l_1807 = 3L;
                    uint16_t l_1809 = 5UL;
                    (***g_1562) ^= (g_1401 || (((((safe_lshift_func_uint8_t_u_s((**l_1776), (l_1783 == (safe_rshift_func_int16_t_s_u(((safe_mul_func_uint16_t_u_u(g_1363[0][3], g_101)) >= 0x4DD1D3EC23374523LL), (l_1788 != &g_1220)))))) == 0x72L) , (*g_1495)) != (**g_1494)) && 0UL));
                    --l_1809;
                    (*l_1436) = (((void*)0 == &g_1494) && (safe_add_func_uint32_t_u_u((((*g_1044) = (safe_sub_func_int32_t_s_s(((((0L != (safe_lshift_func_uint16_t_u_u((safe_unary_minus_func_int16_t_s(((65535UL && g_1632) , 0L))), 12))) > ((((safe_mul_func_int16_t_s_s((safe_add_func_int64_t_s_s((*g_1044), l_1795)), (*l_1665))) <= (**l_1731)) <= (**g_1494)) > (***g_1223))) | l_1806) == 255UL), 0xEED0B61CL))) < l_1783), 7UL)));
                    (*l_1665) |= ((****g_1561) = ((void*)0 != l_1823));
                }
                for (l_1739 = 1; (l_1739 <= 5); l_1739 += 1)
                { 
                    uint16_t *l_1828 = &g_1401;
                    int32_t l_1857[5] = {1L,1L,1L,1L,1L};
                    int i;
                    (*l_1665) ^= (g_40.f0 ^ (safe_div_func_int64_t_s_s((safe_lshift_func_uint16_t_u_u(0x0DDAL, ((*l_1828) = g_40.f4))), (safe_lshift_func_int8_t_s_u(((l_1790 = ((&g_1561 == &g_1561) < (**l_1776))) != (((safe_add_func_int32_t_s_s((safe_mul_func_uint8_t_u_u((&g_859 != (void*)0), l_1835[3])), (**l_1776))) | (***g_1223)) < l_1757)), l_1835[3])))));
                    (**l_1776) ^= ((l_1764[3] ^ (safe_mod_func_int16_t_s_s((-1L), ((safe_add_func_int8_t_s_s(l_1840, l_1808)) || (**g_1563))))) >= ((((((**g_1494) || g_20) | (*l_1665)) , (void*)0) == l_1841) || 4294967289UL));
                    (*l_1665) ^= ((18446744073709551615UL || (safe_div_func_uint64_t_u_u((((((safe_sub_func_uint16_t_u_u(g_78[3][2][1].f3, (safe_add_func_uint16_t_u_u((safe_add_func_uint8_t_u_u((safe_div_func_int32_t_s_s((safe_add_func_int16_t_s_s((~((*g_1564) | (safe_mul_func_uint8_t_u_u(l_1857[1], l_1799)))), (safe_add_func_int32_t_s_s((safe_rshift_func_uint16_t_u_s((((void*)0 == &g_927) ^ g_81[2]), 13)), l_1862)))), l_1857[1])), 0xFBL)), (**g_1494))))) < l_1857[1]) & 18446744073709551615UL) | l_1857[3]) , (**l_1776)), 18446744073709551615UL))) ^ 0xFEL);
                }
                if (((safe_add_func_uint8_t_u_u((**l_1776), 0UL)) , ((**l_1776) || (*g_1044))))
                { 
                    uint64_t l_1865 = 1UL;
                    int32_t l_1866 = 0xAA05E49BL;
                    uint16_t *l_1869 = (void*)0;
                    uint16_t *l_1870 = &l_1732[0][0].f0;
                    uint16_t *l_1871 = &g_283.f0;
                    int32_t ***l_1875[3];
                    int i;
                    for (i = 0; i < 3; i++)
                        l_1875[i] = &g_332;
                    (*l_1665) &= (((l_1865 &= ((**g_856) , (l_1840 == (**l_1776)))) > l_1866) <= ((*l_1871) &= ((*l_1870) = (safe_sub_func_uint16_t_u_u(0x21CAL, (**l_1731))))));
                    ++l_1872;
                    l_1876 = (**g_1561);
                    if ((*l_1436))
                        break;
                    return l_1877;
                }
                else
                { 
                    int16_t l_1885 = 0xCE3FL;
                    uint16_t *l_1886 = &g_40.f0;
                    (***g_1562) = ((safe_unary_minus_func_int32_t_s((((**l_1776) < (0x51CE418360D7D5A1LL && ((*g_1560) != (*g_1560)))) >= ((*l_1886) ^= (0xB5D1L > (((safe_rshift_func_uint16_t_u_s(((safe_sub_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_u(l_1885, 0)), 1L)) , l_1885), (*g_1495))) < 0xDA2BL) <= (*l_1436))))))) || (**g_491));
                }
                for (g_388 = 0; (g_388 <= 6); g_388++)
                { 
                    int32_t l_1889 = 1L;
                    uint16_t l_1890 = 1UL;
                    --l_1890;
                }
            }
            (*l_1665) |= (safe_mod_func_int32_t_s_s(((**g_1563) = (((l_1897 = (((((((*g_859) = &l_1734) != &l_1734) ^ l_1895) >= (l_1896[1][5][4] == &g_856)) , 18446744073709551610UL) != (0xF1L ^ 1L))) != l_1898) == 65535UL)), 3UL));
            (*l_1902) = l_1899;
        }
    }
    else
    { 
        struct S0 l_1905 = {2857,22147,-1,-193,534,2UL,0x14E4L,91};
        int32_t l_1979 = 0xBCCC342FL;
        int8_t l_1982[3];
        int32_t l_1983 = 0xFBB15225L;
        int32_t l_1986 = 0x4601A2E6L;
        int32_t l_1987 = 0xB9F4E040L;
        int32_t l_1988 = 8L;
        int32_t l_1989 = 0L;
        int32_t l_1990 = 0x7C319457L;
        int32_t l_1991 = 0xE0D99C6FL;
        int32_t l_1992 = 0x9602C26EL;
        int32_t *l_2007[3];
        int8_t l_2009 = 0x59L;
        int8_t l_2010 = 0x5FL;
        uint16_t l_2089 = 0x137DL;
        int8_t l_2092 = 0xF5L;
        uint32_t ***l_2106 = &g_709[1];
        uint32_t ****l_2105 = &l_2106;
        uint16_t l_2142 = 0UL;
        const int8_t l_2153 = (-1L);
        int8_t *l_2167 = &l_1802;
        int8_t *l_2168 = &l_2010;
        int8_t *l_2170 = &l_1614;
        int64_t l_2204 = 0x56D88046A7F5D362LL;
        int8_t l_2213 = 6L;
        int i;
        for (i = 0; i < 3; i++)
            l_1982[i] = 1L;
        for (i = 0; i < 3; i++)
            l_2007[i] = (void*)0;
        (*l_1665) = (****g_1561);
        for (l_1349 = 0; (l_1349 >= 23); l_1349++)
        { 
            int8_t l_1958[2][4];
            uint64_t l_1959 = 0x1A1EC552124996DCLL;
            union U1 *l_1960 = &g_40;
            int32_t l_1966 = 0x4897F36BL;
            int32_t l_1976[2];
            int64_t l_1978 = 0x1298134D15D274F5LL;
            uint16_t l_1993[2][2][3] = {{{0x08EBL,0x08EBL,0x4C83L},{0x08EBL,0x08EBL,0x4C83L}},{{0x08EBL,0x08EBL,0x4C83L},{0x08EBL,0x08EBL,0x4C83L}}};
            uint16_t l_1996 = 0x9806L;
            int i, j, k;
            for (i = 0; i < 2; i++)
            {
                for (j = 0; j < 4; j++)
                    l_1958[i][j] = 0L;
            }
            for (i = 0; i < 2; i++)
                l_1976[i] = 0x4259B01EL;
            (*****g_1560) &= ((255UL || (l_1905 , (safe_mod_func_int8_t_s_s(5L, 0x4DL)))) | (safe_unary_minus_func_uint64_t_u((0x5440CA66L && ((((**g_1562) == (void*)0) , (void*)0) != &g_175[3])))));
            for (l_1346 = 0; (l_1346 <= (-7)); l_1346--)
            { 
                uint8_t l_1911[3];
                uint64_t l_1917 = 18446744073709551612UL;
                uint8_t *l_1922 = &g_1097;
                int32_t l_1977 = 0L;
                int32_t l_1980 = 0xD1CD9318L;
                int32_t l_1981 = 2L;
                int32_t l_1984[1][1];
                int8_t l_1985 = 0L;
                uint32_t *****l_1999[5][1][2] = {{{&l_1350,&l_1350}},{{&l_1350,&l_1350}},{{&l_1350,&l_1350}},{{(void*)0,&l_1350}},{{&l_1350,&l_1350}}};
                int i, j, k;
                for (i = 0; i < 3; i++)
                    l_1911[i] = 0xE4L;
                for (i = 0; i < 1; i++)
                {
                    for (j = 0; j < 1; j++)
                        l_1984[i][j] = 4L;
                }
                if (((((l_1911[1] , (((safe_lshift_func_int16_t_s_s((l_1914 || ((l_1917 , (**g_1494)) && (((*g_499) &= l_1905.f4) >= (((safe_mul_func_uint8_t_u_u(((*l_1922) = ((**g_859) , (l_1917 || l_1911[1]))), l_1917)) == 4UL) < 1UL)))), 14)) || 0x905BL) > l_1905.f4)) > (*g_1495)) ^ 0x4679F52B563F5C3ALL) < 0x66L))
                { 
                    struct S0 *l_1924 = &g_78[3][2][1];
                    struct S0 **l_1923 = &l_1924;
                    (*l_1923) = ((*g_859) = &l_1905);
                }
                else
                { 
                    int32_t l_1937[2][3][2] = {{{0xAB5FDC30L,(-6L)},{0xAB5FDC30L,0xAB5FDC30L},{(-6L),0xAB5FDC30L}},{{0xAB5FDC30L,(-6L)},{0xAB5FDC30L,0xAB5FDC30L},{(-6L),0xAB5FDC30L}}};
                    uint64_t *****l_1941[4];
                    uint64_t *****l_1942 = &g_1940;
                    uint16_t *l_1952 = &l_1732[0][0].f0;
                    int i, j, k;
                    for (i = 0; i < 4; i++)
                        l_1941[i] = (void*)0;
                    (****g_1560) = (****g_1560);
                    (*l_1665) = (safe_mod_func_uint16_t_u_u(65529UL, (safe_div_func_int64_t_s_s((0xF3L > (safe_add_func_int16_t_s_s((*g_1495), ((((*l_1922) = (**l_1731)) , ((***g_1223) = 0xE035B18828F1FD43LL)) , (safe_mul_func_uint8_t_u_u((((g_283.f0 | (((safe_div_func_int8_t_s_s((safe_rshift_func_int8_t_s_u((l_1937[0][0][1] <= 0x5FD8L), 6)), l_1905.f0)) , 0L) || l_1938)) , (***g_1223)) , 7UL), 254UL)))))), 0xA10E33F84222009BLL))));
                    (*l_1665) &= ((l_1941[1] = g_1939[1][0][2]) == l_1942);
                    (**g_1563) = (safe_sub_func_int8_t_s_s(((*g_499) = ((((safe_lshift_func_uint16_t_u_s(((safe_mod_func_int8_t_s_s((safe_mod_func_int8_t_s_s((((!((((*l_1922) ^= ((--(*l_1952)) != 0UL)) <= (l_1937[0][0][1] & (safe_mod_func_int8_t_s_s(((~0x828F8D57DEEA8297LL) , ((*l_1436) , (*g_499))), 0xE3L)))) < (*l_1665))) > l_1958[1][1]) || l_1905.f4), l_1911[1])), l_1958[1][1])) & l_1958[1][2]), 4)) <= (-1L)) , l_1911[1]) , 0xFFL)), l_1959));
                }
                if (((l_1960 = l_1960) == (void*)0))
                { 
                    int64_t l_1961 = 0xC669AB11A8A829C5LL;
                    int32_t l_1962 = 0L;
                    int32_t l_1963 = 6L;
                    int32_t *l_1964 = &g_1792[1][0];
                    int32_t *l_1965 = &l_1210;
                    int32_t *l_1967 = &l_10;
                    int32_t *l_1968 = &g_57;
                    int32_t *l_1969 = &g_469;
                    int32_t *l_1970 = &g_1792[0][0];
                    int32_t *l_1971 = &l_1966;
                    int32_t *l_1972 = &l_1288[2];
                    int32_t *l_1973 = &l_1288[4];
                    int32_t *l_1974 = &g_384;
                    int32_t *l_1975[1][1];
                    int i, j;
                    for (i = 0; i < 1; i++)
                    {
                        for (j = 0; j < 1; j++)
                            l_1975[i][j] = (void*)0;
                    }
                    l_1993[1][0][0]--;
                    (*l_1731) = (*l_1731);
                }
                else
                { 
                    uint32_t l_2002[3];
                    int i;
                    for (i = 0; i < 3; i++)
                        l_2002[i] = 18446744073709551611UL;
                    --l_1996;
                    if ((*****g_1560))
                        continue;
                    (**l_1731) |= (((((l_2000 = l_1999[0][0][0]) == (void*)0) < l_1982[0]) < (g_2001 , ((((***g_1223) |= l_2002[2]) == ((void*)0 == (*g_856))) == l_2003))) < l_1990);
                    if ((**g_1563))
                        continue;
                    return l_1917;
                }
                l_1992 ^= ((safe_unary_minus_func_uint16_t_u((((*l_1180) &= l_1958[0][1]) < l_1911[1]))) , ((*g_1564) = (0x4013868B503E731FLL || (safe_mod_func_int8_t_s_s(l_1984[0][0], l_1984[0][0])))));
            }
            return (**l_1731);
        }
        --l_2011;
        for (g_473 = 11; (g_473 <= 40); ++g_473)
        { 
            uint16_t l_2016 = 0x42CEL;
            int64_t l_2042 = 0x455AD91C871A3B4DLL;
            int32_t l_2093 = 0L;
            (*g_182) = (void*)0;
            if (l_2016)
            { 
                uint8_t l_2025 = 7UL;
                int32_t l_2043[3];
                int32_t l_2044 = (-8L);
                const int16_t l_2045 = 0x133EL;
                int32_t l_2076[1][7] = {{0xC3C68F2FL,(-1L),(-1L),0xC3C68F2FL,(-1L),(-1L),0xC3C68F2FL}};
                int i, j;
                for (i = 0; i < 3; i++)
                    l_2043[i] = 0xAE53FC5EL;
                (*l_1436) |= ((safe_lshift_func_uint16_t_u_u(0x0EE5L, (l_2016 <= (safe_sub_func_int32_t_s_s((safe_add_func_uint32_t_u_u((((((((*g_1044) = (*g_1044)) ^ l_2016) != ((safe_sub_func_int16_t_s_s(((-5L) && (((l_2025--) < (safe_lshift_func_int8_t_s_s(((((((((*l_1665) = (safe_lshift_func_int16_t_s_s((safe_sub_func_int8_t_s_s((((safe_lshift_func_uint8_t_u_u((safe_mul_func_uint16_t_u_u(((((safe_div_func_int32_t_s_s((((safe_div_func_uint64_t_u_u((((0xA22BL && g_469) == 255UL) > (**l_1731)), l_2042)) , l_2043[2]) != (**g_1563)), (*g_1564))) != 0x234CC6A6L) != 0x275AL) , g_1581), (**l_1731))), l_2043[2])) < (**g_491)) , 0L), l_2043[2])), 2))) , 0x37D0L) <= (*g_1495)) , (**g_859)) , 0xAFL) | l_2042) > l_2043[0]), (**l_1731)))) == g_470[3][0])), 0x8D6BL)) , 0x3E84L)) , l_2044) <= l_2043[2]) ^ l_2045), (**g_491))), (**g_491)))))) | (**l_1731));
                for (g_2001 = 0; (g_2001 == 1); g_2001 = safe_add_func_uint64_t_u_u(g_2001, 6))
                { 
                    int16_t l_2059 = 0xCBE3L;
                    uint16_t *l_2060 = &l_2016;
                    uint8_t *l_2067 = (void*)0;
                    int32_t l_2068 = 3L;
                    int32_t l_2071 = 0x6CD55DCEL;
                    int32_t l_2094 = 8L;
                    uint32_t *** const **l_2101 = (void*)0;
                    uint32_t *** const **l_2102 = (void*)0;
                    uint32_t *** const *l_2104 = &g_708[4];
                    uint32_t *** const **l_2103 = &l_2104;
                }
            }
            else
            { 
                uint8_t *l_2122 = &l_1241;
                uint16_t *l_2123 = &g_1363[0][3];
                uint16_t *l_2124 = &g_1401;
                uint32_t l_2125 = 0xF3E56AB1L;
                uint32_t *l_2133 = &l_1895;
                int8_t l_2143 = (-1L);
                uint32_t *l_2152 = (void*)0;
                if ((l_2093 && (((*l_2124) = (0x4BL == ((l_1905 , ((*l_2123) = (safe_lshift_func_int8_t_s_u((+(safe_mod_func_uint8_t_u_u(0x81L, (safe_lshift_func_int16_t_s_u(l_2016, (((l_2042 , (safe_mul_func_uint8_t_u_u(((*l_2122) = ((safe_lshift_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_u(g_20, g_1401)), 2)) , 4UL)), 250UL))) <= (**g_1494)) > (*g_1495))))))), 5)))) | 0x1926L))) < g_143.f5)))
                { 
                    return l_2125;
                }
                else
                { 
                    uint64_t l_2140 = 0x32857F4B7E23784ALL;
                    int16_t *l_2141[4];
                    int i;
                    for (i = 0; i < 4; i++)
                        l_2141[i] = &g_78[3][2][1].f6;
                    l_2143 |= ((safe_lshift_func_uint8_t_u_s((!((safe_div_func_uint8_t_u_u((safe_rshift_func_int16_t_s_u((((0x57A9L & (func_53(l_2133) , (g_388 |= (!(((((*g_1044) &= ((safe_div_func_uint32_t_u_u((g_283.f4 <= 1L), ((g_101 = (g_78[3][2][1].f6 = ((((*g_1495) = 0x88C1L) < ((+(safe_mod_func_uint32_t_u_u(((void*)0 == (*g_1430)), (*g_492)))) ^ 1L)) != l_2140))) , (-5L)))) < l_2140)) < 0x67AE2C8AD088AFBFLL) == 0x9AADE362L) == 1L))))) , l_2016) ^ (*****g_1560)), 1)), 2UL)) <= l_2142)), 6)) || l_2140);
                    (**g_1563) = (*g_1564);
                }
                (****g_1561) = (((4294967293UL & (**g_491)) <= (l_2016 | (safe_div_func_int16_t_s_s(((safe_rshift_func_int8_t_s_s((((safe_mod_func_uint16_t_u_u(0x3326L, (safe_mod_func_int8_t_s_s(((*g_499) = 0x04L), (((((void*)0 != l_2152) || l_2153) & g_1632) | (*g_1495)))))) != (-8L)) | g_471[2]), 4)) < (*g_1044)), 0xADBDL)))) ^ (*****g_1560));
            }
            l_2154[5]++;
        }
        if ((((*g_499) |= (*l_1436)) <= ((((*g_492) ^ (((**g_1494) = ((l_2007[2] == (void*)0) && (l_2157 == ((**g_1494) , (((safe_lshift_func_int8_t_s_u(((*l_2170) ^= (+((safe_div_func_int8_t_s_s((safe_div_func_int32_t_s_s((safe_sub_func_int8_t_s_s(((*l_2168) ^= ((*l_2167) = ((((*l_1665) ^= (6UL < (**l_1731))) ^ (**l_1731)) > 0x34L))), (**l_1731))), (*g_1564))), l_2169)) == 5UL))), 0)) , g_2171) & l_2172[5]))))) == 65534UL)) || (**l_1731)) , 250UL)))
        { 
            const int8_t l_2175 = 0x5AL;
            uint16_t l_2180[6][2][3] = {{{0x9D7FL,0xC853L,0UL},{0x7C34L,0x7C34L,0x9739L}},{{0x9D7FL,0x9739L,0xC853L},{0xC853L,0x9739L,0x9D7FL}},{{0x9739L,0x7C34L,0x7C34L},{0UL,0xC853L,0x9D7FL}},{{0x4761L,0x787BL,0xC853L},{0x4761L,65534UL,0x9739L}},{{0UL,0x7C91L,0UL},{0x9739L,65534UL,0x4761L}},{{0xC853L,0x787BL,0x4761L},{0x9D7FL,0xC853L,0UL}}};
            int i, j, k;
            for (l_2009 = 0; (l_2009 > 3); l_2009 = safe_add_func_int32_t_s_s(l_2009, 5))
            { 
                (*g_1564) ^= ((((&g_1044 == ((l_2175 , (*g_1495)) , &g_1044)) <= (safe_div_func_uint64_t_u_u((safe_lshift_func_int16_t_s_u(((*l_1436) && ((void*)0 == &l_1311)), g_143.f1)), (*g_176)))) == 65535UL) && (*l_1665));
                return l_2180[0][1][2];
            }
        }
        else
        { 
            uint32_t l_2181 = 0UL;
            int32_t l_2188 = 0L;
            int64_t l_2191[4][4] = {{1L,(-2L),(-2L),1L},{1L,(-2L),(-2L),1L},{1L,(-2L),(-2L),1L},{1L,(-2L),(-2L),1L}};
            int32_t l_2192 = 7L;
            int32_t l_2193 = 0x7C21B64FL;
            int32_t l_2194 = 1L;
            int32_t l_2195[2];
            int64_t l_2196 = (-7L);
            int64_t l_2197 = 0x80D14E951490E2E5LL;
            uint32_t l_2199 = 1UL;
            int64_t l_2212 = 0L;
            int32_t *l_2237 = &g_1792[1][0];
            int i, j;
            for (i = 0; i < 2; i++)
                l_2195[i] = 0xE802C1A7L;
            l_2181--;
            (****g_1560) = (void*)0;
            for (l_2091 = 7; (l_2091 != 49); l_2091 = safe_add_func_int32_t_s_s(l_2091, 7))
            { 
                int32_t l_2187 = 7L;
                int32_t l_2189 = 0xC39638A0L;
                int32_t l_2190[2][4][3] = {{{0xC3247918L,0xC3247918L,0xC3247918L},{0x70613E46L,0x70613E46L,0x70613E46L},{0xC3247918L,0xC3247918L,0xC3247918L},{0x70613E46L,0x70613E46L,0x70613E46L}},{{0xC3247918L,0xC3247918L,0xC3247918L},{0x70613E46L,0x70613E46L,0x70613E46L},{0xC3247918L,0xC3247918L,0xC3247918L},{0x70613E46L,0x70613E46L,0x70613E46L}}};
                uint32_t **l_2205[3];
                int32_t l_2215 = 0x843AA5D0L;
                int i, j, k;
                for (i = 0; i < 3; i++)
                    l_2205[i] = &g_492;
                --l_2199;
                for (g_33 = 16; (g_33 > 24); ++g_33)
                { 
                    uint16_t **l_2211 = &l_2210;
                    int32_t l_2214 = 0x1E52E4A8L;
                    int32_t l_2216 = (-8L);
                    int32_t l_2217 = 0xFB45E43EL;
                    int32_t l_2218[3][1];
                    int i, j;
                    for (i = 0; i < 3; i++)
                    {
                        for (j = 0; j < 1; j++)
                            l_2218[i][j] = 0xA4B9D711L;
                    }
                    (*l_1665) ^= (((*g_1044) = (l_2204 >= l_2187)) , (((void*)0 != l_2205[0]) > (safe_rshift_func_uint16_t_u_s((safe_unary_minus_func_int8_t_s((((+0x4099L) ^ (((*l_2211) = l_2210) != &g_1401)) , 0L))), 7))));
                    l_2212 &= 1L;
                    l_2219[2][5][1]++;
                }
            }
        }
    }
    return (*l_1665);
}



static uint8_t  func_3(int32_t  p_4, int8_t  p_5)
{ 
    uint16_t l_1040 = 4UL;
    int32_t l_1067 = 0xD82F86BDL;
    union U1 l_1078 = {65535UL};
    struct S0 l_1086 = {4676,30992,-2,-129,69,5UL,0x6458L,32};
    int32_t *l_1087 = &g_219;
    for (g_469 = 0; (g_469 <= 5); g_469 += 1)
    { 
        uint8_t l_1045 = 255UL;
        int32_t * const *l_1046[2];
        int i;
        for (i = 0; i < 2; i++)
            l_1046[i] = &g_333;
        if (p_5)
        { 
            uint8_t l_1030 = 0x60L;
            int32_t l_1047[7][7] = {{1L,1L,1L,1L,1L,1L,1L},{0x621E82F3L,0xA50E2124L,0x621E82F3L,0xA50E2124L,0x621E82F3L,0xA50E2124L,0x621E82F3L},{1L,1L,1L,1L,1L,1L,1L},{0x621E82F3L,0xA50E2124L,0x621E82F3L,0xA50E2124L,0x621E82F3L,0xA50E2124L,0x621E82F3L},{1L,1L,1L,1L,1L,1L,1L},{0x621E82F3L,0xA50E2124L,0x621E82F3L,0xA50E2124L,0x621E82F3L,0xA50E2124L,0x621E82F3L},{1L,1L,1L,1L,1L,1L,1L}};
            int32_t l_1048[2];
            int i, j;
            for (i = 0; i < 2; i++)
                l_1048[i] = 1L;
            l_1048[0] = (g_384 |= (l_1047[1][6] |= (safe_sub_func_uint16_t_u_u(((safe_add_func_uint8_t_u_u((safe_add_func_int16_t_s_s(((0xDB06E518L < (l_1030 > (((safe_add_func_int32_t_s_s((((((p_4 , (safe_add_func_uint32_t_u_u((safe_sub_func_int64_t_s_s(((safe_mul_func_uint8_t_u_u(((*g_857) , ((safe_unary_minus_func_uint32_t_u(p_5)) | (l_1040 & (safe_add_func_uint16_t_u_u((((void*)0 != g_1043) , 0x5742L), l_1040))))), (-4L))) , l_1045), p_4)), l_1045))) , p_5) & l_1030) , (void*)0) != l_1046[0]), (**g_182))) , g_143.f0) && 65533UL))) < 0x194EL), 0xD6A1L)), p_4)) , l_1030), 7UL))));
            g_384 = ((safe_div_func_uint8_t_u_u((safe_sub_func_int32_t_s_s((safe_div_func_uint16_t_u_u(l_1040, p_5)), ((**g_491) = (safe_mul_func_int8_t_s_s((safe_sub_func_int64_t_s_s(l_1040, p_5)), (safe_sub_func_uint64_t_u_u((!(safe_add_func_uint64_t_u_u((p_5 == (!((safe_add_func_int16_t_s_s(p_4, ((void*)0 != (*g_1043)))) <= (**g_1043)))), (*g_1044)))), 0xDEA8EF85DBF87DABLL))))))), p_5)) >= l_1040);
            return l_1047[4][5];
        }
        else
        { 
            (*g_182) = (void*)0;
            return g_470[1][0];
        }
    }
    l_1067 = 0x3195E50AL;
    (*l_1087) = (safe_sub_func_int8_t_s_s((l_1086.f3 = (safe_sub_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_u((safe_sub_func_int16_t_s_s(g_390, p_5)), 6)), (((++(**g_491)) & (l_1078 , l_1086.f4)) & 0x8CL)))), l_1086.f7));
    return (*l_1087);
}



static uint32_t  func_6(int16_t  p_7, uint32_t  p_8, uint8_t  p_9)
{ 
    const uint8_t l_755 = 255UL;
    int64_t l_762 = 0L;
    int32_t l_774[5] = {0x8B8438E5L,0x8B8438E5L,0x8B8438E5L,0x8B8438E5L,0x8B8438E5L};
    uint32_t ***l_810 = &g_709[4];
    uint32_t ****l_809 = &l_810;
    uint64_t * const l_842 = &g_283.f3;
    uint32_t ****l_849 = (void*)0;
    int64_t *l_861 = &g_470[3][0];
    int64_t ** const l_860 = &l_861;
    uint32_t l_866 = 0x7FCBE4D2L;
    int32_t ***l_901 = &g_332;
    const int16_t l_916 = 0x50C4L;
    int8_t **l_953 = &g_499;
    int16_t l_969 = 0xAE68L;
    uint8_t l_970 = 0x0AL;
    int32_t l_975 = 0xA175F156L;
    int32_t *l_1001 = (void*)0;
    int32_t *l_1002[5];
    int16_t l_1003 = (-3L);
    uint32_t *** const *l_1018 = (void*)0;
    uint32_t *** const **l_1017 = &l_1018;
    uint16_t *l_1023 = &g_40.f4;
    int i;
    for (i = 0; i < 5; i++)
        l_1002[i] = &g_384;
    for (g_222 = (-26); (g_222 < 19); g_222 = safe_add_func_int64_t_s_s(g_222, 6))
    { 
        uint32_t l_756 = 4294967290UL;
        const union U1 l_769 = {0x6351L};
        int32_t l_775[3];
        struct S0 **l_858 = &g_857;
        uint32_t l_900[1][7][6] = {{{0xF299ED7BL,0xF299ED7BL,0xFB4FDCEFL,0xF299ED7BL,0xF299ED7BL,0xFB4FDCEFL},{0xF299ED7BL,0xF299ED7BL,0xFB4FDCEFL,0xF299ED7BL,0xF299ED7BL,0xFB4FDCEFL},{0xF299ED7BL,0xF299ED7BL,0xFB4FDCEFL,0xF299ED7BL,0xF299ED7BL,0xFB4FDCEFL},{0xF299ED7BL,0xF299ED7BL,0xFB4FDCEFL,0xF299ED7BL,0xF299ED7BL,0xFB4FDCEFL},{0xF299ED7BL,0xF299ED7BL,0xFB4FDCEFL,0xF299ED7BL,0xF299ED7BL,0xFB4FDCEFL},{0xF299ED7BL,0xF299ED7BL,0xFB4FDCEFL,0xF299ED7BL,0xF299ED7BL,0xFB4FDCEFL},{0xF299ED7BL,0xF299ED7BL,0xFB4FDCEFL,0xE2C0A1F9L,0xE2C0A1F9L,0xF299ED7BL}}};
        int32_t ***l_903 = &g_332;
        uint32_t * const *l_912 = &g_492;
        uint32_t * const **l_911 = &l_912;
        uint32_t * const ***l_910[6] = {&l_911,&l_911,(void*)0,&l_911,&l_911,(void*)0};
        uint32_t * const ****l_909 = &l_910[3];
        const int8_t ** const l_952 = (void*)0;
        int32_t l_980[7] = {0x73FA5B75L,0x73FA5B75L,0x13FDBFCBL,0x73FA5B75L,0x73FA5B75L,0x13FDBFCBL,0x73FA5B75L};
        uint32_t l_985 = 0xF392B44BL;
        int8_t *l_986 = &g_81[0];
        int32_t *l_988[7][1];
        int i, j, k;
        for (i = 0; i < 3; i++)
            l_775[i] = 1L;
        for (i = 0; i < 7; i++)
        {
            for (j = 0; j < 1; j++)
                l_988[i][j] = &l_775[1];
        }
        for (g_283.f3 = 0; (g_283.f3 < 42); g_283.f3++)
        { 
            int32_t l_758[3];
            uint64_t ** const *l_806 = &g_175[3];
            int32_t l_808 = 4L;
            uint32_t ***l_851 = &g_491;
            uint32_t ****l_850 = &l_851;
            union U1 **l_855 = &g_105[1];
            int32_t *l_894 = &g_384;
            const uint8_t l_899 = 249UL;
            const uint16_t l_947[2][2][7] = {{{1UL,0xEC10L,0x66D4L,0xE951L,0x66D4L,0xEC10L,1UL},{0xEC10L,0xBEC8L,0xDFB1L,0x748BL,0x3A00L,0x66D4L,0x3A00L}},{{0xEC10L,0x3A00L,0x3A00L,0xEC10L,0xF469L,1UL,0xE951L},{1UL,1UL,0xDFB1L,0xF469L,0xF469L,0xDFB1L,1UL}}};
            int i, j, k;
            for (i = 0; i < 3; i++)
                l_758[i] = 0x02DA7EFEL;
            for (g_2 = 0; (g_2 <= 13); ++g_2)
            { 
                int32_t *l_750[6];
                uint16_t *l_757 = &g_40.f0;
                int32_t l_805 = 8L;
                const int8_t l_814 = 0xFEL;
                int16_t *l_815 = &g_101;
                uint64_t *l_843 = (void*)0;
                int i;
                for (i = 0; i < 6; i++)
                    l_750[i] = &g_57;
                (*g_182) = ((*g_332) = l_750[2]);
                if ((((*l_757) = (safe_rshift_func_int8_t_s_u(l_755, l_756))) && (((((*g_333) > (l_758[1] , l_755)) <= ((safe_unary_minus_func_int16_t_s((((*g_492) &= (safe_mul_func_int8_t_s_s((((*g_176) ^ (0x1243L | p_7)) < l_756), p_8))) , l_758[0]))) , 4294967294UL)) & l_762) >= g_531)))
                { 
                    const uint32_t l_763 = 0x988C2687L;
                    if (p_9)
                        break;
                    if (l_763)
                        break;
                }
                else
                { 
                    uint8_t l_768 = 0x50L;
                    int64_t *l_770 = (void*)0;
                    int64_t *l_771 = &g_472[1];
                    int64_t *l_772 = &l_762;
                    int32_t l_773 = 0x5866D8DFL;
                    uint32_t ***l_802 = &g_709[1];
                    int16_t l_804[7] = {1L,(-1L),1L,1L,(-1L),1L,1L};
                    int8_t *l_807[5][3] = {{&g_390,&g_390,&g_390},{&g_390,&g_2,&g_390},{&g_390,&g_390,&g_390},{&g_390,&g_2,&g_390},{&g_390,&g_390,&g_390}};
                    int i, j;
                    l_773 &= (safe_div_func_uint64_t_u_u((+((((((*g_176) = (~(**g_332))) || (g_143 , (-1L))) == (l_768 | (((l_769 , g_143) , ((*l_772) = ((*l_771) &= g_89))) != p_7))) , p_8) > p_7)), 0x5BB39F370337A359LL));
                    ++g_776;
                    if (l_758[1])
                        continue;
                    g_384 |= (safe_div_func_int16_t_s_s((safe_mod_func_int32_t_s_s(((l_808 ^= (l_774[3] = (((void*)0 == &g_470[1][0]) != (safe_unary_minus_func_uint8_t_u((safe_rshift_func_int8_t_s_u(((((l_805 &= (safe_sub_func_int16_t_s_s((p_7 = ((*g_176) , ((((g_349 ^ (safe_lshift_func_uint16_t_u_s((safe_mul_func_uint16_t_u_u((safe_lshift_func_int16_t_s_u((safe_rshift_func_uint8_t_u_s((((safe_lshift_func_int16_t_s_s((safe_div_func_int16_t_s_s(((safe_mul_func_uint8_t_u_u((&g_709[2] != l_802), ((((~(func_53(&p_8) , l_758[1])) < 0L) == l_775[0]) | g_283.f0))) ^ 1L), p_7)), p_9)) == l_758[1]) ^ 0x3653L), l_804[4])), p_9)), g_388)), 0))) ^ p_9) >= g_391) && 0xD6409BBAL))), l_758[1]))) , l_806) != &g_175[3]) <= 0xA7E9L), 7))))))) & g_283.f4), (*g_492))), p_9));
                }
                if ((((((void*)0 == l_809) <= (p_9 >= p_7)) , (safe_lshift_func_int16_t_s_s(((*l_815) = (+l_814)), (safe_add_func_int8_t_s_s((safe_div_func_uint32_t_u_u((p_8 > (((safe_sub_func_int8_t_s_s((+(safe_div_func_uint16_t_u_u(g_143.f4, p_8))), g_143.f4)) < 7UL) <= (**g_491))), p_9)), 0L))))) == 8UL))
                { 
                    int32_t *l_825 = &g_469;
                    uint64_t l_832 = 18446744073709551613UL;
                    uint32_t ***l_845 = &g_491;
                    uint32_t ****l_844[2];
                    uint32_t *****l_846 = (void*)0;
                    uint32_t *****l_847 = (void*)0;
                    uint32_t *****l_848[3];
                    int i;
                    for (i = 0; i < 2; i++)
                        l_844[i] = &l_845;
                    for (i = 0; i < 3; i++)
                        l_848[i] = (void*)0;
                    (**g_332) = (*g_333);
                    if (p_8)
                        break;
                    (*g_332) = l_825;
                    (*l_825) ^= (g_143 , (safe_mod_func_uint8_t_u_u((safe_add_func_int8_t_s_s((safe_sub_func_uint8_t_u_u(l_832, 0xA6L)), (((!(p_8 & p_8)) <= p_7) ^ ((-2L) || 0xB1AE2A30L)))), 0x74L)));
                    (*l_825) = ((safe_lshift_func_int8_t_s_u(((**l_809) == (void*)0), 5)) >= (safe_sub_func_int16_t_s_s((safe_sub_func_int8_t_s_s((safe_add_func_int64_t_s_s((l_755 != (((l_842 == l_843) == p_7) && (((((l_849 = l_844[0]) == l_850) & p_7) != l_808) <= p_8))), 0xC0A6E55BB9CB7144LL)), 0x2DL)), g_143.f4)));
                }
                else
                { 
                    uint32_t l_852 = 18446744073709551606UL;
                    int32_t l_867 = 0xD181211DL;
                    uint32_t *l_872 = &g_141[2][3];
                    l_852++;
                    (*g_333) = (((*g_492) |= ((void*)0 == l_855)) <= (-1L));
                    l_867 &= (func_53((((((((l_858 = g_856) == g_859) <= ((void*)0 == l_860)) , (!((((p_9 < (safe_lshift_func_uint8_t_u_s(p_8, (((!p_8) < g_391) < 0xA4AA6B8782407CB1LL)))) || 0UL) >= p_9) == 255UL))) && p_7) != p_9) , &p_8)) , l_866);
                    l_867 = l_867;
                    l_774[0] = ((**g_332) ^= (safe_div_func_int16_t_s_s(l_852, (safe_rshift_func_int8_t_s_u((g_776 | ((void*)0 != l_872)), ((safe_add_func_uint32_t_u_u((((*l_757) = (safe_lshift_func_uint16_t_u_s((safe_rshift_func_uint16_t_u_s((safe_div_func_int8_t_s_s((safe_mod_func_uint16_t_u_u(((p_7 & ((0L >= (p_7 && 0xBE654B5DL)) && g_283.f3)) < l_867), g_141[2][5])), 0x76L)), 3)), 4))) , 0xC0E0EA2FL), l_769.f4)) | 0xF95F5EC7L))))));
                }
            }
            (**g_332) = (safe_sub_func_int32_t_s_s(((safe_div_func_uint8_t_u_u(((p_8 || (-8L)) <= (((p_7 >= ((((*l_855) != (*g_195)) & 0x36L) ^ ((safe_add_func_int16_t_s_s(((p_9 < p_8) != l_769.f4), p_9)) >= p_8))) < l_762) , g_283.f2)), 0xA9L)) , 0x8664A632L), 0L));
            if (((safe_div_func_int8_t_s_s(l_762, (safe_add_func_uint8_t_u_u(0x9DL, ((((((+(*g_176)) <= 7L) & (((*l_894) |= (**g_182)) > ((safe_lshift_func_int16_t_s_s((((safe_mul_func_int16_t_s_s((l_775[0] || ((((((l_899 >= l_775[0]) != l_900[0][1][0]) >= p_9) || l_762) != p_9) == p_9)), p_9)) < p_8) <= l_775[0]), l_762)) | 0xFBL))) & 4294967290UL) , (*l_894)) , p_7))))) && 0x234DA86FL))
            { 
                int32_t ****l_902[5];
                uint8_t *l_921[2][7] = {{&g_776,&g_776,&g_349,&g_349,&g_776,&g_776,&g_122},{&g_776,&g_776,&g_349,&g_349,&g_776,&g_776,&g_122}};
                int i, j;
                for (i = 0; i < 5; i++)
                    l_902[i] = (void*)0;
                l_775[0] ^= ((*l_894) = (((***l_901) = ((p_7 , &g_182) == (g_904 = (l_903 = l_901)))) ^ 0UL));
                (*l_855) = ((((safe_mul_func_uint8_t_u_u((g_122 = (p_9 <= (((safe_mul_func_uint8_t_u_u((l_909 == (void*)0), (*g_499))) ^ (safe_unary_minus_func_uint16_t_u((safe_add_func_int8_t_s_s(l_916, (safe_mod_func_int16_t_s_s((g_70 > (((-10L) <= 6L) <= (*g_492))), p_7))))))) != p_7))), g_143.f3)) & p_8) ^ 0x28E958B3L) , (*l_855));
                (***l_903) = (***l_903);
                for (p_7 = 0; (p_7 > 12); p_7 = safe_add_func_uint16_t_u_u(p_7, 9))
                { 
                    int16_t l_924[3];
                    int i;
                    for (i = 0; i < 3; i++)
                        l_924[i] = 0x557EL;
                    (**l_901) = (**l_901);
                    (*g_182) = (**g_904);
                    (*g_333) = (*g_333);
                    if (l_924[2])
                        break;
                    (***l_903) = (((&l_850 == (g_926 = (g_925[4] = &l_849))) <= (((*g_492) , ((p_9 <= (1L & (safe_mul_func_uint16_t_u_u(0x43B2L, (((***l_806)--) <= 0xCEC44A1A5B76A4CALL))))) , p_8)) >= g_391)) == (-4L));
                }
                for (g_40.f4 = 0; g_40.f4 < 5; g_40.f4 += 1)
                {
                    l_774[g_40.f4] = 0xAB343911L;
                }
            }
            else
            { 
                return (*l_894);
            }
            if (p_9)
            { 
                for (p_8 = 0; p_8 < 5; p_8 += 1)
                {
                    g_709[p_8] = (void*)0;
                }
                (*l_894) &= (***l_901);
                for (g_189 = 0; (g_189 <= 0); g_189 += 1)
                { 
                    int i, j;
                    (*g_332) = (void*)0;
                    return g_470[g_189][g_189];
                }
            }
            else
            { 
                uint8_t l_939 = 0xE2L;
                uint16_t *l_940 = &g_473;
                int32_t l_948 = 0L;
                int8_t *l_951 = &g_390;
                int16_t *l_955[3][5][3];
                uint8_t *l_971 = &l_939;
                int i, j, k;
                for (i = 0; i < 3; i++)
                {
                    for (j = 0; j < 5; j++)
                    {
                        for (k = 0; k < 3; k++)
                            l_955[i][j][k] = &g_471[3];
                    }
                }
                l_948 |= ((safe_lshift_func_int16_t_s_s((safe_mod_func_uint16_t_u_u((safe_add_func_int8_t_s_s(0xC9L, l_939)), (--(*l_940)))), (safe_rshift_func_uint8_t_u_s(((safe_sub_func_uint8_t_u_u((0x4CFEE0E8AC6A550FLL != p_8), p_7)) > l_939), ((-10L) <= l_947[1][0][5]))))) , (*g_333));
                (*g_333) = (((safe_rshift_func_int16_t_s_u(((((*l_951) = p_8) , ((*l_855) = (*l_855))) == (p_7 , (((*l_894) = (l_952 == ((*l_894) , (g_954[6][2][3] = l_953)))) , (void*)0))), 13)) == (***l_901)) , 6L);
                for (g_122 = 0; (g_122 <= 3); g_122 += 1)
                { 
                    return l_939;
                }
                g_219 = ((*g_333) = (255UL <= ((safe_add_func_int16_t_s_s(((p_9 , (safe_mul_func_uint8_t_u_u(((*l_971) ^= (((safe_lshift_func_uint8_t_u_u((g_283.f3 ^ (safe_mod_func_uint8_t_u_u((!((*l_894) = ((p_9 || (0x69BE588FL & (((safe_add_func_uint64_t_u_u(((*g_176) |= (safe_mul_func_uint16_t_u_u(g_472[1], ((-1L) != g_78[3][2][1].f4)))), l_969)) & (-3L)) | p_9))) | (***l_901)))), l_970))), (***l_901))) , p_7) , g_143.f5)), 7UL))) && (***l_901)), p_8)) <= g_78[3][2][1].f5)));
            }
        }
        (*g_182) = (**l_903);
        l_774[0] &= (~((safe_mul_func_int8_t_s_s((***l_901), ((*l_986) = ((***l_901) && (l_975 , (p_7 && (safe_mul_func_uint16_t_u_u((safe_sub_func_uint16_t_u_u((l_980[6] | ((p_8 ^ (safe_sub_func_int32_t_s_s((safe_lshift_func_uint8_t_u_u((g_283.f3 > p_8), l_985)), (***l_901)))) >= p_7)), (***l_903))), 0x9F60L)))))))) >= g_987));
        return p_9;
    }
    l_1003 = (p_9 || (safe_div_func_uint8_t_u_u(((((safe_mod_func_int64_t_s_s((safe_add_func_int16_t_s_s(((safe_lshift_func_uint16_t_u_s(0xA331L, 0)) < ((1L ^ ((**g_332) = (safe_mul_func_int8_t_s_s((safe_sub_func_int64_t_s_s(0x756738465C82C9E7LL, (*g_176))), ((-4L) && (&g_176 == &l_842)))))) <= g_384)), g_143.f0)), p_8)) || (***l_901)) > l_970) , g_78[3][2][1].f5), p_7)));
    (*g_182) = (*g_182);
    g_219 &= ((safe_lshift_func_int16_t_s_s(0xD41FL, 4)) || (safe_sub_func_int64_t_s_s((((**g_332) = (((**l_860) |= ((~((safe_div_func_int64_t_s_s((safe_div_func_uint32_t_u_u((safe_lshift_func_uint16_t_u_u((safe_rshift_func_int8_t_s_s(p_8, (((((((*l_1017) = l_849) != (void*)0) != (((*l_1023) = (p_8 , (0UL < ((((*g_492) &= (safe_div_func_uint16_t_u_u(((safe_sub_func_int8_t_s_s(((**l_809) == (**l_809)), 0x4DL)) >= 8UL), g_143.f6))) < (-1L)) , g_391)))) , p_7)) & p_7) == g_143.f2) == p_7))), 1)), 2UL)), 1L)) || (-4L))) > g_89)) != 0xEFAE9AFA7A56CA00LL)) , (***l_901)), p_9)));
    return p_7;
}



static uint8_t  func_12(uint32_t  p_13, union U1  p_14, int64_t  p_15, int16_t  p_16, uint32_t  p_17)
{ 
    int32_t *l_477 = &g_57;
    int32_t *l_478 = &g_219;
    int32_t *l_479 = &g_384;
    int32_t *l_480 = &g_469;
    int32_t l_481[1][3][2] = {{{8L,1L},{1L,8L},{1L,1L}}};
    int32_t *l_482 = &g_469;
    int32_t *l_483 = &g_469;
    int32_t *l_484 = &g_57;
    int32_t *l_485 = &l_481[0][1][0];
    int32_t *l_486 = &g_219;
    int32_t *l_487[1];
    uint64_t l_488 = 18446744073709551615UL;
    uint32_t **l_494[2][2][3] = {{{&g_492,&g_492,&g_492},{&g_492,&g_492,&g_492}},{{&g_492,&g_492,&g_492},{&g_492,&g_492,&g_492}}};
    uint64_t **l_530 = &g_176;
    uint32_t l_592[6][6] = {{0x433E3737L,1UL,0xE0AFCCCCL,0xE05AD197L,1UL,0xE05AD197L},{0x433E3737L,1UL,0x433E3737L,0xE05AD197L,1UL,0xE0AFCCCCL},{0x433E3737L,0xF5E99D1DL,0xE05AD197L,0xE05AD197L,0xF5E99D1DL,0x433E3737L},{0x433E3737L,1UL,0xE0AFCCCCL,0xE05AD197L,1UL,0xE05AD197L},{0x433E3737L,1UL,0x433E3737L,0xE05AD197L,1UL,0xE0AFCCCCL},{0x433E3737L,0xF5E99D1DL,0xE05AD197L,0xE05AD197L,0xF5E99D1DL,0x433E3737L}};
    uint32_t ****l_684 = (void*)0;
    uint32_t *****l_683 = &l_684;
    struct S0 l_692[5][5][5] = {{{{-9103,6200,3,795,442,0x64E1L,0x26A0L,-57},{14623,22587,10,-439,453,1UL,0L,28},{14577,2862,9,-978,116,0UL,0xE9F0L,84},{7599,30054,4,-128,692,65527UL,1L,-127},{21198,23404,-10,-74,415,0xF413L,-6L,71}},{{-4390,9207,-14,246,478,65530UL,0x4530L,-101},{10850,21040,14,304,269,0x4A4FL,1L,24},{3787,6580,3,-333,377,0xF27CL,0x4AF3L,-79},{3787,6580,3,-333,377,0xF27CL,0x4AF3L,-79},{10850,21040,14,304,269,0x4A4FL,1L,24}},{{-9103,6200,3,795,442,0x64E1L,0x26A0L,-57},{14623,22587,10,-439,453,1UL,0L,28},{14577,2862,9,-978,116,0UL,0xE9F0L,84},{7599,30054,4,-128,692,65527UL,1L,-127},{21198,23404,-10,-74,415,0xF413L,-6L,71}},{{-4390,9207,-14,246,478,65530UL,0x4530L,-101},{10850,21040,14,304,269,0x4A4FL,1L,24},{3787,6580,3,-333,377,0xF27CL,0x4AF3L,-79},{3787,6580,3,-333,377,0xF27CL,0x4AF3L,-79},{10850,21040,14,304,269,0x4A4FL,1L,24}},{{-9103,6200,3,795,442,0x64E1L,0x26A0L,-57},{14623,22587,10,-439,453,1UL,0L,28},{14577,2862,9,-978,116,0UL,0xE9F0L,84},{7599,30054,4,-128,692,65527UL,1L,-127},{21198,23404,-10,-74,415,0xF413L,-6L,71}}},{{{-4390,9207,-14,246,478,65530UL,0x4530L,-101},{10850,21040,14,304,269,0x4A4FL,1L,24},{3787,6580,3,-333,377,0xF27CL,0x4AF3L,-79},{3787,6580,3,-333,377,0xF27CL,0x4AF3L,-79},{10850,21040,14,304,269,0x4A4FL,1L,24}},{{-9103,6200,3,795,442,0x64E1L,0x26A0L,-57},{14623,22587,10,-439,453,1UL,0L,28},{14577,2862,9,-978,116,0UL,0xE9F0L,84},{7599,30054,4,-128,692,65527UL,1L,-127},{21198,23404,-10,-74,415,0xF413L,-6L,71}},{{-4390,9207,-14,246,478,65530UL,0x4530L,-101},{10850,21040,14,304,269,0x4A4FL,1L,24},{3787,6580,3,-333,377,0xF27CL,0x4AF3L,-79},{3787,6580,3,-333,377,0xF27CL,0x4AF3L,-79},{10850,21040,14,304,269,0x4A4FL,1L,24}},{{-9103,6200,3,795,442,0x64E1L,0x26A0L,-57},{14623,22587,10,-439,453,1UL,0L,28},{14577,2862,9,-978,116,0UL,0xE9F0L,84},{7599,30054,4,-128,692,65527UL,1L,-127},{21198,23404,-10,-74,415,0xF413L,-6L,71}},{{-4390,9207,-14,246,478,65530UL,0x4530L,-101},{10850,21040,14,304,269,0x4A4FL,1L,24},{3787,6580,3,-333,377,0xF27CL,0x4AF3L,-79},{3787,6580,3,-333,377,0xF27CL,0x4AF3L,-79},{10850,21040,14,304,269,0x4A4FL,1L,24}}},{{{-9103,6200,3,795,442,0x64E1L,0x26A0L,-57},{14623,22587,10,-439,453,1UL,0L,28},{14577,2862,9,-978,116,0UL,0xE9F0L,84},{7599,30054,4,-128,692,65527UL,1L,-127},{21198,23404,-10,-74,415,0xF413L,-6L,71}},{{-4390,9207,-14,246,478,65530UL,0x4530L,-101},{10850,21040,14,304,269,0x4A4FL,1L,24},{10850,21040,14,304,269,0x4A4FL,1L,24},{10850,21040,14,304,269,0x4A4FL,1L,24},{-17105,7465,-4,531,67,0xC884L,0L,64}},{{-22936,2220,4,-575,526,0x8252L,0L,-67},{-6170,874,7,137,128,6UL,0xB48BL,112},{21198,23404,-10,-74,415,0xF413L,-6L,71},{14623,22587,10,-439,453,1UL,0L,28},{-22011,11375,14,521,441,0UL,0x54B1L,-42}},{{-20439,802,12,-246,188,6UL,1L,-75},{-17105,7465,-4,531,67,0xC884L,0L,64},{10850,21040,14,304,269,0x4A4FL,1L,24},{10850,21040,14,304,269,0x4A4FL,1L,24},{-17105,7465,-4,531,67,0xC884L,0L,64}},{{-22936,2220,4,-575,526,0x8252L,0L,-67},{-6170,874,7,137,128,6UL,0xB48BL,112},{21198,23404,-10,-74,415,0xF413L,-6L,71},{14623,22587,10,-439,453,1UL,0L,28},{-22011,11375,14,521,441,0UL,0x54B1L,-42}}},{{{-20439,802,12,-246,188,6UL,1L,-75},{-17105,7465,-4,531,67,0xC884L,0L,64},{10850,21040,14,304,269,0x4A4FL,1L,24},{10850,21040,14,304,269,0x4A4FL,1L,24},{-17105,7465,-4,531,67,0xC884L,0L,64}},{{-22936,2220,4,-575,526,0x8252L,0L,-67},{-6170,874,7,137,128,6UL,0xB48BL,112},{21198,23404,-10,-74,415,0xF413L,-6L,71},{14623,22587,10,-439,453,1UL,0L,28},{-22011,11375,14,521,441,0UL,0x54B1L,-42}},{{-20439,802,12,-246,188,6UL,1L,-75},{-17105,7465,-4,531,67,0xC884L,0L,64},{10850,21040,14,304,269,0x4A4FL,1L,24},{10850,21040,14,304,269,0x4A4FL,1L,24},{-17105,7465,-4,531,67,0xC884L,0L,64}},{{-22936,2220,4,-575,526,0x8252L,0L,-67},{-6170,874,7,137,128,6UL,0xB48BL,112},{21198,23404,-10,-74,415,0xF413L,-6L,71},{14623,22587,10,-439,453,1UL,0L,28},{-22011,11375,14,521,441,0UL,0x54B1L,-42}},{{-20439,802,12,-246,188,6UL,1L,-75},{-17105,7465,-4,531,67,0xC884L,0L,64},{10850,21040,14,304,269,0x4A4FL,1L,24},{10850,21040,14,304,269,0x4A4FL,1L,24},{-17105,7465,-4,531,67,0xC884L,0L,64}}},{{{-22936,2220,4,-575,526,0x8252L,0L,-67},{-6170,874,7,137,128,6UL,0xB48BL,112},{21198,23404,-10,-74,415,0xF413L,-6L,71},{14623,22587,10,-439,453,1UL,0L,28},{-22011,11375,14,521,441,0UL,0x54B1L,-42}},{{-20439,802,12,-246,188,6UL,1L,-75},{-17105,7465,-4,531,67,0xC884L,0L,64},{10850,21040,14,304,269,0x4A4FL,1L,24},{10850,21040,14,304,269,0x4A4FL,1L,24},{-17105,7465,-4,531,67,0xC884L,0L,64}},{{-22936,2220,4,-575,526,0x8252L,0L,-67},{-6170,874,7,137,128,6UL,0xB48BL,112},{21198,23404,-10,-74,415,0xF413L,-6L,71},{14623,22587,10,-439,453,1UL,0L,28},{-22011,11375,14,521,441,0UL,0x54B1L,-42}},{{-20439,802,12,-246,188,6UL,1L,-75},{-17105,7465,-4,531,67,0xC884L,0L,64},{10850,21040,14,304,269,0x4A4FL,1L,24},{10850,21040,14,304,269,0x4A4FL,1L,24},{-17105,7465,-4,531,67,0xC884L,0L,64}},{{-22936,2220,4,-575,526,0x8252L,0L,-67},{-6170,874,7,137,128,6UL,0xB48BL,112},{21198,23404,-10,-74,415,0xF413L,-6L,71},{14623,22587,10,-439,453,1UL,0L,28},{-22011,11375,14,521,441,0UL,0x54B1L,-42}}}};
    int64_t l_713 = 0x8B6CEFD577E228B4LL;
    int i, j, k;
    for (i = 0; i < 1; i++)
        l_487[i] = (void*)0;
    l_488++;
    for (p_14.f4 = 0; (p_14.f4 <= 0); p_14.f4 += 1)
    { 
        uint32_t ***l_493[3];
        int32_t *l_495 = (void*)0;
        union U1 ***l_502 = &g_195;
        int8_t *l_509 = &g_222;
        int32_t l_514 = 2L;
        int32_t *l_518 = &g_57;
        uint64_t ** const l_529[5][6][4] = {{{&g_176,&g_176,&g_176,&g_176},{&g_176,&g_176,&g_176,&g_176},{&g_176,&g_176,&g_176,(void*)0},{&g_176,&g_176,&g_176,(void*)0},{&g_176,(void*)0,&g_176,&g_176},{(void*)0,&g_176,&g_176,(void*)0}},{{&g_176,&g_176,&g_176,&g_176},{&g_176,(void*)0,(void*)0,&g_176},{(void*)0,&g_176,&g_176,&g_176},{(void*)0,&g_176,&g_176,&g_176},{&g_176,&g_176,&g_176,&g_176},{&g_176,(void*)0,&g_176,&g_176}},{{&g_176,&g_176,&g_176,(void*)0},{(void*)0,&g_176,&g_176,&g_176},{&g_176,(void*)0,&g_176,(void*)0},{(void*)0,&g_176,&g_176,(void*)0},{&g_176,&g_176,(void*)0,&g_176},{&g_176,&g_176,&g_176,&g_176}},{{&g_176,&g_176,(void*)0,&g_176},{&g_176,&g_176,&g_176,&g_176},{(void*)0,&g_176,&g_176,&g_176},{&g_176,&g_176,&g_176,&g_176},{(void*)0,(void*)0,&g_176,&g_176},{&g_176,&g_176,&g_176,(void*)0}},{{&g_176,(void*)0,&g_176,(void*)0},{&g_176,(void*)0,&g_176,&g_176},{(void*)0,(void*)0,&g_176,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{&g_176,&g_176,&g_176,&g_176},{&g_176,(void*)0,&g_176,&g_176}}};
        int i, j, k;
        for (i = 0; i < 3; i++)
            l_493[i] = &g_491;
        l_494[0][0][1] = g_491;
    }
    for (g_122 = 0; (g_122 <= 2); g_122 += 1)
    { 
        int16_t l_533 = (-1L);
        int32_t l_534[1][6][7] = {{{0L,0L,0x11A1ABBFL,(-1L),0xE77A61D2L,(-1L),0L},{(-1L),7L,0x4B0035A4L,(-1L),(-1L),0x4B0035A4L,7L},{0x4B0035A4L,1L,7L,0x6084C40BL,0xE77A61D2L,0x1317378FL,(-1L)},{0x4B0035A4L,0L,0x3E9E86ACL,7L,0x3E9E86ACL,0L,0x4B0035A4L},{(-1L),0x1317378FL,0xE77A61D2L,0x6084C40BL,7L,1L,0x4B0035A4L},{7L,0x4B0035A4L,(-1L),(-1L),0x4B0035A4L,7L,(-1L)}}};
        uint8_t l_537 = 246UL;
        uint64_t *l_562 = &g_460;
        int8_t l_593 = (-5L);
        uint32_t ***l_610 = &g_491;
        uint32_t ****l_609 = &l_610;
        uint32_t *l_635[5][6][1] = {{{&g_385},{&g_385},{&l_592[5][4]},{&g_141[2][3]},{&l_592[5][4]},{&g_385}},{{&g_385},{&g_385},{&g_385},{&l_592[5][4]},{&g_141[2][3]},{&l_592[5][4]}},{{&g_385},{&g_385},{&g_385},{&g_385},{&l_592[5][4]},{&g_141[2][3]}},{{&l_592[5][4]},{&g_385},{&g_385},{&g_385},{&g_385},{&l_592[5][4]}},{{&g_141[2][3]},{&l_592[5][4]},{&g_385},{&g_385},{&g_385},{&g_385}}};
        uint32_t *****l_685 = &l_684;
        union U1 ***l_699 = &g_195;
        union U1 *** const *l_698 = &l_699;
        int i, j, k;
        for (g_283.f3 = 0; (g_283.f3 <= 5); g_283.f3 += 1)
        { 
            int32_t l_532 = 1L;
            int32_t l_535 = 0xA9A83493L;
            int32_t l_536 = 0x92AC536DL;
            uint8_t *l_550[3][6][1] = {{{&l_537},{&g_122},{&l_537},{&l_537},{&g_122},{&l_537}},{{&l_537},{&g_122},{&l_537},{&l_537},{&g_122},{&l_537}},{{&l_537},{&g_122},{&l_537},{&l_537},{&g_122},{&l_537}}};
            int64_t *l_551 = &g_470[1][0];
            struct S0 l_554 = {-17783,24436,1,-147,63,65530UL,1L,-104};
            int16_t *l_555[5] = {&l_533,&l_533,&l_533,&l_533,&l_533};
            int32_t l_556 = 0xB9F70630L;
            int i, j, k;
            --l_537;
            if (((*g_333) = (safe_add_func_uint16_t_u_u(((+(g_472[g_283.f3] != 0xAFL)) ^ (((g_283.f4 , ((safe_sub_func_uint8_t_u_u((safe_add_func_int32_t_s_s((((*l_551) = ((safe_unary_minus_func_uint8_t_u((g_349 = 255UL))) == (*g_499))) && ((l_556 = (((4294967292UL | (safe_mod_func_uint16_t_u_u((l_554 , 0x59E1L), (-1L)))) <= (-10L)) & 0x65L)) >= p_17)), 4294967290UL)), 1L)) >= p_15)) ^ 0x3EB6E56FL) > 0x64A70658L)), p_16))))
            { 
                uint32_t l_557 = 0xF17FF1CDL;
                if (l_557)
                { 
                    uint16_t *l_575 = (void*)0;
                    uint16_t *l_576 = &g_40.f4;
                    (*g_182) = (*g_332);
                    (*l_485) = (safe_add_func_int32_t_s_s(((*l_478) = ((((l_533 , ((safe_div_func_uint16_t_u_u(l_557, 65530UL)) & (((void*)0 == l_562) | ((safe_div_func_int64_t_s_s(((*l_551) = (safe_add_func_int64_t_s_s(0x019EB172F635F85BLL, (safe_div_func_uint8_t_u_u(((safe_mul_func_int8_t_s_s((safe_mul_func_uint8_t_u_u(p_14.f0, 0xB5L)), 255UL)) == l_533), 0x4FL))))), 0x29F45B8A790E6CE5LL)) ^ 0x3A0FC3BDAF81BB4ALL)))) >= (**g_332)) && l_557) , (**g_182))), p_13));
                    (**g_332) = (safe_rshift_func_int8_t_s_s((&g_353[0][0][1] != &g_353[0][2][1]), (p_15 ^ (--(*l_576)))));
                    (*l_478) &= ((*l_482) = (*l_480));
                    (*g_333) = (*g_333);
                }
                else
                { 
                    if (p_14.f4)
                        break;
                    (**g_332) = (*g_333);
                    return g_89;
                }
                return p_15;
            }
            else
            { 
                return g_390;
            }
        }
        for (g_2 = 2; (g_2 >= 0); g_2 -= 1)
        { 
            uint16_t *l_586 = &g_40.f4;
            int32_t ***l_591 = &g_332;
            int64_t *l_600[1][1];
            int64_t **l_599 = &l_600[0][0];
            struct S0 l_645[4][3] = {{{-13706,4384,-9,54,35,65526UL,0xA29BL,76},{-13706,4384,-9,54,35,65526UL,0xA29BL,76},{-13706,4384,-9,54,35,65526UL,0xA29BL,76}},{{-4274,20550,13,689,446,65532UL,0xCFAAL,92},{-4274,20550,13,689,446,65532UL,0xCFAAL,92},{-4274,20550,13,689,446,65532UL,0xCFAAL,92}},{{-13706,4384,-9,54,35,65526UL,0xA29BL,76},{-13706,4384,-9,54,35,65526UL,0xA29BL,76},{-13706,4384,-9,54,35,65526UL,0xA29BL,76}},{{-4274,20550,13,689,446,65532UL,0xCFAAL,92},{-4274,20550,13,689,446,65532UL,0xCFAAL,92},{-4274,20550,13,689,446,65532UL,0xCFAAL,92}}};
            uint32_t **** const *l_686 = &l_684;
            int16_t l_689 = 6L;
            uint64_t **l_700 = &l_562;
            int i, j;
            for (i = 0; i < 1; i++)
            {
                for (j = 0; j < 1; j++)
                    l_600[i][j] = &g_472[2];
            }
        }
    }
    return p_13;
}



static union U1  func_23(uint8_t  p_24, union U1  p_25, uint8_t  p_26, const int16_t  p_27, struct S0  p_28)
{ 
    uint64_t l_406 = 0x5680E2122529B2F9LL;
    struct S0 *l_446 = (void*)0;
    uint32_t *l_454 = &g_33;
    int32_t l_455 = 1L;
    int32_t l_468[6][5] = {{0x52171A5FL,(-1L),0xC168A674L,0x52171A5FL,0L},{0x9C543953L,(-1L),6L,0x9C543953L,0L},{0x52171A5FL,6L,6L,0x52171A5FL,0x2A292785L},{0x52171A5FL,(-1L),0xC168A674L,0x52171A5FL,0L},{0x9C543953L,(-1L),6L,0x9C543953L,0L},{0x52171A5FL,6L,6L,0x52171A5FL,0x2A292785L}};
    union U1 l_476 = {65535UL};
    int i, j;
    for (g_391 = 17; (g_391 >= 10); g_391--)
    { 
        int64_t *l_412[4][6][1] = {{{(void*)0},{(void*)0},{&g_395},{(void*)0},{(void*)0},{&g_395}},{{(void*)0},{(void*)0},{&g_395},{(void*)0},{(void*)0},{&g_395}},{{(void*)0},{(void*)0},{&g_395},{(void*)0},{(void*)0},{&g_395}},{{(void*)0},{(void*)0},{&g_395},{(void*)0},{(void*)0},{&g_395}}};
        struct S0 *l_419 = (void*)0;
        int32_t l_428 = 0x15CF07E0L;
        uint32_t *l_452 = &g_33;
        int i, j, k;
        l_406 ^= (1UL < (*g_333));
        for (p_28.f6 = 0; (p_28.f6 < 29); p_28.f6 = safe_add_func_int64_t_s_s(p_28.f6, 8))
        { 
            int64_t *l_414[2];
            int32_t **l_421 = &g_333;
            int16_t l_445 = 6L;
            uint32_t **l_453[5] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
            uint16_t *l_462 = &g_283.f4;
            int i;
            for (i = 0; i < 2; i++)
                l_414[i] = &g_395;
            if ((*g_333))
            { 
                struct S0 *l_417 = (void*)0;
                uint32_t l_420 = 0xA7678961L;
                int8_t *l_441 = (void*)0;
                int8_t *l_442 = &g_81[3];
                int8_t *l_443 = (void*)0;
                int8_t *l_444 = &g_2;
                if ((**g_182))
                { 
                    int8_t l_411 = 0x72L;
                    int64_t **l_413 = (void*)0;
                    struct S0 **l_418 = (void*)0;
                    (**g_332) = (safe_mul_func_int16_t_s_s((l_411 , (0x08L != ((l_414[0] = l_412[1][5][0]) != (void*)0))), (safe_lshift_func_int8_t_s_u(((g_78[3][2][1] , (func_53(&g_391) , 18446744073709551613UL)) & l_406), 4))));
                    if ((*g_333))
                        continue;
                    l_419 = l_417;
                }
                else
                { 
                    return p_25;
                }
                (*g_333) = (l_420 , ((p_28.f3 , l_421) != (((p_28 , 0x51BBL) != l_420) , ((safe_mul_func_int16_t_s_s(((safe_mod_func_int8_t_s_s(((safe_sub_func_int32_t_s_s((-1L), (-1L))) < g_143.f6), l_428)) == 0x2658L), g_40.f0)) , (void*)0))));
                (**l_421) &= l_420;
                l_445 ^= ((safe_rshift_func_int8_t_s_s(((*l_444) = ((*l_442) = ((((safe_mod_func_uint32_t_u_u(g_57, (safe_lshift_func_uint16_t_u_u((safe_mul_func_int16_t_s_s(((safe_add_func_int64_t_s_s((&l_428 != ((*g_332) = (*g_332))), (p_25.f1 = (safe_lshift_func_uint16_t_u_u(65527UL, 7))))) >= 0x782D53247902F61BLL), (l_412[2][0][0] != (void*)0))), 5)))) < g_78[3][2][1].f5) & 252UL) ^ l_406))), p_27)) != l_420);
            }
            else
            { 
                for (p_26 = 0; (p_26 <= 2); p_26 += 1)
                { 
                    struct S0 **l_447 = &l_419;
                    int i, j;
                    (*g_333) |= 0xE16E1ACFL;
                    if (g_141[p_26][(p_26 + 2)])
                        break;
                    (*l_447) = (func_53(&g_33) , l_446);
                }
            }
            (**l_421) = ((((safe_div_func_int32_t_s_s(((safe_mul_func_uint8_t_u_u(((((func_53((l_454 = l_452)) , l_406) >= (l_455 = p_28.f2)) ^ ((*l_462) = (safe_sub_func_uint8_t_u_u((safe_mul_func_uint8_t_u_u((0UL < g_460), (((!p_25.f4) , 0x677476F2L) ^ l_428))), 254UL)))) && p_28.f7), p_28.f6)) , (**g_332)), 3UL)) < 0x926CL) | g_78[3][2][1].f0) > 0x2E0B09EFCC0B949ELL);
            if (p_25.f4)
                continue;
        }
        (**g_332) ^= (safe_lshift_func_int8_t_s_s(l_455, 2));
    }
    for (g_391 = 0; (g_391 > 42); g_391++)
    { 
        int32_t *l_467[5] = {&g_384,&g_384,&g_384,&g_384,&g_384};
        int i;
        --g_473;
    }
    return l_476;
}



static uint64_t  func_34(const uint32_t  p_35, union U1  p_36, uint32_t * p_37)
{ 
    uint64_t l_79[6][5] = {{1UL,1UL,1UL,1UL,1UL},{1UL,1UL,1UL,1UL,1UL},{1UL,1UL,1UL,1UL,1UL},{1UL,1UL,1UL,1UL,1UL},{1UL,1UL,1UL,1UL,1UL},{1UL,1UL,1UL,1UL,1UL}};
    int8_t *l_80 = &g_81[1];
    union U1 * const l_82[4][3][2] = {{{&g_40,&g_40},{&g_40,&g_40},{&g_40,&g_40}},{{(void*)0,&g_40},{&g_40,&g_40},{&g_40,&g_40}},{{&g_40,&g_40},{&g_40,&g_40},{&g_40,&g_40}},{{&g_40,&g_40},{(void*)0,&g_40},{&g_40,&g_40}}};
    const struct S0 l_83[1][1] = {{{-5352,10425,-1,-337,148,0xB345L,0L,36}}};
    union U1 *l_104 = (void*)0;
    union U1 **l_103[2];
    int32_t l_123 = 0xA19F56D6L;
    int32_t l_124[4][1][6] = {{{(-10L),0x46842B3FL,(-10L),(-10L),0x46842B3FL,(-10L)}},{{(-10L),0x46842B3FL,(-10L),(-10L),0x46842B3FL,(-10L)}},{{(-10L),0x46842B3FL,(-10L),(-10L),0x46842B3FL,(-10L)}},{{(-10L),0x46842B3FL,(-10L),(-10L),0x46842B3FL,(-10L)}}};
    int32_t *l_161[5];
    int32_t **l_160 = &l_161[3];
    union U1 * const *l_170 = (void*)0;
    uint16_t l_174 = 0x2C9EL;
    int64_t l_223[7] = {0x14B42A01C24B0653LL,1L,0x14B42A01C24B0653LL,0x14B42A01C24B0653LL,1L,0x14B42A01C24B0653LL,0x14B42A01C24B0653LL};
    uint64_t **l_232 = &g_176;
    int16_t *l_258 = &g_78[3][2][1].f6;
    uint32_t l_309 = 4294967295UL;
    int32_t l_315 = 0L;
    int16_t l_326 = (-6L);
    int8_t l_346[6] = {0L,0L,0xE7L,0L,0L,0xE7L};
    int8_t l_394[6][1][7] = {{{0x58L,0x3FL,0x58L,0xF6L,0x92L,7L,0xEFL}},{{0L,0x7EL,0x2CL,0x2CL,0x7EL,0L,0x7EL}},{{0x58L,0xF6L,0x92L,7L,0xEFL,7L,0x92L}},{{0x40L,0x40L,0L,0x2CL,0L,0x40L,0x40L}},{{1L,0xF6L,1L,0xF6L,1L,0x56L,0x92L}},{{7L,0x7EL,7L,0L,0L,7L,0x7EL}}};
    uint64_t l_396 = 18446744073709551615UL;
    int i, j, k;
    for (i = 0; i < 2; i++)
        l_103[i] = &l_104;
    for (i = 0; i < 5; i++)
        l_161[i] = &l_124[0][0][1];
    g_105[3] = func_41((safe_div_func_int8_t_s_s((safe_lshift_func_uint8_t_u_s((0x2CC7L < (safe_div_func_uint32_t_u_u(((g_40.f0 == ((*l_80) = (func_53(p_37) , l_79[5][0]))) ^ ((p_36.f0 , (g_32[3][1] != (void*)0)) , 0xBAL)), p_35))), 2)), g_78[3][2][1].f4)), l_79[1][4], &g_40, l_82[3][1][0], l_83[0][0]);
lbl_399:
    for (g_101 = 0; (g_101 == (-8)); --g_101)
    { 
        uint32_t l_112[2];
        int32_t l_116 = 0x806100E9L;
        const union U1 l_136 = {65526UL};
        union U1 * const l_142 = &g_40;
        union U1 *l_144[5] = {&g_40,&g_40,&g_40,&g_40,&g_40};
        const union U1 **l_172 = (void*)0;
        int32_t l_205[5][7] = {{1L,0x5CAD6F74L,(-1L),(-1L),0x5CAD6F74L,1L,0x5CAD6F74L},{0x591A12F1L,1L,1L,0x591A12F1L,0x5CAD6F74L,0x591A12F1L,1L},{1L,1L,1L,(-1L),1L,1L,1L},{1L,1L,(-1L),1L,1L,1L,1L},{0x591A12F1L,0x5CAD6F74L,0x591A12F1L,1L,1L,0x591A12F1L,0x5CAD6F74L}};
        uint32_t l_253 = 1UL;
        int16_t *l_257 = &g_78[3][2][1].f6;
        uint32_t l_317 = 8UL;
        uint64_t *** const l_363 = &l_232;
        int i, j;
        for (i = 0; i < 2; i++)
            l_112[i] = 0x249F7166L;
        for (p_36.f3 = 1; (p_36.f3 <= 5); p_36.f3 += 1)
        { 
            int32_t l_111 = 7L;
            uint8_t *l_121[1];
            int32_t l_125[5][4][2] = {{{0xAA7700A2L,0xAA7700A2L},{0xAA7700A2L,0xAA7700A2L},{0xAA7700A2L,0xAA7700A2L},{0xAA7700A2L,0xAA7700A2L}},{{0xAA7700A2L,0xAA7700A2L},{0xAA7700A2L,0xAA7700A2L},{0xAA7700A2L,0xAA7700A2L},{0xAA7700A2L,0xAA7700A2L}},{{0xAA7700A2L,0xAA7700A2L},{0xAA7700A2L,0xAA7700A2L},{0xAA7700A2L,0xAA7700A2L},{0xAA7700A2L,0xAA7700A2L}},{{0xAA7700A2L,0xAA7700A2L},{0xAA7700A2L,0xAA7700A2L},{0xAA7700A2L,0xAA7700A2L},{0xAA7700A2L,0xAA7700A2L}},{{0xAA7700A2L,0xAA7700A2L},{0xAA7700A2L,0xAA7700A2L},{0xAA7700A2L,0xAA7700A2L},{0xAA7700A2L,0xAA7700A2L}}};
            int16_t *l_131 = &g_78[3][2][1].f6;
            uint32_t *l_139 = &g_89;
            uint32_t *l_140 = &g_141[2][3];
            uint64_t *l_145 = &g_40.f1;
            int32_t l_162[3];
            int32_t l_163 = 0x670E1877L;
            uint32_t l_166[7][2];
            const union U1 * const l_233 = &g_40;
            int8_t *l_252 = &g_81[1];
            int32_t **l_278 = &l_161[3];
            uint32_t l_297 = 0x2C04DE0AL;
            struct S0 l_314 = {8279,26378,-7,735,322,6UL,0x8917L,15};
            uint64_t l_316[2][3] = {{5UL,5UL,5UL},{1UL,1UL,1UL}};
            int i, j, k;
            for (i = 0; i < 1; i++)
                l_121[i] = &g_122;
            for (i = 0; i < 3; i++)
                l_162[i] = 0x5843DDAEL;
            for (i = 0; i < 7; i++)
            {
                for (j = 0; j < 2; j++)
                    l_166[i][j] = 0xD74A7D6EL;
            }
            for (g_70 = 0; (g_70 <= 1); g_70 += 1)
            { 
                int32_t *l_108 = &g_57;
                int32_t *l_109 = &g_57;
                int32_t *l_110[3][6][6] = {{{&g_57,&g_57,&g_57,&g_57,&g_57,&g_57},{(void*)0,&g_57,&g_57,&g_57,&g_57,(void*)0},{(void*)0,&g_57,(void*)0,&g_57,&g_57,&g_57},{&g_57,&g_57,&g_57,&g_57,&g_57,&g_57},{&g_57,&g_57,&g_57,&g_57,&g_57,&g_57},{&g_57,&g_57,&g_57,&g_57,&g_57,&g_57}},{{(void*)0,&g_57,&g_57,&g_57,&g_57,(void*)0},{(void*)0,&g_57,&g_57,&g_57,&g_57,(void*)0},{&g_57,&g_57,&g_57,&g_57,&g_57,&g_57},{&g_57,&g_57,&g_57,&g_57,&g_57,&g_57},{&g_57,&g_57,&g_57,&g_57,(void*)0,&g_57},{(void*)0,&g_57,&g_57,&g_57,&g_57,&g_57}},{{(void*)0,&g_57,(void*)0,&g_57,&g_57,(void*)0},{&g_57,(void*)0,&g_57,&g_57,&g_57,&g_57},{&g_57,&g_57,&g_57,&g_57,&g_57,&g_57},{&g_57,&g_57,&g_57,&g_57,&g_57,&g_57},{(void*)0,&g_57,&g_57,&g_57,&g_57,(void*)0},{(void*)0,&g_57,(void*)0,&g_57,&g_57,&g_57}}};
                int32_t **l_115 = &l_110[1][3][4];
                int i, j, k;
                l_112[0]--;
                (*l_115) = &g_57;
            }
            l_116 = 9L;
            if (p_36.f3)
                goto lbl_399;
        }
        for (p_36.f1 = 0; (p_36.f1 <= 2); p_36.f1 += 1)
        { 
            int16_t l_322 = (-1L);
            int32_t l_324 = 0x2F6E37E5L;
            int32_t l_325 = 0xB55A8B3DL;
            int32_t ***l_360[4];
            uint32_t l_364 = 4294967293UL;
            int i, j;
            for (i = 0; i < 4; i++)
                l_360[i] = &g_332;
        }
        ++l_396;
    }
    for (g_283.f1 = 5; (g_283.f1 < 43); g_283.f1 = safe_add_func_int64_t_s_s(g_283.f1, 9))
    { 
        (*g_333) = 0xFCFDFD88L;
        if (p_35)
            continue;
        if (p_36.f4)
            continue;
    }
    return p_36.f4;
}



static union U1 * func_41(int32_t  p_42, const uint64_t  p_43, union U1 * p_44, union U1 * const  p_45, const struct S0  p_46)
{ 
    int16_t *l_84 = (void*)0;
    int16_t *l_85 = &g_78[3][2][1].f6;
    uint32_t *l_88 = &g_89;
    int8_t *l_92 = (void*)0;
    int8_t *l_93[4] = {&g_81[1],&g_81[1],&g_81[1],&g_81[1]};
    int32_t l_98 = (-1L);
    int32_t *l_102 = &l_98;
    int i;
    (*l_102) = (((*l_85) = 5L) , (safe_add_func_uint32_t_u_u(((--(*l_88)) > (((g_81[1] = (-1L)) && 0xE2L) ^ ((safe_mod_func_int32_t_s_s((1UL <= (safe_rshift_func_int8_t_s_u((l_98 && (g_78[3][2][1].f5 | (((safe_mod_func_uint16_t_u_u(((((g_101 >= l_98) < p_46.f2) && 0x8C00C08BL) == 0x0151F120L), 65528UL)) , g_78[3][2][1].f7) == p_46.f5))), g_2))), p_46.f6)) , 0L))), g_78[3][2][1].f5)));
    return p_44;
}



static struct S0  func_53(uint32_t * p_54)
{ 
    int8_t l_55 = (-3L);
    int32_t *l_56 = &g_57;
    union U1 *l_60 = &g_40;
    int32_t l_68 = 0xE6007B4AL;
    int32_t l_69 = 6L;
    int32_t *l_77 = &l_69;
    (*l_56) = l_55;
    for (g_33 = (-18); (g_33 > 33); g_33 = safe_add_func_uint64_t_u_u(g_33, 1))
    { 
        union U1 **l_61 = &l_60;
        int32_t l_62 = (-10L);
        int32_t *l_63 = &g_57;
        int32_t *l_64 = &g_57;
        int32_t *l_65 = (void*)0;
        int32_t *l_66 = &l_62;
        int32_t *l_67[1];
        int i;
        for (i = 0; i < 1; i++)
            l_67[i] = &l_62;
        (*l_61) = l_60;
        if (l_62)
            break;
        (*l_56) = g_2;
        if ((*l_56))
            break;
        g_70++;
    }
    (*l_77) ^= (safe_sub_func_uint8_t_u_u((g_57 | (safe_rshift_func_uint8_t_u_u((&g_57 == (((*l_60) , g_2) , p_54)), (*l_56)))), ((*l_56) > (*l_56))));
    return g_78[3][2][1];
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    transparent_crc(g_20, "g_20", print_hash_value);
    transparent_crc(g_33, "g_33", print_hash_value);
    transparent_crc(g_40.f0, "g_40.f0", print_hash_value);
    transparent_crc(g_40.f4, "g_40.f4", print_hash_value);
    transparent_crc(g_57, "g_57", print_hash_value);
    transparent_crc(g_70, "g_70", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 6; j++)
        {
            for (k = 0; k < 7; k++)
            {
                transparent_crc(g_78[i][j][k].f0, "g_78[i][j][k].f0", print_hash_value);
                transparent_crc(g_78[i][j][k].f1, "g_78[i][j][k].f1", print_hash_value);
                transparent_crc(g_78[i][j][k].f2, "g_78[i][j][k].f2", print_hash_value);
                transparent_crc(g_78[i][j][k].f3, "g_78[i][j][k].f3", print_hash_value);
                transparent_crc(g_78[i][j][k].f4, "g_78[i][j][k].f4", print_hash_value);
                transparent_crc(g_78[i][j][k].f5, "g_78[i][j][k].f5", print_hash_value);
                transparent_crc(g_78[i][j][k].f6, "g_78[i][j][k].f6", print_hash_value);
                transparent_crc(g_78[i][j][k].f7, "g_78[i][j][k].f7", print_hash_value);

            }
        }
    }
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_81[i], "g_81[i]", print_hash_value);

    }
    transparent_crc(g_89, "g_89", print_hash_value);
    transparent_crc(g_101, "g_101", print_hash_value);
    transparent_crc(g_122, "g_122", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 7; j++)
        {
            transparent_crc(g_141[i][j], "g_141[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_143.f0, "g_143.f0", print_hash_value);
    transparent_crc(g_143.f1, "g_143.f1", print_hash_value);
    transparent_crc(g_143.f2, "g_143.f2", print_hash_value);
    transparent_crc(g_143.f3, "g_143.f3", print_hash_value);
    transparent_crc(g_143.f4, "g_143.f4", print_hash_value);
    transparent_crc(g_143.f5, "g_143.f5", print_hash_value);
    transparent_crc(g_143.f6, "g_143.f6", print_hash_value);
    transparent_crc(g_143.f7, "g_143.f7", print_hash_value);
    transparent_crc(g_189, "g_189", print_hash_value);
    transparent_crc(g_206, "g_206", print_hash_value);
    transparent_crc(g_219, "g_219", print_hash_value);
    transparent_crc(g_222, "g_222", print_hash_value);
    transparent_crc(g_283.f0, "g_283.f0", print_hash_value);
    transparent_crc(g_283.f4, "g_283.f4", print_hash_value);
    transparent_crc(g_301, "g_301", print_hash_value);
    transparent_crc(g_327, "g_327", print_hash_value);
    transparent_crc(g_349, "g_349", print_hash_value);
    transparent_crc(g_384, "g_384", print_hash_value);
    transparent_crc(g_385, "g_385", print_hash_value);
    transparent_crc(g_388, "g_388", print_hash_value);
    transparent_crc(g_390, "g_390", print_hash_value);
    transparent_crc(g_391, "g_391", print_hash_value);
    transparent_crc(g_395, "g_395", print_hash_value);
    transparent_crc(g_460, "g_460", print_hash_value);
    transparent_crc(g_469, "g_469", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 1; j++)
        {
            transparent_crc(g_470[i][j], "g_470[i][j]", print_hash_value);

        }
    }
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_471[i], "g_471[i]", print_hash_value);

    }
    for (i = 0; i < 6; i++)
    {
        transparent_crc(g_472[i], "g_472[i]", print_hash_value);

    }
    transparent_crc(g_473, "g_473", print_hash_value);
    transparent_crc(g_531, "g_531", print_hash_value);
    transparent_crc(g_776, "g_776", print_hash_value);
    transparent_crc(g_987, "g_987", print_hash_value);
    transparent_crc(g_1097, "g_1097", print_hash_value);
    transparent_crc(g_1158, "g_1158", print_hash_value);
    transparent_crc(g_1248, "g_1248", print_hash_value);
    transparent_crc(g_1285, "g_1285", print_hash_value);
    transparent_crc(g_1324, "g_1324", print_hash_value);
    transparent_crc(g_1351, "g_1351", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 6; j++)
        {
            transparent_crc(g_1363[i][j], "g_1363[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_1401, "g_1401", print_hash_value);
    transparent_crc(g_1415, "g_1415", print_hash_value);
    transparent_crc(g_1419, "g_1419", print_hash_value);
    transparent_crc(g_1420, "g_1420", print_hash_value);
    transparent_crc(g_1531, "g_1531", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(g_1579[i], "g_1579[i]", print_hash_value);

    }
    transparent_crc(g_1581, "g_1581", print_hash_value);
    transparent_crc(g_1631, "g_1631", print_hash_value);
    transparent_crc(g_1632, "g_1632", print_hash_value);
    transparent_crc(g_1633, "g_1633", print_hash_value);
    transparent_crc(g_1662, "g_1662", print_hash_value);
    transparent_crc(g_1674, "g_1674", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(g_1692[i], "g_1692[i]", print_hash_value);

    }
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_1693[i], "g_1693[i]", print_hash_value);

    }
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 1; j++)
        {
            transparent_crc(g_1792[i][j], "g_1792[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_2001, "g_2001", print_hash_value);
    transparent_crc(g_2171, "g_2171", print_hash_value);
    transparent_crc(g_2198, "g_2198", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
