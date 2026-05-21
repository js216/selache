// SPDX-License-Identifier: MIT
// cctest_csmith_a726d2aa.c --- cctest case csmith_a726d2aa (csmith seed 2804339370)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x14bca794 */

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

// Options:   -s 2804339370 -o /tmp/csmith_gen_oaw_e2wg/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


#pragma pack(push)
#pragma pack(1)
struct S0 {
   uint8_t  f0;
   const int32_t  f1;
   uint8_t  f2;
   uint32_t  f3;
};
#pragma pack(pop)

union U1 {
   const int8_t  f0;
   struct S0  f1;
   uint8_t  f2;
};

union U3 {
   const int32_t  f0;
   int32_t  f1;
   uint32_t  f2;
   uint32_t  f3;
};

union U4 {
   int8_t  f0;
   int8_t  f1;
   int32_t  f2;
   uint64_t  f3;
};

union U5 {
   int64_t  f0;
   int64_t  f1;
   uint64_t  f2;
   int32_t  f3;
};

union U6 {
   int8_t  f0;
   int32_t  f1;
};


static uint32_t g_21 = 0x61E70716L;
static int32_t g_26 = 4L;
static int8_t g_27 = 0xA0L;
static int8_t g_55 = 0x1DL;
static uint8_t g_57 = 246UL;
static int32_t g_60 = 9L;
static uint16_t g_63 = 0UL;
static union U4 g_70 = {1L};
static union U5 g_71 = {0xD6221F4251D17401LL};
static uint32_t g_72 = 0UL;
static int32_t g_79 = (-3L);
static uint8_t g_97 = 255UL;
static struct S0 g_129 = {0x91L,6L,0x4BL,0x1C87380CL};
static uint8_t g_139[5][3][5] = {{{255UL,0x4DL,0x44L,0UL,0xC2L},{252UL,255UL,0UL,252UL,252UL},{0xC2L,251UL,0xC2L,252UL,255UL}},{{0x26L,0xBCL,3UL,0UL,252UL},{251UL,255UL,5UL,255UL,249UL},{0x0AL,1UL,3UL,252UL,0x44L}},{{0xF0L,0xB3L,0xC2L,0xC2L,0xB3L},{249UL,0xB3L,0UL,0x26L,0xEEL},{0x4DL,1UL,0x44L,251UL,1UL}},{{3UL,0xB3L,252UL,0x79L,249UL},{252UL,255UL,252UL,0xC2L,251UL},{0xD3L,6UL,6UL,0xD3L,251UL}},{{0xC2L,252UL,255UL,252UL,249UL},{0x79L,252UL,0xB3L,0xBCL,0UL},{6UL,0xF0L,0x4DL,252UL,1UL}}};
static uint32_t g_154 = 0x9A2C154BL;
static uint32_t g_163[2][5][3] = {{{0x7FB40949L,18446744073709551609UL,0x7FB40949L},{0UL,0xDE4B32DFL,0UL},{0x7FB40949L,18446744073709551609UL,0x7FB40949L},{0UL,0xDE4B32DFL,0UL},{0x7FB40949L,18446744073709551609UL,0x7FB40949L}},{{0UL,0xDE4B32DFL,0UL},{0x7FB40949L,18446744073709551609UL,0x7FB40949L},{0UL,0xDE4B32DFL,0UL},{0x7FB40949L,18446744073709551609UL,0x7FB40949L},{0UL,0xDE4B32DFL,0UL}}};
static uint32_t g_165 = 0x3F9351E3L;
static union U3 g_190[3][1] = {{{-1L}},{{-1L}},{{-1L}}};
static uint32_t g_238 = 18446744073709551615UL;
static int32_t g_249[5] = {0x11A3A22FL,0x11A3A22FL,0x11A3A22FL,0x11A3A22FL,0x11A3A22FL};
static union U1 g_293 = {0x7FL};
static uint64_t g_304[3] = {18446744073709551613UL,18446744073709551613UL,18446744073709551613UL};



