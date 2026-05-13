// SPDX-License-Identifier: MIT
// cctest_csmith_47102947.c --- cctest case csmith_47102947 (csmith seed 1192241479)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x143e0867 */

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

// Options:   -s 1192241479 -o /tmp/csmith_gen_s5kldelf/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


#pragma pack(push)
#pragma pack(1)
struct S0 {
   int64_t  f0;
   uint32_t  f1;
   int8_t  f2;
   uint8_t  f3;
   int16_t  f4;
};
#pragma pack(pop)

struct S1 {
   int32_t  f0;
   uint32_t  f1;
   int64_t  f2;
   uint32_t  f3;
};

union U2 {
   int8_t  f0;
   const struct S1  f1;
};

union U3 {
   int8_t  f0;
   const int32_t  f1;
   const struct S1  f2;
};


static int32_t g_2[1] = {0x059B8BC5L};
static int64_t g_22[3] = {0xBA8D7D2A7E9F21C9LL,0xBA8D7D2A7E9F21C9LL,0xBA8D7D2A7E9F21C9LL};
static uint64_t g_38 = 0x6EA1325A46E4944CLL;
static union U2 g_53[5] = {{0L},{0L},{0L},{0L},{0L}};
static uint16_t g_62 = 65535UL;
static int64_t g_63[2] = {0xFC80C5262C085022LL,0xFC80C5262C085022LL};
static int32_t g_70 = 1L;
static uint64_t g_72[5][2][5] = {{{0x4C8A73D9AAD11CF5LL,18446744073709551615UL,0x04247EC8A5E720F5LL,18446744073709551615UL,0x4C8A73D9AAD11CF5LL},{0x4C8A73D9AAD11CF5LL,18446744073709551615UL,0x04247EC8A5E720F5LL,18446744073709551615UL,0x4C8A73D9AAD11CF5LL}},{{0x4C8A73D9AAD11CF5LL,18446744073709551615UL,0x04247EC8A5E720F5LL,18446744073709551615UL,0x4C8A73D9AAD11CF5LL},{0x4C8A73D9AAD11CF5LL,18446744073709551615UL,0x04247EC8A5E720F5LL,18446744073709551615UL,0x4C8A73D9AAD11CF5LL}},{{0x4C8A73D9AAD11CF5LL,18446744073709551615UL,0x04247EC8A5E720F5LL,18446744073709551615UL,0x4C8A73D9AAD11CF5LL},{0x4C8A73D9AAD11CF5LL,18446744073709551615UL,0x04247EC8A5E720F5LL,18446744073709551615UL,0x4C8A73D9AAD11CF5LL}},{{0x4C8A73D9AAD11CF5LL,18446744073709551615UL,0x04247EC8A5E720F5LL,18446744073709551615UL,0x4C8A73D9AAD11CF5LL},{18446744073709551615UL,1UL,0xF738DB22284F583ELL,1UL,18446744073709551615UL}},{{18446744073709551615UL,1UL,0xF738DB22284F583ELL,1UL,18446744073709551615UL},{18446744073709551615UL,1UL,0xF738DB22284F583ELL,1UL,18446744073709551615UL}}};
static int32_t g_75 = 0L;
static uint16_t g_76 = 65535UL;
static struct S1 g_80 = {8L,0xA74E9983L,0x36F110B0F3EF28B5LL,0x68274657L};
static uint32_t g_95[2] = {0x0B5F8E08L,0x0B5F8E08L};
static struct S0 g_100 = {0x5B6348A9CFEDF412LL,0x9D89CF69L,-1L,0UL,0x43F0L};
static int32_t g_130 = 1L;
static int8_t g_131 = 1L;
static uint16_t g_134 = 0x19C1L;
static int8_t g_150 = 0x60L;
static union U3 g_217 = {0xB0L};



static uint64_t  func_1(void);
static const int8_t  func_14(const int16_t  p_15, int32_t  p_16, int32_t  p_17, uint16_t  p_18, uint16_t  p_19);
static struct S0  func_23(struct S0  p_24, union U3  p_25, uint32_t  p_26, uint8_t  p_27, const int16_t  p_28);
static struct S0  func_29(uint16_t  p_30, union U3  p_31, const uint32_t  p_32, union U2  p_33);




