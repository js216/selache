// SPDX-License-Identifier: MIT
// cctest_csmith_68217034.c --- cctest case csmith_68217034 (csmith seed 1747021876)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x543666a8 */
/* @exp_ticks 0x5d33 */

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

// Options:   -s 1747021876 -o /tmp/csmith_gen_wl_ll6u5/csmith.c --concise --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 8 --max-block-size 5 --max-block-depth 4 --max-expr-complexity 8 --max-array-dim 3 --max-array-len-per-dim 7 --max-struct-fields 8 --max-union-fields 5

static long __undefined;


#pragma pack(push)
#pragma pack(1)
struct S0 {
   int16_t  f0;
   int32_t  f1;
   uint32_t  f2;
};
#pragma pack(pop)

union U1 {
   const int32_t  f0;
   uint8_t  f1;
   int32_t  f2;
};


static uint32_t g_4 = 0x90EF307DL;
static int32_t g_20 = 0x1C5A3D7FL;
static int32_t *g_19 = &g_20;
static int32_t g_45 = 0L;
static uint16_t g_72 = 65528UL;
static int32_t g_74[1][3][5] = {{{0L,0L,1L,1L,0L},{0L,0L,1L,1L,0L},{0L,0L,1L,1L,0L}}};
static int32_t g_102[7][2][7] = {{{0x1B912C02L,(-2L),0x226B515AL,0x917CCA84L,(-1L),0x1B912C02L,8L},{1L,0x1B912C02L,6L,0L,8L,5L,1L}},{{0x4CC697D3L,(-1L),0x0B7C7C06L,0x917CCA84L,0x8AF5EEACL,0x71652FD5L,0x71652FD5L},{(-1L),1L,(-1L),1L,(-1L),0x71652FD5L,6L}},{{0L,(-1L),0L,0xF24D48F7L,1L,0x226B515AL,0L},{5L,0x55104165L,(-2L),(-1L),0x4CC697D3L,5L,(-1L)}},{{(-3L),0xF24D48F7L,5L,0x7CE49567L,(-1L),0x7CE49567L,5L},{0x1B912C02L,0x1B912C02L,5L,0xFB0DB9FFL,0L,1L,0x8AF5EEACL}},{{6L,1L,(-2L),0L,0x1B912C02L,0x0B7C7C06L,0xF24D48F7L},{(-1L),0x4CC697D3L,0x7CE49567L,1L,0L,0x917CCA84L,0x4CC697D3L}},{{5L,(-1L),0x7CFBB67BL,0x7CFBB67BL,(-1L),5L,0x4CC697D3L},{0x917CCA84L,0L,1L,0x7CE49567L,0x4CC697D3L,(-1L),0xF24D48F7L}},{{0x0B7C7C06L,0x1B912C02L,0L,(-2L),1L,6L,0x8AF5EEACL},{1L,0L,0xFB0DB9FFL,5L,0x1B912C02L,0x1B912C02L,5L}}};
static struct S0 g_111 = {1L,0x6903EB46L,0xE39E102BL};
static struct S0 *g_110 = &g_111;
static int64_t g_126 = 1L;
static uint64_t g_148 = 0x1CA70F6C1F0966B1LL;
static const int16_t g_156 = 1L;
static int16_t *g_160 = &g_111.f0;
static union U1 g_176 = {6L};
static union U1 g_178 = {0xC03A1E7AL};
static union U1 *g_177 = &g_178;
static uint64_t g_206 = 0x538581BCB76007C2LL;
static int32_t *g_223 = &g_74[0][1][0];
static int8_t g_257 = (-6L);
static int8_t *g_256 = &g_257;
static int8_t **g_255 = &g_256;
static int16_t g_270 = 0xEF2CL;
static int64_t g_292 = 8L;
static int16_t g_318 = 0L;
static int32_t *g_331 = &g_74[0][0][4];
static uint8_t g_365 = 0x0EL;
static int32_t g_431 = 0x7E3F54B1L;
static union U1 g_433 = {0x9F87FD36L};
static const union U1 g_439 = {0xD947F61EL};
static const union U1 *g_438 = &g_439;
static uint32_t g_445[5] = {0xE455EFE9L,0xE455EFE9L,0xE455EFE9L,0xE455EFE9L,0xE455EFE9L};
static const int8_t *g_495 = &g_257;
static const int8_t * const *g_494 = &g_495;
static int8_t g_525 = (-1L);
static int64_t g_547 = 4L;
static int8_t ***g_569 = &g_255;
static uint8_t *g_615 = &g_433.f1;
static uint8_t **g_614 = &g_615;
static struct S0 **g_644 = &g_110;
static struct S0 ***g_643 = &g_644;
static union U1 ***g_724 = (void*)0;



static int32_t  func_1(void);
static int32_t * func_7(uint32_t  p_8, union U1  p_9, uint32_t  p_10);
static union U1  func_13(uint32_t  p_14, int32_t * p_15, int32_t * p_16, union U1  p_17, const uint32_t  p_18);
static int32_t  func_24(uint32_t  p_25, const uint32_t  p_26, int32_t * p_27, uint32_t  p_28);
static uint32_t  func_29(uint32_t  p_30);
static const uint32_t  func_32(int16_t  p_33, int32_t * p_34, int32_t * p_35);
static int8_t  func_41(int32_t * p_42);
static const uint8_t  func_55(int32_t * p_56, int32_t * p_57, uint32_t  p_58, int32_t * const  p_59, int32_t * p_60);




static int32_t  func_1(void)
{ 
    int32_t l_2 = (-1L);
    int32_t *l_3[4];
    union U1 l_21 = {0x4039EE49L};
    int32_t l_880 = 0x38EFAA17L;
    int i;
    for (i = 0; i < 4; i++)
        l_3[i] = &l_2;
    g_4++;
    l_3[2] = func_7(g_4, ((safe_sub_func_uint64_t_u_u(0x1943C6FE23A266D2LL, g_4)) , func_13((g_19 == &l_2), &g_20, (g_20 , &l_2), l_21, g_20)), g_439.f0);
    return l_880;
}



static int32_t * func_7(uint32_t  p_8, union U1  p_9, uint32_t  p_10)
{ 
    int32_t *l_879 = &g_74[0][1][0];
    return l_879;
}



