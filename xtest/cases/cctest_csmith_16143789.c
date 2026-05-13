// SPDX-License-Identifier: MIT
// cctest_csmith_16143789.c --- cctest case csmith_16143789 (csmith seed 370423689)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0xa011987 */

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

// Options:   -s 370423689 -o /tmp/csmith_gen_l8sihbvy/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


#pragma pack(push)
#pragma pack(1)
struct S0 {
   int16_t  f0;
   uint16_t  f1;
   int32_t  f2;
   uint32_t  f3;
};
#pragma pack(pop)

struct S1 {
   uint8_t  f0;
   uint32_t  f1;
   uint32_t  f2;
   int32_t  f3;
   const int32_t  f4;
};

union U2 {
   int16_t  f0;
   uint16_t  f1;
   uint32_t  f2;
};


static uint8_t g_20 = 4UL;
static const struct S0 g_31 = {0x2115L,65533UL,0xFBF26171L,0xBC698DC5L};
static union U2 g_32[2][3] = {{{0xFAFEL},{0xFAFEL},{0xFAFEL}},{{0L},{0L},{0L}}};
static uint8_t g_37 = 3UL;
static int32_t g_64 = 0L;
static uint16_t g_95[3] = {1UL,1UL,1UL};
static int32_t g_103[1] = {0xA4B37CA6L};
static int16_t g_107 = 0x7E9BL;
static int32_t g_110[1][3] = {{2L,2L,2L}};
static uint8_t g_111 = 255UL;
static int16_t g_127 = 1L;
static struct S0 g_128 = {3L,0x8CFEL,0L,1UL};
static uint8_t g_137 = 0xEFL;
static const struct S1 g_142 = {0xCBL,0xD9AA0F79L,0x8293F6A8L,0xE6391751L,0xF66274CDL};
static union U2 g_154 = {0x5B31L};
static int32_t g_191[5][1] = {{0xEF3BD047L},{0xEF3BD047L},{0xEF3BD047L},{0xEF3BD047L},{0xEF3BD047L}};
static int16_t g_230[5][1] = {{0x4AD8L},{(-5L)},{0x4AD8L},{(-5L)},{0x4AD8L}};
static uint16_t g_257[4] = {0x2022L,0x2022L,0x2022L,0x2022L};
static uint64_t g_305 = 1UL;



static struct S0  func_1(void);
static struct S0  func_2(uint64_t  p_3, uint8_t  p_4, int32_t  p_5);
static int16_t  func_13(int32_t  p_14, union U2  p_15, int32_t  p_16, int32_t  p_17);
static int8_t  func_25(const struct S0  p_26, union U2  p_27, uint32_t  p_28, union U2  p_29, int8_t  p_30);




