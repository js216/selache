// SPDX-License-Identifier: MIT
// cctest_csmith_34829755.c --- cctest case csmith_34829755 (csmith seed 880973653)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x193d2ee0 */

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

// Options:   -s 880973653 -o /tmp/csmith_gen_44hkm57l/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


#pragma pack(push)
#pragma pack(1)
struct S0 {
   uint8_t  f0;
   const int16_t  f1;
   uint8_t  f2;
   uint32_t  f3;
};
#pragma pack(pop)

union U1 {
   int64_t  f0;
   const uint32_t  f1;
   int32_t  f2;
   const int32_t  f3;
};


static int32_t g_14[4] = {5L,5L,5L,5L};
static uint16_t g_58 = 0UL;
static int64_t g_82 = 6L;
static uint64_t g_90 = 1UL;
static int8_t g_95 = (-1L);
static uint32_t g_115[1] = {0x440229A8L};
static uint64_t g_144 = 0UL;
static int16_t g_145 = 0xF89DL;
static uint8_t g_146 = 0xCBL;
static uint8_t g_164 = 0x6EL;
static int16_t g_166[2] = {0x4431L,0x4431L};
static uint32_t g_168 = 4294967295UL;
static uint16_t g_191 = 0UL;
static uint8_t g_201[5] = {0xF4L,0xF4L,0xF4L,0xF4L,0xF4L};
static uint16_t g_202 = 0xE68BL;
static struct S0 g_206[3] = {{252UL,0x5E77L,0xDAL,7UL},{252UL,0x5E77L,0xDAL,7UL},{252UL,0x5E77L,0xDAL,7UL}};
static uint32_t g_214 = 18446744073709551613UL;
static uint8_t g_215 = 0x48L;
static int32_t g_222 = (-3L);
static int8_t g_226[1][1][3] = {{{1L,1L,1L}}};
static int32_t g_243 = 0xD762BCF6L;
static uint8_t g_249 = 0UL;
static uint8_t g_254 = 3UL;
static uint32_t g_280 = 18446744073709551609UL;



static const uint8_t  func_1(void);
static uint16_t  func_2(uint8_t  p_3, uint32_t  p_4, const int64_t  p_5);
static const uint32_t  func_31(int32_t  p_32, const int64_t  p_33, uint8_t  p_34, uint8_t  p_35, uint32_t  p_36);
static int16_t  func_39(struct S0  p_40, int8_t  p_41, uint64_t  p_42);




