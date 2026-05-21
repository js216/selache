// SPDX-License-Identifier: MIT
// cctest_csmith_d140a2a3.c --- cctest case csmith_d140a2a3 (csmith seed 3510674083)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x4792c806 */

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

// Options:   -s 3510674083 -o /tmp/csmith_gen_xete258r/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


#pragma pack(push)
#pragma pack(1)
struct S0 {
   uint32_t  f0;
   const uint8_t  f1;
   uint64_t  f2;
};
#pragma pack(pop)

#pragma pack(push)
#pragma pack(1)
struct S1 {
   int32_t  f0;
   const uint64_t  f1;
};
#pragma pack(pop)

union U2 {
   uint32_t  f0;
   int8_t  f1;
   uint32_t  f2;
   uint16_t  f3;
};

union U3 {
   int32_t  f0;
   uint32_t  f1;
};

union U6 {
   const uint8_t  f0;
   uint64_t  f1;
};

union U7 {
   uint64_t  f0;
};


static int64_t g_3 = 0x9C96C7979B389519LL;
static uint32_t g_32 = 0xEB7E5950L;
static union U7 g_36 = {0x43993911E745C5BBLL};
static int16_t g_37 = 0L;
static int16_t g_38 = 0x5760L;
static uint32_t g_62 = 1UL;
static uint32_t g_66[4][5] = {{18446744073709551609UL,0xEB1080E2L,0xEB1080E2L,18446744073709551609UL,18446744073709551609UL},{0xF7A53718L,18446744073709551615UL,0xF7A53718L,18446744073709551615UL,0xF7A53718L},{18446744073709551609UL,18446744073709551609UL,0xEB1080E2L,0xEB1080E2L,18446744073709551609UL},{1UL,18446744073709551615UL,1UL,18446744073709551615UL,1UL}};
static uint8_t g_122 = 0x4DL;
static uint32_t g_140 = 0UL;
static uint32_t g_145 = 0x0BC0C019L;
static uint32_t g_148 = 0xC936351EL;
static union U2 g_153 = {0x3A27A7C4L};
static int16_t g_154 = 1L;
static uint32_t g_157 = 1UL;
static int16_t g_158 = 7L;
static int32_t g_160[4] = {0x68CDA018L,0x68CDA018L,0x68CDA018L,0x68CDA018L};
static int32_t g_161 = (-6L);
static int32_t g_163[2] = {0x39733121L,0x39733121L};
static const int32_t g_178 = (-1L);
static union U6 g_195 = {0xAAL};
static int32_t g_210[1][3][5] = {{{0xBEBFAB12L,8L,0xCF4E763CL,8L,0xBEBFAB12L},{0xBEBFAB12L,8L,0xCF4E763CL,8L,0xBEBFAB12L},{0xBEBFAB12L,8L,0xCF4E763CL,8L,0xBEBFAB12L}}};
static uint32_t g_248 = 0xF5AF2D67L;



static int32_t  func_1(void);
static union U2  func_4(union U3  p_5, union U2  p_6, int32_t  p_7);
static uint16_t  func_15(union U6  p_16, int64_t  p_17, uint32_t  p_18);
static union U6  func_19(int32_t  p_20, const union U3  p_21, int32_t  p_22);




static int32_t  func_1(void)
{ 
    uint32_t l_2 = 0UL;
    union U3 l_8 = {0xBA31E468L};
    union U2 l_9 = {0x6840EB44L};
    int32_t l_286 = 0L;
    l_286 = (l_2 != (g_3 != (((func_4((l_2 , l_8), l_9, g_3) , g_195) , l_8.f0) || g_148)));
    g_163[0] |= (safe_rshift_func_int16_t_s_s(g_248, (g_38 = (3UL < 0xCAD3B19451B64B22LL))));
    return l_2;
}