static union U1  func_13(uint32_t  p_14, int32_t * p_15, int32_t * p_16, union U1  p_17, const uint32_t  p_18)
{ 
    int64_t l_75 = 0xA8C97D735F31A33FLL;
    uint32_t l_76 = 4294967295UL;
    int32_t l_749 = 0xB9907CCDL;
    struct S0 ** const *l_755 = (void*)0;
    int64_t l_771 = 0L;
    struct S0 **l_787 = &g_110;
    int32_t l_860 = 0L;
    uint32_t l_865 = 0x4037D8D8L;
    if ((safe_mod_func_uint16_t_u_u((((func_24(func_29(g_20), func_32((safe_div_func_uint16_t_u_u((g_4 != (((g_4 , (((safe_add_func_uint32_t_u_u(((-1L) && (+(func_41(g_19) | 1UL))), l_75)) , l_76) , g_74[0][1][0])) > 0x4F50L) ^ l_76)), 0x2251L)), p_15, g_19), g_19, l_75) ^ (-7L)) | 0x9E8C2464L) > 0xAA66L), p_14)))
    { 
        uint8_t l_725 = 0UL;
        int32_t l_742 = (-9L);
        uint8_t l_750[3][2][1] = {{{1UL},{1UL}},{{0xF8L},{1UL}},{{1UL},{0xF8L}}};
        int32_t *l_775 = &l_749;
        int i, j, k;
        if (((void*)0 != g_724))
        { 
            uint8_t l_747 = 0xFCL;
            int64_t *l_748 = &g_126;
            struct S0 ***l_751 = &g_644;
            struct S0 ****l_752 = (void*)0;
            struct S0 ****l_753 = (void*)0;
            struct S0 ****l_754 = &l_751;
            uint16_t l_759 = 3UL;
            union U1 ** const l_772 = (void*)0;
            (*p_15) ^= l_725;
            if ((safe_add_func_uint32_t_u_u((((safe_rshift_func_uint8_t_u_s((safe_div_func_int64_t_s_s(g_318, ((((*l_754) = ((safe_lshift_func_int16_t_s_u((safe_sub_func_uint64_t_u_u(g_270, (((safe_lshift_func_int16_t_s_u((((((*g_160) == ((safe_add_func_uint8_t_u_u(((g_525 , p_17.f2) , (safe_div_func_int64_t_s_s((l_742 == (((((*g_615) |= (l_749 &= ((safe_div_func_int64_t_s_s((((*l_748) = ((((safe_lshift_func_uint16_t_u_u(((l_75 | g_318) > p_17.f2), 12)) | (*g_19)) && l_747) , l_75)) , p_17.f0), g_547)) > p_17.f0))) && l_747) , 0xE4CE0969L) , p_14)), g_445[3]))), p_17.f0)) ^ p_17.f2)) >= 1UL) ^ g_102[6][0][5]) < l_75), l_750[2][1][0])) , p_17.f2) , l_742))), 0)) , l_751)) != l_755) , g_270))), 5)) > p_14) && 7UL), p_14)))
            { 
                const uint16_t **l_757 = (void*)0;
                const uint16_t ***l_756[5][4] = {{&l_757,&l_757,(void*)0,(void*)0},{&l_757,&l_757,&l_757,&l_757},{&l_757,&l_757,&l_757,&l_757},{&l_757,&l_757,(void*)0,&l_757},{&l_757,&l_757,&l_757,&l_757}};
                const uint16_t ****l_758 = &l_756[0][1];
                int i, j;
                (*l_758) = l_756[0][1];
            }
            else
            { 
                uint32_t l_770 = 4294967295UL;
                union U1 **l_774[5] = {&g_177,&g_177,&g_177,&g_177,&g_177};
                union U1 ***l_773 = &l_774[3];
                int i;
                l_771 |= ((((g_111.f2 ^ l_759) == (safe_div_func_int8_t_s_s((safe_rshift_func_int16_t_s_u((p_18 , (safe_lshift_func_uint8_t_u_u((safe_mod_func_uint64_t_u_u((((p_17.f1 && 0xB6B09AF1A69FFBD2LL) < (safe_div_func_int16_t_s_s(0xEFCCL, (*g_160)))) || (*g_160)), 1UL)), 2))), l_76)), 9L))) || p_14) >= l_770);
                (*p_15) = (*p_15);
                (*l_773) = l_772;
                p_15 = l_775;
            }
        }
        else
        { 
            uint16_t l_779 = 7UL;
            for (g_178.f1 = 0; (g_178.f1 > 37); ++g_178.f1)
            { 
                int32_t *l_778[4][7] = {{(void*)0,&g_74[0][2][3],&g_74[0][1][0],&l_749,&g_74[0][1][0],(void*)0,&g_45},{(void*)0,&l_749,(void*)0,&g_74[0][1][0],(void*)0,&l_749,(void*)0},{&g_45,(void*)0,&g_74[0][1][0],&l_749,&g_74[0][1][0],&g_74[0][2][3],(void*)0},{&g_74[0][1][0],(void*)0,&g_74[0][1][0],&g_74[0][1][0],(void*)0,&g_74[0][1][0],&g_45}};
                int i, j;
                l_779++;
            }
        }
    }
    else
    { 
        int16_t l_788 = 0x7B1BL;
        struct S0 l_811 = {0L,0xBA09C5BBL,8UL};
        int8_t ***l_817 = (void*)0;
        uint16_t l_833 = 0x4BA9L;
        for (g_206 = 0; (g_206 <= 0); g_206 += 1)
        { 
            int32_t **l_782 = &g_331;
            const struct S0 *l_831 = &l_811;
            const struct S0 **l_830 = &l_831;
            const struct S0 ***l_829 = &l_830;
            const struct S0 ****l_828 = &l_829;
            int32_t l_859 = (-9L);
            struct S0 ***l_864 = &g_644;
            (*l_782) = p_15;
        }
    }
    return p_17;
}



static int32_t  func_24(uint32_t  p_25, const uint32_t  p_26, int32_t * p_27, uint32_t  p_28)
{ 
    int32_t *l_721 = (void*)0;
    int32_t **l_722 = &g_331;
    uint64_t l_723 = 8UL;
    (*l_722) = l_721;
    return l_723;
}



