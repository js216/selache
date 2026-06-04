// SPDX-License-Identifier: MIT
// cctest_csmith_b0d30010.c --- cctest case csmith_b0d30010 (csmith seed 2966618128)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x256c09a1 */
/* @exp_ticks 0x81e */

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

// Options:   -s 2966618128 -o /home/agent1/fast_data/tmp/csmith_gen_bflg3va_/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


#pragma pack(push)
#pragma pack(1)
struct S0 {
   int16_t  f0;
   const int8_t  f1;
   uint16_t  f2;
};
#pragma pack(pop)

union U1 {
   struct S0  f0;
   struct S0  f1;
   int32_t  f2;
};

union U2 {
   uint8_t  f0;
   int32_t  f1;
   int8_t  f2;
   const int16_t  f3;
};

union U3 {
   const int64_t  f0;
   const int32_t  f1;
};

union U5 {
   const int32_t  f0;
   const uint8_t  f1;
   struct S0  f2;
};

union U6 {
   uint16_t  f0;
   const struct S0  f1;
   struct S0  f2;
};

union U7 {
   int32_t  f0;
};


static int64_t g_7 = 0xD0A7084BC9C3D069LL;
static int32_t g_12 = 0x18E9934BL;
static int32_t g_16[4] = {0x7B7E80D6L,0x7B7E80D6L,0x7B7E80D6L,0x7B7E80D6L};
static union U7 g_24 = {0xC84B7B83L};
static uint32_t g_39 = 0x7399D012L;
static int64_t g_56 = 0xD865E429B0536403LL;
static uint32_t g_58 = 4294967295UL;
static uint16_t g_59 = 4UL;
static uint16_t g_60 = 8UL;
static const struct S0 g_81 = {-8L,0xCCL,0xDECAL};
static uint64_t g_84 = 0x8ED4FF94FDEA9412LL;
static union U3 g_108 = {-3L};
static uint16_t g_129 = 0x217AL;
static union U6 g_144[5][2] = {{{0UL},{0UL}},{{0UL},{0UL}},{{0UL},{0UL}},{{0UL},{0UL}},{{0UL},{0UL}}};
static union U1 g_231 = {{0xC910L,-6L,0x9F80L}};



static int32_t  func_1(void);
static int32_t  func_2(uint8_t  p_3, union U1  p_4, uint32_t  p_5, int8_t  p_6);
static uint8_t  func_8(uint32_t  p_9, const union U5  p_10, const int8_t  p_11);
static const union U5  func_17(uint64_t  p_18, uint32_t  p_19, union U7  p_20);