static union U2  func_4(union U3  p_5, union U2  p_6, int32_t  p_7)
{ 
    int16_t l_10 = (-6L);
    union U7 l_35[5][2][4] = {{{{2UL},{0x6DAAFD55BE9843C6LL},{18446744073709551611UL},{2UL}},{{5UL},{0x6DAAFD55BE9843C6LL},{0UL},{18446744073709551607UL}}},{{{18446744073709551611UL},{0x6DAAFD55BE9843C6LL},{2UL},{5UL}},{{0x6DAAFD55BE9843C6LL},{18446744073709551615UL},{18446744073709551615UL},{0x6DAAFD55BE9843C6LL}}},{{{0UL},{5UL},{18446744073709551615UL},{18446744073709551607UL}},{{0x6DAAFD55BE9843C6LL},{18446744073709551611UL},{2UL},{18446744073709551611UL}}},{{{18446744073709551611UL},{18446744073709551615UL},{0UL},{18446744073709551611UL}},{{0UL},{18446744073709551611UL},{18446744073709551607UL},{18446744073709551607UL}}},{{{5UL},{5UL},{2UL},{0x6DAAFD55BE9843C6LL}},{{5UL},{18446744073709551615UL},{18446744073709551607UL},{5UL}}}};
    int i, j, k;
    p_7 = ((0x0549EC71CB27F08ELL <= (((l_10 | (safe_mul_func_uint8_t_u_u((safe_lshift_func_uint16_t_u_u((func_15(func_19((safe_rshift_func_int16_t_s_s(((g_38 = (g_37 ^= (safe_lshift_func_int8_t_s_s((safe_rshift_func_int8_t_s_s((safe_rshift_func_uint16_t_u_u((+(g_32--)), 15)), ((g_36 = l_35[0][1][2]) , (0x8B69L <= 65535UL)))), l_10)))) >= g_3), 8)), p_5, g_3), g_178, p_5.f0) || g_210[0][1][1]), p_6.f2)), 0x23L))) == l_35[0][1][2].f0) | p_5.f1)) < 0x20B6L);
    return g_153;
}