static struct S0  func_1(void)
{ 
    int16_t l_6[3];
    int32_t l_33 = (-4L);
    int16_t l_155 = 0x84FDL;
    struct S0 l_357 = {-8L,65530UL,-6L,0x0DA53696L};
    int32_t l_378 = (-1L);
    int32_t l_379 = 0x3383EBD5L;
    int32_t l_380 = 0x7779F198L;
    int32_t l_381 = 0x797E4126L;
    uint64_t l_382[3][1];
    struct S0 l_385 = {0xD31CL,3UL,0x9BE8B9BEL,4294967289UL};
    int i, j;
    for (i = 0; i < 3; i++)
        l_6[i] = 0xD145L;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 1; j++)
            l_382[i][j] = 1UL;
    }
    l_357 = func_2(l_6[1], ((safe_sub_func_uint64_t_u_u(((safe_add_func_uint32_t_u_u(0x3051EBF0L, ((safe_lshift_func_int16_t_s_u(func_13((safe_add_func_int32_t_s_s(g_20, (((((l_33 = (safe_lshift_func_uint16_t_u_u(((safe_div_func_int8_t_s_s(func_25(g_31, g_32[0][0], l_6[1], g_32[0][0], l_33), 0x7CL)) | l_6[0]), 12))) < g_142.f3) & 0xE0E5596EL) | g_107) ^ 9L))), g_154, l_155, g_107), g_20)) < g_142.f4))) && g_305), l_155)) & 1UL), l_155);
    for (g_154.f2 = 0; (g_154.f2 > 22); ++g_154.f2)
    { 
        uint32_t l_364[3];
        int i;
        for (i = 0; i < 3; i++)
            l_364[i] = 0x48B8FF58L;
        g_64 |= (((((safe_lshift_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_u((g_32[0][0] , (g_37 = (l_364[1] = 255UL))), 5)), 4)) , 0xDCE9L) , ((((safe_add_func_uint8_t_u_u((0xBE085A8BL || g_137), l_357.f3)) >= 1UL) && 0x92AB5C4EL) != g_31.f0)) < g_137) ^ l_357.f3);
        for (l_357.f1 = 0; (l_357.f1 != 27); ++l_357.f1)
        { 
            const uint8_t l_377 = 9UL;
            for (g_137 = 0; (g_137 <= 1); g_137 += 1)
            { 
                int i;
                g_64 = (g_95[(g_137 + 1)] && (l_33 = g_154.f0));
                g_191[0][0] |= g_137;
                g_110[0][1] ^= (g_64 ^= ((l_357 , ((safe_mul_func_uint16_t_u_u((safe_lshift_func_int8_t_s_s((safe_mul_func_int16_t_s_s((((0x8E73L != 0L) <= ((((safe_rshift_func_uint16_t_u_s(l_364[1], 12)) || l_377) != g_95[(g_137 + 1)]) || g_137)) <= l_155), l_33)), g_103[0])), 0x2D9FL)) || g_103[0])) < g_95[(g_137 + 1)]));
            }
        }
    }
    l_382[1][0]++;
    return l_385;
}



static struct S0  func_2(uint64_t  p_3, uint8_t  p_4, int32_t  p_5)
{ 
    uint64_t l_354 = 18446744073709551610UL;
    struct S0 l_356 = {0L,0UL,-1L,0x9F3683C7L};
    g_191[1][0] &= ((safe_lshift_func_uint8_t_u_u((safe_lshift_func_int16_t_s_s((safe_sub_func_uint8_t_u_u((((p_4 >= (safe_mod_func_int64_t_s_s((safe_mul_func_int16_t_s_s(g_111, (safe_lshift_func_uint8_t_u_s(((safe_sub_func_uint8_t_u_u(g_128.f3, 0x93L)) < l_354), 0)))), (-7L)))) && 0x0D92L) | l_354), 0x41L)), 5)), g_257[0])) , g_137);
    if (g_142.f4)
    { 
        p_5 &= (6L && g_110[0][0]);
    }
    else
    { 
        struct S0 l_355 = {7L,0x5B42L,0xFC341C21L,0xABD4A535L};
        return l_355;
    }
    return l_356;
}