static int32_t  func_1(void)
{ 
    uint32_t l_13 = 0UL;
    int32_t l_21 = 0L;
    const uint64_t l_28[4][5] = {{0x295A527720104353LL,0x295A527720104353LL,0x0477AE2718B9628ELL,1UL,0x0477AE2718B9628ELL},{0x295A527720104353LL,0x295A527720104353LL,0x0477AE2718B9628ELL,1UL,0x0477AE2718B9628ELL},{0x295A527720104353LL,0x295A527720104353LL,0x0477AE2718B9628ELL,1UL,0x0477AE2718B9628ELL},{0x295A527720104353LL,0x295A527720104353LL,0x0477AE2718B9628ELL,1UL,0x0477AE2718B9628ELL}};
    union U1 l_198 = {{2L,-8L,0xBEDFL}};
    uint8_t l_282 = 0x23L;
    union U3 l_291 = {1L};
    int32_t l_300[4][1] = {{(-10L)},{0L},{(-10L)},{0L}};
    uint16_t l_320 = 65527UL;
    int i, j;
    if (func_2((g_7 , func_8((g_16[0] = (--l_13)), func_17(l_21, ((((safe_rshift_func_uint8_t_u_s((g_7 | l_21), l_21)) && g_7) < 0xC4L) & g_12), g_24), l_28[2][1])), l_198, g_129, g_81.f0))
    { 
        uint8_t l_249 = 2UL;
        int32_t l_265 = 0x1B6DA610L;
        uint32_t l_283 = 6UL;
        uint32_t l_297[1];
        int32_t l_301 = (-10L);
        int32_t l_302 = 9L;
        int i;
        for (i = 0; i < 1; i++)
            l_297[i] = 0x678C4744L;
        if ((((g_144[2][1].f2.f2 = 0x9928L) && ((g_108.f0 , (!g_60)) != (((((safe_add_func_int32_t_s_s((g_12 &= (l_198.f2 &= (((safe_mod_func_uint8_t_u_u((safe_sub_func_uint64_t_u_u(0xF36518EE95946782LL, l_249)), 0xD1L)) == 0x093CF060L) == 0x36BA8943D24E9301LL))), 0x79C46A1AL)) < g_231.f1.f2) <= g_231.f1.f2) < l_249) >= l_249))) , l_198.f2))
        { 
            struct S0 l_250[3] = {{1L,0xACL,0x5374L},{1L,0xACL,0x5374L},{1L,0xACL,0x5374L}};
            int i;
            g_12 = (l_21 < (l_250[0] , 0x868B81BE9AE68F20LL));
        }
        else
        { 
            const uint32_t l_251 = 4294967286UL;
            l_198.f2 = l_251;
        }
        for (g_231.f1.f0 = 0; (g_231.f1.f0 >= (-6)); g_231.f1.f0--)
        { 
            uint8_t l_264[4] = {1UL,1UL,1UL,1UL};
            int32_t l_296 = 0xB0218DD0L;
            uint32_t l_304 = 0x63D993A8L;
            int i;
            g_12 = (((safe_mul_func_int16_t_s_s((safe_lshift_func_int16_t_s_u(g_39, 3)), 1L)) || (g_39 = ((l_265 &= (safe_div_func_uint16_t_u_u((((l_249 <= ((safe_mod_func_int32_t_s_s((safe_mul_func_int8_t_s_s((g_56 ^ l_264[1]), g_231.f1.f0)), l_28[2][2])) , 0UL)) || g_231.f2) && 0L), g_60))) > g_231.f1.f0))) <= g_58);
            for (l_13 = 0; (l_13 <= 3); ++l_13)
            { 
                int32_t l_288 = 0x656AE978L;
                int16_t l_298 = (-1L);
                int32_t l_299 = 0xB080ABBFL;
                int64_t l_303 = 0L;
                g_16[3] = ((g_129 = (safe_sub_func_uint32_t_u_u((safe_div_func_uint16_t_u_u((g_16[0] == (safe_sub_func_uint32_t_u_u(((l_13 , (safe_add_func_int8_t_s_s((l_198.f2 = ((safe_mod_func_uint8_t_u_u(((((((g_108.f0 , ((safe_lshift_func_uint16_t_u_u(((((safe_mul_func_int16_t_s_s((g_144[2][1] , 1L), g_231.f0.f1)) > g_81.f2) || 2UL) <= 2L), 15)) > g_231.f2)) || 0x6D558A1B903DA891LL) >= g_108.f1) > 0UL) != 1L) ^ g_24.f0), l_249)) != g_59)), g_39))) == l_282), g_81.f1))), g_108.f1)), l_283))) > l_28[2][1]);
                g_16[0] &= ((safe_mod_func_uint32_t_u_u(((safe_sub_func_uint16_t_u_u(((((g_7 = l_288) , (safe_add_func_int8_t_s_s(((l_291 , ((((l_296 &= (((safe_mod_func_uint16_t_u_u(((0x46EDA828L || (safe_rshift_func_uint16_t_u_s(l_283, g_108.f0))) > 0UL), l_265)) | l_264[1]) , (-9L))) | 0x42L) > 1UL) < g_59)) , 7L), l_264[1]))) && l_288) >= l_249), g_108.f1)) || l_297[0]), (-2L))) , (-10L));
                l_304--;
            }
            return l_304;
        }
    }
    else
    { 
        int32_t l_307 = 7L;
        int32_t l_308 = 0x94D5BFBDL;
        int32_t l_309[3];
        uint32_t l_310[4] = {0xD52E694BL,0xD52E694BL,0xD52E694BL,0xD52E694BL};
        union U7 l_318 = {0x90B11C7DL};
        int i;
        for (i = 0; i < 3; i++)
            l_309[i] = 0x3595D045L;
        --l_310[2];
lbl_313:
        g_16[2] = g_231.f1.f2;
        for (l_21 = 2; (l_21 >= 0); l_21 -= 1)
        { 
            uint64_t l_315 = 0x99C1923D8348DC13LL;
            int32_t l_319 = (-10L);
            int32_t l_323 = 0L;
            for (g_231.f1.f0 = 0; (g_231.f1.f0 >= 0); g_231.f1.f0 -= 1)
            { 
                int32_t l_314 = 0x2CBC31E6L;
                int i, j;
                if (l_198.f0.f2)
                    goto lbl_313;
                --l_315;
            }
            for (l_198.f1.f0 = 0; (l_198.f1.f0 <= 0); l_198.f1.f0 += 1)
            { 
                uint64_t l_324 = 9UL;
                int i, j;
                g_16[0] &= (((g_84 |= ((func_17(l_309[l_198.f1.f0], l_309[l_21], l_318) , l_300[(l_21 + 1)][l_198.f1.f0]) == 0xB5L)) > l_300[(l_21 + 1)][l_198.f1.f0]) == l_300[(l_198.f1.f0 + 2)][l_198.f1.f0]);
                --l_320;
                ++l_324;
            }
        }
    }
    g_12 = ((safe_add_func_int16_t_s_s((safe_sub_func_int64_t_s_s((safe_sub_func_uint16_t_u_u(65534UL, (l_300[2][0] = (0UL | ((((g_24 , ((safe_lshift_func_uint8_t_u_u(((0L > g_39) && g_81.f2), 7)) || 0xEAA5L)) < g_39) , g_39) | l_291.f0))))), g_108.f1)), 65534UL)) ^ g_58);
    return g_81.f2;
}



