// SPDX-License-Identifier: MIT
// cctest_csmith_1128bf0a.c --- cctest case csmith_1128bf0a (csmith seed 287883018)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x3bef0776 */
/* @exp_ticks 0x3567 */

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

// Options:   -s 287883018 -o /tmp/csmith_gen_bn1lep3w/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


#pragma pack(push)
#pragma pack(1)
struct S0 {
   uint16_t  f0;
   const int32_t  f1;
   int64_t  f2;
   uint32_t  f3;
   uint32_t  f4;
   int32_t  f5;
};
#pragma pack(pop)

struct S1 {
   uint32_t  f0;
   uint16_t  f1;
   int16_t  f2;
   int64_t  f3;
   uint8_t  f4;
};

union U2 {
   const uint32_t  f0;
   const int16_t  f1;
};

union U3 {
   int32_t  f0;
   struct S1  f1;
   int32_t  f2;
};

union U4 {
   int64_t  f0;
   int32_t  f1;
   int32_t  f2;
   int8_t  f3;
};

union U5 {
   const uint32_t  f0;
   int16_t  f1;
};

union U6 {
   int32_t  f0;
};

union U7 {
   uint64_t  f0;
   uint32_t  f1;
};

union U8 {
   int16_t  f0;
   uint16_t  f1;
   const struct S0  f2;
   int32_t  f3;
};


static int32_t g_2 = 0xD3C15D0DL;
static int32_t g_5 = 0x525D2D91L;
static uint8_t g_9 = 0x7EL;
static int32_t g_37 = (-6L);
static int32_t g_62 = 0x61175C87L;
static struct S1 g_63 = {0UL,0UL,0x6512L,0L,0x9BL};
static int16_t g_85[3][1] = {{0x4EB7L},{0x4EB7L},{0x4EB7L}};
static union U6 g_102 = {0L};
static union U3 g_106 = {-1L};
static uint16_t g_112 = 0x0630L;
static int8_t g_147 = 8L;
static uint32_t g_148[1] = {4294967295UL};
static int8_t g_154 = 0x71L;
static uint8_t g_160 = 0UL;
static uint64_t g_164 = 0x54ECD3A2B2265A2DLL;
static union U3 g_179 = {-6L};
static const union U5 g_183 = {0x6D92668AL};
static int16_t g_191 = (-1L);
static union U8 g_211 = {0xD205L};



static union U6  func_1(void);
static struct S1  func_10(int8_t  p_11, uint32_t  p_12, int32_t  p_13, union U5  p_14, union U6  p_15);
static uint16_t  func_16(int64_t  p_17, union U8  p_18, uint32_t  p_19, int32_t  p_20, union U6  p_21);
static int32_t  func_29(union U5  p_30);




