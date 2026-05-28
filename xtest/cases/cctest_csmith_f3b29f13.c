// SPDX-License-Identifier: MIT
// cctest_csmith_f3b29f13.c --- cctest case csmith_f3b29f13 (csmith seed 4088569619)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x6d14a5b2 */
/* @exp_ticks 0x4264 */

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

// Options:   -s 4088569619 -o /tmp/csmith_gen_45pccp8u/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


#pragma pack(push)
#pragma pack(1)
struct S0 {
   uint64_t  f0;
   const uint8_t  f1;
   int32_t  f2;
};
#pragma pack(pop)

#pragma pack(push)
#pragma pack(1)
struct S1 {
   const int32_t  f0;
   uint64_t  f1;
};
#pragma pack(pop)

union U2 {
   uint32_t  f0;
   uint16_t  f1;
   uint64_t  f2;
   struct S0  f3;
};

union U3 {
   uint64_t  f0;
   uint64_t  f1;
};


static int32_t g_3 = (-1L);
static int16_t g_23 = (-8L);
static int64_t g_24 = 1L;
static struct S0 g_34 = {0x3312EF314D41BD43LL,0x9CL,1L};
static uint16_t g_47 = 65533UL;
static int16_t g_80 = 5L;
static union U2 g_84 = {0x31C0487CL};
static struct S0 g_94 = {4UL,0UL,-9L};
static struct S1 g_99 = {-6L,9UL};
static int32_t g_106 = 0x571CA78AL;
static int8_t g_108[2][4][5] = {{{0xD9L,(-1L),(-1L),0xD9L,0xD9L},{0x31L,7L,0x31L,7L,0x31L},{0xD9L,0xD9L,(-1L),(-1L),0xD9L},{0L,7L,0L,7L,0L}},{{0xD9L,(-1L),(-1L),0xD9L,0xD9L},{0x31L,7L,0x31L,7L,0x31L},{0xD9L,0xD9L,(-1L),(-1L),0xD9L},{0L,7L,0L,7L,0L}}};
static uint64_t g_109[3] = {18446744073709551608UL,18446744073709551608UL,18446744073709551608UL};
static uint32_t g_117 = 18446744073709551615UL;
static uint16_t g_138 = 65535UL;
static uint32_t g_142 = 18446744073709551615UL;



static union U2  func_1(void);
static uint8_t  func_8(uint32_t  p_9, uint16_t  p_10, union U2  p_11, union U3  p_12);
static int16_t  func_13(int32_t  p_14, uint8_t  p_15, int32_t  p_16, uint16_t  p_17);
static const int8_t  func_31(struct S0  p_32, uint32_t  p_33);




static union U2  func_1(void)
{ 
    int64_t l_2[3][4] = {{0L,0x161AB6EC79CF1813LL,0L,0x161AB6EC79CF1813LL},{0L,0x161AB6EC79CF1813LL,0L,0x161AB6EC79CF1813LL},{0L,0x161AB6EC79CF1813LL,0L,0x161AB6EC79CF1813LL}};
    int16_t l_83 = 8L;
    union U3 l_85 = {0xC169712D56B38323LL};
    int32_t l_121 = (-6L);
    int16_t l_134 = 0x073DL;
    int32_t l_135[5][4] = {{(-1L),(-1L),(-1L),(-1L)},{(-1L),(-1L),(-1L),(-1L)},{(-1L),(-1L),(-1L),(-1L)},{(-1L),(-1L),(-1L),(-1L)},{(-1L),(-1L),(-1L),(-1L)}};
    union U2 l_147 = {0x3A3FB787L};
    int i, j;
    for (g_3 = 2; (g_3 >= 0); g_3 -= 1)
    { 
        int32_t l_22 = 0x15A60915L;
        int32_t l_120 = 0xDAACF222L;
        int32_t l_122 = 0x69BDEC66L;
        int32_t l_127 = (-4L);
        l_122 ^= (safe_sub_func_int32_t_s_s(((safe_add_func_uint8_t_u_u(func_8((g_3 , (0xC32BL | func_13((safe_rshift_func_int16_t_s_s((g_24 = (((l_2[2][3] >= (g_23 = (safe_mod_func_int32_t_s_s(l_22, l_2[2][0])))) == g_3) | l_22)), 14)), l_2[0][1], l_2[0][2], l_2[0][2]))), l_83, g_84, l_85), g_94.f1)) && l_120), l_121));
        for (l_122 = 2; (l_122 >= 0); l_122 -= 1)
        { 
            int16_t l_126 = (-8L);
            int32_t l_136 = (-1L);
            int i, j;
            for (l_120 = 2; (l_120 >= 0); l_120 -= 1)
            { 
                int32_t l_137 = 0xD596B20DL;
                int i, j;
                l_127 &= (!(l_2[g_3][(g_3 + 1)] ^ (safe_sub_func_uint16_t_u_u((0xAFL > l_126), (8L ^ l_85.f0)))));
                g_84.f3.f2 = ((safe_div_func_int16_t_s_s((g_109[2] == 0xD5L), (g_94.f0 | ((l_135[3][3] = (safe_mod_func_uint64_t_u_u((safe_lshift_func_int16_t_s_s(l_134, g_34.f0)), g_3))) != g_23)))) == 0xD5A1L);
                g_138--;
            }
            for (l_126 = 2; (l_126 >= 0); l_126 -= 1)
            { 
                int32_t l_141[4][2][2] = {{{(-1L),(-1L)},{(-1L),(-1L)}},{{(-1L),(-1L)},{(-1L),(-1L)}},{{(-1L),(-1L)},{(-1L),(-1L)}},{{(-1L),(-1L)},{(-1L),(-1L)}}};
                int i, j, k;
                ++g_142;
                return g_84;
            }
            l_127 = (g_94.f2 = (safe_rshift_func_uint8_t_u_s(l_2[g_3][(g_3 + 1)], 6)));
        }
    }
    return l_147;
}



