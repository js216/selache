// SPDX-License-Identifier: MIT
// cctest_csmith_7c788512.c --- cctest case csmith_7c788512 (csmith seed 2088273170)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x105f5934 */
/* @exp_ticks 0x70ef */

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

// Options:   -s 2088273170 -o /tmp/csmith_gen_d5okg0fr/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


#pragma pack(push)
#pragma pack(1)
struct S0 {
   uint16_t  f0;
   int8_t  f1;
   uint8_t  f2;
   uint8_t  f3;
};
#pragma pack(pop)

union U1 {
   uint8_t  f0;
   struct S0  f1;
   int16_t  f2;
};

union U3 {
   int32_t  f0;
};

union U4 {
   uint32_t  f0;
   struct S0  f1;
};

union U6 {
   uint8_t  f0;
   struct S0  f1;
   uint8_t  f2;
   uint32_t  f3;
};

union U7 {
   int32_t  f0;
   int32_t  f1;
   const uint32_t  f2;
};

union U8 {
   uint32_t  f0;
   uint64_t  f1;
};

union U10 {
   uint32_t  f0;
   uint8_t  f1;
};


static uint32_t g_24 = 7UL;
static uint32_t g_27[2] = {0x89F2E072L,0x89F2E072L};
static uint8_t g_37[2][2] = {{250UL,250UL},{250UL,250UL}};
static union U3 g_38[3] = {{0L},{0L},{0L}};
static struct S0 g_40[4][3][3] = {{{{0x0268L,0x9AL,0UL,0xBBL},{65527UL,-1L,249UL,246UL},{0x0268L,0x9AL,0UL,0xBBL}},{{0xA770L,6L,250UL,0UL},{0UL,0x3EL,0UL,0x48L},{0xA770L,6L,250UL,0UL}},{{0x0268L,0x9AL,0UL,0xBBL},{65527UL,-1L,249UL,246UL},{0x0268L,0x9AL,0UL,0xBBL}}},{{{0xA770L,6L,250UL,0UL},{0UL,0x3EL,0UL,0x48L},{0xA770L,6L,250UL,0UL}},{{0x0268L,0x9AL,0UL,0xBBL},{65527UL,-1L,249UL,246UL},{0x0268L,0x9AL,0UL,0xBBL}},{{0xA770L,6L,250UL,0UL},{0UL,0x3EL,0UL,0x48L},{0xA770L,6L,250UL,0UL}}},{{{0x0268L,0x9AL,0UL,0xBBL},{65527UL,-1L,249UL,246UL},{0x0268L,0x9AL,0UL,0xBBL}},{{0xA770L,6L,250UL,0UL},{0UL,0x3EL,0UL,0x48L},{0xA770L,6L,250UL,0UL}},{{0x0268L,0x9AL,0UL,0xBBL},{65527UL,-1L,249UL,246UL},{0x0268L,0x9AL,0UL,0xBBL}}},{{{0xA770L,6L,250UL,0UL},{0UL,0x3EL,0UL,0x48L},{0xA770L,6L,250UL,0UL}},{{0x0268L,0x9AL,0UL,0xBBL},{65527UL,-1L,249UL,246UL},{0x0268L,0x9AL,0UL,0xBBL}},{{0xA770L,6L,250UL,0UL},{0UL,0x3EL,0UL,0x48L},{0xA770L,6L,250UL,0UL}}}};
static union U10 g_58 = {18446744073709551614UL};
static int32_t g_63 = 0xE7F6328DL;
static int64_t g_64 = 0x45DB3902D8B6467BLL;
static uint32_t g_65[1][3][1] = {{{4294967287UL},{4294967287UL},{4294967287UL}}};
static union U6 g_92 = {0x02L};
static union U4 g_93 = {0xF44AA845L};
static uint32_t g_120 = 4294967295UL;
static union U7 g_129[4][1][5] = {{{{5L},{0xA5EFA727L},{5L},{5L},{0xA5EFA727L}}},{{{1L},{-4L},{-4L},{1L},{-4L}}},{{{0xA5EFA727L},{0xA5EFA727L},{1L},{0xA5EFA727L},{0xA5EFA727L}}},{{{-4L},{1L},{-4L},{-4L},{1L}}}};
static union U8 g_155 = {0UL};



static int32_t  func_1(void);
static const uint8_t  func_8(union U6  p_9, uint32_t  p_10, union U4  p_11);
static union U6  func_12(union U3  p_13, union U1  p_14, int64_t  p_15, struct S0  p_16, uint8_t  p_17);
static union U3  func_18(union U8  p_19, union U3  p_20, uint16_t  p_21);