static uint32_t  func_29(uint32_t  p_30)
{ 
    uint16_t l_31[4][2][4] = {{{65530UL,65530UL,0x0F75L,65535UL},{65535UL,0x50FAL,0x0F75L,0x50FAL}},{{65530UL,0x32D3L,0x2E91L,0x0F75L},{0x50FAL,0x32D3L,0x32D3L,0x50FAL}},{{0x32D3L,0x50FAL,65530UL,65535UL},{0x32D3L,65530UL,0x32D3L,0x2E91L}},{{0x50FAL,65535UL,0x2E91L,0x2E91L},{65530UL,65530UL,0x0F75L,65535UL}}};
    int i, j, k;
    (*g_19) = l_31[1][1][1];
    return g_4;
}



static const uint32_t  func_32(int16_t  p_33, int32_t * p_34, int32_t * p_35)
{ 
    int32_t l_80[2][7] = {{0x656345D1L,0x6DCF67A9L,0x6DCF67A9L,0x656345D1L,0x6DCF67A9L,0x6DCF67A9L,0x656345D1L},{0x6DCF67A9L,0x656345D1L,0x6DCF67A9L,0x6DCF67A9L,0x656345D1L,0x6DCF67A9L,0x6DCF67A9L}};
    int32_t l_91 = 0x930A8756L;
    int32_t l_95 = (-7L);
    int32_t l_96 = 1L;
    int32_t l_97[6][2][6] = {{{0L,0L,9L,0L,0L,9L},{(-1L),(-1L),0x5F3B4242L,3L,0L,(-1L)}},{{0L,0L,0L,6L,(-1L),0L},{1L,0L,0L,0L,1L,0L}},{{(-3L),0L,0L,(-3L),(-1L),3L},{(-3L),(-1L),3L,0L,0L,3L}},{{1L,1L,0L,6L,0L,0L},{0L,(-1L),0L,6L,(-1L),0L}},{{1L,0L,0L,0L,1L,0L},{(-3L),0L,0L,(-3L),(-1L),3L}},{{(-3L),(-1L),3L,0L,0L,3L},{1L,1L,0L,6L,0L,0L}}};
    int8_t l_98[2][5][2] = {{{0x87L,0x13L},{0xC9L,0x87L},{0x13L,4L},{0x13L,0x87L},{0xC9L,0x13L}},{{0x87L,4L},{0x30L,0x30L},{0xC9L,0x30L},{0x30L,4L},{0x87L,0x13L}}};
    uint64_t l_99 = 0UL;
    uint16_t l_103 = 65532UL;
    struct S0 l_106 = {0x300DL,-10L,0UL};
    struct S0 *l_128 = &g_111;
    int64_t *l_136 = &g_126;
    union U1 *l_175 = &g_176;
    uint64_t l_188 = 18446744073709551615UL;
    int32_t **l_216[2][3] = {{&g_19,&g_19,&g_19},{&g_19,&g_19,&g_19}};
    int16_t *l_219 = &l_106.f0;
    uint8_t *l_232 = &g_176.f1;
    uint32_t l_237[1][3][4] = {{{1UL,0xB3610BE1L,1UL,1UL},{0xB3610BE1L,0xB3610BE1L,8UL,0xB3610BE1L},{0xB3610BE1L,1UL,1UL,0xB3610BE1L}}};
    int8_t *l_242 = &l_98[1][1][1];
    const uint8_t l_250[5] = {0x64L,0x64L,0x64L,0x64L,0x64L};
    uint64_t l_348[4][3];
    int16_t l_373[7][1] = {{0x4F43L},{(-1L)},{0x4F43L},{(-1L)},{0x4F43L},{(-1L)},{0x4F43L}};
    struct S0 **l_382[6];
    union U1 **l_404 = &g_177;
    uint8_t l_407 = 0x91L;
    uint64_t l_458 = 0x9CE9B3E6EBE94B88LL;
    int32_t l_469 = 0x55C0A2BBL;
    uint64_t l_475[7][4] = {{0x8403A8FED796DB0BLL,0UL,0x8403A8FED796DB0BLL,0x8403A8FED796DB0BLL},{0UL,0UL,0x303BEFC0F36B97A0LL,0UL},{0UL,0x8403A8FED796DB0BLL,0x8403A8FED796DB0BLL,0UL},{0x8403A8FED796DB0BLL,0UL,0x8403A8FED796DB0BLL,0x8403A8FED796DB0BLL},{0UL,0UL,0x303BEFC0F36B97A0LL,0UL},{0UL,0x8403A8FED796DB0BLL,0x8403A8FED796DB0BLL,0UL},{0x8403A8FED796DB0BLL,0UL,0x8403A8FED796DB0BLL,0x8403A8FED796DB0BLL}};
    uint32_t l_498 = 1UL;
    uint32_t l_518 = 0UL;
    uint64_t l_645 = 18446744073709551612UL;
    int16_t l_651[1];
    uint8_t ***l_667[7] = {&g_614,&g_614,&g_614,&g_614,&g_614,&g_614,&g_614};
    int8_t l_713[7][2] = {{0x1AL,0x1AL},{0x5EL,0x5DL},{0x97L,0x5DL},{0x5EL,0x1AL},{0x1AL,0x5EL},{0x5DL,0x97L},{0x5DL,0x5EL}};
    int64_t l_714[6];
    uint16_t *l_719 = &l_103;
    uint16_t **l_718 = &l_719;
    int64_t l_720 = 0x4ACBDCAAF962AAA9LL;
    int i, j, k;
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 3; j++)
            l_348[i][j] = 1UL;
    }
    for (i = 0; i < 6; i++)
        l_382[i] = &g_110;
    for (i = 0; i < 1; i++)
        l_651[i] = 0L;
    for (i = 0; i < 6; i++)
        l_714[i] = 0L;
    for (g_72 = 4; (g_72 != 30); g_72 = safe_add_func_uint16_t_u_u(g_72, 1))
    { 
        int32_t *l_79 = &g_74[0][2][0];
        int32_t *l_81 = &g_74[0][1][3];
        int32_t *l_82 = &g_45;
        int32_t *l_83 = (void*)0;
        int32_t *l_84 = &g_45;
        int32_t *l_85 = &g_74[0][2][0];
        int32_t *l_86 = &g_45;
        int32_t *l_87 = &g_74[0][0][4];
        int32_t *l_88 = &g_74[0][1][0];
        int32_t *l_89 = &g_45;
        int32_t *l_90 = &g_74[0][0][1];
        int32_t *l_92 = &g_45;
        int32_t *l_93 = &g_74[0][0][1];
        int32_t *l_94[4] = {&l_91,&l_91,&l_91,&l_91};
        struct S0 l_107 = {-1L,0x3FEE94D8L,0x95E8C976L};
        struct S0 *l_108 = &l_106;
        struct S0 **l_109 = &l_108;
        struct S0 **l_112 = &g_110;
        union U1 *l_205[1];
        uint8_t l_212 = 0x83L;
        int i;
        for (i = 0; i < 1; i++)
            l_205[i] = &g_178;
        l_99--;
        l_103++;
        (*l_108) = (l_107 = l_106);
    }
    g_45 |= (safe_add_func_uint16_t_u_u(((safe_mod_func_int32_t_s_s(((*g_223) = (*g_223)), (-1L))) , ((g_156 == ((((p_33 , (safe_mod_func_uint64_t_u_u((((safe_lshift_func_uint8_t_u_s((++(*l_232)), ((*g_160) ^ (((p_33 < (safe_div_func_int8_t_s_s((-1L), g_111.f1))) | (*g_160)) || p_33)))) & p_33) || 0x3885CE25C67197F0LL), 0x5EA537F39B1B88C5LL))) >= g_74[0][1][0]) & p_33) , l_237[0][0][3])) | 5UL)), 1L));
    if (((safe_div_func_uint8_t_u_u(((*l_232) = (1L || ((-1L) && ((((g_102[6][0][3] != 0x3FL) && (((safe_rshift_func_int8_t_s_s(((*l_242) = g_72), (p_33 && ((((*g_223) = ((safe_mod_func_uint32_t_u_u((&g_223 != (void*)0), p_33)) != 1L)) || 0UL) >= p_33)))) & p_33) != p_33)) , 0x20BFL) < p_33)))), 5L)) , 0xC57FC2B6L))
    { 
        union U1 **l_245 = (void*)0;
        l_245 = &l_175;
    }
    else
    { 
        int8_t l_248 = 0xE9L;
        uint16_t *l_249 = (void*)0;
        int32_t l_264 = 0x8043FA16L;
        int32_t l_268 = 0xC70DB109L;
        int32_t l_269[1][5] = {{0x9B2B1DB1L,0x9B2B1DB1L,0x9B2B1DB1L,0x9B2B1DB1L,0x9B2B1DB1L}};
        uint16_t * const l_312 = &g_72;
        uint8_t l_316 = 1UL;
        int8_t ** const *l_344 = &g_255;
        union U1 * const *l_405 = (void*)0;
        int8_t *l_421 = &l_248;
        uint64_t *l_455[1][1];
        uint16_t l_466 = 65530UL;
        uint32_t l_474[4];
        struct S0 ***l_483 = &l_382[2];
        uint8_t l_484 = 0x46L;
        int8_t l_500[1][3];
        uint64_t l_504 = 0xD025A6432AE54056LL;
        int64_t l_506 = (-1L);
        struct S0 *l_535 = &g_111;
        int64_t l_578 = 0xE8B60D4FBA56569FLL;
        uint64_t *l_654 = &l_188;
        const int64_t l_670 = 0x0661BC7798A39C68LL;
        uint32_t l_715 = 9UL;
        int i, j;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 1; j++)
                l_455[i][j] = &g_206;
        }
        for (i = 0; i < 4; i++)
            l_474[i] = 3UL;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 3; j++)
                l_500[i][j] = 0L;
        }