static int32_t  func_2(uint8_t  p_3, union U1  p_4, uint32_t  p_5, int8_t  p_6)
{ 
    uint32_t l_206 = 0xC3BF28D7L;
    int32_t l_208 = 0x813CE37CL;
    int8_t l_238 = 2L;
    uint32_t l_239 = 0x2820C098L;
    uint8_t l_240 = 0xFCL;
    uint16_t l_241 = 0x2A9EL;
    for (g_56 = 4; (g_56 <= 12); g_56++)
    { 
        uint64_t l_218[4];
        int i;
        for (i = 0; i < 4; i++)
            l_218[i] = 0x67537B090339252ELL;
        for (g_129 = 0; (g_129 <= 3); g_129 += 1)
        { 
            uint32_t l_209 = 0UL;
            int i;
        }
    }
    p_4.f2 = ((safe_mul_func_int8_t_s_s(((safe_sub_func_uint8_t_u_u((((l_208 ^= ((safe_add_func_uint16_t_u_u(((((g_231 , (safe_sub_func_int64_t_s_s(g_59, (safe_add_func_int64_t_s_s((safe_mul_func_uint16_t_u_u((65533UL & (p_3 != (-1L))), g_58)), 0x78B995595372CDDALL))))) != l_238) > p_4.f1.f1) || (-10L)), l_206)) && l_239)) , g_16[1]) & 4UL), l_206)) , g_24.f0), l_240)) && l_241);
    return g_231.f2;
}



