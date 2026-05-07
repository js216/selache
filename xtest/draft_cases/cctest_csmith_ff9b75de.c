// SPDX-License-Identifier: MIT
// cctest_csmith_ff9b75de.c --- cctest case csmith_ff9b75de (csmith seed 4288378334)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x24958acc */

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

// Options:   -s 4288378334 -o /tmp/csmith_gen_r9zti7g1/csmith.c --concise --no-volatiles --no-volatile-pointers --max-funcs 8 --max-block-size 5 --max-block-depth 4 --max-expr-complexity 8 --max-array-dim 3 --max-array-len-per-dim 7 --max-struct-fields 8 --max-union-fields 5

static long __undefined;


#pragma pack(push)
#pragma pack(1)
struct S0 {
   const int16_t  f0;
   int16_t  f1;
   unsigned f2 : 21;
   uint16_t  f3;
   int16_t  f4;
   unsigned f5 : 22;
   uint16_t  f6;
   const int16_t  f7;
};
#pragma pack(pop)

union U1 {
   uint32_t  f0;
};

union U2 {
   int64_t  f0;
   const int8_t  f1;
   const int16_t  f2;
};


static int32_t g_2 = 1L;
static int32_t g_5 = (-1L);
static int32_t g_8 = 0L;
static int32_t g_11 = 0x66A07563L;
static union U1 g_32 = {0xEB818F8FL};
static union U1 *g_31 = &g_32;
static int32_t g_37 = 0x029B4CCCL;
static int32_t g_41 = 0xE945D447L;
static struct S0 g_49 = {1L,-1L,635,65535UL,-8L,1559,0x03B9L,0L};
static int32_t g_54 = 0xC80C7F43L;
static int64_t g_55[6][2][6] = {{{0xCEC4EE8FA1C18A1CLL,0xCEC4EE8FA1C18A1CLL,0xCEC4EE8FA1C18A1CLL,0xCEC4EE8FA1C18A1CLL,0xCEC4EE8FA1C18A1CLL,0xCEC4EE8FA1C18A1CLL},{0xCEC4EE8FA1C18A1CLL,0xCEC4EE8FA1C18A1CLL,0xCEC4EE8FA1C18A1CLL,0xCEC4EE8FA1C18A1CLL,0xCEC4EE8FA1C18A1CLL,0xCEC4EE8FA1C18A1CLL}},{{0xCEC4EE8FA1C18A1CLL,0xCEC4EE8FA1C18A1CLL,0xCEC4EE8FA1C18A1CLL,0xCEC4EE8FA1C18A1CLL,0xCEC4EE8FA1C18A1CLL,0xCEC4EE8FA1C18A1CLL},{0xCEC4EE8FA1C18A1CLL,0xCEC4EE8FA1C18A1CLL,0xCEC4EE8FA1C18A1CLL,0xCEC4EE8FA1C18A1CLL,0xCEC4EE8FA1C18A1CLL,0xCEC4EE8FA1C18A1CLL}},{{0xCEC4EE8FA1C18A1CLL,0xCEC4EE8FA1C18A1CLL,0xCEC4EE8FA1C18A1CLL,0xCEC4EE8FA1C18A1CLL,0xCEC4EE8FA1C18A1CLL,0xCEC4EE8FA1C18A1CLL},{0xCEC4EE8FA1C18A1CLL,0xCEC4EE8FA1C18A1CLL,0xCEC4EE8FA1C18A1CLL,0xCEC4EE8FA1C18A1CLL,0xCEC4EE8FA1C18A1CLL,0xCEC4EE8FA1C18A1CLL}},{{0xCEC4EE8FA1C18A1CLL,0xCEC4EE8FA1C18A1CLL,0xCEC4EE8FA1C18A1CLL,0xCEC4EE8FA1C18A1CLL,0xCEC4EE8FA1C18A1CLL,0xCEC4EE8FA1C18A1CLL},{0xCEC4EE8FA1C18A1CLL,0xCEC4EE8FA1C18A1CLL,0xCEC4EE8FA1C18A1CLL,0xCEC4EE8FA1C18A1CLL,0xCEC4EE8FA1C18A1CLL,0xCEC4EE8FA1C18A1CLL}},{{0xCEC4EE8FA1C18A1CLL,0xCEC4EE8FA1C18A1CLL,0xCEC4EE8FA1C18A1CLL,0xCEC4EE8FA1C18A1CLL,0xCEC4EE8FA1C18A1CLL,0xCEC4EE8FA1C18A1CLL},{0xCEC4EE8FA1C18A1CLL,0xCEC4EE8FA1C18A1CLL,0xCEC4EE8FA1C18A1CLL,0xCEC4EE8FA1C18A1CLL,0xCEC4EE8FA1C18A1CLL,0xCEC4EE8FA1C18A1CLL}},{{0xCEC4EE8FA1C18A1CLL,0xCEC4EE8FA1C18A1CLL,0xCEC4EE8FA1C18A1CLL,0xCEC4EE8FA1C18A1CLL,0xCEC4EE8FA1C18A1CLL,0xCEC4EE8FA1C18A1CLL},{0xCEC4EE8FA1C18A1CLL,0xCEC4EE8FA1C18A1CLL,0xCEC4EE8FA1C18A1CLL,0xCEC4EE8FA1C18A1CLL,0xCEC4EE8FA1C18A1CLL,0xCEC4EE8FA1C18A1CLL}}};
static uint64_t g_58 = 0UL;
static uint64_t g_82 = 0x611625F1A37C0579LL;
static uint8_t g_96 = 0UL;
static int16_t *g_106 = &g_49.f4;
static int32_t g_120 = 0xAE4ACFCAL;
static uint32_t g_164 = 0x1D148818L;
static int16_t g_170 = 0x866DL;
static int16_t *g_183[4][3][5] = {{{&g_49.f1,&g_49.f1,&g_49.f1,&g_49.f1,&g_49.f1},{&g_49.f1,&g_49.f1,&g_49.f1,&g_49.f1,&g_49.f1},{&g_49.f1,&g_49.f1,&g_49.f1,&g_49.f1,&g_49.f1}},{{&g_49.f1,&g_49.f1,&g_49.f1,&g_49.f1,&g_49.f1},{&g_49.f1,&g_49.f1,&g_49.f1,&g_49.f1,&g_49.f1},{&g_49.f1,&g_49.f1,&g_49.f1,&g_49.f1,&g_49.f1}},{{&g_49.f1,&g_49.f1,&g_49.f1,&g_49.f1,&g_49.f1},{&g_49.f1,&g_49.f1,&g_49.f1,&g_49.f1,&g_49.f1},{&g_49.f1,&g_49.f1,&g_49.f1,&g_49.f1,&g_49.f1}},{{&g_49.f1,&g_49.f1,&g_49.f1,&g_49.f1,&g_49.f1},{&g_49.f1,&g_49.f1,&g_49.f1,&g_49.f1,&g_49.f1},{&g_49.f1,&g_49.f1,&g_49.f1,&g_49.f1,&g_49.f1}}};
static int32_t g_191[7] = {0x97E21AE2L,0x97E21AE2L,0x97E21AE2L,0x97E21AE2L,0x97E21AE2L,0x97E21AE2L,0x97E21AE2L};
static int32_t *g_192 = (void*)0;
static const int8_t **g_193 = (void*)0;
static int32_t g_199 = 0xD5CC310FL;
static int16_t g_231 = 0x8FF0L;
static int8_t g_256 = 1L;
static union U2 g_277 = {0x5EE6CBC5E4B87D9ALL};
static int64_t g_280[2][3] = {{(-2L),(-2L),(-2L)},{(-2L),(-2L),(-2L)}};
static uint8_t g_282 = 0x45L;
static struct S0 g_292 = {-6L,0xA74BL,959,1UL,-8L,348,0x580EL,0x1001L};
static const int32_t *g_325 = &g_41;
static union U2 g_368 = {6L};
static uint32_t *g_371 = &g_164;
static uint32_t **g_370 = &g_371;
static uint32_t ***g_369 = &g_370;
static int64_t g_420 = (-7L);
static const union U1 g_575 = {0UL};
static const union U2 *g_591 = &g_368;
static int32_t *g_623[5][2][6] = {{{&g_54,&g_54,&g_54,&g_54,&g_54,&g_54},{(void*)0,&g_54,&g_54,&g_54,(void*)0,(void*)0}},{{&g_54,&g_54,&g_54,&g_54,&g_54,&g_54},{&g_54,&g_54,&g_54,&g_54,&g_54,&g_54}},{{(void*)0,(void*)0,&g_54,&g_54,&g_54,(void*)0},{&g_54,&g_54,&g_54,&g_54,&g_54,&g_54}},{{(void*)0,&g_54,&g_54,&g_54,(void*)0,(void*)0},{&g_54,&g_54,&g_54,&g_54,&g_54,&g_54}},{{&g_54,&g_54,&g_54,&g_54,&g_54,&g_54},{(void*)0,(void*)0,&g_54,&g_54,&g_54,(void*)0}}};
static int16_t g_740[1][3][5] = {{{0xC818L,0xC818L,(-9L),0xC818L,0xC818L},{0x1D1EL,0xC818L,0x1D1EL,0x1D1EL,0xC818L},{0xC818L,0x1D1EL,0x1D1EL,0xC818L,0x1D1EL}}};
static union U2 g_960[6] = {{0L},{0L},{0L},{0L},{0L},{0L}};
static const union U2 *g_959 = &g_960[2];
static union U1 **g_965 = &g_31;
static union U2 *g_998[1] = {&g_960[4]};
static const uint8_t g_1009[5] = {0UL,0UL,0UL,0UL,0UL};
static union U2 **g_1018 = &g_998[0];
static union U2 ***g_1017 = &g_1018;
static int32_t **g_1075 = &g_192;
static int32_t ***g_1074 = &g_1075;
static uint16_t *g_1160 = &g_49.f6;
static uint16_t **g_1159 = &g_1160;
static struct S0 *g_1218 = (void*)0;
static struct S0 **g_1217 = &g_1218;
static struct S0 ***g_1216 = &g_1217;
static struct S0 * const **g_1222 = (void*)0;
static int32_t g_1279 = 3L;
static union U2 g_1519 = {0xEB350F43AF63FB4FLL};
static uint32_t * const g_1535 = &g_164;
static uint64_t *g_1562 = (void*)0;
static const int32_t g_1601[5] = {(-3L),(-3L),(-3L),(-3L),(-3L)};



static const int32_t  func_1(void);
static int32_t  func_15(struct S0  p_16, int64_t  p_17, union U1  p_18, uint16_t  p_19, uint32_t  p_20);
static int64_t  func_28(union U1 * p_29, union U2  p_30);
static int32_t  func_65(uint32_t  p_66, struct S0 * p_67);
static struct S0 * func_76(const int32_t * p_77);
static uint64_t  func_89(int16_t  p_90, uint16_t  p_91, int16_t  p_92);
static const uint8_t  func_97(int32_t * p_98, struct S0 ** const  p_99, uint8_t * p_100);
static int64_t  func_101(int16_t * p_102, const int32_t  p_103, struct S0  p_104, union U1 * const * p_105);




static const int32_t  func_1(void)
{ 
    uint32_t l_14 = 4294967287UL;
    union U1 l_22 = {0x89D73AE4L};
    uint64_t l_1611[4];
    const int32_t l_1618 = 0L;
    uint32_t l_1619[4] = {0x87C48599L,0x87C48599L,0x87C48599L,0x87C48599L};
    int8_t *l_1629 = &g_256;
    int32_t *l_1630 = &g_191[3];
    int32_t *l_1632[4];
    uint32_t l_1633 = 0x62AEFC14L;
    int i;
    for (i = 0; i < 4; i++)
        l_1611[i] = 0x22CB9679E228BA41LL;
    for (i = 0; i < 4; i++)
        l_1632[i] = (void*)0;
    for (g_2 = 0; (g_2 < (-5)); g_2--)
    { 
        struct S0 l_21 = {9L,0L,470,1UL,0L,1644,0xAE8BL,0x1213L};
        union U1 * const l_1609 = &l_22;
        for (g_5 = 0; (g_5 == (-28)); --g_5)
        { 
            uint16_t l_1397[6] = {0x8201L,0x8201L,0x8201L,0x8201L,0x8201L,0x8201L};
            uint32_t l_1605 = 0xAE8EF2DAL;
            int i;
            for (g_8 = 10; (g_8 != (-5)); g_8 = safe_sub_func_int64_t_s_s(g_8, 1))
            { 
                union U2 l_34 = {0xAA1DD5C0AECAA705LL};
                for (g_11 = 0; (g_11 < (-7)); g_11 = safe_sub_func_uint32_t_u_u(g_11, 6))
                { 
                    union U1 *l_23 = &l_22;
                    uint8_t l_27 = 0UL;
                    union U1 **l_33[4][3];
                    int64_t *l_1396 = &g_55[1][1][3];
                    int32_t *l_1606 = (void*)0;
                    int32_t *l_1607 = &g_191[3];
                    int32_t *l_1608[2];
                    union U1 **l_1610 = &g_31;
                    int i, j;
                    for (i = 0; i < 4; i++)
                    {
                        for (j = 0; j < 3; j++)
                            l_33[i][j] = (void*)0;
                    }
                    for (i = 0; i < 2; i++)
                        l_1608[i] = (void*)0;
                }
            }
            return l_21.f2;
        }
        if (g_8)
            goto lbl_1631;
        return l_1611[3];
    }
    (*g_965) = (*g_965);
lbl_1631:
    (*l_1630) |= (((g_369 = &g_370) == ((safe_mod_func_uint32_t_u_u((safe_lshift_func_uint16_t_u_s((safe_rshift_func_uint16_t_u_u(l_1618, ((g_82 = l_1619[1]) | (safe_rshift_func_int8_t_s_s(((*l_1629) = (safe_sub_func_uint16_t_u_u((*g_1160), (~(((**g_1159) <= (**g_1159)) | (safe_lshift_func_uint16_t_u_s((safe_add_func_uint32_t_u_u(3UL, g_282)), 13))))))), 5))))), l_1611[3])), 4294967295UL)) , (void*)0)) && g_368.f0);
    l_1633++;
    return (*l_1630);
}



