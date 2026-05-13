// SPDX-License-Identifier: MIT
// cctest_csmith_eaba3f36.c --- cctest case csmith_eaba3f36 (csmith seed 3938074422)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0xd72aea09 */

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

// Options:   -s 3938074422 -o /tmp/csmith_gen_zsw93hx6/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


#pragma pack(push)
#pragma pack(1)
struct S0 {
   uint8_t  f0;
   int32_t  f1;
   uint16_t  f2;
   const uint32_t  f3;
   uint32_t  f4;
   const int16_t  f5;
};
#pragma pack(pop)

union U1 {
   int32_t  f0;
};


static int32_t g_2 = 0xFA75C19CL;
static int16_t g_9 = 0L;
static uint64_t g_34 = 18446744073709551615UL;
static union U1 g_36[4] = {{0x39200279L},{0x39200279L},{0x39200279L},{0x39200279L}};
static uint8_t g_52 = 0xA7L;
static struct S0 g_56 = {251UL,0xDF561F66L,2UL,1UL,0x075ABA8BL,1L};
static uint64_t g_57 = 0x115CD63CCF75BAE5LL;
static int32_t g_73 = 0x5992E414L;
static uint32_t g_74 = 0UL;
static int64_t g_111[3][2][3] = {{{0x4ABCDCAF5201FEAELL,0x4ABCDCAF5201FEAELL,0x4ABCDCAF5201FEAELL},{0x4ABCDCAF5201FEAELL,0x4ABCDCAF5201FEAELL,0x4ABCDCAF5201FEAELL}},{{0x4ABCDCAF5201FEAELL,0x4ABCDCAF5201FEAELL,0x4ABCDCAF5201FEAELL},{0x4ABCDCAF5201FEAELL,0x4ABCDCAF5201FEAELL,0x4ABCDCAF5201FEAELL}},{{0x4ABCDCAF5201FEAELL,0x4ABCDCAF5201FEAELL,0x4ABCDCAF5201FEAELL},{0x4ABCDCAF5201FEAELL,0x4ABCDCAF5201FEAELL,0x4ABCDCAF5201FEAELL}}};
static int16_t g_113 = 0L;
static int32_t g_114 = 1L;
static uint16_t g_115 = 0xB031L;
static int32_t g_146 = (-9L);
static int16_t g_157 = 0x0459L;
static int16_t g_158[4][3] = {{0xF8C0L,0xF8C0L,(-4L)},{0xF8C0L,0xF8C0L,(-4L)},{0xF8C0L,0xF8C0L,(-4L)},{0xF8C0L,0xF8C0L,(-4L)}};
static uint16_t g_159 = 0x4D89L;
static int32_t g_166 = (-1L);
static uint32_t g_184 = 0x833F8FB6L;



static uint32_t  func_1(void);
static int32_t  func_5(int32_t  p_6, const uint16_t  p_7);
static int16_t  func_17(uint8_t  p_18, const int8_t  p_19, uint64_t  p_20, uint32_t  p_21, union U1  p_22);
static int16_t  func_23(int16_t  p_24, union U1  p_25, const int8_t  p_26, int64_t  p_27, int32_t  p_28);




