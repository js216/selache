// SPDX-License-Identifier: MIT
// cctest_csmith_4f1cb316.c --- cctest case csmith_4f1cb316 (csmith seed 1327280918)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0xc02cf469 */
/* @exp_ticks 0x4f78 */

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

// Options:   -s 1327280918 -o /tmp/csmith_gen_520v9jbl/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


#pragma pack(push)
#pragma pack(1)
struct S0 {
   uint32_t  f0;
   uint32_t  f1;
   uint16_t  f2;
   uint32_t  f3;
};
#pragma pack(pop)

struct S1 {
   const uint32_t  f0;
   int64_t  f1;
   uint8_t  f2;
   struct S0  f3;
   uint32_t  f4;
};

union U2 {
   uint64_t  f0;
   const struct S1  f1;
   const uint64_t  f2;
};

union U3 {
   const uint64_t  f0;
   int64_t  f1;
};

union U4 {
   uint32_t  f0;
   const struct S0  f1;
   int64_t  f2;
   const int64_t  f3;
};

union U5 {
   struct S0  f0;
};


static int32_t g_2[3] = {0L,0L,0L};
static const uint32_t g_16 = 0x2D714F98L;
static union U3 g_18 = {18446744073709551612UL};
static uint8_t g_29[2][5] = {{0x10L,0UL,0x10L,8UL,8UL},{0x10L,0UL,0x10L,8UL,8UL}};
static union U2 g_32[5] = {{0xE2CAEABA4A2C6EB8LL},{0xE2CAEABA4A2C6EB8LL},{0xE2CAEABA4A2C6EB8LL},{0xE2CAEABA4A2C6EB8LL},{0xE2CAEABA4A2C6EB8LL}};
static uint64_t g_43 = 0xB879C93506F8A133LL;
static uint64_t g_56 = 0xE7BE98B872472F85LL;
static int32_t g_60 = (-7L);
static uint64_t g_62 = 0x6F6A0F30BDA1A75CLL;
static uint32_t g_65 = 0x50CF10AAL;
static int32_t g_78[3][5] = {{0x747A0049L,1L,0L,0xE1F678D1L,0L},{0L,0L,0x8FC8FA0DL,0xE1F678D1L,0x303F68C3L},{1L,0x747A0049L,0x747A0049L,1L,0L}};
static int32_t g_87 = (-5L);
static union U5 g_88[2] = {{{1UL,0x7204C5B3L,8UL,0x9B4FE2E8L}},{{1UL,0x7204C5B3L,8UL,0x9B4FE2E8L}}};
static int64_t g_103 = 0xE5966A8FC2E2BE68LL;
static uint16_t g_105 = 1UL;
static int32_t g_108 = 0xDDF97142L;
static uint8_t g_109 = 250UL;
static uint8_t g_167 = 247UL;
static uint64_t g_170[3][3][5] = {{{0xEAE24F2121E25C62LL,18446744073709551608UL,0x62504A518F3EDA6DLL,0x4B936DA785FE2E02LL,0UL},{0x8C1170D4C16A4623LL,0x908DBA9805CD855BLL,0x4B936DA785FE2E02LL,18446744073709551615UL,0x7B351C66ACBFB422LL},{0x7B351C66ACBFB422LL,1UL,18446744073709551608UL,0xB315883FB63F38E1LL,0x7B351C66ACBFB422LL}},{{0x908DBA9805CD855BLL,0UL,0UL,0x908DBA9805CD855BLL,1UL},{0x7B351C66ACBFB422LL,0UL,0x62504A518F3EDA6DLL,0x92BCF4DB291124A3LL,0x908DBA9805CD855BLL},{0xB315883FB63F38E1LL,1UL,0x7B351C66ACBFB422LL,0xF90657D6C4115E00LL,0x4A48274371E87755LL}},{{0x62504A518F3EDA6DLL,0xEAE24F2121E25C62LL,0x8C1170D4C16A4623LL,0x92BCF4DB291124A3LL,0x92BCF4DB291124A3LL},{0xEAE24F2121E25C62LL,0xB315883FB63F38E1LL,0xEAE24F2121E25C62LL,0x908DBA9805CD855BLL,0x73B10F1C41F1468ELL},{0xEAE24F2121E25C62LL,18446744073709551615UL,0xF90657D6C4115E00LL,0xB315883FB63F38E1LL,1UL}}};
static int64_t g_180 = 0L;
static uint32_t g_181 = 0x8D4A0325L;
static int32_t g_183 = 0xC014DE81L;
static union U4 g_223[5] = {{0UL},{0UL},{0UL},{0UL},{0UL}};
static int64_t g_347 = 0xC61CD711647F9239LL;
static uint8_t g_391 = 0x8BL;



