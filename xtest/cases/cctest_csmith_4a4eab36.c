// SPDX-License-Identifier: MIT
// cctest_csmith_4a4eab36.c --- cctest case csmith_4a4eab36 (csmith seed 1246669622)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x1a2250e0 */
/* @exp_ticks 0x6f9a4 */

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

// Options:   -s 1246669622 -o /tmp/csmith_gen_3r2i178m/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


#pragma pack(push)
#pragma pack(1)
struct S0 {
   const int32_t  f0;
   uint32_t  f1;
   const uint8_t  f2;
   const int8_t  f3;
};
#pragma pack(pop)

union U1 {
   uint8_t  f0;
   struct S0  f1;
   int64_t  f2;
   uint32_t  f3;
};

union U2 {
   const int64_t  f0;
   uint32_t  f1;
   struct S0  f2;
};

union U3 {
   uint32_t  f0;
   uint64_t  f1;
};


static int32_t g_8 = 0x3026D8D3L;
static int32_t g_14 = 0xC38EC326L;
static uint8_t g_34 = 0x3DL;
static int32_t g_111 = 5L;
static int32_t g_112 = 9L;
static uint8_t g_134 = 4UL;
static int32_t g_135 = 4L;
static union U2 g_146[1][3] = {{{1L},{1L},{1L}}};
static int8_t g_147 = 0xF9L;
static uint32_t g_148 = 0xA5298247L;
static union U3 g_180 = {0xF7125230L};
static int8_t g_184 = 0x44L;
static uint64_t g_185[3] = {0xBA53846911956455LL,0xBA53846911956455LL,0xBA53846911956455LL};
static int32_t g_186 = 0xA9903D9CL;



static int32_t  func_1(void);
static const uint32_t  func_6(const int16_t  p_7);
static uint16_t  func_27(int32_t  p_28, uint8_t  p_29);
static union U2  func_36(int64_t  p_37, uint8_t  p_38, union U2  p_39);




static int32_t  func_1(void)
{ 
    int8_t l_2 = (-1L);
    int32_t l_3 = 3L;
    l_2 ^= 0x91E29EA4L;
    l_3 = (0xFCL <= l_2);
    g_186 &= ((g_184 = (safe_sub_func_uint32_t_u_u(func_6((g_8 = l_3)), 0xDA6E296BL))) && (g_185[0] = (0xC0330D54037B03C3LL > l_3)));
    return g_148;
}