static const struct S0  func_1(void);
static union U3  func_2(const uint64_t  p_3, union U1  p_4);
static uint64_t  func_13(union U1  p_14);
static union U4  func_15(union U5  p_16, uint16_t  p_17);




static const struct S0  func_1(void)
{ 
    union U5 l_18 = {2L};
    union U1 l_122 = {0xBFL};
    int8_t l_295 = 1L;
    int32_t l_303[5];
    uint64_t l_343[1];
    int i;
    for (i = 0; i < 5; i++)
        l_303[i] = 1L;
    for (i = 0; i < 1; i++)
        l_343[i] = 0x11118A623C689B7ALL;
    if ((func_2(((safe_lshift_func_int16_t_s_s(((safe_lshift_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_s((safe_div_func_int64_t_s_s((0UL > 0xDA8ED40A16501874LL), func_13((func_15(l_18, ((safe_mul_func_int16_t_s_s(g_21, 0xA973L)) && 0x1348L)) , l_122)))), g_129.f3)), g_129.f0)) ^ g_139[3][0][3]), l_122.f2)) != g_139[1][2][2]), l_122) , l_295))
    { 
        uint32_t l_300 = 0x47660EA5L;
        for (g_70.f1 = 0; (g_70.f1 != 11); g_70.f1 = safe_add_func_int64_t_s_s(g_70.f1, 1))
        { 
            l_303[3] = ((safe_div_func_uint64_t_u_u(l_300, (safe_mod_func_uint64_t_u_u((g_139[3][0][4] ^ (g_249[4] || (((5L | 65533UL) , g_60) || g_129.f2))), 0xA9968E2C016A6488LL)))) & g_165);
        }
        l_303[3] = (0L > ((l_300 <= (g_72 != l_300)) <= l_300));
        g_70.f2 = 4L;
    }
    else
    { 
        uint64_t l_311 = 0xBA1A656AFC290DDELL;
        int32_t l_326 = 0xC08418D9L;
        uint32_t l_342 = 4294967295UL;
        --g_304[1];
        if (((safe_rshift_func_uint16_t_u_u(((l_303[3] = (l_311 = (+(+(l_122 , g_154))))) <= (safe_rshift_func_int16_t_s_s(((safe_add_func_uint16_t_u_u((safe_unary_minus_func_int64_t_s((safe_div_func_uint16_t_u_u(g_304[2], (g_63++))))), (safe_sub_func_uint8_t_u_u((safe_mod_func_uint32_t_u_u((!g_129.f0), 0x0706BF2BL)), g_97)))) != l_295), g_27))), l_326)) && g_129.f3))
        { 
            uint64_t l_327 = 18446744073709551615UL;
            ++l_327;
            for (g_129.f3 = (-19); (g_129.f3 != 26); g_129.f3++)
            { 
                g_70.f2 = 0xD2F78741L;
                g_70.f2 = (g_57 >= 0x849F018EC72AD0EDLL);
                if (l_122.f0)
                    continue;
            }
        }
        else
        { 
            int32_t l_332 = (-5L);
            int32_t l_335 = 1L;
            l_332 ^= 0x9E3C08EBL;
            g_79 = ((g_27 &= (((safe_lshift_func_uint16_t_u_u((l_335 != ((((safe_mod_func_int16_t_s_s((safe_div_func_uint8_t_u_u((((((safe_add_func_int64_t_s_s(((0xA9A9F9E3L == (g_304[0] , (((l_342 && g_70.f2) , l_311) >= l_326))) & l_326), 0x94F4AFC69FA8EE88LL)) | l_332) < g_139[3][0][3]) && l_295) < g_70.f2), 0x36L)), g_249[0])) & 0xC979L) , 1UL) | 9L)), 4)) && l_311) > l_122.f0)) && l_18.f3);
        }
    }
    --l_343[0];
    l_303[3] = g_26;
    return g_129;
}



static union U3  func_2(const uint64_t  p_3, union U1  p_4)
{ 
    int32_t l_168[1][3];
    const union U4 l_169 = {0xEEL};
    uint32_t l_170 = 0x1DA83384L;
    int32_t l_171 = 5L;
    const union U3 l_248 = {1L};
    uint8_t l_270[3][1];
    int i, j;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 3; j++)
            l_168[i][j] = 0x66B3F0A2L;
    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 1; j++)
            l_270[i][j] = 254UL;
    }
