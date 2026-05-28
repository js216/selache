// SPDX-License-Identifier: MIT
// cctest_csmith_f94d559b.c --- cctest case csmith_f94d559b (csmith seed 4182594971)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0xee958804 */
/* @exp_ticks 0x5c35 */

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

// Options:   -s 4182594971 -o /tmp/csmith_gen_5cuozaze/csmith.c --concise --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 8 --max-block-size 5 --max-block-depth 4 --max-expr-complexity 8 --max-array-dim 3 --max-array-len-per-dim 7 --max-struct-fields 8 --max-union-fields 5

static long __undefined;


#pragma pack(push)
#pragma pack(1)
struct S0 {
   int32_t  f0;
   const uint32_t  f1;
   uint8_t  f2;
};
#pragma pack(pop)

union U1 {
   uint64_t  f0;
   int8_t * f1;
   const int64_t  f2;
};

union U2 {
   const uint32_t  f0;
   uint32_t  f1;
   uint64_t  f2;
   uint16_t  f3;
};


static int32_t g_2 = 0xF2FB5A5EL;
static int8_t g_25 = 0x5FL;
static int8_t *g_24 = &g_25;
static union U1 g_60 = {18446744073709551615UL};
static uint16_t g_63[1] = {0x32C2L};
static int32_t g_66 = 9L;
static int32_t g_72 = 0L;
static uint16_t g_73[1][6][2] = {{{0UL,0UL},{0UL,0UL},{0UL,0UL},{0UL,0UL},{0UL,0UL},{0UL,0UL}}};
static int32_t g_91 = 2L;
static struct S0 g_92 = {0x505B3EA3L,0xEE22E7E1L,0xF4L};
static int32_t *g_100 = &g_66;
static const int32_t ***g_127 = (void*)0;
static union U2 g_133 = {18446744073709551615UL};
static uint32_t g_136 = 0xEABDE2A9L;
static int16_t *g_144 = (void*)0;
static uint16_t *g_150 = (void*)0;
static int32_t g_179[2][5] = {{6L,(-1L),6L,(-1L),6L},{0x9646ABAFL,0x9646ABAFL,0x9646ABAFL,0x9646ABAFL,0x9646ABAFL}};
static union U1 *g_240 = (void*)0;
static struct S0 g_243 = {2L,2UL,252UL};
static union U1 **g_244 = &g_240;
static int32_t **g_270 = (void*)0;
static int32_t ***g_269 = &g_270;
static int32_t ****g_268 = &g_269;
static int32_t **** const *g_267[7][7] = {{&g_268,(void*)0,&g_268,&g_268,&g_268,&g_268,&g_268},{&g_268,&g_268,&g_268,&g_268,&g_268,&g_268,&g_268},{(void*)0,(void*)0,&g_268,&g_268,&g_268,(void*)0,&g_268},{&g_268,&g_268,&g_268,&g_268,&g_268,&g_268,&g_268},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,&g_268,&g_268},{&g_268,&g_268,(void*)0,&g_268,(void*)0,&g_268,&g_268},{&g_268,&g_268,&g_268,&g_268,&g_268,&g_268,&g_268}};
static int16_t g_283 = (-10L);
static const int16_t *g_282 = &g_283;
static const int16_t **g_281 = &g_282;
static const int16_t ***g_280 = &g_281;
static int16_t g_298 = (-1L);
static uint8_t g_306 = 0xA0L;
static int32_t *****g_371 = &g_268;
static struct S0 *g_496 = &g_243;
static struct S0 **g_495 = &g_496;
static int8_t g_573 = 1L;
static uint32_t g_584 = 0x33516692L;
static uint16_t g_635 = 1UL;
static union U1 g_677 = {18446744073709551609UL};
static int32_t **g_678 = &g_100;
static uint64_t **g_686 = (void*)0;
static uint32_t g_713 = 0xAEFD7A86L;
static int64_t g_843 = 0xC8DDB93868816082LL;
static const struct S0 g_919 = {-9L,0x1B61AD8CL,255UL};
static const struct S0 g_921[3] = {{0x2D979E26L,0xCF4FAE34L,0x3DL},{0x2D979E26L,0xCF4FAE34L,0x3DL},{0x2D979E26L,0xCF4FAE34L,0x3DL}};
static int64_t g_978[3][7] = {{0xE97062C2CD3FF87CLL,1L,0xE97062C2CD3FF87CLL,1L,0xE97062C2CD3FF87CLL,1L,0xE97062C2CD3FF87CLL},{(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)},{0xE97062C2CD3FF87CLL,1L,0xE97062C2CD3FF87CLL,1L,0xE97062C2CD3FF87CLL,1L,0xE97062C2CD3FF87CLL}};
static int32_t *g_1042 = &g_179[0][4];
static uint64_t ***g_1091 = (void*)0;
static uint64_t ****g_1090[3] = {&g_1091,&g_1091,&g_1091};
static int16_t * const *g_1107 = &g_144;
static int16_t * const **g_1106 = &g_1107;
static uint8_t g_1116 = 0xDEL;
static struct S0 g_1165 = {0x663B91D0L,18446744073709551609UL,255UL};
static int32_t g_1233 = 1L;
static uint32_t g_1237 = 18446744073709551614UL;
static int8_t **g_1321 = &g_24;
static int16_t ***g_1427 = (void*)0;
static int16_t ****g_1426 = &g_1427;
static uint16_t g_1450 = 0UL;
static union U2 **g_1515 = (void*)0;
static uint16_t g_1546 = 0x871FL;
static int16_t g_1565 = 0xF084L;
static uint64_t g_1567[2] = {0xCA8A3288F3ECCD87LL,0xCA8A3288F3ECCD87LL};
static uint64_t ***g_1574 = &g_686;
static uint64_t *****g_1590[1] = {&g_1090[2]};
static const union U1 g_1609[1][2] = {{{0UL},{0UL}}};
static int8_t g_1654[3][3][3] = {{{5L,(-4L),(-4L)},{(-6L),0xEBL,0xEBL},{5L,(-4L),(-4L)}},{{(-6L),0xEBL,0xEBL},{5L,(-4L),(-4L)},{(-6L),0xEBL,0xEBL}},{{5L,(-4L),(-4L)},{(-6L),0xEBL,0xEBL},{5L,(-4L),(-4L)}}};
static struct S0 g_1701 = {0x3A962BBAL,4UL,0x77L};
static uint8_t g_1711 = 0UL;
static union U2 *g_1724[7] = {&g_133,&g_133,&g_133,&g_133,&g_133,&g_133,&g_133};
static int32_t g_1748[4] = {(-1L),(-1L),(-1L),(-1L)};
static union U1 g_1817[5] = {{0x4D968221022157D2LL},{0x4D968221022157D2LL},{0x4D968221022157D2LL},{0x4D968221022157D2LL},{0x4D968221022157D2LL}};
static int64_t g_2017[4] = {0xF31FDFC9A279FB15LL,0xF31FDFC9A279FB15LL,0xF31FDFC9A279FB15LL,0xF31FDFC9A279FB15LL};
static int32_t g_2067[4] = {(-10L),(-10L),(-10L),(-10L)};
static union U2 g_2181 = {0x3153ED87L};
static int16_t g_2211 = 0x1A3AL;
static int8_t ****g_2233 = (void*)0;
static uint8_t g_2293 = 0x68L;
static int32_t g_2313 = 1L;
static uint64_t * const ***g_2350 = (void*)0;
static uint8_t g_2353 = 1UL;
static int64_t g_2364 = 1L;



static int8_t  func_1(void);
static struct S0  func_7(int32_t  p_8, int64_t  p_9, int8_t * p_10);
static int8_t * func_12(uint32_t  p_13);
static struct S0  func_14(uint32_t  p_15, int8_t * p_16, int32_t  p_17);
static int8_t * func_18(const union U1  p_19, int8_t * p_20, int8_t * p_21);
static int32_t  func_28(struct S0  p_29);
static struct S0  func_30(int8_t * p_31, int8_t * p_32, int8_t * p_33, int8_t * p_34, union U1  p_35);
static int8_t * func_37(int64_t  p_38, int8_t * const  p_39);