static uint8_t  func_8(uint32_t  p_9, uint16_t  p_10, union U2  p_11, union U3  p_12)
{ 
    int64_t l_97 = 0x6EC073B9F6D4B686LL;
    uint16_t l_98[2][5];
    int32_t l_107[5][5][1] = {{{1L},{0xB9EACEEDL},{(-6L)},{0xB9EACEEDL},{1L}},{{(-6L)},{0x3A679AE6L},{0x3A679AE6L},{(-6L)},{1L}},{{0xB9EACEEDL},{(-6L)},{0xB9EACEEDL},{1L},{(-6L)}},{{0x3A679AE6L},{0x3A679AE6L},{(-6L)},{1L},{0xB9EACEEDL}},{{(-6L)},{0xB9EACEEDL},{1L},{(-6L)},{0x3A679AE6L}}};
    uint64_t l_112 = 0x4D65734830CAE9FALL;
    int8_t l_116 = 1L;
    int i, j, k;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 5; j++)
            l_98[i][j] = 0x190AL;
    }
    p_11.f3.f2 = (safe_lshift_func_uint8_t_u_s((safe_div_func_int8_t_s_s((safe_lshift_func_uint8_t_u_s((safe_mod_func_uint32_t_u_u((g_94 , ((p_10 >= p_11.f0) & (safe_mul_func_int16_t_s_s(((((0UL < l_97) <= p_12.f1) , g_80) & 0x0033C814B4F51244LL), p_9)))), g_94.f1)), 3)), g_94.f1)), 7));
    for (p_11.f0 = 0; (p_11.f0 <= 1); p_11.f0 += 1)
    { 
        int64_t l_104 = 0L;
        int32_t l_105[2];
        uint8_t l_115 = 0xA8L;
        int i;
        for (i = 0; i < 2; i++)
            l_105[i] = (-1L);
        for (p_10 = 0; (p_10 <= 1); p_10 += 1)
        { 
            int i, j;
            g_84.f3.f2 = ((((g_99 , ((((safe_lshift_func_uint8_t_u_u((p_11 , (((l_98[p_11.f0][(p_11.f0 + 2)] >= (safe_lshift_func_int8_t_s_u(0L, 6))) && l_98[p_10][(p_11.f0 + 2)]) & 0x14L)), 0)) & p_12.f1) && g_94.f0) , p_11.f0)) & g_47) > p_11.f0) != 0xE8587384L);
            g_109[0]--;
            ++l_112;
        }
        if (l_115)
            continue;
        g_117--;
        for (g_47 = 0; (g_47 <= 1); g_47 += 1)
        { 
            return g_106;
        }
    }
    return l_97;
}



