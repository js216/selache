// SPDX-License-Identifier: MIT
// cctest_csmith_9ce484b7.c --- cctest case csmith_9ce484b7 (csmith seed 2632221879)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0xdcd650d7 */

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

// Options:   -s 2632221879 -o /tmp/csmith_gen_amry7dg9/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


#pragma pack(push)
#pragma pack(1)
struct S0 {
   int32_t  f0;
   uint32_t  f1;
   const int16_t  f2;
   int32_t  f3;
   uint32_t  f4;
};
#pragma pack(pop)

struct S1 {
   struct S0  f0;
   int8_t  f1;
   int8_t  f2;
};

union U2 {
   uint16_t  f0;
};


static int32_t g_3 = 0xD13034D0L;
static int32_t g_5 = 0L;
static int8_t g_6 = 0x0AL;
static int32_t g_8 = 0x9393DDA3L;
static int8_t g_10 = 9L;
static uint64_t g_16 = 1UL;
static struct S1 g_32[5] = {{{0xC2457718L,0xA91E53BDL,1L,1L,18446744073709551615UL},-4L,0L},{{0xC2457718L,0xA91E53BDL,1L,1L,18446744073709551615UL},-4L,0L},{{0xC2457718L,0xA91E53BDL,1L,1L,18446744073709551615UL},-4L,0L},{{0xC2457718L,0xA91E53BDL,1L,1L,18446744073709551615UL},-4L,0L},{{0xC2457718L,0xA91E53BDL,1L,1L,18446744073709551615UL},-4L,0L}};
static int64_t g_58[3] = {0x59947D9BA7415234LL,0x59947D9BA7415234LL,0x59947D9BA7415234LL};
static uint64_t g_103 = 0xD5E972E6F118E409LL;
static int8_t g_110[3][1][1] = {{{0x18L}},{{0x18L}},{{0x18L}}};
static int32_t g_114 = 0L;
static int32_t g_120 = 0x2E4F19BDL;
static int64_t g_121 = 1L;
static uint8_t g_122 = 255UL;
static uint64_t g_137 = 7UL;
static int16_t g_153[2] = {0L,0L};
static uint32_t g_165 = 4294967295UL;
static int32_t g_172[4][4] = {{0L,0L,0L,0L},{0L,0L,0L,0L},{0L,0L,0L,0L},{0L,0L,0L,0L}};
static uint16_t g_173 = 0x8858L;



static int32_t  func_1(void);
static int64_t  func_23(uint16_t  p_24);
static uint32_t  func_27(struct S1  p_28, int64_t  p_29, int32_t  p_30, int32_t  p_31);
static int64_t  func_33(int64_t  p_34, uint32_t  p_35, int16_t  p_36, int16_t  p_37);