static int8_t  func_1(void)
{ 
    uint16_t l_11 = 1UL;
    const union U1 l_22 = {0xC4AEE5077045B365LL};
    uint16_t l_2262 = 65535UL;
    uint64_t *l_2272 = &g_1567[0];
    int8_t *** const *l_2282[1];
    int8_t *** const **l_2281 = &l_2282[0];
    int32_t ****l_2291 = (void*)0;
    union U1 l_2307[7] = {{1UL},{1UL},{1UL},{1UL},{1UL},{1UL},{1UL}};
    uint8_t l_2365 = 0x16L;
    int32_t l_2381 = 0x73E76294L;
    int16_t l_2403 = 0xF0E3L;
    int i;
    for (i = 0; i < 1; i++)
        l_2282[i] = (void*)0;
lbl_2299:
    for (g_2 = 4; (g_2 == (-20)); g_2 = safe_sub_func_int64_t_s_s(g_2, 1))
    { 
        int8_t *l_23 = (void*)0;
        int32_t l_708 = 3L;
        int32_t *l_2263 = &g_1233;
    }
    (*g_100) = ((((*l_2272)++) , (safe_div_func_int8_t_s_s((safe_mul_func_uint16_t_u_u((safe_mul_func_uint16_t_u_u(l_22.f2, (l_2281 != &l_2282[0]))), (safe_lshift_func_int8_t_s_u((*g_24), (l_22.f2 >= (safe_mod_func_int64_t_s_s((&g_1237 == (void*)0), l_22.f2))))))), l_22.f0))) | g_306);
    for (g_1116 = 7; (g_1116 <= 38); ++g_1116)
    { 
        uint64_t l_2292 = 0UL;
        union U1 l_2310 = {0x87E9F7C02C53580DLL};
        uint32_t l_2404 = 4294967292UL;
        int32_t l_2406 = (-9L);
        if ((safe_mul_func_int8_t_s_s(((**g_495) , (((l_22 , l_2291) == (l_22 , ((*g_371) = (*g_371)))) | (l_2292 > (251UL < l_2292)))), 0UL)))
        { 
            uint64_t *****l_2320[4] = {&g_1090[2],&g_1090[2],&g_1090[2],&g_1090[2]};
            int32_t l_2323 = (-1L);
            uint64_t ****l_2351 = (void*)0;
            uint64_t l_2352 = 0UL;
            int32_t l_2401 = 0x9B10A179L;
            int32_t l_2402 = 1L;
            int32_t l_2405 = 8L;
            int i;
            if (g_2293)
                break;
            for (g_92.f0 = 0; (g_92.f0 > 6); g_92.f0 = safe_add_func_int64_t_s_s(g_92.f0, 3))
            { 
                int32_t *l_2296[6][6] = {{&g_66,&g_66,&g_66,&g_66,&g_66,&g_66},{&g_66,&g_66,&g_66,&g_66,&g_66,&g_66},{&g_66,&g_66,&g_66,&g_66,&g_66,&g_66},{&g_66,&g_66,&g_66,&g_66,&g_66,&g_66},{&g_66,&g_66,&g_66,&g_66,&g_66,&g_66},{&g_66,&g_66,&g_66,&g_66,&g_66,&g_66}};
                const union U1 l_2319 = {0x022EB11DCCF7767CLL};
                int64_t *l_2355 = &g_978[0][2];
                int32_t ****l_2363[3][4][7] = {{{&g_269,(void*)0,&g_269,&g_269,&g_269,&g_269,(void*)0},{&g_269,&g_269,&g_269,&g_269,&g_269,(void*)0,&g_269},{&g_269,&g_269,&g_269,(void*)0,(void*)0,&g_269,(void*)0},{(void*)0,&g_269,&g_269,&g_269,&g_269,&g_269,(void*)0}},{{(void*)0,(void*)0,&g_269,&g_269,&g_269,(void*)0,(void*)0},{&g_269,&g_269,&g_269,&g_269,&g_269,(void*)0,&g_269},{&g_269,&g_269,&g_269,&g_269,&g_269,&g_269,(void*)0},{(void*)0,&g_269,&g_269,(void*)0,&g_269,&g_269,&g_269}},{{&g_269,(void*)0,&g_269,&g_269,(void*)0,&g_269,&g_269},{(void*)0,&g_269,&g_269,&g_269,&g_269,&g_269,(void*)0},{(void*)0,&g_269,(void*)0,&g_269,&g_269,(void*)0,&g_269},{&g_269,&g_269,&g_269,&g_269,&g_269,&g_269,&g_269}}};
                int i, j, k;
                (*g_678) = l_2296[5][1];
                for (g_243.f2 = 20; (g_243.f2 < 42); g_243.f2 = safe_add_func_int16_t_s_s(g_243.f2, 1))
                { 
                    int32_t l_2302 = 8L;
                    if (l_22.f2)
                        goto lbl_2299;
                    (**g_678) ^= (safe_sub_func_uint8_t_u_u(l_2302, (safe_div_func_int8_t_s_s((((safe_lshift_func_int16_t_s_u(((l_2307[5] , 0x6BL) | (((**g_1321) = (safe_add_func_int8_t_s_s((l_2310 , l_2310.f0), (safe_sub_func_uint8_t_u_u(1UL, 0x18L))))) && 0x51L)), l_2302)) >= g_2313) != l_2310.f0), 0x9DL))));
                    return (**g_1321);
                }
                for (g_1546 = 0; (g_1546 <= 2); g_1546 += 1)
                { 
                    int32_t l_2324 = 0x8CAEB4B5L;
                    int32_t l_2325 = 0x00C973DCL;
                    uint8_t *l_2326 = &g_92.f2;
                    uint32_t *l_2354[2][3] = {{&g_1237,&g_1237,&g_1237},{&g_1237,&g_1237,&g_1237}};
                    int64_t *l_2356[3];
                    union U2 ***l_2382[3][5][6] = {{{&g_1515,(void*)0,&g_1515,&g_1515,&g_1515,&g_1515},{&g_1515,&g_1515,&g_1515,(void*)0,(void*)0,&g_1515},{&g_1515,&g_1515,&g_1515,&g_1515,&g_1515,(void*)0},{&g_1515,(void*)0,&g_1515,&g_1515,(void*)0,&g_1515},{&g_1515,&g_1515,&g_1515,&g_1515,&g_1515,(void*)0}},{{&g_1515,&g_1515,&g_1515,&g_1515,&g_1515,&g_1515},{&g_1515,&g_1515,&g_1515,&g_1515,&g_1515,&g_1515},{&g_1515,(void*)0,&g_1515,&g_1515,&g_1515,&g_1515},{&g_1515,&g_1515,(void*)0,&g_1515,&g_1515,(void*)0},{&g_1515,(void*)0,&g_1515,&g_1515,&g_1515,&g_1515}},{{&g_1515,&g_1515,(void*)0,(void*)0,&g_1515,&g_1515},{&g_1515,&g_1515,&g_1515,&g_1515,&g_1515,(void*)0},{&g_1515,&g_1515,(void*)0,&g_1515,(void*)0,&g_1515},{&g_1515,(void*)0,&g_1515,&g_1515,&g_1515,&g_1515},{&g_1515,&g_1515,&g_1515,(void*)0,(void*)0,&g_1515}}};
                    int i, j, k;
                    for (i = 0; i < 3; i++)
                        l_2356[i] = &g_978[0][2];
                    (**g_678) = (safe_add_func_uint8_t_u_u(((*l_2326) |= (((((+(safe_mod_func_uint64_t_u_u(((l_2319 , ((g_1590[0] = l_2320[3]) != &g_1090[g_1546])) || (safe_lshift_func_uint8_t_u_s(g_1654[g_1546][g_1546][g_1546], 0))), ((g_1654[g_1546][g_1546][g_1546] , ((l_2324 = ((l_2323 != 0x56L) , g_243.f1)) & 0xBB62B9BBL)) ^ 5UL)))) ^ l_2325) & l_2323) , l_2310.f2) , g_60.f0)), (*g_24)));
                    l_2324 = (((safe_rshift_func_int16_t_s_u(((((safe_mul_func_uint8_t_u_u(l_2292, g_919.f2)) , (safe_lshift_func_int8_t_s_s((safe_add_func_uint8_t_u_u((safe_unary_minus_func_int64_t_s((((*g_282) <= ((safe_mod_func_int64_t_s_s(((*l_2355) = ((safe_div_func_int16_t_s_s((safe_mod_func_int16_t_s_s(((***g_280) <= (((((g_1237 = (safe_lshift_func_uint16_t_u_s(((safe_mul_func_uint16_t_u_u((((safe_sub_func_uint8_t_u_u(((0x4765L || ((((safe_sub_func_uint16_t_u_u(((((g_2350 = g_2350) == l_2351) == l_2323) || l_2325), l_2325)) , l_2292) >= l_2352) , l_2352)) == g_1654[g_1546][g_1546][g_1546]), g_179[1][0])) , g_2353) ^ g_919.f0), 0xF452L)) & 0xBD784E6EA63593A2LL), l_2310.f2))) , l_2355) == l_2356[1]) , g_677.f0) || g_978[0][2])), 0x7D04L)), 65533UL)) & 1UL)), 2UL)) > (*g_282))) , 0L))), g_1233)), l_2323))) || g_179[0][3]) | 0xBC47L), g_2293)) && 0xA548116017DD6611LL) ^ (*g_282));
                    (*g_100) = (g_1609[0][1] , (((safe_lshift_func_int16_t_s_s(((safe_div_func_int16_t_s_s((((((safe_rshift_func_int8_t_s_s((**g_1321), (g_1654[g_1546][g_1546][g_1546] &= 0x85L))) , (*g_371)) != l_2363[0][0][0]) < g_2364) , ((((g_63[0] | l_2365) < l_2323) , (void*)0) == (void*)0)), 0xE620L)) <= 0xD590L), 3)) <= l_2352) ^ 0xDDACF115L));
                    (**g_678) |= (((((((safe_mod_func_int8_t_s_s(((safe_sub_func_int16_t_s_s(l_2352, (safe_sub_func_int16_t_s_s(l_2292, (((safe_add_func_uint64_t_u_u(18446744073709551615UL, ((((*l_2355) = (-2L)) <= (--(*l_2272))) && (l_2324 | ((((((((safe_mod_func_int16_t_s_s(g_1654[g_1546][g_1546][g_1546], (safe_div_func_int8_t_s_s((!((*l_2355) = (l_2310 , 0x0CF09760387FDDEALL))), l_2324)))) <= g_2067[3]) , g_1654[g_1546][g_1546][g_1546]) <= g_1654[g_1546][g_1546][g_1546]) | l_2381) && l_2310.f2) | g_677.f0) , (***g_280)))))) , &g_1515) != l_2382[2][1][1]))))) >= 0x1232L), g_1654[g_1546][g_1546][g_1546])) , g_1748[1]) < g_1654[g_1546][g_1546][g_1546]) < 65532UL) <= l_2292) ^ l_2310.f2) ^ l_2310.f2);
                    g_1724[4] = &g_2181;
                }
                return (**g_1321);
            }
            l_2406 |= (safe_lshift_func_int8_t_s_u(((safe_div_func_uint16_t_u_u((l_2310.f2 , ((safe_mul_func_int16_t_s_s(l_2352, ((l_2323 = (((safe_div_func_int8_t_s_s((safe_div_func_uint32_t_u_u((safe_add_func_uint8_t_u_u((safe_lshift_func_int8_t_s_s((safe_mod_func_int32_t_s_s(((**g_678) |= (18446744073709551615UL > l_2323)), (safe_sub_func_int8_t_s_s(((l_2401 |= 0xCFL) < ((l_2402 = ((*g_1042) = ((l_2310.f2 || (g_843 != g_25)) <= 0x92L))) < l_2310.f2)), 0xA4L)))), l_2310.f2)), g_2067[3])), l_2292)), l_2292)) & l_2403) && l_2401)) , l_2404))) && (*g_282))), l_2404)) && l_2405), 1));
            if (l_2405)
                break;
        }
        else
        { 
            if (l_2404)
                break;
            return l_2404;
        }
    }
    (*g_1042) |= l_2403;
    l_2281 = &l_2282[0];
    return l_2365;
}



