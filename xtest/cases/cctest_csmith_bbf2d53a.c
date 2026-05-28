// SPDX-License-Identifier: MIT
// cctest_csmith_bbf2d53a.c --- cctest case csmith_bbf2d53a (csmith seed 3153253690)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x56ac6231 */
/* @exp_ticks 0x3fe0 */

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

// Options:   -s 3153253690 -o /tmp/csmith_gen__q38pjho/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


#pragma pack(push)
#pragma pack(1)
struct S0 {
   uint8_t  f0;
   int64_t  f1;
   int32_t  f2;
   uint32_t  f3;
};
#pragma pack(pop)

union U1 {
   struct S0  f0;
   uint16_t  f1;
   const int32_t  f2;
};


static int8_t g_4 = 0L;
static int32_t g_36 = (-2L);
static uint64_t g_66 = 9UL;
static int32_t g_68 = 3L;
static struct S0 g_69 = {0x98L,-1L,1L,4294967295UL};
static int16_t g_97 = 0xBB87L;
static int32_t g_169 = (-1L);
static uint32_t g_177[3] = {0x47F3D201L,0x47F3D201L,0x47F3D201L};
static int32_t g_182 = 0L;
static int8_t g_187 = 0x0BL;
static int32_t g_189 = 0x5138A19FL;
static uint8_t g_191 = 0x45L;
static struct S0 g_217 = {253UL,1L,0xD8C89FACL,7UL};



static struct S0  func_1(void);
static struct S0  func_5(int32_t  p_6, uint8_t  p_7, const uint32_t  p_8, uint32_t  p_9);
static uint8_t  func_13(uint32_t  p_14, struct S0  p_15, int32_t  p_16, uint8_t  p_17);
static uint32_t  func_18(uint8_t  p_19, int32_t  p_20, int8_t  p_21, int32_t  p_22);




static struct S0  func_1(void)
{ 
    uint32_t l_12 = 0x519D8147L;
    int32_t l_23[1][4];
    int32_t l_24 = (-1L);
    int i, j;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 4; j++)
            l_23[i][j] = 1L;
    }
    g_189 = ((safe_mul_func_int16_t_s_s(g_4, (func_5((safe_sub_func_uint8_t_u_u(l_12, l_12)), func_13(func_18((l_23[0][1] = (18446744073709551612UL | l_12)), g_4, l_12, l_24), g_69, l_12, g_69.f2), g_69.f0, g_4) , l_23[0][3]))) , 0x1AD5033BL);
    for (g_182 = 0; (g_182 == 25); g_182 = safe_add_func_uint32_t_u_u(g_182, 4))
    { 
        for (g_189 = 0; (g_189 >= (-16)); g_189--)
        { 
            return g_69;
        }
    }
    g_68 = ((safe_lshift_func_int8_t_s_u((safe_unary_minus_func_int64_t_s((safe_lshift_func_int8_t_s_u(l_23[0][1], 2)))), ((246UL || (safe_mul_func_int8_t_s_s((l_23[0][1] >= (l_24 = (l_24 , l_24))), 0xA0L))) && l_23[0][1]))) & (-1L));
    return g_217;
}



