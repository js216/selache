// SPDX-License-Identifier: MIT
// cctest_csmith_da7728f1.c --- cctest case csmith_da7728f1 (csmith seed 3665242353)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x7f61a9b7 */
/* @exp_ticks 0x76bc */

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

// Options:   -s 3665242353 -o /tmp/csmith_gen_3zotuok4/csmith.c --concise --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 8 --max-block-size 5 --max-block-depth 4 --max-expr-complexity 8 --max-array-dim 3 --max-array-len-per-dim 7 --max-struct-fields 8 --max-union-fields 5

static long __undefined;


#pragma pack(push)
#pragma pack(1)
struct S0 {
   uint8_t  f0;
   const uint8_t  f1;
   int32_t  f2;
   int8_t  f3;
   int32_t  f4;
   uint8_t  f5;
};
#pragma pack(pop)

struct S1 {
   uint64_t  f0;
   uint8_t  f1;
   uint64_t  f2;
   int16_t  f3;
   int32_t  f4;
};

#pragma pack(push)
#pragma pack(1)
struct S2 {
   int64_t  f0;
   int16_t  f1;
   uint16_t  f2;
};
#pragma pack(pop)

union U3 {
   const int32_t  f0;
};

union U4 {
   int32_t  f0;
};

union U5 {
   int64_t  f0;
};

union U6 {
   int8_t * f0;
};


static int32_t g_2 = 0xB66BAFCBL;
static int64_t g_14 = (-8L);
static int64_t g_47[7] = {(-9L),0x631CD1AC8C6DCFF2LL,(-9L),(-9L),0x631CD1AC8C6DCFF2LL,(-9L),(-9L)};
static int8_t g_60[2] = {0x3AL,0x3AL};
static int8_t *g_59 = &g_60[0];
static int8_t **g_58 = &g_59;
static struct S2 g_61 = {0L,0xA8E1L,0x9167L};
static int32_t g_63 = 7L;
static int64_t g_64 = (-1L);
static int32_t g_66 = 0x64457C1BL;
static int8_t g_84 = (-4L);
static struct S0 g_86 = {255UL,0UL,0xC4917505L,0x1BL,1L,4UL};
static int16_t g_102 = 0x0C7DL;
static union U4 g_122 = {2L};
static int64_t *g_133 = (void*)0;
static int64_t **g_132 = &g_133;
static struct S1 g_139[5][1][7] = {{{{0UL,0xD8L,18446744073709551610UL,-8L,0xB49D4ABAL},{0UL,0xD8L,18446744073709551610UL,-8L,0xB49D4ABAL},{1UL,249UL,1UL,0x4264L,1L},{8UL,255UL,1UL,-5L,0L},{1UL,249UL,1UL,0x4264L,1L},{0UL,0xD8L,18446744073709551610UL,-8L,0xB49D4ABAL},{0UL,0xD8L,18446744073709551610UL,-8L,0xB49D4ABAL}}},{{{0xCDBF83720D768DB5LL,246UL,0x93A17D067C9850C2LL,0xD362L,0xAE722093L},{0xF4F296794CA015B2LL,1UL,5UL,1L,0x70FD57B2L},{18446744073709551615UL,0xDCL,0x201A7A66DA98BAADLL,0xDB6AL,0x085D5259L},{0xF4F296794CA015B2LL,1UL,5UL,1L,0x70FD57B2L},{0xCDBF83720D768DB5LL,246UL,0x93A17D067C9850C2LL,0xD362L,0xAE722093L},{0xCDBF83720D768DB5LL,246UL,0x93A17D067C9850C2LL,0xD362L,0xAE722093L},{0xF4F296794CA015B2LL,1UL,5UL,1L,0x70FD57B2L}}},{{{0x5E97E3D8B0AA5F9FLL,0UL,18446744073709551615UL,0x5276L,0xAA9168F8L},{0xC79B8142826EC486LL,0xE9L,0xB66984B8F16CCE4FLL,0x1A2BL,0x27750E48L},{0x5E97E3D8B0AA5F9FLL,0UL,18446744073709551615UL,0x5276L,0xAA9168F8L},{1UL,249UL,1UL,0x4264L,1L},{1UL,249UL,1UL,0x4264L,1L},{0x5E97E3D8B0AA5F9FLL,0UL,18446744073709551615UL,0x5276L,0xAA9168F8L},{0xC79B8142826EC486LL,0xE9L,0xB66984B8F16CCE4FLL,0x1A2BL,0x27750E48L}}},{{{0xF4F296794CA015B2LL,1UL,5UL,1L,0x70FD57B2L},{6UL,0x7DL,18446744073709551613UL,-6L,1L},{18446744073709551615UL,0xDCL,0x201A7A66DA98BAADLL,0xDB6AL,0x085D5259L},{18446744073709551615UL,0xDCL,0x201A7A66DA98BAADLL,0xDB6AL,0x085D5259L},{6UL,0x7DL,18446744073709551613UL,-6L,1L},{0xF4F296794CA015B2LL,1UL,5UL,1L,0x70FD57B2L},{6UL,0x7DL,18446744073709551613UL,-6L,1L}}},{{{0x5E97E3D8B0AA5F9FLL,0UL,18446744073709551615UL,0x5276L,0xAA9168F8L},{1UL,249UL,1UL,0x4264L,1L},{1UL,249UL,1UL,0x4264L,1L},{0x5E97E3D8B0AA5F9FLL,0UL,18446744073709551615UL,0x5276L,0xAA9168F8L},{0xC79B8142826EC486LL,0xE9L,0xB66984B8F16CCE4FLL,0x1A2BL,0x27750E48L},{0x5E97E3D8B0AA5F9FLL,0UL,18446744073709551615UL,0x5276L,0xAA9168F8L},{1UL,249UL,1UL,0x4264L,1L}}}};
static int16_t g_145 = 0xEE43L;
static struct S0 g_158 = {1UL,0xDEL,0x9B2B9B80L,-1L,4L,0x53L};
static const int8_t **g_161 = (void*)0;
static const int8_t ***g_160[7][6] = {{&g_161,&g_161,&g_161,(void*)0,&g_161,(void*)0},{&g_161,&g_161,&g_161,&g_161,&g_161,&g_161},{&g_161,&g_161,&g_161,&g_161,&g_161,(void*)0},{(void*)0,&g_161,&g_161,&g_161,(void*)0,&g_161},{&g_161,(void*)0,&g_161,&g_161,(void*)0,&g_161},{&g_161,&g_161,&g_161,(void*)0,&g_161,&g_161},{&g_161,&g_161,&g_161,&g_161,&g_161,&g_161}};
static const int8_t ****g_159 = &g_160[1][4];
static union U6 *g_192 = (void*)0;
static int64_t g_197 = 0x644B8D86CF0388DELL;
static int32_t g_198 = 0x1D080310L;
static uint32_t g_199[5][1][6] = {{{0UL,0xF25224E7L,0x95823D9DL,0xF25224E7L,0UL,0UL}},{{0xF1FB96F8L,0xF25224E7L,0xF25224E7L,0xF1FB96F8L,0x3D6F2FD1L,0xF1FB96F8L}},{{0xF1FB96F8L,0x3D6F2FD1L,0xF1FB96F8L,0xF25224E7L,0xF25224E7L,0xF1FB96F8L}},{{0UL,0UL,0xF25224E7L,0x95823D9DL,0xF25224E7L,0UL}},{{0xF25224E7L,0x3D6F2FD1L,0x95823D9DL,0x95823D9DL,0x3D6F2FD1L,0xF25224E7L}}};
static union U5 g_254[3] = {{0x2753F2718EB8ACBBLL},{0x2753F2718EB8ACBBLL},{0x2753F2718EB8ACBBLL}};
static int8_t g_287[2] = {(-4L),(-4L)};
static int32_t g_290[5] = {7L,7L,7L,7L,7L};
static uint32_t g_291 = 1UL;
static struct S1 *g_341[2] = {&g_139[2][0][6],&g_139[2][0][6]};
static struct S1 **g_340 = &g_341[0];
static int32_t *g_360 = &g_66;
static int32_t **g_359[5] = {&g_360,&g_360,&g_360,&g_360,&g_360};
static int32_t g_374 = 5L;
static struct S2 *g_386[4][5] = {{&g_61,&g_61,&g_61,(void*)0,(void*)0},{&g_61,(void*)0,&g_61,(void*)0,(void*)0},{&g_61,&g_61,&g_61,(void*)0,(void*)0},{&g_61,(void*)0,&g_61,(void*)0,(void*)0}};
static struct S2 **g_385 = &g_386[0][2];
static union U3 g_456 = {0xA634C69EL};
static union U5 *g_492[4][5] = {{&g_254[2],(void*)0,&g_254[2],&g_254[2],(void*)0},{&g_254[0],&g_254[2],&g_254[2],&g_254[0],&g_254[2]},{&g_254[0],&g_254[0],&g_254[2],(void*)0,&g_254[2]},{&g_254[2],&g_254[2],&g_254[2],&g_254[2],&g_254[2]}};
static union U5 **g_491 = &g_492[2][4];
static int32_t *g_530 = &g_66;
static uint64_t *g_541 = &g_139[2][0][6].f2;
static uint64_t **g_540[2] = {&g_541,&g_541};