static union U6  func_1(void)
{ 
    uint16_t l_24 = 0x7778L;
    union U5 l_31 = {2UL};
    int32_t l_163[4];
    union U8 l_165[1][5] = {{{0x9200L},{0x9200L},{0x9200L},{0x9200L},{0x9200L}}};
    struct S1 l_175 = {0x783C7BDAL,1UL,0x544DL,0x11EF485BC65A43AFLL,255UL};
    union U4 l_178 = {-1L};
    union U7 l_187 = {18446744073709551606UL};
    union U6 l_240 = {0x24154FC8L};
    int i, j;
    for (i = 0; i < 4; i++)
        l_163[i] = 7L;
    for (g_2 = 0; (g_2 > 3); g_2 = safe_add_func_int32_t_s_s(g_2, 5))
    { 
        uint64_t l_8[4][2][3] = {{{0xD06BDE64F6CBCB1ALL,0x16501874DA862840LL,0xD06BDE64F6CBCB1ALL},{18446744073709551606UL,0x08FB0B44CF592758LL,18446744073709551606UL}},{{0xD06BDE64F6CBCB1ALL,0x16501874DA862840LL,0xD06BDE64F6CBCB1ALL},{18446744073709551606UL,0x08FB0B44CF592758LL,18446744073709551606UL}},{{0xD06BDE64F6CBCB1ALL,0x16501874DA862840LL,0xD06BDE64F6CBCB1ALL},{18446744073709551606UL,0x08FB0B44CF592758LL,18446744073709551606UL}},{{0xD06BDE64F6CBCB1ALL,0x16501874DA862840LL,0xD06BDE64F6CBCB1ALL},{18446744073709551606UL,0x08FB0B44CF592758LL,18446744073709551606UL}}};
        uint32_t l_166[3];
        int8_t l_167 = 0x1DL;
        union U6 l_168 = {-1L};
        struct S0 l_186 = {0x2DF3L,1L,0L,0xB5E54AC5L,0xBAF3FA6EL,-1L};
        struct S1 l_212[4][5][2] = {{{{0x5388961EL,4UL,-5L,0x426486C133A8E694LL,0x7BL},{0xE8A264C3L,65530UL,0x4F1EL,0x21537E41DE62A754LL,7UL}},{{0x5388961EL,4UL,-5L,0x426486C133A8E694LL,0x7BL},{4294967292UL,0x7027L,-5L,1L,6UL}},{{0xB0A3500CL,3UL,1L,0x62BAD161D8D22D33LL,0xA9L},{0xB0A3500CL,3UL,1L,0x62BAD161D8D22D33LL,0xA9L}},{{4294967292UL,0x7027L,-5L,1L,6UL},{0x5388961EL,4UL,-5L,0x426486C133A8E694LL,0x7BL}},{{0xE8A264C3L,65530UL,0x4F1EL,0x21537E41DE62A754LL,7UL},{0x5388961EL,4UL,-5L,0x426486C133A8E694LL,0x7BL}}},{{{4294967292UL,0x7027L,-5L,1L,6UL},{0xB0A3500CL,3UL,1L,0x62BAD161D8D22D33LL,0xA9L}},{{0xB0A3500CL,3UL,1L,0x62BAD161D8D22D33LL,0xA9L},{0xE8A264C3L,65530UL,0x4F1EL,0x21537E41DE62A754LL,7UL}},{{4294967292UL,0x7027L,-5L,1L,6UL},{0UL,65526UL,0x4445L,0xDC8AFE7F47FA05C2LL,0x4BL}},{{4294967292UL,0x7027L,-5L,1L,6UL},{0xE8A264C3L,65530UL,0x4F1EL,0x21537E41DE62A754LL,7UL}},{{0xAF5E34ACL,65535UL,0x702DL,0x8A0D4A109FDD9FC7LL,0x7FL},{0xAF5E34ACL,65535UL,0x702DL,0x8A0D4A109FDD9FC7LL,0x7FL}}},{{{0xE8A264C3L,65530UL,0x4F1EL,0x21537E41DE62A754LL,7UL},{4294967292UL,0x7027L,-5L,1L,6UL}},{{0UL,65526UL,0x4445L,0xDC8AFE7F47FA05C2LL,0x4BL},{4294967292UL,0x7027L,-5L,1L,6UL}},{{0xE8A264C3L,65530UL,0x4F1EL,0x21537E41DE62A754LL,7UL},{0xAF5E34ACL,65535UL,0x702DL,0x8A0D4A109FDD9FC7LL,0x7FL}},{{0xAF5E34ACL,65535UL,0x702DL,0x8A0D4A109FDD9FC7LL,0x7FL},{0xE8A264C3L,65530UL,0x4F1EL,0x21537E41DE62A754LL,7UL}},{{4294967292UL,0x7027L,-5L,1L,6UL},{0UL,65526UL,0x4445L,0xDC8AFE7F47FA05C2LL,0x4BL}}},{{{4294967292UL,0x7027L,-5L,1L,6UL},{0xE8A264C3L,65530UL,0x4F1EL,0x21537E41DE62A754LL,7UL}},{{0xAF5E34ACL,65535UL,0x702DL,0x8A0D4A109FDD9FC7LL,0x7FL},{0xAF5E34ACL,65535UL,0x702DL,0x8A0D4A109FDD9FC7LL,0x7FL}},{{0xE8A264C3L,65530UL,0x4F1EL,0x21537E41DE62A754LL,7UL},{4294967292UL,0x7027L,-5L,1L,6UL}},{{0UL,65526UL,0x4445L,0xDC8AFE7F47FA05C2LL,0x4BL},{4294967292UL,0x7027L,-5L,1L,6UL}},{{0xE8A264C3L,65530UL,0x4F1EL,0x21537E41DE62A754LL,7UL},{0xAF5E34ACL,65535UL,0x702DL,0x8A0D4A109FDD9FC7LL,0x7FL}}}};
        int32_t l_232 = 0xBBE2DA87L;
        int i, j, k;
        for (i = 0; i < 3; i++)
            l_166[i] = 0xE82FDDFCL;
        for (g_5 = 0; (g_5 >= (-6)); g_5--)
        { 
            g_9 |= l_8[3][0][2];
        }
        l_175 = func_10((func_16(((safe_mul_func_int8_t_s_s(l_24, (safe_div_func_int64_t_s_s(g_9, (g_164 = (((safe_mod_func_int32_t_s_s((l_163[1] |= func_29(l_31)), 4294967295UL)) > 0UL) || 4294967295UL)))))) & l_24), l_165[0][4], g_2, l_166[1], g_102) < l_166[2]), g_2, l_167, l_31, l_168);
        if ((g_5 = ((safe_lshift_func_uint8_t_u_s(((l_178 , (g_179 , g_63.f3)) != 0x13C7L), l_166[1])) <= 6L)))
        { 
            int64_t l_182 = 1L;
            int32_t l_190 = 0x68C17846L;
            g_37 &= (g_5 == (g_148[0] > (safe_mul_func_int8_t_s_s(l_182, (((((g_183 , l_8[1][1][1]) != 0x00L) <= 0x0D77L) <= g_179.f2) && 0x552DC662L)))));
            g_191 &= (g_106.f0 , ((((safe_sub_func_uint64_t_u_u(((l_186 , (l_187 , (safe_sub_func_int16_t_s_s(g_179.f2, 0xDE4CL)))) , g_183.f1), g_85[1][0])) || l_190) >= l_190) & g_106.f0));
        }
        else
        { 
            const uint8_t l_209 = 0x9BL;
            int32_t l_210 = 0x0242F93AL;
            uint8_t l_230 = 0x8AL;
            int64_t l_231 = 3L;
            l_175 = ((((safe_mod_func_uint64_t_u_u((g_164++), (((((g_160 ^= ((((safe_lshift_func_int16_t_s_u(1L, 6)) < (safe_div_func_int32_t_s_s((safe_mul_func_uint16_t_u_u((((safe_unary_minus_func_uint32_t_u((l_210 &= (safe_rshift_func_int16_t_s_u(((safe_sub_func_uint64_t_u_u(((safe_div_func_int32_t_s_s(g_2, l_209)) != 0x48CAB240L), g_62)) && g_9), 15))))) == l_175.f1) & g_183.f1), 0L)), 0xFC644E58L))) >= g_5) || g_179.f0)) <= l_167) <= g_2) != g_2) ^ g_85[0][0]))) >= 0x20L) , g_211) , l_212[2][3][1]);
            l_231 = ((safe_add_func_uint8_t_u_u((safe_lshift_func_int16_t_s_s((safe_lshift_func_int8_t_s_s((safe_rshift_func_int16_t_s_u((safe_mul_func_int8_t_s_s((safe_unary_minus_func_uint64_t_u((safe_mul_func_int16_t_s_s(l_209, (safe_mod_func_int32_t_s_s((l_168 , (g_37 |= (l_186 , ((safe_mod_func_uint16_t_u_u(g_106.f0, l_210)) < 4294967287UL)))), 0x982E622AL)))))), l_230)), 11)), g_9)), 9)), g_63.f2)) , 1L);
            for (g_63.f3 = 0; (g_63.f3 >= 0); g_63.f3 -= 1)
            { 
                uint16_t l_233[4] = {0x4334L,0x4334L,0x4334L,0x4334L};
                int i;
                --l_233[3];
            }
        }
    }
    l_175 = g_63;
    l_178.f1 ^= (safe_mul_func_uint16_t_u_u((l_165[0][4].f0 >= (safe_sub_func_uint32_t_u_u((g_179.f0 && 0xBC8CL), (g_102.f0 >= l_165[0][4].f1)))), 0xB9C4L));
    return l_240;
}