static int32_t  func_15(struct S0  p_16, int64_t  p_17, union U1  p_18, uint16_t  p_19, uint32_t  p_20)
{ 
    int64_t l_1405 = (-4L);
    uint8_t l_1406 = 248UL;
    int32_t l_1417[4];
    union U1 l_1430 = {4294967293UL};
    int32_t l_1433 = 0x4E168B52L;
    int32_t **l_1462 = (void*)0;
    int32_t ***l_1475 = (void*)0;
    uint64_t *l_1563 = &g_58;
    const int16_t l_1566 = 0x3B09L;
    uint32_t *l_1575 = &g_164;
    int i;
    for (i = 0; i < 4; i++)
        l_1417[i] = (-8L);
lbl_1468:
    for (p_16.f4 = 27; (p_16.f4 >= (-18)); --p_16.f4)
    { 
        int16_t l_1400 = 0x0791L;
        int32_t *l_1401 = (void*)0;
        int32_t l_1402 = 0x243C137DL;
        int32_t *l_1403 = &g_120;
        int32_t *l_1404[5][2][2] = {{{(void*)0,&l_1402},{&g_41,(void*)0}},{{&l_1402,&g_191[3]},{&g_191[5],&g_191[5]}},{{&g_41,&g_191[5]},{&g_191[5],&g_191[3]}},{{&l_1402,(void*)0},{&g_41,&l_1402}},{{(void*)0,&g_191[3]},{(void*)0,&l_1402}}};
        int i, j, k;
        --l_1406;
        return l_1405;
    }
    for (g_292.f1 = 0; (g_292.f1 <= 2); g_292.f1 += 1)
    { 
        int16_t l_1413 = 1L;
        uint16_t *l_1416 = &g_292.f6;
        uint8_t l_1426 = 255UL;
        uint8_t *l_1431[2];
        uint64_t *l_1432[6];
        int16_t l_1434 = 0L;
        struct S0 l_1469 = {-1L,0L,1258,0xF0EEL,6L,1032,65535UL,1L};
        int32_t l_1478 = 9L;
        int32_t l_1490 = 1L;
        int32_t l_1501 = (-3L);
        int32_t l_1503 = 0x46A7292AL;
        int32_t l_1504[5] = {(-7L),(-7L),(-7L),(-7L),(-7L)};
        int8_t l_1509 = (-5L);
        int32_t l_1513[7];
        union U2 *l_1517 = (void*)0;
        uint32_t l_1521[4] = {18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL};
        int i;
        for (i = 0; i < 2; i++)
            l_1431[i] = &l_1406;
        for (i = 0; i < 6; i++)
            l_1432[i] = &g_82;
        for (i = 0; i < 7; i++)
            l_1513[i] = (-1L);
        if ((safe_mul_func_int16_t_s_s((p_16.f1 = (safe_sub_func_uint16_t_u_u((l_1413 >= (((safe_sub_func_uint64_t_u_u((l_1433 = ((l_1417[1] = (((*l_1416) ^= (**g_1159)) > (*g_106))) >= ((g_282 = (safe_mod_func_int32_t_s_s((safe_mod_func_int32_t_s_s(((safe_rshift_func_uint8_t_u_s((((safe_add_func_uint16_t_u_u(l_1426, (l_1405 <= (0x3BE7L < (((((safe_sub_func_uint16_t_u_u((+l_1413), 65530UL)) != l_1405) , l_1430) , g_740[0][2][3]) < 18446744073709551610UL))))) && g_49.f7) != p_16.f7), p_16.f4)) <= 6UL), l_1413)), 1UL))) == l_1413))), p_18.f0)) < l_1434) >= 0x1AEFL)), l_1413))), p_16.f0)))
        { 
            union U1 *l_1454 = (void*)0;
            int32_t l_1460 = (-3L);
            int32_t l_1500 = (-10L);
            int32_t l_1502 = 0xADC2CCD9L;
            int32_t l_1505 = 0x897DAE26L;
            int32_t l_1506 = (-1L);
            int32_t l_1507 = 0L;
            int32_t l_1508[3][7] = {{(-1L),0x11FC8109L,0x308A079FL,0x11FC8109L,(-1L),(-1L),0x11FC8109L},{0x42C93759L,1L,0x42C93759L,(-9L),(-9L),0x42C93759L,1L},{0x11FC8109L,0xFADC06BAL,0x308A079FL,0x308A079FL,0xFADC06BAL,0x11FC8109L,0xFADC06BAL}};
            uint32_t l_1510 = 0x31EC35E6L;
            union U2 *l_1518 = &g_1519;
            uint32_t *l_1534 = (void*)0;
            uint32_t l_1567[2][3][4] = {{{1UL,0UL,1UL,1UL},{0UL,0UL,0x38060253L,0UL},{0UL,1UL,1UL,0UL}},{{1UL,0UL,1UL,1UL},{0UL,0UL,0x38060253L,0UL},{0UL,1UL,1UL,0UL}}};
            int i, j, k;
            if ((safe_lshift_func_uint16_t_u_u(l_1417[1], 2)))
            { 
                uint32_t *l_1437[6][1];
                const int32_t l_1443 = 0x32498F82L;
                uint32_t **l_1448 = &g_371;
                uint32_t ***l_1449 = &l_1448;
                uint32_t **l_1450 = &g_371;
                int8_t *l_1451 = (void*)0;
                int8_t *l_1452 = &g_256;
                int32_t *l_1453 = &g_41;
                int i, j;
                for (i = 0; i < 6; i++)
                {
                    for (j = 0; j < 1; j++)
                        l_1437[i][j] = &g_32.f0;
                }
                (*l_1453) &= (((l_1417[1] ^= (((g_49.f2 &= 0UL) >= (0xDA8BDCD2436781E2LL || (safe_mod_func_uint16_t_u_u((+((*l_1452) = ((safe_div_func_int8_t_s_s((l_1443 <= (safe_mul_func_uint16_t_u_u(0x12C3L, (((((((safe_rshift_func_uint8_t_u_s((p_16.f6 || l_1433), 6)) , ((*l_1449) = ((*g_369) = l_1448))) != l_1450) ^ 1L) <= p_16.f6) >= 0L) , l_1443)))), g_1009[1])) , 0x36L))), (**g_1159))))) && g_49.f5)) , g_199) < 0UL);
                for (g_54 = 0; (g_54 >= 0); g_54 -= 1)
                { 
                    return (*g_325);
                }
                (*g_965) = l_1454;
                (*l_1453) = (0x70L != (~(*l_1453)));
            }
            else
            { 
                int32_t **l_1461 = &g_623[0][1][2];
                l_1460 = (safe_sub_func_uint64_t_u_u((safe_rshift_func_int16_t_s_s(((*g_106) = (&p_20 == g_623[0][1][2])), 15)), 0x07BEA8C70B4652DFLL));
                for (p_16.f1 = 0; (p_16.f1 >= 0); p_16.f1 -= 1)
                { 
                    const int32_t l_1466 = 0x5433DF62L;
                    int32_t *l_1467 = &g_37;
                    l_1462 = l_1461;
                    (*l_1467) = ((p_18.f0 != (+l_1433)) , (safe_add_func_uint16_t_u_u(p_16.f2, (l_1466 , p_19))));
                    if (p_16.f6)
                        goto lbl_1468;
                }
            }
            l_1478 = (((l_1469 , &p_18) != ((*g_965) = l_1454)) == ((*g_1160) , ((safe_mod_func_int32_t_s_s((safe_mul_func_uint16_t_u_u(((safe_unary_minus_func_int16_t_s(l_1460)) >= (l_1475 == ((++(*g_1160)) , l_1475))), 0x9F11L)), 0x2C4AC403L)) > 0xE9C1E335L)));
            if ((safe_mod_func_int8_t_s_s(((safe_sub_func_int8_t_s_s((+(((*g_106) = (safe_rshift_func_uint8_t_u_u(l_1460, 2))) <= ((void*)0 != l_1462))), (0UL | (++p_16.f3)))) > ((l_1490 = (((g_82 ^= (l_1478 = (18446744073709551610UL != (l_1460 < 7L)))) != p_19) , (-1L))) <= g_164)), g_292.f4)))
            { 
                int32_t *l_1491 = &g_120;
                int32_t *l_1492 = &g_199;
                int32_t *l_1493 = &l_1478;
                int32_t *l_1494 = (void*)0;
                int32_t *l_1495 = &g_41;
                int32_t *l_1496 = &g_191[3];
                int32_t *l_1497 = &g_37;
                int32_t *l_1498 = &g_41;
                int32_t *l_1499[5][3][4] = {{{(void*)0,(void*)0,&g_191[3],(void*)0},{&l_1460,&l_1417[1],&l_1490,&g_191[3]},{(void*)0,&l_1417[1],&l_1417[1],(void*)0}},{{&l_1417[1],(void*)0,&l_1460,(void*)0},{&l_1417[1],&l_1460,&l_1417[1],&l_1490},{(void*)0,(void*)0,&l_1490,&l_1490}},{{&l_1460,&l_1460,&g_191[3],(void*)0},{(void*)0,(void*)0,&g_191[3],(void*)0},{&l_1460,&l_1417[1],&l_1490,&g_191[3]}},{{(void*)0,&l_1417[1],&l_1417[1],(void*)0},{&l_1417[1],(void*)0,&l_1460,(void*)0},{&l_1417[1],&l_1460,&l_1417[1],&l_1490}},{{(void*)0,(void*)0,&l_1490,&l_1490},{&l_1460,&l_1460,&g_191[3],(void*)0},{(void*)0,(void*)0,&g_191[3],(void*)0}}};
                int i, j, k;
                (*l_1491) = (0x39C65FF4E1DAF7E0LL >= g_5);
                l_1510++;
                (*l_1491) = ((*l_1495) |= l_1513[5]);
                (*g_1075) = &l_1508[2][3];
                if ((safe_lshift_func_uint8_t_u_s((g_282 = (((~p_18.f0) & (-7L)) & l_1505)), 1)))
                { 
                    l_1518 = ((**g_1017) = l_1517);
                }
                else
                { 
                    int64_t *l_1520 = &g_280[0][1];
                    (***g_1074) &= (((*l_1520) = 0xE2428AE49BF3C3F5LL) , (g_256 ^ p_16.f2));
                    l_1521[2]++;
                    (**g_1074) = &l_1490;
                    (**g_1074) = &l_1506;
                }
            }
            else
            { 
                uint8_t l_1538 = 0x08L;
                for (p_16.f6 = 0; (p_16.f6 <= 5); p_16.f6 += 1)
                { 
                    int32_t *l_1524 = &g_191[p_16.f6];
                    int32_t *l_1525 = &l_1508[0][6];
                    int32_t *l_1526[6];
                    uint32_t l_1527[3][7][6] = {{{4294967294UL,1UL,4294967290UL,4294967290UL,4294967288UL,2UL},{0x44FAAF6FL,0x375FA9ADL,0x7963C23EL,0x64F08E25L,4294967289UL,0UL},{4294967288UL,0x7963C23EL,0UL,0xF8A7D7BEL,4294967290UL,0x307BF62AL},{4294967290UL,0x721CD93CL,0xBEC4FE08L,0xBEC4FE08L,0x721CD93CL,4294967290UL},{4294967295UL,0x6893DCAEL,0x721CD93CL,0UL,0UL,1UL},{0x307BF62AL,0x64F08E25L,0xAAC59696L,4294967288UL,4294967294UL,4294967289UL},{0x307BF62AL,0x18D6867EL,4294967288UL,0UL,0xF8A7D7BEL,0x47D56FA0L}},{{4294967295UL,0UL,2UL,0xBEC4FE08L,4294967290UL,4294967288UL},{4294967294UL,0x64F08E25L,4294967295UL,1UL,4294967295UL,0x64F08E25L},{0x47D56FA0L,4294967289UL,4294967295UL,0xF8A7D7BEL,4294967294UL,1UL},{0UL,4294967293UL,4294967290UL,4294967294UL,0x963E1349L,0x3F11DD6AL},{0x721CD93CL,4294967293UL,0x64F08E25L,0UL,4294967294UL,0x375FA9ADL},{0x3F11DD6AL,4294967289UL,0x44FAAF6FL,0x721CD93CL,4294967295UL,4294967295UL},{0x18D6867EL,0x64F08E25L,1UL,4294967290UL,4294967290UL,1UL}},{{0UL,0UL,0UL,4294967289UL,1UL,0UL},{0xF8A7D7BEL,0UL,0x7963C23EL,4294967288UL,0x721CD93CL,0UL},{0UL,0xF8A7D7BEL,0x7963C23EL,4294967295UL,0UL,0UL},{0xAAC59696L,4294967295UL,0UL,2UL,0xBEC4FE08L,1UL},{2UL,0xBEC4FE08L,1UL,4294967295UL,0x307BF62AL,4294967295UL},{0x44FAAF6FL,0xAAC59696L,0x44FAAF6FL,1UL,0xB6A28F02L,0x375FA9ADL},{0xB6A28F02L,4294967295UL,0x64F08E25L,0UL,0x47D56FA0L,0x3F11DD6AL}}};
                    const uint32_t l_1539 = 4294967293UL;
                    int i, j, k;
                    for (i = 0; i < 6; i++)
                        l_1526[i] = &l_1460;
                    --l_1527[2][5][1];
                    if (g_191[p_16.f6])
                        continue;
                    (*l_1524) = (safe_rshift_func_uint16_t_u_s((safe_lshift_func_int16_t_s_s((((**g_369) = (l_1534 = (*g_370))) == g_1535), (safe_div_func_int16_t_s_s(l_1538, (*l_1524))))), 12));
                    if (l_1539)
                        break;
                }
            }
            for (l_1501 = 2; (l_1501 >= 0); l_1501 -= 1)
            { 
                uint8_t l_1548 = 0x06L;
                uint64_t *l_1560[1][3];
                uint64_t **l_1561[5] = {&l_1560[0][2],&l_1560[0][2],&l_1560[0][2],&l_1560[0][2],&l_1560[0][2]};
                int32_t *l_1564 = &l_1417[1];
                int32_t l_1565 = 0L;
                int i, j;
                for (i = 0; i < 1; i++)
                {
                    for (j = 0; j < 3; j++)
                        l_1560[i][j] = &g_82;
                }
                l_1417[1] &= (p_16.f7 , (((((safe_div_func_int32_t_s_s((p_18 , (safe_mod_func_uint16_t_u_u(((((((1UL && 1UL) == ((3UL ^ 0x4F0413AA399FB628LL) >= ((safe_lshift_func_int8_t_s_s((((safe_lshift_func_int16_t_s_u(5L, 7)) < 0L) || (**g_1159)), g_420)) | l_1500))) , g_960[2].f2) == g_54) && 0x85509DEEL) & p_19), l_1548))), g_280[1][0])) , l_1478) > 0x105DE3B1L) > l_1521[1]) > (**g_1159)));
                l_1433 &= (((safe_unary_minus_func_int8_t_s((l_1460 <= (safe_rshift_func_int16_t_s_s(p_16.f3, l_1506))))) < (((l_1504[4] ^ ((safe_lshift_func_uint16_t_u_s(((**g_1159) = (safe_sub_func_uint16_t_u_u(((l_1548 , (g_82 = l_1500)) && ((safe_add_func_uint8_t_u_u((safe_mod_func_int32_t_s_s(((*l_1564) = ((g_1562 = l_1560[0][0]) == l_1563)), l_1565)), l_1566)) && l_1513[5])), p_18.f0))), l_1567[0][1][1])) == (-7L))) >= l_1565) , p_16.f5)) == l_1507);
                for (g_277.f0 = 0; (g_277.f0 >= 0); g_277.f0 -= 1)
                { 
                    uint64_t l_1568 = 18446744073709551606UL;
                    int32_t **l_1580 = &g_623[0][1][0];
                    int i, j, k;
                    l_1568--;
                    (*l_1564) = l_1434;
                    if (g_420)
                        goto lbl_1468;
                    (*l_1564) = (&g_1279 == ((*l_1580) = ((p_17 , ((safe_add_func_uint16_t_u_u(((((safe_mul_func_uint16_t_u_u((((void*)0 != l_1575) || (((4294967295UL ^ ((((*g_106) = ((safe_add_func_int16_t_s_s((safe_sub_func_uint64_t_u_u(l_1568, l_1508[2][3])), 0xBA94L)) < 0x91DCL)) != 0x85F7L) , p_16.f3)) <= p_16.f4) != (*l_1564))), (*l_1564))) || p_16.f6) & l_1417[2]) | (-1L)), 9UL)) == p_16.f5)) , (void*)0)));
                }
            }
        }
        else
        { 
            uint32_t ***l_1581 = &g_370;
            uint32_t ****l_1582 = &l_1581;
            const uint32_t *l_1584 = (void*)0;
            const uint32_t **l_1583 = &l_1584;
            (*l_1582) = l_1581;
            for (p_18.f0 = 0; (p_18.f0 <= 0); p_18.f0 += 1)
            { 
                return p_16.f6;
            }
            if (((l_1583 == &l_1575) | p_16.f7))
            { 
                union U1 l_1585 = {0x41C88F99L};
                int16_t l_1598 = 1L;
                int32_t l_1599 = 0xA94643E4L;
                if (p_17)
                { 
                    uint32_t l_1592 = 0x57D9F3D5L;
                    int32_t *l_1593 = &l_1501;
                    l_1599 &= (((((void*)0 != &g_370) & ((l_1585 , (safe_mul_func_int16_t_s_s((safe_add_func_int8_t_s_s(g_82, (g_37 & ((safe_mul_func_uint8_t_u_u((((*l_1593) ^= l_1592) , ((safe_lshift_func_int16_t_s_s(((((safe_mul_func_uint16_t_u_u(p_16.f7, l_1598)) >= p_20) < p_16.f5) , p_16.f3), (*g_106))) , p_16.f5)), g_368.f0)) , l_1598)))), (*g_1160)))) , p_17)) >= p_20) > p_19);
                    if (p_19)
                        break;
                    return p_16.f5;
                }
                else
                { 
                    const int32_t *l_1600 = &g_1601[0];
                    const int32_t **l_1602 = (void*)0;
                    const int32_t **l_1603 = &g_325;
                    (*l_1603) = (l_1600 = (void*)0);
                    return p_18.f0;
                }
            }
            else
            { 
                int32_t *l_1604 = &g_41;
                (*l_1604) = 0x8CB00C8BL;
            }
        }
        return p_20;
    }
    (*g_1075) = &l_1417[1];
    return p_16.f1;
}