static int64_t  func_1(void);
static int32_t * func_6(struct S0  p_7, int64_t  p_8, int8_t * p_9, uint64_t  p_10);
static int64_t  func_19(int8_t  p_20, int64_t * p_21);
static int16_t  func_28(int8_t * p_29);
static uint64_t  func_37(int8_t ** p_38, union U4  p_39);
static int8_t ** func_40(int64_t * const  p_41, const int16_t  p_42, int64_t  p_43, uint64_t  p_44, int8_t ** p_45);
static int16_t  func_48(union U3  p_49, struct S2  p_50, int8_t * p_51);
static struct S0  func_53(int8_t ** p_54, struct S2  p_55, int8_t * p_56, int8_t * p_57);




static int64_t  func_1(void)
{ 
    struct S0 l_11 = {0x75L,251UL,0L,1L,0x72B90F99L,0x6EL};
    int64_t *l_12 = (void*)0;
    int64_t *l_13 = &g_14;
    int8_t *l_15 = &l_11.f3;
    uint16_t l_18 = 0xC80AL;
    int8_t *l_31[3];
    int8_t **l_30 = &l_31[2];
    int32_t **l_533[3];
    int32_t *l_534 = (void*)0;
    uint64_t *l_538 = &g_139[2][0][6].f2;
    uint64_t **l_537[3][5][3] = {{{&l_538,&l_538,&l_538},{(void*)0,(void*)0,&l_538},{&l_538,&l_538,&l_538},{(void*)0,(void*)0,&l_538},{&l_538,&l_538,&l_538}},{{(void*)0,(void*)0,&l_538},{&l_538,&l_538,&l_538},{(void*)0,(void*)0,&l_538},{&l_538,&l_538,&l_538},{(void*)0,(void*)0,&l_538}},{{&l_538,&l_538,&l_538},{(void*)0,(void*)0,&l_538},{&l_538,&l_538,&l_538},{(void*)0,(void*)0,&l_538},{&l_538,&l_538,&l_538}}};
    union U6 l_552 = {0};
    uint64_t l_575 = 1UL;
    int32_t l_586 = 0x95AD1950L;
    const uint32_t l_593[6][4][6] = {{{0x257D4CDAL,0x7D7777C1L,18446744073709551610UL,0UL,0UL,18446744073709551610UL},{0xE5C5F075L,0xE5C5F075L,18446744073709551615UL,0xE00E9382L,0xEE769874L,0UL},{8UL,0x6A7A8964L,0xCDA47774L,18446744073709551610UL,18446744073709551615UL,0x6A7A8964L},{0xD1C1F7AAL,0xE00E9382L,0UL,0x7B6B4C02L,18446744073709551610UL,18446744073709551610UL}},{{0xDBC6310BL,0x7B6B4C02L,0x6A7A8964L,0x7D7777C1L,0xFF21CE23L,0UL},{0x7D7777C1L,0xFF21CE23L,0UL,18446744073709551615UL,0x83A25900L,0x0C5FCD04L},{0x1A37DD81L,0xCDAA8B12L,0xDEEFA726L,18446744073709551610UL,0xEE769874L,8UL},{0xEE769874L,0x90D213E8L,18446744073709551615UL,0UL,0UL,0xAADEDFACL}},{{0x2D922DA0L,0x839A67BBL,0UL,0xDBC6310BL,18446744073709551614UL,0xDBC6310BL},{18446744073709551615UL,0xDEEFA726L,18446744073709551615UL,0x5326FCD6L,0xE5C5F075L,0x6A7A8964L},{0x7B6B4C02L,18446744073709551615UL,0x90D213E8L,0xCDAA8B12L,1UL,0x239E5655L},{0xDBC6310BL,0x7D7777C1L,0x9D072FB7L,0xCDAA8B12L,18446744073709551610UL,0x5326FCD6L}},{{0x7B6B4C02L,0xFF21CE23L,0UL,0x5326FCD6L,0xDBC6310BL,0xD1C1F7AAL},{18446744073709551615UL,0xCDA47774L,0xDEEFA726L,0xDBC6310BL,0UL,0x7D7777C1L},{0x2D922DA0L,18446744073709551615UL,0x5326FCD6L,0UL,18446744073709551614UL,18446744073709551615UL},{0xEE769874L,0UL,0x257D4CDAL,18446744073709551610UL,18446744073709551614UL,0UL}},{{0x1A37DD81L,1UL,18446744073709551615UL,18446744073709551615UL,0x6A7A8964L,0x6A7A8964L},{0x7D7777C1L,0x1A37DD81L,0x1A37DD81L,0x7D7777C1L,0x2D922DA0L,0x83A25900L},{0xDBC6310BL,0x0C5FCD04L,0UL,0x7B6B4C02L,0xCF505FD7L,18446744073709551615UL},{0xD1C1F7AAL,0xFF21CE23L,0xAADEDFACL,0UL,0xCF505FD7L,0xCDA47774L}},{{0xE00E9382L,0x0C5FCD04L,0xDEEFA726L,0UL,0x2D922DA0L,0xCDAA8B12L},{18446744073709551610UL,0x1A37DD81L,18446744073709551615UL,0UL,0x6A7A8964L,18446744073709551615UL},{0xDEEFA726L,1UL,0xE5C5F075L,0x239E5655L,18446744073709551614UL,0xFF21CE23L},{18446744073709551615UL,0UL,18446744073709551609UL,0UL,18446744073709551614UL,0x6A7A8964L}}};
    int16_t l_620 = 0x4730L;
    uint32_t l_665 = 0xCBE2AC29L;
    uint32_t l_670 = 0xA6D8A958L;
    int16_t l_675 = 0x42B3L;
    uint32_t l_681[2][5][1] = {{{4294967295UL},{0x1F06D903L},{4294967295UL},{0UL},{0UL}},{{4294967295UL},{0x1F06D903L},{4294967295UL},{0UL},{0UL}}};
    int i, j, k;
    for (i = 0; i < 3; i++)
        l_31[i] = &l_11.f3;
    for (i = 0; i < 3; i++)
        l_533[i] = &g_530;
    for (g_2 = 0; (g_2 >= 14); g_2++)
    { 
        uint32_t l_5 = 1UL;
        return l_5;
    }
    return g_287[0];
}