static const uint8_t  func_1(void)
{ 
    uint16_t l_6 = 1UL;
    int32_t l_15 = 0x9CD329B3L;
    int32_t l_225[4];
    int32_t l_253 = (-8L);
    int32_t l_277 = (-1L);
    int32_t l_278 = (-2L);
    int32_t l_279[1];
    int i;
    for (i = 0; i < 4; i++)
        l_225[i] = (-5L);
    for (i = 0; i < 1; i++)
        l_279[i] = 0x5D2ADA5BL;
    if ((func_2(l_6, ((safe_add_func_int16_t_s_s((1L ^ l_6), (((l_15 = (safe_unary_minus_func_int8_t_s((safe_add_func_int32_t_s_s(((safe_rshift_func_uint8_t_u_s(((l_6 >= g_14[1]) , g_14[1]), 3)) >= g_14[1]), 0x29F58382L))))) , g_14[1]) , l_6))) < g_14[1]), l_6) > 0x1E83L))
    { 
        int64_t l_205 = 0x117A2536C65100A8LL;
        int32_t l_213[5][1];
        int i, j;
        for (i = 0; i < 5; i++)
        {
            for (j = 0; j < 1; j++)
                l_213[i][j] = 5L;
        }
        g_215 = (safe_rshift_func_uint8_t_u_s((l_205 & ((g_206[1] , ((safe_mod_func_uint16_t_u_u((safe_rshift_func_int16_t_s_u(((251UL >= (safe_add_func_int32_t_s_s((g_214 ^= (((l_205 <= l_6) || l_213[4][0]) == g_201[3])), l_6))) != g_146), 5)), g_145)) != l_213[4][0])) ^ 0xA8EEL)), 7));
    }
    else
    { 
        uint64_t l_221[4] = {18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL};
        int i;
        for (g_145 = 3; (g_145 >= 0); g_145 -= 1)
        { 
            int i;
            g_222 = (safe_div_func_int64_t_s_s(7L, ((g_201[(g_145 + 1)] >= (((safe_rshift_func_uint16_t_u_u(((~(((((g_201[(g_145 + 1)] ^ ((0UL & 0xDAL) , g_14[g_145])) , 0x12EB8F5FL) < 0x98A8AD46L) | g_58) && g_206[1].f3)) <= g_191), 5)) > l_221[0]) > g_82)) || 4294967295UL)));
        }
    }
    if (((l_15 || ((1L || g_82) != ((g_226[0][0][1] = ((l_225[3] = 0xA066L) > g_58)) && (-10L)))) || 0L))
    { 
        int16_t l_229 = 1L;
        int32_t l_252 = 1L;
        for (g_215 = 0; (g_215 != 27); g_215 = safe_add_func_uint64_t_u_u(g_215, 9))
        { 
            int64_t l_232 = 8L;
            uint32_t l_242 = 0xC12EE7D5L;
            uint16_t l_244 = 1UL;
            if (((((7UL > l_229) < ((safe_lshift_func_uint16_t_u_s(((l_232 <= (safe_rshift_func_int16_t_s_u(((~(((safe_lshift_func_int16_t_s_u((safe_mod_func_int8_t_s_s((safe_rshift_func_int8_t_s_s(((l_242 | l_6) <= l_15), 2)), g_168)), 10)) && g_226[0][0][1]) && g_166[0])) , g_95), g_206[1].f0))) > 6L), 0)) & (-10L))) , l_229) && l_232))
            { 
                if (g_144)
                    break;
                g_222 |= g_166[1];
                if (l_225[3])
                    break;
            }
            else
            { 
                ++l_244;
            }
            if ((safe_mod_func_int8_t_s_s((g_249 == g_226[0][0][0]), (safe_rshift_func_uint16_t_u_s(0x4DE3L, g_95)))))
            { 
                --g_254;
            }
            else
            { 
                uint16_t l_262 = 0x8896L;
                g_222 |= (((safe_add_func_int64_t_s_s(0xE4F83CC13FCDF06ELL, (safe_mul_func_int16_t_s_s((((l_252 = ((g_166[0] |= (safe_unary_minus_func_int8_t_s((-1L)))) ^ (((l_232 | g_206[1].f1) != l_242) || l_253))) <= l_253) != l_262), g_164)))) > l_262) , g_166[0]);
            }
            if (l_252)
                break;
        }
        for (l_229 = 0; (l_229 >= 0); l_229 -= 1)
        { 
            int32_t l_263 = 0x21B15B01L;
            int i;
            l_263 = g_115[l_229];
        }
    }
    else
    { 
        const uint8_t l_276 = 0x4CL;
        l_279[0] = (g_166[0] == (l_278 |= (g_145 = (l_277 = (((safe_rshift_func_uint16_t_u_s(((((safe_mod_func_int16_t_s_s(g_206[1].f1, (l_253 = ((safe_mul_func_int8_t_s_s(((l_15 = (((safe_add_func_uint8_t_u_u((safe_mod_func_uint64_t_u_u(0xC08783E8B10A065DLL, (safe_add_func_int32_t_s_s(g_115[0], 5L)))), l_276)) , g_243) , l_15)) != g_206[1].f2), (-4L))) && g_249)))) , g_168) , l_15) < l_225[3]), 12)) <= g_166[0]) && g_144)))));
    }
    ++g_280;
    return g_95;
}