static int32_t  func_1(void)
{ 
    int16_t l_2[3][5] = {{(-1L),4L,4L,(-1L),4L},{(-1L),(-1L),0x4FE5L,(-1L),(-1L)},{4L,(-1L),4L,4L,(-1L)}};
    int32_t l_4 = 1L;
    int32_t l_7 = 0xB3A3FC4BL;
    int32_t l_13 = 0L;
    int32_t l_14 = 0L;
    int32_t l_15[5][4][4] = {{{1L,1L,1L,0x3D8C5378L},{0x3D8C5378L,0xD99EA7EBL,1L,0xD99EA7EBL},{0L,0x233FD52AL,3L,1L},{0xD99EA7EBL,0x233FD52AL,0x233FD52AL,0xD99EA7EBL}},{{0x233FD52AL,0xD99EA7EBL,0L,0x3D8C5378L},{0x233FD52AL,0L,0x233FD52AL,3L},{0xD99EA7EBL,0x3D8C5378L,3L,3L},{0L,0L,1L,0x3D8C5378L}},{{0x3D8C5378L,0xD99EA7EBL,1L,0xD99EA7EBL},{0L,0x233FD52AL,3L,1L},{0xD99EA7EBL,0x233FD52AL,0x233FD52AL,0xD99EA7EBL},{0x233FD52AL,0xD99EA7EBL,0L,0x3D8C5378L}},{{0x233FD52AL,0L,0x233FD52AL,3L},{0xD99EA7EBL,0x3D8C5378L,3L,3L},{0L,0L,1L,0x3D8C5378L},{0x3D8C5378L,0xD99EA7EBL,1L,0xD99EA7EBL}},{{0L,0x233FD52AL,3L,1L},{0xD99EA7EBL,0x233FD52AL,0x233FD52AL,0xD99EA7EBL},{0x233FD52AL,0xD99EA7EBL,0L,0x3D8C5378L},{0x233FD52AL,0L,0x233FD52AL,3L}}};
    union U2 l_181 = {0x8D86L};
    uint32_t l_182 = 18446744073709551610UL;
    uint16_t l_183 = 0UL;
    int i, j, k;
lbl_164:
    for (g_3 = 2; (g_3 >= 0); g_3 -= 1)
    { 
        int32_t l_9 = (-1L);
        int32_t l_11 = 0xB4456E34L;
        int32_t l_12[1];
        int32_t l_25 = 5L;
        int i;
        for (i = 0; i < 1; i++)
            l_12[i] = 6L;
        g_16++;
        l_14 &= (1L & l_13);
        for (l_11 = 2; (l_11 >= 0); l_11 -= 1)
        { 
            int i, j;
            g_8 &= l_2[g_3][(g_3 + 1)];
            l_9 = (l_12[0] = (l_15[2][3][3] ^= (safe_mul_func_int8_t_s_s((safe_add_func_int16_t_s_s((l_2[g_3][(g_3 + 1)] <= func_23(l_25)), (safe_add_func_uint64_t_u_u(g_121, l_25)))), 0x25L))));
        }
    }
    for (l_4 = 0; (l_4 > 23); ++l_4)
    { 
        uint64_t l_166[5] = {0UL,0UL,0UL,0UL,0UL};
        int64_t l_171 = 0xCE4963A11E95E8B2LL;
        int32_t l_174 = 0L;
        int i;
        for (g_122 = 0; (g_122 >= 60); g_122 = safe_add_func_uint32_t_u_u(g_122, 1))
        { 
            if (g_8)
                goto lbl_164;
            g_165 ^= 0xF560471CL;
        }
        l_166[1]--;
        l_174 = (((safe_rshift_func_uint16_t_u_s(0xF282L, l_171)) , (g_173 = (g_172[2][3] = g_8))) | 65535UL);
    }
    l_183 = (g_32[4] , (g_172[2][3] = (safe_rshift_func_uint8_t_u_u((safe_sub_func_uint64_t_u_u(0x8CA6926699BEB6E1LL, (safe_mul_func_uint16_t_u_u(((g_32[2] , l_181) , g_6), l_14)))), l_182))));
    return g_165;
}



static int64_t  func_23(uint16_t  p_24)
{ 
    uint32_t l_26[5][5][1] = {{{0x58069D1FL},{18446744073709551606UL},{18446744073709551606UL},{0x58069D1FL},{18446744073709551606UL}},{{18446744073709551606UL},{0x58069D1FL},{18446744073709551606UL},{18446744073709551606UL},{0x58069D1FL}},{{18446744073709551606UL},{18446744073709551606UL},{0x58069D1FL},{18446744073709551606UL},{18446744073709551606UL}},{{0x58069D1FL},{18446744073709551606UL},{18446744073709551606UL},{0x58069D1FL},{18446744073709551606UL}},{{18446744073709551606UL},{0x58069D1FL},{18446744073709551606UL},{18446744073709551606UL},{0x58069D1FL}}};
    int16_t l_41 = 0x6068L;
    int32_t l_42[4][3] = {{0L,0L,0L},{0L,0L,0L},{0L,0L,0L},{0L,0L,0L}};
    int32_t l_141 = 0L;
    int i, j, k;
    for (g_6 = 0; (g_6 >= 0); g_6 -= 1)
    { 
        struct S0 l_40 = {0L,0x322A57D8L,-7L,0x8686B464L,1UL};
        int32_t l_155 = 1L;
        g_32[4].f0.f3 = (g_114 = ((g_32[4].f0.f1 = func_27(g_32[4], func_33((l_41 &= ((safe_add_func_int32_t_s_s((l_40 , (l_40.f3 |= l_40.f1)), g_5)) < (-1L))), l_26[4][1][0], p_24, l_42[1][1]), g_32[4].f1, p_24)) & 1L));
        g_120 = (0xC832F20CC15F2E48LL && l_42[2][2]);
        for (g_114 = 0; (g_114 >= 0); g_114 -= 1)
        { 
            int64_t l_142[3][3] = {{(-9L),(-9L),(-9L)},{0L,0L,0L},{(-9L),(-9L),(-9L)}};
            int i, j;
            for (l_40.f0 = 0; (l_40.f0 <= 0); l_40.f0 += 1)
            { 
                int i, j, k;
                g_120 = 0xEE3F616CL;
                return l_26[l_40.f0][g_6][l_40.f0];
            }
            l_141 &= g_110[0][0][0];
            if (g_3)
                break;
            for (l_40.f3 = 0; (l_40.f3 >= 0); l_40.f3 -= 1)
            { 
                int32_t l_154 = 0x12F185F0L;
                int i, j, k;
                l_142[1][2] ^= 1L;
                l_155 = (l_154 = ((safe_rshift_func_int8_t_s_s((((safe_mod_func_uint16_t_u_u((g_153[1] = (safe_div_func_uint16_t_u_u(((4294967290UL <= 0x2FC49AC2L) || (((((safe_div_func_int32_t_s_s((-1L), (safe_div_func_int16_t_s_s((g_32[4].f0 , l_26[(g_6 + 1)][(g_114 + 1)][g_114]), (-10L))))) <= l_26[(l_40.f3 + 2)][(l_40.f3 + 4)][l_40.f3]) , 0xA6L) <= l_40.f1) < l_26[(l_40.f3 + 2)][(l_40.f3 + 4)][l_40.f3])), l_40.f0))), p_24)) <= 0UL) || l_40.f1), 5)) ^ g_122));
            }
        }
    }
    for (g_122 = 0; (g_122 < 25); g_122 = safe_add_func_int64_t_s_s(g_122, 3))
    { 
        return p_24;
    }
    return g_32[4].f0.f4;
}



