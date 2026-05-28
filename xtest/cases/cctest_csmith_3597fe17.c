// SPDX-License-Identifier: MIT
// cctest_csmith_3597fe17.c --- cctest case csmith_3597fe17 (csmith seed 899153431)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0xb605e0e4 */
/* @exp_ticks 0x3860 */

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

// Options:   -s 899153431 -o /tmp/csmith_gen_12dyxkda/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


#pragma pack(push)
#pragma pack(1)
struct S0 {
   const uint64_t  f0;
   int32_t  f1;
   int32_t  f2;
   uint32_t  f3;
   uint32_t  f4;
};
#pragma pack(pop)

#pragma pack(push)
#pragma pack(1)
struct S1 {
   struct S0  f0;
   int32_t  f1;
   uint32_t  f2;
};
#pragma pack(pop)

struct S2 {
   const uint32_t  f0;
};

union U3 {
   uint64_t  f0;
   int16_t  f1;
   uint64_t  f2;
};

union U4 {
   uint32_t  f0;
   uint8_t  f1;
   struct S0  f2;
};

union U5 {
   const struct S2  f0;
   uint32_t  f1;
};


static uint64_t g_11 = 18446744073709551615UL;
static union U5 g_17 = {{0xA4F2A6CAL}};
static union U3 g_26[2] = {{0xD8B26DE0D6158F87LL},{0xD8B26DE0D6158F87LL}};
static union U3 g_32 = {18446744073709551610UL};
static uint16_t g_34 = 0x18DAL;
static int64_t g_60 = (-1L);
static int32_t g_61 = (-1L);
static uint64_t g_63 = 1UL;
static uint32_t g_69 = 0xF7CD62FFL;
static int8_t g_78 = 0xE3L;
static uint8_t g_145 = 0xD7L;
static int8_t g_193 = (-4L);
static uint64_t g_195 = 0UL;
static struct S1 g_246 = {{1UL,0L,0x618834DEL,18446744073709551614UL,0x3EC5925CL},0x5DA18702L,0x0360E747L};
static int32_t g_249 = 0x99627D35L;
static int32_t g_254 = 1L;
static uint16_t g_255[4] = {0x38F1L,0x38F1L,0x38F1L,0x38F1L};
static int32_t g_339 = (-1L);
static uint32_t g_340 = 0xCE189E2EL;



static struct S1  func_1(void);
static struct S1  func_12(const int32_t  p_13);
static int32_t  func_14(union U5  p_15, struct S2  p_16);
static int32_t  func_19(union U3  p_20, const int64_t  p_21, union U3  p_22, union U4  p_23, uint32_t  p_24);




static struct S1  func_1(void)
{ 
    uint64_t l_2 = 0x2CA9683648BD921BLL;
    struct S2 l_18 = {1UL};
    int32_t l_204 = 0xC9C37AF4L;
    struct S1 l_341[1][2][1] = {{{{{18446744073709551615UL,0L,0x678BD9CCL,1UL,1UL},1L,1UL}},{{{18446744073709551615UL,0L,0x678BD9CCL,1UL,1UL},1L,1UL}}}};
    int i, j, k;
    ++l_2;
    g_340 ^= (safe_lshift_func_int16_t_s_s((safe_add_func_int64_t_s_s(3L, ((((g_339 = (safe_div_func_int32_t_s_s((g_11 = l_2), (func_12((l_204 = func_14(g_17, l_18))) , g_255[0])))) < g_249) , l_18.f0) > l_18.f0))), 14));
    return l_341[0][1][0];
}