static uint32_t  func_1(void)
{ 
    uint32_t l_8 = 9UL;
    int32_t l_118 = 0xF55D16F9L;
    int32_t l_119 = 0x98D8379AL;
    for (g_2 = (-4); (g_2 >= (-8)); g_2 = safe_sub_func_uint32_t_u_u(g_2, 3))
    { 
        int32_t l_110 = 0xF20F69DBL;
        uint8_t l_120 = 0x96L;
        int32_t l_167[1];
        int i;
        for (i = 0; i < 1; i++)
            l_167[i] = (-9L);
        if (func_5(l_8, (g_9 = 65530UL)))
        { 
            int32_t l_112 = (-3L);
            int32_t l_124 = 0x5D5D6CB7L;
            uint16_t l_125 = 0x1B9AL;
            if ((safe_mod_func_uint32_t_u_u((safe_rshift_func_uint8_t_u_s((safe_div_func_uint32_t_u_u(g_9, (safe_lshift_func_uint8_t_u_u(((safe_sub_func_int32_t_s_s(g_56.f3, (((g_111[1][1][0] = (~l_110)) || (l_112 & g_57)) , g_73))) == l_8), 3)))), g_34)), l_8)))
            { 
                --g_115;
            }
            else
            { 
                int32_t l_123[1];
                int i;
                for (i = 0; i < 1; i++)
                    l_123[i] = (-1L);
                l_120++;
                --l_125;
                if (g_57)
                    continue;
            }
            for (l_8 = 25; (l_8 <= 22); l_8--)
            { 
                uint16_t l_130 = 65535UL;
                g_36[2].f0 = ((((0x4DE5L >= l_120) < (l_130 , g_56.f4)) & 0L) < 0xC56EL);
                g_114 = ((safe_rshift_func_uint16_t_u_u((g_115 ^= (safe_mod_func_uint32_t_u_u((0x39L & (((safe_lshift_func_int16_t_s_s(0L, (safe_sub_func_int8_t_s_s(g_56.f2, (l_119 > g_56.f0))))) , 0xD0A1L) && 0L)), g_56.f3))), 6)) > 0xFCL);
                l_118 = (!((safe_mul_func_int8_t_s_s(g_114, (safe_div_func_int8_t_s_s((0xB9L || (g_146 = ((safe_div_func_int16_t_s_s(l_112, (g_2 , g_73))) >= l_120))), g_2)))) ^ l_124));
            }
            if (g_146)
                break;
        }
        else
        { 
            g_36[2].f0 = (safe_unary_minus_func_uint16_t_u(65526UL));
        }
        for (g_34 = 0; (g_34 <= 1); g_34 += 1)
        { 
            int8_t l_156 = 3L;
            l_167[0] = (safe_lshift_func_uint16_t_u_s(0xE121L, (g_2 <= (safe_rshift_func_int16_t_s_s((((l_110 = (safe_mod_func_int8_t_s_s((safe_div_func_uint16_t_u_u((((((l_156 == (++g_159)) < (safe_lshift_func_int8_t_s_s((safe_div_func_uint64_t_u_u((((0x1AE0L && g_157) && g_56.f2) != l_119), g_157)), l_118))) , g_166) >= g_56.f2) , g_158[2][2]), g_158[2][1])), 0x82L))) && 2UL) > 0x3D222340L), 14)))));
            for (l_119 = 0; (l_119 <= 3); l_119 += 1)
            { 
                int32_t l_174 = 1L;
                int i, j, k;
                l_174 ^= ((safe_sub_func_uint16_t_u_u((safe_mul_func_int16_t_s_s(((safe_lshift_func_int16_t_s_s(g_111[(g_34 + 1)][g_34][(g_34 + 1)], 8)) ^ g_111[g_34][g_34][(g_34 + 1)]), l_119)), (g_111[(g_34 + 1)][g_34][(g_34 + 1)] == 1L))) & g_36[2].f0);
            }
            for (g_166 = 0; (g_166 <= 1); g_166 += 1)
            { 
                int i, j, k;
                g_36[2].f0 = ((safe_lshift_func_int8_t_s_s(g_111[(g_34 + 1)][g_34][g_166], (0xA1L ^ g_9))) != (g_114 ^= (+0x5E1251B0L)));
            }
        }
        l_110 = (g_36[2].f0 = (safe_lshift_func_int8_t_s_s((((((0xEB33L | (safe_lshift_func_uint16_t_u_u(((((g_111[2][1][2] ^= ((l_119 &= (g_9 | g_115)) , (safe_div_func_uint16_t_u_u((g_56.f2 = 0UL), l_110)))) , g_56.f1) < 0x92L) != 9UL), g_166))) && 0xF7L) ^ l_118) ^ 0x10L) ^ g_36[2].f0), g_56.f3)));
    }
    g_184--;
    return g_52;
}



static int32_t  func_5(int32_t  p_6, const uint16_t  p_7)
{ 
    uint16_t l_31 = 0x5467L;
    int32_t l_32 = 0x76A47CDEL;
    int32_t l_33 = 3L;
    int32_t l_35 = 1L;
    union U1 l_90 = {0x19747A00L};
    g_36[2].f0 = (safe_mul_func_int16_t_s_s((+(safe_sub_func_uint16_t_u_u(p_7, (safe_mul_func_int16_t_s_s(func_17((g_56.f0 = ((0x98CAL != func_23((l_35 &= ((g_34 ^= ((l_33 = ((((safe_sub_func_int16_t_s_s(l_31, (l_32 = p_7))) & g_9) | g_2) != g_2)) >= 0x6C0B333EL)) && l_31)), g_36[2], g_36[2].f0, l_31, g_36[2].f0)) , p_7)), l_31, g_56.f1, p_7, l_90), p_7))))), 0UL));
    return p_7;
}



static int16_t  func_17(uint8_t  p_18, const int8_t  p_19, uint64_t  p_20, uint32_t  p_21, union U1  p_22)
{ 
    int64_t l_97 = 0x94EEE57E67F5904BLL;
    uint8_t l_98 = 254UL;
    g_36[2].f0 ^= (safe_lshift_func_int8_t_s_u((safe_mul_func_uint8_t_u_u(((safe_rshift_func_uint8_t_u_s(p_18, ((l_97 = 0x78DFE8548DC0916DLL) <= 0UL))) > (0x6947F7088E2D1E93LL != 0x66FB991B7FB1DA9CLL)), 0x80L)), l_98));
    return l_98;
}