static int64_t  func_1(void);
static uint32_t  func_5(union U2  p_6, uint16_t  p_7, uint16_t  p_8, union U2  p_9);
static union U2  func_10(const uint16_t  p_11, int16_t  p_12, int32_t  p_13, union U3  p_14, int16_t  p_15);
static int32_t  func_33(union U4  p_34);




static int64_t  func_1(void)
{ 
    uint16_t l_17 = 0x76D2L;
    int8_t l_206 = 0x0EL;
    int32_t l_207 = 1L;
    int64_t l_217 = 0xEC1CF444A0E0B154LL;
    int32_t l_227 = 0x78A0E73BL;
    uint64_t l_229[5][3] = {{0x7D0B48FF07A6BF1CLL,1UL,0x7D0B48FF07A6BF1CLL},{0x7D0B48FF07A6BF1CLL,0xE7CB5A7BDD12B358LL,1UL},{0xE7CB5A7BDD12B358LL,0x7D0B48FF07A6BF1CLL,0x7D0B48FF07A6BF1CLL},{1UL,0x7D0B48FF07A6BF1CLL,0xC9E3CE139A795CD9LL},{1UL,0xE7CB5A7BDD12B358LL,0x539E8659274A4447LL}};
    uint64_t l_290 = 0x1C78F11A6BF4DEF9LL;
    int32_t l_338 = 0x07B8FDB1L;
    int32_t l_340 = 6L;
    int32_t l_342 = 4L;
    int32_t l_343[1][5];
    uint8_t l_367 = 0x13L;
    struct S0 l_394 = {4294967295UL,0xD5ECD102L,65530UL,0x3A862AB6L};
    int i, j;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 5; j++)
            l_343[i][j] = 0xBA940064L;
    }
    for (g_2[2] = 0; (g_2[2] == 17); g_2[2]++)
    { 
        uint16_t l_184 = 0xB098L;
        int32_t l_188 = 0xFBAFD827L;
        uint16_t l_201 = 0x4B79L;
        uint32_t l_220[1];
        struct S0 l_252 = {0xE14E9EA8L,0x35C7B8DBL,0UL,0xA65D4B91L};
        int i;
        for (i = 0; i < 1; i++)
            l_220[i] = 4294967290UL;
        if (((g_183 = (func_5(func_10(g_16, g_2[1], (0x665969A2L <= ((l_17 == (-1L)) != (-1L))), g_18, g_18.f1), l_17, l_17, g_32[1]) , g_180)) , l_184))
        { 
            int64_t l_187 = 0x0C5B0B88990D2993LL;
            union U2 l_194[2][3] = {{{0x45770A46BAF6D2A3LL},{0x45770A46BAF6D2A3LL},{0x45770A46BAF6D2A3LL}},{{0x45770A46BAF6D2A3LL},{0x45770A46BAF6D2A3LL},{0x45770A46BAF6D2A3LL}}};
            int i, j;
            if (((g_88[0].f0.f2 ^= (safe_add_func_uint16_t_u_u(0x4875L, ((7L == (l_17 && (l_187 |= ((g_180 = 0x291ADAEAB5801B7BLL) >= g_56)))) | l_184)))) & l_184))
            { 
                uint32_t l_191 = 4294967294UL;
                g_87 &= (((g_18.f1 != (l_188 = l_187)) != g_62) & ((((((((((safe_mod_func_int16_t_s_s(0x38BBL, g_88[0].f0.f0)) & g_180) && l_184) == l_17) || l_187) ^ g_16) | l_187) , l_187) < l_191) ^ l_17));
                if (l_187)
                    break;
            }
            else
            { 
                int16_t l_200 = 9L;
                g_87 = ((safe_mod_func_uint32_t_u_u((g_88[0] , (l_194[1][0] , (safe_mod_func_int64_t_s_s(0x230E5491D3E571FBLL, ((safe_mul_func_uint8_t_u_u((g_29[0][0] ^= (safe_unary_minus_func_uint8_t_u(l_200))), l_201)) ^ g_78[1][2]))))), l_194[1][0].f2)) == l_187);
                return g_29[0][0];
            }
        }
        else
        { 
            for (g_43 = 0; (g_43 <= 1); g_43 += 1)
            { 
                int i, j;
                if (g_29[g_43][(g_43 + 3)])
                    break;
            }
        }
        if ((g_180 & ((((g_87 = ((l_188 = l_17) >= ((l_207 = ((0x6BE899FAL == (safe_sub_func_int32_t_s_s((safe_rshift_func_uint8_t_u_u((g_88[0].f0 , g_32[1].f0), 0)), 1UL))) >= l_206)) >= g_105))) , l_188) <= l_184) >= g_18.f1)))
        { 
            uint16_t l_210[4] = {3UL,3UL,3UL,3UL};
            int i;
            g_183 = (safe_rshift_func_int16_t_s_u((l_210[0] = g_32[1].f0), ((safe_lshift_func_uint8_t_u_s((((l_188 = (g_170[1][1][3]++)) || 0xC4C534E026D30E98LL) & ((0x06F9L < l_217) > g_108)), 5)) | 0xA48AB577FE8ED7BALL)));
            for (l_206 = 7; (l_206 != 18); ++l_206)
            { 
                union U2 l_224 = {0xC4F4EFCB6989C774LL};
                l_188 = l_220[0];
                g_183 = (safe_lshift_func_uint8_t_u_s(((((g_88[0].f0.f3 = (g_105 <= (g_223[3] , (l_224 , ((g_62 = g_88[0].f0.f0) || g_223[3].f0))))) , 0UL) && l_220[0]) <= l_210[3]), l_210[0]));
            }
            l_227 = (safe_lshift_func_uint16_t_u_s(((g_170[0][0][2] = l_210[0]) > l_220[0]), 1));
        }
        else
        { 
            int64_t l_236[3][2][3];
            int32_t l_249 = 0x2E687979L;
            int32_t l_254 = 0x55A1878CL;
            int i, j, k;
            for (i = 0; i < 3; i++)
            {
                for (j = 0; j < 2; j++)
                {
                    for (k = 0; k < 3; k++)
                        l_236[i][j][k] = (-7L);
                }
            }
            l_188 = (!l_188);
            l_207 = (((l_249 = (((l_229[4][0] & (safe_sub_func_int16_t_s_s(((l_188 = (safe_add_func_uint16_t_u_u((safe_add_func_int32_t_s_s((l_236[1][0][2] == (safe_mul_func_int8_t_s_s((safe_lshift_func_uint8_t_u_s(((safe_lshift_func_int8_t_s_u((l_236[0][1][0] < (safe_rshift_func_int16_t_s_s((safe_rshift_func_uint16_t_u_u((safe_mul_func_uint16_t_u_u(g_78[0][2], l_207)), g_29[0][0])), g_181))), 5)) ^ g_62), 3)), g_88[0].f0.f2))), 0x4DD5B9C6L)), l_184))) <= l_236[2][0][0]), l_220[0]))) , 0xC14A6CCC60F6C440LL) , 1UL)) , 1L) ^ g_88[0].f0.f0);
            for (l_188 = (-9); (l_188 != 3); ++l_188)
            { 
                struct S0 l_253 = {4294967295UL,4294967293UL,0x89A2L,0x28897AFAL};
                uint64_t l_255 = 0x8E82138A2B4C7A86LL;
                l_253 = l_252;
                l_255--;
                if (g_2[2])
                    continue;
            }
        }
    }
    if (((safe_mul_func_uint8_t_u_u(((safe_lshift_func_uint8_t_u_s((safe_mul_func_int8_t_s_s((g_105 || 6UL), (((safe_lshift_func_uint16_t_u_s(((0x12CBEF5CL & (!(((((safe_mod_func_int16_t_s_s((safe_mul_func_uint16_t_u_u((l_207 ^= (safe_sub_func_int32_t_s_s((((g_29[1][3] >= l_17) , l_229[2][1]) >= g_78[2][2]), g_183))), 0UL)), (-1L))) < g_108) ^ g_181) || g_108) ^ l_17))) , 65529UL), 13)) <= g_170[1][1][3]) > 0x10A6L))), 2)) & g_88[0].f0.f0), 250UL)) != g_88[0].f0.f1))
    { 
        int32_t l_277 = 2L;
        int64_t l_305 = 8L;
        int64_t l_317[5] = {0L,0L,0L,0L,0L};
        int32_t l_318 = 1L;
        int32_t l_319 = 0L;
        int32_t l_320 = 1L;
        int32_t l_321 = 0x17CAF55BL;
        int16_t l_323 = 0x8B78L;
        uint8_t l_324[5] = {0xFBL,0xFBL,0xFBL,0xFBL,0xFBL};
        int32_t l_348 = 1L;
        int32_t l_349[1][5] = {{(-4L),(-4L),(-4L),(-4L),(-4L)}};
        int i, j;
        g_87 = (safe_rshift_func_uint8_t_u_u(((((safe_sub_func_int8_t_s_s((0x302F4F0B71648138LL && (l_206 , 0x3B8C2FFF6BB7E753LL)), 6UL)) >= 0xCEDDL) && l_277) , l_229[3][0]), g_78[0][3]));
        for (g_183 = 2; (g_183 >= 0); g_183 -= 1)
        { 
            int32_t l_296[2][5][3] = {{{1L,0x70AAFF5BL,1L},{0x34E1C527L,0xC55F3C6FL,0xC55F3C6FL},{0xC4F3B56EL,0x70AAFF5BL,0xC4F3B56EL},{0x34E1C527L,0x34E1C527L,0xC55F3C6FL},{1L,0x70AAFF5BL,1L}},{{0x34E1C527L,0xC55F3C6FL,0xC55F3C6FL},{0xC4F3B56EL,0x70AAFF5BL,0xC4F3B56EL},{0x34E1C527L,0x34E1C527L,0xC55F3C6FL},{1L,0x70AAFF5BL,1L},{0x34E1C527L,0xC55F3C6FL,0xC55F3C6FL}}};
            int i, j, k;
            for (l_217 = 0; (l_217 <= 1); l_217 += 1)
            { 
                int i;
                return g_2[g_183];
            }
            if ((g_223[3].f0 ^ (safe_lshift_func_uint16_t_u_u((safe_lshift_func_int8_t_s_u(((func_10((safe_div_func_int32_t_s_s((g_2[g_183] &= g_18.f1), 0x9B0128B7L)), ((safe_sub_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_u((safe_mul_func_int16_t_s_s(g_78[2][2], g_60)), g_18.f0)), g_105)) == l_290), g_167, g_18, l_290) , g_18.f1) && 2L), 1)), 7))))
            { 
                uint8_t l_297 = 0x68L;
                int32_t l_304 = 7L;
                l_296[1][3][2] = (g_2[g_183] ^= (((safe_unary_minus_func_int32_t_s(g_88[0].f0.f1)) <= (g_103 != (safe_lshift_func_uint16_t_u_u((safe_mul_func_int16_t_s_s(g_65, 65535UL)), g_56)))) | 1UL));
                g_87 = (l_297 > ((safe_rshift_func_uint16_t_u_s((l_304 = (0x23L == (((safe_mod_func_uint64_t_u_u((g_18 , (safe_sub_func_uint64_t_u_u((g_2[g_183] ^ 0xE18AC25AD5DDD99CLL), 0xEED427E3807DBFFBLL))), 0xF3B66BF3DB485D11LL)) != l_297) < g_29[0][0]))), g_223[3].f0)) > l_305));
            }
            else
            { 
                int64_t l_316 = 0xDC9E83989482EB33LL;
                int32_t l_322[4][4][1] = {{{0L},{(-1L)},{0xAB4845D3L},{(-1L)}},{{0L},{(-1L)},{0xAB4845D3L},{(-1L)}},{{0L},{(-1L)},{0xAB4845D3L},{(-1L)}},{{0L},{(-1L)},{0xAB4845D3L},{(-1L)}}};
                int i, j, k;
                l_317[2] = ((safe_lshift_func_int8_t_s_s(((safe_mod_func_uint8_t_u_u(253UL, g_105)) == (safe_mod_func_uint32_t_u_u((((safe_add_func_int64_t_s_s((safe_rshift_func_int16_t_s_s(g_29[0][1], 4)), 6UL)) && l_316) < l_206), g_29[0][0]))), g_29[0][0])) , g_65);
                ++l_324[0];
                if (g_105)
                    break;
            }
            for (l_207 = 1; (l_207 >= 0); l_207 -= 1)
            { 
                uint8_t l_327 = 0UL;
                int16_t l_334 = (-8L);
                int64_t l_335 = 0x6C70E725F73CB7B0LL;
                int i, j;
                ++l_327;
                l_335 = (safe_sub_func_uint64_t_u_u((g_29[l_207][(g_183 + 1)] != ((0L < (safe_div_func_uint16_t_u_u(((0x829D7283L > ((g_29[l_207][(g_183 + 2)] , 0x0EDEL) != l_334)) >= 6L), g_78[1][2]))) < 1UL)), g_2[g_183]));
            }
        }
        for (g_87 = 5; (g_87 != (-27)); --g_87)
        { 
            int64_t l_339 = 0x99D1115B618ADBA3LL;
            int32_t l_341 = 0L;
            int32_t l_344 = (-1L);
            int32_t l_345 = 0x6E5DAF8DL;
            int32_t l_346 = 0x6698EB2AL;
            int32_t l_350 = 0x8A339BA4L;
            int32_t l_351 = 0x4FB89451L;
            int32_t l_352 = (-1L);
            uint16_t l_353 = 0xBB62L;
            uint8_t l_356 = 0xDFL;
            l_353--;
            if (l_356)
                continue;
        }
    }
    else
    { 
        int32_t l_357[2][3][5] = {{{0xC18B79ADL,(-7L),(-1L),5L,5L},{(-9L),0xC5FC14D1L,(-9L),0x568D0C91L,0xBF8D893DL},{7L,1L,5L,1L,7L}},{{(-9L),0x0DC02623L,0xC5FC14D1L,0xEC327342L,0xC5FC14D1L},{0xC18B79ADL,0xC18B79ADL,5L,7L,1L},{0x0DC02623L,(-9L),(-9L),0x0DC02623L,0xC5FC14D1L}}};
        int32_t l_358 = (-10L);
        uint16_t l_359 = 1UL;
        int i, j, k;
        ++l_359;
        for (g_56 = 0; (g_56 < 41); ++g_56)
        { 
            int32_t l_364 = 0x29EAA28DL;
            return l_364;
        }
    }
    if ((safe_rshift_func_uint16_t_u_s((g_105 = (g_88[0] , l_367)), (((l_229[4][0] && (((l_342 = (l_367 ^ (-1L))) < l_217) & g_2[2])) , (-1L)) | 0x3EB7L))))
    { 
        int8_t l_370 = 0x9AL;
        g_183 ^= ((((safe_mul_func_uint8_t_u_u((((g_2[2] == (g_32[1].f0 != (g_60 || (g_18 , g_43)))) >= 0x02L) | 0x85L), 0x42L)) , l_290) & l_229[4][0]) > 1UL);
        g_2[1] &= l_370;
        g_2[0] &= (l_229[4][0] || g_60);
    }
    else
    { 
        int16_t l_374[2];
        int32_t l_383 = 1L;
        int i;
        for (i = 0; i < 2; i++)
            l_374[i] = (-1L);
        if (g_32[1].f2)
        { 
            if ((!(safe_mul_func_int16_t_s_s(g_170[1][2][2], g_2[2]))))
            { 
                l_374[0] = 5L;
            }
            else
            { 
                int8_t l_375[4][4] = {{(-1L),(-5L),(-1L),(-1L)},{(-5L),(-5L),0x81L,(-5L)},{(-5L),(-1L),(-1L),(-5L)},{(-1L),(-5L),(-1L),(-1L)}};
                int32_t l_380 = 0xBF8C482FL;
                int i, j;
                g_87 = (g_109 | l_375[2][1]);
                l_380 = (safe_lshift_func_uint8_t_u_u(l_374[0], (++g_167)));
            }
            g_183 = (g_32[1].f0 && (g_223[3].f0 = (g_88[0].f0.f0 = ((safe_rshift_func_uint8_t_u_s((l_343[0][3] ^= l_338), 3)) && 4294967295UL))));
        }
        else
        { 
            uint64_t l_384 = 0x5541E83EE87846DELL;
            struct S0 l_393 = {0x58150582L,4294967291UL,0xB6E5L,0x714B8421L};
            --l_384;
            for (l_342 = (-12); (l_342 == 19); l_342++)
            { 
                uint64_t l_390 = 18446744073709551615UL;
                int32_t l_392 = 1L;
                g_2[1] = g_78[0][0];
                g_183 &= ((!((l_390 = l_367) ^ g_88[0].f0.f1)) ^ (0x1BC2CC644FE44B92LL > (((g_391 = (-1L)) > g_18.f1) < l_392)));
            }
            l_394 = l_393;
        }
        g_87 = g_105;
    }
    return g_2[0];
}