static uint8_t  func_8(uint32_t  p_9, const union U5  p_10, const int8_t  p_11)
{ 
    int64_t l_33 = 0xA0997736EAE11771LL;
    int32_t l_36 = 0x2B3F54C3L;
    int32_t l_73 = (-6L);
    uint8_t l_74 = 0x9EL;
    uint16_t l_83 = 65535UL;
    int32_t l_121 = 0xF7ADE520L;
    int32_t l_122 = (-1L);
    uint64_t l_149 = 1UL;
    int32_t l_175 = 8L;
    if (((safe_div_func_int64_t_s_s((safe_add_func_uint64_t_u_u(((l_36 = (((l_33 != ((l_33 | (0x734895C4L || (((safe_sub_func_uint64_t_u_u((0x4071C19CL <= 3UL), 0UL)) ^ g_12) & l_33))) ^ 0x7DL)) < l_33) ^ l_33)) ^ g_12), l_33)), g_16[1])) , 0L))
    { 
        int32_t l_57 = 2L;
        int32_t l_82[3];
        int8_t l_107[2];
        int i;
        for (i = 0; i < 3; i++)
            l_82[i] = (-1L);
        for (i = 0; i < 2; i++)
            l_107[i] = 0x8AL;
        g_60 ^= (safe_rshift_func_uint16_t_u_s((((++g_39) , (((((safe_div_func_int8_t_s_s((g_59 &= (safe_div_func_uint32_t_u_u((((((0x37461BCFL & (safe_mod_func_uint8_t_u_u((safe_lshift_func_int8_t_s_s((g_58 = (((safe_add_func_uint64_t_u_u((safe_add_func_int8_t_s_s((g_12 | (safe_lshift_func_int8_t_s_s((g_39 & (g_56 ^= (l_36 > g_24.f0))), g_16[2]))), 7L)), 18446744073709551615UL)) == l_57) > g_16[0])), 5)), g_16[0]))) || p_11) | 65535UL) <= p_10.f1) && 1UL), g_12))), g_16[0])) & g_7) == (-1L)) && 0xE2CBL) < g_24.f0)) , 0x4EE4L), 4));
        l_36 = (safe_add_func_uint16_t_u_u((((65535UL <= (1L | (safe_sub_func_uint8_t_u_u((3L || (((((+((safe_unary_minus_func_int32_t_s((safe_mul_func_uint8_t_u_u((safe_mul_func_int8_t_s_s(g_58, l_57)), 0UL)))) == p_11)) ^ 0x5B7FL) < l_57) && l_73) < p_9)), l_74)))) < p_10.f0) < g_56), p_9));
        for (l_74 = 0; (l_74 <= 3); l_74 += 1)
        { 
            uint32_t l_85 = 5UL;
            int32_t l_94 = (-1L);
            int32_t l_106 = 8L;
            for (g_7 = 3; (g_7 >= 0); g_7 -= 1)
            { 
                int i;
                l_85 &= (((g_84 |= (safe_lshift_func_uint8_t_u_u((safe_add_func_uint16_t_u_u((g_16[g_7] != p_11), (((safe_lshift_func_uint16_t_u_u((((g_81 , l_82[0]) && p_11) != l_83), g_7)) , 0L) >= 0xFA7FL))), 7))) && 65533UL) ^ 0UL);
                if (g_16[g_7])
                    continue;
                l_94 |= (g_16[0] = (safe_add_func_int8_t_s_s((safe_sub_func_int32_t_s_s(l_85, (safe_sub_func_int8_t_s_s((((safe_lshift_func_uint16_t_u_u(((p_11 >= ((p_11 ^ l_82[2]) , p_10.f0)) & 65529UL), 14)) , 0x6AL) || 0x9FL), 7L)))), 0x56L)));
            }
            l_82[0] |= (((p_9 | (l_106 |= (((!((!(l_57 > (safe_sub_func_uint16_t_u_u((safe_sub_func_uint64_t_u_u(g_56, (safe_mod_func_uint16_t_u_u(((l_94 = (safe_sub_func_int32_t_s_s((+0xC74BL), 0xE040F3C6L))) , 7UL), g_58)))), p_10.f1)))) && g_60)) <= p_10.f1) | p_11))) | l_57) | l_107[1]);
        }
    }
    else
    { 
        return l_74;
    }
    g_16[0] = (g_108 , (safe_add_func_int16_t_s_s((((safe_lshift_func_int16_t_s_u(p_9, l_73)) <= p_9) | g_59), l_74)));
    if ((safe_add_func_int8_t_s_s(((safe_mod_func_uint64_t_u_u((((safe_div_func_int32_t_s_s((-9L), (((safe_div_func_uint32_t_u_u((g_58++), (l_74 , (safe_lshift_func_int16_t_s_u(p_10.f1, 14))))) != (safe_mod_func_int32_t_s_s(((l_73 |= ((0xAA3EL > l_121) > 0x35970AEDL)) && g_129), p_10.f1))) , g_12))) ^ 0x3E8CBBEEL) <= g_129), 0xB99205434A3FD71FLL)) == 0x2A49L), 9UL)))
    { 
        uint32_t l_140 = 0xEA7E5B63L;
        union U2 l_143[5][1] = {{{0x21L}},{{3UL}},{{0x21L}},{{3UL}},{{0x21L}}};
        int64_t l_155 = 3L;
        uint32_t l_156 = 8UL;
        int i, j;
        for (g_24.f0 = (-8); (g_24.f0 >= (-6)); g_24.f0++)
        { 
            l_121 = 0x6319732EL;
            for (l_83 = 0; (l_83 <= 3); l_83 += 1)
            { 
                return g_16[1];
            }
        }
        if ((p_9 > (safe_rshift_func_uint16_t_u_s((safe_lshift_func_uint8_t_u_s((safe_lshift_func_int8_t_s_u((safe_add_func_uint64_t_u_u((0xBE9FDC9EDED60BA8LL & l_140), (((0L || g_60) || g_60) || g_24.f0))), p_9)), p_10.f1)), p_10.f0))))
        { 
            struct S0 l_152 = {1L,3L,0x3820L};
            int64_t l_157[3];
            int i;
            for (i = 0; i < 3; i++)
                l_157[i] = 0xCB47B8E489E7F0AFLL;
            if (((g_144[2][1].f0 = ((safe_add_func_uint16_t_u_u(((l_143[4][0] , g_144[2][1]) , (safe_add_func_int8_t_s_s((((((-5L) != (safe_rshift_func_int8_t_s_s((((g_12 = (p_10.f0 >= (-7L))) <= g_108.f1) == g_81.f1), 0))) , l_149) <= p_10.f0) | 7UL), l_143[4][0].f2))), 0UL)) < g_108.f1)) , 0xC415CA0CL))
            { 
                l_156 = (((safe_div_func_int8_t_s_s((l_152 , (g_81 , (l_36 |= (p_9 <= ((253UL ^ g_81.f2) > 0x51L))))), l_155)) < g_60) | 9UL);
            }
            else
            { 
                return l_157[1];
            }
            l_121 = (safe_add_func_int64_t_s_s(l_149, (safe_unary_minus_func_uint8_t_u((safe_mul_func_uint16_t_u_u((safe_mod_func_uint32_t_u_u(((++g_84) < ((~(((safe_mul_func_int8_t_s_s(((0xA3B0D4ED63EAABCALL < l_143[4][0].f2) || l_157[1]), g_59)) >= 0x5B14A6E1L) >= g_81.f1)) ^ p_10.f0)), p_11)), g_56))))));
        }
        else
        { 
            return l_140;
        }
    }
    else
    { 
        int8_t l_174 = 0xE2L;
        int32_t l_177 = (-1L);
        int32_t l_178 = (-1L);
        int32_t l_179 = (-5L);
        union U1 l_182 = {{0x8911L,0x31L,0UL}};
        g_12 = (safe_sub_func_uint16_t_u_u((g_144[2][1].f0 &= 0UL), (((safe_rshift_func_uint8_t_u_u(((((0x58CDL > l_174) != l_83) , p_9) <= p_10.f1), 0)) , l_175) & p_9)));
        g_16[0] ^= p_10.f0;
        if ((+((++g_39) > 4294967295UL)))
        { 
            int64_t l_185[2];
            int i;
            for (i = 0; i < 2; i++)
                l_185[i] = 0xA113A2588FA3BE20LL;
            l_178 = (l_182 , g_129);
            g_16[0] = (((safe_div_func_uint16_t_u_u((l_179 = (l_178 &= (l_185[1] ^ 255UL))), (safe_lshift_func_int16_t_s_u((safe_rshift_func_uint16_t_u_u(p_9, (safe_sub_func_int32_t_s_s(p_10.f1, l_185[1])))), 9)))) <= 1UL) , g_81.f1);
            g_16[2] = (+g_58);
        }
        else
        { 
            uint32_t l_195 = 1UL;
            for (l_149 = 0; (l_149 <= 10); l_149 = safe_add_func_int32_t_s_s(l_149, 6))
            { 
                if (g_16[1])
                    break;
            }
            l_195--;
        }
    }
    return p_10.f0;
}



