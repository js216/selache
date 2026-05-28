// SPDX-License-Identifier: MIT
// cctest_csmith_b354cab3.c --- cctest case csmith_b354cab3 (csmith seed 3008678579)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x12b5afae */
/* @exp_ticks 0x3fa8 */

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

// Options:   -s 3008678579 -o /tmp/csmith_gen_18v2lxdz/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


#pragma pack(push)
#pragma pack(1)
struct S0 {
   uint16_t  f0;
   int32_t  f1;
   const int64_t  f2;
   const int64_t  f3;
   int32_t  f4;
};
#pragma pack(pop)

#pragma pack(push)
#pragma pack(1)
struct S1 {
   int32_t  f0;
   uint64_t  f1;
   struct S0  f2;
   struct S0  f3;
};
#pragma pack(pop)

union U2 {
   const int32_t  f0;
};


static int64_t g_8 = 0x1813F1A0734F0946LL;
static int32_t g_10 = 0x141E4F1FL;
static uint16_t g_11 = 3UL;
static int32_t g_31 = (-1L);
static int16_t g_32 = 3L;
static uint32_t g_33 = 0x5D909CC0L;
static uint32_t g_41[5] = {0x403E1FE0L,0x403E1FE0L,0x403E1FE0L,0x403E1FE0L,0x403E1FE0L};
static uint16_t g_44 = 65529UL;
static int16_t g_68 = 0L;
static uint32_t g_72 = 0xB373E231L;
static int16_t g_87 = 0x0D59L;
static int8_t g_88 = 0x50L;
static uint16_t g_89 = 0UL;
static int32_t g_93[3] = {0x5517B9EDL,0x5517B9EDL,0x5517B9EDL};
static int8_t g_94[1][1] = {{(-1L)}};
static int16_t g_95 = 0xB1F9L;
static int64_t g_96 = 0x46B8AB05D55F32A4LL;
static uint32_t g_97 = 0x3F077A86L;
static union U2 g_160[1][3] = {{{-8L},{-8L},{-8L}}};
static uint32_t g_189 = 2UL;
static uint32_t g_198[3][4] = {{18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL},{18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL},{18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL}};
static int16_t g_220 = (-9L);
static uint32_t g_222 = 3UL;



static uint32_t  func_1(void);
static int32_t  func_2(int8_t  p_3, uint64_t  p_4, uint8_t  p_5, uint16_t  p_6, int32_t  p_7);
static uint16_t  func_12(int64_t  p_13, uint16_t  p_14);
static const struct S1  func_15(uint32_t  p_16, uint32_t  p_17);




static uint32_t  func_1(void)
{ 
    int64_t l_9 = 0x5EB2006887E08A11LL;
    int32_t l_265 = (-1L);
    l_265 = func_2(g_8, (g_11 = (g_10 = l_9)), g_8, func_12((g_8 != 0xE1D82C32B96CE028LL), l_9), g_94[0][0]);
    return g_160[0][0].f0;
}