static int64_t  func_28(union U1 * p_29, union U2  p_30)
{ 
    uint32_t l_35 = 0xD0EE3B00L;
    int32_t l_42 = 2L;
    int32_t l_51 = 0xC6516EAEL;
    int32_t l_52 = 0xC8FCBD0DL;
    int32_t l_53 = 0x77E9FB13L;
    int32_t l_57 = 0x9DFF04C3L;
    uint16_t *l_1096 = &g_49.f3;
    uint64_t l_1144 = 0x3104C88E9EB9DE5ALL;
    struct S0 **l_1167[4];
    union U2 l_1236 = {6L};
    union U2 *l_1340 = (void*)0;
    uint64_t l_1362 = 0x0616E1F1BF81EF87LL;
    int32_t *l_1384 = &g_191[3];
    int32_t *l_1385 = &l_42;
    int32_t *l_1386 = &g_191[3];
    int32_t *l_1387 = &g_191[5];
    int32_t *l_1388 = &l_52;
    int32_t *l_1389 = &g_191[4];
    int32_t *l_1390 = (void*)0;
    int32_t *l_1391 = &l_42;
    int32_t *l_1392[3][5] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
    uint8_t l_1393 = 0x8EL;
    int i, j;
    for (i = 0; i < 4; i++)
        l_1167[i] = (void*)0;
    if (g_8)
    { 
        int32_t *l_36 = &g_37;
        uint64_t l_45[6][2] = {{1UL,0x24406997B9FFBDD2LL},{1UL,1UL},{0x24406997B9FFBDD2LL,1UL},{1UL,0x24406997B9FFBDD2LL},{1UL,1UL},{0x24406997B9FFBDD2LL,1UL}};
        int32_t l_56 = 0xB2C9D536L;
        union U1 **l_1125 = &g_31;
        int i, j;
        (*l_36) = l_35;
        for (g_37 = 0; (g_37 == 4); ++g_37)
        { 
            int32_t *l_40 = &g_41;
            int32_t *l_43 = &l_42;
            int32_t *l_44[1];
            struct S0 *l_48 = &g_49;
            struct S0 **l_50 = &l_48;
            int32_t *l_64 = &g_54;
            uint32_t ** const *l_1103 = &g_370;
            uint32_t ** const **l_1102 = &l_1103;
            uint32_t ** const ***l_1101[2][3] = {{&l_1102,&l_1102,&l_1102},{&l_1102,&l_1102,&l_1102}};
            int i, j;
            for (i = 0; i < 1; i++)
                l_44[i] = &l_42;
            ++l_45[4][0];
            (*l_50) = l_48;
            g_58++;
        }
        (*l_36) = (safe_rshift_func_uint8_t_u_s(((((l_1125 == (void*)0) < ((((safe_rshift_func_int8_t_s_s((p_30.f2 > (safe_mul_func_int16_t_s_s((safe_div_func_int64_t_s_s(g_740[0][1][0], (safe_div_func_uint32_t_u_u((((safe_lshift_func_int8_t_s_s((safe_div_func_int32_t_s_s((safe_div_func_int64_t_s_s((safe_add_func_int16_t_s_s(((p_30.f2 && p_30.f1) >= ((safe_add_func_uint8_t_u_u(0UL, 0L)) && p_30.f1)), p_30.f1)), p_30.f1)), p_30.f1)), 0)) >= p_30.f0) && g_55[3][1][1]), 9UL)))), p_30.f0))), p_30.f0)) == 0x89L) ^ l_1144) > l_53)) > 0xF06AL) , g_55[1][1][3]), 0));
    }
    else
    { 
        uint32_t l_1154 = 0x5F194301L;
        uint16_t l_1176[7] = {7UL,7UL,7UL,7UL,7UL,7UL,7UL};
        int32_t l_1206 = (-1L);
        int32_t l_1207 = (-2L);
        struct S0 l_1246 = {0x1C09L,0L,137,65535UL,0x753FL,676,0xF285L,2L};
        int32_t l_1281 = 7L;
        int32_t l_1284 = (-1L);
        int32_t l_1285 = (-1L);
        uint32_t *l_1337 = &g_32.f0;
        uint32_t l_1356 = 0xEF83B8A9L;
        int32_t * const l_1357 = &l_1207;
        int i;
        for (l_51 = 2; (l_51 <= 6); l_51 += 1)
        { 
            int i;
            (**g_1074) = &g_191[l_51];
        }
        for (g_292.f4 = 0; (g_292.f4 != (-29)); --g_292.f4)
        { 
            struct S0 *l_1158 = &g_292;
            struct S0 **l_1157 = &l_1158;
            uint16_t ***l_1169 = &g_1159;
            int32_t l_1177 = 0xBAC32266L;
            int8_t *l_1204 = (void*)0;
            int8_t *l_1205[1];
            int32_t *l_1208 = &l_51;
            struct S0 * const **l_1221[2][5] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
            int i, j;
            for (i = 0; i < 1; i++)
                l_1205[i] = (void*)0;
            for (g_82 = 0; (g_82 == 49); g_82 = safe_add_func_uint16_t_u_u(g_82, 4))
            { 
                if ((*g_325))
                { 
                    int32_t *l_1149[7] = {&g_41,&g_41,(void*)0,&g_41,&g_41,(void*)0,&g_41};
                    int i;
                    (**g_1074) = &l_52;
                    g_191[1] |= (g_120 = ((***g_1074) = (*g_325)));
                    if (l_53)
                        continue;
                }
                else
                { 
                    int32_t *l_1150 = &g_41;
                    int32_t *l_1151 = &l_51;
                    int32_t *l_1152 = &g_120;
                    int32_t *l_1153[7] = {&l_51,(void*)0,(void*)0,&l_51,(void*)0,(void*)0,&l_51};
                    int i;
                    if (p_30.f0)
                        break;
                    l_1154--;
                }
            }
            (*l_1157) = &g_292;
            for (l_57 = 1; (l_57 >= 0); l_57 -= 1)
            { 
                struct S0 ***l_1168 = (void*)0;
                int i, j;
                for (g_32.f0 = 0; (g_32.f0 <= 1); g_32.f0 += 1)
                { 
                    uint16_t ***l_1161 = (void*)0;
                    uint16_t ***l_1162 = &g_1159;
                    uint8_t *l_1165 = &g_282;
                    int32_t *l_1166 = &l_52;
                    int i, j, k;
                    (*l_1162) = g_1159;
                    if (g_280[l_57][l_57])
                        break;
                    (*l_1166) ^= (safe_lshift_func_int8_t_s_s(g_55[(g_32.f0 + 2)][l_57][(l_57 + 2)], (((***l_1162) = (((*l_1165) = 0x7CL) , g_191[(g_32.f0 + 1)])) & p_30.f1)));
                    (*l_1166) = p_30.f0;
                }
                if (g_280[l_57][l_57])
                    continue;
                l_53 &= (((l_1157 = l_1167[0]) != (p_30 , (void*)0)) , ((((((void*)0 == l_1169) ^ (safe_mul_func_uint16_t_u_u(((((255UL != (safe_mod_func_uint64_t_u_u(((safe_div_func_uint8_t_u_u(0x26L, g_280[l_57][l_57])) >= l_52), l_1176[5]))) , l_1154) ^ 6L) , l_1154), 0L))) || p_30.f1) || l_1177) < 0x65274873L));
                for (l_53 = 1; (l_53 >= 0); l_53 -= 1)
                { 
                    int32_t *l_1178 = &l_51;
                    int i, j, k;
                    l_1177 |= ((*l_1178) = g_55[(l_57 + 4)][l_57][(l_53 + 1)]);
                    (**g_1074) = l_1178;
                    (**g_1074) = l_1178;
                }
            }
            (*l_1208) = ((safe_lshift_func_int8_t_s_s(((l_1207 = ((safe_lshift_func_uint16_t_u_u((safe_mul_func_uint8_t_u_u((l_57 = (safe_sub_func_int16_t_s_s(l_1176[5], ((!(safe_rshift_func_uint16_t_u_s((safe_rshift_func_int8_t_s_u((l_1206 = (((safe_div_func_int8_t_s_s(p_30.f2, p_30.f0)) & (*g_1160)) > (safe_mod_func_uint64_t_u_u((safe_mul_func_int8_t_s_s((((safe_sub_func_uint16_t_u_u((safe_sub_func_uint64_t_u_u(l_1176[3], l_1176[2])), (safe_mul_func_uint16_t_u_u(0x6A41L, l_1154)))) > 0x9BE7E836L) & 0x1EL), 249UL)), g_55[1][1][3])))), g_292.f7)), p_30.f0))) > 255UL)))), g_55[1][1][3])), (**g_1159))) , l_1206)) != 0L), 6)) && 0xA8E8A636FE242341LL);
            for (g_49.f1 = 0; (g_49.f1 < (-13)); g_49.f1--)
            { 
                int32_t l_1223 = 1L;
                for (l_42 = 0; (l_42 > 6); l_42++)
                { 
                    int32_t **l_1213 = &g_623[0][1][2];
                    int32_t ***l_1214 = (void*)0;
                    int32_t ***l_1215 = &l_1213;
                    (*l_1215) = l_1213;
                    (**g_1074) = &l_42;
                }
                l_1223 = ((*l_1208) = (((*l_1158) , g_1216) != ((safe_rshift_func_uint16_t_u_s(0x627CL, 0)) , (g_1222 = l_1221[0][3]))));
            }
        }
        for (g_41 = (-10); (g_41 >= 13); ++g_41)
        { 
            int32_t l_1239 = 1L;
            int32_t l_1240 = 0xC20610E7L;
            uint8_t *l_1243 = &g_282;
            uint16_t l_1274[1];
            int i;
            for (i = 0; i < 1; i++)
                l_1274[i] = 0xA3B6L;
            for (g_49.f3 = 0; (g_49.f3 <= 1); g_49.f3 += 1)
            { 
                int32_t *l_1227 = &l_1207;
                uint8_t *l_1237 = &g_96;
                uint16_t *l_1238[2][4][2] = {{{&g_292.f3,&g_292.f3},{&g_292.f3,&g_292.f3},{&g_292.f3,&g_292.f3},{&g_292.f3,&g_292.f3}},{{&g_292.f3,&g_292.f3},{&g_292.f3,&g_292.f3},{&g_292.f3,&g_292.f3},{&g_292.f3,&g_292.f3}}};
                int i, j, k;
                for (g_32.f0 = 0; (g_32.f0 <= 6); g_32.f0 += 1)
                { 
                    int32_t *l_1226 = &l_51;
                    int i, j;
                    (**g_1074) = (void*)0;
                    l_52 ^= (0x6264B30A8A85EB4ELL < (-9L));
                    if (g_280[g_49.f3][(g_49.f3 + 1)])
                        break;
                    (*l_1226) &= (g_280[g_49.f3][(g_49.f3 + 1)] || (l_1176[(g_49.f3 + 2)] & 0xEBL));
                }
                for (p_30.f0 = 1; (p_30.f0 >= 0); p_30.f0 -= 1)
                { 
                    int i;
                    (**g_1074) = (l_1176[(p_30.f0 + 3)] , l_1227);
                }
                l_1240 = (l_1176[(g_49.f3 + 3)] || (((safe_lshift_func_uint16_t_u_s(0UL, 4)) > (((*g_1160) , l_52) | (((safe_mul_func_uint16_t_u_u((l_1239 &= (safe_lshift_func_uint16_t_u_u((l_1176[(g_49.f3 + 4)] = (safe_mul_func_uint16_t_u_u(((l_1236 , (((*l_1237) = g_292.f1) || (l_1206 = l_1176[0]))) == 0x26DF5BA9L), p_30.f1))), (*g_1160)))), l_1144)) > g_41) != 0x2AE8L))) == p_30.f2));
                if ((*l_1227))
                    break;
            }
            (*g_1075) = &l_51;
            if (((safe_lshift_func_uint8_t_u_u(((*l_1243) |= 255UL), 0)) == ((**g_1075) > 0xC8CE79CDL)))
            { 
                uint32_t l_1262 = 0xD22C7646L;
                int32_t l_1277 = 0L;
                int32_t l_1278 = (-4L);
                int32_t l_1280 = 0x5FDF4D13L;
                int32_t l_1282 = 0x68CE4EB5L;
                int32_t l_1283 = (-9L);
                int32_t l_1286 = 0x86E611F6L;
                int32_t l_1287 = 1L;
                uint16_t l_1288 = 65535UL;
                union U1 l_1306[2] = {{4294967293UL},{4294967293UL}};
                int32_t *l_1314 = &l_1281;
                uint16_t l_1316 = 0x1173L;
                int i;
                for (g_49.f4 = 2; (g_49.f4 >= 0); g_49.f4 -= 1)
                { 
                    const uint8_t l_1263 = 0x5AL;
                    int32_t *l_1264 = &g_120;
                    int32_t *l_1265 = &g_191[2];
                    int32_t *l_1266 = &l_52;
                    int32_t *l_1267 = (void*)0;
                    int32_t *l_1268 = &l_1239;
                    int32_t *l_1269 = (void*)0;
                    int32_t *l_1270 = (void*)0;
                    int32_t *l_1271 = &g_191[(g_49.f4 + 3)];
                    int32_t *l_1272 = &g_37;
                    int32_t *l_1273[4] = {&g_199,&g_199,&g_199,&g_199};
                    int i;
                    g_191[(g_49.f4 + 3)] = (safe_sub_func_uint16_t_u_u(((*g_1160) = ((l_1246 , (safe_mod_func_uint64_t_u_u(((safe_rshift_func_int16_t_s_s(l_1239, ((l_1239 >= (safe_unary_minus_func_int32_t_s(((p_30.f1 , g_368.f1) , (safe_lshift_func_int16_t_s_u((safe_lshift_func_int16_t_s_s((safe_lshift_func_uint16_t_u_u(65526UL, 9)), (safe_rshift_func_uint16_t_u_s((safe_sub_func_int16_t_s_s((((((l_1262 < l_57) <= p_30.f1) & l_1236.f2) , 0xB920L) < 0L), (**g_1159))), p_30.f0)))), (**g_1159))))))) && g_49.f5))) , l_1263), l_1263))) != l_51)), p_30.f2));
                    (*g_1075) = &l_1207;
                    ++l_1274[0];
                    (**g_1017) = (void*)0;
                    l_1288--;
                }
                for (l_51 = 16; (l_51 < 28); l_51++)
                { 
                    uint32_t l_1301 = 0xEDE85293L;
                    uint32_t *l_1304 = &l_1262;
                    union U2 *l_1305 = &g_277;
                    int32_t *l_1313 = &l_1277;
                    int32_t *l_1315[2];
                    int i;
                    for (i = 0; i < 2; i++)
                        l_1315[i] = (void*)0;
                    l_1281 = ((safe_mod_func_int16_t_s_s(((((((safe_add_func_int16_t_s_s((((safe_lshift_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_u(0UL, (((p_30.f0 == (0x68L != (l_1301 || 4L))) <= ((((safe_mul_func_uint16_t_u_u((((*l_1304) = ((g_282 , p_30) , g_32.f0)) || p_30.f1), (-10L))) , l_1305) != (**g_1017)) & p_30.f2)) & g_49.f7))), p_30.f2)) < l_52) , (*g_106)), 0xB41AL)) | 0xD941FCA0L) & 0x36C89BA992A0D7E4LL) , l_1306[0]) , 0x4D73FCA96434F8D1LL) < l_1246.f0), p_30.f0)) <= 0x949AL);
                    l_1239 = ((&l_1288 == (*g_1159)) < (safe_add_func_uint8_t_u_u(g_82, (4294967295UL <= (((**g_1159) != ((safe_lshift_func_uint8_t_u_s((g_11 , g_49.f1), 2)) < 0xF5F4L)) < p_30.f0)))));
                    (*l_1313) |= (safe_lshift_func_int8_t_s_u((((*g_106) ^= 0L) & p_30.f2), 0));
                    l_1314 = &l_1206;
                    l_1316--;
                }
                for (g_120 = 0; (g_120 <= 1); g_120 += 1)
                { 
                    (**g_1075) = 1L;
                }
                for (l_42 = 6; (l_42 >= 1); l_42 -= 1)
                { 
                    union U2 l_1321 = {0x4B91DA2195D6193ELL};
                    uint32_t *l_1329 = &l_1306[0].f0;
                    (**g_1075) = 0x12ED5C6CL;
                    if ((*g_192))
                        break;
                    (*l_1314) = ((**g_1075) ^= (65534UL <= (safe_mul_func_int8_t_s_s(p_30.f1, (l_1321 , (safe_mul_func_uint8_t_u_u(((safe_lshift_func_uint16_t_u_s((((*g_106) = (-1L)) ^ (**g_1159)), 12)) <= 0x7FL), (safe_mod_func_int8_t_s_s((safe_unary_minus_func_uint32_t_u(((*l_1329) = (*l_1314)))), g_575.f0)))))))));
                }
            }
            else
            { 
                return l_35;
            }
        }
        if (((safe_unary_minus_func_int64_t_s((((safe_add_func_uint8_t_u_u(((!(**g_1159)) || (p_30.f1 > (!((*l_1337) = (safe_add_func_int8_t_s_s(p_30.f0, (-1L))))))), p_30.f0)) ^ (((**g_1017) = &p_30) == (void*)0)) != l_1236.f0))) <= g_49.f1))
        { 
            int64_t l_1349 = 0xEAC2031F4F7B0743LL;
            int8_t l_1350 = 4L;
            int32_t **l_1358 = &g_192;
            if (l_1206)
            { 
                l_1350 |= ((l_35 > 0xFD26L) || ((safe_mod_func_int64_t_s_s(((l_1340 = (void*)0) == ((**g_1017) = &p_30)), (safe_div_func_int16_t_s_s((-8L), (safe_unary_minus_func_uint8_t_u((((g_960[2].f2 || (safe_unary_minus_func_uint8_t_u((safe_mul_func_int16_t_s_s((safe_lshift_func_uint16_t_u_u((**g_1159), l_35)), (*g_106)))))) & p_30.f0) && l_1349))))))) == 0xDA89EEEAL));
            }
            else
            { 
                int32_t l_1355[7] = {6L,6L,6L,6L,6L,6L,6L};
                int i;
                l_1356 = (l_1350 <= ((((g_55[5][1][1] >= 0xAD79D5D11B9E0613LL) <= ((*p_29) , (((-3L) >= p_30.f2) >= ((l_1355[6] ^= (safe_sub_func_uint32_t_u_u((safe_mul_func_int8_t_s_s(g_191[3], l_1236.f0)), 0x24B05F73L))) & l_1350)))) > g_280[0][2]) <= l_1176[2]));
            }
            (*l_1358) = l_1357;
            (*g_192) &= (~(safe_mul_func_int16_t_s_s((*g_106), 0x1AD3L)));
        }
        else
        { 
            (*l_1357) = l_1362;
        }
        (*l_1357) = (((*g_1160) = (safe_rshift_func_uint16_t_u_s((++(*l_1096)), (safe_add_func_uint8_t_u_u((safe_sub_func_uint8_t_u_u((18446744073709551615UL < p_30.f2), 1UL)), (p_30.f0 , g_58)))))) < ((7UL < (((safe_sub_func_uint32_t_u_u((safe_lshift_func_uint8_t_u_u(((safe_add_func_uint8_t_u_u((g_280[0][2] > 0xA2E789DDCDADAD9DLL), 0x6AL)) , 0xEAL), p_30.f2)), l_51)) >= (*l_1357)) ^ p_30.f1)) >= p_30.f0));
    }
    for (l_57 = 3; (l_57 <= (-22)); --l_57)
    { 
        int8_t l_1383 = (-2L);
        for (g_41 = 0; (g_41 >= (-30)); g_41 = safe_sub_func_uint32_t_u_u(g_41, 1))
        { 
            return p_30.f0;
        }
        return l_1383;
    }
    ++l_1393;
    (*g_1075) = &l_42;
    return p_30.f2;
}