static struct S1  func_12(const int32_t  p_13)
{ 
    int8_t l_213[2][1];
    union U4 l_216 = {4UL};
    int32_t l_219 = 1L;
    union U3 l_231 = {8UL};
    int16_t l_268 = 0x6858L;
    int32_t l_327 = 0x84668B10L;
    int i, j;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 1; j++)
            l_213[i][j] = 0x9BL;
    }
    l_219 = (l_216.f2.f1 = (safe_mod_func_int16_t_s_s((safe_rshift_func_int16_t_s_s(((safe_add_func_uint16_t_u_u((safe_mod_func_int8_t_s_s(l_213[1][0], (safe_div_func_int32_t_s_s(g_63, (l_216 , (((safe_lshift_func_int16_t_s_s(l_213[0][0], 14)) == 0x1D82DD5BL) , l_216.f1)))))), 1L)) | p_13), 1)), g_34)));
    for (g_145 = 0; (g_145 < 53); ++g_145)
    { 
        uint32_t l_232 = 18446744073709551610UL;
        int64_t l_242[1];
        int32_t l_247 = 1L;
        int i;
        for (i = 0; i < 1; i++)
            l_242[i] = (-1L);
        if ((g_61 = g_195))
        { 
            uint16_t l_228 = 0xADA2L;
            int32_t l_233 = 1L;
            l_219 |= (0x73FC3EFAL && (safe_div_func_uint8_t_u_u((((safe_mod_func_uint32_t_u_u((((l_233 = (p_13 < (safe_mul_func_int8_t_s_s(l_228, (safe_add_func_uint32_t_u_u(((l_216.f2.f1 = (l_231 , g_26[1].f1)) || l_232), g_26[1].f2)))))) || g_69) || g_69), 3L)) ^ g_26[1].f1) || 0xC5L), p_13)));
        }
        else
        { 
            uint64_t l_245 = 0xD6D7103912959A4ALL;
            if (p_13)
                break;
            for (l_216.f2.f3 = 5; (l_216.f2.f3 == 33); l_216.f2.f3 = safe_add_func_int8_t_s_s(l_216.f2.f3, 2))
            { 
                int8_t l_244 = 0xACL;
                l_245 = ((safe_mul_func_uint8_t_u_u((safe_sub_func_int64_t_s_s(1L, ((safe_add_func_uint32_t_u_u(l_232, (l_244 = (((l_242[0] && ((+p_13) , p_13)) >= p_13) & (-1L))))) != p_13))), 1L)) && 0x2FD106FB5F6E7C4BLL);
                if (g_195)
                    break;
                return g_246;
            }
        }
        for (l_219 = 0; (l_219 <= 0); l_219 += 1)
        { 
            int32_t l_250 = 0xC2D6479EL;
            int32_t l_251 = 0x73494EFDL;
            int i;
            l_216.f2.f1 = (l_247 ^= l_242[l_219]);
            for (l_232 = 0; (l_232 <= 0); l_232 += 1)
            { 
                int64_t l_248 = 0x08ECB81EB4BAF386LL;
                int8_t l_252 = 1L;
                int32_t l_253[1][1][4] = {{{0x4C047494L,0x4C047494L,0x4C047494L,0x4C047494L}}};
                int i, j, k;
                --g_255[0];
            }
        }
    }
    if (((safe_lshift_func_int16_t_s_s(((((l_216.f2.f1 = (safe_div_func_uint8_t_u_u((((l_216.f0 && (safe_rshift_func_uint16_t_u_s((safe_sub_func_int8_t_s_s((p_13 == ((((safe_add_func_int64_t_s_s((l_219 = (p_13 ^ ((g_246.f0.f4 |= l_268) ^ 0x8FB7E03DL))), g_63)) < 0xD171DCAC96993AF8LL) < 0xA0D6759DL) || p_13)), p_13)), p_13))) != 7UL) & l_213[1][0]), l_268))) ^ 250UL) , 0x1327L) < 0x9786L), 4)) == p_13))
    { 
        uint64_t l_273 = 0xFF7E24B3D2473296LL;
        uint8_t l_276 = 255UL;
        int32_t l_277 = 0xB6A971BEL;
        int32_t l_278 = 0x9D257126L;
        l_278 = (((safe_add_func_int16_t_s_s(g_193, ((safe_add_func_int64_t_s_s(l_273, (l_277 = (((safe_div_func_int16_t_s_s(((g_246.f0 , l_276) && g_34), g_17.f0.f0)) | g_255[0]) & 0x18F5L)))) & l_276))) && 2UL) > 2UL);
        l_219 = (safe_rshift_func_uint8_t_u_u(0xB9L, 1));
        for (l_216.f0 = (-19); (l_216.f0 >= 42); l_216.f0 = safe_add_func_int16_t_s_s(l_216.f0, 4))
        { 
            l_277 |= p_13;
            if (g_63)
                continue;
        }
    }
    else
    { 
        uint32_t l_283 = 0x9B11EE23L;
        struct S2 l_288 = {18446744073709551610UL};
        uint32_t l_310[5] = {0xFDC5E22EL,0xFDC5E22EL,0xFDC5E22EL,0xFDC5E22EL,0xFDC5E22EL};
        const union U5 l_326 = {{18446744073709551609UL}};
        struct S1 l_337 = {{4UL,-4L,6L,18446744073709551615UL,0xDB03343DL},0x50AC26C5L,0UL};
        int i;
lbl_338:
        l_283 = g_26[1].f2;
        for (l_216.f1 = 0; (l_216.f1 > 31); ++l_216.f1)
        { 
            int8_t l_308 = (-1L);
            int32_t l_309 = 3L;
            if ((safe_rshift_func_uint8_t_u_u((0UL < (l_219 = (l_288 , (safe_div_func_int32_t_s_s(p_13, p_13))))), l_213[0][0])))
            { 
                int8_t l_295 = 0x54L;
                union U5 l_323 = {{4UL}};
                l_295 &= (safe_mod_func_uint32_t_u_u((safe_rshift_func_int16_t_s_s(0x09D9L, ((l_216.f1 > p_13) >= ((-1L) == 0x30L)))), 3UL));
                l_310[3] = (safe_mul_func_int16_t_s_s((p_13 <= p_13), ((safe_sub_func_uint64_t_u_u((safe_div_func_uint8_t_u_u(0x93L, (safe_mul_func_uint16_t_u_u((safe_add_func_int64_t_s_s(((((l_309 |= (g_246.f1 = (safe_add_func_int8_t_s_s(l_288.f0, l_308)))) > l_308) != l_231.f1) == g_246.f0.f4), g_246.f0.f2)), 0x3D82L)))), l_288.f0)) ^ l_308)));
                l_327 = (safe_sub_func_int32_t_s_s((safe_sub_func_uint8_t_u_u((l_219 ^= (safe_mod_func_uint64_t_u_u((1UL > (g_246.f0.f1 = (safe_lshift_func_uint16_t_u_s((((safe_mod_func_uint32_t_u_u(((((((safe_add_func_uint8_t_u_u(((((l_323 , (safe_add_func_uint64_t_u_u(((l_326 , ((l_216.f1 && g_255[0]) || l_310[3])) < 0x69A964CF4C561DE8LL), 0L))) >= p_13) && l_288.f0) <= 0x3249E6F10A4F3221LL), g_246.f0.f1)) | 8L) | 0x05L) ^ g_246.f2) && l_309) < 65535UL), (-1L))) | l_288.f0) & l_231.f1), 15)))), g_32.f1))), p_13)), l_310[3]));
            }
            else
            { 
                uint32_t l_333 = 18446744073709551606UL;
                l_333 = ((safe_sub_func_uint32_t_u_u(0x73BDA03DL, (safe_unary_minus_func_uint16_t_u(0x76ABL)))) <= (p_13 , (g_246.f0.f1 = (safe_add_func_uint16_t_u_u(((l_327 = g_32.f1) == l_231.f2), p_13)))));
            }
            for (g_61 = 9; (g_61 > 3); --g_61)
            { 
                uint32_t l_336 = 0UL;
                l_327 |= (l_336 = (g_246.f0.f1 |= p_13));
                return l_337;
            }
        }
        if (g_61)
            goto lbl_338;
    }
    return g_246;
}