static uint32_t  func_5(union U2  p_6, uint16_t  p_7, uint16_t  p_8, union U2  p_9)
{ 
    int64_t l_129 = 0xC2DCCA57987148A6LL;
    int32_t l_133[2][5] = {{0x58F72B24L,0x58F72B24L,(-9L),0x58F72B24L,0x58F72B24L},{6L,0x58F72B24L,6L,6L,0x58F72B24L}};
    int32_t l_136 = (-1L);
    int i, j;
    l_129 = g_103;
    g_87 = g_32[1].f2;
    if ((l_136 = (safe_mod_func_int32_t_s_s((l_133[0][2] |= (((!g_88[0].f0.f0) != 0x77F6B348L) >= p_6.f2)), ((safe_add_func_uint64_t_u_u(((p_9.f0 & g_32[1].f2) == 251UL), 18446744073709551610UL)) | g_108)))))
    { 
        uint32_t l_139 = 0x7E95C8E4L;
        g_87 = ((safe_sub_func_uint32_t_u_u((((4L >= l_139) == (safe_unary_minus_func_int8_t_s((p_9.f0 & (safe_div_func_int16_t_s_s((safe_rshift_func_uint16_t_u_s((safe_div_func_int8_t_s_s(l_133[0][2], 0xDCL)), 10)), 0xF0B9L)))))) , p_6.f0), (-6L))) & l_133[0][2]);
        return g_65;
    }
    else
    { 
        uint8_t l_155 = 255UL;
        int32_t l_165 = 0L;
        struct S0 l_182 = {0x8FC4EB74L,4294967290UL,0UL,0xE662131CL};
        for (g_87 = 3; (g_87 < (-4)); g_87 = safe_sub_func_uint64_t_u_u(g_87, 6))
        { 
            const uint32_t l_164 = 0x89FF3134L;
            int32_t l_166 = 8L;
            if (((l_165 ^= ((safe_mul_func_uint16_t_u_u((((safe_add_func_uint8_t_u_u((((safe_add_func_uint32_t_u_u(4294967287UL, l_155)) == (safe_div_func_uint8_t_u_u((g_109 = (safe_rshift_func_uint8_t_u_s((safe_add_func_uint64_t_u_u((safe_mod_func_int64_t_s_s(l_155, 0x254B497D78ABA538LL)), p_9.f2)), 6))), 0xF2L))) ^ l_164), 1UL)) < 0x04L) >= 0x2DL), 0xB8E7L)) , l_155)) != 0xA89CL))
            { 
                ++g_167;
            }
            else
            { 
                struct S1 l_175[5][3] = {{{0x183FCF36L,6L,255UL,{0x8FDCBF5BL,1UL,1UL,6UL},4294967289UL},{0UL,0x4B7FDB359306392ALL,0x77L,{1UL,0UL,0xE2BBL,1UL},0UL},{0UL,0x4B7FDB359306392ALL,0x77L,{1UL,0UL,0xE2BBL,1UL},0UL}},{{0UL,0x4B7FDB359306392ALL,0x77L,{1UL,0UL,0xE2BBL,1UL},0UL},{0UL,0x2B83AE85CDDA5586LL,0x20L,{4294967287UL,0x4600C221L,0x3E6AL,0x7C107395L},0x27B4488DL},{18446744073709551615UL,0L,0x1FL,{0x4F793AD1L,0xC59717F0L,0UL,0x119F7A43L},0x6262B8E9L}},{{0x183FCF36L,6L,255UL,{0x8FDCBF5BL,1UL,1UL,6UL},4294967289UL},{0UL,0x2B83AE85CDDA5586LL,0x20L,{4294967287UL,0x4600C221L,0x3E6AL,0x7C107395L},0x27B4488DL},{0x183FCF36L,6L,255UL,{0x8FDCBF5BL,1UL,1UL,6UL},4294967289UL}},{{18446744073709551615UL,1L,0x98L,{0x51A3F53AL,0xD6AE4A76L,0xE6F5L,0x32C323CAL},4294967295UL},{0x183FCF36L,6L,255UL,{0x8FDCBF5BL,1UL,1UL,6UL},4294967289UL},{0UL,0x2B83AE85CDDA5586LL,0x20L,{4294967287UL,0x4600C221L,0x3E6AL,0x7C107395L},0x27B4488DL}},{{0UL,0x4B7FDB359306392ALL,0x77L,{1UL,0UL,0xE2BBL,1UL},0UL},{0UL,0x4B7FDB359306392ALL,0x77L,{1UL,0UL,0xE2BBL,1UL},0UL},{0x183FCF36L,6L,255UL,{0x8FDCBF5BL,1UL,1UL,6UL},4294967289UL}}};
                int i, j;
                --g_170[1][1][3];
                g_181 &= (g_180 = ((safe_add_func_uint8_t_u_u((l_175[3][2] , ((safe_sub_func_uint32_t_u_u(((g_88[0].f0.f1 <= (0x6AL > (safe_div_func_int32_t_s_s(1L, p_8)))) < p_8), l_133[0][2])) || l_165)), 4UL)) != g_78[2][1]));
                return g_16;
            }
        }
        g_88[0].f0 = l_182;
        g_87 = p_9.f2;
    }
    return p_9.f0;
}