static const uint32_t  func_6(const int16_t  p_7)
{ 
    uint32_t l_11 = 1UL;
    int32_t l_17 = 0xC93CC254L;
    int32_t l_21[5];
    union U2 l_176 = {0xED5E1251B008363ALL};
    int i;
    for (i = 0; i < 5; i++)
        l_21[i] = 0x3493876AL;
    for (g_8 = 17; (g_8 >= (-19)); g_8 = safe_sub_func_int16_t_s_s(g_8, 5))
    { 
        l_11 = g_8;
        for (l_11 = (-25); (l_11 == 10); l_11 = safe_add_func_uint16_t_u_u(l_11, 2))
        { 
            uint32_t l_18 = 0x8EF068CDL;
            for (g_14 = 0; (g_14 < (-11)); g_14--)
            { 
                l_18--;
            }
        }
    }
    for (l_17 = 0; (l_17 <= 4); l_17 += 1)
    { 
        int32_t l_35 = 1L;
        const int16_t l_48 = 0xCAAFL;
        union U2 l_50 = {0xDFD7F7FFFF9752EELL};
        int i;
        for (g_14 = 0; (g_14 <= 4); g_14 += 1)
        { 
            uint32_t l_49 = 18446744073709551614UL;
            int32_t l_139 = (-9L);
            union U1 l_157[1] = {{0x9AL}};
            int i;
            for (g_8 = 1; (g_8 <= 4); g_8 += 1)
            { 
                int i;
                l_139 &= ((safe_mul_func_uint8_t_u_u(((safe_div_func_uint16_t_u_u((!func_27((safe_div_func_int16_t_s_s((((safe_lshift_func_uint16_t_u_u((l_35 = (g_34 = 65528UL)), (func_36((((safe_add_func_uint32_t_u_u((safe_mod_func_int8_t_s_s((safe_add_func_uint16_t_u_u(((safe_add_func_uint64_t_u_u((l_21[g_14] < (p_7 < (l_21[g_14] != l_48))), p_7)) == 0L), (-6L))), l_49)), 0x781CDFFAL)) ^ l_48) , p_7), l_48, l_50) , l_49))) | 0xC1355B56L) == p_7), (-9L))), p_7)), p_7)) , 248UL), l_49)) , g_8);
            }
            if (((safe_mod_func_uint64_t_u_u((safe_add_func_int16_t_s_s((safe_lshift_func_int16_t_s_s(((-8L) && (((((g_146[0][2] , (g_148++)) | ((((safe_rshift_func_int16_t_s_s((safe_add_func_uint16_t_u_u(((((g_34 = (safe_sub_func_int16_t_s_s((((((l_21[g_14] , l_157[0]) , p_7) , 8L) != p_7) || p_7), p_7))) >= 1UL) == p_7) <= g_112), l_49)), 14)) && l_157[0].f0) <= 0xF826L) >= l_11)) ^ l_17) < g_147) | 0L)), 1)), l_139)), 0xA8D4CD45573AC2B9LL)) <= g_8))
            { 
                int32_t l_175 = (-1L);
                int i;
                l_21[l_17] = (((safe_mod_func_int32_t_s_s((safe_rshift_func_int8_t_s_u((((func_36(p_7, (safe_lshift_func_uint8_t_u_u((((safe_rshift_func_uint16_t_u_s((safe_rshift_func_uint8_t_u_u((safe_lshift_func_uint16_t_u_s((safe_mod_func_int64_t_s_s((+(safe_add_func_uint16_t_u_u(g_135, (((l_50.f0 , (((l_21[l_17] |= 0L) && (-1L)) & g_112)) | g_34) ^ g_34)))), p_7)), l_175)), 4)), l_175)) || l_11) && p_7), 3)), l_176) , p_7) , g_134) , p_7), 3)), g_34)) <= l_17) || l_21[l_17]);
            }
            else
            { 
                const int32_t l_183 = 0x210D5BDEL;
                if (g_14)
                    break;
                if (p_7)
                    break;
                l_21[2] = ((0x36D37E95L > ((+((p_7 != (g_180 , ((safe_mod_func_int32_t_s_s((((0x7D0102AA92F95BF6LL != g_134) != l_183) != l_50.f0), g_111)) <= 0L))) , p_7)) & l_183)) != l_17);
            }
        }
        if (l_21[l_17])
            continue;
    }
    return g_146[0][2].f0;
}



static uint16_t  func_27(int32_t  p_28, uint8_t  p_29)
{ 
    const int32_t l_113 = 1L;
    uint8_t l_114[1];
    uint16_t l_137 = 65535UL;
    int32_t l_138[5] = {0L,0L,0L,0L,0L};
    int i;
    for (i = 0; i < 1; i++)
        l_114[i] = 0xE6L;
    for (g_34 = (-15); (g_34 > 15); g_34++)
    { 
        uint32_t l_108 = 0xEE8D80EEL;
        union U1 l_110 = {0x38L};
        uint8_t l_136 = 0xD8L;
        p_28 = (((safe_add_func_int32_t_s_s((safe_mod_func_int8_t_s_s(((safe_lshift_func_int8_t_s_s((safe_add_func_int8_t_s_s(((safe_mod_func_int8_t_s_s(p_28, ((((g_111 = (+((safe_sub_func_int32_t_s_s((l_108 && (!(l_110 , ((g_34 || 0xFD407823L) && p_28)))), p_28)) != 0x9ABEL))) < l_110.f0) != l_110.f0) && g_112))) >= 0x48B0L), 1L)), l_113)) && p_28), p_29)), 0xEAE78DF1L)) >= p_29) | 1L);
        for (g_112 = 0; (g_112 <= 0); g_112 += 1)
        { 
            int i;
            l_138[3] = ((((l_114[g_112] != (!(safe_lshift_func_int16_t_s_u((safe_sub_func_int16_t_s_s((safe_mod_func_int8_t_s_s((g_111 == (safe_div_func_uint64_t_u_u((((safe_rshift_func_int16_t_s_s((safe_rshift_func_uint16_t_u_u((safe_add_func_int32_t_s_s(((((g_135 = ((p_28 = 1L) >= (safe_lshift_func_int16_t_s_s((g_134 = ((((safe_rshift_func_uint16_t_u_u((g_8 ^ 4UL), p_29)) != 1L) ^ g_14) , l_114[g_112])), 2)))) & p_29) > p_29) && p_28), 0L)), 2)), 2)) || g_111) == l_114[g_112]), l_136))), l_137)), p_29)), 5)))) , g_8) < 0x45L) || 0xD3DBF9D0A132677FLL);
        }
    }
    return l_114[0];
}



