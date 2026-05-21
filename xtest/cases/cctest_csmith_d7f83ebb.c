// SPDX-License-Identifier: MIT
// cctest_csmith_d7f83ebb.c --- cctest case csmith_d7f83ebb (csmith seed 3623370427)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0xc5e64f63 */

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

// Options:   -s 3623370427 -o /tmp/csmith_gen_y60r60rp/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


#pragma pack(push)
#pragma pack(1)
struct S0 {
   uint32_t  f0;
   int64_t  f1;
   int32_t  f2;
   uint32_t  f3;
   uint8_t  f4;
};
#pragma pack(pop)

union U1 {
   int16_t  f0;
   const struct S0  f1;
};


static uint8_t g_6[4][4] = {{0x28L,0x45L,0x28L,0x28L},{0x45L,0x45L,0x7FL,0x45L},{0x45L,0x28L,0x28L,0x45L},{0x28L,0x45L,0x28L,0x28L}};
static int16_t g_13[1][4] = {{0L,0L,0L,0L}};
static const union U1 g_18 = {1L};
static uint8_t g_20 = 0x5FL;
static struct S0 g_34 = {0UL,0x132C2674D9070A62LL,9L,4294967290UL,0x36L};
static int16_t g_41 = (-1L);
static int16_t g_70 = 0x19AFL;
static uint32_t g_127 = 0UL;
static int64_t g_129[1][2] = {{0x3A24B7619C586795LL,0x3A24B7619C586795LL}};
static uint8_t g_130 = 0UL;
static uint32_t g_135 = 1UL;
static uint16_t g_138 = 8UL;
static int8_t g_141 = 1L;
static int32_t g_152 = 0xA61B918FL;
static int32_t g_154 = 0xBD18442EL;
static uint32_t g_155 = 0xF53D4211L;



static int32_t  func_1(void);
static int32_t  func_2(uint8_t  p_3, struct S0  p_4, int32_t  p_5);
static struct S0  func_7(int8_t  p_8, uint16_t  p_9, uint16_t  p_10, uint64_t  p_11, uint8_t  p_12);
static uint8_t  func_16(const union U1  p_17);




static int32_t  func_1(void)
{ 
    int32_t l_19[4][1][1];
    int32_t l_21[5][4] = {{0x6FA66FA4L,0x6FA66FA4L,(-1L),(-1L)},{0x6FA66FA4L,0x6FA66FA4L,(-1L),(-1L)},{0x6FA66FA4L,0x6FA66FA4L,(-1L),(-1L)},{0x6FA66FA4L,0x6FA66FA4L,(-1L),(-1L)},{0x6FA66FA4L,0x6FA66FA4L,(-1L),(-1L)}};
    int16_t l_35 = (-1L);
    int i, j, k;
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 1; k++)
                l_19[i][j][k] = 0x077045B3L;
        }
    }
    g_154 = ((g_6[1][1] = (0xF1D8987FL > func_2(g_6[1][1], func_7(((g_13[0][3] = 0x06L) , (safe_mul_func_uint8_t_u_u(func_16(g_18), g_6[0][3]))), l_19[0][0][0], g_20, l_19[3][0][0], l_21[2][1]), l_35))) == g_129[0][1]);
    l_19[0][0][0] |= ((l_21[2][1] = (safe_mul_func_uint8_t_u_u((safe_rshift_func_int8_t_s_u(1L, 0)), (0x728ABA7FL >= (g_13[0][3] ^ (l_35 > g_130)))))) == 0x1739D61DCCA4C161LL);
    return l_21[2][1];
}