lbl_247:
    for (g_154 = 18; (g_154 != 60); g_154 = safe_add_func_uint32_t_u_u(g_154, 1))
    { 
        uint32_t l_184 = 0xC5885194L;
        int16_t l_196 = 0x7E41L;
        int32_t l_197 = (-9L);
        union U4 l_235 = {8L};
        uint8_t l_239 = 0x18L;
        uint32_t l_240 = 18446744073709551607UL;
        g_79 ^= ((l_168[0][0] , ((((l_169 , (l_171 ^= (g_70.f0 &= (l_170 && l_168[0][1])))) , 0x6241L) , p_4.f0) < p_4.f0)) , p_4.f2);
        l_171 = p_3;
        if (((safe_mul_func_uint8_t_u_u(((g_71.f0 &= (0UL <= ((safe_mul_func_int8_t_s_s((l_171 = (safe_mod_func_uint64_t_u_u((((g_129 , l_168[0][0]) | ((safe_mod_func_int64_t_s_s((p_3 && 0xD5L), g_60)) <= 0x4EL)) , p_4.f0), p_4.f2))), (-1L))) > g_60))) | 18446744073709551611UL), l_184)) >= g_57))
        { 
            int8_t l_185[1];
            int i;
            for (i = 0; i < 1; i++)
                l_185[i] = 0x5FL;
            if (l_185[0])
                break;
        }
        else
        { 
            int32_t l_198 = 0x4F7BBAF5L;
            int32_t l_199[1];
            int32_t l_241 = 0xFC9FD4B6L;
            int i;
            for (i = 0; i < 1; i++)
                l_199[i] = 9L;
            for (g_57 = 0; (g_57 != 9); g_57++)
            { 
                uint64_t l_200[3][1];
                int i, j;
                for (i = 0; i < 3; i++)
                {
                    for (j = 0; j < 1; j++)
                        l_200[i][j] = 1UL;
                }
                l_199[0] = ((-4L) < (safe_sub_func_uint16_t_u_u(((l_171 = (l_198 = ((g_190[2][0] , ((((safe_div_func_int8_t_s_s(((+1UL) < (((l_197 |= ((safe_mul_func_uint8_t_u_u(0x35L, l_196)) <= 0x2AL)) , p_4.f2) , 1L)), (-9L))) > 3UL) | 0L) && g_129.f0)) || 0xC1L))) < g_154), (-1L))));
                --l_200[0][0];
                l_171 ^= (l_241 &= ((p_4.f1.f0 = (safe_div_func_int32_t_s_s((safe_add_func_uint8_t_u_u(((safe_rshift_func_uint8_t_u_s((((safe_rshift_func_int8_t_s_u((safe_div_func_int64_t_s_s((g_190[2][0].f3 <= ((((~(safe_sub_func_int32_t_s_s((l_199[0] = (l_239 = (safe_mod_func_uint8_t_u_u((safe_div_func_uint64_t_u_u(((safe_mul_func_uint16_t_u_u((safe_rshift_func_int8_t_s_s(p_4.f2, (safe_mul_func_uint8_t_u_u((safe_add_func_int8_t_s_s((safe_rshift_func_int8_t_s_s((safe_div_func_uint64_t_u_u(((safe_mod_func_int64_t_s_s((safe_unary_minus_func_int8_t_s((l_235 , (safe_rshift_func_uint16_t_u_s((p_4.f2 ^ 0x92L), p_4.f2))))), 9L)) == l_184), g_27)), g_139[3][0][2])), g_238)), 0x27L)))), p_4.f2)) == 0xA4L), p_4.f0)), l_199[0])))), 7UL))) <= 0L) | p_3) > 1L)), g_55)), 4)) == 1UL) && p_4.f2), l_240)) & l_198), l_198)), l_169.f0))) == p_3));
            }
        }
    }
    for (g_70.f3 = 0; (g_70.f3 >= 27); g_70.f3++)
    { 
        int32_t l_246 = 0x4DA9278BL;
        if ((safe_sub_func_uint8_t_u_u((g_190[2][0] , l_246), l_246)))
        { 
            int16_t l_250 = 0xF9B1L;
            int32_t l_255[4];
            union U3 l_261 = {7L};
            int i;
            for (i = 0; i < 4; i++)
                l_255[i] = 0xC9473A2EL;
            if (g_21)
            { 
                if (l_246)
                    goto lbl_247;
                l_171 &= (((g_129.f3 != p_4.f2) ^ ((g_71 , ((l_248 , (-6L)) ^ p_4.f0)) || g_249[3])) || l_250);
            }
            else
            { 
                l_171 = (p_4.f0 ^ (safe_add_func_int32_t_s_s((1UL != ((safe_add_func_int64_t_s_s((p_4.f2 || (l_255[1] = p_3)), g_190[2][0].f0)) , g_154)), 0xAE91A373L)));
                return l_248;
            }
            l_270[1][0] = (safe_mod_func_uint8_t_u_u(((l_255[1] = (l_171 = (l_246 >= (((!(safe_lshift_func_int8_t_s_s((((l_261 , (safe_mod_func_uint8_t_u_u((safe_mul_func_int8_t_s_s((((safe_add_func_int32_t_s_s(((safe_mod_func_uint64_t_u_u(((p_4 , 0xE244C01EL) >= l_261.f1), g_71.f1)) <= p_4.f0), l_255[1])) >= p_4.f0) ^ (-1L)), 9L)), 0xE9L))) != p_4.f2) == 0x4C1B8219L), 7))) != l_246) , p_3)))) , l_246), 0xE9L));
            for (g_57 = 0; (g_57 != 39); ++g_57)
            { 
                int32_t l_279 = 3L;
                l_255[1] &= (safe_lshift_func_uint8_t_u_s((p_4.f0 < g_249[3]), (((((((safe_mul_func_int8_t_s_s((l_279 = ((safe_add_func_uint8_t_u_u(255UL, g_72)) < l_261.f0)), g_63)) & g_70.f1) || p_3) , g_190[2][0].f3) ^ 65532UL) != g_190[2][0].f1) && p_4.f2)));
                g_190[2][0].f1 = ((safe_div_func_uint8_t_u_u((g_71 , (((0x850A1A16B741F678LL <= l_246) > p_4.f0) != p_3)), 0x41L)) & (-1L));
            }
        }
        else
        { 
            uint8_t l_294[3];
            int i;
            for (i = 0; i < 3; i++)
                l_294[i] = 0x30L;
            if (((safe_mod_func_uint8_t_u_u(((safe_lshift_func_int16_t_s_s((!(g_63 = 0x3F61L)), 11)) , (p_4.f0 , (5L >= (0xB6F9F128L || 8L)))), p_3)) > g_70.f3))
            { 
                g_79 ^= (safe_rshift_func_int8_t_s_u((((safe_sub_func_int64_t_s_s((safe_sub_func_int16_t_s_s((g_163[1][4][2] & ((g_293 , 1UL) > ((g_129 , g_70.f0) <= g_129.f0))), 0xCF20L)), l_294[1])) >= 0x5835DA87L) ^ l_169.f0), l_246));
                if (l_169.f0)
                    goto lbl_247;
            }
            else
            { 
                return g_190[2][0];
            }
        }
    }
    return l_248;
}