static int32_t  func_2(int8_t  p_3, uint64_t  p_4, uint8_t  p_5, uint16_t  p_6, int32_t  p_7)
{ 
    const uint8_t l_233 = 0x8BL;
    int32_t l_257[4][3] = {{0x51DA70CFL,0x51DA70CFL,0x51DA70CFL},{0x5A1425B3L,0x5A1425B3L,0x5A1425B3L},{0x51DA70CFL,0x51DA70CFL,0x51DA70CFL},{0x5A1425B3L,0x5A1425B3L,0x5A1425B3L}};
    int i, j;
    for (g_220 = 0; (g_220 != 3); ++g_220)
    { 
        int16_t l_237[4] = {0x70E4L,0x70E4L,0x70E4L,0x70E4L};
        int32_t l_238[5][1][3] = {{{0x7EEA750EL,0x7EEA750EL,0x2BCD5C98L}},{{(-1L),(-1L),1L}},{{0L,0L,0x7EEA750EL}},{{0x2C5C37A7L,0x2C5C37A7L,(-1L)}},{{0L,0L,0x7EEA750EL}}};
        struct S0 l_262 = {0x8520L,0x3C473A93L,0x859A50F69613689FLL,0xD98F6770F6782D48LL,4L};
        uint16_t l_263[2];
        int32_t l_264[1];
        int i, j, k;
        for (i = 0; i < 2; i++)
            l_263[i] = 0x6917L;
        for (i = 0; i < 1; i++)
            l_264[i] = 0x2F411FC2L;
        if (g_41[4])
        { 
            uint32_t l_239[5] = {0xC76B7467L,0xC76B7467L,0xC76B7467L,0xC76B7467L,0xC76B7467L};
            int32_t l_253 = (-4L);
            int i;
            for (p_6 = 0; (p_6 >= 53); ++p_6)
            { 
                g_31 = g_11;
            }
            l_239[3] ^= (safe_add_func_int8_t_s_s((safe_div_func_int32_t_s_s(l_233, (l_238[0][0][1] = (g_160[0][1] , (safe_rshift_func_int8_t_s_u((((+(g_160[0][0].f0 && ((0xD27DD38BL | (-1L)) & p_5))) , 0UL) > p_4), l_237[2])))))), g_198[0][3]));
            l_253 = (((safe_div_func_uint16_t_u_u(p_3, ((((safe_mul_func_int16_t_s_s(((safe_lshift_func_int16_t_s_s((g_68 = 0xEF85L), (+((safe_mod_func_uint32_t_u_u((p_4 > (safe_mul_func_int16_t_s_s((safe_add_func_int64_t_s_s((l_239[0] > p_5), p_5)), (-1L)))), g_189)) >= 0x419FL)))) , 0L), g_198[1][1])) & 0xFD5D65EFD601C4F4LL) , 0x48C8L) , p_3))) , l_239[3]) >= p_5);
        }
        else
        { 
            uint16_t l_256 = 1UL;
            l_257[1][1] = (safe_mul_func_uint8_t_u_u((l_256 | g_220), (g_160[0][0].f0 & p_3)));
        }
        p_7 &= (((4UL & ((safe_mod_func_int64_t_s_s((l_238[3][0][1] = 0L), (safe_mod_func_uint32_t_u_u(((((((l_262.f1 = ((l_262 , (g_41[3] |= g_33)) & l_263[1])) , l_257[2][2]) | l_264[0]) ^ p_6) , 5UL) > p_3), p_5)))) , 0xAAL)) == 0xC5L) || 1L);
        l_238[0][0][1] = l_237[2];
    }
    return l_257[2][1];
}