static int32_t * func_6(struct S0  p_7, int64_t  p_8, int8_t * p_9, uint64_t  p_10)
{ 
    uint16_t *l_501[3];
    int32_t l_502 = 0x30BF9F11L;
    const struct S2 l_517 = {0xA0A9F654C8340702LL,0x083FL,65535UL};
    int8_t **** const *l_518 = (void*)0;
    int32_t l_523 = 1L;
    int32_t l_525 = 1L;
    int32_t l_526 = 0L;
    int32_t *l_531[6] = {&g_2,&g_2,&g_2,&g_2,&g_2,&g_2};
    int32_t *l_532 = &g_139[2][0][6].f4;
    int i;
    for (i = 0; i < 3; i++)
        l_501[i] = (void*)0;
    if ((g_199[4][0][1] >= (l_502 &= 0x958BL)))
    { 
        int8_t l_503[3];
        int64_t **l_504 = &g_133;
        struct S0 l_513 = {2UL,0UL,9L,6L,-3L,0x47L};
        const int8_t **** const *l_516[4][7] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,&g_159,(void*)0,(void*)0,&g_159,(void*)0,(void*)0},{(void*)0,(void*)0,&g_159,(void*)0,(void*)0,&g_159,(void*)0},{&g_159,(void*)0,(void*)0,&g_159,(void*)0,(void*)0,&g_159}};
        int16_t *l_519[6];
        int32_t l_520 = 6L;
        uint32_t *l_521 = &g_291;
        int8_t **l_522 = &g_59;
        int32_t *l_524[2];
        uint64_t l_527 = 0x24C3D8576F8EBE1BLL;
        int i, j;
        for (i = 0; i < 3; i++)
            l_503[i] = 0xF8L;
        for (i = 0; i < 6; i++)
            l_519[i] = (void*)0;
        for (i = 0; i < 2; i++)
            l_524[i] = &g_86.f2;
        (*g_360) = (((l_503[1] , func_53(func_40(((*l_504) = &p_8), ((safe_sub_func_int16_t_s_s(((0L >= ((*l_521) |= (safe_div_func_int16_t_s_s(((l_503[1] <= ((l_520 &= (safe_add_func_int64_t_s_s(((((((safe_sub_func_uint8_t_u_u((l_513 , ((safe_rshift_func_uint8_t_u_s((l_516[1][2] != (l_517 , l_518)), l_513.f5)) | g_287[0])), 1L)) > g_86.f3) < 0x374987E1L) , g_61.f2) <= 5UL) >= l_517.f1), 0x98E7CEDC4F0FA53DLL))) <= g_139[2][0][6].f2)) ^ l_517.f1), g_158.f3)))) , p_7.f2), g_199[2][0][0])) & g_198), p_7.f1, p_7.f3, l_522), l_517, (*l_522), (*g_58))) , 0x96L) != l_517.f0);
        ++l_527;
    }
    else
    { 
        return g_530;
    }
    return l_532;
}