static union U2  func_10(const uint16_t  p_11, int16_t  p_12, int32_t  p_13, union U3  p_14, int16_t  p_15)
{ 
    int8_t l_21[1][3][3] = {{{(-10L),1L,1L},{(-10L),1L,1L},{(-10L),1L,1L}}};
    int32_t l_25 = 0L;
    union U4 l_35 = {0x0266D991L};
    struct S1 l_41 = {0x21ADF561L,0x6604C38DB075ABA8LL,255UL,{4294967294UL,0x09E00C25L,0x375BL,0UL},1UL};
    int32_t l_98[5];
    const int16_t l_124 = 0x4A04L;
    union U2 l_128 = {0x32CE05B3D2223408LL};
    int i, j, k;
    for (i = 0; i < 5; i++)
        l_98[i] = 0L;
    for (g_18.f1 = 0; (g_18.f1 == 11); g_18.f1++)
    { 
        uint32_t l_26 = 0x31C0A9C5L;
        for (p_12 = 0; (p_12 >= 0); p_12 -= 1)
        { 
            int16_t l_23 = 0L;
            int32_t l_24 = 0x3B26D5D6L;
            for (p_13 = 0; (p_13 <= 0); p_13 += 1)
            { 
                int32_t l_22 = (-7L);
                l_22 = 0L;
            }
            l_23 = 0xBFCC013CL;
            --l_26;
            for (l_23 = 0; (l_23 <= 0); l_23 += 1)
            { 
                g_29[0][0]++;
                l_25 = (-3L);
            }
        }
        return g_32[1];
    }
    if (func_33(l_35))
    { 
        uint64_t l_42 = 0x23E821D2A6A8E49ELL;
        g_43 &= (((!(((g_2[2] & 1L) <= (((((p_11 , ((safe_sub_func_uint64_t_u_u((safe_add_func_int32_t_s_s((((0xE8B7L > 0UL) , l_35.f0) & 1L), 1L)), 0L)) <= p_14.f1)) , l_41) , g_32[1].f0) != l_41.f3.f1) < g_32[1].f0)) > g_2[1])) && g_16) || l_42);
    }
    else
    { 
        uint32_t l_46 = 0x0280E44EL;
        struct S0 l_68 = {4294967289UL,7UL,0x7B09L,0x197C8249L};
        int32_t l_84 = (-9L);
        union U4 l_85[4] = {{0UL},{0UL},{0UL},{0UL}};
        int32_t l_100 = 0xA0D6399BL;
        int32_t l_101 = 3L;
        int32_t l_102[4][4] = {{0xF846CE4CL,(-5L),0x45EC307DL,0x45EC307DL},{0xF15219C0L,0xF15219C0L,0xF846CE4CL,0x45EC307DL},{7L,(-5L),7L,0xF846CE4CL},{7L,0xF846CE4CL,0xF846CE4CL,7L}};
        int i, j;
        if ((0x1BDA2DD44351D5E8LL | 3L))
        { 
            uint32_t l_47 = 0x8A80AA4BL;
            int32_t l_61 = 0x6C5D8998L;
            struct S0 l_67 = {4294967295UL,0xF67D69BDL,0xBFBEL,0x31782E4DL};
            int32_t l_86 = 0xFF20F69DL;
            union U3 l_91 = {18446744073709551607UL};
            l_46 &= (safe_add_func_int8_t_s_s(p_12, g_29[0][0]));
            if (l_41.f2)
            { 
                const uint8_t l_59 = 254UL;
                union U4 l_66 = {4294967295UL};
                l_47++;
                g_65 = ((((0xF28FL ^ (safe_lshift_func_int8_t_s_u(((safe_rshift_func_uint16_t_u_s(((safe_mul_func_uint16_t_u_u((--g_56), l_59)) , (++g_62)), l_46)) ^ 0UL), l_47))) , l_46) ^ l_59) & 0x171C63CCL);
                l_68 = (l_66 , l_67);
            }
            else
            { 
                g_87 = (safe_add_func_uint64_t_u_u((safe_div_func_int64_t_s_s(((safe_mod_func_uint8_t_u_u((l_86 = ((((safe_rshift_func_uint8_t_u_u((g_32[1] , (g_78[1][2] = (safe_unary_minus_func_uint32_t_u(l_68.f2)))), 5)) > (l_61 = ((((safe_mod_func_int8_t_s_s((safe_mul_func_int8_t_s_s(((((((((((!l_84) > (l_85[0] , 0x90L)) > 0x389381DCL) <= g_2[2]) ^ 0xCBAAD56265239069LL) == p_15) ^ p_12) <= p_13) != p_15) == l_84), g_32[1].f2)), 0x93L)) != g_62) , 0L) == 7UL))) , l_41.f1) ^ 0x48B0A975L)), 255UL)) == 18446744073709551615UL), 0x1FEAE78DF1EF1A95LL)), p_15));
                l_84 = (g_88[0] , (((safe_div_func_int16_t_s_s(p_15, (l_91 , ((safe_mod_func_int8_t_s_s(((((safe_mod_func_uint8_t_u_u((((((safe_rshift_func_int16_t_s_u(g_16, 7)) == g_60) <= 0x9AL) >= p_15) ^ 0x946A6819L), 0x9CL)) | p_14.f0) ^ g_88[0].f0.f2) ^ 0L), p_12)) | 2UL)))) < l_67.f1) != g_56));
            }
        }
        else
        { 
            int64_t l_99 = 1L;
            int32_t l_104[3];
            int16_t l_123 = 0xC32CL;
            struct S0 l_125 = {1UL,0x1F0273B9L,65535UL,18446744073709551615UL};
            int i;
            for (i = 0; i < 3; i++)
                l_104[i] = (-1L);
            l_25 = g_29[1][3];
            g_105--;
            if (p_14.f1)
            { 
                int16_t l_112 = 4L;
                --g_109;
                l_102[3][1] ^= ((l_112 , ((g_105 & ((safe_add_func_int16_t_s_s(l_104[1], (safe_rshift_func_int16_t_s_u((safe_mod_func_uint16_t_u_u((safe_div_func_int8_t_s_s(((safe_mod_func_int32_t_s_s(((g_109 < 0xBA5F0EDFL) < 4294967292UL), g_78[1][2])) ^ l_123), 0x5FL)), 1L)), g_2[0])))) || l_124)) | p_15)) ^ p_14.f0);
                g_87 = p_14.f1;
            }
            else
            { 
                g_88[0].f0 = l_125;
                l_104[1] ^= (((g_18 , 0x80L) && 250UL) > ((safe_add_func_uint64_t_u_u(18446744073709551607UL, g_78[1][2])) , 7L));
            }
        }
    }
    return l_128;
}