static struct S0  func_5(int32_t  p_6, uint8_t  p_7, const uint32_t  p_8, uint32_t  p_9)
{ 
    uint64_t l_101 = 0x5B33599DBF4B608ALL;
    int8_t l_104[3];
    uint64_t l_113 = 18446744073709551609UL;
    int32_t l_117 = 0xFDD5005BL;
    union U1 l_123 = {{4UL,-5L,0x38A02C35L,4294967295UL}};
    uint64_t l_150[1][4][4] = {{{0UL,0x7D20874A55526D78LL,0UL,18446744073709551615UL},{0UL,18446744073709551615UL,18446744073709551615UL,0UL},{0xB7E046D47928F96CLL,18446744073709551615UL,0x368F862678A40D3FLL,18446744073709551615UL},{18446744073709551615UL,0x7D20874A55526D78LL,0x368F862678A40D3FLL,0x368F862678A40D3FLL}}};
    int32_t l_179 = (-1L);
    int32_t l_181 = 9L;
    int32_t l_184 = 4L;
    int i, j, k;
    for (i = 0; i < 3; i++)
        l_104[i] = 0xBFL;
    if (((safe_unary_minus_func_uint16_t_u((safe_mod_func_uint64_t_u_u(l_101, (safe_mul_func_int8_t_s_s(0xA8L, l_104[0])))))) == (safe_mod_func_uint16_t_u_u(((safe_div_func_uint64_t_u_u((safe_sub_func_uint32_t_u_u((safe_rshift_func_uint8_t_u_u(l_104[2], g_68)), l_104[0])), l_104[2])) ^ 1L), 0x7726L))))
    { 
        p_6 = ((p_8 > ((g_4 , g_69.f3) <= 0x4AL)) , p_9);
        l_113 &= p_8;
    }
    else
    { 
        uint32_t l_114 = 0UL;
        int64_t l_149[2];
        int i;
        for (i = 0; i < 2; i++)
            l_149[i] = 0xC3ABC2DE9350E5C2LL;
        --l_114;
        if ((l_117 = ((p_7 || g_69.f2) | p_6)))
        { 
            uint16_t l_120 = 0x2A2CL;
            int32_t l_131 = 0xE956BE94L;
            g_36 = (((5L & ((l_120 = (p_7 || (safe_mod_func_int8_t_s_s(0x69L, 5L)))) && (-1L))) | 0xD9L) && g_97);
            g_36 = (safe_lshift_func_uint16_t_u_u((l_117 = ((l_123 , (g_66 |= ((safe_mod_func_int64_t_s_s((safe_unary_minus_func_int16_t_s((l_131 = (p_9 , (g_97 = (safe_div_func_uint64_t_u_u((safe_div_func_int32_t_s_s(l_114, (-6L))), 18446744073709551610UL))))))), l_114)) >= g_69.f0))) ^ p_9)), l_120));
        }
        else
        { 
            uint8_t l_136 = 0UL;
            p_6 |= (g_68 &= (safe_mul_func_uint16_t_u_u(l_113, ((g_69.f3 , (safe_mul_func_uint8_t_u_u((l_136 != ((((safe_mul_func_int16_t_s_s(l_136, 1UL)) & g_69.f3) < 2L) != g_36)), 0x84L))) != p_8))));
        }
        l_117 ^= (safe_div_func_uint8_t_u_u((p_7 = (safe_mod_func_int8_t_s_s((safe_add_func_int8_t_s_s(((((((safe_rshift_func_int8_t_s_s(p_9, 6)) , g_69.f0) , (safe_sub_func_uint32_t_u_u(((((g_69.f0 &= l_149[1]) <= p_8) , g_97) || p_8), l_149[0]))) >= l_149[1]) , l_104[2]) , l_150[0][0][3]), (-8L))), l_114))), p_9));
    }
    for (l_123.f0.f3 = 0; (l_123.f0.f3 <= 2); l_123.f0.f3 += 1)
    { 
        int8_t l_159 = 0x95L;
        union U1 l_174 = {{255UL,0x2A49DC3AFFD700EFLL,0x4A033656L,0x6DE51AEEL}};
        int32_t l_183 = 1L;
        int32_t l_185 = (-1L);
        int32_t l_186[2];
        int i;
        for (i = 0; i < 2; i++)
            l_186[i] = (-1L);
        for (p_7 = 0; (p_7 <= 2); p_7 += 1)
        { 
            int32_t l_160 = 6L;
            struct S0 l_178 = {0UL,1L,0L,5UL};
            int16_t l_188[3];
            int32_t l_190[2][5];
            int i, j;
            for (i = 0; i < 3; i++)
                l_188[i] = 0xD4B2L;
            for (i = 0; i < 2; i++)
            {
                for (j = 0; j < 5; j++)
                    l_190[i][j] = 7L;
            }
            l_160 ^= ((l_117 = (l_159 = ((g_69.f1 = (l_104[l_123.f0.f3] != (safe_mul_func_uint16_t_u_u(((safe_add_func_int32_t_s_s((l_104[p_7] < p_7), (safe_add_func_uint8_t_u_u(((safe_sub_func_uint32_t_u_u(((g_66 != 0x053B13CA6591A880LL) != l_150[0][0][3]), p_7)) >= p_6), 0xC4L)))) > p_8), 0L)))) < (-5L)))) != 18446744073709551615UL);
            if ((((safe_mod_func_int8_t_s_s(((l_117 ^= p_9) > ((l_160 &= ((safe_mod_func_int16_t_s_s((l_123.f0 , (p_9 | ((safe_sub_func_int8_t_s_s(((safe_add_func_uint32_t_u_u((((l_104[l_123.f0.f3] , 4294967295UL) < p_9) == g_36), g_68)) != g_69.f1), p_7)) > g_69.f1))), g_169)) , 18446744073709551612UL)) == 0xBFE20E5FF1E6A96ELL)), 0x86L)) || 0xC7B7L) , l_160))
            { 
                g_177[0] = (safe_mul_func_int8_t_s_s((p_8 , ((safe_add_func_int64_t_s_s(l_150[0][2][1], ((((l_174 , (((safe_mod_func_int8_t_s_s((((9UL == g_97) == 0x54EEA5D277E2D952LL) >= g_69.f2), g_36)) | 6UL) , g_36)) >= g_36) || l_117) | 0x57B682B9L))) ^ p_8)), p_9));
            }
            else
            { 
                int32_t l_180[3][3][5] = {{{0x1553A1BEL,0x1553A1BEL,6L,1L,6L},{0x1553A1BEL,0x1553A1BEL,6L,1L,6L},{0x1553A1BEL,0x1553A1BEL,6L,1L,6L}},{{0x1553A1BEL,0x1553A1BEL,6L,1L,6L},{0x1553A1BEL,0x1553A1BEL,6L,1L,6L},{0x1553A1BEL,0x1553A1BEL,0x7A647BA9L,1L,0x7A647BA9L}},{{6L,6L,0x7A647BA9L,1L,0x7A647BA9L},{6L,6L,0x7A647BA9L,1L,0x7A647BA9L},{6L,6L,0x7A647BA9L,1L,0x7A647BA9L}}};
                int i, j, k;
                l_178 = l_174.f0;
                ++g_191;
            }
            for (l_113 = 0; (l_113 <= 2); l_113 += 1)
            { 
                uint8_t l_194 = 1UL;
                l_194--;
            }
        }
        for (g_182 = 0; (g_182 >= 0); g_182 -= 1)
        { 
            union U1 l_197 = {{1UL,-1L,0x8D086120L,1UL}};
            int i;
            p_6 = ((0UL >= l_104[(g_182 + 1)]) & (p_7 , l_123.f0.f2));
            for (g_169 = 0; (g_169 <= 2); g_169 += 1)
            { 
                int i, j, k;
                l_185 = (l_197 , (safe_lshift_func_uint16_t_u_u(((safe_div_func_uint16_t_u_u((0x6EL && (l_150[g_182][g_169][(g_169 + 1)] == (g_66 = (safe_sub_func_int64_t_s_s((safe_mod_func_uint16_t_u_u(0x4EEAL, 0x59E9L)), g_189))))), l_186[1])) , g_177[0]), l_197.f0.f3)));
                if (g_69.f0)
                    break;
                if (l_150[g_182][g_169][(g_169 + 1)])
                    break;
            }
        }
    }
    return l_123.f0;
}