lbl_393:
        (*g_223) = (*g_223);
        if ((((safe_lshift_func_int8_t_s_s((&g_74[0][1][0] != &g_102[6][0][3]), 4)) ^ ((p_33 ^ p_33) == l_248)) , (((((((l_249 != &l_103) <= 4L) | p_33) != g_178.f0) , (*l_128)) , 18446744073709551615UL) && l_250[3])))
        { 
            int8_t **l_260 = &g_256;
            int32_t l_262[1];
            uint64_t l_271[6];
            int32_t l_285 = 0x62370B22L;
            int i;
            for (i = 0; i < 1; i++)
                l_262[i] = 0x732A6495L;
            for (i = 0; i < 6; i++)
                l_271[i] = 0x3FCD9E7DDAC24A83LL;
            for (g_111.f2 = 0; (g_111.f2 == 14); g_111.f2 = safe_add_func_int64_t_s_s(g_111.f2, 5))
            { 
                int32_t l_261 = 9L;
                int32_t l_263[4];
                int8_t l_267 = (-2L);
                int32_t **l_276 = &g_223;
                int i;
                for (i = 0; i < 4; i++)
                    l_263[i] = 5L;
                p_35 = (p_34 = &g_74[0][1][0]);
                for (l_106.f1 = 0; (l_106.f1 < (-6)); --l_106.f1)
                { 
                    int8_t ***l_258 = (void*)0;
                    int8_t ***l_259[1][1][1];
                    int32_t l_265 = 0x130B2A4FL;
                    int32_t l_266[6][1] = {{(-9L)},{0x29CBB987L},{(-9L)},{0x29CBB987L},{(-9L)},{0x29CBB987L}};
                    int32_t ***l_277 = &l_216[1][1];
                    uint64_t *l_280[7][6][6] = {{{&l_99,&g_206,&l_271[0],&g_206,&l_99,&l_271[2]},{(void*)0,(void*)0,&l_188,(void*)0,&l_99,&l_99},{&g_148,&l_271[0],(void*)0,(void*)0,&l_271[0],&l_99},{&l_271[0],&g_206,&l_271[2],(void*)0,&l_99,(void*)0},{(void*)0,(void*)0,(void*)0,&g_206,(void*)0,&l_188},{&l_271[2],&g_206,&l_271[0],&l_271[2],&l_99,&l_188}},{{&g_148,&g_148,(void*)0,&l_271[2],&l_99,&g_206},{&l_271[2],&l_271[0],&l_188,&g_206,&l_188,&l_271[0]},{(void*)0,(void*)0,&l_271[3],(void*)0,&g_148,&g_206},{&l_271[0],(void*)0,&l_271[4],&l_271[0],&l_271[4],&l_188},{(void*)0,(void*)0,&l_271[0],&l_99,&g_148,&l_188},{&l_188,(void*)0,&l_99,(void*)0,&l_188,(void*)0}},{{&l_271[3],&l_271[0],&l_271[5],&l_99,&l_99,&g_206},{&l_271[4],&g_148,(void*)0,&l_271[0],&l_99,&g_206},{&l_271[0],&g_206,&l_271[5],(void*)0,(void*)0,(void*)0},{&l_99,(void*)0,&l_99,&g_206,&l_99,&l_188},{&l_271[5],&g_206,&l_271[0],&l_271[2],(void*)0,&l_188},{(void*)0,&g_148,&l_271[4],&l_271[2],(void*)0,&g_206}},{{&l_271[5],&l_271[0],&l_271[3],&g_206,&l_271[3],&l_271[0]},{&l_99,(void*)0,&l_188,(void*)0,(void*)0,&g_206},{&l_271[0],(void*)0,(void*)0,&l_271[0],&g_148,&l_188},{&l_271[4],(void*)0,&l_271[0],&l_99,(void*)0,&l_188},{&l_271[3],(void*)0,(void*)0,(void*)0,&l_271[3],(void*)0},{&l_188,&l_271[0],&l_271[2],&l_99,(void*)0,&g_206}},{{(void*)0,&g_148,&g_148,&l_271[0],(void*)0,&g_206},{&l_271[0],&g_206,&l_271[2],(void*)0,&l_99,(void*)0},{(void*)0,(void*)0,(void*)0,&g_206,(void*)0,&l_188},{&l_271[2],&g_206,&l_271[0],&l_271[2],&l_99,&l_188},{&g_148,&g_148,(void*)0,&l_271[2],&l_99,&g_206},{&l_271[2],&l_271[0],&l_188,&g_206,&l_188,&l_271[0]}},{{(void*)0,(void*)0,&l_271[3],(void*)0,&g_148,&g_206},{&l_271[0],(void*)0,&l_271[4],&l_271[0],&l_271[4],&l_188},{(void*)0,(void*)0,&l_271[0],&l_99,&g_148,&l_188},{&l_188,(void*)0,&l_99,(void*)0,&l_188,(void*)0},{&l_271[3],&l_271[0],&l_271[5],&l_99,&l_99,&l_188},{(void*)0,&g_206,&l_188,&g_148,&l_271[4],&l_188}},{{(void*)0,&l_188,&l_271[0],&l_271[0],&l_99,&l_271[0]},{&l_271[4],&l_99,&l_271[4],(void*)0,(void*)0,&l_188},{&l_271[0],&l_188,(void*)0,(void*)0,&g_148,&l_271[2]},{&l_188,&g_206,(void*)0,(void*)0,&l_188,(void*)0},{&l_271[0],&g_148,&l_271[0],(void*)0,&l_271[0],&g_148},{&l_271[4],(void*)0,&l_271[0],&l_271[0],&l_188,(void*)0}}};
                    int64_t *l_291 = &g_292;
                    int32_t *l_293[5];
                    int i, j, k;
                    for (i = 0; i < 1; i++)
                    {
                        for (j = 0; j < 1; j++)
                        {
                            for (k = 0; k < 1; k++)
                                l_259[i][j][k] = &g_255;
                        }
                    }
                    for (i = 0; i < 5; i++)
                        l_293[i] = &l_262[0];
                    l_260 = g_255;
                    --l_271[0];
                    g_45 = (((*l_291) = (((**l_260) = (safe_add_func_int32_t_s_s(((*p_34) = ((((*l_277) = l_276) != &p_35) ^ (safe_rshift_func_int16_t_s_u(((g_206++) || ((*l_136) = ((0x2678L < (&g_19 == &g_223)) >= ((safe_lshift_func_uint8_t_u_s(l_285, 5)) ^ (safe_rshift_func_int8_t_s_u((~((safe_add_func_uint64_t_u_u((l_262[0] || 0xEACBFA641BE15099LL), p_33)) , l_97[5][1][2])), p_33)))))), 12)))), 0x54A31D81L))) > p_33)) | (-9L));
                }
                (*g_223) ^= (+65532UL);
            }
        }
        else
        { 
            uint8_t *l_298 = &g_178.f1;
            int32_t l_305 = (-1L);
            union U1 **l_329 = &l_175;
            int32_t l_349 = 8L;
            int32_t l_350 = (-8L);
            int32_t l_351 = 0x47536DFCL;
            int32_t l_353 = (-5L);
            int32_t l_354 = 0xC34FCC02L;
            int32_t l_355 = 0L;
            int32_t l_356[2];
            int8_t l_361 = 0x18L;
            int16_t l_369 = 0xCB75L;
            int32_t *l_410 = &g_74[0][0][0];
            int32_t *l_451 = (void*)0;
            int8_t ***l_456 = &g_255;
            int8_t l_463 = 0x72L;
            int8_t l_499 = 3L;
            uint8_t l_513 = 0UL;
            int i;
            for (i = 0; i < 2; i++)
                l_356[i] = 0L;
            (*l_128) = (*l_128);
            if (((p_33 > 0x6508L) == ((0xC964AADFF80FAA69LL < p_33) < ((((((~((safe_div_func_int64_t_s_s((p_33 & ((g_256 == l_298) , p_33)), 0x3E262486AC3AD8F4LL)) < (*g_256))) < p_33) >= 0x1674B6A4613B58B0LL) ^ 0xE7L) & 0xFB65458731939976LL) != g_72))))
            { 
                int8_t *l_315[6] = {&l_248,&l_248,&l_248,&l_248,&l_248,&l_248};
                uint32_t *l_317[6];
                const int32_t l_319[1][2] = {{0xC3087075L,0xC3087075L}};
                int i, j;
                for (i = 0; i < 6; i++)
                    l_317[i] = &l_106.f2;
                if (((((safe_lshift_func_uint16_t_u_u(((g_318 &= ((safe_add_func_uint8_t_u_u(((*l_298)--), l_305)) & ((((g_111.f2 > (safe_rshift_func_uint16_t_u_s(((safe_lshift_func_int8_t_s_u(((safe_div_func_int8_t_s_s(((g_45 , l_312) == &l_103), p_33)) < (safe_mod_func_int64_t_s_s((l_315[4] != (void*)0), g_270))), l_305)) & l_269[0][1]), l_316))) > p_33) == (-1L)) != g_148))) , 65533UL), 6)) , (*g_177)) , 1UL) <= p_33))
                { 
                    return l_319[0][1];
                }
                else
                { 
                    int32_t *l_320 = &l_268;
                    union U1 ***l_330 = &l_329;
                    g_223 = l_320;
                    g_331 = ((((safe_sub_func_uint32_t_u_u((safe_lshift_func_int16_t_s_s((((safe_div_func_int8_t_s_s((((safe_rshift_func_int16_t_s_s((1UL < p_33), (p_33 , ((((g_223 = p_34) != &g_102[6][0][3]) > (*l_320)) , (((*l_330) = l_329) != &l_175))))) , 0xC1D3C510A37C3B78LL) ^ p_33), (**g_255))) || 0x32L) < p_33), (*g_160))), g_102[6][1][2])) ^ 0xB6L) , 0x2B2EL) , l_320);
                }
            }
            else
            { 
                int8_t ***l_345 = &g_255;
                int32_t l_352 = 0x10E79639L;
                int32_t l_357 = 0xF109C62EL;
                int32_t l_359 = 0L;
                int32_t l_360 = 0x860C1E19L;
                int32_t l_363 = 6L;
                int32_t l_364[5][4][3] = {{{0xDAA7425BL,0L,0xDAA7425BL},{0L,0L,0L},{(-1L),0L,(-1L)},{0L,0L,0L}},{{0xDAA7425BL,0L,0xDAA7425BL},{0L,0L,0L},{(-1L),0L,(-1L)},{0L,0L,0L}},{{0xDAA7425BL,0L,0xDAA7425BL},{0L,0L,0L},{(-1L),0L,(-1L)},{0L,0L,0L}},{{0xDAA7425BL,0L,0xDAA7425BL},{0L,0L,0L},{(-1L),0L,(-1L)},{0L,0L,0L}},{{0xDAA7425BL,0L,0xDAA7425BL},{0L,0L,0L},{(-1L),0L,(-1L)},{0L,0L,0L}}};
                int64_t l_375 = 9L;
                uint32_t l_422 = 18446744073709551606UL;
                const union U1 *l_436 = &g_176;
                int i, j, k;
                if (((safe_div_func_uint32_t_u_u(l_305, (~((safe_mul_func_int8_t_s_s(((safe_add_func_uint64_t_u_u(((l_298 != &l_248) > (safe_sub_func_uint16_t_u_u(g_126, ((safe_unary_minus_func_int8_t_s((safe_add_func_int32_t_s_s(((l_344 != l_345) == (((safe_add_func_int8_t_s_s(((((*l_312) ^= 0xB708L) , 0xF2L) != 0x3BL), l_348[0][2])) > p_33) == (-10L))), 0x94F73EE0L)))) != p_33)))), 0x31EACA357E05E394LL)) <= g_126), p_33)) ^ (-1L))))) , 0L))
                { 
                    int32_t l_358 = 0x9367DC84L;
                    int32_t l_362 = 0x89CBE35AL;
                    int32_t l_368 = 0xBCB7791EL;
                    int32_t l_370 = 0x93670792L;
                    int32_t l_371 = (-5L);
                    int32_t l_372[2];
                    int32_t l_374[1];
                    uint8_t l_376 = 0xBDL;
                    struct S0 **l_379 = (void*)0;
                    struct S0 ***l_380 = (void*)0;
                    struct S0 ***l_381[7][2] = {{&l_379,(void*)0},{&l_379,(void*)0},{&l_379,(void*)0},{&l_379,(void*)0},{&l_379,(void*)0},{&l_379,(void*)0},{&l_379,(void*)0}};
                    int i, j;
                    for (i = 0; i < 2; i++)
                        l_372[i] = 1L;
                    for (i = 0; i < 1; i++)
                        l_374[i] = 0x9CB603A9L;
                    --g_365;
                    l_376++;
                    l_382[2] = l_379;
                    l_371 ^= ((*g_331) = ((p_33 & ((safe_sub_func_int64_t_s_s(((((((-8L) == ((void*)0 != &g_4)) | (((safe_mod_func_int64_t_s_s((safe_mul_func_uint8_t_u_u(((safe_rshift_func_uint16_t_u_u(g_74[0][1][0], 5)) > (safe_mul_func_uint8_t_u_u(g_111.f1, 0x0BL))), g_292)), l_264)) || (*g_223)) ^ p_33)) , p_33) & 1UL) >= l_248), l_372[1])) && 9L)) >= l_305));
                }
                else
                { 
                    int16_t l_406[5];
                    int i;
                    for (i = 0; i < 5; i++)
                        l_406[i] = 0x8041L;
                    g_331 = &g_74[0][1][4];
                    if (g_178.f1)
                        goto lbl_393;
                    (*g_331) = (g_45 &= (((((safe_lshift_func_int8_t_s_s(((((safe_lshift_func_uint16_t_u_s((((*l_242) = (safe_add_func_uint32_t_u_u(l_350, (safe_add_func_uint16_t_u_u(((*l_312) = (&g_178 == ((*l_329) = &g_176))), p_33))))) == (safe_rshift_func_uint16_t_u_s(((((l_404 != l_405) | (*g_160)) && p_33) == l_359), l_406[4]))), (*g_160))) , 9UL) , 0x9EEE4029L) <= (*g_223)), l_406[1])) != (*g_256)) <= l_407) ^ 18446744073709551615UL) , (*g_331)));
                    p_34 = (void*)0;
                }
                for (l_354 = 0; (l_354 >= (-22)); l_354--)
                { 
                    uint64_t l_411 = 18446744073709551607UL;
                    l_410 = &g_102[5][1][0];
                    l_411--;
                }
                if ((*g_331))
                { 
                    uint32_t l_414 = 0xFEEB1A52L;
                    int8_t *l_419 = &l_98[1][4][0];
                    int8_t **l_420[4][5][4] = {{{&l_419,(void*)0,&l_419,(void*)0},{&l_419,(void*)0,&l_242,&l_242},{(void*)0,(void*)0,&l_242,&l_242},{&l_419,&l_242,(void*)0,(void*)0},{&l_242,&l_419,&l_242,(void*)0}},{{(void*)0,&l_419,(void*)0,(void*)0},{&l_419,&l_242,&l_419,&l_242},{(void*)0,(void*)0,&l_419,&l_242},{&l_242,(void*)0,&l_242,(void*)0},{(void*)0,(void*)0,&l_242,&l_419}},{{&l_242,&l_419,&l_419,&l_242},{(void*)0,(void*)0,&l_419,&l_419},{&l_419,&l_419,(void*)0,(void*)0},{(void*)0,&l_419,&l_242,(void*)0},{&l_242,&l_419,(void*)0,&l_419}},{{&l_419,(void*)0,&l_242,&l_242},{(void*)0,&l_419,&l_419,&l_242},{&l_419,&l_419,&l_242,(void*)0},{&l_419,&l_419,&l_419,&l_419},{(void*)0,(void*)0,(void*)0,(void*)0}}};
                    int i, j, k;
                    ++l_414;
                    (*g_223) &= (safe_rshift_func_uint16_t_u_u((((*g_255) = l_419) != (l_421 = &g_257)), g_178.f1));
                    ++l_422;
                    (*l_410) = (safe_add_func_uint64_t_u_u(0xC72AB024FCA246E7LL, ((g_126 , (((*g_110) , (g_431 &= (((((((0xD7F4L < (((g_74[0][1][0] & (safe_mul_func_int8_t_s_s((*g_256), (g_257 = (safe_lshift_func_int8_t_s_s((*g_256), 1)))))) | p_33) > 18446744073709551612UL)) ^ l_357) , 18446744073709551615UL) , l_414) | l_414) ^ 0xAF0F9DC9L) | p_33))) && l_414)) > l_269[0][0])));
                }
                else
                { 
                    union U1 *l_432 = &g_433;
                    const union U1 **l_437[1][1][5] = {{{&l_436,&l_436,&l_436,&l_436,&l_436}}};
                    uint32_t *l_443 = (void*)0;
                    uint32_t *l_444 = &g_445[0];
                    int i, j, k;
                    l_432 = &g_178;
                    l_269[0][2] |= ((safe_div_func_uint8_t_u_u(((((g_438 = l_436) != (l_432 = l_432)) < p_33) && (~(safe_mod_func_int32_t_s_s(p_33, ((*l_444)--))))), (safe_sub_func_uint8_t_u_u(p_33, 247UL)))) ^ (((((p_33 , p_33) , p_33) == 0xDDAB2FE517E33AE3LL) && 0xAAL) , (*g_223)));
                    if (g_431)
                        goto lbl_450;
lbl_450:
                    g_223 = &l_269[0][2];
                    return g_102[6][0][3];
                }
                p_34 = l_451;
                for (l_369 = 0; (l_369 <= 0); l_369 += 1)
                { 
                    int i;
                    l_269[0][2] = (l_356[l_369] , ((+(((l_356[(l_369 + 1)] && ((l_356[l_369] = g_431) , (*g_256))) == (((*g_438) , l_455[0][0]) != (void*)0)) & g_439.f1)) > 0x22L));
                }
            }
            if ((((((void*)0 != &l_353) && (((*l_456) = &l_242) == &g_256)) <= (((~l_458) ^ g_178.f1) == (g_257 <= (*l_410)))) & p_33))
            { 
                uint8_t **l_459 = &l_298;
                uint8_t **l_460 = &l_232;
                int32_t l_467 = 2L;
                uint8_t *l_468 = &g_178.f1;
                l_269[0][4] = ((g_72 != (((*l_459) = &l_316) == ((*l_460) = &g_365))) >= (((*l_468) = ((0x2AL >= ((safe_mod_func_int16_t_s_s(l_463, (g_206 , (safe_add_func_uint8_t_u_u(((*l_410) |= ((g_445[0] || (**g_255)) , 0x97L)), l_466))))) && l_467)) >= g_445[0])) == p_33));
                l_484 = ((0L >= l_469) != (((*l_312) ^= (safe_lshift_func_uint16_t_u_s((((*g_160) = (((((safe_add_func_int32_t_s_s((l_474[3] >= l_475[6][1]), (safe_add_func_int8_t_s_s((((((&g_256 != (*l_456)) , (safe_div_func_int8_t_s_s(((safe_div_func_int8_t_s_s((!((g_292 , (*g_160)) ^ p_33)), p_33)) ^ l_467), g_433.f2))) , l_483) == &l_382[5]) < (*l_410)), 0x36L)))) ^ 0x2BEA5F64C29A4A30LL) == 18446744073709551614UL) <= 0xE875L) < (*g_331))) < 1UL), g_445[3]))) | l_467));
            }
            else
            { 
                uint32_t l_485 = 18446744073709551611UL;
                int32_t l_505 = 0x69A21F12L;
                int32_t l_509 = 4L;
                int32_t l_511 = (-10L);
                int32_t l_512 = (-4L);
                ++l_485;
                if ((safe_mod_func_int16_t_s_s(((safe_mod_func_int64_t_s_s(((((safe_add_func_int8_t_s_s((248UL >= (-1L)), (((((*l_456) = &l_421) == g_494) | (p_33 && ((safe_rshift_func_int16_t_s_s(((&l_404 == (void*)0) > l_498), 9)) >= l_499))) < 0x5AB7L))) & 1L) < 0x369F4A766960DC08LL) , p_33), l_500[0][1])) , l_485), p_33)))
                { 
                    uint16_t l_501 = 1UL;
                    l_501--;
                    return g_270;
                }
                else
                { 
                    int64_t l_507 = (-1L);
                    int32_t l_508 = 0x034DEAB7L;
                    int64_t l_510 = 0xFCD8D597E99309D3LL;
                    int32_t l_517[4][2][6] = {{{0x366E215FL,0x366E215FL,0x366E215FL,0x366E215FL,0x366E215FL,0x366E215FL},{0x366E215FL,0x366E215FL,0x366E215FL,0x366E215FL,0x366E215FL,0x366E215FL}},{{0x366E215FL,0x366E215FL,0x366E215FL,0x366E215FL,0x366E215FL,0x366E215FL},{0x366E215FL,0x366E215FL,0x366E215FL,0x366E215FL,0x366E215FL,0x366E215FL}},{{0x366E215FL,0x366E215FL,0x366E215FL,0x366E215FL,0x366E215FL,0x366E215FL},{0x366E215FL,0x366E215FL,0x366E215FL,0x366E215FL,0x366E215FL,0x366E215FL}},{{0x366E215FL,0x366E215FL,0x366E215FL,0x366E215FL,0x366E215FL,0x366E215FL},{0x366E215FL,0x366E215FL,0x366E215FL,0x366E215FL,0x366E215FL,0x366E215FL}}};
                    int i, j, k;
                    l_505 = l_504;
                    if (l_264)
                        goto lbl_516;
lbl_516:
                    ++l_513;
                    --l_518;
                }
                for (g_176.f1 = (-28); (g_176.f1 == 23); g_176.f1++)
                { 
                    g_102[1][0][0] ^= (g_525 ^ ((safe_mod_func_int32_t_s_s((((*g_331) = ((safe_add_func_uint64_t_u_u(p_33, (((l_504 && (p_33 | (p_33 , (-1L)))) || (**g_255)) > l_505))) && l_248)) & (-5L)), l_269[0][2])) >= (-1L)));
                }
            }
            l_269[0][2] &= ((**l_329) , (*l_410));
        }
        for (l_106.f0 = 11; (l_106.f0 <= 3); l_106.f0 = safe_sub_func_uint32_t_u_u(l_106.f0, 5))
        { 
            struct S0 *l_548 = &l_106;
            int32_t l_564[4][5] = {{0x8235DDE5L,1L,0x8235DDE5L,0x422B4FCBL,1L},{0L,1L,1L,1L,0L},{0x8235DDE5L,1L,1L,0L,1L},{1L,1L,1L,0L,1L}};
            int8_t ***l_567 = &g_255;
            int32_t *l_571[2][5][3] = {{{&g_74[0][1][0],&g_45,&g_102[6][0][3]},{&g_74[0][1][0],&g_74[0][1][0],&g_45},{&l_97[5][1][1],&g_45,&g_45},{&g_45,&l_264,&g_102[6][0][3]},{&l_97[5][1][1],&l_264,&l_97[5][1][1]}},{{&g_74[0][1][0],&g_45,&g_102[6][0][3]},{&g_74[0][1][0],&g_74[0][1][0],&g_45},{&l_97[5][1][1],&g_45,&g_45},{&g_45,&l_264,&g_102[6][0][3]},{&l_97[5][1][1],&l_264,&l_97[5][1][1]}}};
            const uint16_t **l_597 = (void*)0;
            const uint16_t *l_598 = (void*)0;
            int64_t * const l_606 = &l_578;
            uint64_t *l_656 = (void*)0;
            union U1 ***l_676 = (void*)0;
            const uint16_t l_681[5] = {0x0485L,0x0485L,0x0485L,0x0485L,0x0485L};
            uint32_t l_702 = 3UL;
            int i, j, k;
        }
        --l_715;
        g_223 = &g_74[0][1][0];
    }
    l_720 = ((void*)0 != l_718);
    g_102[3][0][1] |= (*g_223);
    return g_102[3][1][4];
}