static int32_t  func_33(union U4  p_34)
{ 
    return p_34.f0;
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
        transparent_crc(g_2[i], "g_2[i]", print_hash_value);

    }
    transparent_crc(g_16, "g_16", print_hash_value);
    transparent_crc(g_18.f0, "g_18.f0", print_hash_value);
    transparent_crc(g_18.f1, "g_18.f1", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 5; j++)
        {
            transparent_crc(g_29[i][j], "g_29[i][j]", print_hash_value);

        }
    }
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_32[i].f0, "g_32[i].f0", print_hash_value);
        transparent_crc(g_32[i].f2, "g_32[i].f2", print_hash_value);

    }
    transparent_crc(g_43, "g_43", print_hash_value);
    transparent_crc(g_56, "g_56", print_hash_value);
    transparent_crc(g_60, "g_60", print_hash_value);
    transparent_crc(g_62, "g_62", print_hash_value);
    transparent_crc(g_65, "g_65", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 5; j++)
        {
            transparent_crc(g_78[i][j], "g_78[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_87, "g_87", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_88[i].f0.f0, "g_88[i].f0.f0", print_hash_value);
        transparent_crc(g_88[i].f0.f1, "g_88[i].f0.f1", print_hash_value);
        transparent_crc(g_88[i].f0.f2, "g_88[i].f0.f2", print_hash_value);
        transparent_crc(g_88[i].f0.f3, "g_88[i].f0.f3", print_hash_value);

    }
    transparent_crc(g_103, "g_103", print_hash_value);
    transparent_crc(g_105, "g_105", print_hash_value);
    transparent_crc(g_108, "g_108", print_hash_value);
    transparent_crc(g_109, "g_109", print_hash_value);
    transparent_crc(g_167, "g_167", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 5; k++)
            {
                transparent_crc(g_170[i][j][k], "g_170[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_180, "g_180", print_hash_value);
    transparent_crc(g_181, "g_181", print_hash_value);
    transparent_crc(g_183, "g_183", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_223[i].f0, "g_223[i].f0", print_hash_value);

    }
    transparent_crc(g_347, "g_347", print_hash_value);
    transparent_crc(g_391, "g_391", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