static uint16_t  func_12(int64_t  p_13, uint16_t  p_14)
{ 
    union U2 l_25 = {0L};
    int32_t l_30[2];
    int16_t l_42 = (-6L);
    int16_t l_43 = 0x2BACL;
    int32_t l_45 = 0L;
    int16_t l_108 = 1L;
    uint64_t l_157 = 18446744073709551610UL;
    struct S0 l_166 = {0x86A5L,0L,0xD968C18A0E89C3F4LL,0x54FD7C230D14EE7DLL,0xDB2FC5B6L};
    int16_t l_188[4] = {1L,1L,1L,1L};
    int i;
    for (i = 0; i < 2; i++)
        l_30[i] = 1L;
    l_30[1] = ((func_15(((l_45 ^= (g_44 = ((safe_add_func_uint32_t_u_u((safe_sub_func_uint16_t_u_u(((safe_unary_minus_func_uint16_t_u(((((((safe_rshift_func_uint8_t_u_u(((l_25 , (safe_lshift_func_int8_t_s_s(((safe_mul_func_uint8_t_u_u(p_13, ((g_33--) , ((!l_25.f0) & (((((safe_add_func_int32_t_s_s((safe_lshift_func_int8_t_s_u((((g_41[2] = l_30[1]) || l_30[1]) >= l_42), 2)), l_30[1])) && l_42) , l_43) <= l_43) & g_32))))) || l_30[0]), g_31))) , g_33), g_31)) ^ g_31) && 0x2DD2C990B51ECDE4LL) | g_8) ^ 18446744073709551615UL) == l_42))) , p_14), p_13)), l_30[1])) , 0xF1L))) == 0x30L), l_42) , (-1L)) != 0xD7B8FE932ECC1E89LL);
    --g_97;
    if ((safe_add_func_uint16_t_u_u((((l_25.f0 == (g_96 = (safe_mul_func_int16_t_s_s((l_30[1] = (safe_add_func_int64_t_s_s((safe_lshift_func_uint8_t_u_u((l_45 &= 9UL), 4)), g_32))), (g_89 &= ((l_25.f0 || g_68) < l_108)))))) >= 1L) , p_14), p_14)))
    { 
        uint16_t l_109 = 0x555DL;
        int32_t l_135 = 0xB462DF2AL;
        int32_t l_138 = 0x8B2FA42FL;
        uint8_t l_154 = 254UL;
        uint16_t l_163 = 0xEA19L;
        int32_t l_186 = 0x0FBB080FL;
        int32_t l_187[3][3][5] = {{{8L,8L,0xA1FFCB75L,8L,8L},{0xE1F95EBBL,1L,0xE1F95EBBL,(-4L),(-1L)},{8L,0x06813217L,0x06813217L,8L,0x06813217L}},{{(-1L),1L,(-8L),1L,(-1L)},{0x06813217L,8L,0x06813217L,0x06813217L,8L},{(-1L),(-4L),0xE1F95EBBL,1L,0xE1F95EBBL}},{{8L,8L,0xA1FFCB75L,8L,8L},{0xE1F95EBBL,1L,0xE1F95EBBL,(-4L),(-1L)},{8L,0x06813217L,0x06813217L,8L,0x06813217L}}};
        int i, j, k;
        l_109 = g_88;
        for (g_88 = 0; (g_88 >= (-27)); g_88 = safe_sub_func_int16_t_s_s(g_88, 7))
        { 
            int64_t l_125 = 0x0E4BD68C6BBB4891LL;
            int32_t l_126 = (-1L);
            int32_t l_127 = 0xB573FAD3L;
            struct S1 l_151 = {0L,0xB9B250EA03869566LL,{0x8815L,0xD605D4E9L,1L,0x4574007049AD98C0LL,4L},{65531UL,0xCC30123AL,6L,0x9A0713E252BFD302LL,0xFE48773BL}};
            if ((g_31 = (safe_mul_func_int16_t_s_s(p_14, g_97))))
            { 
                g_31 = ((l_127 = (safe_sub_func_int64_t_s_s(((safe_div_func_uint8_t_u_u((g_95 || ((safe_mod_func_int16_t_s_s(((g_41[2] = (l_126 = (~(safe_mul_func_uint16_t_u_u((safe_lshift_func_uint8_t_u_s(l_30[1], ((l_125 | (g_87 & 0UL)) & p_13))), 1UL))))) || 5UL), g_31)) >= l_125)), g_32)) , l_42), (-8L)))) ^ 0xF621FC311CE4DD9FLL);
                l_45 = (l_138 = (g_31 = (safe_lshift_func_uint8_t_u_s((((safe_add_func_uint8_t_u_u((l_30[0] = (safe_mul_func_uint16_t_u_u((l_135 &= (+0x89039BF0L)), (((l_127 >= 0L) | g_93[0]) < (-2L))))), g_68)) < p_14) | 0L), 6))));
                g_31 = l_126;
            }
            else
            { 
                uint64_t l_152 = 0UL;
                int32_t l_153 = (-10L);
                l_153 = (safe_add_func_int8_t_s_s(l_109, (l_30[1] = ((((((p_14 || (((safe_sub_func_int32_t_s_s(g_89, (safe_add_func_uint8_t_u_u((safe_sub_func_int32_t_s_s((safe_div_func_uint8_t_u_u((0x6FCDL | l_125), g_32)), g_89)), p_14)))) < l_135) <= 0UL)) > 247UL) , l_151) , 1L) == 0x745DD4C4L) == l_152))));
                l_154--;
            }
            if (l_157)
            { 
                int32_t l_164[1];
                int32_t l_165 = 3L;
                int i;
                for (i = 0; i < 1; i++)
                    l_164[i] = 0xBCB4418FL;
                l_126 |= ((safe_sub_func_uint16_t_u_u((((g_31 = ((g_160[0][0] , ((l_165 = ((safe_div_func_uint64_t_u_u(((g_89 & l_163) ^ ((((l_164[0] | g_88) , p_14) && 249UL) & g_41[2])), 0x347C6FEB477BFD40LL)) | p_14)) && l_108)) ^ p_13)) < p_13) , l_135), g_96)) > 0x1DL);
            }
            else
            { 
                g_31 = (l_166 , (((1L < ((safe_mod_func_uint8_t_u_u((g_31 ^ (safe_sub_func_int8_t_s_s((safe_rshift_func_uint8_t_u_s((l_138 = (safe_rshift_func_int8_t_s_s((((safe_sub_func_int64_t_s_s((safe_add_func_int8_t_s_s(((l_30[1] = (safe_rshift_func_int16_t_s_u((safe_add_func_int8_t_s_s((safe_lshift_func_uint8_t_u_s((safe_unary_minus_func_int16_t_s(l_109)), 3)), l_45)), l_166.f3))) < p_13), g_94[0][0])), (-6L))) >= 0xB28A79E9L) > g_96), g_44))), g_31)), 0x79L))), 0x9EL)) == g_41[2])) > 2UL) || 0x339FL));
            }
        }
        ++g_189;
    }
    else
    { 
        const uint16_t l_196 = 65535UL;
        int32_t l_197 = (-1L);
        uint64_t l_217 = 0xD71407DF1CD13059LL;
        int32_t l_219 = 0x83DF84B3L;
        int32_t l_221 = (-8L);
        if ((safe_rshift_func_uint8_t_u_s((g_198[1][3] = (l_197 |= (((((safe_div_func_int64_t_s_s(2L, p_13)) , g_94[0][0]) | ((l_166.f1 |= 1UL) && g_44)) & l_196) <= l_196))), 6)))
        { 
            int32_t l_203 = 0x6082B051L;
            l_203 |= (safe_lshift_func_int8_t_s_u((((65535UL || (((g_96 |= g_68) | l_196) ^ (safe_mul_func_uint8_t_u_u((g_88 > g_93[2]), p_14)))) >= 0x2F90DFB7L) >= g_89), 3));
            for (g_72 = 17; (g_72 > 5); g_72 = safe_sub_func_int8_t_s_s(g_72, 2))
            { 
                return g_41[2];
            }
            return g_198[1][3];
        }
        else
        { 
            uint16_t l_206 = 65531UL;
            int32_t l_211 = (-1L);
            l_206++;
            for (l_166.f4 = 0; (l_166.f4 != 16); l_166.f4 = safe_add_func_uint8_t_u_u(l_166.f4, 4))
            { 
                uint64_t l_212 = 18446744073709551613UL;
                ++l_212;
            }
            for (p_13 = 0; (p_13 == (-15)); p_13--)
            { 
                int8_t l_218 = 1L;
                l_217 = (-3L);
                g_222--;
            }
        }
        return l_221;
    }
    return p_14;
}