static int64_t  func_19(int8_t  p_20, int64_t * p_21)
{ 
    struct S2 l_391[1][6] = {{{0x2E152AD83A83BA71LL,0x108FL,0x7023L},{0x2E152AD83A83BA71LL,0x108FL,0x7023L},{0x2E152AD83A83BA71LL,0x108FL,0x7023L},{0x2E152AD83A83BA71LL,0x108FL,0x7023L},{0x2E152AD83A83BA71LL,0x108FL,0x7023L},{0x2E152AD83A83BA71LL,0x108FL,0x7023L}}};
    uint8_t *l_392 = &g_139[2][0][6].f1;
    uint8_t *l_393 = &g_86.f0;
    uint8_t *l_394 = (void*)0;
    uint8_t *l_395 = &g_158.f0;
    union U5 l_403 = {0x8970C0A1ED84A095LL};
    int32_t l_408 = 0x35D9B56BL;
    int64_t ***l_415 = &g_132;
    uint32_t l_420 = 0x717A05B4L;
    struct S1 *l_452 = &g_139[0][0][4];
    union U3 *l_482 = &g_456;
    int i, j;
lbl_453:
    for (g_102 = 15; (g_102 <= 3); g_102--)
    { 
        int8_t *l_379 = &g_60[0];
        int32_t l_382 = 0xFDA9CD14L;
        struct S2 **l_388 = &g_386[2][2];
        struct S2 ***l_387 = &l_388;
        (*g_360) = (safe_add_func_uint64_t_u_u(((((((void*)0 == l_379) , (0xF78FB5F7BA5FABDFLL | (safe_div_func_int16_t_s_s((l_382 < (safe_add_func_uint32_t_u_u(4294967291UL, (g_385 != ((*l_387) = (void*)0))))), g_374)))) < (-6L)) && 0xF92B8A44L) < p_20), g_86.f4));
        for (g_64 = 0; g_64 < 3; g_64 += 1)
        {
            union U5 tmp = {-7L};
            g_254[g_64] = tmp;
        }
    }
lbl_423:
    (*g_360) = ((safe_div_func_int8_t_s_s((l_391[0][0] , (**g_58)), ((*l_395) &= ((*l_393) = ((*l_392) ^= (l_392 == g_59)))))) != (*g_360));
    for (g_197 = 1; (g_197 >= 0); g_197 -= 1)
    { 
        uint64_t l_404 = 1UL;
        int64_t *l_407 = &g_61.f0;
        int32_t l_419[5] = {(-1L),(-1L),(-1L),(-1L),(-1L)};
        struct S2 l_424[7] = {{0x2175B5E6E2522F59LL,0x23E9L,0x3614L},{0x1D74D001C37C15E1LL,0L,0xA711L},{0x1D74D001C37C15E1LL,0L,0xA711L},{0x2175B5E6E2522F59LL,0x23E9L,0x3614L},{0x1D74D001C37C15E1LL,0L,0xA711L},{0x1D74D001C37C15E1LL,0L,0xA711L},{0x2175B5E6E2522F59LL,0x23E9L,0x3614L}};
        union U5 l_449[7][4][5] = {{{{0xB89B73FF0630B20FLL},{1L},{6L},{1L},{1L}},{{0xF2E2462DA2580746LL},{0xB623F7150EB73C55LL},{5L},{0xB938772647718008LL},{5L}},{{9L},{9L},{6L},{1L},{-1L}},{{0x59F51BEEBC7FF417LL},{0x56AF1BCC05CCF2D5LL},{0xF2E2462DA2580746LL},{0xB623F7150EB73C55LL},{5L}}},{{{1L},{1L},{0x2D28F029C42437F1LL},{0x2D28F029C42437F1LL},{1L}},{{5L},{0x56AF1BCC05CCF2D5LL},{0xDF24FB6C1C540CA7LL},{-1L},{0x9617AC6931B3F7C6LL}},{{0xB89B73FF0630B20FLL},{9L},{0xB89B73FF0630B20FLL},{0x2D28F029C42437F1LL},{6L}},{{-1L},{0xB623F7150EB73C55LL},{0x9617AC6931B3F7C6LL},{0xB623F7150EB73C55LL},{-1L}}},{{{0xB89B73FF0630B20FLL},{1L},{9L},{1L},{9L}},{{5L},{-5L},{0x9617AC6931B3F7C6LL},{0xB938772647718008LL},{-1L}},{{1L},{0xB89B73FF0630B20FLL},{0xB89B73FF0630B20FLL},{1L},{9L}},{{0x59F51BEEBC7FF417LL},{0xB938772647718008LL},{0xDF24FB6C1C540CA7LL},{0x474EEFF7961D5FEALL},{-1L}}},{{{9L},{0xB89B73FF0630B20FLL},{0x2D28F029C42437F1LL},{6L},{6L}},{{0xF2E2462DA2580746LL},{-5L},{0xF2E2462DA2580746LL},{0x474EEFF7961D5FEALL},{0x9617AC6931B3F7C6LL}},{{1L},{1L},{6L},{1L},{1L}},{{0xF2E2462DA2580746LL},{0xB623F7150EB73C55LL},{5L},{0xB938772647718008LL},{5L}}},{{{9L},{9L},{6L},{1L},{-1L}},{{0x59F51BEEBC7FF417LL},{0x56AF1BCC05CCF2D5LL},{0xF2E2462DA2580746LL},{0xB623F7150EB73C55LL},{5L}},{{1L},{1L},{0x2D28F029C42437F1LL},{0x2D28F029C42437F1LL},{1L}},{{5L},{0x56AF1BCC05CCF2D5LL},{0xDF24FB6C1C540CA7LL},{-1L},{0x9617AC6931B3F7C6LL}}},{{{0xB89B73FF0630B20FLL},{9L},{0xB89B73FF0630B20FLL},{0x2D28F029C42437F1LL},{6L}},{{-1L},{0xB623F7150EB73C55LL},{0x9617AC6931B3F7C6LL},{0xB623F7150EB73C55LL},{-1L}},{{0xB89B73FF0630B20FLL},{1L},{9L},{1L},{9L}},{{5L},{-5L},{0x9617AC6931B3F7C6LL},{0xB938772647718008LL},{-1L}}},{{{1L},{0xB89B73FF0630B20FLL},{0xB89B73FF0630B20FLL},{1L},{9L}},{{0x59F51BEEBC7FF417LL},{0xB938772647718008LL},{0xDF24FB6C1C540CA7LL},{0x474EEFF7961D5FEALL},{-1L}},{{9L},{0xB89B73FF0630B20FLL},{0x2D28F029C42437F1LL},{6L},{6L}},{{0xF2E2462DA2580746LL},{-5L},{0xF2E2462DA2580746LL},{0x474EEFF7961D5FEALL},{0x9617AC6931B3F7C6LL}}}};
        struct S1 *l_451 = &g_139[4][0][2];
        union U3 *l_455[3][5][5] = {{{&g_456,&g_456,&g_456,&g_456,&g_456},{&g_456,&g_456,&g_456,&g_456,&g_456},{&g_456,&g_456,&g_456,&g_456,&g_456},{&g_456,&g_456,&g_456,&g_456,&g_456},{&g_456,(void*)0,&g_456,&g_456,(void*)0}},{{&g_456,&g_456,&g_456,&g_456,&g_456},{&g_456,&g_456,&g_456,&g_456,(void*)0},{&g_456,&g_456,&g_456,&g_456,(void*)0},{&g_456,&g_456,&g_456,&g_456,&g_456},{&g_456,&g_456,(void*)0,&g_456,(void*)0}},{{&g_456,&g_456,&g_456,&g_456,(void*)0},{&g_456,&g_456,&g_456,&g_456,&g_456},{&g_456,&g_456,&g_456,&g_456,&g_456},{&g_456,&g_456,(void*)0,&g_456,(void*)0},{&g_456,&g_456,&g_456,(void*)0,(void*)0}}};
        union U5 **l_493 = &g_492[0][3];
        const uint16_t l_495 = 0xC5EDL;
        int i, j, k;
        l_408 ^= (!(g_158.f1 < ((*l_407) = ((safe_lshift_func_int16_t_s_u(((safe_add_func_uint32_t_u_u(l_391[0][0].f0, (safe_div_func_int32_t_s_s(((*g_360) &= p_20), (l_391[0][0].f2 | (l_403 , l_404)))))) || (safe_lshift_func_uint8_t_u_u(p_20, 2))), 2)) && 0UL))));
        for (g_66 = 0; (g_66 <= 4); g_66 += 1)
        { 
            struct S2 *l_425 = &l_424[5];
            for (g_145 = 0; (g_145 <= 2); g_145 += 1)
            { 
                union U4 *l_414 = &g_122;
                int32_t *l_416 = &g_139[2][0][6].f4;
                int32_t *l_417 = &g_63;
                int32_t *l_418[2];
                int i;
                for (i = 0; i < 2; i++)
                    l_418[i] = (void*)0;
                for (g_198 = 0; (g_198 <= 1); g_198 += 1)
                { 
                    int i;
                    if (g_290[g_145])
                        break;
                }
                l_408 |= ((*l_416) = (!((*l_407) &= (g_60[g_197] , (safe_mul_func_int8_t_s_s(((safe_mul_func_uint16_t_u_u(((((*l_414) = g_122) , &g_60[g_197]) == &g_60[g_197]), l_391[0][0].f0)) || ((l_415 == &g_132) & p_20)), 1UL))))));
                --l_420;
            }
            if (g_122.f0)
                goto lbl_423;
            (*l_425) = l_424[5];
            g_132 = &g_133;
        }
        for (g_61.f1 = 0; (g_61.f1 <= 1); g_61.f1 += 1)
        { 
            struct S2 l_426 = {-7L,0x2B2EL,0UL};
            int8_t ***l_459 = &g_58;
            int8_t ****l_458 = &l_459;
            for (g_158.f0 = 0; (g_158.f0 <= 1); g_158.f0 += 1)
            { 
                if (p_20)
                    break;
            }
            for (g_158.f4 = 0; (g_158.f4 <= 1); g_158.f4 += 1)
            { 
                int32_t l_438 = 0xFBAE1FCCL;
                l_426 = l_391[0][5];
                for (g_158.f0 = 0; (g_158.f0 <= 4); g_158.f0 += 1)
                { 
                    const int32_t l_429 = (-10L);
                    int32_t l_436 = 0xDE0C22A5L;
                    uint32_t *l_437 = &g_291;
                    int32_t *l_439 = &g_158.f2;
                    int i;
                    (*l_439) ^= ((((((p_20 != (l_419[g_158.f4] = ((*g_360) && (safe_div_func_int64_t_s_s(((*l_407) = ((l_429 && ((safe_add_func_int8_t_s_s((safe_mod_func_uint8_t_u_u((safe_mod_func_uint8_t_u_u(((l_436 = g_139[2][0][6].f3) == 9UL), (g_287[g_197] = (((((*l_437) = l_426.f0) > p_20) || 0x5D67222AL) ^ p_20)))), p_20)), g_139[2][0][6].f3)) || l_438)) , p_20)), g_60[0]))))) , 1L) || 0xFBL) || (**g_58)) >= g_199[4][0][4]) != l_404);
                }
                for (g_61.f2 = 0; (g_61.f2 <= 1); g_61.f2 += 1)
                { 
                    int8_t ***l_445 = &g_58;
                    int8_t ****l_444 = &l_445;
                    int32_t l_448[4][2];
                    int32_t *l_450 = &l_448[3][0];
                    int i, j;
                    for (i = 0; i < 4; i++)
                    {
                        for (j = 0; j < 2; j++)
                            l_448[i][j] = 0x59C51AEBL;
                    }
                    l_448[3][0] = (safe_sub_func_int32_t_s_s((safe_mod_func_uint64_t_u_u(p_20, (((&g_160[1][4] == l_444) < (safe_add_func_uint32_t_u_u(((0x0A55L | ((p_20 > (1L ^ ((p_20 || l_391[0][0].f2) | (*g_59)))) < l_438)) < 6L), p_20))) | 1UL))), p_20));
                    l_450 = ((l_391[0][0] , l_449[2][3][2]) , &l_448[2][0]);
                    l_452 = l_451;
                }
                if (g_198)
                    goto lbl_453;
            }
            for (l_403.f0 = 0; (l_403.f0 <= 1); l_403.f0 += 1)
            { 
                const int32_t *l_461 = &g_63;
                const int32_t **l_462 = &l_461;
                int32_t *l_463 = (void*)0;
                int32_t *l_464[6][1];
                struct S1 l_472[7] = {{0UL,0x33L,0xE64523FC24E9BD2CLL,0x2B19L,1L},{0UL,0x33L,0xE64523FC24E9BD2CLL,0x2B19L,1L},{0UL,0x33L,0xE64523FC24E9BD2CLL,0x2B19L,1L},{0UL,0x33L,0xE64523FC24E9BD2CLL,0x2B19L,1L},{0UL,0x33L,0xE64523FC24E9BD2CLL,0x2B19L,1L},{0UL,0x33L,0xE64523FC24E9BD2CLL,0x2B19L,1L},{0UL,0x33L,0xE64523FC24E9BD2CLL,0x2B19L,1L}};
                union U3 **l_483 = &l_455[2][3][0];
                int16_t *l_494 = &g_145;
                uint16_t *l_496 = (void*)0;
                int i, j;
                for (i = 0; i < 6; i++)
                {
                    for (j = 0; j < 1; j++)
                        l_464[i][j] = &g_86.f2;
                }
                for (g_64 = 0; (g_64 <= 1); g_64 += 1)
                { 
                    return l_426.f0;
                }
                for (l_408 = 1; (l_408 >= 0); l_408 -= 1)
                { 
                    int32_t ***l_454 = &g_359[0];
                    union U3 **l_457 = &l_455[0][1][3];
                    int8_t *****l_460 = &l_458;
                    (*l_454) = &g_360;
                    (*l_457) = l_455[0][1][3];
                    (*l_460) = l_458;
                    if (p_20)
                        break;
                }
                (*l_462) = l_461;
                l_408 = ((*g_360) = 0x0137289BL);
                (*g_360) = ((safe_div_func_uint64_t_u_u(((!(((((g_61.f2 |= ((safe_lshift_func_int8_t_s_s((((safe_mod_func_int16_t_s_s((l_472[1] , ((*l_494) ^= (safe_rshift_func_int8_t_s_u((g_287[l_403.f0] = ((((safe_unary_minus_func_uint16_t_u((safe_add_func_int32_t_s_s((safe_lshift_func_uint8_t_u_u((safe_lshift_func_uint16_t_u_u((((*l_483) = l_482) != l_482), 7)), ((safe_mul_func_uint8_t_u_u(((safe_unary_minus_func_int8_t_s((safe_lshift_func_int8_t_s_s((p_20 , (l_426 , (g_290[0] >= (((safe_add_func_uint32_t_u_u((g_158 , 0x2658B9C7L), 4294967289UL)) >= 0L) , p_20)))), 5)))) || 0x5C00L), g_60[0])) || 0UL))), p_20)))) , g_254[0]) , g_491) != l_493)), p_20)))), 0x616CL)) > p_20) > g_60[1]), 4)) == l_495)) < l_391[0][0].f0) > (-2L)) >= p_20) , l_420)) <= 0x08L), l_391[0][0].f0)) , l_408);
            }
            for (p_20 = 0; (p_20 >= (-1)); p_20 = safe_sub_func_uint32_t_u_u(p_20, 1))
            { 
                uint16_t *l_500[6];
                uint16_t **l_499 = &l_500[3];
                int i;
                for (i = 0; i < 6; i++)
                    l_500[i] = &l_426.f2;
                l_499 = l_499;
                return g_2;
            }
        }
        if (g_64)
            goto lbl_453;
    }
    return l_391[0][0].f2;
}