static struct S1  func_10(int8_t  p_11, uint32_t  p_12, int32_t  p_13, union U5  p_14, union U6  p_15)
{ 
    uint8_t l_169 = 0xB1L;
    int32_t l_173[3][3] = {{0xEAA69B51L,0xEAA69B51L,0xEAA69B51L},{(-1L),(-1L),(-1L)},{0xEAA69B51L,0xEAA69B51L,0xEAA69B51L}};
    struct S1 l_174 = {0x434E9FA9L,3UL,0x6EB2L,0x118C22C6A0115AE5LL,0x16L};
    int i, j;
    --l_169;
    if (l_169)
        goto lbl_172;
lbl_172:
    for (g_147 = 0; g_147 < 3; g_147 += 1)
    {
        for (g_9 = 0; g_9 < 1; g_9 += 1)
        {
            g_85[g_147][g_9] = 0x4AF8L;
        }
    }
    l_173[1][2] = (0xA5B0L && 0UL);
    return l_174;
}



static uint16_t  func_16(int64_t  p_17, union U8  p_18, uint32_t  p_19, int32_t  p_20, union U6  p_21)
{ 
    return g_106.f0;
}



static int32_t  func_29(union U5  p_30)
{ 
    uint64_t l_66 = 9UL;
    struct S1 l_69 = {0xD90BCC9DL,0x78A4L,0L,0xE0DAEE255298A7B9LL,0UL};
    int32_t l_127 = 0L;
    union U2 l_143 = {4294967290UL};
    int32_t l_146 = 0x9C827B28L;
    union U3 l_151 = {6L};
    int32_t l_157 = 0L;
    int32_t l_158 = 0xF2B8E86FL;
    int32_t l_159 = 3L;
    for (p_30.f1 = 0; (p_30.f1 <= (-13)); --p_30.f1)
    { 
        int16_t l_60 = 0xE9D3L;
        int32_t l_65 = 3L;
        int32_t l_96[3];
        uint16_t l_135 = 0x44D6L;
        int i;
        for (i = 0; i < 3; i++)
            l_96[i] = 9L;
        for (g_5 = (-2); (g_5 == (-29)); g_5 = safe_sub_func_int16_t_s_s(g_5, 8))
        { 
            uint32_t l_36[3];
            int32_t l_38 = 0xA08DEB25L;
            int i;
            for (i = 0; i < 3; i++)
                l_36[i] = 0x8C5CECCEL;
            if (l_36[2])
                break;
            for (g_37 = 2; (g_37 >= 0); g_37 -= 1)
            { 
                int32_t l_61 = 5L;
                int i;
                l_38 &= l_36[g_37];
                g_62 = (l_61 = (safe_sub_func_int8_t_s_s((-1L), (safe_add_func_int16_t_s_s((!(l_36[g_37] = (safe_mul_func_int8_t_s_s(((safe_add_func_uint64_t_u_u((safe_add_func_uint32_t_u_u((safe_mul_func_int16_t_s_s(((g_37 & (g_37 && ((safe_mod_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_u((((safe_mul_func_int16_t_s_s((safe_add_func_uint16_t_u_u(g_37, 0x28B2L)), p_30.f1)) == l_36[g_37]) && 4UL), 14)), p_30.f1)) < g_9))) != 0xC5L), p_30.f1)), l_36[g_37])), l_60)) != p_30.f1), 255UL)))), p_30.f1)))));
            }
            for (l_60 = 0; (l_60 <= 2); l_60 += 1)
            { 
                struct S1 l_64 = {4294967294UL,65531UL,-8L,0xC58AC374484A8630LL,0x4CL};
                union U4 l_84 = {0x9B2A33634C778C53LL};
                int i;
                g_63 = (l_64 = g_63);
                l_66--;
                l_84.f1 = ((l_69 , ((safe_sub_func_int8_t_s_s((((safe_mul_func_int16_t_s_s((safe_rshift_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_s((safe_sub_func_int64_t_s_s(((((safe_mul_func_uint8_t_u_u((((safe_add_func_uint32_t_u_u(((l_36[l_60] = l_36[l_60]) ^ 4UL), ((g_62 | p_30.f1) ^ (-7L)))) ^ p_30.f1) || 0x720237AEE56C84D1LL), 251UL)) | p_30.f1) > g_63.f0) || g_9), l_38)), l_38)), g_62)), g_62)) >= 2L) && p_30.f1), 0x1AL)) , l_84)) , (-1L));
            }
        }
        for (g_37 = 0; (g_37 <= 0); g_37 += 1)
        { 
            uint16_t l_107 = 1UL;
            union U8 l_111 = {-1L};
            int i, j;
            for (g_63.f1 = 0; (g_63.f1 <= 0); g_63.f1 += 1)
            { 
                uint32_t l_97 = 4294967295UL;
                int32_t l_105 = (-10L);
                int32_t l_108 = 1L;
                int i, j;
                l_108 = (safe_lshift_func_uint16_t_u_s((safe_mod_func_uint64_t_u_u((safe_mul_func_uint16_t_u_u(((safe_div_func_int8_t_s_s(((((safe_add_func_uint8_t_u_u(((l_97--) || ((safe_sub_func_uint64_t_u_u(g_85[g_37][g_37], ((0xD10AL | (g_102 , (l_105 = ((safe_add_func_int8_t_s_s(g_85[g_37][g_63.f1], 255UL)) != g_85[(g_63.f1 + 1)][g_37])))) != p_30.f1))) ^ (-10L))), p_30.f1)) , g_106) , l_107) , l_65), g_5)) <= p_30.f1), 0UL)), 18446744073709551615UL)), l_66));
                l_105 ^= (((((l_108 = (safe_add_func_uint64_t_u_u((l_111 , (g_112 |= g_63.f4)), g_85[1][0]))) != (safe_rshift_func_uint16_t_u_s(((safe_rshift_func_int8_t_s_s((safe_add_func_int32_t_s_s((g_5 = l_96[1]), g_106.f0)), 3)) , p_30.f1), 9))) , p_30.f1) && 0xE7E41F4AL) , 8L);
            }
            l_65 ^= ((safe_add_func_int16_t_s_s((g_85[g_37][g_37] = (safe_mul_func_int16_t_s_s(((safe_mod_func_uint16_t_u_u((((safe_mul_func_uint8_t_u_u(g_85[g_37][g_37], 1L)) || (l_107 < (l_127 = 0x0A06L))) < 1UL), g_9)) <= l_66), l_96[1]))), 0xF251L)) > 0L);
        }
        for (l_69.f4 = 0; (l_69.f4 <= 2); l_69.f4 += 1)
        { 
            const union U8 l_134[2][4][3] = {{{{9L},{9L},{9L}},{{0x61DEL},{0x61DEL},{0x61DEL}},{{9L},{9L},{9L}},{{0x61DEL},{0x61DEL},{0x61DEL}}},{{{9L},{9L},{9L}},{{0x61DEL},{0x61DEL},{0x61DEL}},{{9L},{9L},{9L}},{{0x61DEL},{0x61DEL},{0x61DEL}}}};
            int i, j, k;
            if ((safe_div_func_int8_t_s_s(((l_96[l_69.f4] = 1L) >= 1UL), (safe_div_func_int64_t_s_s(((safe_lshift_func_int8_t_s_u(((l_65 = (l_60 ^ ((l_134[1][2][1] , l_135) & g_63.f0))) ^ g_63.f4), p_30.f1)) >= l_134[1][2][1].f0), 0x53B50BCEF8620699LL)))))
            { 
                int8_t l_138 = 0x86L;
                int i;
                l_96[l_69.f4] = ((safe_div_func_int64_t_s_s(l_138, (safe_lshift_func_int8_t_s_s(((l_146 = (safe_div_func_int8_t_s_s((l_143 , ((((safe_mod_func_uint32_t_u_u((l_127 = (p_30.f1 & 0xA0L)), g_9)) > l_143.f0) & g_63.f3) != 0L)), p_30.f1))) | p_30.f1), 0)))) || p_30.f1);
            }
            else
            { 
                int i;
                g_148[0]--;
            }
        }
    }
    l_157 |= ((l_127 = (((((((l_151 , (safe_rshift_func_int16_t_s_u(0x5F05L, 15))) <= (g_154 = p_30.f1)) , (safe_mul_func_int8_t_s_s((l_146 = (-3L)), p_30.f1))) == 0xC7L) , 1UL) ^ l_69.f0) | l_143.f0)) != l_151.f2);
    --g_160;
    return p_30.f1;
}





