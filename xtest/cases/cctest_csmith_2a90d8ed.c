// SPDX-License-Identifier: MIT
// cctest_csmith_2a90d8ed.c --- cctest case csmith_2a90d8ed (csmith seed 714135789)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x2d94682 */

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

// Options:   -s 714135789 -o /tmp/csmith_gen_sep5wlj6/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


#pragma pack(push)
#pragma pack(1)
struct S0 {
   int32_t  f0;
   int16_t  f1;
   int64_t  f2;
   int8_t  f3;
   uint64_t  f4;
   uint16_t  f5;
};
#pragma pack(pop)

union U1 {
   const int32_t  f0;
};

union U2 {
   const struct S0  f0;
   int16_t  f1;
};

union U3 {
   uint32_t  f0;
   uint32_t  f1;
   uint8_t  f2;
};


static int64_t g_8[5][5] = {{(-1L),2L,(-1L),(-1L),2L},{2L,(-1L),(-1L),2L,(-1L)},{2L,2L,0x3735B263D188047DLL,2L,2L},{(-1L),2L,(-1L),(-1L),2L},{2L,(-1L),(-1L),2L,(-1L)}};
static struct S0 g_22 = {-8L,0x782EL,0xC90C63B882169286LL,0x4AL,0UL,0x09D0L};
static const union U3 g_24 = {4294967289UL};
static int16_t g_40 = (-1L);
static struct S0 g_47 = {-1L,-1L,9L,-7L,0xDB42E276980504C9LL,0xCC0FL};
static int32_t g_55 = 1L;
static int64_t g_81[3] = {1L,1L,1L};
static struct S0 g_97 = {0xB39C3AD0L,0xF050L,0xCB07E9083639C8BELL,1L,0UL,0xD25FL};
static uint32_t g_100 = 0x84580679L;
static union U2 g_112 = {{0x140C101FL,0x3292L,1L,-7L,0x39A6180E031660C0LL,1UL}};
static union U1 g_115[4] = {{0xB5372051L},{0xB5372051L},{0xB5372051L},{0xB5372051L}};
static int16_t g_145 = 0xFC12L;
static uint32_t g_146 = 0x64C4BAC2L;
static uint64_t g_152 = 0UL;
static int32_t g_190[3] = {0xBA859407L,0xBA859407L,0xBA859407L};
static int32_t g_192 = 0xE829238DL;
static uint16_t g_193[5][4][5] = {{{0x4674L,0UL,0UL,0x4674L,0x1E9DL},{0x4674L,1UL,0UL,65531UL,1UL},{0x1E9DL,0xA8B3L,0x36AFL,0x47C1L,0x1E9DL},{0xA8B3L,0xD27DL,1UL,0x895CL,0x47C1L}},{{0x59A8L,0UL,0x48FAL,0UL,0x59A8L},{1UL,0UL,0xD27DL,0UL,1UL},{1UL,0xD27DL,0x47C1L,0x59A8L,3UL},{0UL,0xA8B3L,1UL,0UL,1UL}},{{1UL,0x59A8L,0x36AFL,0x36AFL,0x59A8L},{1UL,1UL,0x36AFL,0x1E9DL,0x47C1L},{0xA8B3L,1UL,1UL,0x895CL,0x1E9DL},{0UL,0UL,0x47C1L,1UL,0x59A8L}},{{0xA8B3L,1UL,0xD27DL,0x59A8L,0xD27DL},{1UL,1UL,0x48FAL,0x59A8L,0x9F7EL},{1UL,0xA8B3L,1UL,1UL,1UL},{0UL,0UL,0x36AFL,0x895CL,0UL}},{{1UL,0xA8B3L,1UL,0x1E9DL,0x1E9DL},{1UL,1UL,1UL,0x36AFL,0x1E9DL},{0x59A8L,1UL,0x47C1L,0UL,0UL},{0xA8B3L,0UL,0x3699L,0x59A8L,1UL}}};
static int64_t g_201 = 1L;



static int16_t  func_1(void);
static int8_t  func_10(int64_t  p_11, int16_t  p_12, union U1  p_13);
static int64_t  func_16(uint32_t  p_17, struct S0  p_18);
static union U2  func_19(struct S0  p_20);