static int32_t  func_1(void)
{ 
    union U8 l_22 = {1UL};
    union U3 l_23[3][2][5] = {{{{-1L},{-2L},{0x45A8CCEDL},{-2L},{-1L}},{{-1L},{9L},{3L},{9L},{5L}}},{{{3L},{9L},{-1L},{-1L},{9L}},{{0x45A8CCEDL},{-2L},{-1L},{9L},{5L}}},{{{-2L},{-1L},{-1L},{0x4B5A9CEAL},{-1L}},{{5L},{5L},{-1L},{0x45A8CCEDL},{0x6992F1E5L}}}};
    union U1 l_39[1][3] = {{{0xDDL},{0xDDL},{0xDDL}}};
    uint32_t l_41 = 9UL;
    int16_t l_109 = 0L;
    uint16_t l_173 = 2UL;
    int i, j, k;
lbl_176:
    if (((safe_div_func_int8_t_s_s((safe_div_func_uint32_t_u_u((safe_add_func_uint8_t_u_u(func_8(func_12(func_18(l_22, l_23[1][1][2], g_24), l_39[0][0], g_24, g_40[2][0][1], l_41), g_58.f1, g_93), l_41)), 0x7F94F023L)), g_58.f0)) ^ l_109))
    { 
        int64_t l_113 = 3L;
        int32_t l_151 = 0x0660AE45L;
        int8_t l_156 = 8L;
        int32_t l_170[5][1][3] = {{{(-10L),(-10L),(-10L)}},{{0L,0L,0L}},{{(-10L),(-10L),(-10L)}},{{0L,0L,0L}},{{(-10L),(-10L),(-10L)}}};
        int i, j, k;
        g_38[2].f0 = (~1UL);
        if (g_58.f0)
            goto lbl_114;
lbl_114:
        l_113 ^= (g_38[2].f0 = (safe_mod_func_int32_t_s_s(1L, g_40[2][0][1].f3)));
        if (((safe_mod_func_uint8_t_u_u(0x4EL, l_113)) && 0x0DL))
        { 
            int8_t l_145[3][1];
            int32_t l_146[3];
            union U3 l_147[4] = {{0L},{0L},{0L},{0L}};
            uint64_t l_150 = 1UL;
            int i, j;
            for (i = 0; i < 3; i++)
            {
                for (j = 0; j < 1; j++)
                    l_145[i][j] = 0x20L;
            }
            for (i = 0; i < 3; i++)
                l_146[i] = 0L;
            for (l_22.f0 = (-30); (l_22.f0 == 11); ++l_22.f0)
            { 
                uint32_t l_119 = 0x70AE80B3L;
                union U3 l_144 = {7L};
                g_38[2].f0 = l_39[0][0].f0;
                g_120 = l_119;
                g_38[2].f0 &= ((((safe_rshift_func_int16_t_s_u((safe_sub_func_int16_t_s_s((safe_lshift_func_int16_t_s_u((safe_mul_func_uint16_t_u_u((g_129[3][0][4] , g_63), (+(safe_lshift_func_int8_t_s_s((l_146[0] ^= (safe_div_func_int8_t_s_s((g_64 && (safe_mod_func_int32_t_s_s((safe_sub_func_uint64_t_u_u((safe_mod_func_int16_t_s_s((safe_rshift_func_uint16_t_u_s((safe_unary_minus_func_uint16_t_u(((l_144 = l_144) , 0UL))), g_40[2][0][1].f3)), 1UL)), g_63)), l_145[0][0]))), 0x36L))), 2))))), l_113)), g_129[3][0][4].f2)), l_119)) == l_22.f0) < g_40[2][0][1].f2) != 0xBDFF3717L);
            }
            l_151 |= ((((l_147[3] , (safe_sub_func_int32_t_s_s(g_40[2][0][1].f0, (((((l_113 > ((((g_93 , 3L) >= g_129[3][0][4].f0) , g_65[0][1][0]) ^ l_23[1][1][2].f0)) || l_147[3].f0) || l_150) | g_24) <= 3UL)))) | g_58.f0) | 0x78L) != 0xDD010A2FL);
            g_129[3][0][4].f1 ^= ((!l_150) > ((safe_add_func_uint32_t_u_u(g_92.f2, (g_155 , g_58.f1))) ^ 0UL));
        }
        else
        { 
            struct S0 l_174 = {65535UL,0xCBL,0x5EL,255UL};
            if ((l_156 ^ ((1UL & (((((g_37[1][0] || ((-3L) > g_64)) ^ g_40[2][0][1].f1) >= g_65[0][1][0]) || (-8L)) ^ l_109)) && 8UL)))
            { 
                uint32_t l_159 = 0UL;
                l_159 = (g_65[0][1][0] , ((safe_add_func_int64_t_s_s(l_113, g_58.f1)) >= 5L));
                return g_40[2][0][1].f3;
            }
            else
            { 
                uint8_t l_171 = 0xF5L;
                int32_t l_172 = 0xD8F8F40BL;
                l_173 ^= (g_64 | ((((safe_add_func_int8_t_s_s(((safe_mod_func_int16_t_s_s((l_23[1][1][2].f0 = ((((safe_add_func_uint16_t_u_u(l_151, ((l_170[2][0][1] &= (((safe_lshift_func_int8_t_s_u(g_63, (safe_sub_func_int16_t_s_s(((0x93L > g_40[2][0][1].f3) < 9L), g_40[2][0][1].f0)))) && g_40[2][0][1].f2) || 4294967295UL)) <= 5UL))) <= l_171) < g_58.f1) != g_27[1])), l_156)) | g_58.f0), l_172)) > g_38[2].f0) | l_156) < (-9L)));
                l_174 = g_40[2][0][1];
            }
        }
        if (l_22.f0)
            goto lbl_176;
    }
    else
    { 
        uint16_t l_175 = 0x32A9L;
        return l_175;
    }
    return l_39[0][0].f0;
}