int test_main(void)
{
    int i, j;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    transparent_crc(g_5, "g_5", print_hash_value);
    transparent_crc(g_9, "g_9", print_hash_value);
    transparent_crc(g_37, "g_37", print_hash_value);
    transparent_crc(g_62, "g_62", print_hash_value);
    transparent_crc(g_63.f0, "g_63.f0", print_hash_value);
    transparent_crc(g_63.f1, "g_63.f1", print_hash_value);
    transparent_crc(g_63.f2, "g_63.f2", print_hash_value);
    transparent_crc(g_63.f3, "g_63.f3", print_hash_value);
    transparent_crc(g_63.f4, "g_63.f4", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 1; j++)
        {
            transparent_crc(g_85[i][j], "g_85[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_102.f0, "g_102.f0", print_hash_value);
    transparent_crc(g_106.f0, "g_106.f0", print_hash_value);
    transparent_crc(g_106.f2, "g_106.f2", print_hash_value);
    transparent_crc(g_112, "g_112", print_hash_value);
    transparent_crc(g_147, "g_147", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_148[i], "g_148[i]", print_hash_value);

    }
    transparent_crc(g_154, "g_154", print_hash_value);
    transparent_crc(g_160, "g_160", print_hash_value);
    transparent_crc(g_164, "g_164", print_hash_value);
    transparent_crc(g_179.f0, "g_179.f0", print_hash_value);
    transparent_crc(g_179.f2, "g_179.f2", print_hash_value);
    transparent_crc(g_183.f0, "g_183.f0", print_hash_value);
    transparent_crc(g_183.f1, "g_183.f1", print_hash_value);
    transparent_crc(g_191, "g_191", print_hash_value);
    transparent_crc(g_211.f0, "g_211.f0", print_hash_value);
    transparent_crc(g_211.f1, "g_211.f1", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