static uint16_t  func_2(uint8_t  p_3, uint32_t  p_4, const int64_t  p_5)
{ 
    uint32_t l_16 = 4294967287UL;
    int32_t l_19 = 0xB16AAC89L;
    struct S0 l_43 = {0x26L,-1L,255UL,18446744073709551615UL};
    int32_t l_200 = (-8L);
    l_19 = ((++l_16) == g_14[0]);
    if ((g_14[1] ^ l_19))
    { 
        int8_t l_27[2][4];
        int i, j;
        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 4; j++)
                l_27[i][j] = 0xE3L;
        }
        for (p_4 = 0; (p_4 != 34); ++p_4)
        { 
            uint32_t l_26 = 0xAD64DE8CL;
            for (p_3 = 0; (p_3 > 1); p_3 = safe_add_func_int8_t_s_s(p_3, 3))
            { 
                return l_19;
            }
            for (l_19 = 21; (l_19 == (-1)); l_19 = safe_sub_func_int32_t_s_s(l_19, 3))
            { 
                l_27[0][2] &= l_26;
            }
        }
    }
    else
    { 
        uint32_t l_28 = 0x11BD77DFL;
        int32_t l_197 = 0xC713BC38L;
        l_19 &= l_28;
        if ((safe_mul_func_uint16_t_u_u(0x2406L, (func_31(g_14[1], ((((safe_lshift_func_int8_t_s_u((func_39(l_43, g_14[3], p_3) != g_144), g_14[1])) & 1UL) && (-1L)) & l_28), p_5, l_28, g_14[2]) , p_3))))
        { 
            int32_t l_173 = 0xD07B9CB3L;
            l_173 = ((0xC7936A65L <= ((0xDDL != ((safe_mod_func_uint64_t_u_u(((((-10L) <= p_3) || p_5) == l_28), l_173)) == 0xB771L)) & l_16)) | 0x2CL);
        }
        else
        { 
            int8_t l_184 = 0x35L;
            g_191 = ((safe_mul_func_uint16_t_u_u((safe_add_func_int64_t_s_s((((((safe_mul_func_int16_t_s_s(0xB2C6L, ((safe_mod_func_uint32_t_u_u(4294967291UL, (l_184 | (safe_sub_func_int32_t_s_s((safe_sub_func_uint64_t_u_u(((safe_sub_func_uint32_t_u_u(((p_4 < 18446744073709551608UL) > g_146), 0xA1AE9AB5L)) >= g_82), 1UL)), 1UL))))) && l_28))) < 0x6F32L) , p_4) || 0L) , l_43.f1), 18446744073709551612UL)), 1UL)) > 18446744073709551610UL);
            g_201[3] = ((safe_lshift_func_int16_t_s_u((l_200 = (g_145 = (((!p_5) & (0x0F4BA2F9L && (safe_div_func_uint64_t_u_u(((l_197 && ((((l_19 = (safe_add_func_uint8_t_u_u(p_4, p_5))) != p_5) >= g_145) <= 8UL)) <= p_5), (-5L))))) > 4UL))), g_95)) || l_184);
        }
        for (l_43.f3 = 0; l_43.f3 < 1; l_43.f3 += 1)
        {
            g_115[l_43.f3] = 3UL;
        }
    }
    g_202 = g_201[2];
    return g_166[0];
}



static const uint32_t  func_31(int32_t  p_32, const int64_t  p_33, uint8_t  p_34, uint8_t  p_35, uint32_t  p_36)
{ 
    int32_t l_151 = 0x8C66A0E2L;
    int32_t l_152 = 0x79DC8ED4L;
    int32_t l_167 = 0x300F0309L;
    l_151 = g_144;
    l_152 = 0xA1337086L;
    for (g_58 = 25; (g_58 != 34); g_58 = safe_add_func_uint32_t_u_u(g_58, 1))
    { 
        int16_t l_163[2][4];
        int32_t l_165 = 0xABFE3370L;
        int i, j;
        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 4; j++)
                l_163[i][j] = (-4L);
        }
        for (p_34 = 0; (p_34 <= 3); p_34 += 1)
        { 
            int i;
            return g_14[p_34];
        }
        g_164 ^= ((p_35 != ((l_163[0][2] = (+(safe_mul_func_uint8_t_u_u((safe_rshift_func_uint8_t_u_u((!0xC4L), 4)), l_152)))) >= g_58)) | p_33);
        g_168--;
    }
    return g_164;
}