static int32_t  func_65(uint32_t  p_66, struct S0 * p_67)
{ 
    int32_t l_70[6];
    int16_t *l_71 = (void*)0;
    int16_t *l_72[6] = {(void*)0,&g_49.f4,&g_49.f4,(void*)0,&g_49.f4,&g_49.f4};
    int32_t l_73 = (-4L);
    struct S0 *l_518 = &g_292;
    struct S0 **l_517 = &l_518;
    struct S0 *l_520 = &g_292;
    struct S0 **l_519 = &l_520;
    struct S0 * const l_521 = (void*)0;
    uint32_t l_543[7][3][2] = {{{0x4352E30BL,18446744073709551612UL},{0UL,0UL},{0UL,0UL}},{{0UL,1UL},{18446744073709551612UL,0x1039C0E0L},{0UL,18446744073709551612UL}},{{0x1039C0E0L,1UL},{0x1039C0E0L,18446744073709551612UL},{0UL,0x1039C0E0L}},{{18446744073709551612UL,1UL},{0UL,0UL},{0UL,0UL}},{{0UL,1UL},{18446744073709551612UL,0x1039C0E0L},{0UL,18446744073709551612UL}},{{0x1039C0E0L,1UL},{0x1039C0E0L,18446744073709551612UL},{0UL,0x1039C0E0L}},{{18446744073709551612UL,1UL},{0UL,0UL},{0UL,0UL}}};
    union U2 *l_552 = &g_368;
    union U1 *l_553 = &g_32;
    int8_t *l_585 = (void*)0;
    int8_t **l_604 = &l_585;
    uint16_t l_612 = 1UL;
    uint32_t **l_671 = (void*)0;
    uint32_t l_698 = 0xE609A67FL;
    uint64_t *l_735 = (void*)0;
    uint32_t l_739 = 0UL;
    int64_t l_824 = 0x6E73DB2F5D99488FLL;
    int64_t *l_828 = (void*)0;
    int64_t ** const l_827 = &l_828;
    struct S0 l_845 = {0L,0x02B6L,1236,0xBFEDL,8L,1417,0x3E5DL,1L};
    uint16_t l_862 = 1UL;
    uint16_t *l_935 = &l_862;
    int32_t l_938 = 0xEF81988AL;
    union U2 **l_943 = &l_552;
    union U2 ***l_942 = &l_943;
    uint16_t l_946 = 0UL;
    const int8_t l_994 = 1L;
    int32_t *l_996 = &g_37;
    uint32_t l_1055 = 18446744073709551615UL;
    union U2 l_1067 = {-1L};
    int32_t ****l_1076 = &g_1074;
    int32_t ***l_1078 = (void*)0;
    int32_t ****l_1077 = &l_1078;
    int32_t *l_1079 = (void*)0;
    int32_t *l_1080 = &g_41;
    int32_t *l_1081 = (void*)0;
    int32_t *l_1082 = &g_191[6];
    int32_t *l_1083 = (void*)0;
    int32_t *l_1084 = &l_70[1];
    int32_t *l_1085 = &l_70[2];
    int32_t *l_1086 = &g_41;
    int32_t *l_1087 = &l_70[2];
    int32_t *l_1088 = &l_70[5];
    int32_t *l_1089 = &g_199;
    int32_t *l_1090 = &g_191[3];
    int32_t *l_1091 = &l_70[2];
    int32_t *l_1092[6][2] = {{(void*)0,&g_37},{(void*)0,&g_37},{(void*)0,&g_37},{(void*)0,&g_37},{(void*)0,&g_37},{(void*)0,&g_37}};
    uint16_t l_1093 = 0x6846L;
    int i, j, k;
    for (i = 0; i < 6; i++)
        l_70[i] = (-6L);
    if ((((g_32.f0 && (l_70[2] = l_70[2])) == l_73) >= ((safe_sub_func_uint64_t_u_u((((*l_519) = ((*l_517) = func_76(&g_54))) != l_521), 0L)) || l_73)))
    { 
        union U2 *l_522 = &g_368;
        union U2 *l_524 = &g_277;
        union U2 **l_523 = &l_524;
        int32_t *l_525 = &g_41;
        int64_t *l_526[1];
        int32_t l_531[7][5][6] = {{{0xA2B7325EL,(-6L),0xC96DE90FL,9L,0x1BFDBF40L,0x2CFDE6ECL},{0xD1F04F9BL,0x99F49AB6L,0x70509F4EL,0x1BFDBF40L,0x293CA48FL,(-1L)},{0L,0x755F631AL,0x815ECDC3L,0xD1F04F9BL,(-1L),7L},{9L,(-1L),0xFA902D93L,0L,0x56CB96ADL,1L},{(-6L),0x85C5605CL,0x99F49AB6L,0L,0xF8AD1B15L,(-1L)}},{{0xD8B76CBBL,0xB10A9F40L,1L,0x6F429334L,0x92D997F5L,(-1L)},{0x4BFCDC0BL,0L,(-2L),0x1D4C1131L,(-1L),(-1L)},{0x298F7468L,(-4L),0L,0x92D997F5L,0x1D4C1131L,0x362AA514L},{(-8L),(-4L),3L,0x815ECDC3L,1L,1L},{(-1L),1L,1L,(-1L),0x2CFDE6ECL,9L}},{{0x70509F4EL,9L,3L,(-2L),0xD8B76CBBL,0xABCE7849L},{0x6A7D9B40L,0xE001D94AL,(-8L),(-5L),0xD8B76CBBL,(-1L)},{0xF8FD29A8L,9L,0x755F631AL,1L,0x2CFDE6ECL,0x56CB96ADL},{(-2L),1L,0x1C5CBACCL,0x5B97714CL,1L,0xA2B7325EL},{0L,(-4L),0L,1L,0x1D4C1131L,0x955878C9L}},{{0x1C5CBACCL,(-4L),0xF8AD1B15L,(-1L),(-1L),0x6F429334L},{0x362AA514L,0L,9L,0x99F49AB6L,0x92D997F5L,3L},{0x6F429334L,0xB10A9F40L,0x2BD22693L,0x88994A78L,0xF8AD1B15L,0x99F49AB6L},{(-1L),0x85C5605CL,(-2L),0xFC491334L,0x56CB96ADL,(-4L)},{(-2L),(-1L),(-1L),0xFA902D93L,(-1L),0x38F2BCE4L}},{{(-4L),0x755F631AL,0x56CB96ADL,(-8L),0x293CA48FL,0x4BFCDC0BL},{1L,0x99F49AB6L,0L,(-2L),0x1BFDBF40L,(-1L)},{(-1L),(-6L),0xFC491334L,(-6L),(-1L),(-1L)},{0x38F2BCE4L,0x2BD22693L,0x6A7D9B40L,0xB0D9AFEFL,(-2L),0x1C5CBACCL},{(-2L),0x362AA514L,(-5L),0L,0xABCE7849L,1L}},{{(-8L),(-1L),0xFC491334L,(-1L),9L,1L},{0xABCE7849L,0x4BFCDC0BL,0x079181C5L,0xFC491334L,1L,0x1D4C1131L},{(-1L),0L,0L,0x38F2BCE4L,0x362AA514L,(-2L)},{0x71E7F586L,0xD8B76CBBL,3L,0x88994A78L,(-1L),0x755F631AL},{0L,(-1L),0xF8FD29A8L,(-6L),(-1L),(-5L)}},{{0x92D997F5L,(-1L),0xD8B76CBBL,(-8L),(-1L),(-2L)},{0x70509F4EL,0x298F7468L,0L,0x362AA514L,1L,0x5C374531L},{0x88994A78L,0x85C5605CL,1L,0xABCE7849L,7L,3L},{0x85C5605CL,0xB0D9AFEFL,0x99F49AB6L,(-2L),(-1L),(-2L)},{(-1L),0x1C5CBACCL,0x71E7F586L,0x293CA48FL,0x2CFDE6ECL,0xB0D9AFEFL}}};
        uint32_t l_564 = 0x7620C6CBL;
        int8_t *l_583 = &g_256;
        int8_t *l_586 = &g_256;
        int32_t l_592[5][5][1] = {{{0x11EE539BL},{0x1CCBC60FL},{0x11EE539BL},{0x1CCBC60FL},{0x11EE539BL}},{{0x1CCBC60FL},{0x11EE539BL},{0x1CCBC60FL},{0x11EE539BL},{0x1CCBC60FL}},{{0x11EE539BL},{0x1CCBC60FL},{0x11EE539BL},{0x1CCBC60FL},{0x11EE539BL}},{{0x1CCBC60FL},{0x11EE539BL},{0x1CCBC60FL},{0x11EE539BL},{0x1CCBC60FL}},{{0x11EE539BL},{0x1CCBC60FL},{0x11EE539BL},{0x1CCBC60FL},{0x11EE539BL}}};
        int32_t *l_608 = &l_70[1];
        int32_t *l_609 = &l_531[0][0][0];
        int32_t *l_610 = &g_191[5];
        int32_t *l_611[5] = {&g_199,&g_199,&g_199,&g_199,&g_199};
        int i, j, k;
        for (i = 0; i < 1; i++)
            l_526[i] = (void*)0;
        (*l_525) = (l_522 != ((*l_523) = (g_277 , &g_277)));
        g_325 = l_525;
        if (((l_70[0] = (((*l_525) = g_368.f2) >= ((safe_lshift_func_uint8_t_u_s(g_277.f2, g_256)) <= (safe_rshift_func_int16_t_s_u((l_531[5][4][1] || ((((0UL && 0x50L) , (((safe_sub_func_uint64_t_u_u(((safe_mod_func_uint8_t_u_u(((void*)0 != g_193), 0x94L)) == l_73), g_5)) != (-7L)) || g_58)) < 6L) && l_70[2])), p_66))))) != p_66))
        { 
            int32_t *l_536 = (void*)0;
            int32_t *l_537 = &l_531[4][2][4];
            int32_t *l_538 = &g_191[3];
            int32_t l_539 = 0x7196F941L;
            int32_t *l_540 = &l_73;
            int32_t *l_541 = &l_539;
            int32_t *l_542[6][7] = {{&g_11,(void*)0,(void*)0,&g_11,(void*)0,(void*)0,&g_11},{&l_73,&g_11,(void*)0,(void*)0,&g_11,(void*)0,(void*)0},{&g_11,&g_11,&g_199,&g_37,&l_73,&g_199,&l_73},{&g_37,(void*)0,(void*)0,&g_37,(void*)0,&l_73,&g_37},{&l_73,&l_73,(void*)0,(void*)0,&l_73,&l_73,(void*)0},{&l_73,&g_37,&g_199,&g_11,&g_11,&g_199,&g_37}};
            int i, j;
            ++l_543[2][2][0];
            for (g_164 = 0; (g_164 <= 6); g_164 += 1)
            { 
                int32_t **l_548 = (void*)0;
                int32_t **l_549[5];
                int i;
                for (i = 0; i < 5; i++)
                    l_549[i] = &l_540;
                for (g_96 = 0; (g_96 <= 6); g_96 += 1)
                { 
                    (*l_538) ^= (safe_mod_func_int8_t_s_s((-1L), 0xCBL));
                }
                l_540 = &g_191[g_164];
                if (p_66)
                    break;
                for (g_82 = 10; (g_82 > 4); g_82 = safe_sub_func_uint8_t_u_u(g_82, 1))
                { 
                    (*l_523) = l_552;
                    (*l_525) = p_66;
                }
                if (g_37)
                    goto lbl_615;
            }
            l_553 = (g_292.f2 , l_553);
        }
        else
        { 
            int8_t *l_560 = &g_256;
            uint32_t l_562 = 0xBA17DC35L;
            int32_t *l_563 = &l_531[5][4][1];
            const union U1 *l_574 = &g_575;
            int8_t **l_582 = &l_560;
            int8_t **l_584 = (void*)0;
            int16_t l_593[7] = {0x6BC8L,0xE191L,0xE191L,0x6BC8L,0xE191L,0xE191L,0x6BC8L};
            int32_t *l_594 = &g_199;
            uint16_t *l_605[5] = {&g_49.f6,&g_49.f6,&g_49.f6,&g_49.f6,&g_49.f6};
            int i;
            if (((*l_525) = (*g_325)))
            { 
                int64_t l_557 = 0L;
                if ((!(safe_div_func_int8_t_s_s(((*l_560) &= ((((*l_525) < l_557) , (safe_mul_func_uint16_t_u_u(((3L ^ p_66) && ((((void*)0 == l_560) > (!l_562)) ^ 0x40L)), 6L))) | 0L)), (*l_525)))))
                { 
                    g_192 = l_563;
                    return p_66;
                }
                else
                { 
                    (*l_525) = l_564;
                    (*l_563) ^= (safe_add_func_uint16_t_u_u(((g_292.f7 <= (((***g_369) , l_70[3]) & 0UL)) && ((safe_add_func_int16_t_s_s(p_66, ((+((((*l_519) = p_67) != (void*)0) == 2UL)) > 0x325AEC113647E2D9LL))) || (*l_525))), l_557));
                    return l_70[1];
                }
            }
            else
            { 
                for (g_58 = 0; (g_58 == 9); g_58 = safe_add_func_uint32_t_u_u(g_58, 4))
                { 
                    const union U1 *l_577 = &g_32;
                    const union U1 **l_576 = &l_577;
                    (*l_563) = (*g_325);
                    if (p_66)
                        break;
                    (*l_525) = p_66;
                    (*l_576) = (l_574 = &g_32);
                }
                (*l_525) = p_66;
            }
            (*l_594) = (7L >= (safe_lshift_func_uint8_t_u_u((safe_mul_func_int16_t_s_s(((g_54 = ((((*l_525) = (((*l_582) = l_560) != (l_586 = (l_585 = l_583)))) || ((*l_525) = 8L)) || 0xCBC90BA0L)) , ((*l_563) = (safe_mod_func_uint8_t_u_u(((*g_325) < (safe_mod_func_uint8_t_u_u((((*l_523) = &g_368) == g_591), p_66))), l_592[3][2][0])))), 0x7569L)), l_593[4])));
            (*l_563) = (safe_sub_func_uint16_t_u_u((safe_sub_func_int64_t_s_s(g_256, (((~(((safe_sub_func_uint64_t_u_u((safe_add_func_uint16_t_u_u(((*l_525) = ((*l_594) |= (&l_585 != ((*l_552) , l_604)))), (l_70[2] & (p_66 >= (safe_rshift_func_uint8_t_u_s(((p_66 , (void*)0) == &l_574), p_66)))))), g_82)) && g_49.f0) >= g_49.f3)) > 4UL) && g_292.f3))), 0x9389L));
        }
lbl_615:
        --l_612;
        (*l_525) = ((((*l_583) &= p_66) , (safe_mul_func_uint8_t_u_u(((safe_sub_func_uint64_t_u_u(((7L >= (safe_sub_func_int64_t_s_s(((safe_unary_minus_func_int16_t_s((&g_54 != (g_623[0][1][2] = &l_592[4][0][0])))) | (safe_rshift_func_int8_t_s_u(0x56L, p_66))), (((*l_586) = (l_543[3][1][0] >= p_66)) <= p_66)))) , 18446744073709551612UL), 0x03F2D1DDB1451F84LL)) <= p_66), (*l_608)))) >= 6L);
    }
    else
    { 
        union U1 l_626 = {0x2981854BL};
        int32_t l_641 = 0xE58EB65AL;
        const uint32_t l_668 = 4294967295UL;
        int64_t *l_669 = &g_280[1][1];
        uint32_t **l_670 = (void*)0;
        const int16_t *l_686 = &g_49.f1;
        const int16_t **l_685 = &l_686;
        struct S0 l_700 = {-10L,0x43A2L,927,8UL,0x2B98L,728,1UL,-1L};
        union U2 **l_701 = &l_552;
        int32_t *l_705 = &l_70[2];
        uint32_t ****l_722 = &g_369;
        const uint8_t *l_730[4][3][5] = {{{&g_282,&g_96,(void*)0,(void*)0,(void*)0},{&g_282,&g_282,&g_282,&g_282,&g_96},{&g_282,&g_96,(void*)0,(void*)0,&g_96}},{{&g_96,&g_282,(void*)0,&g_96,(void*)0},{&g_282,&g_96,&g_96,&g_96,&g_282},{&g_96,&g_282,&g_96,(void*)0,(void*)0}},{{&g_96,&g_96,&g_96,&g_96,&g_96},{&g_96,&g_282,&g_96,&g_282,&g_96},{&g_282,&g_96,&g_96,&g_282,&g_282}},{{&g_282,(void*)0,&g_96,(void*)0,&g_282},{&g_96,&g_282,(void*)0,(void*)0,(void*)0},{&g_282,(void*)0,&g_282,&g_282,(void*)0}}};
        int32_t *l_770 = (void*)0;
        int32_t l_777 = (-1L);
        int32_t l_782 = 0x5A234E83L;
        int32_t l_786 = 0xA895F22BL;
        int32_t l_788 = 0L;
        int32_t l_791 = 0xB2B5B3F8L;
        int32_t l_792 = (-8L);
        int32_t l_793[5][1][3] = {{{0x487C4DF3L,0x487C4DF3L,0x82A4D860L}},{{(-1L),0x82A4D860L,0x82A4D860L}},{{0x82A4D860L,1L,(-7L)}},{{(-1L),1L,(-1L)}},{{0x487C4DF3L,0x82A4D860L,(-7L)}}};
        int8_t l_806[4] = {0x17L,0x17L,0x17L,0x17L};
        uint32_t l_808 = 0xA1BAB22EL;
        uint32_t *l_832 = &l_739;
        uint8_t *l_842 = &g_282;
        int32_t l_872 = 0L;
        int8_t l_891[2][4][7] = {{{(-8L),2L,(-8L),(-8L),2L,(-8L),(-8L)},{2L,2L,0xCDL,2L,2L,0xCDL,2L},{2L,(-8L),(-8L),2L,(-8L),(-8L),2L},{(-8L),2L,(-8L),(-8L),2L,(-8L),(-8L)}},{{2L,2L,0xCDL,2L,2L,0xCDL,2L},{2L,(-8L),(-8L),2L,(-8L),(-8L),2L},{(-8L),2L,(-8L),(-8L),2L,(-8L),(-8L)},{2L,2L,0xCDL,2L,2L,0xCDL,2L}}};
        uint32_t ** const l_1045 = (void*)0;
        int i, j, k;
        if ((l_626 , ((*g_31) , (safe_add_func_int16_t_s_s(0L, l_626.f0)))))
        { 
            uint32_t l_631 = 1UL;
            uint32_t *l_636[3][1][1];
            int64_t *l_639 = &g_277.f0;
            int64_t *l_640 = &g_368.f0;
            uint16_t *l_642 = &g_292.f6;
            int32_t *l_643 = &g_41;
            int32_t **l_644[1];
            union U1 *l_665 = (void*)0;
            int i, j, k;
            for (i = 0; i < 3; i++)
            {
                for (j = 0; j < 1; j++)
                {
                    for (k = 0; k < 1; k++)
                        l_636[i][j][k] = (void*)0;
                }
            }
            for (i = 0; i < 1; i++)
                l_644[i] = (void*)0;
            (*l_643) = (((((0x1ECCL & (safe_sub_func_uint16_t_u_u(((l_631 > (safe_lshift_func_uint16_t_u_u((safe_add_func_uint32_t_u_u((p_66 = (g_32.f0++)), (-1L))), ((*l_642) ^= ((l_641 ^= ((*l_640) = ((*l_639) ^= 0xAED0CB2C7D9F2FBFLL))) != l_626.f0))))) & ((((&g_575 == (void*)0) | 0x86DAL) || 0xCDE38CE424767EDCLL) == 0xEEF9L)), (-8L)))) , 0x3EL) != g_55[2][1][0]) ^ l_626.f0) | l_70[2]);
            g_325 = &g_120;
            for (g_292.f3 = 0; (g_292.f3 >= 14); g_292.f3 = safe_add_func_int16_t_s_s(g_292.f3, 2))
            { 
                if ((*g_325))
                    break;
            }
            (*l_643) = ((safe_sub_func_uint32_t_u_u(g_277.f0, (-3L))) , ((safe_div_func_int8_t_s_s((g_2 && p_66), (safe_rshift_func_int16_t_s_u(l_626.f0, 5)))) >= p_66));
            for (p_66 = 0; (p_66 < 51); p_66 = safe_add_func_uint16_t_u_u(p_66, 3))
            { 
                union U1 **l_666 = &l_665;
                (*l_643) = (safe_mod_func_int32_t_s_s(0x2E0EAB32L, ((safe_add_func_uint16_t_u_u(p_66, (safe_mul_func_int16_t_s_s(((void*)0 == &l_585), ((safe_lshift_func_int16_t_s_u((safe_rshift_func_uint8_t_u_u((((0xC1L & (&g_32 != ((*l_666) = l_665))) < 0x2693L) || 0x66C4EF0FL), 1)), p_66)) || l_543[2][2][0]))))) || g_292.f4)));
                if (p_66)
                    break;
            }
        }
        else
        { 
            return p_66;
        }
        if ((((((*l_669) = (!l_668)) & ((((((*l_552) , (l_671 = l_670)) != (void*)0) | ((safe_lshift_func_uint8_t_u_s((safe_mod_func_uint16_t_u_u(l_543[0][1][1], (safe_sub_func_uint32_t_u_u((safe_sub_func_uint64_t_u_u((safe_rshift_func_uint8_t_u_u(p_66, 2)), 1UL)), p_66)))), 5)) != l_70[2])) , 0x75L) > (-1L))) , 0x121FD2AF8CAA5D00LL) < p_66))
        { 
            int32_t *l_682 = &l_70[0];
            (*l_682) |= 0L;
            for (l_626.f0 = 0; (l_626.f0 <= 1); l_626.f0 += 1)
            { 
                int i;
                l_70[(l_626.f0 + 3)] = (safe_mul_func_uint16_t_u_u(((&g_183[1][1][0] != l_685) ^ (safe_mod_func_uint8_t_u_u((((~(0xC725L & l_70[(l_626.f0 + 3)])) , (safe_add_func_uint64_t_u_u(p_66, (g_58--)))) | ((safe_add_func_int32_t_s_s(((safe_rshift_func_int16_t_s_u((l_73 |= (*g_106)), 15)) && 0xFCL), 2UL)) >= l_698)), 255UL))), p_66));
                for (g_292.f4 = 0; (g_292.f4 <= 1); g_292.f4 += 1)
                { 
                    int i, j;
                    return g_280[l_626.f0][g_292.f4];
                }
            }
            (*l_682) ^= l_73;
            (*l_682) = l_73;
        }
        else
        { 
            int32_t *l_699[4][1];
            int8_t *l_725 = &g_256;
            int8_t l_727[2][7][6] = {{{(-3L),0xBCL,(-1L),(-6L),0x71L,0L},{0x71L,0L,(-1L),(-6L),(-7L),0x71L},{(-3L),0x27L,8L,0x71L,0xBCL,0xBCL},{(-6L),0x2DL,0x2DL,(-6L),0L,0L},{1L,0xF4L,(-6L),(-1L),0xBEL,(-1L)},{0L,0xBCL,0x27L,(-1L),0xBEL,1L},{0x71L,0xF4L,1L,8L,0L,0x71L}},{{0xBCL,0x2DL,1L,0x2DL,0xBCL,5L},{0L,0x27L,0xBEL,(-6L),(-7L),6L},{(-1L),0L,(-6L),0x27L,0x71L,6L},{1L,0xBCL,0xBEL,1L,(-1L),5L},{0x71L,0x80L,1L,1L,0x80L,0x71L},{5L,(-1L),1L,0xBEL,0xBCL,1L},{6L,0x71L,0x27L,(-6L),0L,(-1L)}}};
            uint16_t l_728 = 0UL;
            int i, j, k;
            for (i = 0; i < 4; i++)
            {
                for (j = 0; j < 1; j++)
                    l_699[i][j] = (void*)0;
            }
            g_41 &= ((void*)0 == &l_626);
            for (g_32.f0 = 0; (g_32.f0 <= 1); g_32.f0 += 1)
            { 
                const uint16_t l_704[5] = {1UL,1UL,1UL,1UL,1UL};
                uint8_t *l_706 = &g_96;
                int i;
                l_73 &= (((p_66 , ((l_700 , p_66) , l_701)) != &l_552) || (safe_mul_func_uint8_t_u_u(((*l_706) &= (l_704[4] <= ((&g_8 == l_705) , p_66))), (*l_705))));
                for (l_700.f3 = 0; (l_700.f3 <= 1); l_700.f3 += 1)
                { 
                    union U2 l_717 = {0xAB895564ABC5D816LL};
                    int32_t *l_726 = &g_54;
                    int32_t l_729[1];
                    int i, j;
                    for (i = 0; i < 1; i++)
                        l_729[i] = 0x79C3143EL;
                    l_729[0] = (0xF8C53AC334EC0DD8LL | (((safe_div_func_uint32_t_u_u((((0UL ^ (safe_rshift_func_int8_t_s_u(((safe_rshift_func_int16_t_s_u(((((*l_552) , (((((*l_726) = (((*l_706) |= (safe_rshift_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_s((l_717 , ((safe_lshift_func_uint16_t_u_s((safe_div_func_int16_t_s_s((l_722 != (void*)0), (safe_div_func_uint8_t_u_u((((*l_604) = l_725) == l_706), (-3L))))), g_280[l_700.f3][l_700.f3])) <= (*g_325))), (*g_106))), 2))) , p_66)) , (-1L)) >= l_704[4]) > l_727[0][2][4])) != g_231) && l_728), l_704[4])) > g_8), g_280[0][2]))) || l_704[4]) >= p_66), p_66)) , l_686) == l_686));
                }
            }
        }
        if ((l_730[2][0][3] != (((65535UL == ((safe_mod_func_uint64_t_u_u((l_543[2][2][0] , (safe_mul_func_int16_t_s_s(((((*g_31) = (*l_553)) , l_735) != &g_58), ((safe_unary_minus_func_int8_t_s((((safe_mod_func_uint8_t_u_u(g_199, l_739)) <= 0x85B8A410L) , l_73))) , g_8)))), p_66)) || g_277.f2)) >= g_740[0][2][3]) , l_730[2][0][3])))
        { 
            uint32_t * const *l_767[3][7][2] = {{{(void*)0,(void*)0},{&g_371,(void*)0},{(void*)0,&g_371},{(void*)0,&g_371},{(void*)0,&g_371},{&g_371,(void*)0},{&g_371,&g_371}},{{(void*)0,&g_371},{&g_371,(void*)0},{&g_371,&g_371},{(void*)0,&g_371},{&g_371,(void*)0},{&g_371,&g_371},{(void*)0,&g_371}},{{&g_371,(void*)0},{&g_371,&g_371},{(void*)0,&g_371},{&g_371,(void*)0},{&g_371,&g_371},{(void*)0,&g_371},{&g_371,(void*)0}}};
            union U1 l_769 = {0UL};
            int32_t l_776 = 1L;
            int32_t l_778 = 0L;
            int32_t l_779 = (-1L);
            int32_t l_780[4][5] = {{0x0CDEDAADL,0x97D56D4BL,0x0CDEDAADL,0x97D56D4BL,0x0CDEDAADL},{0L,0L,0x0DC84F6CL,0x0DC84F6CL,0L},{0xAD160560L,0x97D56D4BL,0xAD160560L,0x97D56D4BL,0xAD160560L},{0L,0x0DC84F6CL,0x0DC84F6CL,0L,0L}};
            int32_t l_787 = 0L;
            int8_t l_800 = 0xA6L;
            int i, j, k;
            for (g_282 = 0; (g_282 <= 1); g_282 += 1)
            { 
                union U1 l_744 = {0xF64E6608L};
                uint8_t *l_747 = &g_96;
                uint32_t **l_768[3];
                int i;
                for (i = 0; i < 3; i++)
                    l_768[i] = (void*)0;
                if (((!p_66) == (safe_lshift_func_int16_t_s_s(((l_744 , g_120) == ((safe_rshift_func_uint8_t_u_s(((*l_747)++), p_66)) ^ ((safe_lshift_func_uint8_t_u_s((((void*)0 == (*g_369)) , ((((safe_add_func_uint16_t_u_u((safe_rshift_func_int16_t_s_s((safe_lshift_func_int16_t_s_u((safe_mul_func_uint8_t_u_u(((*g_591) , g_277.f0), 0xBBL)), g_280[0][1])), l_744.f0)), g_282)) , 18446744073709551615UL) > g_164) > 0x66F8L)), 3)) , p_66))), 7))))
                { 
                    const int16_t l_766 = 1L;
                    (*l_705) = (((((*g_325) | (((safe_mod_func_uint16_t_u_u((safe_mul_func_uint16_t_u_u((l_698 , ((((safe_rshift_func_int16_t_s_s(l_766, 11)) , l_767[2][2][0]) != ((*g_369) = l_768[0])) != (((l_769 , l_626) , 0x3CA4L) , (*g_106)))), (*g_106))), l_769.f0)) & g_49.f4) > l_766)) < g_49.f1) < 0x4EL) & g_49.f4);
                }
                else
                { 
                    l_770 = &l_641;
                    if ((*g_325))
                        break;
                }
                if (p_66)
                    break;
                for (g_82 = 0; (g_82 <= 1); g_82 += 1)
                { 
                    int32_t **l_771 = (void*)0;
                    int32_t **l_772 = &l_705;
                    (*l_772) = &l_73;
                    (*l_772) = &l_641;
                }
            }
            for (g_41 = 1; (g_41 <= 5); g_41 += 1)
            { 
                int32_t **l_773 = &l_770;
                int32_t l_781 = 0x966E21CCL;
                int32_t l_783 = 1L;
                int32_t l_784 = (-3L);
                int32_t l_785 = 0xF4383B28L;
                int32_t l_789 = (-1L);
                int32_t l_790 = 1L;
                int32_t l_794 = (-6L);
                int32_t l_796 = 0x657D5B9AL;
                int32_t l_797 = 0x2DF4DA98L;
                int32_t l_798 = 0xFE5A6DB7L;
                int32_t l_799 = 0xF8C3831FL;
                uint64_t l_801 = 1UL;
                int i;
                (*l_701) = &g_368;
                if (l_70[g_41])
                    continue;
                (*l_773) = &l_70[g_41];
                for (l_739 = 0; (l_739 <= 2); l_739 += 1)
                { 
                    int32_t *l_774 = (void*)0;
                    int32_t *l_775[3][7][2] = {{{(void*)0,&g_191[3]},{&l_70[l_739],(void*)0},{(void*)0,&l_70[l_739]},{&g_191[3],(void*)0},{&g_191[3],&l_70[l_739]},{(void*)0,(void*)0},{&l_70[l_739],&g_191[3]}},{{(void*)0,&g_191[3]},{&l_70[l_739],(void*)0},{(void*)0,&l_70[l_739]},{&g_191[3],(void*)0},{&g_191[3],&l_70[l_739]},{(void*)0,(void*)0},{&l_70[l_739],&g_191[3]}},{{(void*)0,&g_191[3]},{&l_70[l_739],(void*)0},{(void*)0,&l_70[l_739]},{&g_191[3],(void*)0},{&g_191[3],&l_70[l_739]},{(void*)0,(void*)0},{&l_70[l_739],&g_191[3]}}};
                    int16_t l_795 = (-6L);
                    int i, j, k;
                    ++l_801;
                }
            }
        }
        else
        { 
            int32_t *l_804 = &g_191[3];
            int32_t *l_805[5];
            int32_t l_807 = 0xC7A6E3C0L;
            union U2 ***l_811 = (void*)0;
            union U2 ***l_812 = &l_701;
            const union U2 **l_817 = (void*)0;
            int i;
            for (i = 0; i < 5; i++)
                l_805[i] = &l_793[3][0][1];
            l_808++;
            (*l_804) = ((((*l_705) <= (0x43BCL <= 0x5066L)) , ((((*l_812) = &l_552) == &g_591) , (safe_add_func_int32_t_s_s((((safe_rshift_func_int8_t_s_u((*l_705), 0)) == g_49.f7) || 0xA6L), p_66)))) < p_66);
            (*l_705) = ((((p_67 == ((*l_517) = &g_49)) | ((((void*)0 != l_817) | ((p_66 == ((safe_lshift_func_int16_t_s_s((safe_add_func_uint8_t_u_u(((void*)0 == &g_193), g_49.f2)), p_66)) > 65530UL)) <= p_66)) , p_66)) < 65535UL) > 0x32L);
        }
        (*l_705) |= (l_543[2][2][0] == (safe_sub_func_uint32_t_u_u(p_66, ((((*p_67) , l_824) <= p_66) || 18446744073709551612UL))));
        if (((safe_mul_func_int16_t_s_s(((void*)0 == &g_575), ((*g_106) = ((void*)0 == l_827)))) | (!(safe_rshift_func_uint8_t_u_u((((*l_832)--) || p_66), ((*l_842) = (+(safe_lshift_func_uint8_t_u_u(0x34L, (safe_sub_func_int32_t_s_s(((safe_lshift_func_uint16_t_u_u(((void*)0 != &g_106), 10)) < l_612), p_66)))))))))))
        { 
            int16_t *l_852 = &l_700.f4;
            int32_t l_856 = 0L;
            int32_t l_859 = 0L;
            uint32_t ****l_874 = &g_369;
            int32_t l_887 = 1L;
            int32_t l_892 = 0L;
            int32_t l_893 = (-3L);
            int32_t l_894 = 6L;
            uint16_t *l_934 = &g_49.f3;
            uint16_t **l_933[5];
            int64_t l_939 = (-8L);
            union U2 l_987 = {0x863C31B8735035BFLL};
            union U2 ***l_1016 = &l_701;
            const int64_t *l_1020[7][4] = {{&g_280[0][2],&g_55[5][0][4],&g_280[1][2],&g_280[1][0]},{&g_55[1][1][3],(void*)0,&g_55[1][1][3],&g_280[1][0]},{&g_280[1][2],&g_55[5][0][4],&g_280[0][2],&g_280[1][1]},{&l_987.f0,&g_280[1][1],&g_55[5][0][4],&g_55[5][0][4]},{(void*)0,(void*)0,&g_55[5][0][4],&g_55[1][1][3]},{&l_987.f0,&g_420,&g_280[0][2],&g_280[1][1]},{&g_280[1][2],&g_280[0][2],&g_55[1][1][3],&g_280[0][2]}};
            const int64_t ** const l_1019 = &l_1020[2][0];
            int i, j;
            for (i = 0; i < 5; i++)
                l_933[i] = &l_934;
lbl_924:
            if (l_739)
            { 
                union U1 *l_844 = &g_32;
                int32_t l_853 = 0x53C5B02DL;
                int32_t l_857 = 0L;
                int32_t l_858 = (-1L);
                int32_t l_860 = 4L;
                int32_t l_861 = 0L;
                uint32_t *****l_873 = &l_722;
                if (((((!(l_844 != (l_845 , &l_626))) <= g_55[1][1][3]) , l_845.f1) == (safe_div_func_int64_t_s_s((safe_lshift_func_uint8_t_u_u((safe_mul_func_uint16_t_u_u((l_852 == &g_170), 0x0C42L)), l_853)), p_66))))
                { 
                    int32_t *l_854 = &g_41;
                    int32_t *l_855[4][3] = {{(void*)0,(void*)0,&l_777},{(void*)0,(void*)0,&l_777},{(void*)0,(void*)0,&l_777},{(void*)0,(void*)0,&l_777}};
                    int i, j;
                    ++l_862;
                    return p_66;
                }
                else
                { 
                    int32_t **l_865 = (void*)0;
                    int32_t **l_866 = &l_705;
                    uint16_t *l_885[1][2];
                    uint64_t *l_886 = &g_82;
                    int32_t *l_888 = &g_199;
                    int32_t *l_889 = &l_70[3];
                    int32_t *l_890[5][2] = {{(void*)0,(void*)0},{&l_641,(void*)0},{(void*)0,&l_641},{(void*)0,(void*)0},{&l_641,(void*)0}};
                    uint16_t l_895 = 65528UL;
                    int i, j;
                    for (i = 0; i < 1; i++)
                    {
                        for (j = 0; j < 2; j++)
                            l_885[i][j] = &l_700.f6;
                    }
                    (*l_866) = &l_856;
                    (*l_866) = &g_11;
                    l_857 = (l_791 = (((l_874 = (((*l_832) &= (0xB93A00ADFB1E774ELL < ((((((safe_mod_func_uint64_t_u_u(p_66, (-2L))) && ((g_183[0][2][3] == l_686) > ((safe_rshift_func_uint8_t_u_u(0xA1L, (+0UL))) <= l_872))) <= l_858) , l_873) == l_873) < 0x98C0L))) , (void*)0)) != (*l_873)) >= (-1L)));
                    g_191[6] &= ((safe_rshift_func_int8_t_s_u((((*l_886) ^= ((safe_sub_func_uint16_t_u_u(p_66, (0x93L || ((&l_853 != ((+(safe_mod_func_int16_t_s_s((((safe_unary_minus_func_uint32_t_u((l_845.f3 == 0x7BFAL))) >= (safe_mul_func_uint16_t_u_u((g_49.f6 &= (g_292.f3 = (&l_828 == (void*)0))), p_66))) || 1L), 3L))) , &g_8)) != 0xA4C769471E523568LL)))) & (*g_106))) <= l_845.f3), l_860)) == l_887);
                    ++l_895;
                }
                for (g_164 = 16; (g_164 <= 45); g_164 = safe_add_func_int32_t_s_s(g_164, 6))
                { 
                    uint64_t *l_917 = &g_82;
                    l_70[2] = (!((safe_mod_func_int16_t_s_s((((*l_917) = ((safe_mod_func_int32_t_s_s((safe_add_func_uint16_t_u_u((~g_49.f1), (safe_div_func_uint8_t_u_u((+(safe_mod_func_int8_t_s_s(0x4EL, (safe_add_func_int8_t_s_s((-6L), (l_861 > ((*l_553) , (safe_mod_func_uint16_t_u_u((l_862 , p_66), l_860))))))))), 0xF7L)))), g_368.f1)) ^ p_66)) != p_66), 1UL)) | 0xF8D9L));
                    return p_66;
                }
            }
            else
            { 
                int32_t **l_920 = &l_770;
                int32_t **l_921[2];
                int i;
                for (i = 0; i < 2; i++)
                    l_921[i] = &l_705;
                for (l_845.f1 = 0; (l_845.f1 == (-30)); l_845.f1 = safe_sub_func_int16_t_s_s(l_845.f1, 1))
                { 
                    return (*g_325);
                }
                (*l_705) = ((void*)0 != &g_256);
                l_73 = l_859;
                if (l_845.f3)
                    goto lbl_924;
                g_325 = ((*l_920) = &l_892);
                (**l_920) &= (safe_lshift_func_int16_t_s_s(0xE461L, (*l_705)));
            }
            if (((*g_591) , (5L == (safe_div_func_uint64_t_u_u((((safe_rshift_func_int16_t_s_s((safe_sub_func_uint8_t_u_u(((--p_66) , (g_280[0][2] , (((p_66 , (g_183[1][1][0] == (l_935 = g_183[2][0][3]))) ^ (l_938 |= ((safe_mul_func_uint16_t_u_u((p_66 && p_66), (*g_106))) , 8L))) > p_66))), (-1L))), 12)) ^ g_277.f1) , l_939), l_893)))))
            { 
                int32_t **l_941 = &l_705;
                g_120 &= (l_892 = (+6UL));
                (*l_941) = &g_41;
                return (**l_941);
            }
            else
            { 
                int32_t *l_944 = &l_938;
                int64_t l_982 = 0x34184B908CE95840LL;
                int64_t l_1023 = (-1L);
                (*l_944) = (&l_701 == l_942);
                if (((safe_unary_minus_func_uint8_t_u(((*g_31) , ((p_66 > 0xA9043CCBL) != g_292.f3)))) > (*l_705)))
                { 
                    uint16_t l_958 = 0UL;
                    union U1 ***l_966 = &g_965;
                    p_67 = (*l_517);
                    g_959 = (g_591 = (((((g_55[5][1][1] <= (((l_946 , ((!((safe_div_func_uint32_t_u_u((safe_add_func_int8_t_s_s((((*l_852) &= (safe_div_func_int16_t_s_s(1L, (4294967295UL && ((4294967288UL >= (0xD6102E440FCD1F18LL == (safe_rshift_func_int8_t_s_s((safe_div_func_int64_t_s_s(((l_698 == 0L) && l_892), g_575.f0)), p_66)))) >= p_66))))) > 0xDE09L), 1UL)), l_73)) <= l_958)) != 0UL)) ^ l_958) ^ l_958)) , g_49.f1) || 0x8DCCF68CL) != p_66) , &g_277));
                    (*l_944) = (safe_mod_func_int32_t_s_s(((((((g_965 = &l_553) != (void*)0) || (((*l_966) = &l_553) == (void*)0)) >= p_66) | (((((+(safe_mul_func_uint8_t_u_u((~g_292.f3), (-7L)))) & p_66) , 0x2FL) == g_960[2].f0) != l_893)) == g_231), p_66));
                    g_191[0] = ((safe_add_func_uint8_t_u_u((safe_mul_func_uint8_t_u_u((g_199 | (4294967286UL ^ (safe_div_func_int16_t_s_s((l_70[2] = ((((*l_944) = (!0x681739C889E5B568LL)) >= 4294967295UL) , (((l_958 | (safe_lshift_func_uint16_t_u_u((safe_mod_func_int64_t_s_s(((void*)0 == &g_368), l_982)), 1))) , 0x263C8C38L) , 0xB231L))), (-10L))))), 9UL)), p_66)) <= p_66);
                }
                else
                { 
                    int8_t *l_991 = &l_806[0];
                    int32_t *l_995[2];
                    int32_t **l_997 = &l_995[0];
                    int32_t l_1010 = (-8L);
                    int i;
                    for (i = 0; i < 2; i++)
                        l_995[i] = &l_793[1][0][2];
                    l_893 ^= ((*l_944) ^= (safe_lshift_func_int16_t_s_u(((safe_lshift_func_uint8_t_u_s((((l_987 , ((((~g_292.f2) | ((safe_add_func_int8_t_s_s(((*l_991) = g_170), ((safe_mul_func_int16_t_s_s((((*g_325) ^ 0x656C6B58L) || l_859), ((void*)0 == g_193))) >= g_960[2].f1))) , 0x02A14D07L)) != (-1L)) || g_49.f4)) < 0xDFA708E3EFF6CE66LL) <= p_66), l_994)) ^ g_292.f1), 4)));
                    if (l_872)
                        goto lbl_999;
                    (*l_997) = l_996;
                    g_591 = g_998[0];
lbl_999:
                    (*l_944) = 2L;
                    l_1010 |= (((void*)0 == l_944) != (safe_rshift_func_uint8_t_u_s((((safe_mul_func_uint8_t_u_u((0x0C60054BL & (safe_mod_func_int32_t_s_s((l_987.f0 | (0L < (((safe_rshift_func_int8_t_s_u((((+(g_49.f0 <= (g_280[0][1] != p_66))) , 0x4FA40D31E2FA191BLL) > p_66), p_66)) >= 4L) == p_66))), (*l_705)))), p_66)) ^ p_66) == 0x9CL), g_1009[1])));
                }
                (*l_944) |= 0xAFF42CC2L;
                (*l_944) = (((safe_lshift_func_uint8_t_u_u(g_49.f1, 1)) && (((((safe_div_func_int64_t_s_s(((((((!(l_1016 != g_1017)) | ((l_1019 == ((*g_959) , &l_669)) <= (safe_mod_func_int16_t_s_s((0x4A1D22CBFE4D5ABBLL | l_859), 0xA14DL)))) != (-1L)) == g_49.f3) >= l_1023) , 0x2170E1A23E56D3C9LL), p_66)) , (*g_1017)) != (void*)0) , (*p_67)) , g_199)) && g_49.f5);
            }
        }
        else
        { 
            int32_t *l_1024 = &l_872;
            int32_t l_1046 = 1L;
            int32_t l_1049 = 0x200368F6L;
            int32_t l_1052 = 1L;
            int32_t l_1053 = 0x64ACB27EL;
            int8_t l_1064[2][1][4];
            int i, j, k;
            for (i = 0; i < 2; i++)
            {
                for (j = 0; j < 1; j++)
                {
                    for (k = 0; k < 4; k++)
                        l_1064[i][j][k] = 1L;
                }
            }
            (*l_1024) ^= ((*l_705) |= (g_49 , 5L));
            for (g_49.f1 = 0; (g_49.f1 > (-20)); g_49.f1--)
            { 
                int32_t l_1032 = 0x5CF0D154L;
                int32_t l_1050 = (-1L);
                int32_t l_1051 = 0xDA1928E6L;
                int32_t l_1054 = (-1L);
                if ((+18446744073709551614UL))
                { 
                    uint64_t *l_1035 = &g_82;
                    int32_t l_1044 = 0L;
                    (*l_1024) = (p_66 != ((safe_mul_func_int16_t_s_s(p_66, 0x7850L)) | ((0x3F5CE7B0L & l_1032) , ((*l_996) == (safe_div_func_uint64_t_u_u(((++(*l_1035)) >= (l_1044 &= (safe_lshift_func_int16_t_s_u(((safe_mul_func_uint8_t_u_u((safe_lshift_func_int8_t_s_s((g_231 | 0x1E43L), p_66)), l_1032)) > 0x3DL), p_66)))), 0x978F24273488AF61LL))))));
                    (*l_1024) = ((l_1045 != (void*)0) >= ((void*)0 != &p_66));
                }
                else
                { 
                    int32_t *l_1047 = &l_786;
                    int32_t *l_1048[5][2] = {{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}};
                    int i, j;
                    l_1055--;
                    if ((*l_1024))
                        continue;
                }
            }
            for (g_54 = 0; (g_54 == (-5)); --g_54)
            { 
                for (l_641 = (-6); (l_641 >= 23); ++l_641)
                { 
                    (*l_1024) = (safe_sub_func_int8_t_s_s((*l_1024), (*l_705)));
                    if (l_1064[0][0][1])
                        break;
                    if (p_66)
                        continue;
                }
                (*l_701) = (**g_1017);
            }
        }
    }
    for (l_739 = 27; (l_739 > 38); l_739 = safe_add_func_uint32_t_u_u(l_739, 2))
    { 
        uint32_t l_1072 = 0x7AA562D7L;
        int32_t *l_1073[3];
        int i;
        for (i = 0; i < 3; i++)
            l_1073[i] = &l_73;
        l_73 |= (l_938 ^= (p_66 >= (l_1067 , (safe_add_func_uint32_t_u_u(((void*)0 != &g_370), (l_70[2] = (((*l_996) < (((((safe_lshift_func_uint16_t_u_s(p_66, (l_828 != (void*)0))) <= 0x7B59L) , p_66) >= (*l_996)) , 0xFB45552FFF53AA3DLL)) <= l_1072)))))));
    }
    (*l_1077) = ((*l_1076) = g_1074);
    ++l_1093;
    return (*l_1082);
}