static int8_t  func_41(int32_t * p_42)
{ 
    int64_t l_43[5] = {0x4B1C2FBF3F079038LL,0x4B1C2FBF3F079038LL,0x4B1C2FBF3F079038LL,0x4B1C2FBF3F079038LL,0x4B1C2FBF3F079038LL};
    int32_t *l_44 = &g_45;
    int i;
    (*l_44) |= l_43[3];
    for (g_45 = 0; (g_45 <= 4); g_45 += 1)
    { 
        struct S0 l_52[3] = {{0x05C8L,0x2DB6377FL,18446744073709551615UL},{0x05C8L,0x2DB6377FL,18446744073709551615UL},{0x05C8L,0x2DB6377FL,18446744073709551615UL}};
        int16_t *l_69 = &l_52[0].f0;
        uint16_t *l_71 = &g_72;
        int32_t *l_73 = &g_74[0][1][0];
        int i;
        (*l_73) &= (safe_lshift_func_uint16_t_u_s(((*l_71) = (safe_rshift_func_uint8_t_u_u((1L ^ (safe_mul_func_uint16_t_u_u(((l_52[0] , (safe_sub_func_uint8_t_u_u(func_55(p_42, &g_45, (safe_mul_func_uint8_t_u_u(l_43[g_45], (safe_rshift_func_int16_t_s_s(((*l_69) ^= (safe_sub_func_uint32_t_u_u((safe_rshift_func_int16_t_s_s((((void*)0 != &g_45) < (*l_44)), 3)), 0x64B91BF5L))), 9)))), l_44, &g_45), 0x0BL))) , (*l_44)), 1UL))), (*l_44)))), (*l_44)));
        if ((*l_44))
            break;
    }
    return (*l_44);
}