static int16_t  func_39(struct S0  p_40, int8_t  p_41, uint64_t  p_42)
{ 
    int8_t l_47 = (-1L);
    union U1 l_57 = {-1L};
    uint16_t l_92 = 2UL;
    int32_t l_114 = 3L;
    if ((safe_add_func_uint16_t_u_u(((!((l_47 != ((safe_div_func_uint64_t_u_u((((g_14[2] | (((1L != ((safe_sub_func_int32_t_s_s(g_14[1], 0x7592E0C8L)) , g_14[3])) <= l_47) ^ 0xE3L)) <= 255UL) , g_14[1]), g_14[3])) | 0x9FC22F74L)) > g_14[1])) , 0UL), 0xC590L)))
    { 
        int16_t l_61 = 0x0119L;
        int32_t l_62 = 0L;
        if ((safe_div_func_int32_t_s_s((~(((l_62 = (safe_add_func_uint16_t_u_u((l_57 , (((g_58 = g_14[1]) ^ (safe_lshift_func_uint16_t_u_s(((p_42 , ((p_40.f0 , 0UL) , g_14[0])) , 2UL), l_61))) | g_14[2])), g_14[2]))) | l_61) , l_62)), p_40.f1)))
        { 
            uint64_t l_67 = 0x592B025F3D189EEBLL;
            int64_t l_68 = 0x07F4C733F7CFEB45LL;
            int32_t l_96 = 0x3A2D95A0L;
            l_57.f2 ^= p_40.f3;
            if ((safe_add_func_uint64_t_u_u((safe_sub_func_uint16_t_u_u((((p_41 ^ (6UL | 0x6BL)) & p_40.f2) | l_62), l_67)), l_68)))
            { 
                const uint8_t l_85 = 0x6DL;
                int32_t l_89[3];
                int i;
                for (i = 0; i < 3; i++)
                    l_89[i] = 0xA1D1A269L;
                g_82 &= ((((((safe_mod_func_int64_t_s_s((l_57.f2 = (safe_lshift_func_uint16_t_u_s(((safe_rshift_func_uint16_t_u_u(g_14[3], 13)) < l_68), (~(safe_mul_func_uint16_t_u_u((safe_mul_func_uint16_t_u_u((safe_lshift_func_uint8_t_u_s(p_42, (((0x2B40L ^ l_62) != p_42) & p_40.f3))), 9L)), 0L)))))), g_14[1])) > 1UL) , 0x38F49DA2L) > g_14[2]) ^ 1UL) && 0xFEA3L);
                g_90 = ((safe_add_func_uint16_t_u_u(l_85, (+(l_89[2] = (p_40.f0 & (((0x9C48247AD075F43CLL && (safe_rshift_func_int16_t_s_u((l_57.f2 ^ 65528UL), 9))) == (-2L)) , 65530UL)))))) >= 0xDD0FL);
                l_57.f2 = (((3L > ((l_61 > (4294967295UL && 0UL)) && g_58)) <= l_85) > 0xB5F7L);
            }
            else
            { 
                l_96 = ((~l_92) ^ ((((g_58 = g_90) , g_14[3]) || (g_95 = ((safe_sub_func_uint32_t_u_u(l_61, 0x04CED5A6L)) == l_67))) > 0xA94CD535L));
                return p_40.f0;
            }
            for (g_82 = 0; (g_82 >= 25); g_82++)
            { 
                uint16_t l_113 = 0x4102L;
                g_115[0] = (((safe_div_func_int64_t_s_s((l_61 & ((l_114 &= (0x1AAC1EF8B30EBBFALL > ((++p_42) , (safe_lshift_func_int16_t_s_s((safe_add_func_uint16_t_u_u((l_62 ^= (safe_mul_func_int16_t_s_s((safe_mul_func_uint8_t_u_u(p_40.f3, ((((safe_div_func_uint32_t_u_u(0x68063CD6L, l_113)) | l_113) < p_40.f1) , l_57.f3))), l_96))), l_61)), l_68))))) | l_67)), p_40.f3)) , 0UL) != g_14[1]);
                l_62 = ((l_61 & (g_58 & (safe_mod_func_int64_t_s_s(((safe_sub_func_uint16_t_u_u(((((0x86AEC8E1L & l_113) | (-6L)) , g_82) == 0x82727C90L), p_42)) < p_40.f1), 1L)))) < l_47);
                if (l_92)
                    break;
            }
        }
        else
        { 
            uint16_t l_128 = 0x7D9AL;
            int32_t l_134 = 0x4C452B06L;
lbl_137:
            l_114 |= ((safe_lshift_func_int8_t_s_u(((safe_mod_func_int16_t_s_s((l_134 &= (safe_rshift_func_uint8_t_u_u((((safe_rshift_func_int8_t_s_s((l_128 >= g_90), 7)) == p_41) ^ (safe_add_func_uint64_t_u_u(((!(safe_mod_func_int16_t_s_s((g_82 <= l_128), p_40.f0))) > l_92), l_128))), g_82))), g_115[0])) | g_14[1]), l_62)) , g_82);
            for (g_90 = 0; (g_90 == 55); g_90 = safe_add_func_uint32_t_u_u(g_90, 2))
            { 
                if (l_57.f1)
                    goto lbl_137;
                return g_90;
            }
            for (l_61 = 0; (l_61 <= 0); l_61 += 1)
            { 
                int i;
                l_134 = ((0x9038C886L && (((g_115[l_61] || ((safe_rshift_func_int16_t_s_s((0x04801D3CL < ((safe_add_func_int16_t_s_s(((safe_div_func_int32_t_s_s(g_115[l_61], g_115[l_61])) , p_41), 4L)) != 0x19FA1A8EB3B5FD34LL)), g_144)) < 4UL)) , p_42) >= 0x1E0EL)) && p_40.f1);
                return l_61;
            }
        }
        g_145 = g_90;
    }
    else
    { 
        g_146--;
    }
    l_57.f2 = p_40.f0;
    for (p_40.f2 = 8; (p_40.f2 == 24); ++p_40.f2)
    { 
        if (p_40.f3)
            break;
    }
    return p_40.f3;
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_14[i], "g_14[i]", print_hash_value);

    }
    transparent_crc(g_58, "g_58", print_hash_value);
    transparent_crc(g_82, "g_82", print_hash_value);
    transparent_crc(g_90, "g_90", print_hash_value);
    transparent_crc(g_95, "g_95", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_115[i], "g_115[i]", print_hash_value);

    }
    transparent_crc(g_144, "g_144", print_hash_value);
    transparent_crc(g_145, "g_145", print_hash_value);
    transparent_crc(g_146, "g_146", print_hash_value);
    transparent_crc(g_164, "g_164", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_166[i], "g_166[i]", print_hash_value);

    }
    transparent_crc(g_168, "g_168", print_hash_value);
    transparent_crc(g_191, "g_191", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_201[i], "g_201[i]", print_hash_value);

    }
    transparent_crc(g_202, "g_202", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_206[i].f0, "g_206[i].f0", print_hash_value);
        transparent_crc(g_206[i].f1, "g_206[i].f1", print_hash_value);
        transparent_crc(g_206[i].f2, "g_206[i].f2", print_hash_value);
        transparent_crc(g_206[i].f3, "g_206[i].f3", print_hash_value);

    }
    transparent_crc(g_214, "g_214", print_hash_value);
    transparent_crc(g_215, "g_215", print_hash_value);
    transparent_crc(g_222, "g_222", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 3; k++)
            {
                transparent_crc(g_226[i][j][k], "g_226[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_243, "g_243", print_hash_value);
    transparent_crc(g_249, "g_249", print_hash_value);
    transparent_crc(g_254, "g_254", print_hash_value);
    transparent_crc(g_280, "g_280", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