static uint16_t  func_15(union U6  p_16, int64_t  p_17, uint32_t  p_18)
{ 
    int8_t l_227 = 0xC2L;
    int32_t l_240[4] = {(-1L),(-1L),(-1L),(-1L)};
    int32_t l_264 = 0x0C6DE100L;
    int32_t l_274[2][4][1];
    int i, j, k;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 1; k++)
                l_274[i][j][k] = 0xF1047AB9L;
        }
    }
    for (g_38 = 0; (g_38 > (-20)); g_38--)
    { 
        int8_t l_229[3];
        int64_t l_235 = 0L;
        int32_t l_237 = 0xF8DD1E84L;
        int32_t l_241 = 0x3FDFE543L;
        int32_t l_242 = 0x527E9D26L;
        int32_t l_243 = 0x34020129L;
        int32_t l_244 = 0xD7954E52L;
        int32_t l_245 = 0xF43F8A5EL;
        int32_t l_246[1][1];
        int i, j;
        for (i = 0; i < 3; i++)
            l_229[i] = 1L;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 1; j++)
                l_246[i][j] = 9L;
        }
        for (g_157 = 0; (g_157 < 27); g_157 = safe_add_func_int16_t_s_s(g_157, 5))
        { 
            int64_t l_224 = 0x4357E9770F3F8A80LL;
            int32_t l_225 = 5L;
            int32_t l_228 = 0x2DF72C8AL;
            int32_t l_230 = 0xAC54307DL;
            int32_t l_233 = (-5L);
            int32_t l_236 = (-1L);
            int32_t l_238 = 1L;
            int32_t l_239[5][4] = {{1L,1L,(-1L),1L},{1L,(-2L),(-2L),1L},{(-2L),1L,(-2L),(-2L)},{1L,1L,(-1L),1L},{1L,(-2L),(-2L),1L}};
            int i, j;
            l_224 |= 0L;
            for (p_18 = 0; (p_18 <= 3); p_18 += 1)
            { 
                int64_t l_226 = 0L;
                int32_t l_231 = 0L;
                int32_t l_232 = 0x58BF42A5L;
                int32_t l_234[1];
                int32_t l_247 = 0xE796FE6EL;
                int i;
                for (i = 0; i < 1; i++)
                    l_234[i] = 0x93A02F16L;
                --g_248;
                if (g_163[0])
                    break;
            }
            l_245 = p_17;
        }
        for (g_36.f0 = 0; (g_36.f0 <= 3); g_36.f0 += 1)
        { 
            int i;
            for (g_195.f1 = 0; (g_195.f1 <= 0); g_195.f1 += 1)
            { 
                int i, j;
                return l_246[g_195.f1][g_195.f1];
            }
            if (g_160[g_36.f0])
                break;
        }
        for (l_242 = 8; (l_242 <= (-24)); l_242 = safe_sub_func_int64_t_s_s(l_242, 2))
        { 
            for (g_140 = 0; (g_140 <= 0); g_140 += 1)
            { 
                int i, j, k;
                l_246[g_140][g_140] &= g_210[g_140][(g_140 + 2)][(g_140 + 4)];
            }
            for (g_140 = 0; (g_140 <= 3); g_140 += 1)
            { 
                int32_t l_273 = 0x02679FF3L;
                int i;
                l_240[g_140] = ((l_264 ^= (safe_sub_func_uint64_t_u_u(((l_240[g_140] < (g_154 > ((safe_sub_func_uint64_t_u_u((((safe_sub_func_uint16_t_u_u((p_16.f0 < (safe_add_func_uint8_t_u_u((~((safe_add_func_uint64_t_u_u((l_241 ^= g_122), p_18)) | p_17)), g_160[1]))), 0xE22FL)) && g_62) == 0UL), l_246[0][0])) & p_17))) ^ p_18), 0xA50D88A30ADBCEDELL))) < g_145);
                l_274[1][1][0] = (safe_div_func_int32_t_s_s((((l_240[g_140] = (safe_div_func_int16_t_s_s((safe_mod_func_uint64_t_u_u((safe_add_func_uint64_t_u_u((l_243 & ((p_17 >= 1UL) == 0x58F2L)), 0x71FA4CEA8323AD6FLL)), l_240[g_140])), g_248))) != p_17) & l_273), 0x1156754FL));
                if (p_18)
                    break;
            }
        }
    }
    for (g_153.f0 = (-12); (g_153.f0 != 28); g_153.f0 = safe_add_func_uint16_t_u_u(g_153.f0, 5))
    { 
        int8_t l_285 = (-3L);
        l_285 = ((safe_mod_func_uint64_t_u_u((safe_add_func_int8_t_s_s((l_274[1][1][0] = (safe_rshift_func_int16_t_s_u(g_66[0][2], (safe_rshift_func_uint8_t_u_s((p_18 , (0UL > ((g_38 && (-2L)) || g_148))), l_240[3]))))), 0xBEL)), p_16.f0)) >= 1UL);
        if ((l_240[1] = 1L))
        { 
            return p_18;
        }
        else
        { 
            return g_62;
        }
    }
    return l_274[1][2][0];
}