static uint32_t  func_27(struct S1  p_28, int64_t  p_29, int32_t  p_30, int32_t  p_31)
{ 
    const uint32_t l_126 = 0xBAF00BCFL;
    int32_t l_130[5] = {1L,1L,1L,1L,1L};
    int32_t l_140 = (-1L);
    int i;
    if ((p_30 , g_32[4].f0.f2))
    { 
        union U2 l_127 = {65530UL};
        g_8 = (l_126 <= ((0x25EAEA33125455D9LL | ((l_127 , ((l_130[4] = (safe_mod_func_int16_t_s_s((g_10 ^ 0x999DL), 0x4988L))) , 0xA19A74B103803073LL)) < p_28.f0.f1)) < 0x4AL));
    }
    else
    { 
        int32_t l_134 = 0L;
        int32_t l_135 = 6L;
        int32_t l_136 = 0L;
        l_130[4] = (((+((((p_28.f0.f3 |= g_32[4].f0.f0) , l_130[2]) && (-8L)) && g_32[4].f0.f0)) > g_8) | 0UL);
        for (g_8 = 0; (g_8 >= 10); g_8++)
        { 
            return l_134;
        }
        g_137++;
    }
    return l_140;
}



static int64_t  func_33(int64_t  p_34, uint32_t  p_35, int16_t  p_36, int16_t  p_37)
{ 
    int8_t l_53 = 0x8DL;
    int32_t l_54 = 0x262C44F0L;
    int32_t l_55 = 0x8DC7DAD0L;
    int32_t l_115 = 1L;
    int32_t l_116 = 0x9D47723EL;
    int32_t l_117 = 0xA941DAE9L;
    int32_t l_118 = 0xB77CE632L;
    int32_t l_119[4][2][1] = {{{0xECD0F842L},{0xF9CC6DD0L}},{{0xECD0F842L},{0xF9CC6DD0L}},{{0xECD0F842L},{0xF9CC6DD0L}},{{0xECD0F842L},{0xF9CC6DD0L}}};
    uint32_t l_125 = 8UL;
    int i, j, k;
    if ((((safe_div_func_uint8_t_u_u(0xA6L, (safe_add_func_int64_t_s_s((-1L), (safe_lshift_func_int16_t_s_s((safe_add_func_int8_t_s_s(((safe_div_func_int64_t_s_s(((l_54 |= (0x28L != ((l_53 |= 0x4886636311489D4CLL) > 18446744073709551608UL))) <= l_55), 0xF2C4EE0C605F7783LL)) , g_10), g_32[4].f0.f4)), 15)))))) & p_34) >= p_37))
    { 
        uint32_t l_72[3];
        int32_t l_81[4][4][3] = {{{7L,0x47B12BF8L,0L},{(-6L),(-7L),0L},{0L,0L,7L},{0xF15EDA02L,0L,7L}},{{0L,0L,0L},{1L,(-7L),1L},{1L,0x47B12BF8L,0xF15EDA02L},{0L,7L,(-7L)}},{{0xF15EDA02L,1L,0xF15EDA02L},{0L,0L,1L},{(-6L),0L,0L},{7L,1L,7L}},{{1L,7L,7L},{7L,0x47B12BF8L,0L},{(-6L),(-7L),0L},{0L,0L,7L}}};
        int32_t l_112 = 6L;
        int i, j, k;
        for (i = 0; i < 3; i++)
            l_72[i] = 0xB67A03D6L;
        for (l_53 = 4; (l_53 < (-28)); l_53 = safe_sub_func_int8_t_s_s(l_53, 1))
        { 
            uint32_t l_84 = 0x0EE2FB04L;
            int32_t l_102 = (-4L);
            for (p_37 = 2; (p_37 >= 0); p_37 -= 1)
            { 
                int i;
                g_8 = (safe_lshift_func_uint8_t_u_u((safe_mod_func_uint8_t_u_u((g_58[p_37] | (((safe_mod_func_int16_t_s_s(g_16, ((g_10 = (safe_mul_func_int8_t_s_s((safe_rshift_func_int8_t_s_s((safe_div_func_int32_t_s_s((((!p_34) <= (l_72[1] || 0x203F87D51EEA2DBBLL)) > p_37), g_10)), 5)), g_58[0]))) && p_35))) , g_8) & 0xA2D56AB6L)), p_36)), 3));
                l_81[0][2][0] = ((!0xAF3324EF461E62EDLL) <= ((((safe_mod_func_uint8_t_u_u(l_54, (~(safe_mul_func_uint8_t_u_u(((g_16++) <= (g_32[4].f0.f3 , 0x2B13749941B8E2A6LL)), g_6))))) > 0x306C0CD1CB4528E6LL) || g_32[4].f0.f1) > 0UL));
            }
            for (g_5 = 0; (g_5 <= (-1)); g_5 = safe_sub_func_int64_t_s_s(g_5, 4))
            { 
                l_84++;
            }
            for (p_34 = (-15); (p_34 >= (-21)); --p_34)
            { 
                uint8_t l_111 = 246UL;
                int32_t l_113 = 0x2147657CL;
                l_113 = (l_55 = (safe_div_func_uint8_t_u_u((0x92C623687E89A4CELL ^ (l_112 |= ((((safe_sub_func_int8_t_s_s((safe_mod_func_uint64_t_u_u((safe_mod_func_int16_t_s_s((+(safe_mul_func_uint16_t_u_u((g_110[2][0][0] = (safe_lshift_func_uint16_t_u_u(((l_81[2][1][2] = p_34) && (l_102 = ((--g_103) & (((((safe_div_func_int64_t_s_s((safe_rshift_func_int8_t_s_s((p_36 & 0xA8L), 5)), l_102)) , 0xE76B2DC2L) > 0x91FBEB5AL) < g_16) & g_32[4].f0.f0)))), 5))), 0x0FBDL))), g_58[0])), 0x1B2A7AC8E61696E8LL)), g_58[0])) < p_37) ^ l_111) || 0xB9DCA820L))), g_32[4].f0.f4)));
                if (l_112)
                    continue;
            }
        }
    }
    else
    { 
        return g_32[4].f0.f2;
    }
    ++g_122;
    return l_125;
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_3, "g_3", print_hash_value);
    transparent_crc(g_5, "g_5", print_hash_value);
    transparent_crc(g_6, "g_6", print_hash_value);
    transparent_crc(g_8, "g_8", print_hash_value);
    transparent_crc(g_10, "g_10", print_hash_value);
    transparent_crc(g_16, "g_16", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_32[i].f0.f0, "g_32[i].f0.f0", print_hash_value);
        transparent_crc(g_32[i].f0.f1, "g_32[i].f0.f1", print_hash_value);
        transparent_crc(g_32[i].f0.f2, "g_32[i].f0.f2", print_hash_value);
        transparent_crc(g_32[i].f0.f3, "g_32[i].f0.f3", print_hash_value);
        transparent_crc(g_32[i].f0.f4, "g_32[i].f0.f4", print_hash_value);
        transparent_crc(g_32[i].f1, "g_32[i].f1", print_hash_value);
        transparent_crc(g_32[i].f2, "g_32[i].f2", print_hash_value);

    }
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_58[i], "g_58[i]", print_hash_value);

    }
    transparent_crc(g_103, "g_103", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 1; k++)
            {
                transparent_crc(g_110[i][j][k], "g_110[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_114, "g_114", print_hash_value);
    transparent_crc(g_120, "g_120", print_hash_value);
    transparent_crc(g_121, "g_121", print_hash_value);
    transparent_crc(g_122, "g_122", print_hash_value);
    transparent_crc(g_137, "g_137", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_153[i], "g_153[i]", print_hash_value);

    }
    transparent_crc(g_165, "g_165", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            transparent_crc(g_172[i][j], "g_172[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_173, "g_173", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