static int16_t  func_28(int8_t * p_29)
{ 
    uint32_t l_36 = 0x5DB5A26CL;
    int64_t * const l_46 = &g_47[4];
    union U3 l_52 = {0xAB1F356DL};
    struct S2 l_100 = {1L,0x0743L,0UL};
    int16_t *l_101 = &g_102;
    int8_t **l_103 = &g_59;
    union U4 l_353[7][3] = {{{0x4EB133E6L},{0xFB84D6B2L},{0xBAE65E62L}},{{0xFB84D6B2L},{0x4EB133E6L},{0x4EB133E6L}},{{0xBAE65E62L},{0x4EB133E6L},{0x1B2D6CDBL}},{{3L},{0xFB84D6B2L},{0x59CFF97FL}},{{0xBAE65E62L},{0xBAE65E62L},{0x59CFF97FL}},{{0xFB84D6B2L},{3L},{0x1B2D6CDBL}},{{0x4EB133E6L},{0xBAE65E62L},{0x4EB133E6L}}};
    int32_t *l_373 = &g_374;
    int i, j;
    (*l_373) &= (safe_sub_func_uint32_t_u_u((safe_add_func_int8_t_s_s((l_36 | func_37(func_40(l_46, ((*l_101) ^= func_48(l_52, (func_53(g_58, g_61, (*g_58), (*g_58)) , l_100), (*g_58))), l_100.f1, l_100.f2, l_103), l_353[6][0])), (*p_29))), l_100.f2));
    return g_139[2][0][6].f0;
}



static uint64_t  func_37(int8_t ** p_38, union U4  p_39)
{ 
    uint64_t l_361[5][3][3] = {{{1UL,1UL,1UL},{0UL,0UL,0UL},{1UL,1UL,1UL}},{{0UL,0UL,0UL},{1UL,1UL,1UL},{0UL,0UL,0UL}},{{1UL,1UL,1UL},{0UL,0UL,0UL},{1UL,1UL,1UL}},{{0UL,0UL,0UL},{1UL,1UL,1UL},{0UL,0UL,0UL}},{{1UL,1UL,1UL},{0UL,0UL,0UL},{1UL,1UL,1UL}}};
    int i, j, k;
    for (g_86.f5 = 0; (g_86.f5 == 39); ++g_86.f5)
    { 
        const int32_t *l_357 = (void*)0;
        const int32_t **l_356 = &l_357;
        const int32_t ***l_358 = &l_356;
        int64_t l_364 = 0xBB3147C78908FC8BLL;
        struct S1 l_370 = {1UL,0x49L,0x0B793383DD30B71DLL,6L,0x0E1729B3L};
        (*g_360) = ((((*l_358) = l_356) != g_359[2]) && l_361[3][2][1]);
        for (g_102 = 0; (g_102 < (-6)); --g_102)
        { 
            int8_t l_371 = (-8L);
            int32_t l_372 = 0xDE6321C4L;
            if (l_364)
                break;
            l_372 = ((~((safe_mul_func_uint16_t_u_u((0x03F5E937098DB190LL | (((safe_rshift_func_int8_t_s_s((0xC3000946L < ((*g_360) = (((g_192 != (void*)0) , ((65531UL || g_122.f0) <= ((((l_370 , p_39.f0) , g_86.f1) <= 0x1BL) <= l_361[4][2][1]))) >= l_361[3][1][0]))), l_371)) == l_361[3][1][0]) < g_145)), p_39.f0)) && l_371)) > 0UL);
        }
        return p_39.f0;
    }
    return g_158.f0;
}