static int16_t  func_13(int32_t  p_14, union U2  p_15, int32_t  p_16, int32_t  p_17)
{ 
    struct S1 l_165[2][4][4] = {{{{0x08L,0UL,2UL,2L,1L},{0x08L,0UL,2UL,2L,1L},{0x08L,0UL,2UL,2L,1L},{0x08L,0UL,2UL,2L,1L}},{{0x08L,0UL,2UL,2L,1L},{0x08L,0UL,2UL,2L,1L},{0x08L,0UL,2UL,2L,1L},{0x08L,0UL,2UL,2L,1L}},{{0x08L,0UL,2UL,2L,1L},{0x08L,0UL,2UL,2L,1L},{0x08L,0UL,2UL,2L,1L},{0x08L,0UL,2UL,2L,1L}},{{0x08L,0UL,2UL,2L,1L},{0x08L,0UL,2UL,2L,1L},{0x08L,0UL,2UL,2L,1L},{0x08L,0UL,2UL,2L,1L}}},{{{0x08L,0UL,2UL,2L,1L},{0x08L,0UL,2UL,2L,1L},{0x08L,0UL,2UL,2L,1L},{0x08L,0UL,2UL,2L,1L}},{{0x08L,0UL,2UL,2L,1L},{0x08L,0UL,2UL,2L,1L},{0x08L,0UL,2UL,2L,1L},{0x08L,0UL,2UL,2L,1L}},{{0x08L,0UL,2UL,2L,1L},{0x08L,0UL,2UL,2L,1L},{0x08L,0UL,2UL,2L,1L},{0x08L,0UL,2UL,2L,1L}},{{0x08L,0UL,2UL,2L,1L},{0x08L,0UL,2UL,2L,1L},{0x08L,0UL,2UL,2L,1L},{0x08L,0UL,2UL,2L,1L}}}};
    struct S0 l_194 = {0x14B8L,0UL,-1L,4294967291UL};
    uint16_t l_256 = 8UL;
    uint32_t l_266 = 0x79E331C1L;
    int8_t l_319 = 0x83L;
    int32_t l_323 = 0x74B092D6L;
    int32_t l_324 = 0x09E0FE80L;
    int32_t l_325 = 0x413386D8L;
    int16_t l_326 = 0L;
    uint32_t l_327 = 18446744073709551613UL;
    uint16_t l_337 = 0x1723L;
    int i, j, k;
    for (p_16 = 0; (p_16 >= 0); p_16--)
    { 
        return p_17;
    }
    for (p_17 = 18; (p_17 != 13); p_17 = safe_sub_func_uint32_t_u_u(p_17, 5))
    { 
        int32_t l_168 = 0L;
        struct S0 l_193 = {0xB05CL,1UL,1L,4294967295UL};
        struct S0 l_196 = {-9L,0xC7F1L,0x52F76F32L,1UL};
        for (p_14 = 0; (p_14 <= 0); p_14 += 1)
        { 
            int32_t l_192 = 0x4C827FE7L;
            int i, j;
            if (((g_110[p_14][(p_14 + 2)] , (safe_mul_func_int8_t_s_s((((((!((safe_sub_func_uint64_t_u_u((l_165[0][3][1] , (safe_mul_func_uint8_t_u_u(p_15.f0, 0xDFL))), g_111)) ^ g_110[p_14][(p_14 + 2)])) , g_64) < g_154.f0) & l_168) | 0xDEL), g_110[p_14][(p_14 + 2)]))) , g_142.f3))
            { 
                uint64_t l_190 = 18446744073709551608UL;
                g_64 ^= ((safe_mod_func_int16_t_s_s((g_31.f2 <= (safe_rshift_func_int16_t_s_u(((safe_mod_func_int16_t_s_s((((g_32[1][0] , (!(++g_128.f3))) >= (p_14 >= (((p_15 , 0xDAL) | g_103[0]) < g_95[0]))) == p_16), g_110[p_14][(p_14 + 2)])) || 0x45D56E028AD11B32LL), g_110[p_14][(p_14 + 2)]))), g_154.f0)) , (-1L));
                l_192 &= (safe_lshift_func_int8_t_s_s((safe_sub_func_uint64_t_u_u((g_191[0][0] |= (l_165[0][3][1].f1 , (safe_add_func_int8_t_s_s((safe_div_func_uint16_t_u_u((safe_sub_func_uint64_t_u_u(((((((p_15.f1 && ((((((((-4L) != ((safe_mod_func_uint16_t_u_u(l_190, 0xB31CL)) || g_137)) <= g_31.f2) <= p_15.f1) >= g_110[0][1]) != g_31.f1) || 0xB7L) >= g_103[0])) ^ g_137) != g_110[0][0]) || 0xE602455DEC445B82LL) != g_154.f0) || g_103[0]), g_111)), p_15.f0)), p_14)))), 0xBAF6B6E5B2E24D0FLL)), 6));
                if (g_191[0][0])
                    break;
            }
            else
            { 
                uint8_t l_195 = 0x40L;
                l_194 = l_193;
                if (l_195)
                    continue;
            }
            l_194 = l_196;
            g_128 = l_194;
        }
        if (l_168)
            continue;
    }
    if (g_142.f4)
    { 
        uint32_t l_216 = 0x35B3F435L;
        int32_t l_217 = 0x8BEFA478L;
        int8_t l_236 = 0L;
        for (l_194.f2 = 0; (l_194.f2 == (-24)); l_194.f2 = safe_sub_func_int32_t_s_s(l_194.f2, 4))
        { 
            return p_14;
        }
        l_194 = ((safe_mul_func_uint8_t_u_u((((safe_add_func_int16_t_s_s(((safe_mod_func_uint16_t_u_u((l_217 = ((0UL > ((l_165[0][3][1].f3 |= (g_37--)) <= ((l_194.f0 | (((g_103[0] = (((safe_mod_func_uint16_t_u_u((g_32[0][0].f1 = (safe_mul_func_uint8_t_u_u(g_142.f4, ((((+((safe_div_func_uint32_t_u_u((safe_mul_func_uint8_t_u_u(g_142.f3, g_64)), 4294967292UL)) >= l_216)) && 0xFA85L) == 0x66BAL) < g_154.f0)))), p_16)) <= l_216) >= g_95[0])) , l_216) && g_95[0])) | p_15.f0))) <= 1L)), 0xE913L)) , 0xAB6FL), 0UL)) && 0xF1DCE19FL) | l_165[0][3][1].f0), l_194.f1)) , l_194);
        for (g_128.f3 = (-2); (g_128.f3 == 40); g_128.f3 = safe_add_func_uint32_t_u_u(g_128.f3, 5))
        { 
            int8_t l_235[2];
            uint32_t l_247 = 1UL;
            int i;
            for (i = 0; i < 2; i++)
                l_235[i] = 0L;
            if (((safe_rshift_func_int16_t_s_u(((safe_sub_func_int16_t_s_s((((safe_rshift_func_uint8_t_u_s((safe_add_func_uint64_t_u_u(g_142.f0, (safe_sub_func_int64_t_s_s((((g_230[4][0] |= p_17) & (+((~(p_15 , (safe_add_func_uint8_t_u_u(p_14, p_14)))) >= 0xD0E78556C135286ALL))) <= l_216), p_14)))), g_64)) == l_235[1]) >= l_217), g_20)) ^ 0x1ACACCE1L), 4)) & p_14))
            { 
                uint32_t l_237 = 1UL;
                uint32_t l_248 = 0xB44514EFL;
                l_237--;
                g_64 = (g_110[0][0] = (((l_236 & (safe_rshift_func_int16_t_s_s(0xC4CFL, ((safe_add_func_int32_t_s_s((safe_rshift_func_uint16_t_u_s((((!(g_32[0][0].f0 , ((((-1L) && l_237) || (-5L)) || l_247))) > 18446744073709551609UL) , l_216), 8)), g_137)) ^ l_248)))) ^ p_15.f0) < 0xEBL));
                return l_247;
            }
            else
            { 
                g_191[4][0] = (g_110[0][0] = g_128.f1);
            }
            return g_110[0][0];
        }
    }
    else
    { 
        uint8_t l_258 = 255UL;
        int32_t l_302 = 1L;
        int32_t l_318[4];
        int32_t l_321 = 0xF1E1686BL;
        int i;
        for (i = 0; i < 4; i++)
            l_318[i] = 0x8F8E88ECL;
lbl_332:
        if ((((!7UL) == (4294967291UL != (g_257[0] = (safe_add_func_int8_t_s_s((safe_rshift_func_int16_t_s_u(((safe_sub_func_int32_t_s_s(l_256, (p_14 & l_165[0][3][1].f0))) <= g_31.f2), g_64)), p_15.f1))))) && l_258))
        { 
            uint8_t l_261 = 0xEAL;
            for (p_15.f2 = 0; (p_15.f2 < 57); p_15.f2++)
            { 
                int32_t l_267 = 0x19CA71FDL;
                ++l_261;
                p_16 &= (safe_lshift_func_int16_t_s_s(((l_267 = l_266) | p_14), ((safe_sub_func_uint64_t_u_u((safe_div_func_uint8_t_u_u((safe_add_func_int32_t_s_s(l_261, (safe_mul_func_uint32_t_u_u(0xE653981AL, 0L)))), l_256)), 0xE68FA146DEBD74A8LL)) <= (-9L))));
                p_14 = (safe_lshift_func_int16_t_s_s(p_15.f1, 13));
            }
            g_191[0][0] = (-1L);
        }
        else
        { 
            int32_t l_292 = 1L;
            int16_t l_295[5][5] = {{0xB9ABL,9L,0xB9ABL,9L,0xB9ABL},{(-10L),0x459EL,0x459EL,(-10L),(-10L)},{0xD6A7L,9L,0xD6A7L,9L,0xD6A7L},{(-10L),(-10L),0x459EL,0x459EL,(-10L)},{0xB9ABL,9L,0xB9ABL,9L,0xB9ABL}};
            int32_t l_320 = 0L;
            int32_t l_322 = (-4L);
            struct S0 l_331 = {0x4EF0L,65529UL,0xFA6F5BC0L,0x05D170DAL};
            int i, j;
            if (((safe_sub_func_uint16_t_u_u(0xD7D5L, (-8L))) , (safe_div_func_int16_t_s_s((safe_sub_func_uint64_t_u_u(l_258, (safe_mul_func_uint8_t_u_u(((((((0x60L && 0x90L) != p_17) >= (-4L)) || g_95[2]) , g_128.f0) ^ 6L), g_103[0])))), 0x7094L))))
            { 
                uint32_t l_289 = 9UL;
                int32_t l_296 = 0x6D5C7E7EL;
                struct S1 l_301[1][3] = {{{0xDFL,0x2C7E0AD0L,0xFBB7031BL,1L,-4L},{0xDFL,0x2C7E0AD0L,0xFBB7031BL,1L,-4L},{0xDFL,0x2C7E0AD0L,0xFBB7031BL,1L,-4L}}};
                int i, j;
                g_191[0][0] |= (((((g_32[0][0].f2 = (safe_unary_minus_func_int64_t_s((((l_194.f0 <= (((safe_lshift_func_int8_t_s_u(((((l_289 = 0x97L) != ((safe_rshift_func_int8_t_s_s(((++p_15.f1) <= 7UL), 6)) <= 0xB3L)) < l_266) && g_20), 4)) <= 0x83CDL) | p_14)) >= 0xCDEBB256L) || 0xD4EA40F44213E9DELL)))) < 0x7D273A75L) && l_295[2][0]) ^ l_296) , p_15.f1);
                l_301[0][1].f3 = (((safe_add_func_int8_t_s_s((l_302 = ((0UL >= (safe_mul_func_uint16_t_u_u((l_194 , 0xBA55L), (l_301[0][1] , l_295[2][0])))) < (-6L))), 1L)) <= p_17) != l_165[0][3][1].f2);
                g_191[0][0] ^= (safe_mul_func_uint16_t_u_u((0x0C94A9A1L > (p_14 = l_302)), 0UL));
                if (p_15.f1)
                    goto lbl_332;
            }
            else
            { 
                return g_305;
            }
lbl_330:
            if (l_302)
            { 
                p_16 = (safe_mod_func_uint8_t_u_u(g_142.f1, (((safe_add_func_int64_t_s_s(((safe_sub_func_int32_t_s_s((safe_mod_func_int32_t_s_s((((p_15.f0 &= ((((safe_div_func_int8_t_s_s(l_302, (l_318[3] = (safe_sub_func_int32_t_s_s(g_257[0], ((g_230[4][0] | g_107) && p_17)))))) ^ g_305) >= p_16) > 0x468774B2L)) >= g_64) == l_319), 0x96C87760L)), l_194.f0)) ^ p_16), 0UL)) & g_20) && 0x5D119B1B65E9CBFCLL)));
                if (g_142.f3)
                    goto lbl_330;
                l_327--;
            }
            else
            { 
                return g_111;
            }
            l_331 = g_31;
        }
        p_16 = ((safe_rshift_func_int8_t_s_u(((safe_rshift_func_uint8_t_u_s(l_337, (safe_mul_func_int16_t_s_s(g_31.f0, p_17)))) , (p_15.f0 && 7L)), 3)) >= l_319);
        l_324 &= l_165[0][3][1].f1;
    }
    return g_128.f2;
}