static int32_t  func_14(union U5  p_15, struct S2  p_16)
{ 
    union U3 l_25 = {0x8069D1FE905687C4LL};
    int32_t l_31 = 1L;
    union U4 l_33 = {4294967291UL};
    int32_t l_146 = 8L;
    int8_t l_161 = 1L;
    l_146 |= func_19((g_26[1] = l_25), (((l_31 ^= ((0UL == (safe_mul_func_int8_t_s_s(g_17.f0.f0, (safe_lshift_func_uint16_t_u_u(p_15.f0.f0, 12))))) , p_16.f0)) , 0x48L) || g_17.f0.f0), g_32, l_33, g_17.f0.f0);
    for (l_25.f2 = 12; (l_25.f2 <= 4); l_25.f2--)
    { 
        uint32_t l_165[4];
        int32_t l_176 = (-8L);
        int i;
        for (i = 0; i < 4; i++)
            l_165[i] = 0UL;
        if ((safe_div_func_uint16_t_u_u((((g_17.f0.f0 < (((18446744073709551606UL | (safe_mod_func_uint8_t_u_u((safe_mod_func_uint64_t_u_u((safe_rshift_func_uint16_t_u_s((safe_mod_func_int16_t_s_s(((safe_rshift_func_int8_t_s_s(g_69, 4)) , 0xE0C5L), 6L)), 9)), l_25.f2)), g_69))) ^ p_16.f0) && g_63)) || g_145) == 0x8A6F2717L), l_161)))
        { 
            int32_t l_162 = 4L;
            int32_t l_163 = 0x85B538FEL;
            int32_t l_191 = 0xC0D0173BL;
            int32_t l_192 = 0x25BE5548L;
            int32_t l_194[3];
            int i;
            for (i = 0; i < 3; i++)
                l_194[i] = 0x52837081L;
            if ((g_26[1].f0 | p_16.f0))
            { 
                int32_t l_164 = 6L;
                g_61 &= (l_176 = ((l_165[0]--) > (1UL < ((g_26[1].f2 ^ p_16.f0) != (~(safe_add_func_int32_t_s_s((safe_mod_func_int64_t_s_s((safe_add_func_int64_t_s_s((g_60 &= (safe_unary_minus_func_uint8_t_u((p_15.f0.f0 , l_25.f2)))), 0x4D50860F980C733FLL)), p_16.f0)), (-4L))))))));
                l_146 ^= (safe_rshift_func_int16_t_s_s((safe_rshift_func_uint8_t_u_s(0x9BL, ((safe_lshift_func_int8_t_s_u((safe_lshift_func_int8_t_s_s((((safe_mod_func_int64_t_s_s((0x5C60L == (g_63 < (~((g_60 , 0x8BL) == p_15.f0.f0)))), l_25.f0)) , g_32.f1) > g_32.f1), g_61)), g_69)) >= 65528UL))), g_145));
            }
            else
            { 
                uint8_t l_190 = 0x6FL;
                l_163 = (((0xA5E66228L < (safe_div_func_uint16_t_u_u(l_163, ((g_32.f1 = l_190) , g_69)))) != g_78) , 0x93908CA6L);
                --g_195;
                if (l_190)
                    continue;
            }
            l_176 = ((safe_mod_func_int32_t_s_s((g_60 != p_15.f0.f0), (safe_rshift_func_int16_t_s_s((l_165[0] , ((((safe_lshift_func_int16_t_s_u((l_191 == (-1L)), 7)) , l_165[3]) , l_165[0]) != p_16.f0)), g_17.f0.f0)))) >= g_63);
        }
        else
        { 
            return p_16.f0;
        }
    }
    return p_15.f0.f0;
}