static struct S0  func_7(int32_t  p_8, int64_t  p_9, int8_t * p_10)
{ 
    const union U1 l_1811 = {4UL};
    int8_t * const l_1814[7][1][3] = {{{&g_573,&g_573,&g_25}},{{&g_573,&g_1654[0][0][1],&g_573}},{{&g_573,&g_25,&g_25}},{{&g_1654[0][0][2],&g_1654[0][0][1],&g_1654[0][0][2]}},{{&g_573,&g_573,&g_25}},{{&g_573,&g_1654[0][0][1],&g_573}},{{&g_573,&g_25,&g_25}}};
    uint64_t *l_1815 = (void*)0;
    int16_t *l_1826[2][1];
    int32_t l_1838 = (-1L);
    uint16_t l_1839 = 2UL;
    int32_t l_1864 = 0x181893FDL;
    int32_t l_1866[5][6][7] = {{{0x51F82C4CL,1L,4L,0x8C769617L,0x8258F949L,0x8258F949L,0x8C769617L},{0x29C7534DL,0L,0x29C7534DL,1L,0x4031F5CAL,1L,(-10L)},{9L,1L,0x8C769617L,1L,0xD62672ECL,0L,0x51F82C4CL},{1L,0x181DCE3DL,0x1AD25353L,0x29C7534DL,(-6L),0L,1L},{0xD62672ECL,(-5L),0L,9L,0xB521714DL,0xA9CEA6A0L,0L},{0xE6B03F96L,0L,(-1L),1L,(-8L),1L,(-1L)}},{{(-5L),(-5L),1L,(-1L),9L,0xF40412D1L,4L},{1L,(-6L),0x181DCE3DL,2L,(-1L),0L,0L},{9L,0x8C769617L,2L,0x8C769617L,9L,(-5L),0x8258F949L},{1L,(-10L),0xE6B03F96L,0x1DD748F0L,(-8L),0x1AD25353L,0L},{0xE61A9315L,0x51F82C4CL,(-1L),0xB521714DL,0xB521714DL,(-1L),0x51F82C4CL},{1L,0x1DD748F0L,(-10L),1L,(-6L),0x181DCE3DL,2L}},{{9L,0xF40412D1L,4L,2L,0L,0xB521714DL,0L},{1L,0xE52CC642L,0xE52CC642L,1L,0L,2L,0xE6B03F96L},{(-5L),0L,9L,0xB521714DL,0xA9CEA6A0L,0L,0x8C769617L},{0xE6B03F96L,0x4031F5CAL,2L,0x1DD748F0L,2L,0x4031F5CAL,0xE6B03F96L},{0xD62672ECL,0xE61A9315L,0xF40412D1L,0x8C769617L,(-5L),0x51F82C4CL,0L},{0L,1L,0x1AD25353L,2L,1L,1L,2L}},{{0xF40412D1L,1L,0xF40412D1L,(-1L),0L,1L,0x51F82C4CL},{0x4031F5CAL,(-8L),2L,1L,0xE52CC642L,(-10L),0L},{1L,0xD62672ECL,9L,9L,0xD62672ECL,1L,0x8258F949L},{(-6L),2L,0xE52CC642L,0x29C7534DL,0x1AD25353L,1L,0L},{2L,1L,4L,0x51F82C4CL,0x8C769617L,0x51F82C4CL,4L},{2L,2L,(-10L),0x181DCE3DL,0x29C7534DL,0x4031F5CAL,(-1L)}},{{0x8258F949L,0xD62672ECL,(-1L),(-5L),4L,0L,0L},{0x29C7534DL,(-8L),0xE6B03F96L,(-8L),0x29C7534DL,2L,1L},{0xA9CEA6A0L,1L,2L,0xE61A9315L,0x8C769617L,0xB521714DL,1L},{0x1DD748F0L,1L,0x181DCE3DL,0x1AD25353L,0x1AD25353L,0x181DCE3DL,1L},{0xA9CEA6A0L,0xE61A9315L,1L,0x8258F949L,0xD62672ECL,(-1L),(-5L)},{0x29C7534DL,0x4031F5CAL,(-1L),0xE6B03F96L,0xE52CC642L,0x1AD25353L,0xE52CC642L}}};
    int32_t *l_1871 = &g_1701.f0;
    int32_t **** const l_1882[4] = {&g_269,&g_269,&g_269,&g_269};
    struct S0 l_1912 = {-1L,0UL,0x00L};
    int16_t l_1915 = 0L;
    int16_t l_1916[5] = {5L,5L,5L,5L,5L};
    uint8_t l_1917[7] = {0xC3L,0xC3L,0UL,0xC3L,0xC3L,0UL,0xC3L};
    uint8_t *l_1920 = &g_1711;
    int32_t **l_1921 = &g_1042;
    int32_t **l_1922 = (void*)0;
    int32_t **l_1923 = (void*)0;
    int32_t **l_1924 = (void*)0;
    int16_t **l_1930 = &l_1826[0][0];
    int16_t ***l_1929 = &l_1930;
    int64_t l_1970[3][7] = {{0xB521C037786C7FA4LL,0xA486158AB28B61DCLL,0xA486158AB28B61DCLL,0xB521C037786C7FA4LL,0x086CEF1331B7DC3ELL,0xCDB55AC270B892D7LL,0xB521C037786C7FA4LL},{0xCDB55AC270B892D7LL,0xB1628E25B3334AF2LL,0x086CEF1331B7DC3ELL,0x086CEF1331B7DC3ELL,0xB1628E25B3334AF2LL,0xCDB55AC270B892D7LL,0xA486158AB28B61DCLL},{0xB1628E25B3334AF2LL,0xB521C037786C7FA4LL,0xF71148615A1640C7LL,0x19BBD4ABBCC11EB3LL,0x19BBD4ABBCC11EB3LL,0xF71148615A1640C7LL,0xB521C037786C7FA4LL}};
    int64_t l_2076 = 7L;
    uint16_t l_2090 = 0x43F8L;
    struct S0 **l_2109[5] = {&g_496,&g_496,&g_496,&g_496,&g_496};
    int32_t l_2170[1];
    union U2 ***l_2177[7] = {&g_1515,&g_1515,&g_1515,&g_1515,&g_1515,&g_1515,&g_1515};
    union U2 ****l_2176 = &l_2177[0];
    uint16_t l_2201[5] = {0UL,0UL,0UL,0UL,0UL};
    int i, j, k;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 1; j++)
            l_1826[i][j] = &g_283;
    }
    for (i = 0; i < 1; i++)
        l_2170[i] = 0x7EE0456BL;
    if ((((safe_mul_func_uint16_t_u_u(0xC467L, (func_14((safe_add_func_int16_t_s_s(((func_30(p_10, p_10, p_10, p_10, l_1811) , (void*)0) == l_1815), 1UL)), p_10, l_1811.f0) , 0UL))) , p_9) & 1UL))
    { 
        const union U1 *l_1816 = &g_1817[3];
        l_1816 = &l_1811;
        if (l_1811.f0)
            goto lbl_1914;
        (*g_1042) = ((void*)0 == p_10);
    }
    else
    { 
        uint32_t l_1833[4][6] = {{0xEE294AC7L,0xEE294AC7L,0xEE294AC7L,0xEE294AC7L,0xEE294AC7L,0xEE294AC7L},{0xEE294AC7L,0xEE294AC7L,0xEE294AC7L,0xEE294AC7L,0xEE294AC7L,0xEE294AC7L},{0xEE294AC7L,0xEE294AC7L,0xEE294AC7L,0xEE294AC7L,0xEE294AC7L,0xEE294AC7L},{0xEE294AC7L,0xEE294AC7L,0xEE294AC7L,0xEE294AC7L,0xEE294AC7L,0xEE294AC7L}};
        int16_t **l_1862 = (void*)0;
        int32_t l_1863 = 0L;
        int32_t *l_1872 = (void*)0;
        int32_t l_1896[5][4] = {{0x935216E5L,0x89EB1645L,0x0570D6A2L,0x89EB1645L},{0x89EB1645L,0x8C19D9D9L,0x0570D6A2L,0x0570D6A2L},{0x935216E5L,0x935216E5L,0x89EB1645L,0x0570D6A2L},{0x763FED2FL,0x8C19D9D9L,0x763FED2FL,0x89EB1645L},{0x763FED2FL,0x89EB1645L,0x89EB1645L,0x763FED2FL}};
        uint64_t l_1897 = 0x77D39C55BD8DC163LL;
        struct S0 l_1909 = {-1L,1UL,2UL};
        int i, j;
        for (g_1165.f2 = (-1); (g_1165.f2 == 20); g_1165.f2 = safe_add_func_uint8_t_u_u(g_1165.f2, 5))
        { 
            uint8_t l_1836 = 255UL;
            uint8_t *l_1837 = &g_243.f2;
            uint64_t *****l_1844 = &g_1090[2];
            uint64_t *l_1861 = &g_60.f0;
            uint64_t *l_1865[7][3] = {{&g_1817[3].f0,&g_1567[0],&g_1817[3].f0},{&g_1567[0],&g_1567[0],&g_1817[3].f0},{&g_1567[0],&g_1567[0],&g_1567[0]},{&g_1567[0],&g_1817[3].f0,&g_1817[3].f0},{&g_1817[3].f0,&g_1567[0],&g_1817[3].f0},{&g_1567[0],&g_1567[0],&g_1817[3].f0},{&g_1567[0],&g_1567[0],&g_1567[0]}};
            int16_t l_1870 = (-1L);
            int32_t l_1895[7][4][1] = {{{1L},{(-10L)},{1L},{(-10L)}},{{1L},{(-10L)},{1L},{(-10L)}},{{1L},{(-10L)},{1L},{(-10L)}},{{1L},{(-10L)},{1L},{(-10L)}},{{1L},{(-10L)},{1L},{(-10L)}},{{1L},{(-10L)},{1L},{(-10L)}},{{1L},{(-10L)},{1L},{(-10L)}}};
            int64_t l_1903 = 0x8AC35D85C87CC20BLL;
            uint8_t l_1906 = 3UL;
            int i, j, k;
            (*g_1042) = (l_1839 = (safe_lshift_func_int16_t_s_u((((l_1838 = ((0x7EFCE43D15F3A9EALL < (((safe_rshift_func_uint8_t_u_u(g_713, 2)) != (((void*)0 == l_1826[0][0]) > (safe_rshift_func_uint8_t_u_s(((*l_1837) &= (safe_sub_func_uint64_t_u_u((safe_mod_func_int32_t_s_s(0xED7C438AL, (l_1833[0][1] || (g_1565 ^= (((safe_rshift_func_int8_t_s_u(((*p_10) != p_9), 2)) , 0UL) ^ l_1836))))), 18446744073709551606UL))), (*p_10))))) , 3L)) | 0xA100390DD7C80348LL)) == 1UL) , l_1836), 10)));
            if (((((safe_lshift_func_int8_t_s_u(((((l_1866[1][0][2] = ((l_1864 ^= ((l_1844 == (g_1590[0] = ((safe_mul_func_uint16_t_u_u((g_978[0][0] || ((((l_1863 = (((*p_10) , (safe_mul_func_int8_t_s_s(((l_1838 = (safe_div_func_int8_t_s_s((safe_mul_func_int8_t_s_s(0L, ((safe_mod_func_int32_t_s_s(((safe_lshift_func_uint8_t_u_u(((((**g_1321) = (*p_10)) > (safe_mul_func_int16_t_s_s(((((*l_1861) = (safe_mul_func_uint8_t_u_u(g_92.f0, ((1UL ^ g_243.f1) & 0x905FL)))) , (*g_280)) == l_1862), l_1811.f2))) < 0UL), 6)) <= p_9), p_8)) != p_8))), l_1811.f0))) && 0x8CC3D0C97A783E97LL), g_1701.f0))) < (-1L))) ^ p_9) >= g_713) < l_1836)), 0x1AB0L)) , &g_1090[2]))) ^ p_8)) , l_1811.f2)) , l_1836) == g_63[0]) & l_1836), 3)) | (-1L)) == p_8) | 0L))
            { 
                for (g_1701.f0 = (-27); (g_1701.f0 < (-22)); ++g_1701.f0)
                { 
                    struct S0 l_1869 = {0xAC26D445L,0xCB7B5AEEL,0xAFL};
                    return l_1869;
                }
                if (l_1870)
                    continue;
            }
            else
            { 
                uint32_t l_1873 = 0x05E9B07FL;
                l_1872 = l_1871;
                for (g_713 = 0; (g_713 <= 6); g_713 += 1)
                { 
                    --l_1873;
                }
                (*g_244) = (((((safe_add_func_uint8_t_u_u((g_1711 ^= (((*l_1871) = p_8) , (*l_1871))), (p_9 != (safe_mod_func_uint8_t_u_u(8UL, ((*l_1837) |= (safe_mul_func_uint8_t_u_u(((((*g_371) = (*g_371)) != l_1882[2]) , ((l_1873 & (***g_280)) && 0xD4C9C95BL)), l_1873)))))))) || p_8) > l_1836) < 0UL) , (*g_244));
                (*g_1042) ^= ((safe_rshift_func_uint8_t_u_s(0x43L, (safe_mod_func_int64_t_s_s((safe_rshift_func_uint8_t_u_u(0x54L, ((p_8 | 250UL) != 0L))), ((*l_1861) |= (safe_div_func_int64_t_s_s(((safe_div_func_uint64_t_u_u((safe_rshift_func_uint16_t_u_s(1UL, (*l_1872))), p_8)) & 0x5EAF54D5L), p_9))))))) , p_8);
            }
            --l_1897;
            for (g_243.f0 = 0; (g_243.f0 >= 0); g_243.f0 -= 1)
            { 
                uint32_t l_1900 = 0UL;
                int32_t l_1904 = 1L;
                int32_t l_1905[3];
                int i;
                for (i = 0; i < 3; i++)
                    l_1905[i] = (-2L);
                (*g_678) = &l_1895[4][0][0];
                for (g_92.f0 = 0; (g_92.f0 <= 2); g_92.f0 += 1)
                { 
                    int i, j;
                    if (g_978[(g_243.f0 + 2)][(g_243.f0 + 6)])
                        break;
                    if (p_9)
                        break;
                }
                l_1900++;
                --l_1906;
                for (g_298 = 0; (g_298 <= 0); g_298 += 1)
                { 
                    return l_1909;
                }
            }
            for (g_1233 = 0; (g_1233 == 24); g_1233 = safe_add_func_uint64_t_u_u(g_1233, 5))
            { 
                return l_1912;
            }
        }
        (*l_1871) = (*l_1871);
    }