static union U2  func_36(int64_t  p_37, uint8_t  p_38, union U2  p_39)
{ 
    int64_t l_55 = 0x8610F121ADF561F6LL;
    int32_t l_58 = 0xBAE5BD57L;
    union U1 l_76 = {9UL};
    uint16_t l_89 = 4UL;
    union U2 l_90 = {0x7A76403EC6B4E22DLL};
    for (p_39.f2.f1 = (-14); (p_39.f2.f1 <= 16); p_39.f2.f1 = safe_add_func_int8_t_s_s(p_39.f2.f1, 8))
    { 
        union U1 l_74 = {0UL};
        int32_t l_77 = (-4L);
        for (p_38 = 0; (p_38 <= 53); p_38 = safe_add_func_int16_t_s_s(p_38, 2))
        { 
            l_58 = ((l_55 = (p_39 , p_38)) || (((safe_lshift_func_uint8_t_u_s((g_8 != (0x799EL >= 0x4814L)), 7)) < 0x15L) , g_14));
            return p_39;
        }
        for (p_38 = 0; (p_38 <= 47); p_38 = safe_add_func_int64_t_s_s(p_38, 9))
        { 
            uint16_t l_75 = 0xB6D8L;
            uint16_t l_81 = 0x4D72L;
            int32_t l_82 = 0xEAB19957L;
            l_77 = (~((((9L && ((~(safe_div_func_uint8_t_u_u((((safe_rshift_func_uint16_t_u_u(((p_37 | ((((((safe_lshift_func_int16_t_s_u((safe_mul_func_int16_t_s_s((((safe_div_func_uint32_t_u_u((p_37 & (+(l_74 , l_75))), p_37)) == 0xFE68L) == 0xDEL), g_14)), 1)) & 0x7288L) , l_76) , g_8) | g_14) & 0x5AE7BE98B872472FLL)) || 253UL), g_8)) <= p_39.f1) > 0x81A6866CL), l_75))) < g_8)) | 1L) > l_55) > 0xF2D0L));
            l_82 &= (safe_unary_minus_func_uint16_t_u((safe_add_func_uint16_t_u_u(((g_8 | 0xF331A9D0E46F67A2LL) < ((l_81 &= (g_14 && l_77)) < 6UL)), g_8))));
        }
    }
    l_58 = (safe_mod_func_int8_t_s_s((safe_mod_func_uint64_t_u_u((((safe_mul_func_uint8_t_u_u(l_76.f0, (l_55 && p_39.f0))) ^ l_89) ^ p_37), 6L)), g_8));
    return l_90;
}





int test_main(void)
{
    int i, j;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_8, "g_8", print_hash_value);
    transparent_crc(g_14, "g_14", print_hash_value);
    transparent_crc(g_34, "g_34", print_hash_value);
    transparent_crc(g_111, "g_111", print_hash_value);
    transparent_crc(g_112, "g_112", print_hash_value);
    transparent_crc(g_134, "g_134", print_hash_value);
    transparent_crc(g_135, "g_135", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transparent_crc(g_146[i][j].f0, "g_146[i][j].f0", print_hash_value);
            transparent_crc(g_146[i][j].f1, "g_146[i][j].f1", print_hash_value);

        }
    }
    transparent_crc(g_147, "g_147", print_hash_value);
    transparent_crc(g_148, "g_148", print_hash_value);
    transparent_crc(g_180.f0, "g_180.f0", print_hash_value);
    transparent_crc(g_184, "g_184", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_185[i], "g_185[i]", print_hash_value);

    }
    transparent_crc(g_186, "g_186", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