static int32_t  func_2(uint8_t  p_3, struct S0  p_4, int32_t  p_5)
{ 
    int8_t l_40 = 0x71L;
    struct S0 l_49 = {0xCF466DF4L,0x4CC08F94BBB87E33LL,-8L,0x33C574C3L,0xC6L};
    struct S0 l_50 = {5UL,0xFC01A077628D16E9LL,-2L,0x0D16AAEFL,1UL};
    struct S0 l_72 = {0x7FD3A18FL,0xCA3631A0D171E9D6LL,-7L,4294967294UL,0x8FL};
    int32_t l_82 = 1L;
    int32_t l_84 = 0L;
    l_50 = (l_49 = func_7((safe_mod_func_int8_t_s_s((safe_sub_func_uint16_t_u_u((((g_20 <= (g_41 |= l_40)) || 0L) || (safe_unary_minus_func_uint8_t_u((safe_sub_func_uint16_t_u_u(((safe_add_func_uint32_t_u_u((safe_div_func_uint32_t_u_u(0xE714ABA1L, 0x97A0EDE8L)), 2L)) || 0L), g_6[1][2]))))), 65535UL)), 1L)), p_4.f2, p_4.f0, g_34.f1, g_34.f0));
    for (l_49.f2 = (-16); (l_49.f2 < 16); l_49.f2 = safe_add_func_int32_t_s_s(l_49.f2, 2))
    { 
        uint16_t l_63 = 7UL;
        int32_t l_71 = 0x3B25F501L;
        struct S0 l_159 = {0xD494AE63L,-2L,-1L,0xBE4CFF9CL,255UL};
        l_72 = (((safe_rshift_func_uint8_t_u_u((safe_mul_func_int16_t_s_s(((safe_lshift_func_uint16_t_u_u(((l_71 = (safe_mod_func_int32_t_s_s((g_34.f0 || (((((((l_63 != p_4.f3) ^ ((safe_mod_func_int8_t_s_s(((safe_mul_func_int16_t_s_s((safe_add_func_int8_t_s_s((g_70 = 1L), g_34.f2)), g_6[0][0])) <= g_34.f4), 3L)) >= l_50.f2)) ^ 250UL) == 0UL) < 255UL) != l_63) >= p_4.f2)), 0xEBACB588L))) <= (-5L)), g_20)) , l_49.f2), g_6[1][1])), g_34.f0)) >= 0x47L) , g_34);
        if (p_4.f1)
        { 
            int32_t l_83 = 0xE8DB49C3L;
            int32_t l_99 = 0L;
            int32_t l_100 = 0L;
            uint16_t l_101 = 65527UL;
            int32_t l_128 = (-7L);
            l_84 &= (safe_div_func_int8_t_s_s(((l_83 = ((+((((safe_lshift_func_uint8_t_u_u((p_3 > ((l_82 |= (((safe_rshift_func_int8_t_s_u(1L, 1)) >= (safe_div_func_uint16_t_u_u((l_71 , l_71), 0x90CEL))) , (-3L))) <= p_3)), 7)) < p_3) < 0x07CA432BL) >= l_71)) ^ 0x5864L)) ^ p_4.f0), g_41));
            if ((safe_sub_func_int32_t_s_s(((l_100 = ((((safe_rshift_func_uint16_t_u_u((safe_div_func_int64_t_s_s((safe_sub_func_int8_t_s_s((l_99 = (safe_add_func_uint32_t_u_u((safe_mul_func_uint16_t_u_u(g_34.f4, (0xEC415B45L <= (l_71 , (safe_div_func_int8_t_s_s((p_4.f1 > 0x3F555147L), g_34.f1)))))), 5L))), (-9L))), l_83)), p_5)) <= p_4.f0) <= l_71) > g_34.f0)) && l_101), 1UL)))
            { 
                uint32_t l_118 = 4294967295UL;
                l_99 = (safe_add_func_int8_t_s_s((safe_lshift_func_int8_t_s_s((g_20 && ((safe_add_func_uint8_t_u_u((safe_mul_func_uint16_t_u_u((safe_mul_func_int8_t_s_s(g_34.f1, (safe_rshift_func_uint16_t_u_s((l_84 = (l_100 = g_34.f4)), 3)))), (safe_sub_func_int32_t_s_s(((safe_rshift_func_uint8_t_u_u(0x5FL, l_72.f0)) , p_4.f0), 0xCC1C6A88L)))), (-1L))) > 0xF120AA4486533915LL)), 4)), l_118));
                return g_13[0][3];
            }
            else
            { 
                g_127 &= (l_100 = (safe_sub_func_uint32_t_u_u((++p_4.f3), (safe_mod_func_uint64_t_u_u((safe_div_func_uint16_t_u_u(l_82, g_6[3][1])), 9UL)))));
                g_130++;
            }
        }
        else
        { 
            int64_t l_134 = 0xC0E1BB5F034421CFLL;
            p_4 = func_7(l_63, ((g_135 = (l_134 = (+(p_4.f3 == 0xF4B716CAL)))) < g_41), l_71, p_3, g_18.f0);
            l_82 = l_71;
        }
        for (l_72.f1 = 0; (l_72.f1 == (-5)); --l_72.f1)
        { 
            uint32_t l_148 = 0x9413DEA6L;
            struct S0 l_158 = {1UL,0x2DAEADAD783734BBLL,0L,1UL,0x09L};
            g_138 |= g_34.f0;
            if (((safe_rshift_func_int8_t_s_s((l_50.f2 | (l_71 , (g_141 |= 0xF7L))), g_6[1][1])) || 1UL))
            { 
                int64_t l_150 = 6L;
                int32_t l_151 = (-1L);
                int32_t l_153[4] = {0x05CA1C99L,0x05CA1C99L,0x05CA1C99L,0x05CA1C99L};
                int i;
                l_82 = (((safe_lshift_func_uint8_t_u_s(((p_4.f3 = (safe_mul_func_int8_t_s_s(0x49L, (p_4.f4 = (p_3--))))) , ((l_148 == (+p_4.f3)) & g_70)), g_13[0][3])) | 0x15B7L) && l_49.f2);
                --g_155;
            }
            else
            { 
                l_159 = (l_158 = p_4);
                if (g_154)
                    break;
            }
        }
    }
    return g_129[0][1];
}