static const uint8_t  func_8(union U6  p_9, uint32_t  p_10, union U4  p_11)
{ 
    int16_t l_98 = 0L;
    union U1 l_107 = {0x93L};
    int16_t l_108 = 0x418BL;
    for (g_92.f1.f1 = 29; (g_92.f1.f1 >= 1); g_92.f1.f1 = safe_sub_func_uint64_t_u_u(g_92.f1.f1, 8))
    { 
        const uint8_t l_106 = 1UL;
        g_38[2].f0 = (safe_div_func_int8_t_s_s(l_98, (safe_mod_func_int8_t_s_s(((safe_mul_func_int8_t_s_s(((safe_rshift_func_uint8_t_u_u((~((g_63 ^ l_106) == 0x5E0DC07262726E94LL)), p_11.f0)) && g_27[0]), p_11.f0)) | p_9.f0), l_98))));
    }
    l_108 = (l_107 , g_40[2][0][1].f3);
    return g_27[0];
}



static union U6  func_12(union U3  p_13, union U1  p_14, int64_t  p_15, struct S0  p_16, uint8_t  p_17)
{ 
    int16_t l_47 = 1L;
    int32_t l_50 = 1L;
    int32_t l_61 = 1L;
    int32_t l_62[4];
    union U7 l_71[1][4] = {{{5L},{5L},{5L},{5L}}};
    uint16_t l_72 = 0x842DL;
    uint16_t l_88[4];
    const uint16_t l_90 = 0x5F4DL;
    int i, j;
    for (i = 0; i < 4; i++)
        l_62[i] = 0x75FCAA6AL;
    for (i = 0; i < 4; i++)
        l_88[i] = 2UL;
    l_50 = ((1L | ((safe_rshift_func_uint16_t_u_s((+((p_16.f3 > ((((safe_mod_func_uint16_t_u_u(g_37[0][1], (--g_40[2][0][1].f0))) & (((((p_16.f2 || g_27[0]) , g_37[1][1]) ^ 0x65455456L) > 5L) < 0xBA309CE0L)) | 0xC8ECA74BL) < l_47)) <= 0xD7279364L)), 6)) ^ p_15)) >= p_16.f1);
    for (g_24 = 25; (g_24 > 39); g_24 = safe_add_func_int32_t_s_s(g_24, 3))
    { 
        int32_t l_59[3];
        int32_t l_68 = 0L;
        struct S0 l_69 = {1UL,0x66L,1UL,1UL};
        uint16_t l_91 = 0x8EAAL;
        int i;
        for (i = 0; i < 3; i++)
            l_59[i] = 0xBD058558L;
        for (p_14.f2 = 5; (p_14.f2 < (-28)); p_14.f2 = safe_sub_func_int8_t_s_s(p_14.f2, 2))
        { 
            int32_t l_55 = 0x9CBEBA43L;
            uint8_t l_60 = 0x69L;
            p_13.f0 = (p_16.f0 < ((((l_55 , ((safe_div_func_uint8_t_u_u(254UL, p_14.f0)) , g_58)) , p_17) >= l_59[1]) >= l_60));
            --g_65[0][1][0];
        }
        for (p_14.f1.f0 = 0; (p_14.f1.f0 <= 2); p_14.f1.f0 += 1)
        { 
            int8_t l_89 = 0x53L;
            l_68 ^= (l_59[1] ^ (p_15 < l_62[1]));
            for (l_47 = 2; (l_47 >= 0); l_47 -= 1)
            { 
                union U6 l_75[1] = {{0x67L}};
                int32_t l_80 = 0xA1E7967BL;
                int i, j, k;
                p_16 = (g_40[0][1][2] = l_69);
                l_72 = (g_27[0] | ((!p_14.f2) == ((l_71[0][0] , (((g_38[2].f0 , l_61) > p_14.f2) , 5UL)) > p_14.f2)));
                g_38[2].f0 |= (safe_mul_func_uint16_t_u_u((l_75[0] , ((safe_mul_func_uint16_t_u_u((p_16.f0 = ((p_17 = 0xD6L) != (((((safe_lshift_func_uint8_t_u_s((g_37[1][0] = ((l_80 = l_71[0][0].f1) , (((((safe_sub_func_int16_t_s_s(((safe_unary_minus_func_uint16_t_u((l_88[2] = (safe_add_func_int64_t_s_s((safe_lshift_func_uint16_t_u_u(l_59[1], p_16.f0)), p_16.f3))))) > g_24), p_14.f2)) < p_16.f1) , p_13.f0) ^ l_89) >= l_90))), 5)) ^ g_24) | l_91) || l_59[1]) ^ p_13.f0))), 0xC8CEL)) != 0x421085DAL)), g_27[0]));
            }
        }
    }
    return g_92;
}