static int8_t ** func_40(int64_t * const  p_41, const int16_t  p_42, int64_t  p_43, uint64_t  p_44, int8_t ** p_45)
{ 
    uint16_t l_111 = 65535UL;
    int8_t ***l_126 = &g_58;
    int32_t *l_135[4][6] = {{(void*)0,&g_86.f2,&g_86.f2,(void*)0,&g_66,&g_2},{&g_2,(void*)0,&g_86.f2,(void*)0,&g_2,&g_86.f2},{(void*)0,&g_2,&g_86.f2,&g_86.f2,&g_2,(void*)0},{&g_86.f2,(void*)0,&g_66,&g_2,&g_66,(void*)0}};
    uint16_t l_180 = 0xB807L;
    int32_t l_194[6] = {(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)};
    union U4 l_202 = {0x5E9E9086L};
    int16_t *l_216 = &g_145;
    union U5 *l_253 = &g_254[2];
    union U5 *l_256 = &g_254[2];
    const int8_t *l_277 = &g_158.f3;
    int8_t ****l_280 = &l_126;
    int8_t *****l_279 = &l_280;
    struct S2 **l_327 = (void*)0;
    struct S1 *l_339 = &g_139[2][0][6];
    struct S1 ** const l_338 = &l_339;
    const int64_t *l_345 = &g_64;
    int i, j;
    for (p_44 = (-30); (p_44 > 42); p_44++)
    { 
        int8_t **l_108[1][4][6] = {{{&g_59,&g_59,(void*)0,&g_59,&g_59,&g_59},{&g_59,&g_59,&g_59,&g_59,(void*)0,(void*)0},{&g_59,&g_59,&g_59,&g_59,&g_59,&g_59},{&g_59,&g_59,(void*)0,&g_59,&g_59,&g_59}}};
        int32_t l_142 = 0xC83E95E5L;
        int32_t l_144 = 0xAC40E40DL;
        uint32_t l_185 = 0x2BF64459L;
        union U4 *l_190 = (void*)0;
        union U6 *l_191 = (void*)0;
        int32_t l_195 = (-6L);
        int32_t l_196 = 1L;
        int32_t l_215[2];
        struct S2 *l_246 = &g_61;
        int32_t l_351 = 0x53F7FC24L;
        int32_t l_352 = 6L;
        int i, j, k;
        for (i = 0; i < 2; i++)
            l_215[i] = 3L;
        for (g_64 = (-26); (g_64 >= 14); g_64 = safe_add_func_int16_t_s_s(g_64, 9))
        { 
            return l_108[0][3][3];
        }
        if (((safe_mul_func_int8_t_s_s((**g_58), ((248UL | l_111) > (safe_lshift_func_int8_t_s_u(((0x6B02009AL && 2UL) == ((((g_60[0] == ((safe_mul_func_uint16_t_u_u(((safe_mul_func_uint8_t_u_u(0x3EL, (*g_59))) == l_111), 0x075EL)) > g_2)) == g_63) || 6UL) == 8L)), g_86.f0))))) > p_43))
        { 
            int8_t ***l_123[7] = {&g_58,&l_108[0][3][3],&g_58,&g_58,&l_108[0][3][3],&g_58,&g_58};
            int64_t *l_130 = &g_47[4];
            int64_t **l_129 = &l_130;
            const struct S1 l_137 = {18446744073709551615UL,255UL,1UL,9L,0L};
            int32_t l_141 = 0x1ECA23E1L;
            int8_t l_143 = 0xAFL;
            int i;
            for (g_86.f4 = 13; (g_86.f4 <= 3); --g_86.f4)
            { 
                int8_t ***l_125[4][3] = {{&l_108[0][0][1],&l_108[0][0][1],&l_108[0][1][2]},{&g_58,&g_58,&l_108[0][3][3]},{&l_108[0][0][1],&l_108[0][0][1],&l_108[0][1][2]},{&g_58,&g_58,&l_108[0][3][3]}};
                int8_t ****l_124[2];
                uint64_t l_140 = 0x3A393D43457D5AD6LL;
                int i, j;
                for (i = 0; i < 2; i++)
                    l_124[i] = &l_125[2][1];
                if (((l_126 = (g_122 , (l_123[5] = l_123[5]))) == &l_108[0][3][3]))
                { 
                    union U4 *l_128 = &g_122;
                    union U4 **l_127 = &l_128;
                    int64_t ***l_131[4] = {&l_129,&l_129,&l_129,&l_129};
                    struct S2 *l_134 = &g_61;
                    int i;
                    (*l_127) = &g_122;
                    g_132 = l_129;
                    (*l_134) = g_61;
                }
                else
                { 
                    int32_t **l_136 = &l_135[3][4];
                    struct S1 *l_138 = &g_139[2][0][6];
                    (*l_136) = l_135[3][4];
                    (*l_138) = l_137;
                    l_140 = (-1L);
                }
                return &g_59;
            }
            for (g_63 = 4; (g_63 >= 0); g_63 -= 1)
            { 
                int32_t l_163 = 0x4BAE2B49L;
                int32_t l_184[5][7][5] = {{{0xE3A31E12L,0x59A87665L,0xE3A31E12L,0x5CD8020BL,0xE21FB040L},{8L,0xE3A31E12L,0x653E0B4AL,0x54AE0E0EL,0x35E963BAL},{0x90EF0FEDL,0x0C6B32BBL,0xE21FB040L,0x76BEBF0BL,0x3C2BB4E8L},{0x9B8EC4C5L,(-1L),0x653E0B4AL,0xA9CB02FEL,0x3C2BB4E8L},{9L,0xE3A31E12L,0x76BEBF0BL,0x609E6741L,0x8EEBD4AFL},{(-1L),0x54AE0E0EL,0x8EEBD4AFL,9L,0x8EEBD4AFL},{0x35E963BAL,0x35E963BAL,0x0C6B32BBL,(-10L),0x3C2BB4E8L}},{{8L,(-10L),0xE21FB040L,0x90EF0FEDL,0x59A87665L},{0xBC52F4FCL,0x5CD8020BL,0x609E6741L,0xE3A31E12L,0xA9CB02FEL},{0x609E6741L,(-10L),9L,0xE21FB040L,0xE3A31E12L},{1L,0x35E963BAL,0x90EF0FEDL,0L,(-1L)},{9L,0x54AE0E0EL,0L,0L,0x54AE0E0EL},{0x59A87665L,0xE3A31E12L,0x5CD8020BL,0xE21FB040L,0x609E6741L},{0x9B8EC4C5L,0x8EEBD4AFL,(-1L),0xE3A31E12L,0L}},{{0x3C2BB4E8L,9L,0xFC3BA664L,0x90EF0FEDL,0x9B8EC4C5L},{0x9B8EC4C5L,0x76BEBF0BL,9L,(-10L),0x9C2A3573L},{0x59A87665L,1L,0x54AE0E0EL,9L,0xE21FB040L},{9L,0x609E6741L,0x54AE0E0EL,0x609E6741L,9L},{1L,0x653E0B4AL,9L,0xA9CB02FEL,0x35E963BAL},{0x609E6741L,0xBC52F4FCL,0xFC3BA664L,(-2L),0x0C6B32BBL},{0xBC52F4FCL,0x9B8EC4C5L,(-1L),0x653E0B4AL,0x35E963BAL}},{{8L,(-2L),0x5CD8020BL,0x35E963BAL,9L},{0x35E963BAL,0x90EF0FEDL,0L,(-1L),0xE21FB040L},{(-1L),0x90EF0FEDL,0x90EF0FEDL,(-1L),0x9C2A3573L},{9L,(-2L),9L,8L,0x9B8EC4C5L},{0x0C6B32BBL,0x9B8EC4C5L,0x609E6741L,0L,0L},{(-1L),0xBC52F4FCL,0xE21FB040L,8L,0x609E6741L},{0x90EF0FEDL,0x653E0B4AL,0x0C6B32BBL,(-1L),0x54AE0E0EL}},{{0x76BEBF0BL,0x609E6741L,0x8EEBD4AFL,(-1L),(-1L)},{0x76BEBF0BL,1L,0x76BEBF0BL,0x35E963BAL,0xE3A31E12L},{0x90EF0FEDL,0x76BEBF0BL,0L,0x653E0B4AL,0xA9CB02FEL},{(-1L),9L,0xE3A31E12L,(-2L),0x59A87665L},{0x0C6B32BBL,0x8EEBD4AFL,0L,0xA9CB02FEL,0x3C2BB4E8L},{9L,0xE3A31E12L,0x76BEBF0BL,0x609E6741L,0x8EEBD4AFL},{(-1L),0x54AE0E0EL,0x8EEBD4AFL,9L,0x8EEBD4AFL}}};
                int i, j, k;
                for (p_43 = 0; (p_43 <= 0); p_43 += 1)
                { 
                    uint8_t l_146 = 253UL;
                    ++l_146;
                }
                for (g_84 = 0; (g_84 >= 0); g_84 -= 1)
                { 
                    uint8_t *l_151[7] = {&g_86.f5,&g_86.f5,&g_86.f5,&g_86.f5,&g_86.f5,&g_86.f5,&g_86.f5};
                    const int8_t *****l_162[6] = {&g_159,&g_159,&g_159,&g_159,&g_159,&g_159};
                    int i;
                    l_163 ^= ((safe_add_func_uint8_t_u_u((g_86.f0--), g_47[(g_63 + 1)])) <= (safe_sub_func_int64_t_s_s((safe_mod_func_uint16_t_u_u((((((void*)0 != &g_122) , p_42) >= (g_158 , (((g_159 = g_159) == &l_123[(g_84 + 6)]) , p_42))) > (*p_41)), g_47[(g_63 + 1)])), p_42)));
                    l_141 = ((**g_58) < (((!((g_158.f4 ^ g_86.f1) , (0x81CDD84EL == 1L))) && (safe_add_func_int64_t_s_s(((0xF0CFL != 0x3512L) <= p_42), 0xAAA1069F5C42DACBLL))) >= g_2));
                }
                if (((((safe_rshift_func_uint8_t_u_s(p_42, l_143)) & (((*l_130) = (*p_41)) ^ ((safe_mul_func_int16_t_s_s(((safe_mod_func_uint16_t_u_u((((safe_add_func_int32_t_s_s(((safe_rshift_func_int16_t_s_s(((safe_mod_func_uint32_t_u_u((~g_84), 2L)) | (g_158 , (&g_159 == &g_159))), 9)) != (*g_59)), l_163)) >= p_43) >= 0xA6114F9EE90AB4F1LL), p_42)) & p_44), l_180)) == 0x98L))) == p_44) == l_163))
                { 
                    return &g_59;
                }
                else
                { 
                    uint16_t l_181 = 0xE9B0L;
                    int32_t **l_188 = (void*)0;
                    int32_t **l_189 = &l_135[0][3];
                    ++l_181;
                    l_185--;
                    (*l_189) = (g_61 , &l_184[0][1][2]);
                    return &g_59;
                }
            }
            l_190 = &g_122;
            g_192 = l_191;
            l_142 = 0x9EB95E22L;
        }
        else
        { 
            int16_t l_193[3][4] = {{0x1A79L,0x1A79L,2L,1L},{1L,0L,1L,2L},{1L,2L,2L,1L}};
            union U4 *l_203 = &g_122;
            uint8_t l_217[4];
            int16_t l_218 = (-1L);
            uint8_t *l_219[3];
            int32_t l_220[4][5][2] = {{{2L,0L},{0x51932FCEL,0xE4FF3832L},{(-2L),0xE4FF3832L},{0x51932FCEL,0L},{2L,0L}},{{(-2L),0xDB83E6DEL},{0L,0x342388C2L},{0x51932FCEL,0x342388C2L},{0L,0xDB83E6DEL},{(-2L),0L}},{{(-2L),0xDB83E6DEL},{0L,0x342388C2L},{0x51932FCEL,0x342388C2L},{0L,0xDB83E6DEL},{(-2L),0L}},{{(-2L),0xDB83E6DEL},{0L,0x342388C2L},{0x51932FCEL,0x342388C2L},{0L,0xDB83E6DEL},{(-2L),0L}}};
            int32_t **l_221 = (void*)0;
            int32_t **l_222 = (void*)0;
            int32_t **l_223 = &l_135[2][1];
            int i, j, k;
            for (i = 0; i < 4; i++)
                l_217[i] = 1UL;
            for (i = 0; i < 3; i++)
                l_219[i] = &l_217[3];
            ++g_199[2][0][0];
            l_220[3][0][1] ^= (((**p_45) || g_66) ^ (((g_86.f0 = (((((*l_203) = l_202) , ((((safe_sub_func_int8_t_s_s((safe_add_func_uint8_t_u_u((safe_mod_func_int64_t_s_s((!((safe_mul_func_uint16_t_u_u((l_215[0] = ((safe_add_func_uint64_t_u_u((l_215[0] && ((g_84 = ((&g_145 == l_216) , (l_193[0][2] < l_196))) ^ g_139[2][0][6].f3)), 0x7D1E233BC691B77CLL)) , l_215[1])), p_44)) < p_43)), l_217[3])), 0x38L)), l_218)) & l_195) , g_158.f4) != g_86.f3)) && p_43) && p_44)) | g_63) , (**p_45)));
            (*l_223) = &g_63;
        }
        l_215[0] = (((((***l_126) ^= l_215[0]) & 0x6AL) , p_44) != p_43);
        for (g_66 = 0; (g_66 < 7); g_66++)
        { 
            int64_t l_250 = 0xE0675B026C55A288LL;
            int32_t l_270 = 0xCA82341EL;
            uint32_t l_311 = 0x3FD6FBCAL;
            for (g_197 = 0; (g_197 > 2); g_197++)
            { 
                uint64_t *l_232[3][6] = {{&g_139[2][0][6].f0,&g_139[2][0][6].f2,&g_139[2][0][6].f0,&g_139[2][0][6].f0,&g_139[2][0][6].f0,&g_139[2][0][6].f2},{&g_139[2][0][6].f0,&g_139[2][0][6].f2,&g_139[2][0][6].f0,&g_139[2][0][6].f0,&g_139[2][0][6].f0,&g_139[2][0][6].f0},{&g_139[2][0][6].f0,&g_139[2][0][6].f2,&g_139[2][0][6].f2,&g_139[2][0][6].f0,&g_139[2][0][6].f0,&g_139[2][0][6].f0}};
                struct S2 *l_244 = &g_61;
                struct S2 **l_245 = &l_244;
                struct S2 **l_247 = (void*)0;
                struct S2 **l_248 = (void*)0;
                struct S2 **l_249 = &l_246;
                int32_t l_251 = 0x287B85CEL;
                uint8_t *l_252 = &g_86.f5;
                union U5 **l_255[6];
                int i, j;
                for (i = 0; i < 6; i++)
                    l_255[i] = &l_253;
                g_139[2][0][6].f4 = ((p_42 ^ 0x7FF6CDE482A85E6CLL) & (safe_rshift_func_uint16_t_u_u((safe_lshift_func_uint16_t_u_s((((l_215[0] = 0x0337DF4CC50A3A8ELL) >= ((((((safe_mul_func_int16_t_s_s((g_199[3][0][5] > (safe_lshift_func_uint8_t_u_u((safe_sub_func_int16_t_s_s(p_44, ((l_251 = (((*l_252) = ((safe_rshift_func_uint16_t_u_s(((safe_mod_func_uint32_t_u_u((((!((((((((*l_245) = l_244) == ((*l_249) = ((*g_59) , l_246))) , (*p_41)) , (void*)0) != g_133) >= p_43) >= g_64)) && g_86.f5) != (*p_41)), 0xFDCD4D27L)) ^ l_250), l_196)) <= l_251)) , 18446744073709551611UL)) && 0x115D690B895AD1BCLL))), g_86.f0))), g_47[6])) ^ g_122.f0) <= g_86.f1) || p_43) || 0L) , (-1L))) | l_250), 3)), 0)));
                g_86.f2 |= (g_158.f2 ^= g_139[2][0][6].f3);
                if (g_61.f1)
                    break;
                l_256 = l_253;
            }
            for (l_180 = 0; (l_180 != 17); l_180++)
            { 
                struct S2 l_265 = {0x2DCA600207872F4CLL,0L,65535UL};
                int32_t l_278 = (-10L);
                struct S1 l_281 = {0UL,0x7CL,0x99EDAFD709BB61F3LL,1L,-1L};
                uint16_t l_284 = 65531UL;
                uint64_t *l_310 = &g_139[2][0][6].f0;
                uint16_t l_312 = 0x7CE7L;
                struct S1 *l_314 = &l_281;
                struct S1 **l_313 = &l_314;
                if (g_86.f0)
                    break;
                l_278 ^= (safe_lshift_func_int16_t_s_u(g_64, (safe_sub_func_uint32_t_u_u((safe_add_func_int32_t_s_s((l_270 = (l_265 , ((g_158.f0 | (**p_45)) < (safe_mul_func_int16_t_s_s(0L, 0L))))), (safe_mod_func_int16_t_s_s((safe_rshift_func_uint16_t_u_u((g_61.f2 = (safe_add_func_int16_t_s_s((l_277 == (*p_45)), g_158.f1))), 1)), 65529UL)))), g_86.f0))));
                for (g_86.f4 = 0; (g_86.f4 <= 0); g_86.f4 += 1)
                { 
                    struct S1 *l_282 = &g_139[1][0][4];
                    int32_t l_283 = 1L;
                    int32_t l_288 = 7L;
                    int32_t l_289[7];
                    int i, j, k;
                    for (i = 0; i < 7; i++)
                        l_289[i] = 0L;
                    l_283 &= (l_279 == (((*l_282) = l_281) , &g_159));
                    l_284++;
                    l_281.f4 ^= g_199[(g_86.f4 + 3)][g_86.f4][(g_86.f4 + 4)];
                    --g_291;
                }
                (*l_313) = (((((*l_216) = ((0x6E27FC08L <= (1L > (((safe_sub_func_int8_t_s_s(((((g_86.f4 < ((safe_rshift_func_int8_t_s_s((safe_mul_func_int8_t_s_s((safe_sub_func_uint32_t_u_u(g_61.f0, (safe_sub_func_uint16_t_u_u((safe_lshift_func_uint16_t_u_s((safe_div_func_uint64_t_u_u(((p_43 | p_42) <= (((*l_310) = (((safe_lshift_func_uint8_t_u_u(((g_287[0] != l_250) == (-8L)), l_284)) || g_102) < g_158.f0)) > l_250)), 0x0FFA9F08BEB24755LL)), 14)), g_61.f2)))), 0x38L)), l_278)) ^ g_158.f5)) | l_311) <= 0xE5B7L) <= p_43), l_312)) != g_158.f3) && l_185))) ^ l_215[0])) > 1L) == p_43) , (void*)0);
                for (g_158.f2 = (-15); (g_158.f2 > 2); ++g_158.f2)
                { 
                    int64_t l_333[7] = {0x15F4F7D9D7A6BA7ELL,(-9L),(-9L),0x15F4F7D9D7A6BA7ELL,(-9L),(-9L),0x15F4F7D9D7A6BA7ELL};
                    int i;
                    l_281.f4 = l_311;
                    l_278 &= (safe_mod_func_uint8_t_u_u((((safe_sub_func_int8_t_s_s((safe_lshift_func_uint8_t_u_s(((safe_rshift_func_int8_t_s_s(l_144, ((((*p_41) = ((safe_div_func_uint64_t_u_u(((void*)0 != l_327), ((safe_rshift_func_int8_t_s_s((g_122 , (~(safe_lshift_func_int8_t_s_u(5L, 4)))), (((((**p_45) && ((void*)0 != p_45)) ^ (-5L)) >= 0xE5L) <= 0x215BL))) & 1L))) || 0x226EBE7CL)) , g_199[2][0][0]) > 8UL))) && g_86.f0), l_196)), l_144)) && l_333[0]) <= 0x9AL), l_333[0]));
                }
            }
            g_158.f2 = (safe_div_func_int32_t_s_s((l_215[0] = g_60[0]), (((safe_lshift_func_uint16_t_u_u((((l_338 != g_340) | 1UL) < (~(safe_sub_func_uint64_t_u_u(18446744073709551606UL, (l_345 == ((safe_lshift_func_int16_t_s_s((safe_unary_minus_func_uint8_t_u((((safe_div_func_int32_t_s_s((l_351 ^= 0x021D15DCL), 0xACCE002FL)) == l_250) || l_352))), g_291)) , (void*)0)))))), 11)) && g_47[4]) && l_270)));
            if (g_86.f5)
                break;
        }
    }
    return &g_59;
}