static uint64_t  func_1(void)
{ 
    uint16_t l_11 = 0x74C3L;
    uint16_t l_198 = 0xC6C3L;
    const uint64_t l_222 = 0xF954241E11B270AALL;
lbl_223:
    for (g_2[0] = 0; (g_2[0] > 1); g_2[0] = safe_add_func_int32_t_s_s(g_2[0], 7))
    { 
        const int32_t l_20 = 0x421E0BECL;
        union U2 l_35 = {0x56L};
        union U3 l_153 = {0x0DL};
        int32_t l_193 = 6L;
        if ((g_22[0] = (safe_mod_func_uint8_t_u_u((safe_mul_func_uint8_t_u_u((safe_mul_func_uint16_t_u_u(l_11, (((safe_mod_func_int64_t_s_s((func_14(l_20, l_20, ((g_2[0] ^ g_2[0]) & g_2[0]), l_11, g_2[0]) > 5L), 18446744073709551608UL)) <= g_2[0]) != (-4L)))), l_20)), g_2[0]))))
        { 
            union U3 l_34 = {0xC9L};
            g_100 = func_23(func_29(g_22[0], l_34, g_22[0], l_35), l_153, g_100.f0, g_2[0], g_150);
            if (g_80.f3)
                goto lbl_223;
        }
        else
        { 
            for (l_11 = 0; (l_11 > 32); ++l_11)
            { 
                int32_t l_188 = 0xA0974D9EL;
                int32_t l_194 = 0x9EFD0B40L;
                int8_t l_195 = 0xD9L;
                g_75 = (safe_sub_func_uint8_t_u_u(((255UL == (((safe_add_func_int8_t_s_s((safe_lshift_func_int8_t_s_s(((g_80 , ((safe_mul_func_int16_t_s_s((g_100.f4 = (safe_mod_func_int8_t_s_s((safe_lshift_func_uint8_t_u_u((l_188 = (safe_unary_minus_func_int32_t_s(g_100.f2))), (((safe_mod_func_int64_t_s_s((((((g_134 ^= (((l_193 ^= (safe_rshift_func_uint8_t_u_s(1UL, g_100.f0))) , 0xC4823A73L) & (-7L))) && g_22[0]) == (-1L)) | 0x428A3ED1L) <= g_80.f0), l_194)) || l_194) != g_80.f3))), l_195))), 0x2323L)) == 0x8024E2F90C535739LL)) != 0x5AC4A759L), 6)), l_11)) > g_2[0]) == 0x9A1D12C2L)) & l_11), g_70));
            }
        }
        g_80.f0 &= (g_130 = ((l_11 >= (l_193 |= ((g_75 & (safe_add_func_uint16_t_u_u(((g_150 ^ ((g_53[4].f0 != g_130) == 9UL)) > g_100.f0), 0L))) >= g_22[2]))) >= l_198));
        g_80.f0 = (safe_lshift_func_int16_t_s_u(((safe_add_func_int64_t_s_s(((((safe_mul_func_int16_t_s_s((((((safe_lshift_func_int16_t_s_s((g_100.f4 |= (safe_mul_func_int8_t_s_s((safe_add_func_int32_t_s_s((safe_mul_func_uint8_t_u_u(1UL, (((safe_div_func_uint64_t_u_u((safe_sub_func_int8_t_s_s((g_217 , 0x1BL), (safe_lshift_func_uint16_t_u_u(((safe_div_func_uint64_t_u_u(g_2[0], 0x2D081C9F17B1833FLL)) >= 0xD1L), 12)))), l_153.f0)) != l_35.f0) | g_95[0]))), l_198)), 1L))), 1)) < (-10L)) ^ (-1L)) <= l_11) && l_198), g_95[0])) >= 18446744073709551609UL) >= l_222) < 2UL), g_62)) != l_153.f0), l_35.f0));
    }
    if (((safe_lshift_func_uint8_t_u_s(((g_80.f2 >= (safe_rshift_func_uint16_t_u_u((safe_sub_func_uint64_t_u_u(((safe_mul_func_uint8_t_u_u((safe_lshift_func_int16_t_s_u((safe_add_func_uint8_t_u_u((l_222 != ((((-1L) > ((safe_lshift_func_uint16_t_u_s(((-5L) == 0xC735D90FA0016889LL), 9)) == 0x25B9L)) ^ l_198) || g_80.f0)), g_63[1])), 2)), l_198)) <= l_222), g_22[0])), g_22[2]))) >= 0x81L), 5)) < 0x1546L))
    { 
        g_2[0] |= (g_217 , g_100.f2);
    }
    else
    { 
        for (g_76 = 4; (g_76 <= 37); g_76 = safe_add_func_uint16_t_u_u(g_76, 8))
        { 
            int16_t l_245 = 1L;
            for (l_11 = 4; (l_11 <= 5); ++l_11)
            { 
                uint8_t l_242[5][1][1];
                int i, j, k;
                for (i = 0; i < 5; i++)
                {
                    for (j = 0; j < 1; j++)
                    {
                        for (k = 0; k < 1; k++)
                            l_242[i][j][k] = 0x47L;
                    }
                }
                g_130 ^= l_242[1][0][0];
                g_130 ^= (safe_rshift_func_uint8_t_u_u(l_242[3][0][0], g_22[0]));
                if (l_245)
                    continue;
            }
        }
    }
    for (g_100.f1 = 0; (g_100.f1 <= 24); g_100.f1 = safe_add_func_int32_t_s_s(g_100.f1, 8))
    { 
        int64_t l_248[1][3][5] = {{{1L,1L,1L,1L,1L},{7L,7L,7L,7L,7L},{1L,1L,1L,1L,1L}}};
        int32_t l_249 = 0x52DD46F2L;
        int i, j, k;
        l_249 = l_248[0][1][3];
    }
    return g_22[1];
}