static uint64_t  func_13(union U1  p_14)
{ 
    uint8_t l_132 = 0xA5L;
    int32_t l_133[2][2][5] = {{{0xC61AB63EL,0x77C0CF43L,0x77C0CF43L,0xC61AB63EL,(-1L)},{0x4E0B4B7FL,0xC61AB63EL,0x8E9B1403L,3L,3L}},{{0x661FA26FL,0xC61AB63EL,0x661FA26FL,(-1L),0xC61AB63EL},{3L,0x77C0CF43L,(-1L),3L,(-1L)}}};
    int32_t l_134[1][4] = {{(-3L),(-3L),(-3L),(-3L)}};
    int32_t l_144[5] = {0x4AF86A2FL,0x4AF86A2FL,0x4AF86A2FL,0x4AF86A2FL,0x4AF86A2FL};
    int i, j, k;
    l_134[0][0] = (safe_lshift_func_uint8_t_u_u((((safe_add_func_int32_t_s_s((safe_lshift_func_uint16_t_u_u((g_129 , ((safe_sub_func_int32_t_s_s((((7UL != g_70.f1) <= ((((l_133[0][1][2] = (((-1L) < 0x5FCFL) , l_132)) < 18446744073709551615UL) != 65532UL) , g_129.f3)) >= 0xA80FC2DDDAE5F053LL), 4294967295UL)) , p_14.f0)), l_132)), p_14.f0)) & l_132) < g_129.f0), 5));
    if ((l_134[0][0] = (safe_lshift_func_uint16_t_u_s(p_14.f2, (safe_unary_minus_func_uint8_t_u((!(g_139[3][0][3] , (((l_144[4] |= (((((0x375CE82FL < (safe_rshift_func_uint16_t_u_s((l_133[0][1][2] |= (safe_rshift_func_int8_t_s_u(p_14.f2, p_14.f2))), 1))) , l_134[0][2]) <= p_14.f2) != g_21) & p_14.f2)) != 4294967295UL) | 4294967295UL)))))))))
    { 
        return p_14.f2;
    }
    else
    { 
        union U6 l_151 = {0x25L};
        g_79 = (safe_div_func_int8_t_s_s((0xFAL >= g_129.f2), (safe_rshift_func_uint16_t_u_s((((((safe_mul_func_uint16_t_u_u(((g_70.f2 = (l_151 , (safe_add_func_uint16_t_u_u(((((0x151E35FFL != p_14.f0) < 0x10376A86D7796E21LL) <= g_70.f0) <= l_151.f0), l_133[0][1][1])))) <= l_133[0][1][0]), 6L)) & 3L) ^ g_71.f0) > 0x741B6539L) <= 1UL), l_151.f0))));
        --g_154;
        l_134[0][1] = (safe_add_func_uint32_t_u_u((p_14.f0 & ((l_134[0][1] , ((((safe_lshift_func_int8_t_s_s((safe_rshift_func_int16_t_s_s((g_163[1][4][2] = l_151.f0), (g_165 ^= (~0x91E9L)))), l_151.f0)) | l_133[0][1][2]) & 65534UL) ^ g_26)) , p_14.f2)), 4294967295UL));
    }
    return p_14.f0;
}