static int32_t  func_19(union U3  p_20, const int64_t  p_21, union U3  p_22, union U4  p_23, uint32_t  p_24)
{ 
    uint8_t l_43 = 1UL;
    uint32_t l_52[5];
    int32_t l_53 = 1L;
    int32_t l_54 = 0L;
    int32_t l_62[5][2];
    uint16_t l_76 = 0xD51EL;
    int16_t l_77[5] = {(-1L),(-1L),(-1L),(-1L),(-1L)};
    const uint16_t l_90 = 65535UL;
    uint32_t l_94 = 0xAFA15260L;
    struct S0 l_119 = {0x2DC29D91FBEB5A7ELL,0x3ECD4BADL,0x90955184L,0UL,0x32945A0FL};
    struct S1 l_120 = {{0x391FFBB29333D576LL,0x24DB28FCL,0x98A5ECB2L,0x9DCA8204L,0x9F078925L},0x1584D3EBL,0x02147657L};
    int32_t l_124 = (-3L);
    union U5 l_134 = {{4UL}};
    int i, j;
    for (i = 0; i < 5; i++)
        l_52[i] = 4294967295UL;
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 2; j++)
            l_62[i][j] = 0x7FB053AAL;
    }
    g_34++;
    if ((((g_32.f1 = (((safe_mul_func_uint16_t_u_u((((0x6568C077L != ((safe_add_func_int16_t_s_s(((((((((safe_mod_func_int32_t_s_s((l_43 | (safe_sub_func_uint32_t_u_u((4L < (safe_add_func_uint64_t_u_u((((safe_sub_func_uint16_t_u_u((safe_mod_func_uint32_t_u_u((((p_22.f2 &= (1UL == p_21)) & l_43) && l_43), 7L)), p_20.f1)) > p_20.f0) > l_52[3]), l_53))), p_20.f0))), p_20.f0)) | p_20.f2) != l_52[1]) > g_26[1].f1) != 1L) & 0L) != 0UL) < p_24), 0xB744L)) != l_52[4])) > g_32.f0) && l_52[3]), l_52[3])) ^ l_53) | 0xACB48866L)) >= 6UL) | p_20.f1))
    { 
        l_54 = g_26[1].f1;
        for (l_43 = 14; (l_43 != 36); ++l_43)
        { 
            for (p_20.f2 = 0; (p_20.f2 >= 37); p_20.f2 = safe_add_func_int32_t_s_s(p_20.f2, 7))
            { 
                int16_t l_59 = 0xD129L;
                --g_63;
            }
            for (p_23.f1 = 0; (p_23.f1 != 40); p_23.f1 = safe_add_func_uint8_t_u_u(p_23.f1, 8))
            { 
                return l_54;
            }
        }
    }
    else
    { 
        int16_t l_68 = 0xB477L;
        int32_t l_89 = 0xB4528E6AL;
        int32_t l_91 = 0L;
        int32_t l_92 = 0xA721153EL;
        for (g_60 = 1; (g_60 >= 0); g_60 -= 1)
        { 
            int i;
            if (l_52[(g_60 + 1)])
                break;
            g_69--;
            for (g_61 = 1; (g_61 >= 0); g_61 -= 1)
            { 
                int i, j;
                l_62[(g_61 + 3)][g_60] = (safe_rshift_func_int16_t_s_s((l_62[g_60][g_60] < (((g_63 != (((((g_63 , (safe_mod_func_uint8_t_u_u(l_76, l_52[(g_60 + 1)]))) && l_77[3]) >= g_78) , g_26[1].f0) ^ 0x65L)) & g_17.f0.f0) | 65535UL)), 12));
                return p_21;
            }
        }
        if ((safe_add_func_int64_t_s_s((safe_rshift_func_uint16_t_u_s((g_32.f1 & ((((safe_add_func_int8_t_s_s(l_43, (p_21 && ((l_89 &= ((safe_lshift_func_uint16_t_u_s((safe_div_func_uint16_t_u_u(0x1B8EL, 65529UL)), g_26[1].f1)) ^ l_62[0][0])) || l_90)))) >= 18446744073709551610UL) & 4294967293UL) , 0UL)), p_24)), p_20.f1)))
        { 
            int8_t l_93 = 0x3CL;
            l_62[0][0] = (p_23.f2.f1 = p_22.f0);
            l_94--;
        }
        else
        { 
            uint16_t l_99 = 65535UL;
            for (p_20.f0 = 0; (p_20.f0 > 16); ++p_20.f0)
            { 
                int32_t l_100 = 1L;
                l_100 = ((((-1L) >= (l_99 , 0x3ABFL)) < (p_22.f2 ^ g_63)) || g_17.f0.f0);
            }
            for (l_53 = 0; (l_53 != 11); ++l_53)
            { 
                uint8_t l_121[1];
                int32_t l_122[2][5][1] = {{{0xF9CC6DD0L},{0xF9CC6DD0L},{0x2E4F19BDL},{0xF9CC6DD0L},{0xF9CC6DD0L}},{{0x2E4F19BDL},{0xF9CC6DD0L},{0xF9CC6DD0L},{0x2E4F19BDL},{0xF9CC6DD0L}}};
                int32_t l_123 = 0L;
                int32_t l_125[1][3][5] = {{{0x822BFEBDL,1L,1L,0x822BFEBDL,0x561E864FL},{0x822BFEBDL,1L,1L,0x822BFEBDL,0x561E864FL},{0x822BFEBDL,1L,1L,0x822BFEBDL,0x7C2C8185L}}};
                int i, j, k;
                for (i = 0; i < 1; i++)
                    l_121[i] = 0UL;
                p_23.f2.f1 = (-1L);
            }
        }
        l_120.f1 = (g_61 = (g_26[1].f1 , (safe_rshift_func_uint8_t_u_u(((safe_mul_func_int8_t_s_s((safe_sub_func_int64_t_s_s(((((((l_124 |= ((safe_add_func_int8_t_s_s(0x9AL, (8L >= 0x97159807BFFB9DE4LL))) <= p_24)) & 0x8BL) , 0xE638A31BL) , l_134) , p_20.f0) || g_26[1].f1), p_20.f0)), p_23.f1)) < l_91), p_22.f1))));
    }
    g_61 = (safe_div_func_int8_t_s_s(((g_78 ^ (l_134 , (safe_add_func_int32_t_s_s(p_22.f1, (safe_lshift_func_int16_t_s_s((safe_sub_func_uint16_t_u_u((((safe_add_func_uint16_t_u_u(((248UL & l_53) == p_22.f1), g_34)) || g_32.f1) != 0UL), g_17.f0.f0)), g_145)))))) >= g_61), 255UL));
    return g_26[1].f0;
}