lbl_1914:
    for (g_298 = 4; (g_298 >= 0); g_298 -= 1)
    { 
        struct S0 l_1913[6] = {{0x800D8B55L,0xF3C5544CL,0x18L},{0x800D8B55L,0xF3C5544CL,0x18L},{0x800D8B55L,0xF3C5544CL,0x18L},{0x800D8B55L,0xF3C5544CL,0x18L},{0x800D8B55L,0xF3C5544CL,0x18L},{0x800D8B55L,0xF3C5544CL,0x18L}};
        int i;
        return l_1913[0];
    }
    l_1915 |= ((*g_1042) &= (*l_1871));
    --l_1917[2];
    if (((**l_1921) = ((((*g_1426) == (((l_1912 , (((*l_1920) ^= 0xABL) & ((l_1922 = l_1921) == (l_1924 = l_1923)))) > (safe_mul_func_uint16_t_u_u(g_1748[1], ((safe_lshift_func_uint16_t_u_u(g_92.f0, 5)) > (**g_1321))))) , l_1929)) < 18446744073709551615UL) ^ p_9)))
    { 
        int32_t l_1942 = 3L;
        int32_t l_1945 = 0xA6FDE0C0L;
        int32_t l_1949[4][6][2] = {{{0L,0x33662464L},{0x914C4E17L,(-1L)},{0x33662464L,(-1L)},{0x914C4E17L,0x33662464L},{0L,0L},{0L,0x33662464L}},{{0x914C4E17L,(-1L)},{0x33662464L,(-1L)},{0x914C4E17L,0x33662464L},{0L,0L},{0L,0x33662464L},{0x914C4E17L,(-1L)}},{{0x33662464L,(-1L)},{0x914C4E17L,0x33662464L},{0L,0L},{0L,0x33662464L},{0x914C4E17L,(-1L)},{0x33662464L,(-1L)}},{{0x914C4E17L,0x33662464L},{0L,0L},{0L,0x33662464L},{0x914C4E17L,0L},{0x914C4E17L,0L},{0x70B79C50L,0x914C4E17L}}};
        struct S0 l_1975 = {0x8A93FB49L,0x6C7B671DL,0xCFL};
        uint32_t l_1976 = 0x0BB0A457L;
        int32_t *l_2035 = &g_1748[1];
        int64_t l_2068 = 0x81E03F54CEC048CALL;
        union U2 l_2088 = {0x44621C07L};
        int i, j, k;
        for (l_1839 = 0; (l_1839 >= 21); ++l_1839)
        { 
            int16_t *** const *l_1936 = &g_1427;
            int32_t l_1943 = 0xBCF3D779L;
            int32_t l_1944 = 0x3166F953L;
            int32_t l_1946 = (-9L);
            int32_t l_1953 = 0x5827E65AL;
            int32_t l_1962[1][5][1] = {{{0xBD47B207L},{0x7C6B32D2L},{0xBD47B207L},{0x7C6B32D2L},{0xBD47B207L}}};
            int16_t l_1964 = 0L;
            int8_t l_1965 = 1L;
            uint32_t l_1972 = 5UL;
            const uint64_t *l_2016 = &g_677.f0;
            const uint64_t **l_2015 = &l_2016;
            union U1 l_2029 = {18446744073709551615UL};
            int32_t **l_2046 = &g_1042;
            int16_t l_2065 = 0xDF7CL;
            int32_t l_2072[1][3][2];
            uint32_t l_2078 = 0x79CC70A7L;
            uint64_t l_2081 = 0x028793563303444ALL;
            union U2 l_2087 = {0xF23EDB18L};
            const uint32_t *l_2089 = &l_2087.f1;
            int i, j, k;
            for (i = 0; i < 1; i++)
            {
                for (j = 0; j < 3; j++)
                {
                    for (k = 0; k < 2; k++)
                        l_2072[i][j][k] = 0xB0C1D2A9L;
                }
            }
            for (g_1565 = 0; (g_1565 >= 0); g_1565 -= 1)
            { 
                int32_t l_1955 = 4L;
                int32_t l_1957 = 8L;
                int32_t l_1958[6][6] = {{0xD149468CL,0xD149468CL,0x58DD4FFFL,0xD275ECC4L,0x58DD4FFFL,0xD149468CL},{0x58DD4FFFL,0xF2D664D7L,0xD275ECC4L,0xD275ECC4L,0xF2D664D7L,0x58DD4FFFL},{0xD149468CL,0x58DD4FFFL,0xD275ECC4L,0x58DD4FFFL,0xD149468CL,0xD149468CL},{(-8L),0x58DD4FFFL,0x58DD4FFFL,(-8L),0xF2D664D7L,(-8L)},{(-8L),0xF2D664D7L,(-8L),0x58DD4FFFL,0x58DD4FFFL,(-8L)},{0xD149468CL,0xD149468CL,0x58DD4FFFL,0xD275ECC4L,0x58DD4FFFL,0xD149468CL}};
                int i, j;
                if ((*g_1042))
                { 
                    (**l_1921) = (0x49D1C5C5L && ((g_63[0]++) , 0UL));
                    if ((*l_1871))
                        break;
                }
                else
                { 
                    uint16_t *l_1939 = &g_1450;
                    int32_t l_1947 = (-1L);
                    int32_t l_1948 = 0x1E875CEEL;
                    int32_t l_1950 = 0L;
                    int32_t l_1951 = 0xBB7A437CL;
                    int32_t l_1952 = 0xCA913B6DL;
                    int32_t l_1954 = 9L;
                    int32_t l_1956 = 0L;
                    int32_t l_1959 = (-3L);
                    int32_t l_1960 = 0x04592E0EL;
                    int32_t l_1961 = 9L;
                    int32_t l_1963 = 1L;
                    int32_t l_1966 = 0xBBB0FFE8L;
                    int32_t l_1967 = 0L;
                    int32_t l_1968 = 0L;
                    int32_t l_1969[2][6] = {{0xEF78ABB2L,0xC1D8CB1AL,0L,0L,0xC1D8CB1AL,0xEF78ABB2L},{0xB63BAEB8L,0xEF78ABB2L,0L,0xEF78ABB2L,0xB63BAEB8L,0xB63BAEB8L}};
                    int32_t l_1971 = 7L;
                    int i, j;
                    (**l_1922) = ((safe_unary_minus_func_int32_t_s((l_1936 != (void*)0))) < (safe_lshift_func_int16_t_s_u((*g_282), ((*l_1939)++))));
                    ++l_1972;
                    return l_1975;
                }
                if (l_1976)
                    break;
                if (p_8)
                    break;
                (**l_1921) = (safe_mul_func_uint16_t_u_u((safe_mul_func_uint8_t_u_u(((((~(l_1958[3][4] = 0UL)) <= ((safe_sub_func_int8_t_s_s(((*g_24) = (safe_div_func_uint32_t_u_u(l_1946, g_921[1].f1))), (safe_mul_func_uint8_t_u_u((safe_add_func_uint16_t_u_u(7UL, ((safe_sub_func_int32_t_s_s((l_1965 , ((((void*)0 == &g_280) < p_8) & 1L)), 0xA893E047L)) , p_9))), 255UL)))) > l_1957)) == p_8) > 0xB0DC11C5EE67ECF1LL), (**l_1921))), l_1957));
                for (p_8 = 2; (p_8 >= 0); p_8 -= 1)
                { 
                    uint32_t *l_2006 = (void*)0;
                    uint32_t **l_2007 = &l_2006;
                    uint16_t *l_2013 = &g_73[0][0][0];
                    int32_t *****l_2014 = &g_268;
                    int16_t *****l_2022 = &g_1426;
                    uint32_t *l_2030[4];
                    int i;
                    for (i = 0; i < 4; i++)
                        l_2030[i] = &g_136;
                    g_1748[(g_1565 + 3)] = (safe_add_func_uint32_t_u_u((safe_lshift_func_int16_t_s_u(((((safe_sub_func_int32_t_s_s((((safe_mul_func_int8_t_s_s((safe_mul_func_uint16_t_u_u(((*l_2013) = ((safe_add_func_uint32_t_u_u((l_1957 && (&g_713 != (g_1609[0][1].f2 , ((*l_2007) = ((*g_24) , l_2006))))), g_63[0])) != ((~((safe_sub_func_uint32_t_u_u((safe_mul_func_int16_t_s_s((p_9 , 0x4DBBL), p_8)), 5L)) == l_1975.f2)) < g_63[0]))), (-1L))), g_843)) , l_2014) != l_2014), 0xBE78CAB8L)) , (*g_282)) , l_2015) != (void*)0), g_2017[1])), 0x6FB261CDL));
                    g_1748[(g_1565 + 1)] ^= p_8;
                    (**l_1921) |= ((p_8 == (((safe_lshift_func_int16_t_s_s((safe_div_func_int32_t_s_s((((*l_2022) = &g_1427) == (void*)0), (l_1955 ^= ((g_1567[0] & (safe_lshift_func_uint8_t_u_u((safe_mul_func_int8_t_s_s(((((safe_add_func_uint16_t_u_u(g_978[0][2], (l_2029 , ((**l_1930) = l_1942)))) != 0x25D6L) <= l_1976) & (*p_10)), (*p_10))), 6))) || p_8)))), 1)) != 0UL) <= g_1233)) != 1UL);
                    (*l_1921) = &l_1946;
                    return l_1912;
                }
            }
            for (g_1165.f0 = 0; (g_1165.f0 <= 2); g_1165.f0 += 1)
            { 
                uint32_t l_2031 = 0x1E152143L;
                int32_t *l_2034 = &l_1946;
                uint8_t *l_2064 = &g_1711;
                int64_t *l_2066[2][4] = {{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}};
                int32_t l_2071 = (-2L);
                int32_t l_2073 = 0x5DBADDBDL;
                int32_t l_2074 = 0xEF43A3BBL;
                int32_t l_2075 = 0x48BE9727L;
                int i, j;
                for (g_133.f1 = 0; (g_133.f1 <= 2); g_133.f1 += 1)
                { 
                    int32_t **l_2047 = &g_100;
                    uint64_t *l_2048 = &g_1567[1];
                    int32_t l_2055 = 0L;
                    l_2031++;
                    l_2035 = l_2034;
                    (**l_2046) = (safe_mul_func_int16_t_s_s((safe_add_func_int16_t_s_s((safe_div_func_int32_t_s_s(((0x8B53L || (((*l_2048) = (p_8 ^ (safe_mul_func_uint8_t_u_u(g_92.f0, (safe_mul_func_int16_t_s_s((l_2046 != l_2047), (*l_2035))))))) >= ((safe_mul_func_int16_t_s_s((safe_div_func_uint16_t_u_u(((safe_sub_func_int64_t_s_s(((**l_2046) ^ (*l_2034)), (*l_2035))) , l_2055), p_8)), (*l_1871))) != p_9))) | g_1711), (*l_2035))), p_8)), p_9));
                }
                if (((((safe_mul_func_int8_t_s_s((((*l_2035) = ((safe_rshift_func_uint16_t_u_u((safe_mod_func_int64_t_s_s((safe_mul_func_uint8_t_u_u((l_2064 == (void*)0), (((void*)0 != l_1882[2]) && (**l_2046)))), l_2065)), ((0x1F02L >= p_9) > (**l_2046)))) , g_1237)) > 0x8BCB85622BD680B3LL), g_2067[3])) > g_1567[0]) > p_9) > (*p_10)))
                { 
                    int32_t l_2069 = 6L;
                    int32_t l_2070 = 0x00A1594AL;
                    int32_t l_2077[3][1];
                    int i, j;
                    for (i = 0; i < 3; i++)
                    {
                        for (j = 0; j < 1; j++)
                            l_2077[i][j] = 0xDF16FE23L;
                    }
                    ++l_2078;
                }
                else
                { 
                    (*l_1922) = &l_1945;
                    ++l_2081;
                }
                return (**g_495);
            }
            l_2090 |= (g_1233 , (l_2029 , (0UL & ((+(l_1912 , g_1609[0][1].f0)) != (safe_lshift_func_int8_t_s_u((((l_2087 , (((*g_1042) = ((l_2088 , p_8) == (**l_2046))) >= (*l_2035))) , l_1871) != l_2089), 0))))));
            if (p_9)
                break;
        }
        for (g_306 = 0; (g_306 != 40); g_306 = safe_add_func_uint16_t_u_u(g_306, 8))
        { 
            uint32_t *l_2101[6][2] = {{&g_133.f1,&g_584},{&g_133.f1,&g_133.f1},{&g_584,&g_133.f1},{&g_133.f1,&g_584},{&g_133.f1,&g_133.f1},{&g_584,&g_133.f1}};
            uint16_t *l_2104 = (void*)0;
            uint16_t *l_2105[5];
            int32_t l_2108[1][4];
            int i, j;
            for (i = 0; i < 5; i++)
                l_2105[i] = &l_1839;
            for (i = 0; i < 1; i++)
            {
                for (j = 0; j < 4; j++)
                    l_2108[i][j] = 0xDC539D4DL;
            }
            (*g_1042) &= ((safe_rshift_func_uint16_t_u_u(0x65FDL, 6)) , (safe_lshift_func_int16_t_s_s((((safe_mul_func_uint8_t_u_u(((1L > (g_584 = (p_8 <= (-8L)))) <= 0x0A21E417L), (*l_2035))) != (((safe_add_func_uint16_t_u_u((--g_63[0]), l_2108[0][0])) | (*g_282)) != 0x3989DAABL)) <= 4294967295UL), 8)));
        }
    }
    else
    { 
        struct S0 **l_2110[5][3] = {{&g_496,&g_496,&g_496},{&g_496,&g_496,&g_496},{&g_496,&g_496,&g_496},{&g_496,&g_496,&g_496},{&g_496,&g_496,&g_496}};
        union U2 l_2116 = {0UL};
        int64_t *l_2117 = &l_1970[0][0];
        uint8_t *l_2118 = (void*)0;
        uint8_t *l_2119[7][2][5] = {{{&g_1701.f2,&g_1165.f2,&g_1165.f2,&g_306,&g_1165.f2},{&l_1912.f2,&l_1912.f2,&l_1917[0],&l_1917[2],(void*)0}},{{&g_1701.f2,&l_1912.f2,&l_1912.f2,&g_92.f2,&g_92.f2},{&l_1917[2],&g_306,&l_1917[2],&g_1116,&g_243.f2}},{{&l_1912.f2,&l_1912.f2,&g_1701.f2,&g_92.f2,&l_1917[2]},{&l_1917[0],&l_1912.f2,&l_1912.f2,&l_1917[0],&l_1917[2]}},{{&g_1165.f2,&g_1165.f2,&g_1701.f2,&l_1917[2],&l_1912.f2},{&g_1701.f2,(void*)0,&l_1917[2],(void*)0,&g_1701.f2}},{{&g_1165.f2,&g_92.f2,&l_1912.f2,&l_1917[2],(void*)0},{(void*)0,&g_1165.f2,&l_1917[0],&l_1917[0],&g_1165.f2}},{{&g_92.f2,&g_1701.f2,&g_1165.f2,&g_92.f2,(void*)0},{(void*)0,&l_1917[0],&g_1701.f2,&g_1116,&g_1701.f2}},{{(void*)0,(void*)0,&g_1165.f2,&g_92.f2,&l_1912.f2},{(void*)0,(void*)0,(void*)0,&l_1917[2],&l_1917[2]}}};
        int32_t l_2133 = 0x64A53AA9L;
        uint64_t l_2141 = 7UL;
        union U2 *l_2180 = &g_2181;
        uint32_t *l_2199 = &g_136;
        const int32_t *** const * const l_2200 = &g_127;
        uint32_t l_2205[5] = {18446744073709551610UL,18446744073709551610UL,18446744073709551610UL,18446744073709551610UL,18446744073709551610UL};
        int32_t l_2212 = 0xED01B0F4L;
        int32_t l_2213 = 0x0275E99CL;
        int32_t l_2215 = 0xF78EB292L;
        int32_t l_2217 = (-1L);
        int32_t l_2220 = 0x2C83D21EL;
        int32_t l_2222[7][1] = {{(-2L)},{0x3DACF38BL},{(-2L)},{(-2L)},{0x3DACF38BL},{(-2L)},{(-2L)}};
        uint64_t l_2225[2];
        int i, j, k;
        for (i = 0; i < 2; i++)
            l_2225[i] = 0UL;
        if ((((g_1116 = (((p_8 < (l_2109[1] == ((&g_584 != (void*)0) , l_2110[2][1]))) , ((!((((*l_1920) ^= g_283) || (safe_mul_func_int16_t_s_s((safe_add_func_int64_t_s_s(((*l_2117) = ((l_2116 , p_8) <= g_921[1].f2)), (-1L))), 0x8693L))) >= (-1L))) , p_9)) , l_2116.f1)) , l_2116.f0) && 0xDF4846F8L))
        { 
            uint32_t l_2122 = 0x226560A7L;
            uint16_t *l_2131[3];
            uint8_t l_2132 = 1UL;
            union U2 **l_2139 = (void*)0;
            uint16_t **l_2175 = &l_2131[2];
            int32_t l_2186 = 0L;
            uint64_t *l_2190 = &g_677.f0;
            int32_t l_2216 = (-6L);
            int32_t l_2218 = 0x6358B857L;
            int32_t l_2221 = 0x1DC0D213L;
            int32_t l_2223 = 0x7BD1CFCEL;
            int32_t l_2224 = 0x8D45AB6BL;
            int i;
            for (i = 0; i < 3; i++)
                l_2131[i] = &g_63[0];
        }
        else
        { 
            int16_t **l_2236 = (void*)0;
            int32_t l_2237 = 0xC6297A45L;
            uint16_t *l_2244 = &l_2201[3];
            int32_t *** const l_2251[5][4][7] = {{{&l_1923,&g_270,&l_1924,&l_1923,&g_270,&g_270,&g_270},{&l_1922,&l_1921,(void*)0,&l_1923,(void*)0,&l_1921,&l_1922},{&l_1923,&l_1923,(void*)0,(void*)0,&l_1923,&l_1923,&l_1924},{(void*)0,&l_1922,&l_1923,&l_1921,&l_1923,&l_1922,(void*)0}},{{&l_1923,&g_270,(void*)0,(void*)0,&l_1923,&g_270,&l_1924},{(void*)0,&l_1922,&l_1921,&l_1921,&l_1921,&l_1922,(void*)0},{&l_1923,&l_1923,(void*)0,(void*)0,&l_1923,&l_1923,&l_1924},{(void*)0,&l_1922,&l_1923,&l_1921,&l_1923,&l_1922,(void*)0}},{{&l_1923,&g_270,(void*)0,(void*)0,&l_1923,&g_270,&l_1924},{(void*)0,&l_1922,&l_1921,&l_1921,&l_1921,&l_1922,(void*)0},{&l_1923,&l_1923,(void*)0,(void*)0,&l_1923,&l_1923,&l_1924},{(void*)0,&l_1922,&l_1923,&l_1921,&l_1923,&l_1922,(void*)0}},{{&l_1923,&g_270,(void*)0,(void*)0,&l_1923,&g_270,&l_1924},{(void*)0,&l_1922,&l_1921,&l_1921,&l_1921,&l_1922,(void*)0},{&l_1923,&l_1923,(void*)0,(void*)0,&l_1923,&l_1923,&l_1924},{(void*)0,&l_1922,&l_1923,&l_1921,&l_1923,&l_1922,(void*)0}},{{&l_1923,&g_270,(void*)0,(void*)0,&l_1923,&g_270,&l_1924},{(void*)0,&l_1922,&l_1921,&l_1921,&l_1921,&l_1922,(void*)0},{&l_1923,&l_1923,(void*)0,(void*)0,&l_1923,&l_1923,&l_1924},{(void*)0,&l_1922,&l_1923,&l_1921,&l_1923,&l_1922,(void*)0}}};
            uint16_t *l_2252[6];
            int i, j, k;
            for (i = 0; i < 6; i++)
                l_2252[i] = &g_63[0];
            for (g_66 = 22; (g_66 != 22); g_66 = safe_add_func_int32_t_s_s(g_66, 6))
            { 
                int8_t *****l_2234[5][6] = {{&g_2233,&g_2233,&g_2233,&g_2233,&g_2233,&g_2233},{(void*)0,&g_2233,&g_2233,(void*)0,&g_2233,&g_2233},{&g_2233,&g_2233,&g_2233,&g_2233,&g_2233,&g_2233},{&g_2233,&g_2233,&g_2233,&g_2233,&g_2233,&g_2233},{(void*)0,&g_2233,&g_2233,(void*)0,&g_2233,&g_2233}};
                int32_t l_2235 = 0L;
                int i, j;
                g_2233 = g_2233;
                if (p_9)
                    break;
                (*g_1042) = (((l_2199 == &p_8) ^ ((l_2235 = g_919.f2) && (((*l_1929) == (p_9 , (l_2236 = &g_144))) && g_283))) != l_2237);
            }
            (*l_1871) |= (((**l_1922) = (safe_sub_func_uint8_t_u_u((((((((safe_sub_func_uint32_t_u_u(0x370A5D86L, g_2017[2])) , ((safe_sub_func_uint32_t_u_u(g_136, (((*l_2244)++) || (safe_div_func_int64_t_s_s(g_1567[0], (safe_mul_func_uint8_t_u_u(0xD1L, (((void*)0 == l_2251[3][2][1]) , (*p_10))))))))) <= p_9)) < 6UL) >= 1L) >= p_8) , p_8) != p_9), 0xB0L))) > (**g_281));
        }
        (**l_1921) = ((*l_1871) = ((safe_div_func_uint8_t_u_u(252UL, ((*p_10) = (safe_rshift_func_uint16_t_u_u((l_2133 = 4UL), 15))))) ^ g_921[1].f1));
        for (g_243.f0 = (-11); (g_243.f0 > (-3)); g_243.f0 = safe_add_func_int64_t_s_s(g_243.f0, 4))
        { 
            uint64_t l_2259 = 7UL;
            --l_2259;
            (**l_1922) |= p_9;
        }
        (*g_1042) = (p_9 , 4L);
    }
    return (*g_496);
}