static union U4  func_15(union U5  p_16, uint16_t  p_17)
{ 
    const uint32_t l_23 = 0x004DDC87L;
    uint32_t l_44[2][4][4] = {{{0x4802D14AL,0UL,4294967286UL,4294967286UL},{1UL,1UL,0x4802D14AL,4294967286UL},{4294967295UL,0UL,4294967295UL,0x4802D14AL},{4294967295UL,0x4802D14AL,0x4802D14AL,4294967295UL}},{{1UL,0x4802D14AL,4294967286UL,0x4802D14AL},{0x4802D14AL,0UL,4294967286UL,4294967286UL},{1UL,1UL,0x4802D14AL,4294967286UL},{4294967295UL,0UL,4294967295UL,0x4802D14AL}}};
    int32_t l_53 = 0x3074C89AL;
    int32_t l_61 = 0xDAEE2552L;
    int32_t l_62[4][4];
    const union U3 l_106 = {0x0C9FB391L};
    const int8_t l_110 = 1L;
    int i, j, k;
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
            l_62[i][j] = 0x205A4AACL;
    }
    g_26 = (+((65535UL < (0xDBL == l_23)) & (safe_mul_func_int16_t_s_s(((p_16.f2 = (0x76L == g_21)) && l_23), g_21))));
    if ((((g_27 = p_16.f3) & (safe_mul_func_int16_t_s_s(9L, l_23))) || (safe_sub_func_int8_t_s_s(0x00L, p_16.f1))))
    { 
        const uint32_t l_39 = 18446744073709551610UL;
        int32_t l_45 = 0x3002E9D3L;
        l_45 = (safe_div_func_int32_t_s_s(((safe_lshift_func_uint8_t_u_u(l_23, 5)) ^ (safe_sub_func_uint16_t_u_u((((+l_39) | (safe_rshift_func_int8_t_s_s((((safe_rshift_func_int16_t_s_s(0x6947L, ((l_44[1][1][3] >= 1UL) || l_39))) < 18446744073709551612UL) || 0xB293C34FL), l_44[1][1][3]))) >= g_27), p_16.f1))), l_39));
        for (p_16.f1 = 1; (p_16.f1 >= 0); p_16.f1 -= 1)
        { 
            int32_t l_52 = 1L;
            int32_t l_54 = 0x2012CB5DL;
            int32_t l_73 = 0x161529ABL;
            if ((safe_div_func_int8_t_s_s(l_45, (safe_add_func_uint16_t_u_u(((((((g_27 & g_26) && (safe_mul_func_int8_t_s_s((l_52 = 3L), g_26))) == l_39) , p_16.f0) | 9UL) && l_44[1][1][3]), p_16.f0)))))
            { 
                int32_t l_56 = 0x6E5F3778L;
                if (l_44[1][1][3])
                    break;
                g_57--;
            }
            else
            { 
                int16_t l_74[4][4][5] = {{{0L,1L,0x295AL,(-1L),0x7CBCL},{0x1B33L,8L,0x056EL,6L,0L},{0x7F5CL,0x7CBCL,0x295AL,0x7CBCL,0x7F5CL},{(-3L),(-1L),0xAB9BL,0x7CBCL,6L}},{{0xFE49L,(-3L),0L,6L,0x9472L},{0x295AL,0xAB9BL,6L,(-1L),6L},{6L,6L,1L,0L,0x7F5CL},{6L,0xF523L,0x7F5CL,0x056EL,0L}},{{0x295AL,0x1B33L,0x9472L,8L,0x7CBCL},{0xFE49L,0xF523L,0xF523L,0xFE49L,(-1L)},{(-3L),6L,0xF523L,0x7F5CL,0x056EL},{0x7F5CL,0xAB9BL,0x9472L,0x295AL,0xF523L}},{{0x7CBCL,0xF523L,0xAB9BL,0xAB9BL,0xF523L},{0L,0xFE49L,8L,0L,0xF523L},{(-1L),6L,0x295AL,0x1B33L,0x9472L},{0xFE49L,0x1B33L,(-3L),0x7F5CL,0x7F5CL}}};
                int i, j, k;
                g_63++;
                l_61 = ((safe_mul_func_uint16_t_u_u((safe_add_func_uint16_t_u_u(65526UL, ((g_70 , g_71) , (l_54 = (g_72 = 0xC614L))))), l_73)) < l_74[1][3][2]);
            }
            for (g_71.f2 = 0; (g_71.f2 <= 1); g_71.f2 += 1)
            { 
                g_70.f2 = (l_44[1][0][3] || ((safe_lshift_func_int8_t_s_u(p_16.f2, 0)) == g_72));
            }
        }
        for (l_61 = 0; (l_61 < (-7)); --l_61)
        { 
            if (l_44[1][1][3])
                break;
        }
    }
    else
    { 
        uint32_t l_80 = 0x137C2AE6L;
        int32_t l_111[1];
        int i;
        for (i = 0; i < 1; i++)
            l_111[i] = 0x2CF0DA5BL;
        --l_80;
        for (g_60 = 3; (g_60 < 24); g_60 = safe_add_func_int8_t_s_s(g_60, 7))
        { 
            int32_t l_87 = 0xD67550B1L;
            int32_t l_90 = 0x0F98811FL;
            if ((l_90 = ((l_62[3][3] = (p_16.f2 & (((safe_mul_func_uint16_t_u_u(((((p_16.f2 >= (l_87 >= (safe_sub_func_int16_t_s_s(p_17, 0x50A9L)))) | 0x1857L) || l_44[0][3][0]) >= 248UL), 0xC290L)) || g_21) < 0UL))) | 0x64F5L)))
            { 
                uint16_t l_91 = 0x9D3BL;
                l_62[3][2] |= (0x74D830BE999AA20CLL & (l_91++));
            }
            else
            { 
                g_79 = p_16.f1;
                g_97 ^= ((l_62[3][2] = ((safe_add_func_uint64_t_u_u(g_26, (l_62[3][2] > ((!0x339FE21AC514D69ELL) , g_72)))) >= p_16.f1)) , l_80);
            }
            l_62[3][2] &= (((safe_add_func_int32_t_s_s((g_97 <= (l_111[0] ^= ((~((safe_add_func_uint64_t_u_u(g_55, (safe_rshift_func_uint16_t_u_u((safe_unary_minus_func_uint8_t_u(((l_106 , ((++p_17) | (+0UL))) || l_110))), l_44[1][1][3])))) & (-1L))) >= p_16.f0))), g_21)) || (-1L)) <= p_16.f1);
        }
    }
    l_53 |= ((((safe_mul_func_int8_t_s_s(((safe_div_func_uint64_t_u_u((safe_mod_func_int64_t_s_s((safe_add_func_uint16_t_u_u(0x028AL, (p_16.f0 == (safe_sub_func_uint64_t_u_u((g_71.f2 = (((2L >= (0x0B6C34CEL < l_23)) < 0x71L) != g_26)), 0xC4DE7E0673044D68LL))))), l_23)), l_106.f3)) == g_57), p_16.f2)) & 6L) & l_23) < l_62[0][3]);
    return g_70;
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_21, "g_21", print_hash_value);
    transparent_crc(g_26, "g_26", print_hash_value);
    transparent_crc(g_27, "g_27", print_hash_value);
    transparent_crc(g_55, "g_55", print_hash_value);
    transparent_crc(g_57, "g_57", print_hash_value);
    transparent_crc(g_60, "g_60", print_hash_value);
    transparent_crc(g_63, "g_63", print_hash_value);
    transparent_crc(g_70.f0, "g_70.f0", print_hash_value);
    transparent_crc(g_70.f1, "g_70.f1", print_hash_value);
    transparent_crc(g_70.f2, "g_70.f2", print_hash_value);
    transparent_crc(g_71.f0, "g_71.f0", print_hash_value);
    transparent_crc(g_71.f1, "g_71.f1", print_hash_value);
    transparent_crc(g_71.f2, "g_71.f2", print_hash_value);
    transparent_crc(g_71.f3, "g_71.f3", print_hash_value);
    transparent_crc(g_72, "g_72", print_hash_value);
    transparent_crc(g_79, "g_79", print_hash_value);
    transparent_crc(g_97, "g_97", print_hash_value);
    transparent_crc(g_129.f0, "g_129.f0", print_hash_value);
    transparent_crc(g_129.f1, "g_129.f1", print_hash_value);
    transparent_crc(g_129.f2, "g_129.f2", print_hash_value);
    transparent_crc(g_129.f3, "g_129.f3", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 5; k++)
            {
                transparent_crc(g_139[i][j][k], "g_139[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_154, "g_154", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 5; j++)
        {
            for (k = 0; k < 3; k++)
            {
                transparent_crc(g_163[i][j][k], "g_163[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_165, "g_165", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 1; j++)
        {
            transparent_crc(g_190[i][j].f0, "g_190[i][j].f0", print_hash_value);
            transparent_crc(g_190[i][j].f1, "g_190[i][j].f1", print_hash_value);
            transparent_crc(g_190[i][j].f2, "g_190[i][j].f2", print_hash_value);
            transparent_crc(g_190[i][j].f3, "g_190[i][j].f3", print_hash_value);

        }
    }
    transparent_crc(g_238, "g_238", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_249[i], "g_249[i]", print_hash_value);

    }
    transparent_crc(g_293.f0, "g_293.f0", print_hash_value);
    transparent_crc(g_293.f2, "g_293.f2", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_304[i], "g_304[i]", print_hash_value);

    }
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