static uint8_t  func_13(uint32_t  p_14, struct S0  p_15, int32_t  p_16, uint8_t  p_17)
{ 
    uint32_t l_85 = 18446744073709551609UL;
    int32_t l_95 = 4L;
    int32_t l_96[2][1];
    int i, j;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 1; j++)
            l_96[i][j] = 1L;
    }
    g_36 = ((safe_sub_func_uint8_t_u_u(p_15.f1, (safe_add_func_int32_t_s_s((((!p_15.f3) != ((safe_mul_func_int8_t_s_s(((safe_mul_func_uint8_t_u_u(p_17, ((safe_div_func_int16_t_s_s((safe_mod_func_int32_t_s_s((safe_div_func_int16_t_s_s(0x1CFAL, g_69.f3)), l_85)), g_68)) , p_17))) != 0xF261B24C01D5BC3FLL), 255UL)) | l_85)) , g_68), 4294967295UL)))) == 0x15025B92L);
    g_68 &= (!((p_15.f0 = (safe_lshift_func_uint16_t_u_u((g_97 = ((safe_mul_func_int16_t_s_s((safe_sub_func_uint16_t_u_u((((safe_sub_func_int8_t_s_s((l_95 = (p_15.f1 || g_69.f3)), (((p_15.f2 < (((l_96[1][0] <= p_15.f2) >= 0xCAF05E37L) > p_17)) || g_36) < p_15.f2))) && 1L) , g_69.f1), 0x932EL)), l_96[1][0])) >= 255UL)), 0))) | 0x68L));
    return l_85;
}