static struct S0 * func_76(const int32_t * p_77)
{ 
    int32_t *l_78 = &g_41;
    int32_t *l_79 = &g_41;
    int32_t *l_80 = &g_41;
    int32_t *l_81[5][7][3] = {{{&g_8,&g_2,&g_8},{&g_5,&g_5,&g_5},{&g_8,&g_2,&g_8},{&g_5,&g_5,&g_5},{&g_8,&g_2,&g_8},{&g_5,&g_5,&g_5},{&g_8,&g_2,&g_8}},{{&g_5,&g_5,&g_5},{&g_8,&g_2,&g_8},{&g_5,&g_5,&g_5},{&g_8,&g_2,&g_8},{&g_5,&g_5,(void*)0},{&g_41,&g_37,&g_41},{(void*)0,&g_5,(void*)0}},{{&g_41,&g_37,&g_41},{(void*)0,&g_5,(void*)0},{&g_41,&g_37,&g_41},{(void*)0,&g_5,(void*)0},{&g_41,&g_37,&g_41},{(void*)0,&g_5,(void*)0},{&g_41,&g_37,&g_41}},{{(void*)0,&g_5,(void*)0},{&g_41,&g_37,&g_41},{(void*)0,&g_5,(void*)0},{&g_41,&g_37,&g_41},{(void*)0,&g_5,(void*)0},{&g_41,&g_37,&g_41},{(void*)0,&g_5,(void*)0}},{{&g_41,&g_37,&g_41},{(void*)0,&g_5,(void*)0},{&g_41,&g_37,&g_41},{(void*)0,&g_5,(void*)0},{&g_41,&g_37,&g_41},{(void*)0,&g_5,(void*)0},{&g_41,&g_37,&g_41}}};
    struct S0 *l_85 = &g_49;
    const union U1 l_323 = {4294967291UL};
    int8_t l_328 = 0x15L;
    int64_t l_339 = 0x1AA8B5D8C7EBE50ALL;
    int8_t *l_451[2];
    int8_t **l_450[2];
    int8_t ***l_449 = &l_450[0];
    int i, j, k;
    for (i = 0; i < 2; i++)
        l_451[i] = (void*)0;
    for (i = 0; i < 2; i++)
        l_450[i] = &l_451[0];
    g_82++;
    if (((*l_78) >= (*l_78)))
    { 
        union U1 l_107 = {0UL};
        int32_t l_114[7][3][6] = {{{0xCD825BC7L,8L,(-1L),0xF28F66BBL,8L,0xF28F66BBL},{0xCD825BC7L,0x191A0FB3L,0xCD825BC7L,0xF28F66BBL,0x191A0FB3L,(-1L)},{0xCD825BC7L,(-10L),0xF28F66BBL,0xF28F66BBL,(-10L),0xCD825BC7L}},{{0xCD825BC7L,8L,(-1L),0xF28F66BBL,8L,0xF28F66BBL},{0xCD825BC7L,0x191A0FB3L,0xCD825BC7L,0xF28F66BBL,0x191A0FB3L,(-1L)},{0xCD825BC7L,(-10L),0xF28F66BBL,0xF28F66BBL,(-10L),0xCD825BC7L}},{{0xCD825BC7L,8L,(-1L),0xF28F66BBL,8L,0xF28F66BBL},{0xCD825BC7L,0x191A0FB3L,0xCD825BC7L,0xF28F66BBL,0x191A0FB3L,(-1L)},{0xCD825BC7L,(-10L),0xF28F66BBL,0xF28F66BBL,(-10L),0xCD825BC7L}},{{0xCD825BC7L,8L,(-1L),0xF28F66BBL,8L,0xF28F66BBL},{0xCD825BC7L,0x191A0FB3L,0xCD825BC7L,0xF28F66BBL,0x191A0FB3L,(-1L)},{0xCD825BC7L,(-10L),0xF28F66BBL,0xF28F66BBL,(-10L),0xCD825BC7L}},{{0xCD825BC7L,8L,(-1L),0xF28F66BBL,8L,0xF28F66BBL},{0xCD825BC7L,0x191A0FB3L,0xCD825BC7L,0xF28F66BBL,0x191A0FB3L,(-1L)},{0xCD825BC7L,(-10L),0xF28F66BBL,0xF28F66BBL,(-10L),0xCD825BC7L}},{{0xCD825BC7L,8L,(-1L),0xF28F66BBL,8L,0xF28F66BBL},{0xCD825BC7L,0x191A0FB3L,0xCD825BC7L,0xF28F66BBL,0x191A0FB3L,(-1L)},{0xCD825BC7L,(-10L),0xF28F66BBL,0xF28F66BBL,(-10L),0xCD825BC7L}},{{0xCD825BC7L,8L,(-1L),0xF28F66BBL,8L,0xF28F66BBL},{0xCD825BC7L,0x191A0FB3L,0xCD825BC7L,0xF28F66BBL,0x191A0FB3L,(-1L)},{1L,0xF28F66BBL,0x5A3DCCCEL,0x5A3DCCCEL,0xF28F66BBL,1L}}};
        struct S0 ** const l_130 = &l_85;
        uint32_t *l_300 = &g_164;
        uint32_t * const *l_299 = &l_300;
        int32_t l_324 = (-2L);
        int32_t l_329 = 6L;
        int64_t l_338 = 0L;
        union U1 **l_350[1][7][7] = {{{&g_31,&g_31,&g_31,&g_31,&g_31,(void*)0,&g_31},{&g_31,&g_31,&g_31,(void*)0,(void*)0,&g_31,&g_31},{&g_31,(void*)0,&g_31,&g_31,&g_31,&g_31,&g_31},{&g_31,&g_31,&g_31,&g_31,&g_31,&g_31,&g_31},{&g_31,&g_31,&g_31,&g_31,&g_31,(void*)0,&g_31},{&g_31,&g_31,(void*)0,(void*)0,&g_31,&g_31,&g_31},{&g_31,(void*)0,&g_31,&g_31,&g_31,&g_31,&g_31}}};
        int32_t *l_354 = &g_41;
        union U2 *l_366 = &g_277;
        uint64_t l_395 = 0x5B88AAE05D80D148LL;
        int32_t l_421 = 6L;
        struct S0 l_467[3][2][6] = {{{{-1L,0x3F8AL,464,65532UL,-1L,2031,0x2102L,0x3ADFL},{1L,0xF52FL,1382,0x3A49L,0x71ACL,75,0x774BL,-4L},{0xBB01L,0L,1235,65535UL,0xC49BL,1996,0xE5D7L,0x2839L},{0x7B45L,0L,238,0x0D8BL,0x6154L,1554,0xB927L,0x4D01L},{0x7B45L,0L,238,0x0D8BL,0x6154L,1554,0xB927L,0x4D01L},{0xBB01L,0L,1235,65535UL,0xC49BL,1996,0xE5D7L,0x2839L}},{{-1L,0x3F8AL,464,65532UL,-1L,2031,0x2102L,0x3ADFL},{-1L,0x3F8AL,464,65532UL,-1L,2031,0x2102L,0x3ADFL},{0x7B45L,0L,238,0x0D8BL,0x6154L,1554,0xB927L,0x4D01L},{0L,0L,335,0xD454L,0xA563L,835,65533UL,-1L},{0x2E12L,0x2927L,864,65526UL,-1L,1906,0x06FAL,0xE50EL},{0L,0L,335,0xD454L,0xA563L,835,65533UL,-1L}}},{{{1L,0xF52FL,1382,0x3A49L,0x71ACL,75,0x774BL,-4L},{-1L,0x3F8AL,464,65532UL,-1L,2031,0x2102L,0x3ADFL},{1L,0xF52FL,1382,0x3A49L,0x71ACL,75,0x774BL,-4L},{0xBB01L,0L,1235,65535UL,0xC49BL,1996,0xE5D7L,0x2839L},{0x7B45L,0L,238,0x0D8BL,0x6154L,1554,0xB927L,0x4D01L},{0x7B45L,0L,238,0x0D8BL,0x6154L,1554,0xB927L,0x4D01L}},{{0x10F9L,-2L,978,0x11D2L,-1L,1413,0x6A4FL,0L},{1L,0xF52FL,1382,0x3A49L,0x71ACL,75,0x774BL,-4L},{1L,0xF52FL,1382,0x3A49L,0x71ACL,75,0x774BL,-4L},{0x10F9L,-2L,978,0x11D2L,-1L,1413,0x6A4FL,0L},{-1L,0x3F8AL,464,65532UL,-1L,2031,0x2102L,0x3ADFL},{0L,0L,335,0xD454L,0xA563L,835,65533UL,-1L}}},{{{0L,0L,335,0xD454L,0xA563L,835,65533UL,-1L},{0x10F9L,-2L,978,0x11D2L,-1L,1413,0x6A4FL,0L},{0x7B45L,0L,238,0x0D8BL,0x6154L,1554,0xB927L,0x4D01L},{0x10F9L,-2L,978,0x11D2L,-1L,1413,0x6A4FL,0L},{0L,0L,335,0xD454L,0xA563L,835,65533UL,-1L},{0xBB01L,0L,1235,65535UL,0xC49BL,1996,0xE5D7L,0x2839L}},{{0x10F9L,-2L,978,0x11D2L,-1L,1413,0x6A4FL,0L},{0L,0L,335,0xD454L,0xA563L,835,65533UL,-1L},{0xBB01L,0L,1235,65535UL,0xC49BL,1996,0xE5D7L,0x2839L},{0xBB01L,0L,1235,65535UL,0xC49BL,1996,0xE5D7L,0x2839L},{0L,0L,335,0xD454L,0xA563L,835,65533UL,-1L},{0x10F9L,-2L,978,0x11D2L,-1L,1413,0x6A4FL,0L}}}};
        int i, j, k;
        for (g_49.f3 = 0; (g_49.f3 <= 1); g_49.f3 += 1)
        { 
            int16_t l_93[7] = {(-8L),(-8L),0x5FB3L,(-8L),(-8L),0x5FB3L,(-8L)};
            struct S0 l_117 = {0x965DL,1L,163,1UL,0x2802L,543,65530UL,1L};
            union U1 *l_340 = (void*)0;
            union U1 ***l_351 = &l_350[0][4][0];
            union U2 l_365[7] = {{0L},{0L},{0L},{0L},{0L},{0L},{0L}};
            union U2 *l_367 = &g_368;
            int32_t l_373 = 0x5D5F9869L;
            int32_t l_376 = (-1L);
            int32_t l_377 = 0x2C464395L;
            uint8_t l_413 = 0x69L;
            int16_t l_418[2];
            int i;
            for (i = 0; i < 2; i++)
                l_418[i] = 0xFDFDL;
        }
        (*l_79) = 0xA31093D1L;
    }
    else
    { 
        union U2 *l_473 = &g_368;
        union U2 **l_472 = &l_473;
        int32_t l_489[3];
        uint32_t ****l_499 = &g_369;
        uint32_t **** const *l_498 = &l_499;
        int i;
        for (i = 0; i < 3; i++)
            l_489[i] = 0x1BAD770EL;
        (*l_472) = &g_277;
        for (g_49.f1 = 28; (g_49.f1 >= 26); g_49.f1--)
        { 
            uint64_t *l_482 = &g_82;
            int32_t l_490 = 0xE3196B99L;
            int32_t l_493 = 0x2D60AEF5L;
            (*l_80) = ((0x79080C14L < (((((safe_sub_func_int32_t_s_s(((safe_rshift_func_int16_t_s_u(((((*l_482)--) > (safe_add_func_uint32_t_u_u(4294967286UL, ((((((safe_add_func_int8_t_s_s((l_490 = l_489[1]), g_199)) | 0x9BC4994EL) , (*l_79)) <= (safe_mul_func_int8_t_s_s(0xBEL, (*l_78)))) <= g_420) >= g_96)))) < l_493), (*l_78))) <= l_489[1]), 0xC6A99E34L)) || l_489[1]) == l_489[0]) >= 0x65784E3AL) != (*l_80))) || 0xBBC59130D6AE2613LL);
            if ((*g_325))
                continue;
        }
        for (g_82 = 0; (g_82 == 35); g_82 = safe_add_func_int64_t_s_s(g_82, 5))
        { 
            int8_t l_508 = 0x9FL;
            uint32_t *l_513[6] = {&g_32.f0,(void*)0,&g_32.f0,&g_32.f0,(void*)0,&g_32.f0};
            uint32_t l_514[7][6][1] = {{{0x53071482L},{0x1B3913BBL},{0x53071482L},{0x1B3913BBL},{0x53071482L},{0x1B3913BBL}},{{0x53071482L},{0x1B3913BBL},{0x53071482L},{0x1B3913BBL},{0x53071482L},{0x1B3913BBL}},{{0x53071482L},{0x1B3913BBL},{0x53071482L},{0x1B3913BBL},{0x53071482L},{0x1B3913BBL}},{{0x53071482L},{0x1B3913BBL},{0x53071482L},{0x1B3913BBL},{0x53071482L},{0x1B3913BBL}},{{0x53071482L},{0x1B3913BBL},{0x53071482L},{0x1B3913BBL},{0x53071482L},{0x1B3913BBL}},{{0x53071482L},{0x1B3913BBL},{0x53071482L},{0x1B3913BBL},{0x53071482L},{0x1B3913BBL}},{{0x53071482L},{0x1B3913BBL},{0x53071482L},{0x1B3913BBL},{0x53071482L},{0x1B3913BBL}}};
            int i, j, k;
            (*l_80) = (safe_div_func_int8_t_s_s(((((void*)0 != l_498) ^ ((safe_mod_func_int32_t_s_s((safe_add_func_uint32_t_u_u((l_489[1] = ((((safe_rshift_func_int8_t_s_u((safe_div_func_uint32_t_u_u((*l_79), 0x7518C3E8L)), 4)) & l_508) == (((safe_lshift_func_int16_t_s_s(l_489[1], 3)) & ((safe_mod_func_uint16_t_u_u(65535UL, (*g_106))) <= 1L)) , g_37)) & l_508)), (-2L))), (*l_80))) , 0L)) , l_489[2]), 249UL));
            if (l_489[1])
                break;
            if (l_489[1])
                continue;
            --l_514[2][0][0];
            return &g_292;
        }
    }
    return l_85;
}