static int16_t  func_1(void)
{ 
    struct S0 l_21 = {-5L,0x9403L,0x32D683A7EF23E469LL,7L,1UL,65535UL};
    int32_t l_172 = 0xB483B4BDL;
    int32_t l_173 = 0xD24E7AAEL;
    l_173 = ((((((l_21.f0 = ((safe_sub_func_uint64_t_u_u((safe_lshift_func_int16_t_s_s((safe_mod_func_uint16_t_u_u(g_8[2][1], ((~((func_10((safe_div_func_int64_t_s_s(func_16(((func_19(l_21) , ((safe_add_func_int8_t_s_s((0x8BDFL ^ g_47.f1), 0L)) == g_47.f0)) & g_8[2][1]), g_97), g_97.f2)), l_21.f1, g_115[3]) , l_172) , 0x6CDD36E1L)) | 65535UL))), g_97.f4)), g_112.f0.f1)) , 6L)) ^ (-8L)) != 0L) && g_8[2][1]) && 9L) && l_21.f2);
    for (g_97.f1 = 9; (g_97.f1 < 14); g_97.f1++)
    { 
        uint16_t l_183 = 0x4EE2L;
        int32_t l_191[3][2] = {{(-9L),2L},{2L,(-9L)},{2L,2L}};
        int64_t l_200 = (-5L);
        int i, j;
        g_201 = (safe_mod_func_int16_t_s_s((g_112.f1 = (safe_mod_func_int64_t_s_s((safe_unary_minus_func_int8_t_s(0L)), (safe_mod_func_int32_t_s_s(l_183, (safe_rshift_func_int16_t_s_s((safe_add_func_int32_t_s_s((((safe_lshift_func_uint8_t_u_s((g_193[4][3][4]--), (safe_mod_func_uint16_t_u_u((safe_add_func_uint8_t_u_u(((((0x0F546469023DF189LL != ((-4L) || l_191[1][0])) || 0x1DA1L) != g_115[3].f0) , l_200), 0x7CL)), g_97.f2)))) == g_97.f4) > g_22.f1), g_22.f4)), 12))))))), 0x9B1FL));
    }
    return l_21.f4;
}



static int8_t  func_10(int64_t  p_11, int16_t  p_12, union U1  p_13)
{ 
    int32_t l_124[1];
    int32_t l_170[3];
    int i;
    for (i = 0; i < 1; i++)
        l_124[i] = (-1L);
    for (i = 0; i < 3; i++)
        l_170[i] = (-1L);
lbl_171:
    if (((safe_mod_func_uint32_t_u_u((((p_13 , 0x86691D7FE7CF9146LL) && ((((safe_sub_func_uint64_t_u_u((safe_sub_func_uint32_t_u_u(((((safe_mod_func_uint16_t_u_u(g_47.f4, l_124[0])) > 0x3C42993BL) > g_112.f0.f1) < p_13.f0), l_124[0])), g_97.f3)) != g_97.f0) != g_97.f1) | l_124[0])) & p_13.f0), 1L)) && p_12))
    { 
        uint32_t l_138 = 0UL;
        int32_t l_149 = 9L;
        int32_t l_150 = 0xB9E97E82L;
        int32_t l_151[2][1][2] = {{{(-8L),(-8L)}},{{(-8L),(-8L)}}};
        int i, j, k;
        for (g_47.f4 = 0; (g_47.f4 != 41); g_47.f4 = safe_add_func_uint8_t_u_u(g_47.f4, 1))
        { 
            uint16_t l_137 = 9UL;
            int32_t l_141 = (-1L);
            int32_t l_144 = 1L;
            if ((safe_mul_func_uint16_t_u_u(((safe_lshift_func_int8_t_s_s((p_13.f0 < p_11), ((safe_add_func_uint8_t_u_u(((4294967295UL <= (safe_sub_func_uint32_t_u_u((((l_137 >= g_112.f0.f1) | l_138) & g_22.f5), g_112.f0.f1))) , g_47.f3), p_12)) | 0L))) != 6UL), p_11)))
            { 
                g_22.f0 |= 0xC8E99FE1L;
            }
            else
            { 
                int32_t l_140 = (-3L);
                int32_t l_142 = 0x18778202L;
                int32_t l_143 = 0xBD733D80L;
                l_141 = (+l_140);
                if (p_13.f0)
                    goto lbl_171;
                ++g_146;
            }
        }
        g_152--;
    }
    else
    { 
        uint8_t l_155 = 255UL;
        int32_t l_156 = 0x8087EC75L;
        l_156 ^= l_155;
        g_55 |= (safe_add_func_int64_t_s_s((safe_mod_func_uint8_t_u_u(((g_97.f5 > (((((safe_div_func_int16_t_s_s((-7L), ((!0x5261906BL) ^ (l_124[0] &= (safe_div_func_uint32_t_u_u(((safe_lshift_func_uint16_t_u_u((safe_rshift_func_int16_t_s_s(g_24.f1, 10)), 12)) >= g_47.f2), l_155)))))) != g_24.f0) , 0x6CB076EBL) || 0L) > l_170[1])) || l_170[2]), l_156)), p_13.f0));
        l_156 &= (p_13.f0 , ((((g_81[0] , ((65535UL >= l_124[0]) == g_97.f4)) & l_155) != 65526UL) > g_22.f5));
    }
    l_124[0] |= 0x5C6EA247L;
    return p_11;
}