static int8_t * func_12(uint32_t  p_13)
{ 
    int32_t ***l_712 = &g_678;
    uint64_t *l_737[7] = {(void*)0,&g_60.f0,&g_60.f0,(void*)0,&g_60.f0,&g_60.f0,(void*)0};
    uint64_t **l_736[3];
    int32_t *****l_800 = &g_268;
    uint32_t l_813 = 1UL;
    uint32_t l_825 = 0x83DE74D8L;
    int8_t *l_830 = &g_573;
    int32_t l_834 = 0x00FE1E0EL;
    int32_t l_866 = 0xD8446D80L;
    int32_t l_867 = 7L;
    int32_t l_868 = 0x15121453L;
    int32_t l_871 = 0x7D39D602L;
    int32_t l_873 = 0xB1CABC7AL;
    int32_t l_875 = 0L;
    int32_t l_876 = (-2L);
    union U1 *l_914 = &g_677;
    const struct S0 *l_1008 = (void*)0;
    const struct S0 **l_1007 = &l_1008;
    int32_t l_1024[2];
    int64_t l_1069 = 0x7BAE8E2933ADED51LL;
    uint32_t l_1103 = 4294967295UL;
    int16_t l_1104 = 0x7DF9L;
    const int16_t ***l_1105[5];
    int16_t l_1125 = 7L;
    union U2 l_1177 = {18446744073709551608UL};
    int32_t l_1259 = (-1L);
    uint8_t l_1262 = 0x32L;
    struct S0 *l_1297[2];
    int16_t *l_1340 = &g_283;
    int8_t l_1390 = 2L;
    union U2 l_1418 = {18446744073709551615UL};
    uint16_t * const *l_1436[1];
    uint32_t l_1460 = 0UL;
    uint32_t l_1524 = 0x81CF5B3CL;
    int16_t l_1533 = 2L;
    int8_t *l_1578 = &g_573;
    int8_t l_1598 = 0x57L;
    int32_t l_1643 = 0x0370BFF9L;
    int32_t l_1645 = 3L;
    int16_t l_1646 = 0L;
    int32_t l_1647 = 1L;
    int32_t l_1648[1];
    union U1 **l_1677[6][7][5] = {{{&l_914,&g_240,&l_914,&g_240,(void*)0},{(void*)0,&g_240,&l_914,&l_914,&l_914},{&l_914,&g_240,(void*)0,(void*)0,&l_914},{&g_240,&g_240,&g_240,&g_240,&g_240},{&l_914,&g_240,&g_240,&g_240,&l_914},{(void*)0,&g_240,&l_914,(void*)0,&l_914},{&g_240,&g_240,&l_914,&g_240,&g_240}},{{(void*)0,(void*)0,&g_240,&l_914,&l_914},{&l_914,&g_240,&g_240,&g_240,&g_240},{&l_914,(void*)0,&l_914,&g_240,(void*)0},{&g_240,&l_914,&g_240,(void*)0,&l_914},{(void*)0,(void*)0,&l_914,(void*)0,&l_914},{&g_240,&g_240,&g_240,&l_914,(void*)0},{&g_240,&l_914,&l_914,&l_914,&l_914}},{{&l_914,&g_240,&g_240,&g_240,&g_240},{(void*)0,(void*)0,&g_240,(void*)0,&g_240},{&g_240,&g_240,&l_914,&l_914,(void*)0},{(void*)0,&g_240,(void*)0,&g_240,&l_914},{&l_914,&g_240,&g_240,&g_240,&g_240},{&g_240,(void*)0,&g_240,(void*)0,&l_914},{&g_240,(void*)0,&l_914,&l_914,&l_914}},{{(void*)0,&g_240,(void*)0,(void*)0,&l_914},{&g_240,(void*)0,&l_914,&g_240,&l_914},{&l_914,&l_914,&l_914,&g_240,&g_240},{&l_914,&l_914,&l_914,&l_914,&l_914},{(void*)0,&l_914,(void*)0,(void*)0,&l_914},{&g_240,&l_914,(void*)0,&g_240,&l_914},{&g_240,&l_914,(void*)0,&l_914,&g_240}},{{&g_240,(void*)0,&l_914,&l_914,&g_240},{&l_914,&g_240,(void*)0,(void*)0,(void*)0},{&l_914,(void*)0,(void*)0,(void*)0,&g_240},{&l_914,(void*)0,&l_914,&g_240,&g_240},{&g_240,&g_240,&g_240,&g_240,&l_914},{&l_914,&g_240,&g_240,&l_914,&l_914},{&g_240,&g_240,&g_240,&g_240,&l_914}},{{(void*)0,(void*)0,&g_240,&l_914,&g_240},{&l_914,&g_240,&g_240,&g_240,&l_914},{&l_914,&l_914,&l_914,&l_914,&l_914},{&l_914,&g_240,(void*)0,&g_240,&l_914},{&g_240,(void*)0,(void*)0,(void*)0,&l_914},{&l_914,&l_914,&l_914,&g_240,&g_240},{&l_914,(void*)0,(void*)0,&l_914,&l_914}}};
    int i, j, k;
    for (i = 0; i < 3; i++)
        l_736[i] = &l_737[3];
    for (i = 0; i < 2; i++)
        l_1024[i] = 0xF0C13E13L;
    for (i = 0; i < 5; i++)
        l_1105[i] = (void*)0;
    for (i = 0; i < 2; i++)
        l_1297[i] = &g_1165;
    for (i = 0; i < 1; i++)
        l_1436[i] = &g_150;
    for (i = 0; i < 1; i++)
        l_1648[i] = 1L;
    for (g_283 = (-17); (g_283 < 6); g_283 = safe_add_func_int32_t_s_s(g_283, 3))
    { 
        int32_t *l_711 = &g_92.f0;
        uint16_t * const l_721 = &g_63[0];
        uint64_t ** const l_738[1] = {&l_737[3]};
        uint8_t l_770 = 4UL;
        int32_t **l_799 = &l_711;
        int8_t *l_806 = &g_25;
        union U1 l_844 = {0x004D67EBEC6AF0DALL};
        int i;
        (*g_678) = l_711;
        if (((**g_281) | (0xA0L >= (l_712 == l_712))))
        { 
            uint16_t *l_718 = &g_73[0][2][0];
            int32_t l_724[2];
            int32_t l_767 = 1L;
            int32_t ****l_793 = &g_269;
            int32_t l_794 = 0L;
            struct S0 *l_796 = &g_92;
            int i;
            for (i = 0; i < 2; i++)
                l_724[i] = 0x4E97B440L;
            g_713 = 0x152A2166L;
            if (p_13)
                break;
            if ((((*l_721) = (safe_mod_func_uint32_t_u_u((safe_sub_func_int64_t_s_s(((--(*l_718)) , ((*l_711) | ((void*)0 == l_721))), (g_677.f0 = (((p_13 ^ ((safe_rshift_func_uint16_t_u_s((0xB6B6L | (***l_712)), ((*g_282) != p_13))) || (*l_711))) <= p_13) ^ l_724[0])))), 4L))) > p_13))
            { 
                const int64_t l_739 = 0x27B9C38BE8CDB908LL;
                int32_t *l_740[6];
                int8_t *l_771 = &g_25;
                int i;
                for (i = 0; i < 6; i++)
                    l_740[i] = &g_91;
                if ((!(((safe_lshift_func_uint8_t_u_s((safe_add_func_uint64_t_u_u(1UL, (safe_mul_func_int8_t_s_s((safe_lshift_func_uint8_t_u_s(((p_13 < (*g_100)) != (*l_711)), (safe_mul_func_int16_t_s_s((l_736[1] == l_738[0]), l_739)))), 1L)))), (***l_712))) || 0xEA23L) && p_13)))
                { 
                    union U2 *l_741 = &g_133;
                    (**l_712) = l_740[4];
                    if (p_13)
                        continue;
                    l_741 = l_741;
                    return &g_25;
                }
                else
                { 
                    int16_t *l_764[7] = {(void*)0,(void*)0,&g_298,(void*)0,(void*)0,&g_298,(void*)0};
                    int32_t *l_768[2][1][3] = {{{&g_72,&g_72,&g_72}},{{&g_72,&g_72,&g_72}}};
                    int32_t l_769[4][2][1];
                    int i, j, k;
                    for (i = 0; i < 4; i++)
                    {
                        for (j = 0; j < 2; j++)
                        {
                            for (k = 0; k < 1; k++)
                                l_769[i][j][k] = 0L;
                        }
                    }
                    (***l_712) = ((g_179[0][4] ^ (safe_lshift_func_int8_t_s_u(((+((*l_721) = (0L != (*l_711)))) & (safe_lshift_func_int8_t_s_s(((((safe_rshift_func_int16_t_s_s((p_13 || p_13), ((&g_686 == (void*)0) != 0x56L))) , p_13) | p_13) > 0xDFAB1147B7219520LL), p_13))), 0))) , 8L);
                    l_770 &= (4294967295UL | (g_2 != (p_13 == (safe_add_func_int64_t_s_s(((safe_rshift_func_int8_t_s_s((safe_rshift_func_int16_t_s_u((safe_div_func_uint16_t_u_u(((((safe_div_func_uint8_t_u_u((~(l_724[0] ^= ((***l_712) |= p_13))), p_13)) != ((l_769[2][0][0] &= (safe_lshift_func_int16_t_s_s(l_767, ((g_72 = ((0xC27766B2L >= g_60.f0) , 0x4B70938CL)) , (-1L))))) | g_306)) , 2UL) || p_13), 0x58B6L)), 14)), 6)) < (-6L)), p_13)))));
                }
                return l_771;
            }
            else
            { 
                uint8_t *l_776 = (void*)0;
                uint8_t *l_777[1][5] = {{&l_770,&l_770,&l_770,&l_770,&l_770}};
                int32_t l_778 = 7L;
                int16_t *l_795 = &g_298;
                uint64_t *l_797 = (void*)0;
                int32_t l_826[1];
                union U1 l_827 = {0x87A533D52B3FB92FLL};
                int8_t *l_833 = &g_573;
                int i, j;
                for (i = 0; i < 1; i++)
                    l_826[i] = 0x727B420CL;
                if (((((safe_mul_func_uint8_t_u_u(254UL, (((safe_rshift_func_uint8_t_u_u(((***l_712) != (l_724[0] = ((p_13 > l_724[0]) ^ (--g_92.f2)))), (safe_lshift_func_int16_t_s_u((safe_add_func_uint8_t_u_u(p_13, (safe_add_func_uint64_t_u_u(((***l_712) , (((safe_mod_func_int16_t_s_s(((safe_sub_func_int16_t_s_s(((*l_795) = (safe_add_func_int16_t_s_s(((l_793 == l_793) | p_13), l_794))), l_778)) && (***g_280)), 0x8550L)) <= g_25) <= p_13)), (***l_712))))), 1)))) | g_133.f0) , p_13))) , 0x27BFL) , &g_584) != (void*)0))
                { 
                    (*l_711) = 1L;
                    (*g_678) = (void*)0;
                }
                else
                { 
                    int32_t ***l_798[1];
                    int i;
                    for (i = 0; i < 1; i++)
                        l_798[i] = &g_270;
                    (**g_678) ^= (0x05L ^ ((((l_796 == (void*)0) >= (l_797 != (((*l_712) == (l_799 = (*l_712))) , l_797))) , (void*)0) == l_800));
                }
                for (g_584 = 0; (g_584 < 16); ++g_584)
                { 
                    int8_t l_803 = 0x32L;
                    union U1 l_828 = {0x17F6300D2F83179ELL};
                    uint8_t l_829 = 0x85L;
                    int32_t l_831[5][1][5] = {{{0xF80D6293L,3L,0xF80D6293L,0xF85C8479L,0x6FD788FAL}},{{(-5L),0x097DC034L,0x4E7BBC07L,0xEBFD4BC9L,0x6FD788FAL}},{{0xEF6FAD5FL,1L,1L,0xEF6FAD5FL,0xF80D6293L}},{{0xB7311459L,0xEF6FAD5FL,0x4E7BBC07L,0x6FD788FAL,0x097DC034L}},{{0xB7311459L,0x4E7BBC07L,0xF80D6293L,0x4E7BBC07L,0xB7311459L}}};
                    int32_t *l_832 = &l_724[0];
                    int i, j, k;
                    (*g_495) = (*g_495);
                    if (l_803)
                        continue;
                    (*l_832) &= (safe_div_func_uint32_t_u_u((func_30(l_806, (l_830 = func_37((safe_rshift_func_int8_t_s_s((((((l_778 < (safe_add_func_uint8_t_u_u((safe_rshift_func_uint8_t_u_u(((l_813 > ((l_826[0] ^= (((safe_rshift_func_uint8_t_u_u((safe_mul_func_uint8_t_u_u(l_803, p_13)), ((g_133 , ((safe_sub_func_int16_t_s_s(((+(safe_mul_func_int8_t_s_s((safe_lshift_func_int16_t_s_u(((g_133 , p_13) & l_825), p_13)), (*l_711)))) <= g_179[1][0]), p_13)) || p_13)) | 1UL))) >= p_13) >= g_63[0])) != p_13)) == g_677.f0), p_13)), l_778))) > 0x227EDCA9L) , l_827) , l_828) , l_829), 7)), &l_803)), &g_573, l_777[0][2], l_828) , l_831[1][0][0]), (*l_711)));
                }
                return l_833;
            }
        }
        else
        { 
            uint32_t l_835 = 0x8D6FD54AL;
            int64_t *l_842[3];
            int32_t l_845 = 0xFC2580D2L;
            int i;
            for (i = 0; i < 3; i++)
                l_842[i] = &g_843;
            --l_835;
            l_845 = (safe_add_func_uint16_t_u_u((safe_mod_func_uint8_t_u_u(((**l_799) & (p_13 <= ((l_835 & (g_677.f0 >= (g_843 = ((*l_711) > 0xD6D1BAEAA883D1BFLL)))) == (func_30(&g_25, &g_25, &g_573, l_806, l_844) , p_13)))), p_13)), 0xB090L));
            (*l_711) = (safe_lshift_func_int8_t_s_s((p_13 && 0x5FL), 2));
        }
    }
    return (*g_1321);
}