static int16_t  func_23(int16_t  p_24, union U1  p_25, const int8_t  p_26, int64_t  p_27, int32_t  p_28)
{ 
    int16_t l_53 = 0xC0D3L;
    int32_t l_82 = 9L;
    for (p_24 = 0; (p_24 <= 3); p_24 += 1)
    { 
        uint8_t l_37 = 0x62L;
        int32_t l_70[3];
        int i;
        for (i = 0; i < 3; i++)
            l_70[i] = 0L;
        for (p_27 = 3; (p_27 >= 0); p_27 -= 1)
        { 
            const int32_t l_49[1] = {0xE5708880L};
            int i;
            p_25.f0 = (((p_27 > (l_37 < g_2)) & ((+g_34) && 0x6EB8L)) || p_26);
            if ((safe_add_func_uint16_t_u_u((l_53 |= (((safe_mul_func_uint8_t_u_u(0xD0L, (safe_mod_func_int8_t_s_s((safe_mul_func_uint8_t_u_u(l_49[0], (g_52 = (safe_add_func_uint64_t_u_u(((g_34 || (p_25.f0 ^ 8UL)) == g_9), 0x752EE8B7203FCA5ELL))))), g_36[2].f0)))) != l_49[0]) > 0L)), 65530UL)))
            { 
                g_57 &= (safe_rshift_func_int16_t_s_u((g_56 , (250UL > g_36[2].f0)), 7));
            }
            else
            { 
                if (g_56.f0)
                    break;
            }
            if (((safe_lshift_func_uint16_t_u_s((1L >= (safe_sub_func_uint64_t_u_u(0UL, (safe_sub_func_int16_t_s_s((safe_lshift_func_uint8_t_u_s((safe_div_func_uint64_t_u_u(((g_74 = ((safe_add_func_uint32_t_u_u(((l_70[1] &= l_49[0]) , (((safe_mul_func_uint16_t_u_u(((((g_73 |= p_24) , 0x7BFE1A27L) > p_28) > p_24), 65529UL)) | p_27) <= g_56.f4)), l_53)) != l_53)) , p_28), l_53)), 6)), l_37))))), 14)) > 0x591F28F6L))
            { 
                if (g_74)
                    break;
            }
            else
            { 
                int16_t l_77 = 1L;
                struct S0 l_89 = {0x1EL,4L,0x9A1AL,1UL,0x7D69BDFBL,0xBE83L};
                if (p_27)
                    break;
                l_70[2] = (safe_mul_func_uint16_t_u_u(((g_57++) <= ((l_82 = (safe_lshift_func_uint16_t_u_u(l_49[0], 4))) < (safe_lshift_func_uint8_t_u_u(((l_77 < (safe_div_func_int64_t_s_s((((((safe_mod_func_uint32_t_u_u((g_56.f5 , ((((((l_89 , g_2) ^ 0x4AD0L) | p_27) && g_56.f4) || (-1L)) == p_27)), p_27)) != l_70[0]) >= p_26) , p_27) <= l_53), 0x43A5642BED38BC6ALL))) >= p_27), p_25.f0)))), p_28));
                g_36[2].f0 |= p_25.f0;
            }
        }
    }
    return p_24;
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    transparent_crc(g_9, "g_9", print_hash_value);
    transparent_crc(g_34, "g_34", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_36[i].f0, "g_36[i].f0", print_hash_value);

    }
    transparent_crc(g_52, "g_52", print_hash_value);
    transparent_crc(g_56.f0, "g_56.f0", print_hash_value);
    transparent_crc(g_56.f1, "g_56.f1", print_hash_value);
    transparent_crc(g_56.f2, "g_56.f2", print_hash_value);
    transparent_crc(g_56.f3, "g_56.f3", print_hash_value);
    transparent_crc(g_56.f4, "g_56.f4", print_hash_value);
    transparent_crc(g_56.f5, "g_56.f5", print_hash_value);
    transparent_crc(g_57, "g_57", print_hash_value);
    transparent_crc(g_73, "g_73", print_hash_value);
    transparent_crc(g_74, "g_74", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 3; k++)
            {
                transparent_crc(g_111[i][j][k], "g_111[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_113, "g_113", print_hash_value);
    transparent_crc(g_114, "g_114", print_hash_value);
    transparent_crc(g_115, "g_115", print_hash_value);
    transparent_crc(g_146, "g_146", print_hash_value);
    transparent_crc(g_157, "g_157", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transparent_crc(g_158[i][j], "g_158[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_159, "g_159", print_hash_value);
    transparent_crc(g_166, "g_166", print_hash_value);
    transparent_crc(g_184, "g_184", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