static union U3  func_18(union U8  p_19, union U3  p_20, uint16_t  p_21)
{ 
    uint32_t l_30[4][1];
    int i, j;
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 1; j++)
            l_30[i][j] = 0xE784B52DL;
    }
    p_20.f0 = (g_24 && (safe_add_func_uint8_t_u_u((((g_27[0] ^= g_24) <= ((safe_add_func_uint32_t_u_u((g_37[0][0] &= (l_30[3][0] | ((safe_add_func_int8_t_s_s((safe_add_func_int64_t_s_s((safe_mod_func_int8_t_s_s(p_21, g_24)), 1L)), 0x57L)) > p_20.f0))), g_24)) , p_21)) > g_24), g_24)));
    return g_38[2];
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_24, "g_24", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_27[i], "g_27[i]", print_hash_value);

    }
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(g_37[i][j], "g_37[i][j]", print_hash_value);

        }
    }
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_38[i].f0, "g_38[i].f0", print_hash_value);

    }
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 3; k++)
            {
                transparent_crc(g_40[i][j][k].f0, "g_40[i][j][k].f0", print_hash_value);
                transparent_crc(g_40[i][j][k].f1, "g_40[i][j][k].f1", print_hash_value);
                transparent_crc(g_40[i][j][k].f2, "g_40[i][j][k].f2", print_hash_value);
                transparent_crc(g_40[i][j][k].f3, "g_40[i][j][k].f3", print_hash_value);

            }
        }
    }
    transparent_crc(g_58.f0, "g_58.f0", print_hash_value);
    transparent_crc(g_58.f1, "g_58.f1", print_hash_value);
    transparent_crc(g_63, "g_63", print_hash_value);
    transparent_crc(g_64, "g_64", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 1; k++)
            {
                transparent_crc(g_65[i][j][k], "g_65[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_92.f0, "g_92.f0", print_hash_value);
    transparent_crc(g_92.f2, "g_92.f2", print_hash_value);
    transparent_crc(g_93.f0, "g_93.f0", print_hash_value);
    transparent_crc(g_120, "g_120", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 5; k++)
            {
                transparent_crc(g_129[i][j][k].f0, "g_129[i][j][k].f0", print_hash_value);
                transparent_crc(g_129[i][j][k].f1, "g_129[i][j][k].f1", print_hash_value);
                transparent_crc(g_129[i][j][k].f2, "g_129[i][j][k].f2", print_hash_value);

            }
        }
    }
    transparent_crc(g_155.f0, "g_155.f0", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