static struct S0  func_7(int8_t  p_8, uint16_t  p_9, uint16_t  p_10, uint64_t  p_11, uint8_t  p_12)
{ 
    int32_t l_28 = 6L;
    int8_t l_33 = 0xE3L;
    l_28 = ((((+4UL) == ((((safe_unary_minus_func_int16_t_s(((safe_lshift_func_int8_t_s_u(((safe_add_func_int16_t_s_s(((l_28 , ((g_18.f0 , ((((safe_lshift_func_int16_t_s_s((safe_rshift_func_uint8_t_u_s((g_13[0][3] , g_13[0][3]), g_13[0][3])), p_9)) != l_28) , g_6[1][1]) != g_13[0][0])) || 0x43E62C90L)) >= 2L), g_13[0][3])) < p_11), 4)) && p_12))) >= 0x55F5DDA3018177C4LL) , g_6[3][1]) != l_33)) , l_33) < g_6[1][0]);
    return g_34;
}



static uint8_t  func_16(const union U1  p_17)
{ 
    return g_18.f0;
}





int test_main(void)
{
    int i, j;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            transparent_crc(g_6[i][j], "g_6[i][j]", print_hash_value);

        }
    }
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 4; j++)
        {
            transparent_crc(g_13[i][j], "g_13[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_18.f0, "g_18.f0", print_hash_value);
    transparent_crc(g_20, "g_20", print_hash_value);
    transparent_crc(g_34.f0, "g_34.f0", print_hash_value);
    transparent_crc(g_34.f1, "g_34.f1", print_hash_value);
    transparent_crc(g_34.f2, "g_34.f2", print_hash_value);
    transparent_crc(g_34.f3, "g_34.f3", print_hash_value);
    transparent_crc(g_34.f4, "g_34.f4", print_hash_value);
    transparent_crc(g_41, "g_41", print_hash_value);
    transparent_crc(g_70, "g_70", print_hash_value);
    transparent_crc(g_127, "g_127", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(g_129[i][j], "g_129[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_130, "g_130", print_hash_value);
    transparent_crc(g_135, "g_135", print_hash_value);
    transparent_crc(g_138, "g_138", print_hash_value);
    transparent_crc(g_141, "g_141", print_hash_value);
    transparent_crc(g_152, "g_152", print_hash_value);
    transparent_crc(g_154, "g_154", print_hash_value);
    transparent_crc(g_155, "g_155", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