static union U6  func_19(int32_t  p_20, const union U3  p_21, int32_t  p_22)
{ 
    int64_t l_54[1];
    int32_t l_61[2][5][5] = {{{(-2L),0xB80730A0L,0xB80730A0L,(-2L),0x8E04799CL},{(-2L),0x7CE2A770L,1L,1L,0x7CE2A770L},{0x8E04799CL,0xB80730A0L,1L,(-3L),(-3L)},{0xB80730A0L,0x8E04799CL,0xB80730A0L,1L,(-3L)},{0x7CE2A770L,(-2L),(-3L),(-2L),0x7CE2A770L}},{{0xB80730A0L,(-2L),0x8E04799CL,0x7CE2A770L,0x8E04799CL},{0x8E04799CL,0x8E04799CL,(-3L),0x7CE2A770L,0x9B109540L},{(-2L),0xB80730A0L,0xB80730A0L,(-2L),0x8E04799CL},{(-2L),0x7CE2A770L,1L,1L,0x7CE2A770L},{0x8E04799CL,0xB80730A0L,1L,(-3L),(-3L)}}};
    int32_t l_63 = 0xB25383EBL;
    uint16_t l_138 = 0x5F11L;
    union U3 l_199 = {1L};
    union U6 l_219 = {0x81L};
    int i, j, k;
    for (i = 0; i < 1; i++)
        l_54[i] = 0L;
    if ((l_63 |= (((((0xC5F514FCL == (((g_62 = (safe_sub_func_uint16_t_u_u((safe_sub_func_uint64_t_u_u((g_36.f0 ^= (safe_mod_func_uint8_t_u_u((((safe_rshift_func_int8_t_s_u((+(safe_sub_func_uint32_t_u_u((safe_rshift_func_uint8_t_u_s((safe_mod_func_int32_t_s_s(l_54[0], (safe_sub_func_uint32_t_u_u((g_32 = l_54[0]), (l_61[0][0][0] = (safe_lshift_func_uint8_t_u_s((safe_rshift_func_uint8_t_u_u(((0x040FL || (-5L)) | g_37), l_54[0])), 0))))))), g_38)), p_21.f1))), 4)) <= g_3) & 4294967294UL), 255UL))), p_21.f0)), l_54[0]))) ^ g_3) & g_3)) | 0x4447L) | p_20) | 3L) , p_21.f1)))
    { 
        int8_t l_64 = 1L;
        int32_t l_65[3];
        int32_t l_118 = 0xBBCF58CCL;
        union U2 l_155 = {6UL};
        int8_t l_162 = 9L;
        int8_t l_164 = 0xB9L;
        union U6 l_204 = {0x13L};
        int i;
        for (i = 0; i < 3; i++)
            l_65[i] = (-3L);
        if ((p_21.f0 || (--g_66[3][0])))
        { 
            struct S1 l_73 = {-1L,0xDA348D5C8807C708LL};
            union U6 l_91 = {255UL};
            uint32_t l_119 = 18446744073709551610UL;
            if ((safe_lshift_func_uint8_t_u_s((safe_mul_func_int8_t_s_s(((l_73 , ((safe_mul_func_uint8_t_u_u((p_22 != (safe_unary_minus_func_uint16_t_u(l_63))), (safe_add_func_int8_t_s_s((safe_div_func_uint64_t_u_u((safe_sub_func_int32_t_s_s((safe_add_func_int16_t_s_s((g_37 = (safe_mul_func_uint8_t_u_u((safe_div_func_uint8_t_u_u(p_22, g_66[2][3])), 0x7CL))), g_32)), 0x17E5C3E0L)), p_21.f1)), 0x7DL)))) <= 0xC98CL)) && p_20), (-1L))), 6)))
            { 
                uint16_t l_92[3];
                int32_t l_95[2][3][4];
                int i, j, k;
                for (i = 0; i < 3; i++)
                    l_92[i] = 65535UL;
                for (i = 0; i < 2; i++)
                {
                    for (j = 0; j < 3; j++)
                    {
                        for (k = 0; k < 4; k++)
                            l_95[i][j][k] = 0x51F89566L;
                    }
                }
                l_95[1][2][0] = (p_21.f0 & ((safe_mod_func_uint32_t_u_u((l_91 , ((l_92[2] < ((safe_div_func_int32_t_s_s(l_73.f0, l_63)) && l_65[2])) == g_66[3][0])), p_21.f1)) ^ l_92[1]));
            }
            else
            { 
                int32_t l_120[5][1][5] = {{{0xEC065BCAL,0x9F23B65CL,0x9F23B65CL,0xEC065BCAL,0x9F23B65CL}},{{0xEC065BCAL,0xEC065BCAL,1L,0xEC065BCAL,0xEC065BCAL}},{{0x9F23B65CL,0xEC065BCAL,0x9F23B65CL,0x9F23B65CL,0xEC065BCAL}},{{0xEC065BCAL,0x9F23B65CL,0x9F23B65CL,0xEC065BCAL,0x9F23B65CL}},{{0xEC065BCAL,0xEC065BCAL,1L,0xEC065BCAL,0xEC065BCAL}}};
                int32_t l_121 = 0x3B40187AL;
                int i, j, k;
                l_121 = (safe_sub_func_uint64_t_u_u((safe_rshift_func_int8_t_s_u((safe_rshift_func_int8_t_s_s((((safe_div_func_int8_t_s_s((safe_mul_func_uint16_t_u_u((((l_119 = ((((l_118 = (g_37 < (g_3 < (l_65[0] = (((safe_rshift_func_int8_t_s_u(g_3, 2)) < (safe_mul_func_int64_t_s_s((safe_add_func_int8_t_s_s(((safe_div_func_int8_t_s_s(((safe_lshift_func_uint8_t_u_u(g_36.f0, g_3)) <= 0xC26CL), l_64)) < 0x9DC45D42L), l_61[0][0][0])), 0UL))) > 0xFB56L))))) > l_91.f0) , p_21.f0) , 4L)) >= l_61[0][0][0]) < l_120[0][0][2]), 1UL)), g_37)) >= 0xD1C1L) <= g_62), 1)), 2)), l_91.f0));
                l_61[0][0][0] = (g_122 = 1L);
            }
            l_73.f0 = g_3;
        }
        else
        { 
            int16_t l_139 = 0L;
            for (g_32 = 19; (g_32 < 27); ++g_32)
            { 
                l_65[0] = (safe_sub_func_int16_t_s_s((safe_add_func_uint8_t_u_u((safe_rshift_func_uint8_t_u_s((!(((safe_mul_func_uint16_t_u_u((((safe_mul_func_int16_t_s_s((((p_21.f0 ^ (g_36.f0 = ((p_22 && ((l_139 = ((safe_lshift_func_uint16_t_u_u(l_64, l_138)) <= g_122)) == 0x92D6L)) <= 0UL))) != l_54[0]) , 0x3478L), g_66[0][4])) <= g_66[3][1]) >= p_22), g_140)) , g_32) , p_21.f0)), 2)), g_38)), g_3));
                g_148 = ((((safe_mod_func_uint64_t_u_u(((safe_rshift_func_int8_t_s_u((g_145 |= 0xB9L), (((p_20 > (safe_mul_func_int8_t_s_s((l_139 ^ (0xB24D1FF7FB00A7E6LL && p_20)), g_37))) , g_140) > 0x04DD1B2B73F0FF8DLL))) ^ g_36.f0), p_21.f0)) == p_21.f0) & 1UL) ^ p_20);
            }
            g_154 &= (safe_sub_func_int64_t_s_s((((((safe_mul_func_int16_t_s_s(l_54[0], p_21.f1)) >= (l_61[0][0][0] != l_139)) ^ (-1L)) , g_153) , g_153.f2), g_32));
        }
        if (g_32)
        { 
            int16_t l_156[2][5] = {{0L,0L,0L,0L,0L},{0L,0L,0L,0L,0L}};
            int32_t l_159[2];
            int8_t l_165 = 2L;
            uint16_t l_166 = 65533UL;
            int i, j;
            for (i = 0; i < 2; i++)
                l_159[i] = 0x35245E67L;
            g_158 = ((((l_155 = l_155) , (((g_153.f3 &= (p_21.f1 && 0UL)) < ((l_156[1][2] , l_61[0][0][0]) > g_157)) && p_21.f0)) <= 0UL) != p_21.f0);
            l_166++;
            g_163[1] &= g_160[2];
        }
        else
        { 
            uint32_t l_179 = 0x32469D7EL;
            uint64_t l_180[4][2] = {{1UL,1UL},{1UL,1UL},{1UL,1UL},{1UL,1UL}};
            struct S0 l_183 = {0x8DAE2F31L,249UL,18446744073709551608UL};
            int32_t l_190[1][1][3];
            int i, j, k;
            for (i = 0; i < 1; i++)
            {
                for (j = 0; j < 1; j++)
                {
                    for (k = 0; k < 3; k++)
                        l_190[i][j][k] = 0x0CDFC88FL;
                }
            }
            l_61[1][2][1] |= ((safe_rshift_func_int16_t_s_u((safe_lshift_func_int8_t_s_s((l_63 = ((((((safe_rshift_func_int8_t_s_s(p_21.f1, 6)) & ((!(((safe_div_func_uint32_t_u_u((((0x4877L && (p_21 , l_155.f1)) == g_178) < l_179), g_3)) > l_180[1][0]) , g_160[0])) ^ p_21.f0)) | 0x1129L) ^ l_164) ^ g_154) , p_22)), 5)), g_153.f3)) & 0x103B0344L);
            for (g_154 = (-11); (g_154 >= (-9)); g_154++)
            { 
                const uint64_t l_198 = 18446744073709551614UL;
                l_61[0][3][0] = (p_21.f1 , (l_183 , (-10L)));
                g_163[0] = (safe_mul_func_uint8_t_u_u(p_21.f1, p_22));
                g_163[1] = ((safe_div_func_int16_t_s_s((safe_mod_func_uint32_t_u_u((++g_157), (safe_mul_func_int8_t_s_s((((g_195 , (((((((246UL | (l_65[0] &= p_20)) | ((safe_lshift_func_int8_t_s_u((p_21.f1 , 3L), p_21.f0)) == 0x4551C73A8097FD11LL)) | l_61[0][2][1]) || 0x02BEFAAEL) && 0xDAL) ^ p_21.f1) & l_162)) != g_153.f0) <= p_22), p_22)))), l_198)) ^ g_140);
            }
        }
        l_118 = (l_199 , (safe_div_func_int64_t_s_s(((p_21.f1 | ((safe_sub_func_int32_t_s_s((((l_204 , l_54[0]) == l_54[0]) < l_155.f2), 0x15A9C58CL)) ^ g_178)) , (-1L)), g_160[2])));
    }
    else
    { 
        uint16_t l_207 = 0x8834L;
        int32_t l_211 = 0xF7A47DF5L;
        int32_t l_212 = 9L;
        l_211 = ((l_212 ^= (safe_lshift_func_uint8_t_u_u((p_20 > (((l_207 = l_199.f0) != ((safe_sub_func_int64_t_s_s((g_158 , ((g_210[0][0][3] ^= g_153.f1) , l_138)), (-10L))) > l_211)) ^ l_211)), l_54[0]))) , 0x000E2D96L);
    }
    l_61[0][0][0] = ((l_63 &= (safe_rshift_func_uint8_t_u_s((safe_sub_func_uint32_t_u_u((safe_mul_func_uint8_t_u_u(1UL, 6L)), (g_122 ^ 0x830B3060L))), 1))) || p_20);
    return l_219;
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_3, "g_3", print_hash_value);
    transparent_crc(g_32, "g_32", print_hash_value);
    transparent_crc(g_36.f0, "g_36.f0", print_hash_value);
    transparent_crc(g_37, "g_37", print_hash_value);
    transparent_crc(g_38, "g_38", print_hash_value);
    transparent_crc(g_62, "g_62", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 5; j++)
        {
            transparent_crc(g_66[i][j], "g_66[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_122, "g_122", print_hash_value);
    transparent_crc(g_140, "g_140", print_hash_value);
    transparent_crc(g_145, "g_145", print_hash_value);
    transparent_crc(g_148, "g_148", print_hash_value);
    transparent_crc(g_153.f1, "g_153.f1", print_hash_value);
    transparent_crc(g_153.f3, "g_153.f3", print_hash_value);
    transparent_crc(g_154, "g_154", print_hash_value);
    transparent_crc(g_157, "g_157", print_hash_value);
    transparent_crc(g_158, "g_158", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_160[i], "g_160[i]", print_hash_value);

    }
    transparent_crc(g_161, "g_161", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_163[i], "g_163[i]", print_hash_value);

    }
    transparent_crc(g_178, "g_178", print_hash_value);
    transparent_crc(g_195.f0, "g_195.f0", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 5; k++)
            {
                transparent_crc(g_210[i][j][k], "g_210[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_248, "g_248", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