static int8_t  func_25(const struct S0  p_26, union U2  p_27, uint32_t  p_28, union U2  p_29, int8_t  p_30)
{ 
    uint32_t l_34[3][4][2] = {{{18446744073709551606UL,0UL},{0UL,18446744073709551606UL},{0UL,0UL},{18446744073709551606UL,0UL}},{{0UL,18446744073709551606UL},{0UL,0UL},{18446744073709551606UL,0UL},{0UL,18446744073709551606UL}},{{0UL,0UL},{18446744073709551606UL,0UL},{0UL,18446744073709551606UL},{0UL,0UL}}};
    uint32_t l_63 = 1UL;
    struct S0 l_78[1][2] = {{{0x6456L,0xA7D8L,-1L,0x87F7F2BFL},{0x6456L,0xA7D8L,-1L,0x87F7F2BFL}}};
    struct S0 l_80[5] = {{0x980DL,1UL,-7L,0UL},{0x980DL,1UL,-7L,0UL},{0x980DL,1UL,-7L,0UL},{0x980DL,1UL,-7L,0UL},{0x980DL,1UL,-7L,0UL}};
    int32_t l_99 = (-7L);
    int32_t l_102 = 0xC822056FL;
    int32_t l_104[1][3];
    struct S0 l_123 = {0xF3ECL,65532UL,0x971ED8D5L,0x6D39C238L};
    int i, j, k;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 3; j++)
            l_104[i][j] = (-5L);
    }
    if (l_34[1][2][1])
    { 
        int32_t l_62 = 0xB6C71789L;
        struct S0 l_65 = {0x5B3AL,0x4BB8L,0L,0x623B0D72L};
        g_64 = ((l_63 ^= (g_31.f2 , ((safe_mod_func_int8_t_s_s(((g_37++) , (safe_div_func_int64_t_s_s(((safe_rshift_func_int8_t_s_u(((safe_mod_func_int64_t_s_s(((safe_rshift_func_uint8_t_u_s((((safe_add_func_uint64_t_u_u((safe_lshift_func_int8_t_s_u(0xF5L, 5)), (safe_add_func_uint16_t_u_u((((((safe_lshift_func_int16_t_s_u(g_37, ((((safe_mod_func_int32_t_s_s((((safe_add_func_uint32_t_u_u(((safe_mod_func_uint8_t_u_u(g_20, p_26.f0)) == p_27.f0), 0UL)) && 0x2001L) >= 9UL), g_31.f1)) || (-6L)) | p_29.f1) , p_27.f1))) == l_34[1][2][1]) & l_62) != p_27.f1) < 0xE0L), l_34[1][2][1])))) >= 0xA74B4FBF646D9140LL) , g_37), p_26.f1)) , p_30), l_62)) < g_20), 4)) < p_28), l_34[2][3][1]))), l_62)) == 0x1B2B1506F5737FB6LL))) && g_64);
        l_65 = g_31;
    }
    else
    { 
        struct S0 l_77 = {3L,0x8B73L,0xD465C301L,0xDB4C2A73L};
        int32_t l_79 = 0xEEAC61C7L;
        int32_t l_105 = 0L;
        int32_t l_106 = 0x9F83FA7BL;
        int32_t l_108 = 0L;
        int32_t l_109[5];
        struct S1 l_138 = {0x8EL,0UL,0x684FA51AL,0x2B70BD87L,0xCC6E09C6L};
        int i;
        for (i = 0; i < 5; i++)
            l_109[i] = 0xB5258326L;
        if (p_27.f1)
        { 
            int16_t l_91 = 0x31AFL;
            struct S0 l_94 = {-10L,0x22BDL,0x4FDBC366L,0xF5FBB4CDL};
            if ((~l_34[1][2][1]))
            { 
                return p_30;
            }
            else
            { 
                int64_t l_89 = 0L;
                int32_t l_90 = (-1L);
                l_79 &= (safe_add_func_uint32_t_u_u(((safe_rshift_func_int16_t_s_u(((safe_sub_func_uint8_t_u_u((safe_unary_minus_func_uint8_t_u(((!p_29.f0) , ((((((safe_add_func_uint16_t_u_u((((l_78[0][0] = l_77) , (g_31.f3 <= 0xA963L)) == l_77.f1), 0UL)) > l_77.f2) || g_64) >= 0x2B4D3A61860F42E9LL) , p_29.f0) , p_29.f1)))), g_32[0][0].f0)) && g_31.f0), 5)) >= g_31.f1), g_31.f1));
                l_80[2] = g_31;
                g_64 = (l_90 &= (safe_mod_func_uint32_t_u_u(((safe_mul_func_int8_t_s_s(((g_32[0][0].f0 = (((-1L) == ((((safe_mod_func_uint8_t_u_u(g_37, 255UL)) , (safe_div_func_uint8_t_u_u(g_32[0][0].f1, g_31.f3))) | p_26.f2) >= 0x35L)) || l_89)) ^ p_26.f0), g_31.f0)) == 1L), p_26.f1)));
            }
            l_79 = l_91;
            for (p_27.f0 = 21; (p_27.f0 != (-21)); p_27.f0--)
            { 
                l_94 = g_31;
                g_95[0]--;
            }
        }
        else
        { 
            int8_t l_98 = 0xFDL;
            int32_t l_100 = 0x90E31D76L;
            int32_t l_101[4][2][4] = {{{0L,0L,0L,0x99F59CAFL},{0xD5FEEC88L,0x6D3611A5L,0L,0L}},{{0xA48CC3AAL,0xA48CC3AAL,0L,(-1L)},{0xD5FEEC88L,0xDFBC4EB0L,0L,0x6D3611A5L}},{{0L,0L,(-1L),0L},{(-1L),0L,0L,0x6D3611A5L}},{{0L,0xDFBC4EB0L,0xD5FEEC88L,(-1L)},{0L,0xA48CC3AAL,0xA48CC3AAL,0L}}};
            int i, j, k;
            g_111++;
        }
        for (l_77.f0 = 5; (l_77.f0 >= 13); ++l_77.f0)
        { 
            uint32_t l_118 = 0x65D24B41L;
            int32_t l_139 = (-5L);
            uint32_t l_151 = 9UL;
            for (p_28 = (-4); (p_28 > 3); p_28++)
            { 
                l_118--;
            }
            if ((safe_mul_func_uint16_t_u_u(((l_99 = (p_27.f0 = g_95[2])) && l_78[0][0].f0), (((((((p_26.f2 , l_123) , l_78[0][0].f1) != 1UL) >= 1L) <= p_26.f0) || p_29.f0) || p_29.f0))))
            { 
                struct S0 l_124 = {0x392AL,0xDF0CL,0L,0xBC94048DL};
                l_124 = p_26;
                g_110[0][0] ^= (9UL | (g_20 != (safe_mul_func_int8_t_s_s(0L, (g_127 |= g_95[0])))));
            }
            else
            { 
                g_128 = (p_27 , g_31);
                return p_27.f0;
            }
            for (l_105 = 0; (l_105 <= 0); l_105 += 1)
            { 
                int i;
                l_99 &= (((safe_mod_func_int8_t_s_s((safe_div_func_uint8_t_u_u((l_139 = (safe_lshift_func_int16_t_s_u((safe_lshift_func_uint16_t_u_u((g_95[0] = (0xA5L || g_103[l_105])), 10)), (((l_104[0][0] = (g_137 &= g_103[l_105])) , ((l_138 , g_103[l_105]) | l_102)) , g_128.f2)))), l_106)), (-1L))) , p_29.f1) ^ 9L);
                g_64 = ((safe_mul_func_uint8_t_u_u((g_142 , (safe_lshift_func_int16_t_s_u(((((((safe_mod_func_uint64_t_u_u((p_26.f3 , (safe_mod_func_uint16_t_u_u(0x68A6L, (safe_add_func_int8_t_s_s(l_99, g_110[0][1]))))), l_77.f3)) == 4294967295UL) || p_30) & p_26.f1) & 0x58L) ^ 0x92D23B91L), 5))), l_151)) ^ p_26.f0);
            }
        }
        for (g_128.f3 = 0; (g_128.f3 == 8); g_128.f3++)
        { 
            return g_95[1];
        }
    }
    return p_27.f1;
}