static struct S0  func_14(uint32_t  p_15, int8_t * p_16, int32_t  p_17)
{ 
    return (*g_496);
}



static int8_t * func_18(const union U1  p_19, int8_t * p_20, int8_t * p_21)
{ 
    int8_t *l_36 = (void*)0;
    int32_t l_61 = 0x177C4186L;
    uint64_t l_343 = 5UL;
    int32_t l_389 = 0xAA3ED2BCL;
    int32_t l_416 = 2L;
    int32_t l_418[1][5][7] = {{{0x3F58CAEBL,0x6FC46F5DL,0x748EA395L,0x3F58CAEBL,9L,9L,0x3F58CAEBL},{0x748EA395L,0x84821018L,0x748EA395L,9L,0x84821018L,0x6FC46F5DL,0x6FC46F5DL},{0x84821018L,0x3F58CAEBL,0L,0x3F58CAEBL,0x84821018L,0L,0xD1F3DAEDL},{0xD1F3DAEDL,0x6FC46F5DL,9L,0xD1F3DAEDL,9L,0x6FC46F5DL,0xD1F3DAEDL},{0x748EA395L,0xD1F3DAEDL,0x6FC46F5DL,9L,0xD1F3DAEDL,9L,0x6FC46F5DL}}};
    uint32_t l_426 = 0x65B72007L;
    int32_t *l_427 = (void*)0;
    uint16_t *l_478 = &g_63[0];
    union U2 l_540 = {0xD91B9809L};
    uint64_t *l_558[4] = {&l_343,&l_343,&l_343,&l_343};
    uint64_t **l_557 = &l_558[2];
    int32_t *****l_640 = &g_268;
    const union U1 *l_676 = &g_677;
    int32_t *l_706[2];
    int32_t *l_707 = &g_66;
    int i, j, k;
    for (i = 0; i < 2; i++)
        l_706[i] = &l_418[0][3][1];
    for (g_25 = 0; (g_25 != 24); g_25 = safe_add_func_uint8_t_u_u(g_25, 8))
    { 
        const int8_t l_41 = (-1L);
        int16_t l_59 = 0xE4ECL;
        uint16_t *l_62 = &g_63[0];
        int16_t *l_64 = &l_59;
        int32_t l_328 = 0x456ECF78L;
        if ((l_328 = func_28(func_30(l_36, func_37(((((*l_64) = (((g_25 | (!(l_41 < ((*l_62) = (safe_mod_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_s((!(safe_add_func_int16_t_s_s((0x78B7212908CDAC36LL > 3UL), (((safe_add_func_uint8_t_u_u((((safe_sub_func_uint16_t_u_u((((safe_mul_func_int8_t_s_s((safe_mul_func_uint8_t_u_u(p_19.f2, (safe_mod_func_uint16_t_u_u(g_2, 8L)))), l_59)) , g_60) , p_19.f0), 7UL)) , l_61) , l_61), l_41)) != l_61) , g_25)))), g_60.f2)), g_25)))))) , p_19.f0) == p_19.f2)) , g_60.f2) , 0xBB785AA1EDE5A1AELL), &g_25), l_36, &g_25, g_60))))
        { 
            int32_t l_342 = (-1L);
            for (l_59 = 21; (l_59 > (-25)); --l_59)
            { 
                uint16_t l_331 = 0UL;
                int32_t l_340 = 9L;
                uint64_t l_341 = 0x6A9ADC7AF598C9DFLL;
                l_342 &= ((1UL == (p_19.f0 >= (l_328 |= (((((((l_331 > (safe_sub_func_int8_t_s_s((safe_lshift_func_uint8_t_u_s((g_243.f2 = (safe_mod_func_int8_t_s_s((*p_21), (*g_24)))), 7)), ((l_340 = (safe_add_func_uint8_t_u_u(g_25, ((p_19.f2 <= l_61) && (***g_280))))) ^ g_133.f3)))) <= 0UL) && g_133.f0) < l_331) < l_341) >= l_59) >= (**g_281))))) && (*p_21));
                return p_21;
            }
            return &g_25;
        }
        else
        { 
            return p_21;
        }
    }