static uint64_t  func_89(int16_t  p_90, uint16_t  p_91, int16_t  p_92)
{ 
    int32_t *l_286 = &g_41;
    (*l_286) = g_49.f4;
    return p_91;
}



static const uint8_t  func_97(int32_t * p_98, struct S0 ** const  p_99, uint8_t * p_100)
{ 
    int32_t *l_133 = &g_41;
    struct S0 l_141 = {0x9BDCL,0x58CEL,1162,5UL,1L,1229,7UL,8L};
    union U1 **l_158[7][7] = {{&g_31,(void*)0,&g_31,&g_31,(void*)0,&g_31,(void*)0},{(void*)0,&g_31,&g_31,(void*)0,(void*)0,&g_31,&g_31},{(void*)0,(void*)0,&g_31,(void*)0,&g_31,&g_31,(void*)0},{(void*)0,&g_31,(void*)0,&g_31,&g_31,&g_31,&g_31},{&g_31,(void*)0,(void*)0,(void*)0,&g_31,(void*)0,&g_31},{(void*)0,&g_31,&g_31,(void*)0,&g_31,&g_31,(void*)0},{&g_31,&g_31,(void*)0,&g_31,&g_31,&g_31,(void*)0}};
    int16_t l_160[1][5][1] = {{{0L},{0xCF68L},{0L},{0xCF68L},{0L}}};
    int32_t l_211[1][5][2];
    int8_t *l_255 = &g_256;
    int8_t **l_254 = &l_255;
    int16_t l_278[7];
    int32_t *l_281[2];
    const int16_t l_285 = (-1L);
    int i, j, k;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 5; j++)
        {
            for (k = 0; k < 2; k++)
                l_211[i][j][k] = 0L;
        }
    }
    for (i = 0; i < 7; i++)
        l_278[i] = 1L;
    for (i = 0; i < 2; i++)
        l_281[i] = (void*)0;
    for (g_120 = 18; (g_120 >= 13); g_120 = safe_sub_func_uint32_t_u_u(g_120, 1))
    { 
        int32_t *l_134 = (void*)0;
        int32_t **l_135 = (void*)0;
        int32_t **l_136 = &l_133;
        int16_t *l_143[6][3] = {{&g_49.f1,&g_49.f1,&g_49.f1},{&l_141.f1,&l_141.f1,&l_141.f1},{&g_49.f1,&g_49.f1,&g_49.f1},{&l_141.f1,&l_141.f1,&l_141.f1},{&g_49.f1,&g_49.f1,&g_49.f1},{&l_141.f1,&l_141.f1,&l_141.f1}};
        union U1 **l_157 = &g_31;
        uint32_t l_162 = 4294967287UL;
        int32_t l_201 = (-4L);
        int32_t l_208 = (-1L);
        int32_t l_210 = 0x52370E72L;
        int32_t l_212 = 1L;
        int32_t l_213 = 6L;
        int32_t l_214 = 0x12F1922AL;
        int32_t l_218 = 1L;
        int32_t l_219 = (-1L);
        int32_t l_223[6] = {0xA296AE8CL,0xF9BB32C2L,0xA296AE8CL,0xA296AE8CL,0xF9BB32C2L,0xA296AE8CL};
        const uint16_t l_241 = 0x1048L;
        uint32_t *l_266 = &g_164;
        uint32_t **l_265 = &l_266;
        uint64_t l_276 = 3UL;
        int64_t *l_279 = &g_55[1][1][3];
        int i, j;
        l_133 = (g_49.f4 , &g_41);
        (*l_136) = l_134;
        for (g_82 = 24; (g_82 == 21); g_82 = safe_sub_func_int64_t_s_s(g_82, 3))
        { 
            int8_t l_142 = 0xF6L;
            int16_t *l_181[5][1];
            int32_t l_209 = (-5L);
            int32_t l_216 = 0x4E8AFE3AL;
            int32_t l_217 = 0xDCC49979L;
            int64_t l_220[6][5] = {{0x249FA4DF0E4EAF2CLL,0x714B42A01C24B065LL,0x249FA4DF0E4EAF2CLL,1L,1L},{0x249FA4DF0E4EAF2CLL,0x714B42A01C24B065LL,0x249FA4DF0E4EAF2CLL,1L,1L},{0x249FA4DF0E4EAF2CLL,0x714B42A01C24B065LL,0x249FA4DF0E4EAF2CLL,1L,1L},{0x249FA4DF0E4EAF2CLL,0x714B42A01C24B065LL,0x249FA4DF0E4EAF2CLL,1L,1L},{0x249FA4DF0E4EAF2CLL,0x714B42A01C24B065LL,0x249FA4DF0E4EAF2CLL,1L,1L},{0x249FA4DF0E4EAF2CLL,0x714B42A01C24B065LL,0x249FA4DF0E4EAF2CLL,1L,1L}};
            int32_t l_221 = 0xB0B00179L;
            int32_t l_222 = 0xDCBA3D8EL;
            int32_t l_224[3];
            uint16_t l_232[3];
            const int8_t *l_258[1];
            const int8_t **l_257 = &l_258[0];
            const int8_t ***l_259 = &g_193;
            int32_t *l_260 = &g_191[0];
            int i, j;
            for (i = 0; i < 5; i++)
            {
                for (j = 0; j < 1; j++)
                    l_181[i][j] = &l_141.f4;
            }
            for (i = 0; i < 3; i++)
                l_224[i] = 0x9FB94FD6L;
            for (i = 0; i < 3; i++)
                l_232[i] = 65535UL;
            for (i = 0; i < 1; i++)
                l_258[i] = &g_256;
        }
        g_280[0][2] = ((((*l_279) = (safe_mod_func_uint16_t_u_u((safe_sub_func_uint32_t_u_u((l_133 != ((*l_265) = (void*)0)), (((((((g_11 >= (safe_rshift_func_int16_t_s_s(((safe_lshift_func_uint16_t_u_u((safe_lshift_func_int8_t_s_s(0L, 2)), 10)) ^ l_141.f6), 12))) , (((((g_11 == (+(safe_mul_func_int8_t_s_s(((((g_8 <= l_276) && g_54) , g_277) , 0x7DL), l_211[0][3][0])))) && l_211[0][3][0]) == l_278[6]) < 0xB7L) ^ g_49.f0)) && l_141.f6) < (-1L)) & l_211[0][3][0]) ^ g_49.f6) != 0x6545L))), g_199))) == 0xFE78B6B6F650D527LL) == (*g_106));
        if (l_141.f3)
            continue;
    }
    ++g_282;
    for (g_49.f6 = 0; g_49.f6 < 7; g_49.f6 += 1)
    {
        g_191[g_49.f6] = 0L;
    }
    return l_285;
}