static int64_t  func_16(uint32_t  p_17, struct S0  p_18)
{ 
    int8_t l_98 = 7L;
    int32_t l_99[1];
    int32_t l_113 = 0L;
    int32_t l_114 = 0xE54A6601L;
    int i;
    for (i = 0; i < 1; i++)
        l_99[i] = (-1L);
    g_100++;
    l_114 &= ((safe_add_func_uint16_t_u_u((p_17 >= ((((~((l_113 |= (safe_mul_func_uint8_t_u_u(((safe_rshift_func_uint8_t_u_s(((0xAD6BL | (0xDB8F82D9EA51855DLL || ((safe_add_func_int64_t_s_s((g_112 , 1L), l_99[0])) & g_47.f3))) | g_81[2]), 1)) == g_81[2]), p_17))) != 0xFAAD5B6D64A7F71BLL)) != g_24.f0) == p_18.f3) < p_18.f4)), l_98)) | p_18.f4);
    return l_113;
}



static union U2  func_19(struct S0  p_20)
{ 
    const int8_t l_25 = 0x97L;
    int32_t l_38[1];
    uint8_t l_90 = 5UL;
    union U2 l_94[4] = {{{4L,0x5B7DL,-1L,0x84L,0UL,65530UL}},{{4L,0x5B7DL,-1L,0x84L,0UL,65530UL}},{{4L,0x5B7DL,-1L,0x84L,0UL,65530UL}},{{4L,0x5B7DL,-1L,0x84L,0UL,65530UL}}};
    int i;
    for (i = 0; i < 1; i++)
        l_38[i] = 0xD65DBDCDL;
    g_22 = g_22;
    if (((+((((((g_24 , l_25) == (p_20.f3 , (!((+(safe_sub_func_int32_t_s_s((safe_rshift_func_int16_t_s_s(l_25, 12)), g_24.f2))) && 7L)))) , 1L) ^ 0xB2L) <= l_25) ^ g_22.f3)) == p_20.f2))
    { 
        uint64_t l_35[3];
        int32_t l_39[2][3][5] = {{{0xC202D2A5L,0x3BDEEF3AL,9L,1L,9L},{0xC202D2A5L,0xC202D2A5L,0xBDFDDCA6L,1L,3L},{0x3BDEEF3AL,0xC202D2A5L,9L,(-7L),3L}},{{0xC202D2A5L,0x3BDEEF3AL,9L,1L,9L},{0xC202D2A5L,0xC202D2A5L,0xBDFDDCA6L,1L,3L},{0x3BDEEF3AL,0xC202D2A5L,9L,(-7L),3L}}};
        union U2 l_52 = {{0x2D3BEAFEL,0xAE0AL,1L,0x6FL,18446744073709551615UL,0xBB4FL}};
        uint8_t l_56[3];
        union U1 l_75 = {4L};
        int i, j, k;
        for (i = 0; i < 3; i++)
            l_35[i] = 1UL;
        for (i = 0; i < 3; i++)
            l_56[i] = 0x67L;
        for (g_22.f3 = 0; (g_22.f3 < 0); g_22.f3 = safe_add_func_int64_t_s_s(g_22.f3, 8))
        { 
            p_20 = g_22;
        }
        if (((~(g_24.f1 | g_22.f4)) == (((((l_35[2] >= ((safe_lshift_func_uint16_t_u_s(l_25, l_35[2])) == 0x7CL)) == 0x30BEC3A435FA7DC0LL) >= p_20.f3) | p_20.f2) , 0x8CDD5017L)))
        { 
            uint32_t l_41[4] = {0xB379DE56L,0xB379DE56L,0xB379DE56L,0xB379DE56L};
            int i;
            --l_41[0];
        }
        else
        { 
            uint32_t l_44[5] = {0UL,0UL,0UL,0UL,0UL};
            int i;
            l_44[3] ^= g_24.f2;
            for (g_22.f3 = (-13); (g_22.f3 <= (-9)); ++g_22.f3)
            { 
                g_47 = g_22;
                l_39[1][1][0] = (g_22.f5 >= (l_44[3] ^ (0x70C497A1L <= g_47.f2)));
            }
            for (p_20.f2 = 0; (p_20.f2 == 19); p_20.f2 = safe_add_func_uint8_t_u_u(p_20.f2, 3))
            { 
                l_56[1] = ((((((safe_mod_func_uint32_t_u_u((l_52 , ((safe_mod_func_int32_t_s_s((((((((p_20.f4 > ((g_55 = ((0x3AAF9540L == l_44[3]) ^ p_20.f5)) , 1UL)) > (-1L)) < l_44[4]) != p_20.f2) ^ 65535UL) != 1UL) <= g_22.f1), 0x5D61439AL)) >= g_8[2][1])), 1L)) & l_44[3]) , g_8[0][4]) ^ 8L) ^ g_8[1][3]) | p_20.f4);
            }
        }
        p_20.f0 = (safe_sub_func_int32_t_s_s((safe_sub_func_int64_t_s_s((safe_div_func_uint8_t_u_u(((safe_lshift_func_uint8_t_u_u((safe_mul_func_uint8_t_u_u((g_81[2] = ((p_20.f2 && ((safe_add_func_int64_t_s_s((p_20.f2 = 0x9E733021B5A5E529LL), (safe_mod_func_int8_t_s_s(((safe_mod_func_int8_t_s_s(((p_20.f5 = ((safe_div_func_int32_t_s_s((l_75 , (~(l_39[1][1][0] = ((safe_mod_func_uint16_t_u_u(((safe_rshift_func_uint8_t_u_u((18446744073709551615UL ^ g_24.f1), l_52.f0.f5)) == g_22.f0), g_47.f0)) , 249UL)))), 0x31FB6C9CL)) , p_20.f1)) || 0xF180L), g_8[1][0])) > 8L), l_25)))) | (-3L))) , p_20.f5)), 0x89L)), 4)) > p_20.f0), p_20.f3)), l_52.f0.f3)), 9L));
    }
    else
    { 
        int32_t l_93 = 0xD33D9818L;
        for (p_20.f5 = (-14); (p_20.f5 >= 20); ++p_20.f5)
        { 
            int32_t l_86[3];
            int32_t l_88[5];
            int i;
            for (i = 0; i < 3; i++)
                l_86[i] = 0x259C1DB3L;
            for (i = 0; i < 5; i++)
                l_88[i] = 9L;
            g_55 ^= p_20.f2;
            for (p_20.f1 = 0; (p_20.f1 == 15); p_20.f1 = safe_add_func_int16_t_s_s(p_20.f1, 9))
            { 
                int64_t l_87 = 0L;
                int32_t l_89 = 0x5DAD87C5L;
                --l_90;
            }
            if (l_93)
                continue;
        }
    }
    return l_94[0];
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
        for (j = 0; j < 5; j++)
        {
            transparent_crc(g_8[i][j], "g_8[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_22.f0, "g_22.f0", print_hash_value);
    transparent_crc(g_22.f1, "g_22.f1", print_hash_value);
    transparent_crc(g_22.f2, "g_22.f2", print_hash_value);
    transparent_crc(g_22.f3, "g_22.f3", print_hash_value);
    transparent_crc(g_22.f4, "g_22.f4", print_hash_value);
    transparent_crc(g_22.f5, "g_22.f5", print_hash_value);
    transparent_crc(g_24.f0, "g_24.f0", print_hash_value);
    transparent_crc(g_24.f1, "g_24.f1", print_hash_value);
    transparent_crc(g_24.f2, "g_24.f2", print_hash_value);
    transparent_crc(g_40, "g_40", print_hash_value);
    transparent_crc(g_47.f0, "g_47.f0", print_hash_value);
    transparent_crc(g_47.f1, "g_47.f1", print_hash_value);
    transparent_crc(g_47.f2, "g_47.f2", print_hash_value);
    transparent_crc(g_47.f3, "g_47.f3", print_hash_value);
    transparent_crc(g_47.f4, "g_47.f4", print_hash_value);
    transparent_crc(g_47.f5, "g_47.f5", print_hash_value);
    transparent_crc(g_55, "g_55", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_81[i], "g_81[i]", print_hash_value);

    }
    transparent_crc(g_97.f0, "g_97.f0", print_hash_value);
    transparent_crc(g_97.f1, "g_97.f1", print_hash_value);
    transparent_crc(g_97.f2, "g_97.f2", print_hash_value);
    transparent_crc(g_97.f3, "g_97.f3", print_hash_value);
    transparent_crc(g_97.f4, "g_97.f4", print_hash_value);
    transparent_crc(g_97.f5, "g_97.f5", print_hash_value);
    transparent_crc(g_100, "g_100", print_hash_value);
    transparent_crc(g_112.f1, "g_112.f1", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_115[i].f0, "g_115[i].f0", print_hash_value);

    }
    transparent_crc(g_145, "g_145", print_hash_value);
    transparent_crc(g_146, "g_146", print_hash_value);
    transparent_crc(g_152, "g_152", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_190[i], "g_190[i]", print_hash_value);

    }
    transparent_crc(g_192, "g_192", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 5; k++)
            {
                transparent_crc(g_193[i][j][k], "g_193[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_201, "g_201", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