static const union U5  func_17(uint64_t  p_18, uint32_t  p_19, union U7  p_20)
{ 
    const union U5 l_27 = {0xC8AF9534L};
    g_12 = (safe_lshift_func_uint8_t_u_u(p_18, 5));
    return l_27;
}





int test_main(void)
{
    int i, j;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_7, "g_7", print_hash_value);
    transparent_crc(g_12, "g_12", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_16[i], "g_16[i]", print_hash_value);

    }
    transparent_crc(g_24.f0, "g_24.f0", print_hash_value);
    transparent_crc(g_39, "g_39", print_hash_value);
    transparent_crc(g_56, "g_56", print_hash_value);
    transparent_crc(g_58, "g_58", print_hash_value);
    transparent_crc(g_59, "g_59", print_hash_value);
    transparent_crc(g_60, "g_60", print_hash_value);
    transparent_crc(g_81.f0, "g_81.f0", print_hash_value);
    transparent_crc(g_81.f1, "g_81.f1", print_hash_value);
    transparent_crc(g_81.f2, "g_81.f2", print_hash_value);
    transparent_crc(g_84, "g_84", print_hash_value);
    transparent_crc(g_108.f0, "g_108.f0", print_hash_value);
    transparent_crc(g_108.f1, "g_108.f1", print_hash_value);
    transparent_crc(g_129, "g_129", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(g_144[i][j].f0, "g_144[i][j].f0", print_hash_value);

        }
    }
    transparent_crc(g_231.f0.f0, "g_231.f0.f0", print_hash_value);
    transparent_crc(g_231.f0.f1, "g_231.f0.f1", print_hash_value);
    transparent_crc(g_231.f0.f2, "g_231.f0.f2", print_hash_value);
    transparent_crc(g_231.f1.f0, "g_231.f1.f0", print_hash_value);
    transparent_crc(g_231.f1.f1, "g_231.f1.f1", print_hash_value);
    transparent_crc(g_231.f1.f2, "g_231.f1.f2", print_hash_value);
    transparent_crc(g_231.f2, "g_231.f2", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