static const int8_t  func_14(const int16_t  p_15, int32_t  p_16, int32_t  p_17, uint16_t  p_18, uint16_t  p_19)
{ 
    const int16_t l_21[4][1] = {{0x411AL},{0x411AL},{0x411AL},{0x411AL}};
    int i, j;
    return l_21[3][0];
}



static struct S0  func_23(struct S0  p_24, union U3  p_25, uint32_t  p_26, uint8_t  p_27, const int16_t  p_28)
{ 
    uint32_t l_163[2][3];
    int32_t l_166 = (-3L);
    int32_t l_167 = 0xC7B2EA05L;
    int32_t l_168 = 0L;
    uint16_t l_169 = 8UL;
    uint8_t l_170 = 248UL;
    int32_t l_171 = 0x7CB7726CL;
    struct S0 l_172[1] = {{0L,0x16FF7666L,7L,250UL,0xA2E4L}};
    int i, j;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
            l_163[i][j] = 0x18042E1AL;
    }
    l_171 = (((safe_add_func_int16_t_s_s(((p_25.f0 <= 0x9961D603L) , (+(safe_sub_func_uint64_t_u_u((((((l_168 = (((((((safe_div_func_int8_t_s_s(((((l_167 = (g_72[2][0][0] = (l_166 = (safe_mod_func_uint16_t_u_u((((l_163[1][2] == ((safe_div_func_uint64_t_u_u(g_63[1], 0xDAD36DDC0764D10BLL)) == l_163[0][0])) < l_163[0][2]) , l_163[1][1]), p_24.f1))))) ^ p_24.f3) != l_163[1][2]) == (-9L)), p_25.f0)) || l_163[0][2]) , 0xD6L) >= p_24.f3) & 0x9F95BD7499049CAALL) , g_100.f0) , l_163[1][2])) < g_100.f4) <= 0x64L) >= l_163[1][2]) > l_169), g_131)))), l_170)) == g_80.f2) || 0x3FL);
    return l_172[0];
}