static int64_t  func_101(int16_t * p_102, const int32_t  p_103, struct S0  p_104, union U1 * const * p_105)
{ 
    int32_t *l_118 = &g_41;
    int32_t *l_119 = &g_120;
    struct S0 l_125 = {2L,0xECF8L,707,65532UL,0xFECAL,1501,65527UL,0L};
    int16_t *l_126 = &g_49.f1;
    (*l_119) &= ((*l_118) = 0x8BE3DAACL);
    g_41 = (((safe_add_func_uint32_t_u_u(((*l_118) ^ (safe_mod_func_uint16_t_u_u(0xF161L, (l_125 , (((*l_126) = (*g_106)) , g_8))))), (safe_mod_func_uint32_t_u_u(((((*l_119) || 0xF1A7D10AL) >= 0xD76BL) < (*l_119)), 0x15E1F53DL)))) == 0x3933317AL) < (*l_119));
    return (*l_118);
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    transparent_crc(g_5, "g_5", print_hash_value);
    transparent_crc(g_8, "g_8", print_hash_value);
    transparent_crc(g_11, "g_11", print_hash_value);
    transparent_crc(g_32.f0, "g_32.f0", print_hash_value);
    transparent_crc(g_37, "g_37", print_hash_value);
    transparent_crc(g_41, "g_41", print_hash_value);
    transparent_crc(g_49.f0, "g_49.f0", print_hash_value);
    transparent_crc(g_49.f1, "g_49.f1", print_hash_value);
    transparent_crc(g_49.f2, "g_49.f2", print_hash_value);
    transparent_crc(g_49.f3, "g_49.f3", print_hash_value);
    transparent_crc(g_49.f4, "g_49.f4", print_hash_value);
    transparent_crc(g_49.f5, "g_49.f5", print_hash_value);
    transparent_crc(g_49.f6, "g_49.f6", print_hash_value);
    transparent_crc(g_49.f7, "g_49.f7", print_hash_value);
    transparent_crc(g_54, "g_54", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 6; k++)
            {
                transparent_crc(g_55[i][j][k], "g_55[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_58, "g_58", print_hash_value);
    transparent_crc(g_82, "g_82", print_hash_value);
    transparent_crc(g_96, "g_96", print_hash_value);
    transparent_crc(g_120, "g_120", print_hash_value);
    transparent_crc(g_164, "g_164", print_hash_value);
    transparent_crc(g_170, "g_170", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(g_191[i], "g_191[i]", print_hash_value);

    }
    transparent_crc(g_199, "g_199", print_hash_value);
    transparent_crc(g_231, "g_231", print_hash_value);
    transparent_crc(g_256, "g_256", print_hash_value);
    transparent_crc(g_277.f0, "g_277.f0", print_hash_value);
    transparent_crc(g_277.f1, "g_277.f1", print_hash_value);
    transparent_crc(g_277.f2, "g_277.f2", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transparent_crc(g_280[i][j], "g_280[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_282, "g_282", print_hash_value);
    transparent_crc(g_292.f0, "g_292.f0", print_hash_value);
    transparent_crc(g_292.f1, "g_292.f1", print_hash_value);
    transparent_crc(g_292.f2, "g_292.f2", print_hash_value);
    transparent_crc(g_292.f3, "g_292.f3", print_hash_value);
    transparent_crc(g_292.f4, "g_292.f4", print_hash_value);
    transparent_crc(g_292.f5, "g_292.f5", print_hash_value);
    transparent_crc(g_292.f6, "g_292.f6", print_hash_value);
    transparent_crc(g_292.f7, "g_292.f7", print_hash_value);
    transparent_crc(g_368.f0, "g_368.f0", print_hash_value);
    transparent_crc(g_368.f1, "g_368.f1", print_hash_value);
    transparent_crc(g_368.f2, "g_368.f2", print_hash_value);
    transparent_crc(g_420, "g_420", print_hash_value);
    transparent_crc(g_575.f0, "g_575.f0", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 5; k++)
            {
                transparent_crc(g_740[i][j][k], "g_740[i][j][k]", print_hash_value);

            }
        }
    }
    for (i = 0; i < 6; i++)
    {
        transparent_crc(g_960[i].f0, "g_960[i].f0", print_hash_value);
        transparent_crc(g_960[i].f1, "g_960[i].f1", print_hash_value);
        transparent_crc(g_960[i].f2, "g_960[i].f2", print_hash_value);

    }
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_1009[i], "g_1009[i]", print_hash_value);

    }
    transparent_crc(g_1279, "g_1279", print_hash_value);
    transparent_crc(g_1519.f0, "g_1519.f0", print_hash_value);
    transparent_crc(g_1519.f1, "g_1519.f1", print_hash_value);
    transparent_crc(g_1519.f2, "g_1519.f2", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_1601[i], "g_1601[i]", print_hash_value);

    }
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