static const uint8_t  func_55(int32_t * p_56, int32_t * p_57, uint32_t  p_58, int32_t * const  p_59, int32_t * p_60)
{ 
    const int16_t l_70[7] = {0x2E96L,(-6L),0x2E96L,0x2E96L,(-6L),0x2E96L,0x2E96L};
    int i;
    return l_70[5];
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_4, "g_4", print_hash_value);
    transparent_crc(g_20, "g_20", print_hash_value);
    transparent_crc(g_45, "g_45", print_hash_value);
    transparent_crc(g_72, "g_72", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 5; k++)
            {
                transparent_crc(g_74[i][j][k], "g_74[i][j][k]", print_hash_value);

            }
        }
    }
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 7; k++)
            {
                transparent_crc(g_102[i][j][k], "g_102[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_111.f0, "g_111.f0", print_hash_value);
    transparent_crc(g_111.f1, "g_111.f1", print_hash_value);
    transparent_crc(g_111.f2, "g_111.f2", print_hash_value);
    transparent_crc(g_126, "g_126", print_hash_value);
    transparent_crc(g_148, "g_148", print_hash_value);
    transparent_crc(g_156, "g_156", print_hash_value);
    transparent_crc(g_176.f1, "g_176.f1", print_hash_value);
    transparent_crc(g_178.f1, "g_178.f1", print_hash_value);
    transparent_crc(g_206, "g_206", print_hash_value);
    transparent_crc(g_257, "g_257", print_hash_value);
    transparent_crc(g_270, "g_270", print_hash_value);
    transparent_crc(g_292, "g_292", print_hash_value);
    transparent_crc(g_318, "g_318", print_hash_value);
    transparent_crc(g_365, "g_365", print_hash_value);
    transparent_crc(g_431, "g_431", print_hash_value);
    transparent_crc(g_433.f1, "g_433.f1", print_hash_value);
    transparent_crc(g_439.f0, "g_439.f0", print_hash_value);
    transparent_crc(g_439.f1, "g_439.f1", print_hash_value);
    transparent_crc(g_439.f2, "g_439.f2", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_445[i], "g_445[i]", print_hash_value);

    }
    transparent_crc(g_525, "g_525", print_hash_value);
    transparent_crc(g_547, "g_547", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