static struct S0  func_29(uint16_t  p_30, union U3  p_31, const uint32_t  p_32, union U2  p_33)
{ 
    int16_t l_36 = 0xEA38L;
    int32_t l_37[2][2][2];
    uint64_t l_51 = 18446744073709551608UL;
    struct S0 l_82[2][4][4] = {{{{1L,1UL,-6L,0xA0L,-8L},{1L,1UL,-6L,0xA0L,-8L},{0xE26F33C05717136CLL,0xA4EABE0FL,0x01L,0xC4L,0xB237L},{0x1835E00E1E3E4B84LL,0xAFB9A305L,1L,1UL,0x75A6L}},{{-3L,0UL,0xB6L,0UL,2L},{-6L,18446744073709551615UL,1L,255UL,-1L},{1L,1UL,-6L,0xA0L,-8L},{1L,0xA3708275L,1L,0x67L,0xD652L}},{{1L,18446744073709551608UL,0L,1UL,0xA8B8L},{-4L,0UL,-1L,255UL,1L},{-1L,0xA71A37F4L,5L,252UL,-1L},{1L,1UL,-6L,0xA0L,-8L}},{{0L,18446744073709551615UL,1L,0xC1L,0L},{-4L,0UL,-1L,255UL,1L},{0L,18446744073709551615UL,1L,0xC1L,0L},{1L,0xA3708275L,1L,0x67L,0xD652L}}},{{{-4L,0UL,-1L,255UL,1L},{-6L,18446744073709551615UL,1L,255UL,-1L},{0xA1895B12CA4FAC92LL,0x80C53E4AL,0x27L,255UL,-7L},{0x1835E00E1E3E4B84LL,0xAFB9A305L,1L,1UL,0x75A6L}},{{0x1835E00E1E3E4B84LL,0xAFB9A305L,1L,1UL,0x75A6L},{1L,1UL,-6L,0xA0L,-8L},{1L,18446744073709551608UL,0L,1UL,0xA8B8L},{-6L,18446744073709551615UL,1L,255UL,-1L}},{{0xAE866A738CF3A2ABLL,0xB3BF0D08L,0xC3L,6UL,5L},{1L,18446744073709551608UL,0L,1UL,0xA8B8L},{1L,18446744073709551608UL,0L,1UL,0xA8B8L},{0xAE866A738CF3A2ABLL,0xB3BF0D08L,0xC3L,6UL,5L}},{{0x1835E00E1E3E4B84LL,0xAFB9A305L,1L,1UL,0x75A6L},{1L,0xA3708275L,1L,0x67L,0xD652L},{0xA1895B12CA4FAC92LL,0x80C53E4AL,0x27L,255UL,-7L},{0L,18446744073709551615UL,1L,0xC1L,0L}}}};
    struct S1 l_85[3] = {{0x49794E54L,0UL,4L,0xA02F9331L},{0x49794E54L,0UL,4L,0xA02F9331L},{0x49794E54L,0UL,4L,0xA02F9331L}};
    int8_t l_112 = 0x0BL;
    int i, j, k;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 2; k++)
                l_37[i][j][k] = (-2L);
        }
    }
    g_38--;
    if ((((safe_mod_func_int64_t_s_s((((0x3B016FEFD52276C1LL || (safe_mod_func_int64_t_s_s(l_37[0][1][0], (safe_lshift_func_uint16_t_u_s((p_30 >= (safe_sub_func_int32_t_s_s((((((safe_div_func_uint16_t_u_u(65526UL, g_2[0])) , l_51) < p_30) <= p_32) <= p_30), g_2[0]))), g_2[0]))))) > 0xE194L) < g_2[0]), p_33.f0)) == g_22[2]) <= l_37[0][0][1]))
    { 
        union U3 l_52 = {0x14L};
        int32_t l_68 = (-7L);
        int32_t l_69 = 1L;
        g_63[1] = ((l_52 , g_53[4]) , (((safe_rshift_func_int8_t_s_s(((p_33.f0 = ((safe_div_func_int64_t_s_s((g_62 ^= ((((safe_sub_func_int16_t_s_s((safe_add_func_uint8_t_u_u((g_2[0] && (g_2[0] && g_2[0])), 0x22L)), g_38)) < l_52.f0) , p_33.f0) <= g_22[0])), g_2[0])) , g_38)) && p_31.f0), 3)) , g_2[0]) , g_38));
        for (g_38 = 0; (g_38 >= 11); g_38++)
        { 
            int16_t l_66 = 0x015CL;
            int32_t l_67 = 0x1A645CCAL;
            int32_t l_71[1];
            int i;
            for (i = 0; i < 1; i++)
                l_71[i] = 0L;
            g_72[3][1][4]--;
            for (l_69 = 0; (l_69 <= 2); l_69 += 1)
            { 
                struct S1 l_79 = {0xA776A221L,0UL,0x6129DC0630FC3BC3LL,18446744073709551606UL};
                ++g_76;
                if (p_33.f0)
                    break;
                g_80 = l_79;
            }
        }
    }
    else
    { 
        struct S0 l_81 = {0xFED0A01C1786B757LL,18446744073709551613UL,1L,0xDEL,0x3EDEL};
        int8_t l_92 = 0xDDL;
        int32_t l_113 = 0x34775068L;
        int32_t l_116 = (-3L);
        int64_t l_129 = 3L;
        int32_t l_132 = 0xA16EC97FL;
        int32_t l_133[3][5] = {{0L,2L,0L,9L,9L},{0L,2L,0L,9L,9L},{0L,2L,0L,9L,9L}};
        int i, j;
        l_82[0][1][1] = l_81;
        g_75 = (g_80.f0 = ((safe_lshift_func_int16_t_s_s((l_85[1] , (safe_mul_func_uint8_t_u_u((safe_mul_func_uint8_t_u_u((((l_81 , ((p_31.f0 <= (safe_sub_func_int8_t_s_s(l_81.f2, g_72[3][1][4]))) | 4294967295UL)) , p_31.f0) | 5L), 255UL)), g_80.f3))), 1)) , l_92));
        if ((safe_sub_func_uint64_t_u_u((((g_95[0] = l_85[1].f1) > (safe_lshift_func_uint16_t_u_s((((((safe_rshift_func_int16_t_s_u(((g_100 , (safe_add_func_int16_t_s_s((safe_lshift_func_uint8_t_u_u(((safe_add_func_uint32_t_u_u((g_76 >= (safe_mod_func_int8_t_s_s((0x0CA5L != g_2[0]), 0x78L))), p_32)) >= 0xE558L), p_31.f0)), 0x92A0L))) , 0L), l_81.f4)) || 0UL) > g_75) > 0x40L) ^ l_82[0][1][1].f4), 14))) >= g_63[1]), 6L)))
        { 
            int32_t l_122 = 0x54AEDB13L;
            int32_t l_123 = 1L;
            if ((safe_sub_func_uint16_t_u_u(((safe_unary_minus_func_int8_t_s((l_113 = l_112))) > g_62), (l_116 = (((((safe_sub_func_int32_t_s_s(0x6357ED5DL, 6UL)) | p_33.f0) , p_30) , g_22[0]) == p_30)))))
            { 
                g_80.f0 = (((0UL <= (0x9B48C2824128E350LL && (p_33.f0 < 0x108F3773156C3613LL))) >= 0xF6EEL) >= 1UL);
                l_123 |= (0x93L & (l_85[1].f0 |= (~((l_81.f3 || (safe_rshift_func_uint16_t_u_s((l_37[0][0][1] &= ((p_31 , ((l_122 && g_2[0]) , g_100)) , 65535UL)), 11))) >= l_122))));
            }
            else
            { 
                int32_t l_126 = 0xA7A8449DL;
                g_75 = (safe_mul_func_uint16_t_u_u((l_126 ^ (l_123 & (l_122 &= (safe_add_func_int8_t_s_s(l_123, ((l_123 >= l_82[0][1][1].f2) | 0L)))))), l_123));
            }
            g_134--;
            for (l_51 = 0; (l_51 == 58); l_51 = safe_add_func_uint8_t_u_u(l_51, 2))
            { 
                uint16_t l_151 = 0x98C3L;
                struct S0 l_152 = {1L,0xF5B4EFADL,0L,0x0DL,0x1B73L};
                l_113 = (0x74L <= (safe_mul_func_int8_t_s_s((safe_sub_func_uint32_t_u_u(0xE433B6E9L, (l_151 = ((safe_lshift_func_int8_t_s_s(((~(((p_32 ^ (l_122 = (safe_div_func_int8_t_s_s((safe_mul_func_uint16_t_u_u((l_81.f1 >= (-2L)), g_150)), l_36)))) & (-1L)) >= g_130)) == (-1L)), 5)) && l_92)))), p_33.f0)));
                return l_152;
            }
        }
        else
        { 
            l_37[1][1][1] |= l_116;
        }
    }
    return l_82[1][2][3];
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_2[i], "g_2[i]", print_hash_value);

    }
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_22[i], "g_22[i]", print_hash_value);

    }
    transparent_crc(g_38, "g_38", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_53[i].f0, "g_53[i].f0", print_hash_value);

    }
    transparent_crc(g_62, "g_62", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_63[i], "g_63[i]", print_hash_value);

    }
    transparent_crc(g_70, "g_70", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 5; k++)
            {
                transparent_crc(g_72[i][j][k], "g_72[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_75, "g_75", print_hash_value);
    transparent_crc(g_76, "g_76", print_hash_value);
    transparent_crc(g_80.f0, "g_80.f0", print_hash_value);
    transparent_crc(g_80.f1, "g_80.f1", print_hash_value);
    transparent_crc(g_80.f2, "g_80.f2", print_hash_value);
    transparent_crc(g_80.f3, "g_80.f3", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_95[i], "g_95[i]", print_hash_value);

    }
    transparent_crc(g_100.f0, "g_100.f0", print_hash_value);
    transparent_crc(g_100.f1, "g_100.f1", print_hash_value);
    transparent_crc(g_100.f2, "g_100.f2", print_hash_value);
    transparent_crc(g_100.f3, "g_100.f3", print_hash_value);
    transparent_crc(g_100.f4, "g_100.f4", print_hash_value);
    transparent_crc(g_130, "g_130", print_hash_value);
    transparent_crc(g_131, "g_131", print_hash_value);
    transparent_crc(g_134, "g_134", print_hash_value);
    transparent_crc(g_150, "g_150", print_hash_value);
    transparent_crc(g_217.f0, "g_217.f0", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