int test_main(void)
{
    int i, j;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_20, "g_20", print_hash_value);
    transparent_crc(g_31.f0, "g_31.f0", print_hash_value);
    transparent_crc(g_31.f1, "g_31.f1", print_hash_value);
    transparent_crc(g_31.f2, "g_31.f2", print_hash_value);
    transparent_crc(g_31.f3, "g_31.f3", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transparent_crc(g_32[i][j].f0, "g_32[i][j].f0", print_hash_value);
            transparent_crc(g_32[i][j].f1, "g_32[i][j].f1", print_hash_value);

        }
    }
    transparent_crc(g_37, "g_37", print_hash_value);
    transparent_crc(g_64, "g_64", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_95[i], "g_95[i]", print_hash_value);

    }
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_103[i], "g_103[i]", print_hash_value);

    }
    transparent_crc(g_107, "g_107", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transparent_crc(g_110[i][j], "g_110[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_111, "g_111", print_hash_value);
    transparent_crc(g_127, "g_127", print_hash_value);
    transparent_crc(g_128.f0, "g_128.f0", print_hash_value);
    transparent_crc(g_128.f1, "g_128.f1", print_hash_value);
    transparent_crc(g_128.f2, "g_128.f2", print_hash_value);
    transparent_crc(g_128.f3, "g_128.f3", print_hash_value);
    transparent_crc(g_137, "g_137", print_hash_value);
    transparent_crc(g_142.f0, "g_142.f0", print_hash_value);
    transparent_crc(g_142.f1, "g_142.f1", print_hash_value);
    transparent_crc(g_142.f2, "g_142.f2", print_hash_value);
    transparent_crc(g_142.f3, "g_142.f3", print_hash_value);
    transparent_crc(g_142.f4, "g_142.f4", print_hash_value);
    transparent_crc(g_154.f0, "g_154.f0", print_hash_value);
    transparent_crc(g_154.f1, "g_154.f1", print_hash_value);
    transparent_crc(g_154.f2, "g_154.f2", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 1; j++)
        {
            transparent_crc(g_191[i][j], "g_191[i][j]", print_hash_value);

        }
    }
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 1; j++)
        {
            transparent_crc(g_230[i][j], "g_230[i][j]", print_hash_value);

        }
    }
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_257[i], "g_257[i]", print_hash_value);

    }
    transparent_crc(g_305, "g_305", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