static int16_t  func_48(union U3  p_49, struct S2  p_50, int8_t * p_51)
{ 
    return p_50.f1;
}



static struct S0  func_53(int8_t ** p_54, struct S2  p_55, int8_t * p_56, int8_t * p_57)
{ 
    int32_t *l_62 = &g_63;
    int32_t *l_65 = &g_66;
    int64_t ** const l_67 = (void*)0;
    int64_t *l_70 = &g_64;
    int64_t **l_69 = &l_70;
    int64_t ***l_68 = &l_69;
    int64_t *l_77 = &g_47[4];
    union U6 l_81[3] = {{0},{0},{0}};
    union U5 l_97 = {0x4D66FC9E278474A8LL};
    int i;
    g_64 = ((*l_62) = g_60[0]);
    (*l_65) ^= (*l_62);
    (*l_68) = l_67;
    for (g_63 = (-11); (g_63 == 16); g_63 = safe_add_func_int8_t_s_s(g_63, 1))
    { 
        int64_t *l_75 = &g_47[4];
        int64_t **l_76 = &l_70;
        int32_t l_80[2][1];
        uint8_t l_82 = 0x71L;
        int8_t *l_83 = &g_84;
        int8_t ***l_85 = (void*)0;
        union U4 l_87 = {0x8A5DA0DEL};
        int i, j;
        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 1; j++)
                l_80[i][j] = 2L;
        }
        (*l_65) ^= (safe_mul_func_int8_t_s_s((((l_77 = ((*l_76) = l_75)) == (void*)0) == (safe_div_func_int8_t_s_s(((*l_83) = (((*g_59) = (**g_58)) , ((l_80[1][0] | (l_81[2] , (l_82 && (*l_62)))) && 0UL))), 0xD7L))), 6L));
        l_85 = &p_54;
        (*l_65) &= (g_86 , (l_87 , (!p_55.f1)));
        l_80[0][0] = (g_84 > (safe_add_func_int32_t_s_s((safe_sub_func_int32_t_s_s(((*l_65) = g_47[5]), (*l_62))), (safe_rshift_func_int8_t_s_u((l_80[1][0] == (safe_mod_func_int64_t_s_s((l_97 , p_55.f0), (safe_add_func_uint16_t_u_u(((((((l_87 , (void*)0) != &p_56) || l_82) >= (*g_59)) , p_55.f1) ^ p_55.f0), p_55.f2))))), p_55.f2)))));
    }
    return g_86;
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    transparent_crc(g_14, "g_14", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(g_47[i], "g_47[i]", print_hash_value);

    }
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_60[i], "g_60[i]", print_hash_value);

    }
    transparent_crc(g_61.f0, "g_61.f0", print_hash_value);
    transparent_crc(g_61.f1, "g_61.f1", print_hash_value);
    transparent_crc(g_61.f2, "g_61.f2", print_hash_value);
    transparent_crc(g_63, "g_63", print_hash_value);
    transparent_crc(g_64, "g_64", print_hash_value);
    transparent_crc(g_66, "g_66", print_hash_value);
    transparent_crc(g_84, "g_84", print_hash_value);
    transparent_crc(g_86.f0, "g_86.f0", print_hash_value);
    transparent_crc(g_86.f1, "g_86.f1", print_hash_value);
    transparent_crc(g_86.f2, "g_86.f2", print_hash_value);
    transparent_crc(g_86.f3, "g_86.f3", print_hash_value);
    transparent_crc(g_86.f4, "g_86.f4", print_hash_value);
    transparent_crc(g_86.f5, "g_86.f5", print_hash_value);
    transparent_crc(g_102, "g_102", print_hash_value);
    transparent_crc(g_122.f0, "g_122.f0", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 7; k++)
            {
                transparent_crc(g_139[i][j][k].f0, "g_139[i][j][k].f0", print_hash_value);
                transparent_crc(g_139[i][j][k].f1, "g_139[i][j][k].f1", print_hash_value);
                transparent_crc(g_139[i][j][k].f2, "g_139[i][j][k].f2", print_hash_value);
                transparent_crc(g_139[i][j][k].f3, "g_139[i][j][k].f3", print_hash_value);
                transparent_crc(g_139[i][j][k].f4, "g_139[i][j][k].f4", print_hash_value);

            }
        }
    }
    transparent_crc(g_145, "g_145", print_hash_value);
    transparent_crc(g_158.f0, "g_158.f0", print_hash_value);
    transparent_crc(g_158.f1, "g_158.f1", print_hash_value);
    transparent_crc(g_158.f2, "g_158.f2", print_hash_value);
    transparent_crc(g_158.f3, "g_158.f3", print_hash_value);
    transparent_crc(g_158.f4, "g_158.f4", print_hash_value);
    transparent_crc(g_158.f5, "g_158.f5", print_hash_value);
    transparent_crc(g_197, "g_197", print_hash_value);
    transparent_crc(g_198, "g_198", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 6; k++)
            {
                transparent_crc(g_199[i][j][k], "g_199[i][j][k]", print_hash_value);

            }
        }
    }
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_254[i].f0, "g_254[i].f0", print_hash_value);

    }
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_287[i], "g_287[i]", print_hash_value);

    }
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_290[i], "g_290[i]", print_hash_value);

    }
    transparent_crc(g_291, "g_291", print_hash_value);
    transparent_crc(g_374, "g_374", print_hash_value);
    transparent_crc(g_456.f0, "g_456.f0", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