static int16_t  func_13(int32_t  p_14, uint8_t  p_15, int32_t  p_16, uint16_t  p_17)
{ 
    int32_t l_35 = 0L;
    int32_t l_36 = (-1L);
    int64_t l_56 = 0xC7F2BAC411777341LL;
    uint8_t l_63 = 255UL;
    int32_t l_71 = 0x3B8CD6C3L;
    int32_t l_81 = 0L;
    int32_t l_82 = 0x5AFB0923L;
    if (((l_36 = (safe_rshift_func_uint16_t_u_s(0x390DL, (safe_lshift_func_uint8_t_u_u(p_15, (~(+(0UL >= func_31(g_34, l_35))))))))) & l_35))
    { 
        int8_t l_39 = 0x35L;
        int32_t l_57 = (-1L);
        int32_t l_58 = 0xF18E0DA5L;
        for (p_16 = 0; (p_16 >= (-20)); p_16 = safe_sub_func_uint64_t_u_u(p_16, 8))
        { 
            l_39 = p_17;
        }
        l_58 = (safe_add_func_int32_t_s_s(((safe_sub_func_uint64_t_u_u(((g_24 != (safe_unary_minus_func_int16_t_s((safe_add_func_int64_t_s_s((g_47 = (p_17 && g_34.f0)), (safe_div_func_uint64_t_u_u((safe_mod_func_uint16_t_u_u((safe_lshift_func_uint8_t_u_s((safe_sub_func_int8_t_s_s(((l_57 ^= (p_16 > l_56)) <= 4L), p_17)), 1)), g_24)), 0xDEAB2DD2C990B51ELL))))))) < l_36), p_15)) && 1L), g_34.f0));
        p_14 = (0UL & (((safe_sub_func_uint8_t_u_u(p_17, g_34.f1)) , g_24) <= g_34.f0));
    }
    else
    { 
        for (l_35 = 0; (l_35 > (-18)); l_35 = safe_sub_func_int8_t_s_s(l_35, 6))
        { 
            l_63 = g_34.f2;
        }
    }
    l_71 |= ((safe_add_func_int8_t_s_s(0x1DL, (0x9414028BL >= (!(safe_rshift_func_int8_t_s_s((safe_sub_func_int8_t_s_s((l_36 = l_56), (g_34.f2 & p_17))), l_56)))))) , 0x068CF114L);
    l_82 ^= (l_36 ^ (safe_add_func_uint32_t_u_u(0xC02EE360L, (((safe_add_func_int32_t_s_s(((safe_div_func_uint32_t_u_u(0xBAAEEA3AL, ((l_81 = (safe_rshift_func_uint8_t_u_s((l_71 = (g_80 = (0xD63ADB0BL >= 0xD5E18B70L))), p_14))) , p_16))) , 0x8086ADB6L), l_35)) && g_3) && l_71))));
    return p_14;
}



static const int8_t  func_31(struct S0  p_32, uint32_t  p_33)
{ 
    return g_23;
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_3, "g_3", print_hash_value);
    transparent_crc(g_23, "g_23", print_hash_value);
    transparent_crc(g_24, "g_24", print_hash_value);
    transparent_crc(g_34.f0, "g_34.f0", print_hash_value);
    transparent_crc(g_34.f1, "g_34.f1", print_hash_value);
    transparent_crc(g_34.f2, "g_34.f2", print_hash_value);
    transparent_crc(g_47, "g_47", print_hash_value);
    transparent_crc(g_80, "g_80", print_hash_value);
    transparent_crc(g_84.f0, "g_84.f0", print_hash_value);
    transparent_crc(g_84.f1, "g_84.f1", print_hash_value);
    transparent_crc(g_94.f0, "g_94.f0", print_hash_value);
    transparent_crc(g_94.f1, "g_94.f1", print_hash_value);
    transparent_crc(g_94.f2, "g_94.f2", print_hash_value);
    transparent_crc(g_99.f0, "g_99.f0", print_hash_value);
    transparent_crc(g_99.f1, "g_99.f1", print_hash_value);
    transparent_crc(g_106, "g_106", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 5; k++)
            {
                transparent_crc(g_108[i][j][k], "g_108[i][j][k]", print_hash_value);

            }
        }
    }
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_109[i], "g_109[i]", print_hash_value);

    }
    transparent_crc(g_117, "g_117", print_hash_value);
    transparent_crc(g_138, "g_138", print_hash_value);
    transparent_crc(g_142, "g_142", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