lbl_554:
    if (l_61)
    { 
        uint64_t l_344 = 1UL;
        uint64_t *l_345 = &g_60.f0;
        int32_t *l_354 = &g_243.f0;
        (*g_100) &= (((((*g_282) >= (l_343 | (((*l_345) ^= l_344) && (safe_mul_func_uint8_t_u_u((safe_mul_func_int16_t_s_s(((safe_mod_func_uint32_t_u_u(((*g_280) == (void*)0), (safe_rshift_func_uint8_t_u_s(p_19.f2, ((void*)0 == l_354))))) <= g_133.f0), (*l_354))), 0xC6L))))) | 1UL) >= p_19.f2) <= p_19.f2);
        for (g_298 = (-14); (g_298 < (-14)); ++g_298)
        { 
            int8_t *l_357 = &g_25;
            return l_357;
        }
    }
    else
    { 
        int32_t **l_358 = &g_100;
        int8_t **l_359 = &l_36;
        union U1 l_360[6] = {{0xFB7E559505ABB6D3LL},{4UL},{4UL},{0xFB7E559505ABB6D3LL},{4UL},{4UL}};
        union U1 **l_379 = &g_240;
        uint64_t l_390[4];
        uint64_t *l_396 = &l_390[2];
        uint64_t **l_395 = &l_396;
        int32_t l_417 = 0xE652E453L;
        int32_t l_419 = (-1L);
        int32_t l_421 = 0xDFC53094L;
        int32_t l_422 = 0xB6DEFFB6L;
        int16_t **l_485 = (void*)0;
        int32_t l_530[7][6][2] = {{{0xA75A34E5L,0x2ABC30E0L},{0xA75A34E5L,0x334A150DL},{0x570570A3L,0xA75A34E5L},{0x334A150DL,0x2ABC30E0L},{0xCC7EC032L,0xCC7EC032L},{0x570570A3L,0xCC7EC032L}},{{0xCC7EC032L,0x2ABC30E0L},{0x334A150DL,0xA75A34E5L},{0x570570A3L,0x334A150DL},{0xA75A34E5L,0x2ABC30E0L},{0xA75A34E5L,0x334A150DL},{0x570570A3L,0xA75A34E5L}},{{0x334A150DL,0x2ABC30E0L},{0xCC7EC032L,0xCC7EC032L},{0x570570A3L,0xCC7EC032L},{0xCC7EC032L,0x2ABC30E0L},{0x334A150DL,0xA75A34E5L},{0x570570A3L,0x334A150DL}},{{0xA75A34E5L,0x2ABC30E0L},{0xA75A34E5L,0x334A150DL},{0x570570A3L,0xA75A34E5L},{0x334A150DL,0x2ABC30E0L},{0xCC7EC032L,0xCC7EC032L},{0x570570A3L,0xCC7EC032L}},{{0xCC7EC032L,0x2ABC30E0L},{0x334A150DL,0xA75A34E5L},{0x570570A3L,0x334A150DL},{0xA75A34E5L,0x2ABC30E0L},{0xA75A34E5L,0x334A150DL},{0x570570A3L,0xA75A34E5L}},{{0x334A150DL,0x2ABC30E0L},{0xCC7EC032L,0xCC7EC032L},{0x570570A3L,0xCC7EC032L},{0xCC7EC032L,0x2ABC30E0L},{0x334A150DL,0xA75A34E5L},{0x570570A3L,0x334A150DL}},{{0xA75A34E5L,0x2ABC30E0L},{0xA75A34E5L,0x334A150DL},{0x570570A3L,0xA75A34E5L},{0x334A150DL,0x2ABC30E0L},{0xCC7EC032L,0xCC7EC032L},{0x570570A3L,0xCC7EC032L}}};
        int16_t l_535 = 0x2E8DL;
        int i, j, k;
        for (i = 0; i < 4; i++)
            l_390[i] = 0xABBF5F38C4853339LL;
        (*l_358) = &l_61;
        (*g_100) = (func_30(&g_25, &g_25, ((*l_359) = &g_25), func_37(g_60.f2, &g_25), l_360[1]) , l_343);
        for (g_243.f2 = (-29); (g_243.f2 >= 48); g_243.f2++)
        { 
            int32_t *****l_370 = &g_268;
            uint16_t *l_374 = (void*)0;
            uint16_t *l_375 = (void*)0;
            int8_t *l_376 = (void*)0;
            int32_t l_386 = 4L;
            int32_t l_388 = 0xD319144BL;
            int32_t l_420[1][5];
            uint32_t l_423 = 8UL;
            int i, j;
            for (i = 0; i < 1; i++)
            {
                for (j = 0; j < 5; j++)
                    l_420[i][j] = (-1L);
            }
        }
        l_427 = &l_418[0][2][2];
        for (g_66 = 0; (g_66 >= 5); ++g_66)
        { 
            int16_t l_439[6][2] = {{0x381FL,0xA2F1L},{0x381FL,0x381FL},{0xA2F1L,0x381FL},{0x381FL,0xA2F1L},{0x381FL,0x381FL},{0xA2F1L,0x381FL}};
            int32_t l_440 = 0xCF8F0DD5L;
            int32_t l_442 = 0xF904F8E7L;
            int32_t l_443 = 0xDB85ECE3L;
            int32_t l_444 = 0xFB3B1692L;
            int32_t l_452 = (-2L);
            int32_t *l_460 = &g_243.f0;
            int8_t l_494 = 0x24L;
            const uint8_t l_515[6] = {0UL,0UL,0UL,0UL,0UL,0UL};
            int32_t l_529 = (-1L);
            int32_t l_531 = 0x54A8A8A0L;
            uint32_t l_532 = 18446744073709551615UL;
            const int32_t *l_546 = &l_421;
            const int32_t **l_545 = &l_546;
            const int32_t ** const *l_544 = &l_545;
            const int32_t ** const ** const l_543 = &l_544;
            int i, j;
            for (g_25 = 0; (g_25 <= (-10)); g_25 = safe_sub_func_int8_t_s_s(g_25, 1))
            { 
                int64_t l_435 = 0xF38B26566AD81E4ELL;
                int32_t l_456 = 0xE2573CC8L;
                uint64_t l_457 = 0x8265AA5542373D3BLL;
                int16_t ***l_498[4];
                int16_t ****l_497 = &l_498[3];
                int32_t l_517 = 0xC390B211L;
                int32_t l_526 = (-5L);
                int32_t l_527 = 0L;
                int32_t l_528[3][5] = {{6L,6L,6L,6L,6L},{0L,0xCFB92F2CL,0L,0xCFB92F2CL,0L},{6L,6L,6L,6L,6L}};
                int i, j;
                for (i = 0; i < 4; i++)
                    l_498[i] = &l_485;
                if ((0x0C52L || p_19.f2))
                { 
                    int32_t *l_432 = &l_418[0][2][5];
                    int32_t *l_433 = &l_389;
                    int32_t *l_434[3];
                    uint8_t l_436[4];
                    int i;
                    for (i = 0; i < 3; i++)
                        l_434[i] = &g_91;
                    for (i = 0; i < 4; i++)
                        l_436[i] = 255UL;
                    l_436[2]++;
                    (*l_427) = l_439[4][0];
                }
                else
                { 
                    int32_t *l_441 = &g_179[1][3];
                    int32_t *l_445 = (void*)0;
                    int32_t *l_446 = &g_179[1][0];
                    int32_t *l_447 = &l_442;
                    int32_t *l_448 = &l_419;
                    int32_t *l_449 = &l_421;
                    int32_t *l_450 = &g_179[0][4];
                    int32_t *l_451 = &l_418[0][2][2];
                    int32_t *l_453 = &g_91;
                    int32_t *l_454 = &l_417;
                    int32_t *l_455[4][3][4] = {{{&g_2,&g_243.f0,(void*)0,&l_422},{&g_179[0][2],&l_418[0][3][5],&g_2,&l_418[0][3][5]},{(void*)0,&l_442,&g_2,&l_440}},{{&l_440,&l_452,&g_179[0][2],&l_421},{&g_243.f0,&l_422,&l_421,&l_440},{&g_243.f0,(void*)0,&g_179[0][2],&g_179[0][2]}},{{&l_440,&l_440,&g_2,&g_66},{(void*)0,&g_2,&g_2,&l_442},{&g_179[0][2],&l_419,(void*)0,&g_2}},{{&g_2,&l_419,&l_440,&l_442},{&l_419,&g_2,&l_419,&g_66},{(void*)0,&l_440,&l_452,&g_179[0][2]}}};
                    int i, j, k;
                    --l_457;
                    l_460 = (void*)0;
                    if (l_457)
                        break;
                    if ((*l_453))
                        continue;
                }
            }
        }
    }
    for (g_133.f2 = 0; (g_133.f2 <= 59); g_133.f2++)
    { 
        uint32_t l_572 = 0x86003ACBL;
        int32_t l_575 = 0x656E5E57L;
        int32_t l_576 = 0xAC886F92L;
        int32_t l_579 = (-9L);
        int32_t l_581 = 0L;
        int32_t l_582 = 0L;
        int32_t ***l_618 = &g_270;
        uint32_t l_631[6];
        int32_t l_634[5];
        uint8_t *l_680 = &g_243.f2;
        int32_t *l_683[3];
        int i;
        for (i = 0; i < 6; i++)
            l_631[i] = 0x2CE2B0D8L;
        for (i = 0; i < 5; i++)
            l_634[i] = (-1L);
        for (i = 0; i < 3; i++)
            l_683[i] = &l_416;
        for (g_92.f2 = (-14); (g_92.f2 != 43); ++g_92.f2)
        { 
            int64_t l_569 = 0xF85DDF6174334226LL;
            int32_t l_570[1];
            uint16_t *l_571 = (void*)0;
            int32_t ****l_610 = &g_269;
            int32_t l_611 = (-10L);
            const int32_t *l_612[7] = {&g_179[0][4],&g_91,&g_91,&g_179[0][4],&g_91,&g_91,&g_179[0][4]};
            int8_t *l_614 = (void*)0;
            struct S0 *l_615 = &g_243;
            int64_t l_630 = (-6L);
            int32_t ***l_679 = &g_678;
            const int16_t **l_699[7][1] = {{(void*)0},{&g_282},{(void*)0},{&g_282},{(void*)0},{&g_282},{(void*)0}};
            int i, j;
            for (i = 0; i < 1; i++)
                l_570[i] = (-5L);
            if (g_243.f0)
                goto lbl_554;
            for (l_343 = 0; (l_343 <= 6); l_343 += 1)
            { 
                int32_t l_577 = (-7L);
                int32_t l_578 = 0x7561F99AL;
                int32_t l_580 = (-1L);
                int32_t l_583 = 0x0A516334L;
                int i, j;
                if (g_92.f0)
                    goto lbl_554;
                (*g_100) = 0L;
                for (g_243.f0 = 0; (g_243.f0 <= 6); g_243.f0 += 1)
                { 
                    uint64_t ***l_559 = &l_557;
                    int32_t *l_574[7][5] = {{(void*)0,&g_92.f0,(void*)0,&g_92.f0,&l_61},{&g_243.f0,(void*)0,&l_418[0][0][1],(void*)0,&g_243.f0},{(void*)0,&l_389,&g_92.f0,(void*)0,&g_92.f0},{(void*)0,(void*)0,&l_418[0][0][1],&g_243.f0,&l_416},{&l_389,(void*)0,(void*)0,&l_389,&g_92.f0},{(void*)0,&g_243.f0,&l_416,&l_416,&g_243.f0},{&g_92.f0,(void*)0,&g_92.f0,&l_61,&l_61}};
                    uint8_t *l_592 = &g_243.f2;
                    uint8_t *l_595 = &g_306;
                    int i, j;
                    (*g_100) = ((((*l_478) = ((((safe_sub_func_uint16_t_u_u(((((*l_559) = l_557) != ((((safe_div_func_uint8_t_u_u(((safe_mul_func_uint16_t_u_u((safe_add_func_uint16_t_u_u((0xA290L ^ (0UL >= p_19.f0)), l_540.f3)), (-1L))) & (safe_rshift_func_int8_t_s_u((((~(((l_569 = 0xDEA3C903EC40709CLL) , p_19.f0) >= p_19.f2)) != 0x30C65B0AAFA8C0D1LL) || p_19.f0), 0))), g_66)) == 18446744073709551610UL) >= l_570[0]) , (void*)0)) && 0x4EL), 65534UL)) , &g_73[0][0][0]) == l_571) == (*g_24))) >= l_572) ^ g_573);
                    ++g_584;
                    (*g_100) ^= ((safe_mul_func_int16_t_s_s(p_19.f0, ((safe_rshift_func_uint16_t_u_s((((l_570[0] = 0xA696A9F1L) >= (+0xB86AC158L)) == (l_575 = (((*l_595) = ((*l_592)--)) == (safe_lshift_func_uint8_t_u_u((p_19.f0 < (safe_rshift_func_uint8_t_u_s((safe_add_func_uint64_t_u_u(((safe_div_func_int8_t_s_s((safe_unary_minus_func_uint32_t_u((safe_mod_func_int16_t_s_s(((((g_92.f0 >= (!((*g_371) != l_610))) | 0xBEF9L) <= 0x6162FA012D33B091LL) >= p_19.f0), l_611)))), p_19.f0)) & 0x62L), 1UL)), (*p_21)))), 5))))), 10)) && (*g_24)))) >= p_19.f2);
                }
                for (l_579 = 0; (l_579 <= 0); l_579 += 1)
                { 
                    const int32_t **l_613 = &l_612[0];
                    (*l_613) = l_612[0];
                    if (p_19.f2)
                        break;
                }
                for (g_243.f0 = 0; (g_243.f0 >= 0); g_243.f0 -= 1)
                { 
                    return l_614;
                }
            }
            if (((*g_100) ^= ((void*)0 != l_615)))
            { 
                int32_t *l_623 = &l_611;
                int32_t *l_624 = &l_576;
                int32_t *l_625 = &l_416;
                int32_t *l_626 = &g_179[0][4];
                int32_t *l_627 = &g_179[0][3];
                int32_t *l_628 = &l_581;
                int32_t *l_629[7];
                int i;
                for (i = 0; i < 7; i++)
                    l_629[i] = &g_66;
                (*g_100) |= (safe_sub_func_int64_t_s_s(((l_618 != (p_19.f0 , l_618)) && (safe_mul_func_int8_t_s_s((0x07A2L ^ (***g_280)), 0UL))), (((safe_lshift_func_int8_t_s_u((g_2 && 4294967293UL), p_19.f0)) & 4L) >= 0xB5B11ABC02B33C64LL)));
                l_427 = &l_416;
                --l_631[5];
                g_635++;
                for (g_92.f0 = 15; (g_92.f0 != (-17)); g_92.f0--)
                { 
                    uint32_t l_643 = 9UL;
                    int16_t *l_646 = &g_298;
                    uint32_t *l_673[1][3];
                    int i, j;
                    for (i = 0; i < 1; i++)
                    {
                        for (j = 0; j < 3; j++)
                            l_673[i][j] = &l_426;
                    }
                    l_640 = &g_268;
                    (*l_427) = ((*l_624) = ((safe_lshift_func_int16_t_s_u((-2L), ((p_19.f2 <= (l_643 && ((safe_sub_func_uint16_t_u_u((*l_427), ((*l_646) = 0x6DBBL))) ^ ((safe_add_func_int8_t_s_s((*g_24), (safe_sub_func_uint64_t_u_u((safe_rshift_func_int16_t_s_s(((safe_lshift_func_int8_t_s_u((+(***g_280)), 0)) >= l_643), (*g_282))), p_19.f0)))) >= p_19.f0)))) , (*l_427)))) > g_91));
                    if (p_19.f2)
                        break;
                    (*l_628) = (safe_rshift_func_uint8_t_u_s(((((*l_626) && p_19.f2) <= p_19.f0) , (*l_427)), ((*g_24) = ((((safe_rshift_func_int16_t_s_s((safe_rshift_func_int16_t_s_u(((l_582 = (safe_rshift_func_int16_t_s_u((((!(safe_sub_func_uint64_t_u_u((safe_lshift_func_int16_t_s_u((**g_281), ((safe_lshift_func_int16_t_s_u((safe_add_func_int16_t_s_s((p_19.f0 != ((*l_646) = (*l_427))), p_19.f2)), 0)) , (*l_626)))), p_19.f2))) && p_19.f2) ^ p_19.f0), p_19.f0))) & (*l_427)), p_19.f2)), p_19.f0)) == p_19.f0) , g_133.f0) , (*p_21)))));
                }
            }
            else
            { 
                for (l_343 = 11; (l_343 == 2); --l_343)
                { 
                    l_676 = &p_19;
                    return &g_25;
                }
            }
            if ((((l_36 == (l_680 = func_37(((**l_610) != ((*l_679) = g_678)), &g_25))) , (safe_lshift_func_uint16_t_u_u(0x2A07L, 13))) , p_19.f0))
            { 
                for (g_243.f0 = 0; g_243.f0 < 5; g_243.f0 += 1)
                {
                    l_634[g_243.f0] = 0xCFBEB44BL;
                }
            }
            else
            { 
                uint32_t l_702 = 0xC6E62434L;
                union U2 *l_705[7][7] = {{&g_133,(void*)0,&l_540,&l_540,(void*)0,&g_133,&l_540},{&g_133,&l_540,&l_540,&l_540,&g_133,&g_133,&g_133},{(void*)0,&l_540,&l_540,(void*)0,&g_133,&l_540,&l_540},{&l_540,&l_540,&l_540,&l_540,&g_133,&l_540,&l_540},{(void*)0,(void*)0,&g_133,&l_540,(void*)0,(void*)0,&l_540},{&g_133,&l_540,&g_133,&l_540,&g_133,&l_540,&g_133},{&g_133,&l_540,&l_540,&g_133,(void*)0,&l_540,&l_540}};
                union U2 **l_704 = &l_705[2][1];
                int i, j;
                (**l_679) = l_683[0];
                for (l_569 = 0; (l_569 > 5); ++l_569)
                { 
                    int16_t *l_700 = (void*)0;
                    int16_t *l_701[7];
                    int32_t l_703[2][7][2] = {{{(-1L),0x58AB4119L},{0x59D17EBEL,0x58AB4119L},{(-1L),0x59D17EBEL},{0xE1239E4CL,0xE1239E4CL},{0xE1239E4CL,0x59D17EBEL},{(-1L),0x58AB4119L},{0x59D17EBEL,0x58AB4119L}},{{(-1L),0x59D17EBEL},{0xE1239E4CL,0xE1239E4CL},{0xE1239E4CL,0x59D17EBEL},{(-1L),0x58AB4119L},{0x59D17EBEL,0x58AB4119L},{(-1L),0x59D17EBEL},{0xE1239E4CL,0xE1239E4CL}}};
                    int i, j, k;
                    for (i = 0; i < 7; i++)
                        l_701[i] = &g_283;
                    l_703[1][4][1] &= (((*g_24) = (((g_686 != g_686) < ((((safe_div_func_uint64_t_u_u((safe_mod_func_uint32_t_u_u(((0x7DL > ((safe_div_func_uint16_t_u_u((safe_mul_func_int16_t_s_s((safe_div_func_uint8_t_u_u(0x9EL, g_133.f0)), ((((g_283 ^= ((safe_div_func_uint32_t_u_u(((((p_19.f0 <= (p_19.f0 < 0xE590L)) , l_699[4][0]) == (*g_280)) | 255UL), (-1L))) <= p_19.f0)) & p_19.f2) != p_19.f0) && (-2L)))), g_73[0][4][1])) & l_702)) < l_702), g_133.f2)), g_306)) || g_677.f2) > p_19.f2) <= (***l_679))) , 6L)) ^ g_635);
                    return l_36;
                }
                (*l_704) = ((g_133.f3 && p_19.f2) , &g_133);
            }
        }
        return l_680;
    }
    l_707 = l_706[0];
    return &g_573;
}