static const struct S1  func_15(uint32_t  p_16, uint32_t  p_17)
{ 
    struct S1 l_50[3][3][3] = {{{{0x76DFA536L,0xA9A47FA8275BAED4LL,{65535UL,0x81B38C87L,0x631DBC551464E941LL,0x028B0229B02088C4LL,0L},{0x7743L,0xFF46A2FFL,5L,0x8FB828C20713981DLL,1L}},{0x76DFA536L,0xA9A47FA8275BAED4LL,{65535UL,0x81B38C87L,0x631DBC551464E941LL,0x028B0229B02088C4LL,0L},{0x7743L,0xFF46A2FFL,5L,0x8FB828C20713981DLL,1L}},{-10L,0x3BEA0A54AE8BCD06LL,{65532UL,0x59639808L,-1L,-5L,8L},{0x6059L,-6L,0xB7F2DBF905AFB092LL,0x3419813DA773CE50LL,-3L}}},{{-10L,0UL,{0xC540L,0xDC169712L,0x56B383239552BC05LL,2L,0x8F4F80CFL},{9UL,0L,0xE5A9921A3E708952LL,0x0A6DD691D5B90669LL,0x6F54E6A7L}},{-10L,0x3BEA0A54AE8BCD06LL,{65532UL,0x59639808L,-1L,-5L,8L},{0x6059L,-6L,0xB7F2DBF905AFB092LL,0x3419813DA773CE50LL,-3L}},{-10L,0x3BEA0A54AE8BCD06LL,{65532UL,0x59639808L,-1L,-5L,8L},{0x6059L,-6L,0xB7F2DBF905AFB092LL,0x3419813DA773CE50LL,-3L}}},{{-10L,0x3BEA0A54AE8BCD06LL,{65532UL,0x59639808L,-1L,-5L,8L},{0x6059L,-6L,0xB7F2DBF905AFB092LL,0x3419813DA773CE50LL,-3L}},{0x4B4F5124L,0UL,{8UL,1L,-1L,0x70768350085190ACLL,-6L},{0UL,-3L,-7L,-9L,0xFDF84107L}},{-1L,1UL,{65535UL,0xCF7E1B1CL,0x7F696D9C50E9BCC6LL,-1L,0L},{0x0061L,0x6DBBF4C0L,0x3918A56EC073B9F6LL,0x4B686F2FD6C9D3DALL,0x920033C8L}}}},{{{-10L,0UL,{0xC540L,0xDC169712L,0x56B383239552BC05LL,2L,0x8F4F80CFL},{9UL,0L,0xE5A9921A3E708952LL,0x0A6DD691D5B90669LL,0x6F54E6A7L}},{0x4B4F5124L,0UL,{8UL,1L,-1L,0x70768350085190ACLL,-6L},{0UL,-3L,-7L,-9L,0xFDF84107L}},{-10L,0UL,{0xC540L,0xDC169712L,0x56B383239552BC05LL,2L,0x8F4F80CFL},{9UL,0L,0xE5A9921A3E708952LL,0x0A6DD691D5B90669LL,0x6F54E6A7L}}},{{0x76DFA536L,0xA9A47FA8275BAED4LL,{65535UL,0x81B38C87L,0x631DBC551464E941LL,0x028B0229B02088C4LL,0L},{0x7743L,0xFF46A2FFL,5L,0x8FB828C20713981DLL,1L}},{-10L,0x3BEA0A54AE8BCD06LL,{65532UL,0x59639808L,-1L,-5L,8L},{0x6059L,-6L,0xB7F2DBF905AFB092LL,0x3419813DA773CE50LL,-3L}},{-1L,1UL,{65535UL,0xCF7E1B1CL,0x7F696D9C50E9BCC6LL,-1L,0L},{0x0061L,0x6DBBF4C0L,0x3918A56EC073B9F6LL,0x4B686F2FD6C9D3DALL,0x920033C8L}}},{{0x76DFA536L,0xA9A47FA8275BAED4LL,{65535UL,0x81B38C87L,0x631DBC551464E941LL,0x028B0229B02088C4LL,0L},{0x7743L,0xFF46A2FFL,5L,0x8FB828C20713981DLL,1L}},{0x76DFA536L,0xA9A47FA8275BAED4LL,{65535UL,0x81B38C87L,0x631DBC551464E941LL,0x028B0229B02088C4LL,0L},{0x7743L,0xFF46A2FFL,5L,0x8FB828C20713981DLL,1L}},{-10L,0x3BEA0A54AE8BCD06LL,{65532UL,0x59639808L,-1L,-5L,8L},{0x6059L,-6L,0xB7F2DBF905AFB092LL,0x3419813DA773CE50LL,-3L}}}},{{{-10L,0UL,{0xC540L,0xDC169712L,0x56B383239552BC05LL,2L,0x8F4F80CFL},{9UL,0L,0xE5A9921A3E708952LL,0x0A6DD691D5B90669LL,0x6F54E6A7L}},{-10L,0x3BEA0A54AE8BCD06LL,{65532UL,0x59639808L,-1L,-5L,8L},{0x6059L,-6L,0xB7F2DBF905AFB092LL,0x3419813DA773CE50LL,-3L}},{-10L,0x3BEA0A54AE8BCD06LL,{65532UL,0x59639808L,-1L,-5L,8L},{0x6059L,-6L,0xB7F2DBF905AFB092LL,0x3419813DA773CE50LL,-3L}}},{{-10L,0x3BEA0A54AE8BCD06LL,{65532UL,0x59639808L,-1L,-5L,8L},{0x6059L,-6L,0xB7F2DBF905AFB092LL,0x3419813DA773CE50LL,-3L}},{0x4B4F5124L,0UL,{8UL,1L,-1L,0x70768350085190ACLL,-6L},{0UL,-3L,-7L,-9L,0xFDF84107L}},{-1L,1UL,{65535UL,0xCF7E1B1CL,0x7F696D9C50E9BCC6LL,-1L,0L},{0x0061L,0x6DBBF4C0L,0x3918A56EC073B9F6LL,0x4B686F2FD6C9D3DALL,0x920033C8L}}},{{-10L,0UL,{0xC540L,0xDC169712L,0x56B383239552BC05LL,2L,0x8F4F80CFL},{9UL,0L,0xE5A9921A3E708952LL,0x0A6DD691D5B90669LL,0x6F54E6A7L}},{0x4B4F5124L,0UL,{8UL,1L,-1L,0x70768350085190ACLL,-6L},{0UL,-3L,-7L,-9L,0xFDF84107L}},{-10L,0UL,{0xC540L,0xDC169712L,0x56B383239552BC05LL,2L,0x8F4F80CFL},{9UL,0L,0xE5A9921A3E708952LL,0x0A6DD691D5B90669LL,0x6F54E6A7L}}}}};
    uint32_t l_86[4];
    const struct S1 l_92 = {0x4E1185E6L,1UL,{0UL,0x68AB6310L,1L,-1L,1L},{0UL,5L,1L,-1L,0xE0895C1BL}};
    int i, j, k;
    for (i = 0; i < 4; i++)
        l_86[i] = 1UL;
    l_50[0][1][0].f2.f1 = (safe_div_func_int8_t_s_s((safe_add_func_uint16_t_u_u(g_32, ((l_50[0][1][0] , ((+(((safe_mod_func_uint8_t_u_u(l_50[0][1][0].f1, g_32)) > 0x7571L) && g_31)) == 0x546F8AA4L)) , l_50[0][1][0].f3.f2))), 5L));
    for (p_16 = 0; (p_16 == 33); ++p_16)
    { 
        int32_t l_56 = 0x7B9EACEEL;
        int32_t l_59[3];
        int i;
        for (i = 0; i < 3; i++)
            l_59[i] = 0xCB2E3AA9L;
        l_56 = 0L;
        if (((safe_sub_func_uint32_t_u_u(l_56, (p_17 = (g_32 == (l_59[1] = g_41[2]))))) >= (safe_div_func_uint64_t_u_u((((safe_mod_func_uint64_t_u_u((l_56 , p_16), 6UL)) | g_8) == 0x1874A806017AB3EDLL), g_41[1]))))
        { 
            l_50[0][1][0].f3.f1 = 0x908F88A6L;
        }
        else
        { 
            uint8_t l_66[2][1];
            int32_t l_67 = 1L;
            int i, j;
            for (i = 0; i < 2; i++)
            {
                for (j = 0; j < 1; j++)
                    l_66[i][j] = 0x89L;
            }
            for (g_31 = 0; (g_31 != (-11)); g_31--)
            { 
                uint16_t l_69[4][3][2] = {{{65535UL,65535UL},{0x421FL,65535UL},{65535UL,0x9BB5L}},{{0x0823L,1UL},{0x421FL,0x0823L},{1UL,0x9BB5L}},{{1UL,0x0823L},{0x421FL,1UL},{0x0823L,0x9BB5L}},{{65535UL,65535UL},{0x421FL,65535UL},{65535UL,0x9BB5L}}};
                int i, j, k;
                l_66[0][0] = 0x1833FEF3L;
                --l_69[3][1][0];
            }
            ++g_72;
            for (g_32 = 17; (g_32 != 24); g_32++)
            { 
                const uint32_t l_85[2] = {0xC6D799D5L,0xC6D799D5L};
                int i;
                l_59[1] = (safe_add_func_int32_t_s_s(((safe_add_func_uint16_t_u_u((safe_div_func_uint64_t_u_u(((safe_div_func_uint16_t_u_u((g_44 = (l_85[1] ^ (l_50[0][1][0].f3.f3 > 0xDE28BE021301A5E5LL))), (p_17 ^ g_41[2]))) ^ g_32), p_17)), (-1L))) <= 0x3FE5387FL), 1L));
                if (l_86[1])
                    continue;
                --g_89;
            }
        }
    }
    return l_92;
}