static uint32_t  func_18(uint8_t  p_19, int32_t  p_20, int8_t  p_21, int32_t  p_22)
{ 
    union U1 l_27 = {{0x0CL,0xAD901516EA3DE81DLL,0x34A2C930L,0x888C5540L}};
    g_36 = ((0UL >= (+(safe_unary_minus_func_uint8_t_u((l_27 , (safe_mul_func_int8_t_s_s((0xD3L == ((safe_div_func_uint32_t_u_u(((safe_div_func_int64_t_s_s((((safe_lshift_func_int16_t_s_u((p_22 == p_21), l_27.f1)) <= g_4) & 0x23L), 18446744073709551615UL)) || l_27.f1), g_4)) & l_27.f0.f3)), 0x9EL))))))) , 9L);
    for (p_21 = (-27); (p_21 >= 16); p_21 = safe_add_func_int8_t_s_s(p_21, 2))
    { 
        uint8_t l_65 = 0UL;
        uint16_t l_67 = 0xA98EL;
        p_22 = ((safe_lshift_func_int8_t_s_u((safe_mul_func_uint8_t_u_u((safe_mod_func_uint32_t_u_u((safe_mod_func_uint64_t_u_u((safe_add_func_uint32_t_u_u((safe_add_func_int64_t_s_s((((((safe_sub_func_int16_t_s_s((safe_rshift_func_uint16_t_u_s(p_21, 1)), ((safe_sub_func_uint32_t_u_u((g_68 = (((safe_div_func_uint16_t_u_u(((safe_mod_func_int32_t_s_s((((safe_lshift_func_uint16_t_u_u((safe_add_func_int32_t_s_s((g_36 | ((((((l_65 & g_36) >= l_65) | 5L) == g_66) <= l_27.f0.f1) , g_66)), 6L)), g_4)) ^ l_67) , p_22), l_65)) > p_21), p_22)) != 0x1265A1B6L) != g_4)), p_20)) != p_21))) <= g_4) & 250UL) && g_68) , 0x9518344157F02CAALL), 0L)), p_21)), l_67)), p_22)), 255UL)), p_22)) < p_20);
    }
    return g_36;
}





int test_main(void)
{
    int i;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_4, "g_4", print_hash_value);
    transparent_crc(g_36, "g_36", print_hash_value);
    transparent_crc(g_66, "g_66", print_hash_value);
    transparent_crc(g_68, "g_68", print_hash_value);
    transparent_crc(g_69.f0, "g_69.f0", print_hash_value);
    transparent_crc(g_69.f1, "g_69.f1", print_hash_value);
    transparent_crc(g_69.f2, "g_69.f2", print_hash_value);
    transparent_crc(g_69.f3, "g_69.f3", print_hash_value);
    transparent_crc(g_97, "g_97", print_hash_value);
    transparent_crc(g_169, "g_169", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_177[i], "g_177[i]", print_hash_value);

    }
    transparent_crc(g_182, "g_182", print_hash_value);
    transparent_crc(g_187, "g_187", print_hash_value);
    transparent_crc(g_189, "g_189", print_hash_value);
    transparent_crc(g_191, "g_191", print_hash_value);
    transparent_crc(g_217.f0, "g_217.f0", print_hash_value);
    transparent_crc(g_217.f1, "g_217.f1", print_hash_value);
    transparent_crc(g_217.f2, "g_217.f2", print_hash_value);
    transparent_crc(g_217.f3, "g_217.f3", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