int test_main(void)
{
    int i;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_11, "g_11", print_hash_value);
    transparent_crc(g_17.f0.f0, "g_17.f0.f0", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_26[i].f0, "g_26[i].f0", print_hash_value);
        transparent_crc(g_26[i].f1, "g_26[i].f1", print_hash_value);
        transparent_crc(g_26[i].f2, "g_26[i].f2", print_hash_value);

    }
    transparent_crc(g_32.f1, "g_32.f1", print_hash_value);
    transparent_crc(g_34, "g_34", print_hash_value);
    transparent_crc(g_60, "g_60", print_hash_value);
    transparent_crc(g_61, "g_61", print_hash_value);
    transparent_crc(g_63, "g_63", print_hash_value);
    transparent_crc(g_69, "g_69", print_hash_value);
    transparent_crc(g_78, "g_78", print_hash_value);
    transparent_crc(g_145, "g_145", print_hash_value);
    transparent_crc(g_193, "g_193", print_hash_value);
    transparent_crc(g_195, "g_195", print_hash_value);
    transparent_crc(g_246.f0.f0, "g_246.f0.f0", print_hash_value);
    transparent_crc(g_246.f0.f1, "g_246.f0.f1", print_hash_value);
    transparent_crc(g_246.f0.f2, "g_246.f0.f2", print_hash_value);
    transparent_crc(g_246.f0.f3, "g_246.f0.f3", print_hash_value);
    transparent_crc(g_246.f0.f4, "g_246.f0.f4", print_hash_value);
    transparent_crc(g_246.f1, "g_246.f1", print_hash_value);
    transparent_crc(g_246.f2, "g_246.f2", print_hash_value);
    transparent_crc(g_249, "g_249", print_hash_value);
    transparent_crc(g_254, "g_254", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_255[i], "g_255[i]", print_hash_value);

    }
    transparent_crc(g_339, "g_339", print_hash_value);
    transparent_crc(g_340, "g_340", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