int test_main(void)
{
    int i, j;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_8, "g_8", print_hash_value);
    transparent_crc(g_10, "g_10", print_hash_value);
    transparent_crc(g_11, "g_11", print_hash_value);
    transparent_crc(g_31, "g_31", print_hash_value);
    transparent_crc(g_32, "g_32", print_hash_value);
    transparent_crc(g_33, "g_33", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_41[i], "g_41[i]", print_hash_value);

    }
    transparent_crc(g_44, "g_44", print_hash_value);
    transparent_crc(g_68, "g_68", print_hash_value);
    transparent_crc(g_72, "g_72", print_hash_value);
    transparent_crc(g_87, "g_87", print_hash_value);
    transparent_crc(g_88, "g_88", print_hash_value);
    transparent_crc(g_89, "g_89", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_93[i], "g_93[i]", print_hash_value);

    }
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 1; j++)
        {
            transparent_crc(g_94[i][j], "g_94[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_95, "g_95", print_hash_value);
    transparent_crc(g_96, "g_96", print_hash_value);
    transparent_crc(g_97, "g_97", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transparent_crc(g_160[i][j].f0, "g_160[i][j].f0", print_hash_value);

        }
    }
    transparent_crc(g_189, "g_189", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            transparent_crc(g_198[i][j], "g_198[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_220, "g_220", print_hash_value);
    transparent_crc(g_222, "g_222", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