static int32_t  func_28(struct S0  p_29)
{ 
    int32_t *l_95 = &g_92.f0;
    int32_t **l_130 = &l_95;
    int32_t *** const l_129 = &l_130;
    struct S0 l_215[3] = {{-1L,0xA2725A88L,0x0BL},{-1L,0xA2725A88L,0x0BL},{-1L,0xA2725A88L,0x0BL}};
    union U1 *l_238[3][5] = {{&g_60,&g_60,&g_60,(void*)0,&g_60},{&g_60,&g_60,&g_60,&g_60,&g_60},{&g_60,&g_60,&g_60,&g_60,&g_60}};
    int32_t l_299 = 5L;
    int32_t l_300 = 1L;
    int32_t l_301 = 0xA275FDE8L;
    int32_t l_302 = 0x8B7ED7CCL;
    int32_t l_303[4] = {0x715AADE9L,0x715AADE9L,0x715AADE9L,0x715AADE9L};
    int16_t l_305[3];
    uint16_t *l_326 = (void*)0;
    int i, j;
    for (i = 0; i < 3; i++)
        l_305[i] = 0x8BD9L;
    (*l_95) |= g_91;
    for (g_66 = 19; (g_66 <= 28); g_66++)
    { 
        int16_t l_103 = 0xB3ADL;
        int32_t *l_135 = &g_2;
        int32_t *l_178 = &g_2;
        int32_t *l_209 = &g_91;
        const union U1 l_279 = {1UL};
        int32_t ***l_288 = &g_270;
        int32_t ****l_287 = &l_288;
        int32_t l_295 = (-10L);
        int32_t l_296 = 0xBA142A30L;
        int32_t l_297[7] = {1L,0xE4B629CBL,1L,1L,0xE4B629CBL,1L,1L};
        int32_t l_304 = (-1L);
        int i;
        for (g_72 = 14; (g_72 != 14); g_72 = safe_add_func_int64_t_s_s(g_72, 4))
        { 
            int32_t **l_134 = &g_100;
            int16_t *l_151 = &l_103;
            int32_t l_208 = 0xFB557DD5L;
            const int16_t ****l_284 = &g_280;
            for (g_91 = 0; (g_91 <= 0); g_91 += 1)
            { 
                int32_t **l_101 = (void*)0;
                int32_t **l_102 = (void*)0;
                int i;
                (*l_95) = 0xC383C403L;
                if (g_63[g_91])
                    continue;
                g_100 = g_100;
                for (p_29.f0 = 0; (p_29.f0 >= 0); p_29.f0 -= 1)
                { 
                    int i;
                    if (g_63[p_29.f0])
                        break;
                    l_103 = 1L;
                }
            }
            for (p_29.f2 = 18; (p_29.f2 > 54); p_29.f2 = safe_add_func_int32_t_s_s(p_29.f2, 1))
            { 
                int32_t **l_116 = &g_100;
                int32_t ***l_117 = &l_116;
                const int32_t ****l_128[1];
                int32_t ****l_138 = &l_117;
                int32_t *****l_137 = &l_138;
                uint16_t *l_149 = &g_63[0];
                int32_t l_184[1];
                int i;
                for (i = 0; i < 1; i++)
                    l_128[i] = &g_127;
                for (i = 0; i < 1; i++)
                    l_184[i] = 0x8598B864L;
            }
            for (g_136 = (-6); (g_136 > 38); g_136 = safe_add_func_uint16_t_u_u(g_136, 4))
            { 
                uint64_t l_187 = 18446744073709551609UL;
                uint16_t *l_191 = (void*)0;
                uint16_t *l_192 = (void*)0;
                uint16_t *l_193 = (void*)0;
                uint16_t *l_194 = (void*)0;
                uint16_t *l_195 = &g_133.f3;
                union U2 l_210 = {0UL};
                int32_t *l_216 = &g_179[0][4];
                int32_t *l_217 = &g_92.f0;
                struct S0 *l_242 = &g_243;
                struct S0 *l_251 = (void*)0;
            }
            (*l_284) = g_280;
            p_29.f0 ^= (&g_281 == (void*)0);
        }
        (***l_129) &= (safe_lshift_func_int16_t_s_s((&l_130 != ((*l_287) = ((*g_268) = &l_130))), 14));
        (*l_209) |= (!((***l_288) &= (safe_mul_func_int8_t_s_s(p_29.f2, p_29.f0))));
        for (g_243.f0 = 0; (g_243.f0 <= 6); g_243.f0 += 1)
        { 
            int32_t l_292 = 1L;
            int32_t l_294[6] = {2L,2L,2L,2L,2L,2L};
            int16_t *l_313 = &l_103;
            uint32_t *l_316 = (void*)0;
            uint32_t *l_317[6][7][1] = {{{&g_133.f1},{(void*)0},{(void*)0},{&g_133.f1},{&g_136},{&g_133.f1},{(void*)0}},{{(void*)0},{&g_133.f1},{&g_133.f1},{&g_133.f1},{(void*)0},{(void*)0},{&g_133.f1}},{{&g_136},{&g_133.f1},{(void*)0},{(void*)0},{&g_133.f1},{&g_133.f1},{&g_133.f1}},{{(void*)0},{(void*)0},{&g_133.f1},{&g_136},{&g_133.f1},{(void*)0},{(void*)0}},{{&g_133.f1},{&g_133.f1},{&g_133.f1},{(void*)0},{(void*)0},{&g_133.f1},{&g_136}},{{&g_133.f1},{(void*)0},{(void*)0},{&g_133.f1},{&g_133.f1},{&g_133.f1},{(void*)0}}};
            int8_t l_318 = (-1L);
            uint64_t *l_323 = &g_60.f0;
            uint16_t **l_327[6][2] = {{&l_326,&l_326},{&g_150,&l_326},{&l_326,&g_150},{&g_150,&g_150},{&g_150,&g_150},{&l_326,&l_326}};
            int i, j, k;
            for (l_103 = 6; (l_103 >= 0); l_103 -= 1)
            { 
                int32_t *l_293[7] = {&g_91,&g_91,&g_91,&g_91,&g_91,&g_91,&g_91};
                int i;
                for (g_133.f1 = 0; (g_133.f1 <= 6); g_133.f1 += 1)
                { 
                    return l_292;
                }
                --g_306;
            }
            (***l_288) = (((safe_sub_func_int16_t_s_s(((safe_div_func_int8_t_s_s(((((l_313 == (((((((l_215[1] , (p_29.f2 <= (safe_rshift_func_int8_t_s_u(((++g_136) >= (((safe_mul_func_int16_t_s_s(p_29.f1, (((--(*l_323)) | (l_326 == (g_150 = l_313))) & ((0xCFL < g_73[0][3][1]) | (*l_209))))) > (***l_288)) < g_92.f1)), p_29.f1)))) != (-1L)) != 0x6686FD28L) > 18446744073709551615UL) != 0x6A6F90522F1F446DLL) | (****l_287)) , (void*)0)) , 4294967295UL) && 0x6D6E0960L) | 8L), (*g_24))) , (***g_280)), p_29.f0)) == (***l_129)) , 0xACB4EECBL);
        }
    }
    return (*l_95);
}



static struct S0  func_30(int8_t * p_31, int8_t * p_32, int8_t * p_33, int8_t * p_34, union U1  p_35)
{ 
    struct S0 l_94[5] = {{0x4CAE1FADL,0UL,0xA4L},{0x4CAE1FADL,0UL,0xA4L},{0x4CAE1FADL,0UL,0xA4L},{0x4CAE1FADL,0UL,0xA4L},{0x4CAE1FADL,0UL,0xA4L}};
    int i;
    for (g_66 = 0; (g_66 < (-13)); g_66 = safe_sub_func_int16_t_s_s(g_66, 2))
    { 
        uint16_t l_89 = 65535UL;
        struct S0 l_93 = {0L,0xF1A7E1F4L,249UL};
        for (g_72 = 0; (g_72 <= (-9)); --g_72)
        { 
            int32_t *l_90 = &g_91;
            if ((safe_sub_func_int32_t_s_s((-10L), (safe_sub_func_uint32_t_u_u(0x4046227AL, ((*l_90) ^= l_89))))))
            { 
                return g_92;
            }
            else
            { 
                return l_93;
            }
        }
    }
    return l_94[4];
}



static int8_t * func_37(int64_t  p_38, int8_t * const  p_39)
{ 
    int32_t *l_65 = &g_66;
    int32_t *l_67 = &g_66;
    int32_t *l_68 = &g_66;
    int32_t *l_69 = &g_66;
    int32_t l_70 = 1L;
    int32_t *l_71[3][7][1] = {{{&l_70},{&g_2},{&l_70},{&g_2},{&l_70},{&g_2},{&l_70}},{{&g_2},{&l_70},{&g_2},{&l_70},{&g_2},{&l_70},{&g_2}},{{&l_70},{&g_2},{&l_70},{&g_2},{&l_70},{&g_2},{&l_70}}};
    int8_t *l_80 = &g_25;
    int i, j, k;
    g_73[0][5][1]++;
    for (g_72 = 0; (g_72 == (-29)); g_72--)
    { 
        for (l_70 = 0; (l_70 != 24); ++l_70)
        { 
            if (p_38)
                break;
            if (g_66)
                break;
        }
    }
    for (l_70 = 0; l_70 < 1; l_70 += 1)
    {
        g_63[l_70] = 0xE633L;
    }
    return l_80;
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    transparent_crc(g_25, "g_25", print_hash_value);
    transparent_crc(g_60.f0, "g_60.f0", print_hash_value);
    transparent_crc(g_60.f2, "g_60.f2", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_63[i], "g_63[i]", print_hash_value);

    }
    transparent_crc(g_66, "g_66", print_hash_value);
    transparent_crc(g_72, "g_72", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 6; j++)
        {
            for (k = 0; k < 2; k++)
            {
                transparent_crc(g_73[i][j][k], "g_73[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_91, "g_91", print_hash_value);
    transparent_crc(g_92.f0, "g_92.f0", print_hash_value);
    transparent_crc(g_92.f1, "g_92.f1", print_hash_value);
    transparent_crc(g_92.f2, "g_92.f2", print_hash_value);
    transparent_crc(g_133.f0, "g_133.f0", print_hash_value);
    transparent_crc(g_133.f1, "g_133.f1", print_hash_value);
    transparent_crc(g_133.f3, "g_133.f3", print_hash_value);
    transparent_crc(g_136, "g_136", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 5; j++)
        {
            transparent_crc(g_179[i][j], "g_179[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_243.f0, "g_243.f0", print_hash_value);
    transparent_crc(g_243.f1, "g_243.f1", print_hash_value);
    transparent_crc(g_243.f2, "g_243.f2", print_hash_value);
    transparent_crc(g_283, "g_283", print_hash_value);
    transparent_crc(g_298, "g_298", print_hash_value);
    transparent_crc(g_306, "g_306", print_hash_value);
    transparent_crc(g_573, "g_573", print_hash_value);
    transparent_crc(g_584, "g_584", print_hash_value);
    transparent_crc(g_635, "g_635", print_hash_value);
    transparent_crc(g_677.f0, "g_677.f0", print_hash_value);
    transparent_crc(g_677.f2, "g_677.f2", print_hash_value);
    transparent_crc(g_713, "g_713", print_hash_value);
    transparent_crc(g_843, "g_843", print_hash_value);
    transparent_crc(g_919.f0, "g_919.f0", print_hash_value);
    transparent_crc(g_919.f1, "g_919.f1", print_hash_value);
    transparent_crc(g_919.f2, "g_919.f2", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_921[i].f0, "g_921[i].f0", print_hash_value);
        transparent_crc(g_921[i].f1, "g_921[i].f1", print_hash_value);
        transparent_crc(g_921[i].f2, "g_921[i].f2", print_hash_value);

    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 7; j++)
        {
            transparent_crc(g_978[i][j], "g_978[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_1116, "g_1116", print_hash_value);
    transparent_crc(g_1165.f0, "g_1165.f0", print_hash_value);
    transparent_crc(g_1165.f1, "g_1165.f1", print_hash_value);
    transparent_crc(g_1165.f2, "g_1165.f2", print_hash_value);
    transparent_crc(g_1233, "g_1233", print_hash_value);
    transparent_crc(g_1237, "g_1237", print_hash_value);
    transparent_crc(g_1450, "g_1450", print_hash_value);
    transparent_crc(g_1546, "g_1546", print_hash_value);
    transparent_crc(g_1565, "g_1565", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_1567[i], "g_1567[i]", print_hash_value);

    }
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(g_1609[i][j].f0, "g_1609[i][j].f0", print_hash_value);
            transparent_crc(g_1609[i][j].f2, "g_1609[i][j].f2", print_hash_value);

        }
    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 3; k++)
            {
                transparent_crc(g_1654[i][j][k], "g_1654[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_1701.f0, "g_1701.f0", print_hash_value);
    transparent_crc(g_1701.f1, "g_1701.f1", print_hash_value);
    transparent_crc(g_1701.f2, "g_1701.f2", print_hash_value);
    transparent_crc(g_1711, "g_1711", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_1748[i], "g_1748[i]", print_hash_value);

    }
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_1817[i].f0, "g_1817[i].f0", print_hash_value);
        transparent_crc(g_1817[i].f2, "g_1817[i].f2", print_hash_value);

    }
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_2017[i], "g_2017[i]", print_hash_value);

    }
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_2067[i], "g_2067[i]", print_hash_value);

    }
    transparent_crc(g_2181.f0, "g_2181.f0", print_hash_value);
    transparent_crc(g_2181.f1, "g_2181.f1", print_hash_value);
    transparent_crc(g_2181.f3, "g_2181.f3", print_hash_value);
    transparent_crc(g_2211, "g_2211", print_hash_value);
    transparent_crc(g_2293, "g_2293", print_hash_value);
    transparent_crc(g_2313, "g_2313", print_hash_value);
    transparent_crc(g_2353, "g_2353", print_hash_value);
    transparent_crc(g_2364, "g_2364", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
